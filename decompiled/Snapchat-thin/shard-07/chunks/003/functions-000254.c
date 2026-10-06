/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054a7b14; end: 1054a7d0f;  */

void FUN_1054a7b14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0 && lVar2 == 0) {
      puStack_a8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x3032000000;
      uStack_98 = 0x1054a7d20;
      uStack_90 = 0x1054a7d30;
      uStack_88 = 0;
      uVar3 = *(undefined8 *)(lVar1 + 8);
      func_0x00010bf12ee0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar6);
      uVar5 = uVar3;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puStack_a8[5];
      puStack_a8[5] = uVar5;
      _objc_release(uVar4);
      _objc_release(uVar3);
      func_0x00010bf1a3e0(puStack_a8[5]);
      _objc_release(uVar6);
      __Block_object_dispose(&uStack_b0,8);
      uVar5 = uStack_88;
    }
    else {
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1054a7d10;
      puStack_68 = &UNK_11084aaa8;
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uStack_58 = uVar5;
      _objc_retain(lVar2);
      lStack_60 = lVar2;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_80);
      _objc_release(lStack_60);
      uVar5 = uStack_58;
    }
    _objc_release(uVar5);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1054a7d10; end: 1054a7d37;  */

void FUN_1054a7d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054a7d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1054a7d38; end: 1054a7d8f;  */

void FUN_1054a7d38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(param_2);
  func_0x00010bf86d40(uVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054a7d90; end: 1054a7ec7; -[SCBitmojiUserLinkingServicesImpl unlinkBitmojiWithCompletion:] */

void FUN_1054a7d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9770;
  _objc_alloc(PTR_PTR_1126b9770);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058f80(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b9778;
  _objc_alloc_init(PTR_PTR_1126b9778);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c2809a0(puVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054a7ec8; end: 1054a7fab;  */

void FUN_1054a7ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1054a7fac;
  puStack_58 = &UNK_110857fd0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = param_3;
  _objc_retain(uVar1);
  uStack_48 = param_2;
  uStack_40 = uVar1;
  _objc_retain(param_2);
  _objc_retain(param_3);
  func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1054a7fac; end: 1054a8017;  */

void FUN_1054a7fac(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      func_0x00010c283ac0(*(undefined8 *)(lVar1 + 8));
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) goto LAB_1054a8008;
      pcVar4 = *(code **)(lVar2 + 0x10);
      uVar3 = 1;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x30);
      if (lVar2 == 0) goto LAB_1054a8008;
      pcVar4 = *(code **)(lVar2 + 0x10);
      uVar3 = 0;
    }
    (*pcVar4)(lVar2,uVar3);
  }
LAB_1054a8008:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054a8018; end: 1054a8113; -[SCBitmojiUserLinkingServicesImpl bitmojiLinkageDidStart] */

