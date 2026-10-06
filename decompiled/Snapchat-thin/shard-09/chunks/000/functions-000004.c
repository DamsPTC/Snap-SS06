/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067da690; end: 1067da6a3; +[SCTIVTivData valdiMarshallableObjectDescriptor] */

void FUN_1067da690(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_11093dcb8;
  param_1[1] = &PTR_DAT_11093de20;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da6a4; end: 1067da6e3; -[SCTIVTivDeviceData initWithUserAgent:device:os:browser:] */

void FUN_1067da6a4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3458;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 1067da6e4; end: 1067da6f7; +[SCTIVTivDeviceData valdiMarshallableObjectDescriptor] */

void FUN_1067da6e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userAgent_11093de40;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da6f8; end: 1067da71f; -[SCTIVTivTransactionDescription initWithTitle:destination:] */

void FUN_1067da6f8(void)

{
  func_0x0001067da814(PTR_PTR_1126f3460);
  func_0x0001067da7f4();
  return;
}



/* Entry: 1067da720; end: 1067da733; +[SCTIVTivTransactionDescription valdiMarshallableObjectDescriptor] */

void FUN_1067da720(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_title_11093deb8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da734; end: 1067da757; -[SCTIVTivV2Context init] */

void FUN_1067da734(void)

{
  func_0x0001067da800(PTR_PTR_1126f3468);
  return;
}



/* Entry: 1067da758; end: 1067da76b; +[SCTIVTivV2Context valdiMarshallableObjectDescriptor] */

void FUN_1067da758(undefined8 *param_1)

{
  *param_1 = &PTR_s_onDismiss_11093df00;
  param_1[1] = &PTR_DAT_11093df78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da76c; end: 1067da793; -[SCTIVTivViewModel initWithInitialTivData:] */

void FUN_1067da76c(void)

{
  func_0x0001067da814(PTR_PTR_1126f3470);
  func_0x0001067da7f4();
  return;
}



/* Entry: 1067da794; end: 1067da7a7; +[SCTIVTivViewModel valdiMarshallableObjectDescriptor] */

void FUN_1067da794(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093df98;
  param_1[1] = &PTR_DAT_11093dfe0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da7a8; end: 1067da7db;  */

void FUN_1067da7a8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067da7dc; end: 1067da82b;  */

void FUN_1067da7dc(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067da82c; end: 1067da833; -[SCTIVServices requestHandler] */

undefined8 FUN_1067da82c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067da834; end: 1067da863; -[SCTIVServices setRequestHandler:] */

void FUN_1067da834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067da864; end: 1067da86f; -[SCTIVServices .cxx_destruct] */

void FUN_1067da864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067da870; end: 1067da8d7; +[EelTivRencryptionConfig descriptor] */

void FUN_1067da870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c4650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112aff5e0,
                        &PTR____CFConstantStringClassReference_110e60418,&PTR_DAT_113164df0,
                        &PTR_DAT_113164e08,2,8,0x1c);
    puRam00000001136c4650 = puVar1;
  }
  return;
}



/* Entry: 1067da8d8; end: 1067da8db;  */

void FUN_1067da8d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067da8dc; end: 1067da8ef;  */

void FUN_1067da8dc(void)

{
  FUN_1067dab38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067da8f0; end: 1067da8fb;  */

long FUN_1067da8f0(long param_1)

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
    ppuStack_38 = &PTR_DAT_11093e048;
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



/* Entry: 1067da8fc; end: 1067da93b;  */

void FUN_1067da8fc(void)

{
  func_0x0001067dab58();
  return;
}



/* Entry: 1067da93c; end: 1067da9f7;  */

void FUN_1067da93c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ae300(uVar2);
  func_0x0001067dab48();
  func_0x00010096bf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1067da9f8; end: 1067daaa3;  */

void FUN_1067da9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001001011a4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab000(uVar2);
  func_0x0001067dab48();
  func_0x00010096bf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1067daaa4; end: 1067dab37;  */

long FUN_1067daaa4(long param_1)

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
    ppuStack_38 = &PTR_DAT_11093e048;
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



/* Entry: 1067dab38; end: 1067dab63;  */

void FUN_1067dab38(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e088;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dab64; end: 1067dac0b; -[SCNTivClient tivRequestReceived:] */

void FUN_1067dab64(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_198 [360];
  
  func_0x0001067dae1c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1067dbe78(auStack_198);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_198);
  FUN_1067dad64(auStack_198);
  func_0x000100bbbd60();
  return;
}



/* Entry: 1067dac0c; end: 1067dacb3; -[SCNTivClient tivV2RequestReceived:] */

void FUN_1067dac0c(void)

{
  long unaff_x20;
  long *plVar1;
  undefined1 auStack_50 [32];
  
  func_0x0001067dae1c();
  plVar1 = *(long **)(unaff_x20 + 0x18);
  FUN_1067dc5a8(auStack_50);
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_50);
  func_0x000100100fec(auStack_50);
  func_0x000100bbbd60();
  return;
}



/* Entry: 1067dacb4; end: 1067dad0f; -[SCNTivClient destroy] */

void FUN_1067dacb4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
  return;
}



/* Entry: 1067dad10; end: 1067dad63; -[SCNTivClient .cxx_destruct] */

void FUN_1067dad10(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_11093e128;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000100bbbd30((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1067dad64; end: 1067dae0f;  */

void FUN_1067dad64(long param_1)

{
  func_0x0001002a2294(param_1 + 0x148);
  func_0x0001067dadbc(param_1 + 0x110);
  func_0x0001067dade0(param_1 + 0xa8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x78);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  func_0x000100bbbbe8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1);
  return;
}



/* Entry: 1067dae10; end: 1067dae3f;  */

void FUN_1067dae10(void)

{
  return;
}



/* Entry: 1067dae40; end: 1067daff7;  */

void FUN_1067dae40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain();
  func_0x00010c291200(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_58);
  func_0x00010bf6fd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_70);
  uVar1 = param_2;
  func_0x00010c0edc20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_88);
  func_0x00010bf21580(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_a0);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[2] = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uStack_68;
  param_1[3] = uStack_70;
  param_1[5] = uStack_60;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[8] = uStack_78;
  param_1[7] = uStack_80;
  param_1[6] = uStack_88;
  uStack_80 = 0;
  uStack_78 = 0;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[9] = uStack_a0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_a0);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_88);
  _objc_release(uVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_70);
  func_0x0001067db0f0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  func_0x0001067db0e8();
  func_0x0001067db0e0();
  return;
}



