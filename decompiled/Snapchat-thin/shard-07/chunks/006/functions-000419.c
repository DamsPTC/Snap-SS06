/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1057aef8c; end: 1057af003;  */

void FUN_1057aef8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be32280();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057af004; end: 1057af177; -[SCCommerceAPIGatewayPaymentInfoProvider deletePaymentMethod:context:completionQueue:completionBlock:] */

void FUN_1057af004(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x0001057b1094(uVar1,0,*(undefined8 *)(param_1 + 0x30),param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = uVar1;
  func_0x00010bf63640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010bec65e0(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057af178; end: 1057af1e3;  */

void FUN_1057af178(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be28260();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057af1e4; end: 1057af4b7; -[SCCommerceAPIGatewayPaymentInfoProvider _submitRequestWithData:endpoint:completionHelperBlock:] */

void FUN_1057af1e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(&PTR____CFConstantStringClassReference_110e02238);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf225e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c25ce40(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar6 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2af9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_5);
  func_0x00010c25f600(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar10);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(&PTR____CFConstantStringClassReference_110e02238);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057af4b8; end: 1057af4f3;  */

void FUN_1057af4b8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057af4f4; end: 1057af587;  */

void FUN_1057af4f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2dcc0();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057af588; end: 1057af657; -[SCCommerceAPIGatewayPaymentInfoProvider _handlePaymentResponse:outcome:data:error:completionHelperBlock:] */

void FUN_1057af588(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == 0) {
    if (param_4 - 1U < 2) {
      if (param_7 == 0) goto LAB_1057af628;
      pcVar3 = *(code **)(param_7 + 0x10);
      uVar1 = 0;
    }
    else {
      if ((param_4 != 0) || (param_7 == 0)) goto LAB_1057af628;
      pcVar3 = *(code **)(param_7 + 0x10);
      uVar1 = param_5;
    }
    lVar2 = 0;
  }
  else {
    if (param_7 == 0) goto LAB_1057af628;
    pcVar3 = *(code **)(param_7 + 0x10);
    uVar1 = 0;
    lVar2 = param_6;
  }
  (*pcVar3)(param_7,uVar1,lVar2);
LAB_1057af628:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1057af658; end: 1057af873; -[SCCommerceAPIGatewayPaymentInfoProvider _handleFetchPaymentResponseData:error:completion:completionQueue:] */

void FUN_1057af658(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puVar1 = PTR_PTR_1126be438;
    _objc_alloc();
    puStack_88 = (undefined *)0x0;
    func_0x00010c008360();
    puVar4 = puStack_88;
    _objc_retain(puStack_88);
    if (puVar4 == (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010c0f6940();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000100504554();
      _objc_release(puVar2);
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0xc2000000;
      uStack_d8 = 0x1057af8bc;
      puStack_d0 = &UNK_11084aaa8;
      _objc_retain(param_5);
      puStack_c8 = puVar3;
      puStack_c0 = param_5;
      _objc_retain(puVar3);
      func_0x00010007380c(param_6,&puStack_e8);
      _objc_release(puStack_c8);
      _objc_release(puStack_c0);
    }
    else {
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      uStack_a8 = 0x1057af894;
      puStack_a0 = &UNK_11084aaa8;
      _objc_retain(param_5);
      puStack_90 = param_5;
      _objc_retain(puVar4);
      puStack_98 = puVar4;
      func_0x00010007380c(param_6,&puStack_b8);
      _objc_release(puStack_98);
      puVar3 = puStack_90;
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1057af874;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_58 = param_5;
    _objc_retain(param_4);
    lStack_60 = param_4;
    func_0x00010007380c(param_6,&puStack_80);
    _objc_release(lStack_60);
    puVar4 = puStack_58;
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057af874; end: 1057af8db;  */

void FUN_1057af874(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057af88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1057af8dc; end: 1057afa83; -[SCCommerceAPIGatewayPaymentInfoProvider _handleUpdatePaymentResponseData:error:completion:completionQueue:] */

void FUN_1057af8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 auStack_e8 [6];
  undefined8 auStack_b8 [6];
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    puVar4 = PTR_PTR_1126be440;
    _objc_alloc();
    puStack_88 = (undefined *)0x0;
    func_0x00010c008360();
    puVar5 = puStack_88;
    _objc_retain(puStack_88);
    puVar1 = auStack_e8;
    if (puVar5 != (undefined *)0x0) {
      puVar1 = auStack_b8;
    }
    puVar2 = puVar4;
    pcVar3 = FUN_1057afac4;
    if (puVar5 != (undefined *)0x0) {
      puVar2 = puVar5;
      pcVar3 = (code *)0x1057afaa4;
    }
    *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puVar1[1] = 0xc2000000;
    puVar1[2] = pcVar3;
    puVar1[3] = &UNK_11084aaa8;
    _objc_retain(param_5);
    puVar1[5] = param_5;
    _objc_retain(puVar2);
    puVar1[4] = puVar2;
    func_0x00010007380c(param_6,puVar1);
    _objc_release(puVar1[4]);
    _objc_release(puVar1[5]);
    _objc_release(puVar4);
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1057afa84;
    puStack_68 = &UNK_11084aaa8;
    _objc_retain(param_5);
    puStack_58 = param_5;
    _objc_retain(param_4);
    lStack_60 = param_4;
    func_0x00010007380c(param_6,&puStack_80);
    _objc_release(lStack_60);
    puVar5 = puStack_58;
  }
  _objc_release(puVar5);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057afa84; end: 1057afac3;  */

void FUN_1057afa84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057afa9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1057afac4; end: 1057afb3f;  */

void FUN_1057afac4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf5c320(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2,0);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1057afb40; end: 1057afc3b; -[SCCommerceAPIGatewayPaymentInfoProvider _handleDeletePaymentResponseData:error:completion:completionQueue:] */

void FUN_1057afb40(void)

{
  undefined8 uVar1;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  if (in_x3 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x1057afc58;
    puStack_70 = &UNK_110849530;
    _objc_retain(in_x4);
    uStack_68 = in_x4;
    func_0x00010007380c(in_x5,&puStack_88);
    uVar1 = uStack_68;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1057afc3c;
    puStack_48 = &UNK_11084aaa8;
    _objc_retain(in_x4);
    uStack_38 = in_x4;
    _objc_retain(in_x3);
    lStack_40 = in_x3;
    func_0x00010007380c(in_x5,&puStack_60);
    _objc_release(lStack_40);
    uVar1 = uStack_38;
  }
  _objc_release(uVar1);
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 1057afc3c; end: 1057afc6f;  */

void FUN_1057afc3c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057afc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1057afc70; end: 1057afe87; -[SCCommerceAPIGatewayPaymentInfoProvider _handleTokenizedCard:paymentIdentifier:error:endpoint:completionQueue:completionBlock:] */

void FUN_1057afc70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (param_5 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    func_0x0001057b1094(uVar1,param_3,*(undefined8 *)(param_1 + 0x30),param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_1);
    uVar2 = uVar1;
    func_0x00010bf63640(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a0,auStack_98);
    _objc_retain(param_8);
    _objc_retain(param_7);
    func_0x00010bec65e0(param_1);
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_8);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1057afe88;
    puStack_78 = &UNK_11084aaa8;
    _objc_retain(param_8);
    uStack_68 = param_8;
    _objc_retain(param_5);
    lStack_70 = param_5;
    func_0x00010007380c(param_7,&puStack_90);
    _objc_release(lStack_70);
    uVar1 = uStack_68;
  }
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057afe88; end: 1057afea7;  */

void FUN_1057afe88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057afea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1057afea8; end: 1057aff13;  */

void FUN_1057afea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be328a0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057aff14; end: 1057aff73; -[SCCommerceAPIGatewayPaymentInfoProvider .cxx_destruct] */

void FUN_1057aff14(long param_1)

{
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



/* Entry: 1057aff74; end: 1057b007f; -[SCCommerceAPIGatewayPaymentMethodTokenizer initWithHttpMetadataService:httpRequestModifier:] */

undefined1 *
FUN_1057aff74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126ea3c8;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057b0080; end: 1057b01af; -[SCCommerceAPIGatewayPaymentMethodTokenizer tokenizePaymentCard:completion:completionQueue:] */

void FUN_1057b0080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be10300(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b01b0; end: 1057b021f;  */

void FUN_1057b01b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010becd0c0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057b0220; end: 1057b02ff; -[SCCommerceAPIGatewayPaymentMethodTokenizer tokenizePaymentCard:braintreeClientToken:completion:completionQueue:] */

void FUN_1057b0220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126be448;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfff220();
  _objc_release(param_4);
  _objc_retain(0);
  func_0x00010becd0c0(param_1,param_2,puVar1,param_3,0,param_5,param_6);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(0);
  return;
}



/* Entry: 1057b0300; end: 1057b0397; -[SCCommerceAPIGatewayPaymentMethodTokenizer _cardClientWithClientToken:] */

void FUN_1057b0300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126be450;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c0edb00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff5a00(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126be458;
  _objc_alloc(PTR_PTR_1126be458);
  func_0x00010bfefbc0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057b0398; end: 1057b0653; -[SCCommerceAPIGatewayPaymentMethodTokenizer _fetchBrainTreeToken:completion:] */

void FUN_1057b0398(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(&PTR____CFConstantStringClassReference_110e02238);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126be460;
  func_0x00010c0cb140(PTR_PTR_1126be460);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf225e0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b7220;
  func_0x00010c135080(PTR_PTR_1126b7220);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bcaa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c2b7240();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  func_0x00010c25f600(uVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(&PTR____CFConstantStringClassReference_110e02238);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b0654; end: 1057b068f;  */

void FUN_1057b0654(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x00010c2907c0(param_2);
  func_0x00010c290a40(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057b0690; end: 1057b0723;  */

void FUN_1057b0690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26900();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1057b0724; end: 1057b08f7; -[SCCommerceAPIGatewayPaymentMethodTokenizer _handleBraintreeResponse:outcome:data:error:completion:] */

/* WARNING: Removing unreachable block (ram,0x0001057b0848) */
/* WARNING: Removing unreachable block (ram,0x0001057b084c) */
/* WARNING: Removing unreachable block (ram,0x0001057b085c) */

void FUN_1057b0724(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_6 == 0) {
    if (param_4 - 1U < 2) {
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,0,0);
      }
    }
    else if (param_4 == 0) {
      puVar1 = PTR_PTR_1126be468;
      _objc_alloc(PTR_PTR_1126be468);
      func_0x00010c008360();
      _objc_retain(0);
      puVar2 = PTR_PTR_1126be448;
      _objc_alloc(PTR_PTR_1126be448);
      puVar3 = puVar1;
      func_0x00010bf20e40(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfff220(puVar2);
      _objc_retain(0);
      _objc_release(puVar3);
      if (param_7 != 0) {
        (**(code **)(param_7 + 0x10))(param_7,puVar2,0);
      }
      param_6 = 0;
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(0);
      _objc_release(0);
      goto LAB_1057b08b8;
    }
    param_6 = 0;
  }
  else if (param_7 != 0) {
    (**(code **)(param_7 + 0x10))(param_7,0,param_6);
  }
LAB_1057b08b8:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1057b08f8; end: 1057b0a87; -[SCCommerceAPIGatewayPaymentMethodTokenizer _tokenizeCardWithBraintreeCardClient:paymentCard:error:completion:completionQueue:] */

void FUN_1057b08f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == 0) || (param_5 != 0)) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1057b0a88;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_6);
    uStack_48 = param_6;
    _objc_retain(param_5);
    lStack_50 = param_5;
    func_0x00010007380c(param_7,&puStack_70);
    _objc_release(lStack_50);
    param_1 = uStack_48;
  }
  else {
    func_0x00010bddbae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_4;
    FUN_1057b0d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_7);
    _objc_retain(param_6);
    func_0x00010c273380(param_1);
    _objc_release(param_6);
    _objc_release(param_7);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057b0a88; end: 1057b0aa7;  */

void FUN_1057b0a88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001057b0aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 1057b0aa8; end: 1057b0bd7;  */

void FUN_1057b0aa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1057b0b70;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1057b0bd8; end: 1057b0c13; -[SCCommerceAPIGatewayPaymentMethodTokenizer .cxx_destruct] */

void FUN_1057b0bd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b0c14; end: 1057b0cb7; -[SCCommerceDataServices initWithAccountInfoProvider:paymentInfoProvider:] */

undefined1 *
FUN_1057b0c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ea3d0;
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



/* Entry: 1057b0cb8; end: 1057b0cbf; -[SCCommerceDataServices accountInfoProvider] */

undefined8 FUN_1057b0cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057b0cc0; end: 1057b0cc7; -[SCCommerceDataServices paymentInfoProvider] */

undefined8 FUN_1057b0cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057b0cc8; end: 1057b0cf7; -[SCCommerceDataServices .cxx_destruct] */

void FUN_1057b0cc8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b0cf8; end: 1057b0d6b; -[SCCommercePaymentInfraServices initWithPaymentMethodTokenizer:] */

undefined1 * FUN_1057b0cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea3d8;
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



/* Entry: 1057b0d6c; end: 1057b0d73; -[SCCommercePaymentInfraServices paymentMethodTokenizer] */

undefined8 FUN_1057b0d6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1057b0d74; end: 1057b0d7f; -[SCCommercePaymentInfraServices .cxx_destruct] */

void FUN_1057b0d74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b0d80; end: 1057b117b;  */

void FUN_1057b0d80(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    uVar1 = param_1;
    func_0x00010bf31e80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c08fa60();
    if (uVar4 < 5) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_1;
      func_0x00010bf31e80(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar1);
    puVar5 = PTR_PTR_1126be470;
    _objc_alloc(PTR_PTR_1126be470);
    uVar1 = param_1;
    func_0x00010bf9cbe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf9cc20(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010bf63100(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c030500(puVar5,param_2,uVar4,uVar1,uVar2,uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb18a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19d320(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c089720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b8360(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20e6e0(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1991a0(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf39960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bf480(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e96a0(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c105660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1df560(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bf19f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf53220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c184b00(puVar5,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057b117c; end: 1057b127b;  */

void FUN_1057b117c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uStack_28;
  undefined1 uStack_21;
  
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010c08fa60(param_1);
  func_0x00010bf64a60(puVar3,param_2,lVar2 + 5);
  _objc_retainAutoreleasedReturnValue();
  uStack_21 = 0;
  func_0x00010bf06a40();
  lVar2 = param_1;
  func_0x00010c08fa60();
  uVar1 = ((uint)lVar2 & 0xff00ff00) >> 8 | ((uint)lVar2 & 0xff00ff) << 8;
  uStack_28 = uVar1 >> 0x10 | uVar1 << 0x10;
  func_0x00010bf06a40(puVar3,param_2,&uStack_28,4);
  func_0x00010bf06ae0(puVar3,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057b127c; end: 1057b1407;  */

void FUN_1057b127c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar5;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar5);
  _objc_retain(puVar2);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80();
  if ((int)puVar5 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    func_0x00010c127e80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar2);
    puVar3 = puVar1;
    func_0x00010bfb1800();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      func_0x00010c11f2a0(puVar3);
      puVar4 = puVar2;
      func_0x00010c260c80(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80();
      if ((int)puVar5 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSDecimalNumber_1126be480;
        func_0x00010bf66800(PTR__OBJC_CLASS___NSDecimalNumber_1126be480);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057b1408; end: 1057b156f; -[SCCommerceRequestModel initWithKey:path:parameters:headers:uploadData:requestMethod:requestParsingType:metricsEndpointType:metricsUserAction:metricsContext:authViaSnaptoken:] */

undefined8 *
FUN_1057b1408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126ea3e0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    puVar1[7] = param_8;
    puVar1[8] = param_9;
    puVar1[9] = param_10;
    puVar1[10] = param_11;
    puVar1[0xb] = param_12;
    *(undefined1 *)(puVar1 + 1) = param_13;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1057b1570; end: 1057b1593; -[SCCommerceRequestModel copyWithZone:] */

undefined8 FUN_1057b1570(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057b1594; end: 1057b159b; -[SCCommerceRequestModel key] */

undefined8 FUN_1057b1594(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057b159c; end: 1057b15a3; -[SCCommerceRequestModel path] */

undefined8 FUN_1057b159c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057b15a4; end: 1057b15ab; -[SCCommerceRequestModel parameters] */

undefined8 FUN_1057b15a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057b15ac; end: 1057b15b3; -[SCCommerceRequestModel headers] */

undefined8 FUN_1057b15ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057b15b4; end: 1057b15bb; -[SCCommerceRequestModel uploadData] */

undefined8 FUN_1057b15b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1057b15bc; end: 1057b15c3; -[SCCommerceRequestModel requestMethod] */

undefined8 FUN_1057b15bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057b15c4; end: 1057b15cb; -[SCCommerceRequestModel requestParsingType] */

undefined8 FUN_1057b15c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057b15cc; end: 1057b15d3; -[SCCommerceRequestModel metricsEndpointType] */

undefined8 FUN_1057b15cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1057b15d4; end: 1057b15db; -[SCCommerceRequestModel metricsUserAction] */

undefined8 FUN_1057b15d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1057b15dc; end: 1057b15e3; -[SCCommerceRequestModel metricsContext] */

undefined8 FUN_1057b15dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1057b15e4; end: 1057b15eb; -[SCCommerceRequestModel authViaSnaptoken] */

undefined1 FUN_1057b15e4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057b15ec; end: 1057b163f; -[SCCommerceRequestModel .cxx_destruct] */

void FUN_1057b15ec(long param_1)

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



/* Entry: 1057b1640; end: 1057b1eab;  */

void FUN_1057b1640(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 == 0) {
LAB_1057b1e58:
    _objc_release(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0fcb00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar2 == 0) goto LAB_1057b1e58;
    lVar1 = param_1;
    func_0x00010bf9a440(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(lVar1);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar3 & 1) == 0) goto LAB_1057b1e58;
    lVar1 = param_1;
    func_0x00010c1530c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80();
    _objc_release(lVar1);
    _objc_release(param_1);
    if ((int)puVar2 != 0) {
      _objc_retain(param_1);
      puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
      _objc_opt_new();
      lVar1 = param_1;
      func_0x00010bf9a440();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      func_0x00010bf06ae0(puVar3);
      _objc_release(puVar11);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0fcb00(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e02338;
      FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02338,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0(puVar3);
      _objc_release(ppuVar4);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c1530c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110dfa5f8;
      FUN_1057b1eac(&PTR____CFConstantStringClassReference_110dfa5f8,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0(puVar3);
      _objc_release(ppuVar4);
      _objc_release(lVar1);
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c2709c0(param_1);
      func_0x00010c0df720(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e02378;
      FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02378,puVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0(puVar3);
      _objc_release(ppuVar4);
      _objc_release(puVar11);
      _objc_release(puVar2);
      lVar1 = param_1;
      func_0x00010bfdec40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010bfdec40(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e02398;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02398,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar1);
      }
      lVar1 = param_1;
      func_0x00010bfded00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010bfded00(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e023b8;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e023b8,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar1);
      }
      lVar1 = param_1;
      func_0x00010bfdebc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010bfdebc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e023d8;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e023d8,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar1);
      }
      lVar1 = param_1;
      func_0x00010c0845c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010c0845c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e023f8;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e023f8,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar1);
        puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0ddfa0(param_1);
        func_0x00010c0df840(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e02418;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02418,puVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(puVar11);
        _objc_release(puVar2);
      }
      lVar1 = param_1;
      func_0x00010bf5de60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010bf5de60(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e02438;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02438,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar1);
      }
      lVar1 = param_1;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010c112a80(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e02458;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02458,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar5);
        _objc_release(lVar1);
      }
      lVar1 = param_1;
      func_0x00010c0f6840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010c0f6840(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar1;
        func_0x00010c25d700();
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e02498;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02498,lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar5);
        _objc_release(lVar1);
      }
      lVar1 = param_1;
      func_0x00010c279800();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        lVar1 = param_1;
        func_0x00010c279800(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = &PTR____CFConstantStringClassReference_110e024b8;
        FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e024b8,lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf06ae0(puVar3);
        _objc_release(ppuVar4);
        _objc_release(lVar1);
      }
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c261740(param_1);
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e02478;
      FUN_1057b1eac(&PTR____CFConstantStringClassReference_110e02478);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf06ae0(puVar3);
      _objc_release(ppuVar4);
      _objc_release(puVar11);
      _objc_release(puVar2);
      _objc_release(param_1);
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR_PTR_1126b4960;
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar8 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c14de00(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126bbf20;
      func_0x00010bdc1d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf58700(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar2);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      goto LAB_1057b1e64;
    }
  }
  puVar11 = (undefined *)0x0;
LAB_1057b1e64:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1057b1eac; end: 1057b1f13;  */

void FUN_1057b1eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dcaff8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1057b1f14; end: 1057b1f87; -[SCPixelRequestClientImpl initWithRequestManager:] */

undefined1 * FUN_1057b1f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ea3e8;
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



/* Entry: 1057b1f88; end: 1057b212b; -[SCPixelRequestClientImpl sendPixelRequest:completionQueue:success:failure:] */

void FUN_1057b1f88(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  FUN_1057b1640();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1057b2088;
    puStack_58 = &UNK_11089e850;
    _objc_retain(param_6);
    uStack_50 = param_6;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010c25f5e0(uVar1,param_2,param_3,param_4,&puStack_70);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1057b212c; end: 1057b2137; -[SCPixelRequestClientImpl .cxx_destruct] */

void FUN_1057b212c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b2138; end: 1057b21bb; +[SCCommercePixelEventHelpers requestKey] */

void FUN_1057b2138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_opt_new();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e02558);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1057b21bc; end: 1057b227f; +[SCCommercePixelEventHelpers hashedEmail:] */

void FUN_1057b21bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = uVar2;
    func_0x00010c0b5ac0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc2600(puVar4,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1057b2280; end: 1057b23ab; +[SCCommercePixelEventHelpers hashedPhoneNum:] */

void FUN_1057b2280(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x00010c269d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,uVar2);
  if ((int)puVar5 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_1126b06a8;
    _objc_alloc(PTR__OBJC_CLASS___NSRegularExpression_1126b06a8);
    func_0x00010c034740();
    uVar1 = uVar2;
    func_0x00010c08fa60(uVar2);
    puVar4 = puVar3;
    func_0x00010c25cfa0(puVar3,param_2,uVar2,0,0,uVar1,
                        &PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010bdc2600(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057b23ac; end: 1057b245f; +[SCCommercePixelEventHelpers hashedAdId] */

void FUN_1057b23ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010befe540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2600(puVar5,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1057b2460; end: 1057b255f; -[SCCommercePixelMetricsLoggerImpl initWithRequestManager:userInfoServices:grapheneRegistry:] */

undefined1 *
FUN_1057b2460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ea3f0;
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
    puVar3 = PTR_PTR_1126be488;
    _objc_alloc();
    func_0x00010c03f100();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b0468;
    _objc_alloc();
    func_0x00010c0184a0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1057b2560; end: 1057b278b; -[SCCommercePixelMetricsLoggerImpl logViewContentWithPixelId:pixelItemId:currency:priceAmount:] */

void FUN_1057b2560(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar10 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
    if ((int)puVar1 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
      if ((int)puVar1 != 0) {
        puVar2 = PTR_PTR_1126be490;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        puVar4 = PTR_PTR_1126be498;
        func_0x00010c135a00(PTR_PTR_1126be498);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126be498;
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010bf8d9a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdec60(puVar1,param_3,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126be498;
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c0fb000();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfded20(puVar7,param_3,uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126be498;
        func_0x00010bfdebc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c036220(uVar10,puVar2,param_3,param_4,
                            &PTR____CFConstantStringClassReference_110e025d8,
                            &PTR____CFConstantStringClassReference_110e02678,puVar4,puVar1,puVar7,
                            puVar8,param_5,1,param_6,puVar9,1);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar6);
        _objc_release(puVar1);
        _objc_release(uVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        func_0x00010be9fa60(param_2,param_3,puVar2);
        _objc_release(puVar2);
      }
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b278c; end: 1057b29b7; -[SCCommercePixelMetricsLoggerImpl logAddToCartWithWithPixelId:pixelItemId:currency:priceAmount:] */

void FUN_1057b278c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  uVar10 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
    if ((int)puVar1 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
      if ((int)puVar1 != 0) {
        puVar2 = PTR_PTR_1126be490;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f320();
        puVar4 = PTR_PTR_1126be498;
        func_0x00010c135a00(PTR_PTR_1126be498);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_PTR_1126be498;
        uVar5 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010bf8d9a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfdec60(puVar1,param_3,uVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126be498;
        uVar6 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010c0fb000();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfded20(puVar7,param_3,uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126be498;
        func_0x00010bfdebc0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c036220(uVar10,puVar2,param_3,param_4,
                            &PTR____CFConstantStringClassReference_110e02618,
                            &PTR____CFConstantStringClassReference_110e02678,puVar4,puVar1,puVar7,
                            puVar8,param_5,1,param_6,puVar9,1);
        _objc_release(puVar9);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_release(uVar6);
        _objc_release(puVar1);
        _objc_release(uVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        func_0x00010be9fa60(param_2,param_3,puVar2);
        _objc_release(puVar2);
      }
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b29b8; end: 1057b2bd3; -[SCCommercePixelMetricsLoggerImpl logAddBillingWithItemIds:pixelId:success:] */

void FUN_1057b29b8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (((*(byte *)(param_2 + 0x20) & 1) == 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)
     ) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_5);
    if ((int)puVar2 != 0) {
      puVar3 = PTR_PTR_1126be490;
      _objc_alloc(PTR_PTR_1126be490);
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      puVar5 = PTR_PTR_1126be498;
      func_0x00010c135a00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126be498;
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010bf8d9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdec60(puVar2,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126be498;
      uVar7 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c0fb000(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfded20(puVar8,param_3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126be498;
      func_0x00010bfdebc0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_4;
      func_0x00010bf446e0(param_4,param_3,&PTR____CFConstantStringClassReference_110db97b8);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_4;
      func_0x00010bf529e0();
      func_0x00010c036220(param_1,puVar3,param_3,param_5,
                          &PTR____CFConstantStringClassReference_110e02638,
                          &PTR____CFConstantStringClassReference_110e02678,puVar5,puVar2,puVar8,
                          puVar9,lVar1,lVar10,0,0,param_6);
      _objc_release(lVar1);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar7);
      _objc_release(puVar2);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      func_0x00010be9fa60(param_2,param_3,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b2bd4; end: 1057b2e63; -[SCCommercePixelMetricsLoggerImpl logStartCheckoutWithPixelId:itemIds:hasPaymentMethods:currency:priceAmount:transactionId:numItems:] */

void FUN_1057b2bd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  
  uVar12 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,param_4);
    if ((int)puVar1 != 0) {
      puVar2 = PTR_PTR_1126be490;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      puVar4 = PTR_PTR_1126be498;
      func_0x00010c135a00();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126be498;
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010bf8d9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfdec60(puVar1,param_3,uVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126be498;
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      func_0x00010c0fb000();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfded20(puVar7,param_3,uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126be498;
      func_0x00010bfdebc0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = param_5;
      func_0x00010bf446e0(param_5,param_3,&PTR____CFConstantStringClassReference_110db97b8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df720(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c036220(uVar12,puVar2,param_3,param_4,
                          &PTR____CFConstantStringClassReference_110e02658,
                          &PTR____CFConstantStringClassReference_110e02678,puVar4,puVar1,puVar7,
                          puVar8,uVar9,param_9,param_7,puVar10,1);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(uVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(uVar6);
      _objc_release(puVar1);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010be9fa60(param_2,param_3,puVar2);
      _objc_release(puVar2);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b2e64; end: 1057b3183; -[SCCommercePixelMetricsLoggerImpl logViewShowcaseWithProductSetId:serveItemId:pixelId:itemIds:] */

void FUN_1057b2e64(double param_1,long param_2,undefined1 *param_3,undefined *param_4,long param_5,
                  undefined *param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **unaff_x23;
  undefined8 uVar9;
  double dVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((((*(byte *)(param_2 + 0x20) & 1) == 0) &&
       (puVar1 = param_4, func_0x00010c08fa60(), puVar1 != (undefined *)0x0)) &&
      (lVar2 = param_5, func_0x00010c08fa60(), lVar2 != 0)) &&
     ((puVar1 = param_6, func_0x00010c08fa60(), puVar1 != (undefined *)0x0 &&
      (lVar2 = param_7, func_0x00010bf529e0(), lVar2 != 0)))) {
    lVar2 = param_2;
    puVar6 = param_6;
    func_0x00010bdd6ac0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110dbea38;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e024d8;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_PTR_1126b4960;
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c14de00(puVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126bbf20;
      func_0x00010bdc1d20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf58700(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_initWeak(auStack_80,param_2);
      uVar9 = *(undefined8 *)(param_2 + 8);
      uVar8 = 0x15;
      _dispatch_get_global_queue(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 1.60807493534087e-314;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1057b3184;
      puStack_90 = &UNK_1108b22a8;
      unaff_x23 = &puStack_a8;
      param_3 = auStack_80;
      _objc_copyWeak(auStack_88,param_3);
      puVar6 = puVar1;
      func_0x00010c25f5e0(uVar9);
      _objc_release(uVar8);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar1);
      _objc_release(puVar3);
    }
    _objc_release();
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x23 + 4);
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume(param_4);
  _objc_retain(puVar6);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  dVar10 = param_1;
  func_0x00010c136b60(param_3);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained(param_4);
  puVar1 = param_4;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252ee0(puVar6);
  func_0x00010c0f66a0(param_3);
  _objc_release(param_3);
  func_0x00010bf9c200(puVar6);
  _objc_release(puVar6);
  func_0x00010c0a7a60((param_1 - dVar10) * 1000.0,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1057b3184; end: 1057b327b;  */

void FUN_1057b3184(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  double dVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  dVar2 = param_1;
  func_0x00010c136b60(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010bfcdf40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252ee0(param_4);
  func_0x00010c0f66a0(param_3);
  _objc_release(param_3);
  func_0x00010bf9c200(param_4);
  _objc_release(param_4);
  func_0x00010c0a7a60((param_1 - dVar2) * 1000.0,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1057b327c; end: 1057b32df; -[SCCommercePixelMetricsLoggerImpl _sendPixelRequest:] */

void FUN_1057b327c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c380(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057b32e0; end: 1057b32e7;  */

void FUN_1057b32e0(void)

{
  return;
}



/* Entry: 1057b32e8; end: 1057b3607; -[SCCommercePixelMetricsLoggerImpl _buildShowcasePixelDataWithPixelId:serveItemId:productSetId:itemIds:conversionType:eventType:] */

void FUN_1057b32e8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  func_0x00010c220220();
  _objc_release(param_4);
  func_0x00010c220220(puVar1,param_3,param_5,&PTR____CFConstantStringClassReference_110e02598);
  _objc_release(param_5);
  func_0x00010c220220(puVar1,param_3,param_9,&PTR____CFConstantStringClassReference_110e02358);
  _objc_release(param_9);
  func_0x00010c220220(puVar1,param_3,param_8,&PTR____CFConstantStringClassReference_110e025b8);
  _objc_release(param_8);
  uVar6 = param_7;
  func_0x00010bf446e0(param_7,param_3,&PTR____CFConstantStringClassReference_110db97b8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
  func_0x00010bf01c80(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c25cda0(uVar6,param_3,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar6);
  func_0x00010c220220(puVar1,param_3,uVar3,&PTR____CFConstantStringClassReference_110e023f8);
  func_0x00010c220220(puVar1,param_3,&PTR____CFConstantStringClassReference_110e02678,
                      &PTR____CFConstantStringClassReference_110dfa5f8);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1 * 1000.0,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1,param_3,puVar4,&PTR____CFConstantStringClassReference_110e02378);
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar4 = PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90;
  func_0x00010c22bc20(PTR__OBJC_CLASS___ASIdentifierManager_1126b8d90);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010befe540();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar2;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c220220(puVar1,param_3,puVar5,&PTR____CFConstantStringClassReference_110e023d8);
  puVar2 = PTR_PTR_1126be498;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c0fb000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfded20(puVar2,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110e023b8);
  _objc_release(puVar2);
  _objc_release(uVar6);
  puVar2 = PTR_PTR_1126be498;
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010bf8d9a0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfdec60(puVar2,param_3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220(puVar1,param_3,puVar2,&PTR____CFConstantStringClassReference_110e02398);
  _objc_release(puVar2);
  _objc_release(uVar6);
  func_0x00010bdfc160(param_2,param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1057b3608; end: 1057b3803; -[SCCommercePixelMetricsLoggerImpl _dictionaryToEncodedData:] */

undefined * FUN_1057b3608(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
  _objc_opt_new();
  uVar4 = param_3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (uVar5 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(uVar4);
      }
      uVar6 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar8 = uVar6;
      _objc_opt_isKindOfClass(uVar6,puVar7);
      uVar1 = uVar6;
      if ((uVar8 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar6);
      if ((uVar1 != 0) && (func_0x00010c08fa60(), uVar6 != 0)) {
        puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf64920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        func_0x00010bf06ae0(puVar3);
        _objc_release(puVar9);
      }
      _objc_release(uVar1);
      uVar11 = uVar11 + 1;
    } while (uVar5 != uVar11);
    uVar5 = uVar4;
    func_0x00010bf52a60();
  }
  _objc_release(uVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)*(byte *)(param_3 + 0x20);
}



/* Entry: 1057b3804; end: 1057b380b; -[SCCommercePixelMetricsLoggerImpl blockEventSending] */

undefined1 FUN_1057b3804(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 1057b380c; end: 1057b3813; -[SCCommercePixelMetricsLoggerImpl setBlockEventSending:] */

void FUN_1057b380c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 1057b3814; end: 1057b381b; -[SCCommercePixelMetricsLoggerImpl grapheneNetworkLogger] */

undefined8 FUN_1057b3814(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057b381c; end: 1057b384b; -[SCCommercePixelMetricsLoggerImpl setGrapheneNetworkLogger:] */

void FUN_1057b381c(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1057b384c; end: 1057b3893; -[SCCommercePixelMetricsLoggerImpl .cxx_destruct] */

void FUN_1057b384c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1057b3894; end: 1057b3b83; -[SCPixelRequestDataModel initWithPixelId:eventType:sdkVersion:timestamp:key:hashedEmail:hashedPhoneNum:hashedAdId:itemIds:numItems:currency:price:success:paymentInfoAvailable:transactionId:] */

undefined8 *
FUN_1057b3894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_80 = PTR_PTR_1126ea3f8;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    puVar1[5] = param_1;
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    puVar1[0xb] = param_12;
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 1) = param_15;
    _objc_retain(param_17);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    _objc_release(uVar2);
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar1;
}



/* Entry: 1057b3b84; end: 1057b3ba7; -[SCPixelRequestDataModel copyWithZone:] */

undefined8 FUN_1057b3b84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1057b3ba8; end: 1057b3cbf; -[SCPixelRequestDataModel hash] */

undefined8 * FUN_1057b3ba8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = &uStack_a0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar3;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_88 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uStack_90 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_78 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar3;
  func_0x000100505190(&uStack_a0,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == (undefined8 *)param_3) {
LAB_1057b3e84:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    puVar9 = (undefined1 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1057b3e90;
    puVar9 = (undefined1 *)puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar6 & 1) != 0) &&
       ((*(long *)((long)puVar5 + 0x58) == *(long *)(param_3 + 0x58) &&
        (*(char *)((long)puVar5 + 8) == param_3[8])))) {
      dVar11 = ABS(*(double *)((long)puVar5 + 0x28) - *(double *)(param_3 + 0x28));
      dVar10 = ABS(*(double *)((long)puVar5 + 0x28) + *(double *)(param_3 + 0x28)) *
               2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar1 = dVar11 < dVar10;
      }
      if ((((((bVar1) &&
             ((lVar7 = *(long *)((long)puVar5 + 0x10), lVar7 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x18), lVar7 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((((lVar7 = *(long *)((long)puVar5 + 0x20), lVar7 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
             ((lVar7 = *(long *)((long)puVar5 + 0x30), lVar7 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x38), lVar7 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))))) &&
          ((lVar7 = *(long *)((long)puVar5 + 0x40), lVar7 == *(long *)(param_3 + 0x40) ||
           (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
         ((((lVar7 = *(long *)((long)puVar5 + 0x48), lVar7 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x50), lVar7 == *(long *)(param_3 + 0x50) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
          ((((lVar7 = *(long *)((long)puVar5 + 0x60), lVar7 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)) &&
            ((lVar7 = *(long *)((long)puVar5 + 0x68), lVar7 == *(long *)(param_3 + 0x68) ||
             (func_0x00010c071ae0(), (int)lVar7 != 0)))) &&
           ((lVar7 = *(long *)((long)puVar5 + 0x70), lVar7 == *(long *)(param_3 + 0x70) ||
            (func_0x00010c071ae0(), (int)lVar7 != 0)))))))) {
        puVar9 = *(undefined1 **)((long)puVar5 + 0x78);
        if (puVar9 != *(undefined1 **)(param_3 + 0x78)) {
          func_0x00010c071ae0();
          goto LAB_1057b3e90;
        }
        goto LAB_1057b3e84;
      }
    }
    puVar9 = (undefined1 *)0x0;
  }
LAB_1057b3e90:
  _objc_release(param_3);
  return (undefined8 *)puVar9;
}



/* Entry: 1057b3cc0; end: 1057b3eab; -[SCPixelRequestDataModel isEqual:] */

long FUN_1057b3cc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1057b3e84:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1057b3e90;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
      dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if ((((((bVar1) &&
             ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x18), lVar4 == *(long *)(param_3 + 0x18) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
             ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
              (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
            ((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))))) &&
          ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
           (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
         ((((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
           ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
          ((((lVar4 = *(long *)(param_1 + 0x60), lVar4 == *(long *)(param_3 + 0x60) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
            ((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
             (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
           ((lVar4 = *(long *)(param_1 + 0x70), lVar4 == *(long *)(param_3 + 0x70) ||
            (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) {
        lVar4 = *(long *)(param_1 + 0x78);
        if (lVar4 != *(long *)(param_3 + 0x78)) {
          func_0x00010c071ae0();
          goto LAB_1057b3e90;
        }
        goto LAB_1057b3e84;
      }
    }
    lVar4 = 0;
  }
LAB_1057b3e90:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1057b3eac; end: 1057b3eb3; -[SCPixelRequestDataModel pixelId] */

undefined8 FUN_1057b3eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1057b3eb4; end: 1057b3ebb; -[SCPixelRequestDataModel eventType] */

undefined8 FUN_1057b3eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1057b3ebc; end: 1057b3ec3; -[SCPixelRequestDataModel sdkVersion] */

undefined8 FUN_1057b3ebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1057b3ec4; end: 1057b3ecb; -[SCPixelRequestDataModel timestamp] */

undefined8 FUN_1057b3ec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1057b3ecc; end: 1057b3ed3; -[SCPixelRequestDataModel key] */

undefined8 FUN_1057b3ecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1057b3ed4; end: 1057b3edb; -[SCPixelRequestDataModel hashedEmail] */

undefined8 FUN_1057b3ed4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057b3edc; end: 1057b3ee3; -[SCPixelRequestDataModel hashedPhoneNum] */

undefined8 FUN_1057b3edc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057b3ee4; end: 1057b3eeb; -[SCPixelRequestDataModel hashedAdId] */

undefined8 FUN_1057b3ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1057b3eec; end: 1057b3ef3; -[SCPixelRequestDataModel itemIds] */

undefined8 FUN_1057b3eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1057b3ef4; end: 1057b3efb; -[SCPixelRequestDataModel numItems] */

undefined8 FUN_1057b3ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1057b3efc; end: 1057b3f03; -[SCPixelRequestDataModel currency] */

undefined8 FUN_1057b3efc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1057b3f04; end: 1057b3f0b; -[SCPixelRequestDataModel price] */

undefined8 FUN_1057b3f04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1057b3f0c; end: 1057b3f13; -[SCPixelRequestDataModel success] */

undefined1 FUN_1057b3f0c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1057b3f14; end: 1057b3f1b; -[SCPixelRequestDataModel paymentInfoAvailable] */

undefined8 FUN_1057b3f14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1057b3f1c; end: 1057b3f23; -[SCPixelRequestDataModel transactionId] */

undefined8 FUN_1057b3f1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1057b3f24; end: 1057b3fcb; -[SCPixelRequestDataModel .cxx_destruct] */

void FUN_1057b3f24(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