void FUN_1054a8018(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(param_1 + 0x38) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2a6420();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    func_0x00010bf1a3e0(*(undefined8 *)(param_1 + 0x38));
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1054a8114; end: 1054a813f;  */

void FUN_1054a8114(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054a8140; end: 1054a81a3; -[SCBitmojiUserLinkingServicesImpl _syncUserInfo] */

void FUN_1054a8140(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb5060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054a81a4; end: 1054a829b; -[SCBitmojiUserLinkingServicesImpl .cxx_destruct] */

void FUN_1054a81a4(long param_1)

{
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



/* Entry: 1054a829c; end: 1054a8427; -[SCBitmojiUserServicesEntryPoint _bitmojiUserLinkingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054a829c(long param_1,undefined8 param_2)

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
  
  puVar1 = PTR_PTR_1126b9788;
  _objc_alloc(PTR_PTR_1126b9788);
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + _DAT_11272403c;
    _objc_loadWeakRetained(lVar8);
  }
  lVar2 = lVar8;
  func_0x00010bf13100(lVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272404c;
    _objc_loadWeakRetained(lVar9);
  }
  lVar4 = lVar9;
  func_0x00010c292880(lVar9);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112724040;
    _objc_loadWeakRetained(lVar10);
  }
  lVar5 = lVar10;
  func_0x00010bf07a00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_112724050;
    _objc_loadWeakRetained(lVar6);
  }
  lVar7 = lVar6;
  func_0x00010bfcfa00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7e60(puVar1,param_2,lVar3,lVar4,lVar5,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a8428; end: 1054a84f3; -[SCBitmojiUserServicesEntryPoint _bitmojiUserLinkingContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054a8428(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b9790;
  _objc_alloc(PTR_PTR_1126b9790);
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112724048;
    _objc_loadWeakRetained(lVar4);
  }
  lVar2 = lVar4;
  func_0x00010bf89340(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112724038;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f8c0(puVar1,param_2,lVar2,lVar3);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(lVar2);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a84f4; end: 1054a8577; -[SCBitmojiUserServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054a84f4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724034,0);
  _objc_destroyWeak(param_1 + _DAT_112724050);
  _objc_destroyWeak(param_1 + _DAT_11272404c);
  _objc_destroyWeak(param_1 + _DAT_112724048);
  _objc_destroyWeak(param_1 + _DAT_112724044);
  _objc_destroyWeak(param_1 + _DAT_112724040);
  _objc_destroyWeak(param_1 + _DAT_11272403c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724038);
  return;
}



/* Entry: 1054a8578; end: 1054a85eb; -[UNISCBitmojiAccounts initWithUnifiedGrpcService:] */

undefined1 * FUN_1054a8578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8778;
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



/* Entry: 1054a85ec; end: 1054a86cf; -[UNISCBitmojiAccounts unlinkAccountWithRequest:callOptionsBuilder:handler:] */

void FUN_1054a85ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9798;
  _objc_opt_class(PTR_PTR_1126b9798);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2db8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054a86d0; end: 1054a86db; -[UNISCBitmojiAccounts .cxx_destruct] */

void FUN_1054a86d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054a86dc; end: 1054a8743; +[SCBitmojiUnlinkAccountRequest descriptor] */

void FUN_1054a86dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c400,
                        &PTR____CFConstantStringClassReference_110de2dd8,&PTR_DAT_1130dc7b8,0,0,4,
                        0x1c);
    puRam00000001136bc228 = puVar1;
  }
  return;
}



/* Entry: 1054a8744; end: 1054a87ab; +[SCBitmojiUnlinkAccountResponse descriptor] */

void FUN_1054a8744(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c450,
                        &PTR____CFConstantStringClassReference_110de2df8,&PTR_DAT_1130dc7b8,0,0,4,
                        0x1c);
    puRam00000001136bc230 = puVar1;
  }
  return;
}



/* Entry: 1054a87ac; end: 1054a8813; +[SCBitmojiSnapchatUserInfo descriptor] */

void FUN_1054a87ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bc238 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a3c4a0,
                        &PTR____CFConstantStringClassReference_110de2e18,&PTR_DAT_1130dc7b8,
                        &PTR_DAT_1130dc7d0,3,0x20,0x1c);
    puRam00000001136bc238 = puVar1;
  }
  return;
}



/* Entry: 1054a8814; end: 1054a8ac3; -[SCGenAIIdentityProtoConverterImpl clientIdentityFromProtoIdentity:] */