/* Entry: 1067daff8; end: 1067db0df;  */

void FUN_1067daff8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ce288;
  _objc_alloc(PTR_PTR_1126ce288);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + 0x18;
  func_0x0001001011a4(lVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + 0x30;
  func_0x0001001011a4(lVar4);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x48;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a7e0(puVar1,param_2,lVar2,lVar3,lVar4,param_1);
  func_0x0001067db0f8();
  func_0x0001067db0f0();
  func_0x0001067db0e8();
  func_0x0001067db0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067db0e0; end: 1067db107;  */

void FUN_1067db0e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067db108; end: 1067db11b;  */

void FUN_1067db108(void)

{
  FUN_1067db998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067db11c; end: 1067db127;  */

long FUN_1067db11c(long param_1)

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
    ppuStack_38 = &PTR_DAT_11093e190;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x0001067db9bc();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1067db128; end: 1067db163;  */

void FUN_1067db128(void)

{
  func_0x0001067dba04();
  return;
}



/* Entry: 1067db164; end: 1067db38f;  */

void FUN_1067db164(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 *puStack_48;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  FUN_1067dc1cc(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e720(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067db9f8();
  _objc_retain(param_4);
  puStack_70 = &uStack_78;
  uStack_78 = 0;
  uStack_68 = 0x3812000000;
  pcStack_60 = FUN_1067db420;
  uStack_58 = 0x1067db430;
  pcStack_50 = "";
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_11093e2e8;
  puVar3 = (undefined8 *)0xa0;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR_FUN_11093e308;
  puVar4 = puVar3 + 3;
  puVar3[4] = 0x3cb0b1bb;
  *puVar4 = 0;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0x32aaaba7;
  puVar3[0xc] = 0;
  puVar3[0xb] = 0;
  puVar3[0xe] = 0;
  puVar3[0xd] = 0;
  puVar3[0x10] = 0;
  puVar3[0xf] = 0;
  puVar3[0x12] = 0;
  puVar3[0x11] = 0;
  puVar3[0x13] = 0;
  puVar2[1] = puVar4;
  puVar2[2] = puVar3;
  puVar2[3] = puVar4;
  puVar2[4] = puVar3;
  do {
    func_0x0001067db9d4();
  } while (extraout_w11 != 0);
  *puVar2 = &PTR_FUN_11093e2a0;
  puStack_48 = puVar2;
  do {
    func_0x0001067db9d4();
  } while (extraout_w11_00 != 0);
  do {
    func_0x0001067db9d4();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x9;
  param_1[1] = puVar3;
  func_0x0001067db9a8();
  func_0x00010c26d0c0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001067db9e4();
  puVar2 = puStack_48;
  puStack_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x0001067db9b0();
  }
  func_0x00010096bb04();
  func_0x00010096bb04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1067db390; end: 1067db41f;  */

long FUN_1067db390(long param_1)

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
    ppuStack_38 = &PTR_DAT_11093e190;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x0001067db9bc();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1067db420; end: 1067db44f;  */

void FUN_1067db420(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 1067db450; end: 1067db6ab;  */

undefined8 FUN_1067db450(long param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  _objc_retain(param_2);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30);
  func_0x00010bfc1d60();
  uVar2 = (undefined4)param_2;
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  func_0x00010c067fc0();
  func_0x0001067db9bc();
  puStack_90 = (undefined4 *)0x0;
  uStack_88 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  FUN_1067db8fc(auStack_58,lVar4 + 8,&uStack_68);
  FUN_1067db958(&puStack_90,auStack_58);
  FUN_1067db748(auStack_58);
  FUN_1067db748(&uStack_68);
  puVar1 = puStack_90;
  __ZNSt3__15mutex4lockEv(puStack_90 + 0xe);
  *puStack_90 = uVar2;
  *(undefined1 *)(puStack_90 + 1) = 1;
  plVar3 = *(long **)(puStack_90 + 0x20);
  *(undefined8 *)(puStack_90 + 0x20) = 0;
  __ZNSt3__15mutex6unlockEv(puVar1 + 0xe);
  if (plVar3 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(puStack_90 + 2);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,&puStack_90);
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  func_0x0001067db9a8();
  func_0x0001067db9bc();
  func_0x00010096bb04();
  return 0;
}



/* Entry: 1067db6ac; end: 1067db6af;  */

undefined8 * FUN_1067db6ac(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_11093e2e8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_1067db81c(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_1067db748(param_1 + 3);
  FUN_1067db748(param_1 + 1);
  return param_1;
}



/* Entry: 1067db6b0; end: 1067db6c3;  */

void FUN_1067db6b0(void)

{
  FUN_1067db770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067db6c4; end: 1067db6c7;  */

undefined8 * FUN_1067db6c4(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_11093e2e8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_1067db81c(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_1067db748(param_1 + 3);
  FUN_1067db748(param_1 + 1);
  return param_1;
}



/* Entry: 1067db6c8; end: 1067db6db;  */

void FUN_1067db6c8(void)

{
  FUN_1067db770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067db6dc; end: 1067db6df;  */

void FUN_1067db6dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11093e308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067db6e0; end: 1067db6f3;  */

void FUN_1067db6e0(void)

{
  FUN_1067db734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067db6f4; end: 1067db733;  */

void FUN_1067db6f4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (lVar1 != 0) {
    func_0x0001067db9b0();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x20);
  return;
}



/* Entry: 1067db734; end: 1067db747;  */

void FUN_1067db734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067db748; end: 1067db76f;  */

long FUN_1067db748(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1067db770; end: 1067db81b;  */

undefined8 * FUN_1067db770(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_11093e2e8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_1067db81c(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_1067db748(param_1 + 3);
  FUN_1067db748(param_1 + 1);
  return param_1;
}



/* Entry: 1067db81c; end: 1067db8fb;  */

void FUN_1067db81c(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1067db8fc(auStack_40,param_1 + 8,&uStack_50);
  FUN_1067db958(alStack_30,auStack_40);
  FUN_1067db748(auStack_40);
  func_0x0001067db9a8();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x38);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x78,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x80);
  *(undefined8 *)(alStack_30[0] + 0x80) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x38);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 8);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x0001067db9c4();
  }
  FUN_1067db748(alStack_30);
  return;
}



/* Entry: 1067db8fc; end: 1067db957;  */

void FUN_1067db8fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 1067db958; end: 1067db997;  */

undefined8 * FUN_1067db958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x0001067db9a8();
  return param_1;
}



/* Entry: 1067db998; end: 1067dba13;  */

void FUN_1067db998(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093e1d0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dba14; end: 1067dba27;  */

void FUN_1067dba14(void)

{
  FUN_1067dbe34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1067dba28; end: 1067dba33;  */

long FUN_1067dba28(long param_1)

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
    ppuStack_38 = &PTR_DAT_11093e3a0;
    _objc_retain(lVar4);
    func_0x0001005f2030(lVar1,&ppuStack_38,lVar4);
    func_0x0001067dbe64();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x0001005f2294(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 1067dba34; end: 1067dba73;  */

void FUN_1067dba34(void)

{
  func_0x0001067dbe58();
  return;
}



/* Entry: 1067dba74; end: 1067dbb07;  */

void FUN_1067dba74(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  FUN_1067dc660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e700(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067dbe64();
  FUN_1067dbb98(param_1,uVar2);
  func_0x00010096bcb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 1067dbb08; end: 1067dbb97;  */

long FUN_1067dbb08(long param_1)

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
    ppuStack_38 = &PTR_DAT_11093e3a0;
    _objc_retain(lVar3);
    func_0x0001005f2030(param_1,&ppuStack_38,lVar3);
    func_0x0001067dbe64();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x0001005f2294(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 1067dbb98; end: 1067dbcab;  */

void FUN_1067dbb98(void)

{
  long lVar1;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  long lStack_38;
  
  func_0x00010096bb0c();
  puStack_60 = &uStack_68;
  uStack_68 = 0;
  uStack_58 = 0x3812000000;
  pcStack_50 = FUN_1067dbcac;
  uStack_48 = 0x1067dbcbc;
  pcStack_40 = "";
  func_0x0001003b69cc(&lStack_38);
  func_0x0001003b6c18(puStack_60[6]);
  func_0x00010c26d0c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001067dbe6c();
  lVar1 = lStack_38;
  lStack_38 = 0;
  if (lVar1 != 0) {
    func_0x0001067dbe44();
  }
  func_0x00010096bd54();
  return;
}



/* Entry: 1067dbcac; end: 1067dbcc3;  */

void FUN_1067dbcac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 1067dbcc4; end: 1067dbdc7;  */

undefined8 FUN_1067dbcc4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  func_0x0001003b8370(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30));
  func_0x00010096bd54();
  return 0;
}



/* Entry: 1067dbdc8; end: 1067dbe33;  */

void FUN_1067dbdc8(undefined8 param_1)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  __ZNSt13runtime_errorC1ERKS_(auStack_38);
  func_0x0001052b2bd0(auStack_28,auStack_38);
  func_0x000104bf33cc(param_1,auStack_28);
  __ZNSt13exception_ptrD1Ev(auStack_28);
  __ZNSt13runtime_errorD1Ev(auStack_38);
  return;
}



/* Entry: 1067dbe34; end: 1067dbe77;  */

void FUN_1067dbe34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11093e3e0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1067dbe78; end: 1067dc1cb;  */

void FUN_1067dbe78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [48];
  undefined1 auStack_158 [96];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c279800();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_80);
  uVar2 = param_2;
  func_0x00010bf21380();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_98);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_b0);
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_c8);
  uVar3 = param_2;
  func_0x00010c136b20();
  uVar4 = param_2;
  func_0x00010bf9c800(param_2);
  uVar5 = param_2;
  func_0x00010bf5ffe0(param_2);
  func_0x00010bf39960();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_e0);
  func_0x00010bf53220(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(auStack_f8);
  func_0x00010bf70280(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1067dae40(auStack_158);
  uVar6 = param_2;
  func_0x00010c279780();
  func_0x00010c2797e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_1067dc6dc(auStack_188);
  func_0x00010c1220c0();
  func_0x00010c11a500(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a65c(auStack_1a8);
  FUN_1067dc3fc(param_1,auStack_80,auStack_98,auStack_b0,auStack_c8,uVar3,uVar4,uVar5,auStack_e0,
                auStack_f8,auStack_158,(int)uVar6);
  func_0x0001002a2294(auStack_1a8);
  func_0x0001067dc578();
  func_0x0001067dadbc(auStack_188);
  func_0x0001067dc588();
  func_0x0001067dade0(auStack_158);
  func_0x0001067dc570();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
  func_0x0001067dc580();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
  func_0x0001067dc5a0();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  func_0x0001067dc598();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x0001067dc590();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_98);
  _objc_release(uVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  _objc_release(uVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1067dc1cc; end: 1067dc3fb;  */

void FUN_1067dc1cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar4 = PTR_PTR_1126ce298;
  _objc_alloc(PTR_PTR_1126ce298);
  lVar5 = param_1;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + 0x18;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + 0x30;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + 0x48;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  lVar9 = param_1 + 0x78;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + 0x90;
  func_0x0001001011a4();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + 0xa8;
  FUN_1067daff8();
  _objc_retainAutoreleasedReturnValue();
  iVar3 = *(int *)(param_1 + 0x108);
  lVar12 = param_1 + 0x110;
  FUN_1067dc7d0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x140);
  param_1 = param_1 + 0x148;
  func_0x0001006d1308();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0550e0(puVar4,param_2,lVar5,lVar6,lVar7,lVar8,uVar1,uVar2,uVar13,lVar9,lVar10,lVar11,
                      (long)iVar3,lVar12,uVar14,param_1);
  FUN_1067dc570();
  _objc_release(lVar12);
  _objc_release(lVar11);
  func_0x0001067dc580();
  _objc_release(lVar9);
  func_0x0001067dc578();
  _objc_release(lVar7);
  func_0x0001067dc588();
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067dc3fc; end: 1067dc56f;  */

undefined8 *
FUN_1067dc3fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined4 param_12,
             undefined4 param_13,undefined8 *param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  uVar2 = param_4[1];
  uVar1 = *param_4;
  param_1[8] = param_4[2];
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_4[1] = 0;
  param_4[2] = 0;
  *param_4 = 0;
  uVar2 = param_5[1];
  uVar1 = *param_5;
  param_1[0xb] = param_5[2];
  param_1[10] = uVar2;
  param_1[9] = uVar1;
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  param_1[0xc] = param_6;
  param_1[0xd] = param_7;
  param_1[0xe] = param_8;
  uVar2 = param_9[1];
  uVar1 = *param_9;
  param_1[0x11] = param_9[2];
  param_1[0x10] = uVar2;
  param_1[0xf] = uVar1;
  param_9[1] = 0;
  param_9[2] = 0;
  *param_9 = 0;
  uVar2 = param_10[1];
  uVar1 = *param_10;
  param_1[0x14] = param_10[2];
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_10[1] = 0;
  param_10[2] = 0;
  *param_10 = 0;
  uVar2 = param_11[1];
  uVar1 = *param_11;
  param_1[0x17] = param_11[2];
  param_1[0x16] = uVar2;
  param_1[0x15] = uVar1;
  param_11[1] = 0;
  param_11[2] = 0;
  *param_11 = 0;
  uVar2 = param_11[4];
  uVar1 = param_11[3];
  param_1[0x1a] = param_11[5];
  param_1[0x19] = uVar2;
  param_1[0x18] = uVar1;
  param_11[4] = 0;
  param_11[5] = 0;
  param_11[3] = 0;
  uVar2 = param_11[7];
  uVar1 = param_11[6];
  param_1[0x1d] = param_11[8];
  param_1[0x1c] = uVar2;
  param_1[0x1b] = uVar1;
  param_11[7] = 0;
  param_11[8] = 0;
  param_11[6] = 0;
  uVar2 = param_11[10];
  uVar1 = param_11[9];
  param_1[0x20] = param_11[0xb];
  param_1[0x1f] = uVar2;
  param_1[0x1e] = uVar1;
  param_11[9] = 0;
  param_11[10] = 0;
  param_11[0xb] = 0;
  *(undefined4 *)(param_1 + 0x21) = param_12;
  uVar2 = param_14[1];
  uVar1 = *param_14;
  param_1[0x24] = param_14[2];
  param_1[0x23] = uVar2;
  param_1[0x22] = uVar1;
  param_14[1] = 0;
  param_14[2] = 0;
  *param_14 = 0;
  uVar2 = param_14[4];
  uVar1 = param_14[3];
  param_1[0x27] = param_14[5];
  param_1[0x26] = uVar2;
  param_1[0x25] = uVar1;
  param_14[4] = 0;
  param_14[5] = 0;
  param_14[3] = 0;
  param_1[0x28] = param_15;
  func_0x0001006b78fc(param_1 + 0x29,param_16);
  return param_1;
}



/* Entry: 1067dc570; end: 1067dc5a7;  */

void FUN_1067dc570(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067dc5a8; end: 1067dc65f;  */

void FUN_1067dc5a8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf05820(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010029a6ec(&uStack_50);
  func_0x00010c1220e0();
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[2] = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  *(int *)(param_1 + 3) = (int)param_2;
  func_0x000100100fec(&uStack_50);
  _objc_release(uVar1);
  FUN_1067dc6d4();
  return;
}



/* Entry: 1067dc660; end: 1067dc6d3;  */

void FUN_1067dc660(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ce258;
  _objc_alloc(PTR_PTR_1126ce258);
  lVar2 = param_1;
  func_0x000100101220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff34a0(puVar1,param_2,lVar2,(long)*(int *)(param_1 + 0x18));
  FUN_1067dc6d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067dc6d4; end: 1067dc6db;  */

void FUN_1067dc6d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067dc6dc; end: 1067dc7cf;  */

void FUN_1067dc6dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_48);
  func_0x00010bf6eb60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000fbca4(&uStack_60);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[2] = uStack_38;
  uStack_40 = 0;
  uStack_38 = 0;
  param_1[4] = uStack_58;
  param_1[3] = uStack_60;
  param_1[5] = uStack_50;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_60);
  _objc_release(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_48);
  FUN_1067dc868();
  func_0x0001067dc870();
  return;
}



/* Entry: 1067dc7d0; end: 1067dc867;  */

void FUN_1067dc7d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126ce290;
  _objc_alloc(PTR_PTR_1126ce290);
  lVar2 = param_1;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  func_0x0001001011a4(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052e60(puVar1,param_2,lVar2,param_1);
  FUN_1067dc868();
  func_0x0001067dc870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067dc868; end: 1067dc877;  */

void FUN_1067dc868(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067dc878; end: 1067dc99b; -[SCNTivDeviceData initWithUserAgent:device:os:browser:] */

undefined1 *
FUN_1067dc878(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3490;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x0001067dcd7c(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x0001067dcd7c(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x0001067dcd7c(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x0001067dcd7c(uVar2);
  }
  func_0x0001067dcd74();
  func_0x0001067dcd64();
  func_0x0001067dcd6c();
  func_0x0001067dcd5c();
  return (undefined1 *)puVar1;
}



/* Entry: 1067dc99c; end: 1067dcbcf; -[SCNTivDeviceData isEqual:] */

undefined8 FUN_1067dc99c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce288;
  _objc_opt_class(PTR_PTR_1126ce288);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar5 = param_1;
    func_0x00010c291200();
    iVar1 = (int)uVar5;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c291200(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = param_1;
      func_0x00010bf6fd20();
      iVar1 = (int)uVar5;
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010bf6fd20(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_1;
        func_0x00010c0edc20();
        iVar1 = (int)uVar5;
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_3;
        func_0x00010c0edc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        if (iVar1 == 0) {
          uVar5 = 0;
        }
        else {
          func_0x00010bf21580(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf21580(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_1;
          func_0x00010c0720c0(param_1);
          _objc_release(param_3);
          _objc_release(param_1);
        }
        _objc_release(uVar4);
        func_0x0001067dcd84();
      }
      _objc_release(uVar3);
      func_0x0001067dcd74();
    }
    func_0x0001067dcd64();
    func_0x0001067dcd6c();
    func_0x0001067dcd5c();
  }
  func_0x0001067dcd5c();
  return uVar5;
}



/* Entry: 1067dcbd0; end: 1067dccff; -[SCNTivDeviceData hash] */

ulong FUN_1067dcbd0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c291200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar3 = param_1;
  func_0x00010bf6fd20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar4 = param_1;
  func_0x00010c0edc20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bf21580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x0001067dcd74();
  func_0x0001067dcd84();
  func_0x0001067dcd64();
  func_0x0001067dcd6c();
  func_0x0001067dcd5c();
  return uVar2 ^ uVar1 ^ uVar3 ^ uVar4 ^ param_1;
}



/* Entry: 1067dcd00; end: 1067dcd07; -[SCNTivDeviceData userAgent] */

undefined8 FUN_1067dcd00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067dcd08; end: 1067dcd0f; -[SCNTivDeviceData device] */

undefined8 FUN_1067dcd08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067dcd10; end: 1067dcd17; -[SCNTivDeviceData os] */

undefined8 FUN_1067dcd10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067dcd18; end: 1067dcd1f; -[SCNTivDeviceData browser] */

undefined8 FUN_1067dcd18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067dcd20; end: 1067dcd5b; -[SCNTivDeviceData .cxx_destruct] */

void FUN_1067dcd20(long param_1)

{
  func_0x0001067dcd8c(param_1 + 0x20);
  func_0x0001067dcd8c(param_1 + 0x18);
  func_0x0001067dcd8c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067dcd5c; end: 1067dcd93;  */

void FUN_1067dcd5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1067dcd94; end: 1067dd007; -[SCNTivRequest initWithTransactionId:broadcastId:userId:sessionId:requestTime:expirationTime:currentServerTime:city:country:deviceData:transaction:transactionDescription:receiptTime:publicKeys:] */

undefined8 *
FUN_1067dcd94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_14);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126f3498;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x0001067dd8ac(uVar2);
    func_0x00010bf51e00();
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x0001067dd8ac(uVar2);
    func_0x00010bf51e00();
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x0001067dd8ac(uVar2);
    func_0x00010bf51e00();
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x0001067dd8ac(uVar2);
    puVar1[5] = param_7;
    puVar1[6] = param_8;
    puVar1[7] = param_9;
    func_0x00010bf51e00();
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x0001067dd8ac(uVar2);
    func_0x00010bf51e00();
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x0001067dd8ac(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar1[0xb] = param_13;
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    puVar1[0xd] = param_15;
    func_0x00010bf51e00();
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x0001067dd8ac(uVar2);
  }
  func_0x0001067dd8bc();
  func_0x0001067dd904();
  func_0x0001067dd8e4();
  func_0x0001067dd914();
  func_0x0001067dd8c4();
  func_0x0001067dd91c();
  func_0x0001067dd8cc();
  func_0x0001067dd92c();
  func_0x0001067dd8b4();
  return puVar1;
}



/* Entry: 1067dd008; end: 1067dd54b; -[SCNTivRequest isEqual:] */

long FUN_1067dd008(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x26;
  ulong uStack_c8;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ce298;
  _objc_opt_class(PTR_PTR_1126ce298);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    param_1 = 0;
    goto LAB_1067dd380;
  }
  _objc_retain(param_3);
  lVar4 = param_1;
  func_0x00010c279800();
  iVar1 = (int)lVar4;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279800(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  if (iVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar4 = param_1;
    func_0x00010bf21380();
    iVar1 = (int)lVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf21380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    if (iVar1 == 0) {
      param_1 = 0;
    }
    else {
      lVar4 = param_1;
      func_0x00010c2923e0();
      iVar1 = (int)lVar4;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if (iVar1 == 0) {
        param_1 = 0;
      }
      else {
        lVar4 = param_1;
        func_0x00010c15ffa0();
        iVar1 = (int)lVar4;
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15ffa0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        if (iVar1 == 0) {
LAB_1067dd358:
          param_1 = 0;
        }
        else {
          lVar4 = param_1;
          func_0x00010c136b20();
          func_0x0001067dd934();
          func_0x00010c136b20();
          if (unaff_x26 != lVar4) goto LAB_1067dd358;
          lVar4 = param_1;
          func_0x00010bf9c800();
          func_0x0001067dd934();
          func_0x00010bf9c800();
          if (unaff_x26 != lVar4) goto LAB_1067dd358;
          lVar4 = param_1;
          func_0x00010bf5ffe0();
          func_0x0001067dd934();
          func_0x00010bf5ffe0();
          if (unaff_x26 != lVar4) goto LAB_1067dd358;
          lVar4 = param_1;
          func_0x00010bf39960();
          iVar1 = (int)lVar4;
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf39960();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          if (iVar1 == 0) {
            param_1 = 0;
          }
          else {
            lVar4 = param_1;
            func_0x00010bf53220();
            iVar1 = (int)lVar4;
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf53220();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            if (iVar1 == 0) {
              param_1 = 0;
            }
            else {
              lVar4 = param_1;
              func_0x00010bf70280();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_3;
              func_0x00010bf70280();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c071ae0();
              if ((int)lVar5 == 0) {
LAB_1067dd3b8:
                param_1 = 0;
              }
              else {
                lVar5 = param_1;
                func_0x00010c279780();
                func_0x0001067dd934();
                func_0x00010c279780();
                if (unaff_x26 != lVar5) goto LAB_1067dd3b8;
                lVar5 = param_1;
                func_0x00010c2797e0();
                iVar1 = (int)lVar5;
                _objc_retainAutoreleasedReturnValue();
                uVar6 = param_3;
                func_0x00010c2797e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c071ae0();
                if (iVar1 == 0) {
LAB_1067dd3c0:
                  param_1 = 0;
                }
                else {
                  lVar5 = param_1;
                  func_0x00010c1220c0();
                  func_0x0001067dd934();
                  func_0x00010c1220c0();
                  if (unaff_x26 != lVar5) goto LAB_1067dd3c0;
                  lVar5 = param_1;
                  func_0x00010c11a500();
                  _objc_retainAutoreleasedReturnValue();
                  if (lVar5 == 0) {
                    uStack_c8 = param_3;
                    func_0x00010c11a500();
                    _objc_retainAutoreleasedReturnValue();
                    if (uStack_c8 != 0) goto LAB_1067dd2cc;
                    uStack_c8 = 0;
                    param_1 = 1;
LAB_1067dd3dc:
                    _objc_release(uStack_c8);
                  }
                  else {
LAB_1067dd2cc:
                    lVar7 = param_1;
                    func_0x00010c11a500();
                    _objc_retainAutoreleasedReturnValue();
                    if (lVar7 == 0) {
                      param_1 = 0;
                    }
                    else {
                      func_0x00010c11a500();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c11a500();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c071ae0(param_1);
                      _objc_release(param_3);
                      func_0x0001067dd8e4();
                      _objc_release(lVar7);
                    }
                    if (lVar5 == 0) goto LAB_1067dd3dc;
                  }
                  func_0x0001067dd904();
                }
                _objc_release(uVar6);
                func_0x0001067dd8f4();
              }
              _objc_release(uVar3);
              _objc_release(lVar4);
            }
            func_0x0001067dd8fc();
            func_0x0001067dd90c();
          }
          func_0x0001067dd8ec();
          func_0x0001067dd924();
        }
        func_0x0001067dd914();
        func_0x0001067dd8dc();
      }
      func_0x0001067dd8bc();
      func_0x0001067dd8c4();
    }
    func_0x0001067dd91c();
    func_0x0001067dd8cc();
  }
  func_0x0001067dd92c();
  func_0x0001067dd8b4();
  func_0x0001067dd8d4();
LAB_1067dd380:
  func_0x0001067dd8d4();
  return param_1;
}



/* Entry: 1067dd54c; end: 1067dd7cf; -[SCNTivRequest hash] */

ulong FUN_1067dd54c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c279800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar3 = param_1;
  func_0x00010bf21380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar4 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar5 = param_1;
  func_0x00010c15ffa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar6 = param_1;
  func_0x00010c136b20();
  uVar7 = param_1;
  func_0x00010bf9c800();
  uVar8 = param_1;
  func_0x00010bf5ffe0();
  uVar9 = param_1;
  func_0x00010bf39960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar10 = param_1;
  func_0x00010bf53220(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar11 = param_1;
  func_0x00010bf70280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar12 = param_1;
  func_0x00010c279780(param_1);
  uVar13 = param_1;
  func_0x00010c2797e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar14 = param_1;
  func_0x00010c1220c0(param_1);
  func_0x00010c11a500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x0001067dd8c4();
  func_0x0001067dd8bc();
  func_0x0001067dd8cc();
  func_0x0001067dd8b4();
  func_0x0001067dd8f4();
  func_0x0001067dd8fc();
  func_0x0001067dd90c();
  func_0x0001067dd8ec();
  func_0x0001067dd924();
  func_0x0001067dd8dc();
  return uVar2 ^ uVar1 ^ uVar3 ^ uVar4 ^ uVar5 ^ uVar6 ^ uVar7 ^ uVar8 ^ uVar9 ^ uVar10 ^
         uVar11 ^ uVar12 ^ uVar13 ^ uVar14 ^ param_1;
}



/* Entry: 1067dd7d0; end: 1067dd7d7; -[SCNTivRequest transactionId] */

undefined8 FUN_1067dd7d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067dd7d8; end: 1067dd7df; -[SCNTivRequest broadcastId] */

undefined8 FUN_1067dd7d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067dd7e0; end: 1067dd7e7; -[SCNTivRequest userId] */

undefined8 FUN_1067dd7e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067dd7e8; end: 1067dd7ef; -[SCNTivRequest sessionId] */

undefined8 FUN_1067dd7e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067dd7f0; end: 1067dd7f7; -[SCNTivRequest requestTime] */

undefined8 FUN_1067dd7f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067dd7f8; end: 1067dd7ff; -[SCNTivRequest expirationTime] */

undefined8 FUN_1067dd7f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1067dd800; end: 1067dd807; -[SCNTivRequest currentServerTime] */

undefined8 FUN_1067dd800(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1067dd808; end: 1067dd80f; -[SCNTivRequest city] */

undefined8 FUN_1067dd808(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1067dd810; end: 1067dd817; -[SCNTivRequest country] */

undefined8 FUN_1067dd810(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1067dd818; end: 1067dd81f; -[SCNTivRequest deviceData] */

undefined8 FUN_1067dd818(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1067dd820; end: 1067dd827; -[SCNTivRequest transaction] */

undefined8 FUN_1067dd820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1067dd828; end: 1067dd82f; -[SCNTivRequest transactionDescription] */

undefined8 FUN_1067dd828(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1067dd830; end: 1067dd837; -[SCNTivRequest receiptTime] */

undefined8 FUN_1067dd830(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1067dd838; end: 1067dd83f; -[SCNTivRequest publicKeys] */

undefined8 FUN_1067dd838(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1067dd840; end: 1067dd8a3; -[SCNTivRequest .cxx_destruct] */

void FUN_1067dd840(long param_1)

{
  FUN_1067dd8a4(param_1 + 0x70);
  FUN_1067dd8a4(param_1 + 0x60);
  FUN_1067dd8a4(param_1 + 0x50);
  FUN_1067dd8a4(param_1 + 0x48);
  FUN_1067dd8a4(param_1 + 0x40);
  FUN_1067dd8a4(param_1 + 0x20);
  FUN_1067dd8a4(param_1 + 0x18);
  FUN_1067dd8a4(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