void FUN_1054a8814(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfe9940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c15b160(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c26d760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1440(param_1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b97a8;
  _objc_alloc(PTR_PTR_1126b97a8);
  uVar2 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c07b0c0();
  uVar8 = param_3;
  func_0x00010bfbeb80();
  uVar1 = 2;
  if ((int)uVar8 != 2) {
    uVar1 = (int)uVar8 == 1;
  }
  uVar8 = param_3;
  func_0x00010bf28d20();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b97b0;
  if (uVar8 == 0) {
    func_0x00010c01b7e0(puVar5,param_2,uVar2,uVar6,param_1,uVar3,uVar4,uVar7,uVar1,0);
  }
  else {
    uVar9 = param_3;
    func_0x00010bf28d20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbae00(puVar10,param_2,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b7e0(puVar5,param_2,uVar2,uVar6,param_1,uVar3,uVar4,uVar7 & 0xffffffff,uVar1,
                        puVar10);
    _objc_release(puVar10);
    _objc_release(uVar9);
  }
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054a8ac4; end: 1054a8acf;  */

void FUN_1054a8ac4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clientEncryptedDataFromProtoDat_112555eb0,
             param_2);
  return;
}



/* Entry: 1054a8ad0; end: 1054a8b8f;  */

void FUN_1054a8ad0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b97a0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1440(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27d2a0();
  _objc_release(param_2);
  func_0x00010c01c4e0(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a8b90; end: 1054a8e2b; -[SCGenAIIdentityProtoConverterImpl protoIdentityFromClientIdentity:] */

void FUN_1054a8b90(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bfe9920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c26d760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be83620(param_1,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b97b8;
  _objc_opt_new(PTR_PTR_1126b97b8);
  lVar2 = param_3;
  func_0x00010bfe5ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  func_0x00010c213e20(puVar4,param_2,param_1);
  if (lVar3 == 0) {
    func_0x00010c1aad20(puVar4,param_2,0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aad20(puVar4,param_2,puVar5);
    _objc_release(puVar5);
  }
  lVar2 = param_3;
  func_0x00010c07b0c0(param_3);
  func_0x00010c1b3920(puVar4,param_2,lVar2);
  lVar2 = param_3;
  func_0x00010c15b140(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c0d3c80();
  func_0x00010c1fbde0(puVar4,param_2,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf1ec60();
  uVar1 = 2;
  if (lVar2 != 2) {
    uVar1 = lVar2 == 1;
  }
  func_0x00010c1a2620(puVar4,param_2,uVar1);
  lVar2 = param_3;
  func_0x00010bf28d20(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010c272020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c175f20(puVar4,param_2,lVar6);
  _objc_release(lVar6);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1054a8e2c; end: 1054a8e37;  */

void FUN_1054a8e2c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be83630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__protoEncryptedDataFromClientDat_11257e728,
             param_2);
  return;
}



/* Entry: 1054a8e38; end: 1054a8ef3;  */

void FUN_1054a8e38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b97c0;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be83620(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c27d2a0();
  _objc_release(param_2);
  func_0x00010c21aa00(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a8ef4; end: 1054a901f; -[SCGenAIIdentityProtoConverterImpl clientErrorFromProtoCameosError:] */

void FUN_1054a8ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR_PTR_1126b97c8;
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c252d60();
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uVar3 = param_3;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = uVar3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar1;
  func_0x00010bf99240(puVar5,param_2,puVar1,(long)(int)uVar2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126b97d0;
    _objc_retain(puVar7);
    _objc_alloc(puVar5);
    puVar1 = puVar7;
    func_0x00010c086560(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar7;
    func_0x00010c085300(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar7;
    func_0x00010bdc2b80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010c00fb00(puVar5,param_2,puVar1,puVar4,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054a9020; end: 1054a90df; -[SCGenAIIdentityProtoConverterImpl _clientEncryptedDataFromProtoData:] */

void FUN_1054a9020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b97d0;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c086560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c085300(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c00fb00(puVar1,param_2,uVar2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a90e0; end: 1054a91a3; -[SCGenAIIdentityProtoConverterImpl _protoEncryptedDataFromClientData:] */

void FUN_1054a90e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b97d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf92c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b6b40(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf92c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b64a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c28f340(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c21afe0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a91a4; end: 1054a939f; -[SCGenAIIdentityServiceImpl initWithUNISCPbGenAIIdentityService:genAIProtoModelsConverter:featureSettingsService:primaryIdentityCache:] */

undefined8 *
FUN_1054a91a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *unaff_x24;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_70 = PTR_PTR_1126e8780;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    unaff_x24 = (undefined *)puVar1[7];
    puVar1[7] = puVar3;
    _objc_release();
    func_0x000108c2cab4();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x24;
    func_0x00010c08fa60();
    _objc_release(unaff_x24);
    if (puVar3 != (undefined *)0x0) {
      unaff_x24 = PTR_PTR_1126ae748;
      func_0x00010bf24820();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_68 = &PTR____CFConstantStringClassReference_110dadcb8;
      puVar3 = unaff_x24;
      func_0x000108c2cab4();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_60 = puVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9140(unaff_x24);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      uVar2 = puVar1[5];
      puVar1[5] = unaff_x24;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar5 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  plVar7 = &lStack_1a0;
  pcStack_88 = FUN_1054a93a0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lVar9 = *(long *)(lVar5 + 0x38);
  puStack_c0 = unaff_x24;
  puStack_b8 = puVar1;
  uStack_b0 = param_6;
  uStack_a8 = param_5;
  uStack_a0 = param_4;
  lStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(lVar9);
  lVar6 = lVar9;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar10 = *plStack_180;
    do {
      lVar11 = 0;
      do {
        if (*plStack_180 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010c281a60(*(undefined8 *)(lStack_188 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar6 != lVar11);
      lVar6 = lVar9;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar9);
  puStack_198 = PTR_PTR_1126e8780;
  lStack_1a0 = lVar5;
  _objc_msgSendSuper2(&lStack_1a0,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return plVar7;
  }
  ___stack_chk_fail();
  puVar8 = (undefined8 *)plVar7[3];
  func_0x00010c269d40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010bfbe820();
  _objc_release(puVar8);
  return puVar1;
}



/* Entry: 1054a93a0; end: 1054a94af; -[SCGenAIIdentityServiceImpl dealloc] */

long * FUN_1054a93a0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  plVar2 = &lStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar5 = *(long *)(param_1 + 0x38);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010c281a60(*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar5);
  puStack_118 = PTR_PTR_1126e8780;
  lStack_120 = param_1;
  _objc_msgSendSuper2(&lStack_120,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar2;
  }
  ___stack_chk_fail();
  puVar3 = *(undefined1 **)((long)plVar2 + 0x18);
  func_0x00010c269d40(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfbe820();
  _objc_release(puVar3);
  return (long *)puVar4;
}



/* Entry: 1054a94b0; end: 1054a94ef; -[SCGenAIIdentityServiceImpl isGenAIIdentityFeatureRestricted] */

undefined8 FUN_1054a94b0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbe820();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054a94f0; end: 1054a952f; -[SCGenAIIdentityServiceImpl isGenAIIdentityOnboarded] */

undefined8 FUN_1054a94f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbe880();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1054a9530; end: 1054a9587; -[SCGenAIIdentityServiceImpl genAIIdentityOnboarded] */

void FUN_1054a9530(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    func_0x00010c24f7a0(param_1);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1054a9588; end: 1054a9673; -[SCGenAIIdentityServiceImpl uploadIdentity:] */

void FUN_1054a9588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a9674; end: 1054a96d7;  */

void FUN_1054a9674(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee58e0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1054a96d8; end: 1054a96df; -[SCGenAIIdentityServiceImpl getPrimaryIdentity] */

void FUN_1054a96d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc9110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_getPrimaryIdentityWithCache__1125cfde8,0);
  return;
}



/* Entry: 1054a96e0; end: 1054a9727; -[SCGenAIIdentityServiceImpl getCachedPrimaryIdentity] */

void FUN_1054a96e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054a9728; end: 1054a9857; -[SCGenAIIdentityServiceImpl getPrimaryIdentityWithCache:] */

void FUN_1054a9728(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010bfc3480();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6b8;
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(lVar1);
      goto LAB_1054a9824;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  puVar3 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf54280(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
LAB_1054a9824:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1054a9858; end: 1054a98af;  */

void FUN_1054a9858(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be21ac0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1054a98b0; end: 1054a9967; -[SCGenAIIdentityServiceImpl getAllIdentites] */

void FUN_1054a98b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a9968; end: 1054a99bf;  */

void FUN_1054a9968(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ce60();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1054a99c0; end: 1054a9ab3; -[SCGenAIIdentityServiceImpl deleteIdentityById:isPrimary:] */

void FUN_1054a99c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a9ab4; end: 1054a9b1b;  */

void FUN_1054a9ab4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa1a0();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1054a9b1c; end: 1054a9bd3; -[SCGenAIIdentityServiceImpl deleteAllIdentities] */

void FUN_1054a9b1c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a9bd4; end: 1054a9c2b;  */

void FUN_1054a9bd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf9c80();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1054a9c2c; end: 1054a9ce3; -[SCGenAIIdentityServiceImpl deletePrimaryIdentity] */

void FUN_1054a9c2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010bf54280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054a9ce4; end: 1054a9d3b;  */

void FUN_1054a9ce4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa540();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf54290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b0418,PTR_s_create__1125b2a48,0);
  return;
}



/* Entry: 1054a9d3c; end: 1054a9f03; -[SCGenAIIdentityServiceImpl startObserveGenAIIdentityOnboarded] */

void FUN_1054a9d3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2268e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbe880();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar5);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar5;
  func_0x00010c0e0c60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar4);
  _objc_release(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_50);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1054a9f04; end: 1054a9f8f;  */

void FUN_1054a9f04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfbe880();
    func_0x00010c0df6e0(puVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054a9f90; end: 1054aa10b; -[SCGenAIIdentityServiceImpl _getErrorFromServiceStatusResponse:] */

void FUN_1054a9f90(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c252d60();
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((int)puVar1 == -0x4524111) {
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    param_4 = 0;
    puVar4 = param_1;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
    if ((int)puVar1 != 1) {
      puVar6 = (undefined *)0x0;
      goto LAB_1054aa0cc;
    }
    param_1 = *(undefined **)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_1;
    puVar4 = puVar1;
    func_0x00010bf3cda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
LAB_1054aa0cc:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(param_4);
  puVar6 = PTR_PTR_1126b97e0;
  _objc_opt_new(PTR_PTR_1126b97e0);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c119260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9a20(puVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_a8,param_3);
  uVar3 = *(undefined8 *)(param_3 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_b0,auStack_a8);
  _objc_retain(param_4);
  _objc_retain(puVar4);
  func_0x00010c28eb20(uVar3);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(puVar6);
  _objc_release(param_4);
  _objc_release(puVar4);
  return;
}



/* Entry: 1054aa10c; end: 1054aa29b; -[SCGenAIIdentityServiceImpl _uploadIdentity:observer:] */

void FUN_1054aa10c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b97e0;
  _objc_opt_new(PTR_PTR_1126b97e0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c119260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9a20(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_initWeak(auStack_48,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c28eb20(uVar3);
  _objc_release(uVar3);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1054aa29c; end: 1054aa427;  */

void FUN_1054aa29c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x30);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar4 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (puVar2 == (undefined *)0x0) {
        uVar4 = *(undefined8 *)(puVar1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a23e0();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4);
        _objc_release(puVar3);
        puVar3 = *(undefined **)(puVar1 + 0x20);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf26740();
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4);
      }
      _objc_release(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
    }
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054aa428; end: 1054aa54b; -[SCGenAIIdentityServiceImpl _getPrimaryIdentityWithObserver:] */

void FUN_1054aa428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b97e8;
  _objc_opt_new(PTR_PTR_1126b97e8);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfc9120(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054aa54c; end: 1054aa717;  */

void FUN_1054aa54c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar5 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (puVar2 == (undefined *)0x0) {
        puVar3 = *(undefined **)(puVar1 + 0x10);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_2;
        func_0x00010bfe6000(param_2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf3d080(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        _objc_release(puVar3);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar5);
        _objc_release(puVar3);
        uVar5 = *(undefined8 *)(puVar1 + 0x20);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf26740();
        _objc_release(uVar5);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar5);
      }
      _objc_release(puVar4);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054aa718; end: 1054aa83b; -[SCGenAIIdentityServiceImpl _getAllIdentitesWithObserver:] */

void FUN_1054aa718(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b97f0;
  _objc_opt_new(PTR_PTR_1126b97f0);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bfc2400(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054aa83c; end: 1054aaa47;  */

void FUN_1054aa83c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar5 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (puVar2 == (undefined *)0x0) {
        uVar5 = param_2;
        func_0x00010bfe5fe0(param_2);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_68,param_1 + 0x28);
        uVar3 = uVar5;
        func_0x00010c0b8620(uVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar5);
        _objc_release(puVar4);
        _objc_release(uVar3);
        _objc_destroyWeak(auStack_68);
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar5);
        _objc_release(puVar4);
      }
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar5);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1054aaa48; end: 1054aaad3;  */

void FUN_1054aaa48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf3d080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054aaad4; end: 1054aac23; -[SCGenAIIdentityServiceImpl _deleteIdentityById:isPrimary:observer:] */

void FUN_1054aaad4(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b97f8;
  _objc_opt_new(PTR_PTR_1126b97f8);
  func_0x00010c1a9a40();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_5);
  uStack_60 = param_4;
  func_0x00010bf6ce40(uVar2);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054aac24; end: 1054aadbb;  */

void FUN_1054aac24(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar4 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (puVar2 == (undefined *)0x0) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar4 = *(undefined8 *)(puVar1 + 0x18);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a23e0();
          _objc_release(uVar4);
          uVar4 = *(undefined8 *)(puVar1 + 0x20);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf3ac60();
          _objc_release(uVar4);
        }
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c0d9840(uVar4);
      _objc_release(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054aadbc; end: 1054aaedf; -[SCGenAIIdentityServiceImpl _deleteAllIdentitiesWithObserver:] */

void FUN_1054aadbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9800;
  _objc_opt_new(PTR_PTR_1126b9800);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf6b600(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054aaee0; end: 1054ab07b;  */

void FUN_1054aaee0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar4 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (puVar2 == (undefined *)0x0) {
        uVar4 = *(undefined8 *)(puVar1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a23e0();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4);
        _objc_release(puVar3);
        puVar3 = *(undefined **)(puVar1 + 0x20);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ac60();
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4);
      }
      _objc_release(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054ab07c; end: 1054ab19f; -[SCGenAIIdentityServiceImpl _deletePrimaryIdentityWithObserver:] */

void FUN_1054ab07c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b9808;
  _objc_opt_new(PTR_PTR_1126b9808);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010bf6c5e0(uVar2);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1054ab1a0; end: 1054ab33b;  */

void FUN_1054ab1a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined *)0x0) {
    if (param_3 == 0) {
      uVar4 = param_2;
      func_0x00010c252d60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010be1ed60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (puVar2 == (undefined *)0x0) {
        uVar4 = *(undefined8 *)(puVar1 + 0x18);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a23e0();
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010c2619e0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4);
        _objc_release(puVar3);
        puVar3 = *(undefined **)(puVar1 + 0x20);
        func_0x00010c269d40(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ac60();
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        puVar3 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0d9840(uVar4);
      }
      _objc_release(puVar3);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puVar2 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d9840(uVar4);
    }
    _objc_release(puVar2);
    func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054ab33c; end: 1054ab3f3; -[SCGenAIIdentityServiceImpl .cxx_destruct] */

void FUN_1054ab33c(long param_1)

{
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



/* Entry: 1054ab3f4; end: 1054ab40f;  */

void FUN_1054ab3f4(void)

{
  _objc_alloc_init(PTR_PTR_1126b9810);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ab410; end: 1054ab4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ab410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  puVar1 = PTR_PTR_1126b9818;
  _objc_alloc(PTR_PTR_1126b9818);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1 + _DAT_112724088;
    _objc_loadWeakRetained(lVar3);
  }
  lVar2 = lVar3;
  func_0x00010bf4c240(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002e80(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054ab4ac; end: 1054ab4f7;  */

void FUN_1054ab4ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be1a6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1054ab4f8; end: 1054ab583;  */

void FUN_1054ab4f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126b9820;
  _objc_alloc(PTR_PTR_1126b9820);
  lVar2 = param_1;
  FUN_1054ab584(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa40(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054ab584; end: 1054ab5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ab584(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112724084);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ab5a8; end: 1054ab5d7;  */

void FUN_1054ab5a8(void)

{
  _objc_alloc(PTR_PTR_1126b9828);
  func_0x00010c017520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054ab5d8; end: 1054ab6c7; -[SCGenAIIdentityServiceProvider _uniPbGenAIIdentityService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ab5d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b9838;
  _objc_alloc(PTR_PTR_1126b9838);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11272407c;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010bfcfa00(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = 0;
  if (param_1 != 0) {
    lVar3 = param_1 + _DAT_112724080;
    _objc_loadWeakRetained(lVar3);
  }
  lVar4 = lVar3;
  func_0x00010bf398e0(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058cc0(puVar1,param_2,lVar2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  puVar5 = puVar1;
  func_0x00010bf59c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1054ab6c8; end: 1054ab797; -[SCGenAIIdentityServiceProvider _genAIIdentityService:protoModelsConverter:primaryIdentityCache:] */

void FUN_1054ab6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b9840;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  FUN_1054ab584(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa2b80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057760(puVar1,param_2,param_3,param_4,uVar2,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054ab798; end: 1054ab7f3; -[SCGenAIIdentityServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054ab798(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112724088);
  _objc_destroyWeak(param_1 + _DAT_112724084);
  _objc_destroyWeak(param_1 + _DAT_112724080);
  _objc_destroyWeak(param_1 + _DAT_11272407c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112724078);
  return;
}



/* Entry: 1054ab7f4; end: 1054ab867; -[SCGenAIPrimaryIdentityCacheImpl initWithContentDelivery:] */

undefined1 * FUN_1054ab7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8788;
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



/* Entry: 1054ab868; end: 1054ab93b; -[SCGenAIPrimaryIdentityCacheImpl cacheIdentity:] */

void FUN_1054ab868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf3ac60(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1054ab93c; end: 1054aba33;  */

void FUN_1054ab93c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0;
    func_0x00010bf09780(PTR__OBJC_CLASS___NSKeyedArchiver_1126aefa0,param_2,
                        *(undefined8 *)(param_1 + 0x20),0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40ac200000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    func_0x00010c14a860(uVar4,param_2,puVar2,puVar5,puVar3,0,&PTR___NSConcreteGlobalBlock_11088efc8)
    ;
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054aba34; end: 1054aba37;  */

void FUN_1054aba34(void)

{
  return;
}



/* Entry: 1054aba38; end: 1054abb23; -[SCGenAIPrimaryIdentityCacheImpl clearCacheWithCompletion:] */

void FUN_1054aba38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b08b8;
  _objc_alloc();
  func_0x00010c0295e0();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12b940(lVar5,param_2,puVar6,param_3);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b1060;
    _objc_alloc(PTR_PTR_1126b1060);
    func_0x00010c032f60();
    lVar2 = *(long *)(lVar5 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126b08b8;
    _objc_alloc(PTR_PTR_1126b08b8);
    func_0x00010c0295e0();
    lVar5 = lVar2;
    func_0x00010c13e300(lVar2,param_2,puVar6,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(lVar2);
    if (lVar5 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar2 = lVar5;
      func_0x00010bfc5880();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          puVar6 = (undefined *)0x0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
          _objc_alloc();
          func_0x00010bfeea60();
          puVar6 = (undefined *)0x0;
          if (puVar4 != (undefined *)0x0) {
            func_0x00010c1ec620(puVar4,param_2,0);
            puVar6 = puVar4;
            func_0x00010bf67000(puVar4,param_2,
                                *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
            _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(puVar4);
        }
        _objc_release(puVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar5);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  return;
}



/* Entry: 1054abb24; end: 1054abcaf; -[SCGenAIPrimaryIdentityCacheImpl getCachedIdentity] */

void FUN_1054abb24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  lVar3 = lVar2;
  func_0x00010c13e300(lVar2,param_2,puVar6,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar3;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf64a80(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (puVar4 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
        _objc_alloc();
        func_0x00010bfeea60();
        puVar6 = (undefined *)0x0;
        if (puVar5 != (undefined *)0x0) {
          func_0x00010c1ec620(puVar5,param_2,0);
          puVar6 = puVar5;
          func_0x00010bf67000(puVar5,param_2,
                              *(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_110345518);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054abcb0; end: 1054abcbb; -[SCGenAIPrimaryIdentityCacheImpl .cxx_destruct] */

void FUN_1054abcb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054abcbc; end: 1054abd2f; -[SCMySelfieActivationServiceImpl initWith:] */

undefined1 * FUN_1054abcbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8790;
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



/* Entry: 1054abd30; end: 1054abdc7; -[SCMySelfieActivationServiceImpl activateIdentity:] */

void FUN_1054abd30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cacc0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cac60();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b9848;
  func_0x00010bf515e0(PTR_PTR_1126b9848,param_2,3);
  func_0x00010c191c40(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054abdc8; end: 1054abdd3; -[SCMySelfieActivationServiceImpl .cxx_destruct] */

void FUN_1054abdc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054abdd4; end: 1054abe63; -[SCMySelfieClearServiceImpl initWithGenAIIdentityService:] */

undefined1 * FUN_1054abdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8798;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054abe64; end: 1054abf97; -[SCMySelfieClearServiceImpl clearMySelfieWithCompletion:] */

void FUN_1054abe64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf6b3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1054abf98; end: 1054ac073;  */

void FUN_1054abf98(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010bf86d80(uVar2);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054ac074; end: 1054ac12b;  */

void FUN_1054ac074(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1054ac12c;
  puStack_50 = &UNK_110857398;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1054ac16c;
  puStack_78 = &UNK_110859a38;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  _objc_retain(uVar4);
  uStack_70 = uVar4;
  func_0x00010c0c0800(uVar1,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_48);
  return;
}



/* Entry: 1054ac12c; end: 1054ac16b;  */

void FUN_1054ac12c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf1f3c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x0001054ac15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 1054ac16c; end: 1054ac183;  */

void FUN_1054ac16c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054ac17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1054ac184; end: 1054ac1b3; -[SCMySelfieClearServiceImpl .cxx_destruct] */

void FUN_1054ac184(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ac1b4; end: 1054ac257; -[UNISCPbGenAIIdentityServiceFactoryImpl initWithUnifiedGRPCClientFactory:circumstanceEngine:] */

undefined1 *
FUN_1054ac1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e87a0;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054ac258; end: 1054ac38f; -[UNISCPbGenAIIdentityServiceFactoryImpl createUNISCPbGenAIIdentityService] */

void FUN_1054ac258(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becc180(param_1);
  func_0x00010c1eeba0(puVar1,param_2,lVar2 * 1000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010becbea0(param_1);
  func_0x00010c214be0(puVar1,param_2,lVar2 * 1000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b9850;
  _objc_alloc(PTR_PTR_1126b9850);
  func_0x00010c058f80();
  _objc_release(uVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1054ac390; end: 1054ac3bb; -[UNISCPbGenAIIdentityServiceFactoryImpl _timeoutInSec] */

long FUN_1054ac390(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110de2e98,0x3c,0);
  return (long)(int)uVar1;
}



/* Entry: 1054ac3bc; end: 1054ac3e7; -[UNISCPbGenAIIdentityServiceFactoryImpl _timeAliveInBackgroundSec] */

long FUN_1054ac3bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110de2eb8,10,0);
  return (long)(int)uVar1;
}



/* Entry: 1054ac3e8; end: 1054ac417; -[UNISCPbGenAIIdentityServiceFactoryImpl .cxx_destruct] */

void FUN_1054ac3e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054ac418; end: 1054ac48b; -[UNISCPbGenAIIdentityService initWithUnifiedGrpcService:] */

undefined1 * FUN_1054ac418(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e87a8;
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



/* Entry: 1054ac48c; end: 1054ac56f; -[UNISCPbGenAIIdentityService uploadWithRequest:callOptionsBuilder:handler:] */

void FUN_1054ac48c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9858;
  _objc_opt_class(PTR_PTR_1126b9858);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2ed8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ac570; end: 1054ac653; -[UNISCPbGenAIIdentityService getAllWithRequest:callOptionsBuilder:handler:] */

void FUN_1054ac570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9860;
  _objc_opt_class(PTR_PTR_1126b9860);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2ef8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ac654; end: 1054ac737; -[UNISCPbGenAIIdentityService getPrimaryWithRequest:callOptionsBuilder:handler:] */

void FUN_1054ac654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9868;
  _objc_opt_class(PTR_PTR_1126b9868);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2f18,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1054ac738; end: 1054ac81b; -[UNISCPbGenAIIdentityService deletePrimaryWithRequest:callOptionsBuilder:handler:] */

void FUN_1054ac738(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126b9870;
  _objc_opt_class(PTR_PTR_1126b9870);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110de2f38,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}


