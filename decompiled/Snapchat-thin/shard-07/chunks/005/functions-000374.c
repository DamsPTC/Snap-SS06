/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056cb70c; end: 1056cb71f;  */

void FUN_1056cb70c(void)

{
  FUN_1056cb844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cb720; end: 1056cb72f;  */

void FUN_1056cb720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056cb728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056cb730; end: 1056cb843;  */

undefined8 *
FUN_1056cb730(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_2;
  lVar3 = param_2[1];
  uStack_90 = uVar1;
  lStack_88 = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x0001056cba10();
    } while (extraout_w10 != 0);
  }
  uVar2 = *param_3;
  lVar4 = param_3[1];
  uStack_a0 = uVar2;
  lStack_98 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001056cba10();
    } while (extraout_w10_00 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b8,param_4);
  uVar7 = uStack_a8;
  uVar6 = uStack_b0;
  uVar5 = uStack_b8;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  *param_1 = &PTR_FUN_1108a8f78;
  param_1[1] = &PTR_FUN_1108a8c88;
  param_1[2] = uVar1;
  param_1[3] = lVar3;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[4] = uVar2;
  param_1[5] = lVar4;
  uStack_60 = 0;
  uStack_58 = 0;
  param_1[8] = uVar7;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_80);
  func_0x000100450be4(&uStack_60);
  func_0x0001052a9ef8(&uStack_50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_b8);
  func_0x0001056cba08();
  func_0x0001052a9ef8(&uStack_90);
  return param_1;
}



/* Entry: 1056cb844; end: 1056cb863;  */

void FUN_1056cb844(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a8fc8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056cb864; end: 1056cb8b7;  */

long FUN_1056cb864(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056cb8b8; end: 1056cb8cb;  */

void FUN_1056cb8b8(void)

{
  func_0x0001056cb88c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cb8cc; end: 1056cb913;  */

void FUN_1056cb8cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_SUB_1108a9018;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001056cba10();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1056cb914; end: 1056cb963;  */

void FUN_1056cb914(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_1108a9018;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001056cba10(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1056cb964; end: 1056cb9b3;  */

void FUN_1056cb964(void)

{
  long unaff_x19;
  undefined1 auStack_50 [48];
  
  func_0x0001056cba20();
  FUN_1056cb278();
  (**(code **)(**(long **)(unaff_x19 + 8) + 0x10))(*(long **)(unaff_x19 + 8),auStack_50);
  FUN_1056ca00c(auStack_50);
  return;
}



/* Entry: 1056cb9b4; end: 1056cb9eb;  */

long FUN_1056cb9b4(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1108a9078);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1056cb9ec; end: 1056cba3f;  */

undefined ** FUN_1056cb9ec(void)

{
  return &PTR_DAT_1108a9078;
}



/* Entry: 1056cba40; end: 1056cbaa7; +[SCMediaPickerTinselConfig descriptor] */

void FUN_1056cba40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58470,
                        &PTR____CFConstantStringClassReference_110df6598,&PTR_DAT_1130f32c0,
                        &PTR_DAT_1130f32d8,3,0x10,0x1c);
    puRam00000001136bd710 = puVar1;
  }
  return;
}



/* Entry: 1056cbaa8; end: 1056cbb1b; -[UNISCTrustSafetySafetyGatewayService initWithUnifiedGrpcService:] */

undefined1 * FUN_1056cbaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9ad8;
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



/* Entry: 1056cbb1c; end: 1056cbbff; -[UNISCTrustSafetySafetyGatewayService getVerdictsWithRequest:callOptionsBuilder:handler:] */

void FUN_1056cbb1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puVar2 = PTR_PTR_1126bd118;
  _objc_opt_class(PTR_PTR_1126bd118);
  func_0x00010c0199c0(puVar1,param_2,param_5,puVar2);
  _objc_release(param_5);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c27f2c0(uVar4,param_2,&PTR____CFConstantStringClassReference_110df65b8,uVar3,param_4,
                      puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1056cbc00; end: 1056cbc0b; -[UNISCTrustSafetySafetyGatewayService .cxx_destruct] */

void FUN_1056cbc00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056cbc0c; end: 1056cbc87;  */

undefined * FUN_1056cbc0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd718 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df65d8,
                        &UNK_10ddb9e10,&UNK_10ddba01c,0x1b,FUN_1056cbc88,0);
    do {
      if (puRam00000001136bd718 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd718;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd718,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd718 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd718;
}



/* Entry: 1056cbc88; end: 1056cbc93;  */

bool FUN_1056cbc88(uint param_1)

{
  return param_1 < 0x1b;
}



/* Entry: 1056cbc94; end: 1056cbd0f;  */

undefined * FUN_1056cbc94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd720 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df65f8,
                        &UNK_10ddba088,&UNK_10ddba0a0,3,FUN_1056cbd10,0);
    do {
      if (puRam00000001136bd720 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd720;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd720,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd720 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd720;
}



/* Entry: 1056cbd10; end: 1056cbd1b;  */

bool FUN_1056cbd10(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1056cbd1c; end: 1056cbdab;  */

undefined * FUN_1056cbd1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd728 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df6618,
                        &UNK_10ddba0ac,&UNK_10ddba168,0x14,FUN_1056cbdac,0,&UNK_10ddba1b8);
    do {
      if (puRam00000001136bd728 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd728;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd728,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd728 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd728;
}



/* Entry: 1056cbdac; end: 1056cbdb7;  */

bool FUN_1056cbdac(uint param_1)

{
  return param_1 < 0x14;
}



/* Entry: 1056cbdb8; end: 1056cbe33;  */

undefined * FUN_1056cbdb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd730 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df6638,
                        &UNK_10ddba1bf,&UNK_10ddba1e4,4,FUN_1056cbe34,0);
    do {
      if (puRam00000001136bd730 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd730;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd730,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd730 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd730;
}



/* Entry: 1056cbe34; end: 1056cbe3f;  */

bool FUN_1056cbe34(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1056cbe40; end: 1056cbebb;  */

undefined * FUN_1056cbe40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd738 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df6658,
                        &UNK_10ddba1f4,&UNK_10ddba28c,0xd,FUN_1056cbebc,0);
    do {
      if (puRam00000001136bd738 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd738;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd738,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd738 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd738;
}



/* Entry: 1056cbebc; end: 1056cbec7;  */

bool FUN_1056cbebc(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 1056cbec8; end: 1056cbf63; +[SCTrustSafetyMediaData descriptor] */

undefined * FUN_1056cbec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58560,
                        &PTR____CFConstantStringClassReference_110db5498,&PTR_DAT_1130f3360,
                        &PTR_s_mediaURL_1130f3718,7,0x40,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8a808);
    puRam00000001136bd740 = puVar1;
  }
  return puRam00000001136bd740;
}



/* Entry: 1056cbf64; end: 1056cbfdf; +[SCTrustSafetyMediaData_AesCbcPkcs5Encryption descriptor] */

undefined * FUN_1056cbf64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a585b0,
                        &PTR____CFConstantStringClassReference_110df6678,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f33b8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd748 = puVar1;
  }
  return puRam00000001136bd748;
}



/* Entry: 1056cbfe0; end: 1056cc05b; +[SCTrustSafetyMediaData_AesGcmNoPaddingEncryption descriptor] */

undefined * FUN_1056cbfe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58600,
                        &PTR____CFConstantStringClassReference_110df6698,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f33f8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd750 = puVar1;
  }
  return puRam00000001136bd750;
}



/* Entry: 1056cc05c; end: 1056cc0d7; +[SCTrustSafetyMediaData_NoEncryption descriptor] */

undefined * FUN_1056cc05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58650,
                        &PTR____CFConstantStringClassReference_110df66b8,&PTR_DAT_1130f3360,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136bd758 = puVar1;
  }
  return puRam00000001136bd758;
}



/* Entry: 1056cc0d8; end: 1056cc13f; +[SCTrustSafetyGetVerdictsRequest descriptor] */

void FUN_1056cc0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a586a0,
                        &PTR____CFConstantStringClassReference_110df66d8,&PTR_DAT_1130f3360,
                        &PTR_s_media_1130f38f8,9,0x40,0x1c);
    puRam00000001136bd760 = puVar1;
  }
  return;
}



/* Entry: 1056cc140; end: 1056cc1bb; +[SCTrustSafetyParams descriptor] */

undefined * FUN_1056cc140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a586f0,
                        &PTR____CFConstantStringClassReference_110df66f8,&PTR_DAT_1130f3360,
                        &PTR_s_mediaURL_1130f3a18,0x12,0x90,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bd768 = puVar1;
  }
  return puRam00000001136bd768;
}



/* Entry: 1056cc1bc; end: 1056cc223; +[SCTrustSafetyTinselParams descriptor] */

void FUN_1056cc1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58740,
                        &PTR____CFConstantStringClassReference_110df6718,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f3678,5,0x30,0x1c);
    puRam00000001136bd770 = puVar1;
  }
  return;
}



/* Entry: 1056cc224; end: 1056cc28b; +[SCTrustSafetyTinselParamsV3 descriptor] */

void FUN_1056cc224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58790,
                        &PTR____CFConstantStringClassReference_110df6738,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f3538,3,0x20,0x1c);
    puRam00000001136bd778 = puVar1;
  }
  return;
}



/* Entry: 1056cc28c; end: 1056cc317; +[SCTrustSafetyTinselMedia descriptor] */

undefined * FUN_1056cc28c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a587e0,
                        &PTR____CFConstantStringClassReference_110df6758,&PTR_DAT_1130f3360,
                        &PTR_s_source_1130f35f8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bd780 = puVar1;
  }
  return puRam00000001136bd780;
}



/* Entry: 1056cc318; end: 1056cc37f; +[SCTrustSafetyPdqFrameHash descriptor] */

void FUN_1056cc318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58830,
                        &PTR____CFConstantStringClassReference_110df6778,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f3438,2,0x10,0x1c);
    puRam00000001136bd788 = puVar1;
  }
  return;
}



/* Entry: 1056cc380; end: 1056cc3e7; +[SCTrustSafetyPdqHashData descriptor] */

void FUN_1056cc380(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58880,
                        &PTR____CFConstantStringClassReference_110df6798,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f3378,1,0x10,0x1c);
    puRam00000001136bd790 = puVar1;
  }
  return;
}



/* Entry: 1056cc3e8; end: 1056cc473; +[SCTrustSafetyDestination descriptor] */

undefined * FUN_1056cc3e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a588d0,
                        &PTR____CFConstantStringClassReference_110df67b8,&PTR_DAT_1130f3360,
                        &PTR_s_chat_1130f3478,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136bd798 = puVar1;
  }
  return puRam00000001136bd798;
}



/* Entry: 1056cc474; end: 1056cc4db; +[SCTrustSafetyConversationDestination descriptor] */

void FUN_1056cc474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58920,
                        &PTR____CFConstantStringClassReference_110df67d8,&PTR_DAT_1130f3360,
                        &PTR_s_conversationId_1130f34b8,2,0x18,0x1c);
    puRam00000001136bd7a0 = puVar1;
  }
  return;
}



/* Entry: 1056cc4dc; end: 1056cc543; +[SCTrustSafetyStoryDestination descriptor] */

void FUN_1056cc4dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58970,
                        &PTR____CFConstantStringClassReference_110df67f8,&PTR_DAT_1130f3360,
                        &PTR_s_storyId_1130f3598,3,0x18,0x1c);
    puRam00000001136bd7a8 = puVar1;
  }
  return;
}



/* Entry: 1056cc544; end: 1056cc5ab; +[SCTrustSafetyModelResult descriptor] */

void FUN_1056cc544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a589c0,
                        &PTR____CFConstantStringClassReference_110df6818,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f34f8,2,0xc,0x1c);
    puRam00000001136bd7b0 = puVar1;
  }
  return;
}



/* Entry: 1056cc5ac; end: 1056cc637; +[SCTrustSafetyIndividualClassifierResponse descriptor] */

undefined * FUN_1056cc5ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58a10,
                        &PTR____CFConstantStringClassReference_110df6838,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f37f8,8,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136bd7b8 = puVar1;
  }
  return puRam00000001136bd7b8;
}



/* Entry: 1056cc638; end: 1056cc71b; +[SCTrustSafetyGetVerdictsResponse descriptor] */

void FUN_1056cc638(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58a60,
                        &PTR____CFConstantStringClassReference_110df6858,&PTR_DAT_1130f3360,
                        &PTR_DAT_1130f3398,1,0x10,0x1c);
    puRam00000001136bd7c0 = puVar1;
  }
  return;
}



/* Entry: 1056cc71c; end: 1056cc727;  */

bool FUN_1056cc71c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 1056cc728; end: 1056cc78f; +[AldResponse descriptor] */

void FUN_1056cc728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58b00,
                        &PTR____CFConstantStringClassReference_110df6898,&PTR_DAT_1130f3c58,
                        &PTR_DAT_1130f3c70,1,0x10,0x1c);
    puRam00000001136bd7d0 = puVar1;
  }
  return;
}



/* Entry: 1056cc790; end: 1056cc80b; +[AldResponse_Result descriptor] */

undefined * FUN_1056cc790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58b78,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_1130f3c58,
                        &PTR_s_text_1130f3d90,0xe,0x68,0x1c);
    func_0x00010c228780();
    puRam00000001136bd7d8 = puVar1;
  }
  return puRam00000001136bd7d8;
}



/* Entry: 1056cc80c; end: 1056cc88f; +[AldResponse_Result_MatchMetadata descriptor] */

undefined * FUN_1056cc80c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58ba0,
                        &PTR____CFConstantStringClassReference_110df68b8,&PTR_DAT_1130f3c58,
                        &PTR_DAT_1130f3c90,8,0x40,0x1c);
    func_0x00010c228780();
    puRam00000001136bd7e0 = puVar1;
  }
  return puRam00000001136bd7e0;
}



/* Entry: 1056cc890; end: 1056cc90b;  */

undefined * FUN_1056cc890(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd7e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df68d8,
                        &UNK_10ddba344,&UNK_10ddba364,3,FUN_1056cc90c,0);
    do {
      if (puRam00000001136bd7e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd7e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd7e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd7e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd7e8;
}



/* Entry: 1056cc90c; end: 1056cc917;  */

bool FUN_1056cc90c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1056cc918; end: 1056cc9a7;  */

undefined * FUN_1056cc918(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bd7f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df68f8,
                        &UNK_10ddba370,&UNK_10ddbaea8,0x61,FUN_1056cc9a8,0,&UNK_10ddbb02c);
    do {
      if (puRam00000001136bd7f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bd7f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bd7f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bd7f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bd7f0;
}



/* Entry: 1056cc9a8; end: 1056cc9d7;  */

bool FUN_1056cc9a8(uint param_1)

{
  return param_1 < 0x5b || (param_1 - 0x3e5 < 3 || (param_1 - 800 < 2 || param_1 == 700));
}



/* Entry: 1056cc9d8; end: 1056cca3f; +[AldRequest descriptor] */

void FUN_1056cc9d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd7f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58cb8,
                        &PTR____CFConstantStringClassReference_110df6918,&PTR_DAT_1130f3f50,
                        &PTR_DAT_1130f3fa8,4,0x20,0x1c);
    puRam00000001136bd7f8 = puVar1;
  }
  return;
}



/* Entry: 1056cca40; end: 1056ccabb; +[AldRequest_ScanType descriptor] */

undefined * FUN_1056cca40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58c68,
                        &PTR____CFConstantStringClassReference_110df6938,&PTR_DAT_1130f3f50,
                        &PTR_s_context_1130f4028,0xb,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136bd800 = puVar1;
  }
  return puRam00000001136bd800;
}



/* Entry: 1056ccabc; end: 1056ccb3f; +[AldRequest_TextWithMetadata descriptor] */

undefined * FUN_1056ccabc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58ce0,
                        &PTR____CFConstantStringClassReference_110df6958,&PTR_DAT_1130f3f50,
                        &PTR_s_text_1130f3f68,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136bd808 = puVar1;
  }
  return puRam00000001136bd808;
}



/* Entry: 1056ccb40; end: 1056ccba7; +[WordMetadata descriptor] */

void FUN_1056ccb40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58d80,
                        &PTR____CFConstantStringClassReference_110df6978,&PTR_DAT_1130f4188,
                        &PTR_DAT_1130f41a0,1,0x10,0x1c);
    puRam00000001136bd810 = puVar1;
  }
  return;
}



/* Entry: 1056ccba8; end: 1056ccc9f; +[ModelMetadata descriptor] */

void FUN_1056ccba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a58e20,
                        &PTR____CFConstantStringClassReference_110df6998,&PTR_DAT_1130f41c0,
                        &PTR_s_category_1130f41d8,3,0x10,0x1c);
    puRam00000001136bd818 = puVar1;
  }
  return;
}



/* Entry: 1056ccca0; end: 1056cccb7;  */

bool FUN_1056ccca0(uint param_1)

{
  return param_1 < 0x22 || param_1 == 999;
}



/* Entry: 1056cccb8; end: 1056ccd2f; -[SCNChrysalisChrysalis initWithCpp:] */

undefined1 * FUN_1056cccb8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
  puStack_38 = PTR_PTR_1126e9ae0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_1056cd0f0();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_1056cd0c4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056ccd30; end: 1056cce07; +[SCNChrysalisChrysalis create] */

void FUN_1056ccd30(void)

{
  int extraout_w10;
  undefined8 unaff_x19;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  FUN_1056cd124(&lStack_48);
  if (lStack_48 == 0) {
    unaff_x19 = 0;
  }
  else {
    ppuStack_28 = &PTR_DAT_1108a90b8;
    lStack_38 = lStack_48;
    lStack_30 = lStack_40;
    if (lStack_40 != 0) {
      do {
        FUN_1056cd0f0();
      } while (extraout_w10 != 0);
    }
    func_0x00010015c218(&ppuStack_28,&lStack_38,FUN_1056cd050);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001056cd118();
  }
  FUN_1056cd0c4(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 1056cce08; end: 1056ccf97; -[SCNChrysalisChrysalis calculateHash:width:height:pixelLayout:] */

void FUN_1056cce08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [24];
  char cStack_48;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  func_0x0001000fef20(auStack_70,param_3);
  (**(code **)(*plVar2 + 0x10))(auStack_60,plVar2,auStack_70,param_4,param_5,param_6);
  func_0x0001000ff1ac(auStack_70);
  puVar1 = PTR_PTR_1126b9638;
  if (cStack_48 == '\x01') {
    func_0x000100101220(auStack_60);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001056cd10c();
  FUN_1056cd030(auStack_60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1056ccf98; end: 1056ccfeb; -[SCNChrysalisChrysalis .cxx_destruct] */

void FUN_1056ccf98(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_1108a90b8;
    func_0x0001004a52a0(param_1 + 8,&ppuStack_28);
  }
  FUN_1056cd0c4((long *)(param_1 + 0x18));
  func_0x0001004a5588(param_1 + 8);
  return;
}



/* Entry: 1056ccfec; end: 1056cd02f; -[SCNChrysalisChrysalis .cxx_construct] */

undefined8 * FUN_1056ccfec(undefined8 *param_1)

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
      FUN_1056cd0f0();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 1056cd030; end: 1056cd04f;  */

void FUN_1056cd030(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 1056cd050; end: 1056cd0c3;  */

void FUN_1056cd050(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126bd148;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_1056cd0f0();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_1056cd0c4(&uStack_30);
  return;
}



/* Entry: 1056cd0c4; end: 1056cd0ef;  */

long FUN_1056cd0c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056cd0f0; end: 1056cd123;  */

void FUN_1056cd0f0(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1056cd124; end: 1056cd163;  */

void FUN_1056cd124(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1056cd164(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1056cd6fc(&uStack_30);
  return;
}



/* Entry: 1056cd164; end: 1056cd183;  */

void FUN_1056cd164(void)

{
  undefined1 uStack_11;
  
  FUN_1056cd598(&uStack_11);
  return;
}



/* Entry: 1056cd184; end: 1056cd1b7;  */

undefined8 * FUN_1056cd184(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a90d8;
  FUN_1056cd1b8(param_1 + 1);
  return param_1;
}



/* Entry: 1056cd1b8; end: 1056cd1eb;  */

void FUN_1056cd1b8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  __Znwm();
  FUN_1056cff0c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1056cd1ec; end: 1056cd547;  */

void FUN_1056cd1ec(undefined8 *param_1,long param_2,ulong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 auStack_c8 [3];
  undefined8 auStack_b0 [3];
  undefined8 auStack_98 [3];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  iVar3 = (int)param_4;
  iVar8 = (int)param_5;
  if ((iVar3 >= 1 && iVar8 != 0) && (iVar3 < 1 || -1 < iVar8)) {
    uVar9 = (uint)param_6;
    uVar2 = uVar9 >> 8 | uVar9 << 0x18;
    if (5 < uVar2) {
      FUN_1056cd880();
      func_0x00010002b838(auStack_e0,&UNK_10f2e934c);
      FUN_1056cd724(param_2,auStack_e0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e0);
      *(undefined4 *)param_1 = 1;
      goto LAB_1056cd3cc;
    }
    uVar1 = iVar8 * iVar3;
    switch(uVar2) {
    case 0:
      uVar4 = *param_3;
      if ((uVar4 == 0) || (func_0x0001056cd730(), uVar4 != uVar1 * 3)) {
        FUN_1056cd880();
        func_0x0001056cd744();
        puVar6 = &uStack_80;
        func_0x00010002b838(&uStack_80);
        FUN_1056cd724(param_6,&uStack_80);
        goto LAB_1056cd3c0;
      }
      uVar2 = uVar9 - 0x100 >> 8 | uVar9 << 0x18;
      if (2 < uVar2) {
        if (uVar2 == 3) goto code_r0x0001056cd2a4;
        if (uVar2 != 4) goto code_r0x0001056cd2b8;
      }
      break;
    case 4:
      goto code_r0x0001056cd2a4;
    }
    uVar4 = *param_3;
    if ((uVar4 == 0) || (func_0x0001056cd730(), uVar4 != uVar1 * 4)) {
      FUN_1056cd880();
      func_0x0001056cd744();
      puVar6 = auStack_98;
      func_0x00010002b838(auStack_98);
      FUN_1056cd724(param_6,auStack_98);
    }
    else {
      if (uVar9 != 0x400) {
code_r0x0001056cd2b8:
        func_0x000100291d50(&uStack_80,0x39c);
        uVar11 = *(undefined8 *)(param_2 + 8);
        plVar5 = (long *)*param_3;
        if (plVar5 == (long *)0x0) {
          plVar5 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar5 + 0x10))();
        }
        FUN_1056d007c(uVar11,plVar5,param_6,param_4,param_5,0,uStack_80,0);
        iVar3 = (int)uVar11;
        if (iVar3 == 0) {
          FUN_1056cd880();
          func_0x00010002b838(auStack_110,"");
          FUN_1056cd754(uVar11,auStack_110,1,1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
          param_1[1] = uStack_78;
          *param_1 = uStack_80;
          param_1[2] = uStack_70;
          uStack_78 = 0;
          uStack_70 = 0;
          uStack_80 = 0;
          uVar10 = 1;
        }
        else {
          FUN_1056cd880();
          uVar2 = iVar3 + 0x1b65;
          if (uVar2 < 0xd) {
            puVar7 = (&PTR_DAT_1108a9168)[uVar2];
          }
          else {
            puVar7 = &UNK_10f2e9325;
          }
          func_0x00010002b838(auStack_f8,puVar7);
          FUN_1056cd724(uVar11,auStack_f8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
          uVar10 = 0;
          *(undefined4 *)param_1 = 3;
        }
        *(undefined1 *)(param_1 + 3) = uVar10;
        func_0x000100100fec(&uStack_80);
        return;
      }
code_r0x0001056cd2a4:
      uVar4 = *param_3;
      if ((uVar4 != 0) && (func_0x0001056cd730(), uVar4 == uVar1)) goto code_r0x0001056cd2b8;
      FUN_1056cd880();
      func_0x0001056cd744();
      puVar6 = auStack_b0;
      func_0x00010002b838(auStack_b0);
      FUN_1056cd724(param_6,auStack_b0);
    }
  }
  else {
    FUN_1056cd880();
    func_0x00010002b838(auStack_c8,&UNK_10f2e933b);
    FUN_1056cd724(param_2,auStack_c8);
    puVar6 = auStack_c8;
  }
LAB_1056cd3c0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar6);
  *(undefined4 *)param_1 = 2;
LAB_1056cd3cc:
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1056cd548; end: 1056cd54b;  */

undefined8 * FUN_1056cd548(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_1108a90d8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_1056d0044();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1056cd54c; end: 1056cd55f;  */

void FUN_1056cd54c(void)

{
  FUN_1056cd560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cd560; end: 1056cd597;  */

undefined8 * FUN_1056cd560(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *param_1 = &PTR_FUN_1108a90d8;
  param_1[1] = 0;
  if (lVar1 != 0) {
    FUN_1056d0044();
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1056cd598; end: 1056cd62f;  */

undefined1 * FUN_1056cd598(long *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [16];
  long lStack_30;
  long lStack_28;
  
  puVar2 = auStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_1056cd630(auStack_40);
  FUN_1056cd684(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x0001056cd6ec();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x0001056cd6ec(auStack_40);
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1056cd658();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1056cd630; end: 1056cd657;  */

long FUN_1056cd630(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1056cd658();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1056cd658; end: 1056cd683;  */

undefined8 * FUN_1056cd658(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x666666666666667) {
    puVar1 = (undefined8 *)(param_2 * 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a9128;
  FUN_1056cd184(param_1 + 3);
  return param_1;
}



/* Entry: 1056cd684; end: 1056cd6b3;  */

undefined8 * FUN_1056cd684(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1108a9128;
  FUN_1056cd184(param_1 + 3);
  return param_1;
}



/* Entry: 1056cd6b4; end: 1056cd6b7;  */

void FUN_1056cd6b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108a9128;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1056cd6b8; end: 1056cd6cb;  */

void FUN_1056cd6b8(void)

{
  func_0x0001056cd6dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1056cd6cc; end: 1056cd6fb;  */

void FUN_1056cd6cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056cd6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1056cd6fc; end: 1056cd723;  */

long FUN_1056cd6fc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1056cd724; end: 1056cd753;  */

long FUN_1056cd724(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)*param_1;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  func_0x00010002b838(auStack_48,&UNK_10f2e938d);
  func_0x0001000e3098(auStack_78,&uStack_60,2);
  (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108a91d0,auStack_78,1);
  func_0x0001000e30f4(auStack_78);
  lVar4 = 0x18;
  do {
    lVar1 = (long)&uStack_60 + lVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar4 = lVar4 + -0x18;
  } while (lVar4 != -0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x0001000e30f4(auStack_78);
    puVar2 = auStack_48;
    lVar4 = -0x30;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar2);
      puVar2 = puVar2 + -0x18;
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != 0);
    __Unwind_Resume(lVar1);
    if ((bRam0000000113819eb8 & 1) == 0) {
      uVar3 = 0x113819eb8;
      ___cxa_guard_acquire();
      if ((int)uVar3 != 0) {
        func_0x000100077ef8();
        uRam0000000113819eb0 = uVar3;
        ___cxa_guard_release(0x113819eb8);
      }
    }
    return 0x113819eb0;
  }
  return lVar1;
}



/* Entry: 1056cd754; end: 1056cd87f;  */

long FUN_1056cd754(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar6 = (long *)*param_1;
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  puVar1 = &UNK_10f2e9388;
  if (param_3 == 0) {
    puVar1 = &UNK_10f2e938d;
  }
  func_0x00010002b838(auStack_48,puVar1);
  func_0x0001000e3098(auStack_78,&uStack_60,2);
  (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108a91d0,auStack_78,param_4);
  func_0x0001000e30f4(auStack_78);
  lVar5 = 0x18;
  do {
    lVar2 = (long)&uStack_60 + lVar5;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar5 = lVar5 + -0x18;
  } while (lVar5 != -0x18);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return lVar2;
  }
  ___stack_chk_fail();
  func_0x0001000e30f4(auStack_78);
  puVar3 = auStack_48;
  lVar5 = -0x30;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar3);
    puVar3 = puVar3 + -0x18;
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0);
  __Unwind_Resume(lVar2);
  if ((bRam0000000113819eb8 & 1) == 0) {
    uVar4 = 0x113819eb8;
    ___cxa_guard_acquire();
    if ((int)uVar4 != 0) {
      func_0x000100077ef8();
      uRam0000000113819eb0 = uVar4;
      ___cxa_guard_release(0x113819eb8);
    }
  }
  return 0x113819eb0;
}



/* Entry: 1056cd880; end: 1056cd8f3;  */

undefined8 FUN_1056cd880(void)

{
  undefined8 uVar1;
  
  if ((bRam0000000113819eb8 & 1) == 0) {
    uVar1 = 0x113819eb8;
    ___cxa_guard_acquire();
    if ((int)uVar1 != 0) {
      func_0x000100077ef8();
      uRam0000000113819eb0 = uVar1;
      ___cxa_guard_release(0x113819eb8);
    }
  }
  return 0x113819eb0;
}



/* Entry: 1056cd8f4; end: 1056cdcf3;  */

void FUN_1056cd8f4(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  long lVar6;
  
  if (param_2 != 0) {
    puVar4 = (undefined1 *)(param_2 + 3);
    pbVar5 = (byte *)(param_1 + 2);
    for (lVar6 = 2; lVar6 - 2U < 0x39c; lVar6 = lVar6 + 3) {
      bVar2 = pbVar5[-2];
      bVar3 = pbVar5[-1];
      bVar1 = *pbVar5;
      puVar4[-3] = (&UNK_10f2e9393)[bVar2 >> 2];
      puVar4[-2] = (&UNK_10f2e9393)[(ulong)(((uint)bVar3 << 8 | (uint)bVar2 << 0x10) >> 0xc) & 0x3f]
      ;
      puVar4[-1] = (&UNK_10f2e9393)[(ulong)(ushort)(CONCAT11(bVar3,bVar1) >> 6) & 0x3f];
      *puVar4 = (&UNK_10f2e9393)[(ulong)bVar1 & 0x3f];
      puVar4 = puVar4 + 4;
      pbVar5 = pbVar5 + 3;
    }
  }
  return;
}



/* Entry: 1056cdcf4; end: 1056cddeb;  */

void FUN_1056cdcf4(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  
  cVar3 = '\0';
  for (lVar5 = 0x39c; lVar5 != 0x3bc; lVar5 = lVar5 + 1) {
    cVar3 = *(char *)(param_2 + lVar5) + cVar3;
  }
  *(char *)(param_2 + 0x31) = cVar3;
  for (lVar5 = 0; (int)lVar5 != 0x90; lVar5 = lVar5 + 1) {
    lVar1 = param_2;
    FUN_1056cddec(param_2,lVar5,*(undefined1 *)(param_2 + 0x31));
    lVar2 = param_2;
    func_0x0001056cdc80(param_2,lVar1);
    *(char *)(param_2 + lVar5 + 0x3c) = (char)lVar2;
  }
  func_0x0001056cdb04(param_2);
  for (iVar4 = 0; iVar4 != 0x90; iVar4 = iVar4 + 1) {
    lVar5 = param_2;
    FUN_1056cddec(param_2,iVar4,*(undefined1 *)(param_2 + 0x31));
    func_0x0001056cd96c(*(double *)(param_2 + 0x39c + (long)(int)lVar5 * 8) / param_1);
  }
  iVar4 = 0;
  for (lVar5 = 0x30; lVar5 != 0x39c; lVar5 = lVar5 + 4) {
    iVar4 = *(int *)(param_2 + lVar5) + iVar4;
  }
  *(int *)(param_2 + 8) = iVar4;
  return;
}



/* Entry: 1056cddec; end: 1056cde4b;  */

ulong FUN_1056cddec(undefined8 param_1,ulong param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)(param_3 & 7) != 0) {
    bVar1 = (&UNK_10ddbb480)[param_3 & 7];
    uVar3 = 0;
    if (bVar1 != 0) {
      uVar3 = 0x90 / bVar1;
    }
    iVar2 = 0;
    uVar4 = (uint)bVar1;
    if (uVar4 != 0) {
      iVar2 = (int)param_2 / (int)uVar4;
    }
    param_2 = (ulong)(iVar2 + ((int)param_2 - iVar2 * uVar4) * uVar3);
  }
  return param_2;
}



/* Entry: 1056cde4c; end: 1056cff0b;  */

undefined8
FUN_1056cde4c(long param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
             int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  int iVar28;
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  long lVar31;
  ulong uVar32;
  int iVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  double *pdVar38;
  ulong uVar39;
  int iVar40;
  ulong uVar41;
  long lVar42;
  double *pdVar43;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong extraout_x8_06;
  long extraout_x8_07;
  long lVar47;
  int iVar48;
  int iVar49;
  uint uVar50;
  long lVar51;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  ulong extraout_x9_03;
  ulong uVar52;
  long extraout_x9_04;
  int iVar53;
  long extraout_x10;
  ulong uVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  ulong extraout_x11_08;
  ulong extraout_x11_09;
  ulong extraout_x11_10;
  ulong extraout_x11_11;
  ulong extraout_x11_12;
  ulong extraout_x11_13;
  ulong extraout_x11_14;
  ulong extraout_x11_15;
  ulong extraout_x11_16;
  ulong extraout_x11_17;
  ulong extraout_x11_18;
  ulong extraout_x11_19;
  ulong extraout_x11_20;
  ulong uVar58;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong extraout_x12_05;
  ulong extraout_x12_06;
  ulong extraout_x12_07;
  ulong extraout_x12_08;
  ulong extraout_x12_09;
  ulong extraout_x12_10;
  ulong extraout_x12_11;
  ulong extraout_x12_12;
  ulong extraout_x12_13;
  ulong extraout_x12_14;
  ulong extraout_x12_15;
  ulong extraout_x12_16;
  ulong extraout_x12_17;
  ulong extraout_x12_18;
  ulong extraout_x12_19;
  ulong extraout_x12_20;
  ulong extraout_x12_21;
  ulong uVar59;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong extraout_x13_01;
  ulong extraout_x13_02;
  ulong extraout_x13_03;
  ulong extraout_x13_04;
  ulong extraout_x13_05;
  ulong extraout_x13_06;
  ulong extraout_x13_07;
  ulong extraout_x13_08;
  ulong extraout_x13_09;
  ulong extraout_x13_10;
  ulong extraout_x13_11;
  ulong extraout_x13_12;
  ulong extraout_x13_13;
  ulong extraout_x13_14;
  ulong extraout_x13_15;
  ulong extraout_x13_16;
  ulong extraout_x13_17;
  ulong extraout_x13_18;
  ulong extraout_x13_19;
  ulong extraout_x13_20;
  ulong extraout_x13_21;
  ulong uVar60;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong extraout_x14_01;
  ulong extraout_x14_02;
  ulong extraout_x14_03;
  ulong extraout_x14_04;
  ulong extraout_x14_05;
  ulong extraout_x14_06;
  ulong extraout_x14_07;
  ulong extraout_x14_08;
  ulong extraout_x14_09;
  ulong extraout_x14_10;
  ulong extraout_x14_11;
  ulong extraout_x14_12;
  ulong extraout_x14_13;
  ulong extraout_x14_14;
  ulong extraout_x14_15;
  ulong extraout_x14_16;
  ulong extraout_x14_17;
  ulong extraout_x14_18;
  ulong extraout_x14_19;
  ulong extraout_x14_20;
  ulong extraout_x14_21;
  ulong uVar61;
  ulong extraout_x15;
  ulong extraout_x15_00;
  ulong extraout_x15_01;
  ulong extraout_x15_02;
  ulong extraout_x15_03;
  ulong extraout_x15_04;
  ulong extraout_x15_05;
  ulong extraout_x15_06;
  ulong extraout_x15_07;
  ulong extraout_x15_08;
  ulong extraout_x15_09;
  ulong extraout_x15_10;
  ulong extraout_x15_11;
  ulong extraout_x15_12;
  ulong extraout_x15_13;
  ulong extraout_x15_14;
  ulong extraout_x15_15;
  ulong extraout_x15_16;
  ulong extraout_x15_17;
  ulong uVar62;
  ulong extraout_x15_18;
  ulong extraout_x15_19;
  ulong extraout_x15_20;
  ulong extraout_x15_21;
  int iVar63;
  int iVar64;
  long lVar65;
  long lVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  undefined *puVar70;
  ulong uVar71;
  ulong uVar72;
  int iVar73;
  long lVar74;
  long lVar75;
  ulong uVar76;
  long lVar77;
  double extraout_d1;
  undefined8 extraout_d1_00;
  double extraout_d1_01;
  undefined8 extraout_d1_02;
  double extraout_d1_03;
  double extraout_d1_04;
  double extraout_d1_05;
  double extraout_d1_06;
  double extraout_d1_07;
  undefined8 extraout_d1_08;
  double extraout_d1_09;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 extraout_var;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 extraout_var_00;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 extraout_var_01;
  undefined8 extraout_d2;
  undefined8 extraout_d2_00;
  undefined8 extraout_d2_01;
  double extraout_d2_02;
  undefined8 extraout_d2_03;
  undefined8 extraout_d2_04;
  double extraout_d2_05;
  undefined8 extraout_d2_06;
  double extraout_d2_07;
  undefined8 extraout_d2_12;
  undefined8 extraout_d2_13;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 extraout_var_04;
  undefined8 extraout_var_05;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 extraout_d2_08;
  undefined8 extraout_var_06;
  undefined1 auVar97 [16];
  undefined8 extraout_d2_09;
  double extraout_d2_10;
  undefined8 extraout_d2_11;
  undefined8 extraout_var_07;
  undefined8 extraout_var_08;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 extraout_var_09;
  undefined1 auVar103 [16];
  undefined8 extraout_var_10;
  undefined8 extraout_d3;
  undefined8 extraout_d3_00;
  undefined8 extraout_d3_01;
  undefined8 extraout_d3_02;
  undefined8 uVar104;
  long extraout_d3_03;
  undefined1 auVar105 [16];
  undefined8 extraout_var_11;
  undefined1 auVar106 [16];
  undefined8 extraout_var_12;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  long extraout_var_13;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 uVar115;
  undefined8 uVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  double dVar124;
  double dVar125;
  double dVar126;
  double dVar127;
  double dVar128;
  double dVar129;
  double dVar130;
  uint uStack_ec;
  byte *pbStack_c0;
  int iStack_b4;
  
  uVar11 = param_3 - (param_5 + param_7);
  if (((int)uVar11 < 0x32) || (uVar12 = param_2 - (param_6 + param_8), (int)uVar12 < 0x32)) {
    return 0xffffe4a2;
  }
  cVar10 = *(char *)(param_1 + 0x34);
  lVar51 = *(long *)(param_1 + 0x18);
  dVar120 = (double)uVar12 / 28.0;
  pcVar5 = (char *)(param_1 + 0x15e8);
  lVar47 = param_1 + 0x15f0;
  uVar67 = 0x14a;
  auVar78 = NEON_fmov(0xbff0000000000000,8);
  dVar121 = (double)uVar11 / 28.0;
  iVar28 = 0x3b28;
LAB_1056cdf2c:
  uVar37 = -(uVar67 >> 0x1f) & 0xffffffc000000000 | uVar67 << 6;
  iVar48 = (int)uVar67;
  iVar64 = 0x2e92;
  if (2 < iVar48) {
    iVar64 = 0x2e26;
  }
LAB_1056cdf38:
  do {
    iVar33 = iVar28;
    if (iVar33 == 0x1b20) goto LAB_1056cdf88;
    iVar28 = iVar64;
  } while (iVar33 == 0x26b6);
  if (iVar33 == 0x3b28) {
    uVar67 = 0x14;
    iVar28 = 0x1b20;
    goto LAB_1056cdf2c;
  }
  if (iVar33 == 0x2e92) {
    dVar119 = *(double *)(&UNK_10ddbb4e8 + (long)iVar48 * 8);
    pdVar38 = (double *)(lVar47 + (long)iVar48 * 0x40);
    dVar122 = -1.0;
    for (iVar28 = -1; iVar28 < 2; iVar28 = iVar28 + 2) {
      dVar125 = -1.0;
      lVar66 = 2;
      pdVar43 = pdVar38;
      do {
        pdVar43[-1] = dVar119 * dVar120 * dVar125;
        *pdVar43 = dVar119 * dVar121 * dVar122;
        dVar125 = dVar125 + 2.0;
        pdVar43 = pdVar43 + 2;
        lVar66 = lVar66 + -1;
      } while (lVar66 != 0);
      dVar122 = dVar122 + 2.0;
      pdVar38 = pdVar38 + 4;
    }
    pdVar38 = (double *)(pcVar5 + (long)iVar48 * 0x40);
    pdVar38[1] = pdVar38[1] + auVar78._8_8_;
    *pdVar38 = *pdVar38 + auVar78._0_8_;
    pdVar38[4] = pdVar38[4] + auVar78._8_8_;
    pdVar38[3] = pdVar38[3] + auVar78._0_8_;
    uVar67 = (ulong)(iVar48 + 1);
    iVar28 = 0x26b6;
    goto LAB_1056cdf2c;
  }
  if (iVar33 == 0x3348) {
    pdVar38 = (double *)(lVar47 + uVar37);
    dVar119 = *pdVar38;
    pdVar43 = (double *)(lVar47 + uVar37);
    pdVar43[1] = pdVar38[1] + 416.0;
    *pdVar43 = dVar119 + 2.0;
    iVar28 = 0x10fc;
    goto LAB_1056cdf38;
  }
  iVar28 = iVar33;
  if (iVar33 != 0x2e26) goto LAB_1056cdf38;
  lVar47 = param_1 + 200;
  for (uVar37 = 0; uVar37 != 0x1a; uVar37 = uVar37 + 1) {
    iVar28 = 500;
    iVar64 = 0x19a0;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while (iVar64 == 0x127) {
                      *(undefined8 *)(lVar47 + uVar37 * 0xd0 + (long)iVar28 * 8) = 0;
                      iVar64 = 0x1a0a;
                    }
                    if (iVar64 != 0x13c8) break;
                    iVar28 = 0;
                    iVar64 = 0x216b;
                  }
                  if (iVar64 != 0x19a0) break;
                  iVar28 = 0x244;
                  iVar64 = 0x13c8;
                }
                if (iVar64 != 0x1a0a) break;
                *(undefined8 *)(lVar47 + uVar37 * 0xd0 + (long)iVar28 * 8) = 0x3ff0000000000000;
                iVar64 = 0x382c;
              }
              if (iVar64 != 0x216b) break;
              iVar64 = 0x2a5b;
              if (0x19 < iVar28) {
                iVar64 = 0xa49;
              }
            }
            if (iVar64 != 0x2a5b) break;
            lVar68 = lVar47 + uVar37 * 0xd0;
            *(undefined8 *)(lVar68 + (long)iVar28 * 8) = 0;
            dVar119 = 0.0;
            puVar70 = &UNK_10ddbb488;
            pdVar38 = (double *)(param_1 + 0x15f0);
            for (lVar66 = 0; lVar66 != 3; lVar66 = lVar66 + 1) {
              dVar122 = 0.0;
              pdVar43 = pdVar38;
              for (lVar74 = 0; lVar74 != 0x20; lVar74 = lVar74 + 8) {
                dVar123 = dVar120 * ((double)iVar28 + 1.5) + pdVar43[-1];
                dVar124 = dVar121 * ((double)(uVar37 & 0xffffffff) + 1.5) + *pdVar43;
                dVar125 = 0.0;
                if (0.0 <= dVar123) {
                  dVar125 = dVar123;
                }
                if ((double)param_2 + -2.0 <= dVar125) {
                  dVar125 = (double)param_2 + -2.0;
                }
                dVar123 = 0.0;
                if (0.0 <= dVar124) {
                  dVar123 = dVar124;
                }
                if ((double)param_3 + -2.0 <= dVar123) {
                  dVar123 = (double)param_3 + -2.0;
                }
                iVar33 = (int)dVar123;
                dVar124 = dVar125 - (double)(int)dVar125;
                dVar123 = dVar123 - (double)iVar33;
                iVar64 = param_6 + (int)dVar125;
                dVar127 = (1.0 - dVar124) * (1.0 - dVar123);
                iVar48 = (param_5 + iVar33) * param_2;
                lVar34 = (long)(iVar48 + iVar64);
                dVar126 = (1.0 - dVar124) * dVar123;
                iVar33 = (param_5 + 1 + iVar33) * param_2;
                lVar65 = (long)(iVar33 + iVar64);
                dVar125 = dVar124 * (1.0 - dVar123);
                lVar77 = (long)(iVar48 + iVar64 + 1);
                lVar75 = (long)(iVar33 + iVar64 + 1);
                if (cVar10 == '\0') {
                  dVar129 = (double)NEON_ucvtf((ulong)*(uint *)(lVar51 + lVar34 * 4));
                  dVar130 = (double)NEON_ucvtf((ulong)*(uint *)(lVar51 + lVar65 * 4));
                  dVar128 = (double)NEON_ucvtf((ulong)*(uint *)(lVar51 + lVar77 * 4));
                  dVar125 = dVar129 * dVar127 + 0.0 + dVar130 * dVar126 + dVar128 * dVar125;
                  uVar67 = (ulong)*(uint *)(lVar51 + lVar75 * 4);
                }
                else {
                  dVar129 = (double)NEON_ucvtf(*(undefined8 *)(lVar51 + lVar34 * 8));
                  dVar130 = (double)NEON_ucvtf(*(undefined8 *)(lVar51 + lVar65 * 8));
                  dVar128 = (double)NEON_ucvtf(*(undefined8 *)(lVar51 + lVar77 * 8));
                  dVar125 = dVar129 * dVar127 + 0.0 + dVar130 * dVar126 + dVar128 * dVar125;
                  uVar67 = *(ulong *)(lVar51 + lVar75 * 8);
                }
                dVar126 = (double)NEON_ucvtf(uVar67);
                dVar122 = dVar122 + *(double *)(puVar70 + lVar74) *
                                    (dVar125 + dVar126 * dVar124 * dVar123);
                pdVar43 = pdVar43 + 2;
              }
              dVar119 = dVar119 + dVar122;
              *(double *)(lVar68 + (long)iVar28 * 8) = dVar119;
              pdVar38 = pdVar38 + 8;
              puVar70 = puVar70 + 0x20;
            }
            iVar28 = iVar28 + 1;
            uVar67 = 3;
            iVar64 = 0x216b;
          }
          if (iVar64 != 0x352e) break;
          *(undefined8 *)(lVar47 + uVar37 * 0xd0 + (long)iVar28 * 8) = 0x4008000000000000;
          iVar64 = 0xf7c;
        }
        if (iVar64 != 0x382c) break;
        *(undefined8 *)(lVar47 + uVar37 * 0xd0 + (long)iVar28 * 8) = 0x4000000000000000;
        iVar64 = 0x352e;
      }
    } while (iVar64 != 0xa49);
  }
  lVar66 = param_1 + 0x1a44;
  for (lVar51 = 0; lVar51 != 0x900; lVar51 = lVar51 + 8) {
    *(undefined8 *)(lVar66 + lVar51) = 0;
  }
  iStack_b4 = 0;
  uStack_ec = 0;
  pbStack_c0 = (byte *)(param_1 + 0x38);
  *pbStack_c0 = 0;
  iVar28 = 0xa0;
  uVar72 = 0xc3d2e1f0;
  uVar37 = 0x10325476;
  uVar69 = 0x98badcfe;
  uVar71 = 0xefcdab89;
  uVar76 = 0x67452301;
  iVar64 = 0x37bd;
LAB_1056ce39c:
  do {
    iVar48 = 0xe46;
    if (5 < iVar28) {
      iVar48 = 0x16bf;
    }
    while( true ) {
      do {
        iVar33 = iVar64;
        if (iVar33 == 0x37bd) {
          iVar64 = 0x2e88;
          iVar28 = 0x35c;
          goto LAB_1056ce39c;
        }
        if (iVar33 == 0x16bf) {
          uVar50 = (param_4 >> 8 & 0x1f) - 1;
          if (uVar50 < 8) {
            dVar119 = *(double *)(&UNK_10ddbb500 + (ulong)uVar50 * 8);
          }
          else {
            dVar119 = 765.0;
          }
          for (lVar47 = 0; lVar47 != 0x900; lVar47 = lVar47 + 8) {
            *(double *)(lVar66 + lVar47) =
                 *(double *)(lVar66 + lVar47) /
                 (dVar121 * dVar120 * 1.03008177008737 * (dVar119 / 255.0));
          }
          *(int *)(param_1 + 0x16b4) = param_6;
          *(int *)(param_1 + 0x16b8) = param_5;
          *(uint *)(param_1 + 0x16bc) = uVar12;
          *(uint *)(param_1 + 0x16c0) = uVar11;
          return 0;
        }
        iVar64 = iVar48;
      } while (iVar33 == 0x1bc1);
      if (iVar33 == 0x25b9) break;
      if (iVar33 == 0x2e88) {
        iVar28 = 0;
        goto LAB_1056ce958;
      }
      iVar64 = iVar33;
      if (iVar33 == 0xe46) goto code_r0x0001056ce400;
    }
    pauVar29 = (undefined1 (*) [16])0x1520;
    _malloc();
    for (lVar51 = 1; lVar51 != 0x1a; lVar51 = lVar51 + 1) {
      pauVar30 = pauVar29;
      for (lVar68 = 1; lVar68 != 0x1a; lVar68 = lVar68 + 1) {
        dVar119 = (double)NEON_ucvtf((ulong)*pbStack_c0);
        dVar125 = (double)NEON_ucvtf((ulong)pbStack_c0[1]);
        dVar122 = (double)NEON_ucvtf((ulong)pbStack_c0[2]);
        dVar122 = dVar119 + dVar125 + dVar122;
        iVar64 = 0x1b78;
LAB_1056ce9cc:
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    uVar59 = uVar72 << 0x1e;
                    lVar74 = uVar69 * 0x20 + 0x8f1bbcdc;
                    uVar57 = uVar37 << 0x1e;
                    lVar34 = uVar71 * 0x20 + 0x8f1bbcdc;
                    uVar58 = uVar69 << 0x1e;
                    uVar60 = uVar71 << 0x1e;
                    uVar61 = uVar76 << 0x1e;
                    lVar65 = uVar76 * 0x20 + 0x8f1bbcdc;
                    if (iVar64 != 0x4d1) break;
                    uVar59 = uVar59 | uVar72 >> 2 & 0x3fffffff;
                    uVar116 = *(undefined8 *)(pauVar30[1] + 8);
                    uVar104 = *(undefined8 *)pauVar30[1];
                    auVar102._0_8_ =
                         CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ pauVar30[5][7] ^
                                  pauVar30[3][0xf] ^ pauVar30[6][7],
                                  CONCAT16((byte)((ulong)uVar104 >> 0x30) ^ pauVar30[5][6] ^
                                           pauVar30[3][0xe] ^ pauVar30[6][6],
                                           CONCAT15((byte)((ulong)uVar104 >> 0x28) ^ pauVar30[5][5]
                                                    ^ pauVar30[3][0xd] ^ pauVar30[6][5],
                                                    CONCAT14((byte)((ulong)uVar104 >> 0x20) ^
                                                             pauVar30[5][4] ^
                                                             pauVar30[3][0xc] ^ pauVar30[6][4],
                                                             CONCAT13((byte)((ulong)uVar104 >> 0x18)
                                                                      ^ pauVar30[5][3] ^
                                                                      pauVar30[3][0xb] ^
                                                                      pauVar30[6][3],
                                                                      CONCAT12((byte)((ulong)uVar104
                                                                                     >> 0x10) ^
                                                                               pauVar30[5][2] ^
                                                                               pauVar30[3][10] ^
                                                                               pauVar30[6][2],
                                                                               CONCAT11((byte)((
                                                  ulong)uVar104 >> 8) ^ pauVar30[5][1] ^
                                                  pauVar30[3][9] ^ pauVar30[6][1],
                                                  (byte)uVar104 ^ pauVar30[5][0] ^
                                                  pauVar30[3][8] ^ pauVar30[6][0])))))));
                    auVar102[8] = (byte)uVar116 ^ pauVar30[4][0] ^ pauVar30[5][8] ^ pauVar30[6][8];
                    auVar102[9] = (byte)((ulong)uVar116 >> 8) ^ pauVar30[4][1] ^
                                  pauVar30[5][9] ^ pauVar30[6][9];
                    auVar102[10] = (byte)((ulong)uVar116 >> 0x10) ^ pauVar30[4][2] ^
                                   pauVar30[5][10] ^ pauVar30[6][10];
                    auVar102[0xb] =
                         (byte)((ulong)uVar116 >> 0x18) ^ pauVar30[4][3] ^
                         pauVar30[5][0xb] ^ pauVar30[6][0xb];
                    auVar102[0xc] =
                         (byte)((ulong)uVar116 >> 0x20) ^ pauVar30[4][4] ^
                         pauVar30[5][0xc] ^ pauVar30[6][0xc];
                    auVar102[0xd] =
                         (byte)((ulong)uVar116 >> 0x28) ^ pauVar30[4][5] ^
                         pauVar30[5][0xd] ^ pauVar30[6][0xd];
                    auVar102[0xe] =
                         (byte)((ulong)uVar116 >> 0x30) ^ pauVar30[4][6] ^
                         pauVar30[5][0xe] ^ pauVar30[6][0xe];
                    auVar102[0xf] =
                         (byte)((ulong)uVar116 >> 0x38) ^ pauVar30[4][7] ^
                         pauVar30[5][0xf] ^ pauVar30[6][0xf];
                    auVar108._0_8_ = auVar102._0_8_ >> 0x1f;
                    auVar108._8_8_ = auVar102._8_8_ >> 0x1f;
                    auVar92 = NEON_sli(auVar108,auVar102,1,8);
                    auVar78 = pauVar30[7];
                    uVar104 = *(undefined8 *)(pauVar30[4] + 8);
                    uVar115 = *(undefined8 *)(pauVar30[2] + 8);
                    uVar116 = *(undefined8 *)pauVar30[2];
                    auVar89._0_8_ =
                         CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ (byte)((ulong)uVar116 >> 0x38) ^
                                  auVar78[7] ^ pauVar30[6][7],
                                  CONCAT16((byte)((ulong)uVar104 >> 0x30) ^
                                           (byte)((ulong)uVar116 >> 0x30) ^ auVar78[6] ^
                                           pauVar30[6][6],
                                           CONCAT15((byte)((ulong)uVar104 >> 0x28) ^
                                                    (byte)((ulong)uVar116 >> 0x28) ^ auVar78[5] ^
                                                    pauVar30[6][5],
                                                    CONCAT14((byte)((ulong)uVar104 >> 0x20) ^
                                                             (byte)((ulong)uVar116 >> 0x20) ^
                                                             auVar78[4] ^ pauVar30[6][4],
                                                             CONCAT13((byte)((ulong)uVar104 >> 0x18)
                                                                      ^ (byte)((ulong)uVar116 >>
                                                                              0x18) ^ auVar78[3] ^
                                                                      pauVar30[6][3],
                                                                      CONCAT12((byte)((ulong)uVar104
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar116
                                                                                     >> 0x10) ^
                                                                               auVar78[2] ^
                                                                               pauVar30[6][2],
                                                                               CONCAT11((byte)((
                                                  ulong)uVar104 >> 8) ^ (byte)((ulong)uVar116 >> 8)
                                                  ^ auVar78[1] ^ pauVar30[6][1],
                                                  (byte)uVar104 ^ (byte)uVar116 ^ auVar78[0] ^
                                                  pauVar30[6][0])))))));
                    auVar89[8] = pauVar30[6][8] ^ (byte)uVar115 ^ auVar78[8] ^ auVar92[0];
                    auVar89[9] = pauVar30[6][9] ^ (byte)((ulong)uVar115 >> 8) ^ auVar78[9] ^
                                 auVar92[1];
                    auVar89[10] = pauVar30[6][10] ^ (byte)((ulong)uVar115 >> 0x10) ^ auVar78[10] ^
                                  auVar92[2];
                    auVar89[0xb] = pauVar30[6][0xb] ^ (byte)((ulong)uVar115 >> 0x18) ^ auVar78[0xb]
                                   ^ auVar92[3];
                    auVar89[0xc] = pauVar30[6][0xc] ^ (byte)((ulong)uVar115 >> 0x20) ^ auVar78[0xc]
                                   ^ auVar92[4];
                    auVar89[0xd] = pauVar30[6][0xd] ^ (byte)((ulong)uVar115 >> 0x28) ^ auVar78[0xd]
                                   ^ auVar92[5];
                    auVar89[0xe] = pauVar30[6][0xe] ^ (byte)((ulong)uVar115 >> 0x30) ^ auVar78[0xe]
                                   ^ auVar92[6];
                    auVar89[0xf] = pauVar30[6][0xf] ^ (byte)((ulong)uVar115 >> 0x38) ^ auVar78[0xf]
                                   ^ auVar92[7];
                    auVar114._0_8_ = auVar89._0_8_ >> 0x1f;
                    auVar114._8_8_ = auVar89._8_8_ >> 0x1f;
                    auVar100 = NEON_sli(auVar114,auVar89,1,8);
                    auVar78 = NEON_ext(auVar92,auVar100,8,1);
                    uVar57 = uVar57 | uVar37 >> 2 & 0x3fffffff;
                    *(long *)(pauVar30[5] + 8) = auVar92._8_8_;
                    *(long *)pauVar30[5] = auVar92._0_8_;
                    *(long *)(pauVar30[6] + 8) = auVar100._8_8_;
                    *(long *)pauVar30[6] = auVar100._0_8_;
                    dVar122 = dVar122 + (double)(uVar37 * 0x20 + 0x8f1bbcdc +
                                                 ((uVar37 & 0xffffffff) >> 0x1b) +
                                                 ((uVar72 | uVar76) & uVar71 | uVar72 & uVar76) +
                                                auVar92._0_8_) +
                              (double)(lVar74 + ((uVar69 & 0xffffffff) >> 0x1b) +
                                       ((uVar59 | uVar37) & uVar76 | uVar59 & uVar37) +
                                      auVar92._8_8_) +
                              (double)(lVar34 + ((uVar71 & 0xffffffff) >> 0x1b) +
                                       ((uVar57 | uVar69) & uVar59 | uVar57 & uVar69) +
                                      auVar100._0_8_);
                    func_0x0001056d0ae0(lVar65 + ((uVar76 & 0xffffffff) >> 0x1b),dVar122,
                                        auVar78._0_8_);
                    dVar122 = dVar122 + (double)extraout_x8_06;
                    uVar37 = extraout_x14_17 & 0xffffffffc0000000 | uVar71 >> 2 & 0x3fffffff;
                    func_0x0001056d0b90(((uVar37 | uVar76) & extraout_x12_18 | uVar37 & uVar76) +
                                        0x8f1bbcdc + extraout_x13_18 * 0x20 +
                                        ((extraout_x13_18 & 0xffffffff) >> 0x1b));
                    *(undefined8 *)(pauVar30[7] + 8) = extraout_var_09;
                    *(undefined8 *)pauVar30[7] = extraout_d2_12;
                    func_0x0001056d0a38();
                    func_0x0001056d0a50(extraout_x11_18 * 0x20 + 0x8f1bbcdc +
                                        (extraout_x11_18 >> 0x1b & 0x1f));
                    uVar72 = extraout_x13_19 << 0x1e | extraout_x13_19 >> 2 & 0x3fffffff;
                    iVar64 = 0x2a69;
                    dVar122 = dVar122 + extraout_d1_07;
                    uVar69 = extraout_x12_19;
                    uVar71 = extraout_x14_18;
                    uVar37 = extraout_x11_19;
                    uVar76 = extraout_x15_18;
                  }
                  lVar75 = uVar72 * 0x20 + 0x8f1bbcdc;
                  if (iVar64 != 0x11c8) break;
                  uVar58 = uVar58 | uVar69 >> 2 & 0x3fffffff;
                  auVar109._0_8_ =
                       CONCAT17(pauVar30[7][7] ^ pauVar30[3][7] ^ pauVar30[1][0xf] ^ pauVar30[4][7],
                                CONCAT16(pauVar30[7][6] ^ pauVar30[3][6] ^
                                         pauVar30[1][0xe] ^ pauVar30[4][6],
                                         CONCAT15(pauVar30[7][5] ^ pauVar30[3][5] ^
                                                  pauVar30[1][0xd] ^ pauVar30[4][5],
                                                  CONCAT14(pauVar30[7][4] ^ pauVar30[3][4] ^
                                                           pauVar30[1][0xc] ^ pauVar30[4][4],
                                                           CONCAT13(pauVar30[7][3] ^ pauVar30[3][3]
                                                                    ^ pauVar30[1][0xb] ^
                                                                      pauVar30[4][3],
                                                                    CONCAT12(pauVar30[7][2] ^
                                                                             pauVar30[3][2] ^
                                                                             pauVar30[1][10] ^
                                                                             pauVar30[4][2],
                                                                             CONCAT11(pauVar30[7][1]
                                                                                      ^ pauVar30[3]
                                                                                        [1] ^ 
                                                  pauVar30[1][9] ^ pauVar30[4][1],
                                                  pauVar30[7][0] ^ pauVar30[3][0] ^
                                                  pauVar30[1][8] ^ pauVar30[4][0])))))));
                  auVar109[8] = pauVar30[7][8] ^ pauVar30[2][0] ^ pauVar30[3][8] ^ pauVar30[4][8];
                  auVar109[9] = pauVar30[7][9] ^ pauVar30[2][1] ^ pauVar30[3][9] ^ pauVar30[4][9];
                  auVar109[10] = pauVar30[7][10] ^ pauVar30[2][2] ^
                                 pauVar30[3][10] ^ pauVar30[4][10];
                  auVar109[0xb] =
                       pauVar30[7][0xb] ^ pauVar30[2][3] ^ pauVar30[3][0xb] ^ pauVar30[4][0xb];
                  auVar109[0xc] =
                       pauVar30[7][0xc] ^ pauVar30[2][4] ^ pauVar30[3][0xc] ^ pauVar30[4][0xc];
                  auVar109[0xd] =
                       pauVar30[7][0xd] ^ pauVar30[2][5] ^ pauVar30[3][0xd] ^ pauVar30[4][0xd];
                  auVar109[0xe] =
                       pauVar30[7][0xe] ^ pauVar30[2][6] ^ pauVar30[3][0xe] ^ pauVar30[4][0xe];
                  auVar109[0xf] =
                       pauVar30[7][0xf] ^ pauVar30[2][7] ^ pauVar30[3][0xf] ^ pauVar30[4][0xf];
                  auVar90._0_8_ = auVar109._0_8_ >> 0x1f;
                  auVar90._8_8_ = auVar109._8_8_ >> 0x1f;
                  auVar92 = NEON_sli(auVar90,auVar109,1,8);
                  uVar104 = *(undefined8 *)(pauVar30[2] + 8);
                  auVar78 = pauVar30[5];
                  auVar103._0_8_ =
                       CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ (*pauVar30)[7] ^ auVar78[7] ^
                                pauVar30[4][7],
                                CONCAT16((byte)((ulong)uVar104 >> 0x30) ^ (*pauVar30)[6] ^
                                         auVar78[6] ^ pauVar30[4][6],
                                         CONCAT15((byte)((ulong)uVar104 >> 0x28) ^ (*pauVar30)[5] ^
                                                  auVar78[5] ^ pauVar30[4][5],
                                                  CONCAT14((byte)((ulong)uVar104 >> 0x20) ^
                                                           (*pauVar30)[4] ^ auVar78[4] ^
                                                           pauVar30[4][4],
                                                           CONCAT13((byte)((ulong)uVar104 >> 0x18) ^
                                                                    (*pauVar30)[3] ^ auVar78[3] ^
                                                                    pauVar30[4][3],
                                                                    CONCAT12((byte)((ulong)uVar104
                                                                                   >> 0x10) ^
                                                                             (*pauVar30)[2] ^
                                                                             auVar78[2] ^
                                                                             pauVar30[4][2],
                                                                             CONCAT11((byte)((ulong)
                                                  uVar104 >> 8) ^ (*pauVar30)[1] ^ auVar78[1] ^
                                                  pauVar30[4][1],
                                                  (byte)uVar104 ^ (*pauVar30)[0] ^ auVar78[0] ^
                                                  pauVar30[4][0])))))));
                  auVar103[8] = pauVar30[4][8] ^ (*pauVar30)[8] ^ auVar78[8] ^ auVar92[0];
                  auVar103[9] = pauVar30[4][9] ^ (*pauVar30)[9] ^ auVar78[9] ^ auVar92[1];
                  auVar103[10] = pauVar30[4][10] ^ (*pauVar30)[10] ^ auVar78[10] ^ auVar92[2];
                  auVar103[0xb] = pauVar30[4][0xb] ^ (*pauVar30)[0xb] ^ auVar78[0xb] ^ auVar92[3];
                  auVar103[0xc] = pauVar30[4][0xc] ^ (*pauVar30)[0xc] ^ auVar78[0xc] ^ auVar92[4];
                  auVar103[0xd] = pauVar30[4][0xd] ^ (*pauVar30)[0xd] ^ auVar78[0xd] ^ auVar92[5];
                  auVar103[0xe] = pauVar30[4][0xe] ^ (*pauVar30)[0xe] ^ auVar78[0xe] ^ auVar92[6];
                  auVar103[0xf] = pauVar30[4][0xf] ^ (*pauVar30)[0xf] ^ auVar78[0xf] ^ auVar92[7];
                  auVar110._0_8_ = auVar103._0_8_ >> 0x1f;
                  auVar110._8_8_ = auVar103._8_8_ >> 0x1f;
                  auVar111 = NEON_sli(auVar110,auVar103,1,8);
                  auVar100 = NEON_ext(auVar92,auVar111,8,1);
                  dVar122 = dVar122 + (double)(lVar34 + ((uVar71 & 0xffffffff) >> 0x1b) +
                                               ((uVar37 | uVar69) & uVar72 | uVar37 & uVar69) +
                                              auVar92._0_8_) +
                            (double)(lVar65 + ((uVar76 & 0xffffffff) >> 0x1b) +
                                     ((uVar58 | uVar71) & uVar37 | uVar58 & uVar71) + auVar92._8_8_)
                  ;
                  func_0x0001056d0d78(dVar122,auVar92._0_8_,auVar100._0_8_,auVar111._0_8_,
                                      auVar78._0_8_,*(undefined8 *)pauVar30[1],
                                      *(undefined8 *)pauVar30[6]);
                  uVar69 = extraout_x15_19 & 0xffffffffc0000000 | uVar76 >> 2 & 0x3fffffff;
                  *(undefined8 *)(pauVar30[3] + 8) = extraout_var_01;
                  *(undefined8 *)pauVar30[3] = extraout_d1_08;
                  *(long *)(pauVar30[4] + 8) = extraout_var_13;
                  *(long *)pauVar30[4] = extraout_d3_03;
                  dVar122 = dVar122 + (double)(lVar75 + ((uVar72 & 0xffffffff) >> 0x1b) +
                                               extraout_x9_04 + extraout_d3_03);
                  func_0x0001056d0a74(extraout_x8_07 + ((uVar37 & 0xffffffff) >> 0x1b) +
                                      ((uVar72 | uVar69) & extraout_x14_19 | uVar72 & uVar69) +
                                      extraout_var_13);
                  uVar69 = extraout_x13_20 & 0xffffffffc0000000 | uVar72 >> 2 & 0x3fffffff;
                  func_0x0001056d0b90(extraout_x12_20 * 0x20 + 0x8f1bbcdc +
                                      ((extraout_x12_20 & 0xffffffff) >> 0x1b) +
                                      ((uVar69 | uVar37) & extraout_x15_20 | uVar69 & uVar37));
                  *(undefined8 *)(pauVar30[5] + 8) = extraout_var_10;
                  *(undefined8 *)pauVar30[5] = extraout_d2_13;
                  func_0x0001056d0a38();
                  func_0x0001056d0a50(extraout_x14_20 * 0x20 + 0x8f1bbcdc +
                                      (extraout_x14_20 >> 0x1b & 0x1f));
                  uVar69 = extraout_x12_21 << 0x1e | extraout_x12_21 >> 2 & 0x3fffffff;
                  iVar64 = 0x1cc8;
                  dVar122 = dVar122 + extraout_d1_09;
                  uVar71 = extraout_x14_21;
                  uVar72 = extraout_x13_21;
                  uVar37 = extraout_x11_20;
                  uVar76 = extraout_x15_21;
                }
                lVar77 = uVar76 * 0x20 + 0x6ed9eba1;
                lVar42 = uVar72 * 0x20 + 0x6ed9eba1;
                lVar31 = uVar37 * 0x20 + 0x6ed9eba1;
                if (iVar64 != 0x13b4) break;
                uVar60 = uVar60 | uVar71 >> 2 & 0x3fffffff;
                bVar13 = pauVar30[7][8];
                bVar14 = pauVar30[7][9];
                bVar15 = pauVar30[7][10];
                bVar16 = pauVar30[7][0xb];
                bVar17 = pauVar30[7][0xc];
                bVar18 = pauVar30[7][0xd];
                bVar19 = pauVar30[7][0xe];
                bVar20 = pauVar30[7][0xf];
                uVar61 = uVar61 | uVar76 >> 2 & 0x3fffffff;
                uVar35 = *(ulong *)(pauVar30[4] + 8);
                uVar57 = *(ulong *)*pauVar30;
                uVar58 = *(ulong *)(*pauVar30 + 8);
                uVar39 = *(ulong *)pauVar30[3] ^ *(ulong *)pauVar30[7] ^
                         *(ulong *)(pauVar30[5] + 8) ^ uVar57;
                uVar32 = uVar39 << 1 | uVar39 >> 0x1f & 1;
                *(ulong *)pauVar30[7] = uVar32;
                uVar116 = *(undefined8 *)pauVar30[1];
                uVar104 = *(undefined8 *)(*pauVar30 + 8);
                uVar39 = *(ulong *)(pauVar30[1] + 8);
                auVar79._0_8_ =
                     CONCAT17(pauVar30[6][7] ^ pauVar30[3][0xf] ^ (byte)((ulong)uVar104 >> 0x38) ^
                              bVar20,CONCAT16(pauVar30[6][6] ^ pauVar30[3][0xe] ^
                                              (byte)((ulong)uVar104 >> 0x30) ^ bVar19,
                                              CONCAT15(pauVar30[6][5] ^ pauVar30[3][0xd] ^
                                                       (byte)((ulong)uVar104 >> 0x28) ^ bVar18,
                                                       CONCAT14(pauVar30[6][4] ^ pauVar30[3][0xc] ^
                                                                (byte)((ulong)uVar104 >> 0x20) ^
                                                                bVar17,CONCAT13(pauVar30[6][3] ^
                                                                                pauVar30[3][0xb] ^
                                                                                (byte)((ulong)
                                                  uVar104 >> 0x18) ^ bVar16,
                                                  CONCAT12(pauVar30[6][2] ^ pauVar30[3][10] ^
                                                           (byte)((ulong)uVar104 >> 0x10) ^ bVar15,
                                                           CONCAT11(pauVar30[6][1] ^ pauVar30[3][9]
                                                                    ^ (byte)((ulong)uVar104 >> 8) ^
                                                                    bVar14,pauVar30[6][0] ^
                                                                           pauVar30[3][8] ^
                                                                           (byte)uVar104 ^ bVar13)))
                                                  ))));
                auVar79[8] = pauVar30[6][8] ^ pauVar30[4][0] ^ (byte)uVar116 ^ (byte)uVar57;
                auVar79[9] = pauVar30[6][9] ^ pauVar30[4][1] ^ (byte)((ulong)uVar116 >> 8) ^
                             (byte)(uVar57 >> 8);
                auVar79[10] = pauVar30[6][10] ^ pauVar30[4][2] ^ (byte)((ulong)uVar116 >> 0x10) ^
                              (byte)(uVar57 >> 0x10);
                auVar79[0xb] = pauVar30[6][0xb] ^ pauVar30[4][3] ^ (byte)((ulong)uVar116 >> 0x18) ^
                               (byte)(uVar57 >> 0x18);
                auVar79[0xc] = pauVar30[6][0xc] ^ pauVar30[4][4] ^ (byte)((ulong)uVar116 >> 0x20) ^
                               (byte)(uVar57 >> 0x20);
                auVar79[0xd] = pauVar30[6][0xd] ^ pauVar30[4][5] ^ (byte)((ulong)uVar116 >> 0x28) ^
                               (byte)(uVar57 >> 0x28);
                auVar79[0xe] = pauVar30[6][0xe] ^ pauVar30[4][6] ^ (byte)((ulong)uVar116 >> 0x30) ^
                               (byte)(uVar57 >> 0x30);
                auVar79[0xf] = pauVar30[6][0xf] ^ pauVar30[4][7] ^ (byte)((ulong)uVar116 >> 0x38) ^
                               (byte)(uVar57 >> 0x38);
                auVar105._0_8_ = auVar79._0_8_ >> 0x1f;
                auVar105._8_8_ = auVar79._8_8_ >> 0x1f;
                auVar78 = NEON_sli(auVar105,auVar79,1,8);
                *(long *)(pauVar30[7] + 8) = auVar78._0_8_;
                *(long *)*pauVar30 = auVar78._8_8_;
                dVar122 = dVar122 + (double)(lVar77 + ((uVar76 & 0xffffffff) >> 0x1b) +
                                             (uVar69 ^ uVar71 ^ uVar37) + uVar32) +
                          (double)(lVar42 + (uVar69 ^ uVar76 ^ uVar60) +
                                   ((uVar72 & 0xffffffff) >> 0x1b) + auVar78._0_8_) +
                          (double)(lVar31 + ((uVar37 & 0xffffffff) >> 0x1b) +
                                   (uVar72 ^ uVar61 ^ uVar60) + auVar78._8_8_);
                uVar32 = uVar58 ^ uVar35 ^ uVar39 ^ uVar32;
                uVar76 = uVar32 << 1 | uVar32 >> 0x1f & 1;
                *(ulong *)(*pauVar30 + 8) = uVar76;
                func_0x0001056d0b9c(uVar69 * 0x20 + 0x6ed9eba1 + ((uVar69 & 0xffffffff) >> 0x1b) +
                                    (uVar61 ^ uVar37 ^ (uVar59 | uVar72 >> 2 & 0x3fffffff)) + uVar76
                                   );
                func_0x0001056d0b90();
                *(undefined8 *)(pauVar30[1] + 8) = extraout_var_02;
                *(undefined8 *)pauVar30[1] = extraout_d2;
                func_0x0001056d0cf0();
                func_0x0001056d0cb8();
                iVar64 = 0x3728;
                dVar122 = dVar122 + extraout_d1;
                uVar69 = extraout_x12;
                uVar72 = extraout_x13;
                uVar37 = extraout_x11;
                uVar76 = extraout_x15;
              }
              if (iVar64 != 0x1407) break;
              uVar39 = *(ulong *)(pauVar30[4] + 8);
              uVar44 = *(ulong *)(pauVar30[7] + 8);
              uVar35 = uVar37 >> 2 & 0x3fffffff;
              uVar45 = uVar57 | uVar35;
              uVar58 = uVar58 | uVar69 >> 2 & 0x3fffffff;
              bVar13 = pauVar30[1][8];
              bVar14 = pauVar30[1][9];
              bVar15 = pauVar30[1][10];
              bVar16 = pauVar30[1][0xb];
              bVar17 = pauVar30[1][0xc];
              bVar18 = pauVar30[1][0xd];
              bVar19 = pauVar30[1][0xe];
              bVar20 = pauVar30[1][0xf];
              bVar21 = pauVar30[2][1];
              bVar22 = pauVar30[2][2];
              bVar23 = pauVar30[2][3];
              bVar24 = pauVar30[2][4];
              bVar25 = pauVar30[2][5];
              bVar26 = pauVar30[2][6];
              bVar27 = pauVar30[2][7];
              uVar32 = *(ulong *)pauVar30[5] ^ *(ulong *)pauVar30[1] ^
                       *(ulong *)pauVar30[2] ^ uVar44;
              uVar36 = uVar32 << 1;
              uVar41 = uVar36 | uVar32 >> 0x1f & 1;
              *(ulong *)pauVar30[1] = uVar41;
              auVar78 = *(undefined1 (*) [16])(pauVar30[2] + 8);
              auVar83._0_8_ =
                   CONCAT17((*pauVar30)[7] ^ pauVar30[5][0xf] ^ bVar20 ^ auVar78[7],
                            CONCAT16((*pauVar30)[6] ^ pauVar30[5][0xe] ^ bVar19 ^ auVar78[6],
                                     CONCAT15((*pauVar30)[5] ^ pauVar30[5][0xd] ^
                                              bVar18 ^ auVar78[5],
                                              CONCAT14((*pauVar30)[4] ^ pauVar30[5][0xc] ^
                                                       bVar17 ^ auVar78[4],
                                                       CONCAT13((*pauVar30)[3] ^ pauVar30[5][0xb] ^
                                                                bVar16 ^ auVar78[3],
                                                                CONCAT12((*pauVar30)[2] ^
                                                                         pauVar30[5][10] ^
                                                                         bVar15 ^ auVar78[2],
                                                                         CONCAT11((*pauVar30)[1] ^
                                                                                  pauVar30[5][9] ^
                                                                                  bVar14 ^ auVar78[1
                                                  ],(*pauVar30)[0] ^ pauVar30[5][8] ^
                                                    bVar13 ^ auVar78[0])))))));
              auVar83[8] = (*pauVar30)[8] ^ pauVar30[6][0] ^ pauVar30[2][0] ^ auVar78[8];
              auVar83[9] = (*pauVar30)[9] ^ pauVar30[6][1] ^ bVar21 ^ auVar78[9];
              auVar83[10] = (*pauVar30)[10] ^ pauVar30[6][2] ^ bVar22 ^ auVar78[10];
              auVar83[0xb] = (*pauVar30)[0xb] ^ pauVar30[6][3] ^ bVar23 ^ auVar78[0xb];
              auVar83[0xc] = (*pauVar30)[0xc] ^ pauVar30[6][4] ^ bVar24 ^ auVar78[0xc];
              auVar83[0xd] = (*pauVar30)[0xd] ^ pauVar30[6][5] ^ bVar25 ^ auVar78[0xd];
              auVar83[0xe] = (*pauVar30)[0xe] ^ pauVar30[6][6] ^ bVar26 ^ auVar78[0xe];
              auVar83[0xf] = (*pauVar30)[0xf] ^ pauVar30[6][7] ^ bVar27 ^ auVar78[0xf];
              auVar95._0_8_ = auVar83._0_8_ >> 0x1f;
              auVar95._8_8_ = auVar83._8_8_ >> 0x1f;
              auVar100 = NEON_sli(auVar95,auVar83,1,8);
              uVar52 = auVar100._8_8_;
              *(ulong *)pauVar30[2] = uVar52;
              *(long *)(pauVar30[1] + 8) = auVar100._0_8_;
              auVar92 = *(undefined1 (*) [16])(pauVar30[3] + 8);
              uVar60 = uVar60 | uVar71 >> 2 & 0x3fffffff;
              uVar61 = uVar61 | uVar76 >> 2 & 0x3fffffff;
              uVar32 = *(ulong *)(pauVar30[3] + 8);
              auVar84._0_8_ =
                   CONCAT17(auVar78[7] ^ pauVar30[6][0xf] ^ auVar92[7] ^ (byte)(uVar36 >> 0x38),
                            CONCAT16(auVar78[6] ^ pauVar30[6][0xe] ^ auVar92[6] ^
                                     (byte)(uVar36 >> 0x30),
                                     CONCAT15(auVar78[5] ^ pauVar30[6][0xd] ^ auVar92[5] ^
                                              (byte)(uVar36 >> 0x28),
                                              CONCAT14(auVar78[4] ^ pauVar30[6][0xc] ^ auVar92[4] ^
                                                       (byte)(uVar36 >> 0x20),
                                                       CONCAT13(auVar78[3] ^ pauVar30[6][0xb] ^
                                                                auVar92[3] ^ (byte)(uVar36 >> 0x18),
                                                                CONCAT12(auVar78[2] ^
                                                                         pauVar30[6][10] ^
                                                                         auVar92[2] ^
                                                                         (byte)(uVar36 >> 0x10),
                                                                         CONCAT11(auVar78[1] ^
                                                                                  pauVar30[6][9] ^
                                                                                  auVar92[1] ^
                                                                                  (byte)(uVar36 >> 8
                                                                                        ),auVar78[0]
                                                                                          ^ pauVar30
                                                  [6][8] ^ auVar92[0] ^ (byte)uVar41)))))));
              auVar84[8] = auVar92[8] ^ pauVar30[7][0] ^ auVar100[0] ^ auVar78[8];
              auVar84[9] = auVar92[9] ^ pauVar30[7][1] ^ auVar100[1] ^ auVar78[9];
              auVar84[10] = auVar92[10] ^ pauVar30[7][2] ^ auVar100[2] ^ auVar78[10];
              auVar84[0xb] = auVar92[0xb] ^ pauVar30[7][3] ^ auVar100[3] ^ auVar78[0xb];
              auVar84[0xc] = auVar92[0xc] ^ pauVar30[7][4] ^ auVar100[4] ^ auVar78[0xc];
              auVar84[0xd] = auVar92[0xd] ^ pauVar30[7][5] ^ auVar100[5] ^ auVar78[0xd];
              auVar84[0xe] = auVar92[0xe] ^ pauVar30[7][6] ^ auVar100[6] ^ auVar78[0xe];
              auVar84[0xf] = auVar92[0xf] ^ pauVar30[7][7] ^ auVar100[7] ^ auVar78[0xf];
              auVar96._0_8_ = auVar84._0_8_ >> 0x1f;
              auVar96._8_8_ = auVar84._8_8_ >> 0x1f;
              auVar78 = NEON_sli(auVar96,auVar84,1,8);
              *(long *)pauVar30[3] = auVar78._8_8_;
              *(long *)(pauVar30[2] + 8) = auVar78._0_8_;
              dVar122 = dVar122 + (double)(uVar69 * 0x20 + 0x5a827999 +
                                           ((uVar69 & 0xffffffff) >> 0x1b) +
                                           (uVar72 & uVar37 | uVar76 & (uVar37 ^ 0xffffffffffffffff)
                                           ) + uVar41) +
                        (double)(uVar71 * 0x20 + 0x5a827999 + ((uVar71 & 0xffffffff) >> 0x1b) +
                                 (uVar45 & uVar69 | uVar72 & (uVar69 ^ 0xffffffffffffffff)) +
                                auVar100._0_8_) +
                        (double)(lVar77 + ((uVar76 & 0xffffffff) >> 0x1b) +
                                 (uVar58 ^ uVar71 ^ uVar45) + uVar52) +
                        (double)(lVar42 + ((uVar72 & 0xffffffff) >> 0x1b) +
                                 (uVar60 ^ uVar76 ^ uVar58) + auVar78._0_8_) +
                        (double)((uVar72 ^ uVar61 ^ uVar60) + 0x6ed9eba1 + uVar45 * 0x20 +
                                 ((uVar57 & 0xffffffff | uVar35) >> 0x1b) + auVar78._8_8_);
              uVar52 = uVar39 ^ uVar32 ^ uVar44 ^ uVar52;
              *(ulong *)(pauVar30[3] + 8) = uVar52 << 1 | uVar52 >> 0x1f & 1;
              func_0x0001056d0cac(uVar45 ^ uVar61 ^ (uVar59 | uVar72 >> 2 & 0x3fffffff));
              uVar37 = extraout_x11_13 << 0x1e | extraout_x11_13 >> 2 & 0x3fffffff;
              iVar64 = 0x1855;
              dVar122 = dVar122 + (double)extraout_x8_05;
              uVar69 = extraout_x12_13;
              uVar71 = extraout_x14_14;
              uVar72 = extraout_x13_15;
              uVar76 = extraout_x15_14;
            }
            lVar6 = uVar37 * 0x20 + 0xca62c1d6;
            lVar7 = uVar69 * 0x20 + 0xca62c1d6;
            lVar8 = uVar71 * 0x20 + 0xca62c1d6;
            if (iVar64 != 0x1766) break;
            uVar44 = uVar69 ^ uVar71;
            uVar39 = *(ulong *)(pauVar30[4] + 8);
            uVar54 = uVar72 & 0xffffffff;
            lVar74 = uVar72 * 0x20;
            uVar45 = *(ulong *)(pauVar30[7] + 8);
            uVar35 = uVar76 >> 2 & 0x3fffffff;
            uVar62 = uVar61 | uVar35;
            uVar32 = uVar37 & 0xffffffff;
            uVar36 = uVar71 ^ uVar72;
            uVar72 = uVar59 | uVar72 >> 2 & 0x3fffffff;
            uVar59 = uVar62 ^ uVar37;
            bVar13 = pauVar30[1][8];
            bVar14 = pauVar30[1][9];
            bVar15 = pauVar30[1][10];
            bVar16 = pauVar30[1][0xb];
            bVar17 = pauVar30[1][0xc];
            bVar18 = pauVar30[1][0xd];
            bVar19 = pauVar30[1][0xe];
            bVar20 = pauVar30[1][0xf];
            bVar21 = pauVar30[2][1];
            bVar22 = pauVar30[2][2];
            bVar23 = pauVar30[2][3];
            bVar24 = pauVar30[2][4];
            bVar25 = pauVar30[2][5];
            bVar26 = pauVar30[2][6];
            bVar27 = pauVar30[2][7];
            uVar52 = *(ulong *)pauVar30[5] ^ *(ulong *)pauVar30[1] ^ *(ulong *)pauVar30[2] ^ uVar45;
            uVar41 = uVar52 << 1;
            uVar52 = uVar41 | uVar52 >> 0x1f & 1;
            *(ulong *)pauVar30[1] = uVar52;
            auVar78 = *(undefined1 (*) [16])(pauVar30[2] + 8);
            auVar87._0_8_ =
                 CONCAT17((*pauVar30)[7] ^ pauVar30[5][0xf] ^ bVar20 ^ auVar78[7],
                          CONCAT16((*pauVar30)[6] ^ pauVar30[5][0xe] ^ bVar19 ^ auVar78[6],
                                   CONCAT15((*pauVar30)[5] ^ pauVar30[5][0xd] ^ bVar18 ^ auVar78[5],
                                            CONCAT14((*pauVar30)[4] ^ pauVar30[5][0xc] ^
                                                     bVar17 ^ auVar78[4],
                                                     CONCAT13((*pauVar30)[3] ^ pauVar30[5][0xb] ^
                                                              bVar16 ^ auVar78[3],
                                                              CONCAT12((*pauVar30)[2] ^
                                                                       pauVar30[5][10] ^
                                                                       bVar15 ^ auVar78[2],
                                                                       CONCAT11((*pauVar30)[1] ^
                                                                                pauVar30[5][9] ^
                                                                                bVar14 ^ auVar78[1],
                                                                                (*pauVar30)[0] ^
                                                                                pauVar30[5][8] ^
                                                                                bVar13 ^ auVar78[0])
                                                                      ))))));
            auVar87[8] = (*pauVar30)[8] ^ pauVar30[6][0] ^ pauVar30[2][0] ^ auVar78[8];
            auVar87[9] = (*pauVar30)[9] ^ pauVar30[6][1] ^ bVar21 ^ auVar78[9];
            auVar87[10] = (*pauVar30)[10] ^ pauVar30[6][2] ^ bVar22 ^ auVar78[10];
            auVar87[0xb] = (*pauVar30)[0xb] ^ pauVar30[6][3] ^ bVar23 ^ auVar78[0xb];
            auVar87[0xc] = (*pauVar30)[0xc] ^ pauVar30[6][4] ^ bVar24 ^ auVar78[0xc];
            auVar87[0xd] = (*pauVar30)[0xd] ^ pauVar30[6][5] ^ bVar25 ^ auVar78[0xd];
            auVar87[0xe] = (*pauVar30)[0xe] ^ pauVar30[6][6] ^ bVar26 ^ auVar78[0xe];
            auVar87[0xf] = (*pauVar30)[0xf] ^ pauVar30[6][7] ^ bVar27 ^ auVar78[0xf];
            auVar99._0_8_ = auVar87._0_8_ >> 0x1f;
            auVar99._8_8_ = auVar87._8_8_ >> 0x1f;
            auVar100 = NEON_sli(auVar99,auVar87,1,8);
            uVar46 = auVar100._8_8_;
            *(ulong *)pauVar30[2] = uVar46;
            *(long *)(pauVar30[1] + 8) = auVar100._0_8_;
            auVar92 = *(undefined1 (*) [16])(pauVar30[3] + 8);
            uVar55 = uVar69 & 0xffffffff;
            uVar37 = uVar57 | uVar37 >> 2 & 0x3fffffff;
            uVar56 = uVar37 ^ uVar69;
            uVar69 = uVar58 | uVar69 >> 2 & 0x3fffffff;
            uVar57 = *(ulong *)(pauVar30[3] + 8);
            auVar88._0_8_ =
                 CONCAT17(auVar78[7] ^ pauVar30[6][0xf] ^ auVar92[7] ^ (byte)(uVar41 >> 0x38),
                          CONCAT16(auVar78[6] ^ pauVar30[6][0xe] ^ auVar92[6] ^
                                   (byte)(uVar41 >> 0x30),
                                   CONCAT15(auVar78[5] ^ pauVar30[6][0xd] ^ auVar92[5] ^
                                            (byte)(uVar41 >> 0x28),
                                            CONCAT14(auVar78[4] ^ pauVar30[6][0xc] ^ auVar92[4] ^
                                                     (byte)(uVar41 >> 0x20),
                                                     CONCAT13(auVar78[3] ^ pauVar30[6][0xb] ^
                                                              auVar92[3] ^ (byte)(uVar41 >> 0x18),
                                                              CONCAT12(auVar78[2] ^ pauVar30[6][10]
                                                                       ^ auVar92[2] ^
                                                                       (byte)(uVar41 >> 0x10),
                                                                       CONCAT11(auVar78[1] ^
                                                                                pauVar30[6][9] ^
                                                                                auVar92[1] ^
                                                                                (byte)(uVar41 >> 8),
                                                                                auVar78[0] ^
                                                                                pauVar30[6][8] ^
                                                                                auVar92[0] ^
                                                                                (byte)uVar52)))))));
            auVar88[8] = auVar92[8] ^ pauVar30[7][0] ^ auVar100[0] ^ auVar78[8];
            auVar88[9] = auVar92[9] ^ pauVar30[7][1] ^ auVar100[1] ^ auVar78[9];
            auVar88[10] = auVar92[10] ^ pauVar30[7][2] ^ auVar100[2] ^ auVar78[10];
            auVar88[0xb] = auVar92[0xb] ^ pauVar30[7][3] ^ auVar100[3] ^ auVar78[0xb];
            auVar88[0xc] = auVar92[0xc] ^ pauVar30[7][4] ^ auVar100[4] ^ auVar78[0xc];
            auVar88[0xd] = auVar92[0xd] ^ pauVar30[7][5] ^ auVar100[5] ^ auVar78[0xd];
            auVar88[0xe] = auVar92[0xe] ^ pauVar30[7][6] ^ auVar100[6] ^ auVar78[0xe];
            auVar88[0xf] = auVar92[0xf] ^ pauVar30[7][7] ^ auVar100[7] ^ auVar78[0xf];
            auVar101._0_8_ = auVar88._0_8_ >> 0x1f;
            auVar101._8_8_ = auVar88._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar101,auVar88,1,8);
            *(long *)pauVar30[3] = auVar78._8_8_;
            *(long *)(pauVar30[2] + 8) = auVar78._0_8_;
            dVar122 = dVar122 + (double)((uVar44 ^ uVar76) + 0xca62c1d6 + lVar74 + (uVar54 >> 0x1b)
                                        + uVar52) +
                      (double)(lVar6 + (uVar32 >> 0x1b) + (uVar62 ^ uVar36) + auVar100._0_8_) +
                      (double)(lVar7 + (uVar55 >> 0x1b) + (uVar59 ^ uVar72) + uVar46) +
                      (double)(lVar8 + ((uVar71 & 0xffffffff) >> 0x1b) + (uVar56 ^ uVar72) +
                              auVar78._0_8_) +
                      (double)(uVar62 * 0x20 + 0xca62c1d6 + ((uVar61 & 0xffffffff | uVar35) >> 0x1b)
                               + (uVar69 ^ uVar71 ^ uVar37) + auVar78._8_8_);
            uVar71 = uVar60 | uVar71 >> 2 & 0x3fffffff;
            uVar46 = uVar39 ^ uVar57 ^ uVar45 ^ uVar46;
            uVar57 = uVar46 << 1 | uVar46 >> 0x1f & 1;
            *(ulong *)(pauVar30[3] + 8) = uVar57;
            uVar57 = (uVar71 ^ uVar62 ^ uVar69) + 0xca62c1d6 + uVar72 * 0x20 +
                     (uVar72 >> 0x1b & 0x1f) + uVar57;
            uVar76 = uVar62 << 0x1e | uVar62 >> 2 & 0x3fffffff;
            iVar64 = 0x22e9;
LAB_1056cfabc:
            dVar122 = dVar122 + (double)uVar57;
          }
          lVar9 = uVar71 * 0x20 + 0x6ed9eba1;
          if (iVar64 == 0x1855) {
            func_0x0001056d0b90(lVar9 + ((uVar71 & 0xffffffff) >> 0x1b) + (uVar37 ^ uVar69 ^ uVar72)
                               );
            uVar117 = *(undefined8 *)(pauVar30[7] + 8);
            uVar115 = *(undefined8 *)pauVar30[7];
            uVar104 = extraout_d3;
            uVar116 = extraout_d2_00;
            func_0x0001056d0bc8();
            dVar119 = (double)extraout_x8;
            func_0x0001056d0ae0(lVar77 + ((uVar76 & 0xffffffff) >> 0x1b));
            dVar122 = dVar122 + dVar119 + (double)extraout_x8_00;
            *(undefined8 *)(pauVar30[4] + 8) = extraout_var_03;
            *(undefined8 *)pauVar30[4] = extraout_d2_01;
            *(undefined8 *)(pauVar30[5] + 8) = uVar116;
            *(undefined8 *)pauVar30[5] = uVar104;
            func_0x0001056d0a60(lVar42 + ((uVar72 & 0xffffffff) >> 0x1b) +
                                ((extraout_x14 & 0xffffffffc0000000 | uVar71 >> 2 & 0x3fffffff) ^
                                 uVar76 ^ extraout_x12_00));
            dVar122 = dVar122 + extraout_d2_02;
            func_0x0001056d0cac(extraout_x9 ^ extraout_x14_00);
            func_0x0001056d0b9c();
            auVar78._0_8_ =
                 CONCAT17(pauVar30[2][7] ^ (byte)((ulong)uVar115 >> 0x38) ^
                          (byte)((ulong)extraout_d1_00 >> 0x38) ^
                          (byte)((ulong)extraout_d3_00 >> 0x38),
                          CONCAT16(pauVar30[2][6] ^ (byte)((ulong)uVar115 >> 0x30) ^
                                   (byte)((ulong)extraout_d1_00 >> 0x30) ^
                                   (byte)((ulong)extraout_d3_00 >> 0x30),
                                   CONCAT15(pauVar30[2][5] ^ (byte)((ulong)uVar115 >> 0x28) ^
                                            (byte)((ulong)extraout_d1_00 >> 0x28) ^
                                            (byte)((ulong)extraout_d3_00 >> 0x28),
                                            CONCAT14(pauVar30[2][4] ^ (byte)((ulong)uVar115 >> 0x20)
                                                     ^ (byte)((ulong)extraout_d1_00 >> 0x20) ^
                                                     (byte)((ulong)extraout_d3_00 >> 0x20),
                                                     CONCAT13(pauVar30[2][3] ^
                                                              (byte)((ulong)uVar115 >> 0x18) ^
                                                              (byte)((ulong)extraout_d1_00 >> 0x18)
                                                              ^ (byte)((ulong)extraout_d3_00 >> 0x18
                                                                      ),
                                                              CONCAT12(pauVar30[2][2] ^
                                                                       (byte)((ulong)uVar115 >> 0x10
                                                                             ) ^ (byte)((ulong)
                                                  extraout_d1_00 >> 0x10) ^
                                                  (byte)((ulong)extraout_d3_00 >> 0x10),
                                                  CONCAT11(pauVar30[2][1] ^
                                                           (byte)((ulong)uVar115 >> 8) ^
                                                           (byte)((ulong)extraout_d1_00 >> 8) ^
                                                           (byte)((ulong)extraout_d3_00 >> 8),
                                                           pauVar30[2][0] ^ (byte)uVar115 ^
                                                           (byte)extraout_d1_00 ^
                                                           (byte)extraout_d3_00)))))));
            auVar78[8] = pauVar30[2][8] ^ (byte)uVar117 ^ (byte)extraout_var ^ (byte)extraout_var_11
            ;
            auVar78[9] = pauVar30[2][9] ^ (byte)((ulong)uVar117 >> 8) ^
                         (byte)((ulong)extraout_var >> 8) ^ (byte)((ulong)extraout_var_11 >> 8);
            auVar78[10] = pauVar30[2][10] ^ (byte)((ulong)uVar117 >> 0x10) ^
                          (byte)((ulong)extraout_var >> 0x10) ^
                          (byte)((ulong)extraout_var_11 >> 0x10);
            auVar78[0xb] = pauVar30[2][0xb] ^ (byte)((ulong)uVar117 >> 0x18) ^
                           (byte)((ulong)extraout_var >> 0x18) ^
                           (byte)((ulong)extraout_var_11 >> 0x18);
            auVar78[0xc] = pauVar30[2][0xc] ^ (byte)((ulong)uVar117 >> 0x20) ^
                           (byte)((ulong)extraout_var >> 0x20) ^
                           (byte)((ulong)extraout_var_11 >> 0x20);
            auVar78[0xd] = pauVar30[2][0xd] ^ (byte)((ulong)uVar117 >> 0x28) ^
                           (byte)((ulong)extraout_var >> 0x28) ^
                           (byte)((ulong)extraout_var_11 >> 0x28);
            auVar78[0xe] = pauVar30[2][0xe] ^ (byte)((ulong)uVar117 >> 0x30) ^
                           (byte)((ulong)extraout_var >> 0x30) ^
                           (byte)((ulong)extraout_var_11 >> 0x30);
            auVar78[0xf] = pauVar30[2][0xf] ^ (byte)((ulong)uVar117 >> 0x38) ^
                           (byte)((ulong)extraout_var >> 0x38) ^
                           (byte)((ulong)extraout_var_11 >> 0x38);
            auVar92._0_8_ = auVar78._0_8_ >> 0x1f;
            auVar92._8_8_ = auVar78._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar92,auVar78,1,8);
            *(long *)(pauVar30[6] + 8) = auVar78._8_8_;
            *(long *)pauVar30[6] = auVar78._0_8_;
            dVar122 = dVar122 + (double)(extraout_x12_01 * 0x20 + 0x6ed9eba1 +
                                         ((extraout_x12_01 & 0xffffffff) >> 0x1b) +
                                         (extraout_x15_00 ^ uVar37 ^
                                         (extraout_x13_00 & 0xffffffffc0000000 |
                                         uVar72 >> 2 & 0x3fffffff)) + auVar78._0_8_);
            func_0x0001056d0a50(extraout_x14_01 * 0x20 + 0x6ed9eba1 +
                                (extraout_x14_01 >> 0x1b & 0x1f));
            uVar69 = extraout_x12_02 << 0x1e | extraout_x12_02 >> 2 & 0x3fffffff;
            iVar64 = 0x13b4;
            dVar122 = dVar122 + extraout_d1_01;
            uVar71 = extraout_x14_02;
            uVar72 = extraout_x13_01;
            uVar37 = extraout_x11_00;
            uVar76 = extraout_x15_01;
            goto LAB_1056ce9cc;
          }
          lVar77 = uVar76 * 0x20 + 0x5a827999;
          lVar42 = uVar37 * 0x20 + 0x5a827999;
          if (iVar64 == 0x1b78) {
            func_0x0001056d0a74(lVar77 + ((uVar76 & 0xffffffff) >> 0x1b) +
                                (uVar69 & uVar71 | uVar37 & (uVar71 ^ 0xffffffffffffffff)) +
                                *(long *)*pauVar30);
            func_0x0001056d0cac((extraout_x14_03 & 0xffffffffc0000000 | uVar71 >> 2 & 0x3fffffff) &
                                uVar76 | uVar69 & (uVar76 ^ 0xffffffffffffffff));
            func_0x0001056d0a74();
            func_0x0001056d0a74(lVar42 + ((uVar37 & 0xffffffff) >> 0x1b) +
                                ((extraout_x15_02 & 0xffffffffc0000000 | uVar76 >> 2 & 0x3fffffff) &
                                 uVar72 | extraout_x14_04 & (uVar72 ^ 0xffffffffffffffff)) +
                                *(long *)pauVar30[1]);
            func_0x0001056d0cac((extraout_x13_02 & 0xffffffffc0000000 | uVar72 >> 2 & 0x3fffffff) &
                                uVar37 | extraout_x15_03 & (uVar37 ^ 0xffffffffffffffff));
            func_0x0001056d0a74();
            uVar37 = extraout_x11_01 & 0xffffffffc0000000 | uVar37 >> 2 & 0x3fffffff;
            dVar122 = dVar122 + (double)(extraout_x14_05 * 0x20 + 0x5a827999 +
                                         ((extraout_x14_05 & 0xffffffff) >> 0x1b) +
                                        (uVar37 & uVar69 |
                                        extraout_x13_03 & (uVar69 ^ 0xffffffffffffffff)) +
                                        *(long *)pauVar30[2]);
            func_0x0001056d0a74(extraout_x15_04 * 0x20 + 0x5a827999 +
                                (extraout_x15_04 >> 0x1b & 0x1f) +
                                ((extraout_x12_03 & 0xffffffffc0000000 | uVar69 >> 2 & 0x3fffffff) &
                                 extraout_x14_05 | uVar37 & (extraout_x14_05 ^ 0xffffffffffffffff))
                                + *(long *)(pauVar30[2] + 8));
            uVar71 = extraout_x14_06 << 0x1e | extraout_x14_06 >> 2 & 0x3fffffff;
            iVar64 = 0x2802;
            uVar69 = extraout_x12_04;
            uVar72 = extraout_x13_04;
            uVar37 = extraout_x11_02;
            uVar76 = extraout_x15_05;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x1cc8) {
            uVar60 = uVar60 | uVar71 >> 2 & 0x3fffffff;
            uVar61 = uVar61 | uVar76 >> 2 & 0x3fffffff;
            uVar58 = *(ulong *)(pauVar30[3] + 8);
            uVar57 = *(ulong *)(pauVar30[7] + 8);
            bVar13 = pauVar30[6][8];
            bVar14 = pauVar30[6][9];
            bVar15 = pauVar30[6][10];
            bVar16 = pauVar30[6][0xb];
            bVar17 = pauVar30[6][0xc];
            bVar18 = pauVar30[6][0xd];
            bVar19 = pauVar30[6][0xe];
            bVar20 = pauVar30[6][0xf];
            bVar21 = pauVar30[7][1];
            bVar22 = pauVar30[7][2];
            bVar23 = pauVar30[7][3];
            bVar24 = pauVar30[7][4];
            bVar25 = pauVar30[7][5];
            bVar26 = pauVar30[7][6];
            bVar27 = pauVar30[7][7];
            uVar35 = *(ulong *)pauVar30[2] ^ *(ulong *)pauVar30[6] ^
                     *(ulong *)(pauVar30[4] + 8) ^ *(ulong *)pauVar30[7];
            uVar39 = uVar35 << 1 | uVar35 >> 0x1f & 1;
            *(ulong *)pauVar30[6] = uVar39;
            uVar35 = *(ulong *)(*pauVar30 + 8);
            auVar78 = *pauVar30;
            auVar100._0_8_ =
                 CONCAT17(pauVar30[5][7] ^ pauVar30[2][0xf] ^ bVar20 ^ (byte)(uVar57 >> 0x38),
                          CONCAT16(pauVar30[5][6] ^ pauVar30[2][0xe] ^ bVar19 ^
                                   (byte)(uVar57 >> 0x30),
                                   CONCAT15(pauVar30[5][5] ^ pauVar30[2][0xd] ^ bVar18 ^
                                            (byte)(uVar57 >> 0x28),
                                            CONCAT14(pauVar30[5][4] ^ pauVar30[2][0xc] ^ bVar17 ^
                                                     (byte)(uVar57 >> 0x20),
                                                     CONCAT13(pauVar30[5][3] ^ pauVar30[2][0xb] ^
                                                              bVar16 ^ (byte)(uVar57 >> 0x18),
                                                              CONCAT12(pauVar30[5][2] ^
                                                                       pauVar30[2][10] ^ bVar15 ^
                                                                       (byte)(uVar57 >> 0x10),
                                                                       CONCAT11(pauVar30[5][1] ^
                                                                                pauVar30[2][9] ^
                                                                                bVar14 ^ (byte)(
                                                  uVar57 >> 8),
                                                  pauVar30[5][0] ^ pauVar30[2][8] ^ bVar13 ^
                                                  (byte)uVar57)))))));
            auVar100[8] = pauVar30[5][8] ^ pauVar30[3][0] ^ pauVar30[7][0] ^ auVar78[0];
            auVar100[9] = pauVar30[5][9] ^ pauVar30[3][1] ^ bVar21 ^ auVar78[1];
            auVar100[10] = pauVar30[5][10] ^ pauVar30[3][2] ^ bVar22 ^ auVar78[2];
            auVar100[0xb] = pauVar30[5][0xb] ^ pauVar30[3][3] ^ bVar23 ^ auVar78[3];
            auVar100[0xc] = pauVar30[5][0xc] ^ pauVar30[3][4] ^ bVar24 ^ auVar78[4];
            auVar100[0xd] = pauVar30[5][0xd] ^ pauVar30[3][5] ^ bVar25 ^ auVar78[5];
            auVar100[0xe] = pauVar30[5][0xe] ^ pauVar30[3][6] ^ bVar26 ^ auVar78[6];
            auVar100[0xf] = pauVar30[5][0xf] ^ pauVar30[3][7] ^ bVar27 ^ auVar78[7];
            auVar111._0_8_ = auVar100._0_8_ >> 0x1f;
            auVar111._8_8_ = auVar100._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar111,auVar100,1,8);
            *(long *)pauVar30[7] = auVar78._8_8_;
            *(long *)(pauVar30[6] + 8) = auVar78._0_8_;
            dVar122 = dVar122 + (double)(uVar76 * 0x20 + 0xca62c1d6 +
                                         ((uVar76 & 0xffffffff) >> 0x1b) +
                                         (uVar69 ^ uVar71 ^ uVar37) + uVar39) +
                      (double)(uVar72 * 0x20 + 0xca62c1d6 + (uVar69 ^ uVar76 ^ uVar60) +
                               ((uVar72 & 0xffffffff) >> 0x1b) + auVar78._0_8_) +
                      (double)(lVar6 + ((uVar37 & 0xffffffff) >> 0x1b) + (uVar72 ^ uVar61 ^ uVar60)
                              + auVar78._8_8_);
            uVar39 = uVar58 ^ uVar35 ^ uVar57 ^ uVar39;
            uVar76 = uVar39 << 1 | uVar39 >> 0x1f & 1;
            *(ulong *)(pauVar30[7] + 8) = uVar76;
            func_0x0001056d0b9c(lVar7 + ((uVar69 & 0xffffffff) >> 0x1b) +
                                (uVar61 ^ uVar37 ^ (uVar59 | uVar72 >> 2 & 0x3fffffff)) + uVar76);
            func_0x0001056d0b90();
            *(undefined8 *)(*pauVar30 + 8) = extraout_var_06;
            *(undefined8 *)*pauVar30 = extraout_d2_08;
            func_0x0001056d0cf0();
            func_0x0001056d0cb8();
            iVar64 = 0x1766;
            dVar122 = dVar122 + extraout_d1_04;
            uVar69 = extraout_x12_14;
            uVar72 = extraout_x13_16;
            uVar37 = extraout_x11_14;
            uVar76 = extraout_x15_15;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x2075) {
            iVar64 = 0xb0a;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x22e9) {
            uVar59 = uVar59 | uVar72 >> 2 & 0x3fffffff;
            uVar116 = *(undefined8 *)(*pauVar30 + 8);
            uVar104 = *(undefined8 *)*pauVar30;
            uVar118 = *(undefined8 *)(pauVar30[1] + 8);
            uVar117 = *(undefined8 *)pauVar30[1];
            auVar81._0_8_ =
                 CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ pauVar30[4][7] ^
                          pauVar30[2][0xf] ^ pauVar30[5][7],
                          CONCAT16((byte)((ulong)uVar104 >> 0x30) ^ pauVar30[4][6] ^
                                   pauVar30[2][0xe] ^ pauVar30[5][6],
                                   CONCAT15((byte)((ulong)uVar104 >> 0x28) ^ pauVar30[4][5] ^
                                            pauVar30[2][0xd] ^ pauVar30[5][5],
                                            CONCAT14((byte)((ulong)uVar104 >> 0x20) ^ pauVar30[4][4]
                                                     ^ pauVar30[2][0xc] ^ pauVar30[5][4],
                                                     CONCAT13((byte)((ulong)uVar104 >> 0x18) ^
                                                              pauVar30[4][3] ^
                                                              pauVar30[2][0xb] ^ pauVar30[5][3],
                                                              CONCAT12((byte)((ulong)uVar104 >> 0x10
                                                                             ) ^ pauVar30[4][2] ^
                                                                       pauVar30[2][10] ^
                                                                       pauVar30[5][2],
                                                                       CONCAT11((byte)((ulong)
                                                  uVar104 >> 8) ^ pauVar30[4][1] ^
                                                  pauVar30[2][9] ^ pauVar30[5][1],
                                                  (byte)uVar104 ^ pauVar30[4][0] ^
                                                  pauVar30[2][8] ^ pauVar30[5][0])))))));
            auVar81[8] = (byte)uVar116 ^ pauVar30[3][0] ^ pauVar30[4][8] ^ pauVar30[5][8];
            auVar81[9] = (byte)((ulong)uVar116 >> 8) ^ pauVar30[3][1] ^
                         pauVar30[4][9] ^ pauVar30[5][9];
            auVar81[10] = (byte)((ulong)uVar116 >> 0x10) ^ pauVar30[3][2] ^
                          pauVar30[4][10] ^ pauVar30[5][10];
            auVar81[0xb] = (byte)((ulong)uVar116 >> 0x18) ^ pauVar30[3][3] ^
                           pauVar30[4][0xb] ^ pauVar30[5][0xb];
            auVar81[0xc] = (byte)((ulong)uVar116 >> 0x20) ^ pauVar30[3][4] ^
                           pauVar30[4][0xc] ^ pauVar30[5][0xc];
            auVar81[0xd] = (byte)((ulong)uVar116 >> 0x28) ^ pauVar30[3][5] ^
                           pauVar30[4][0xd] ^ pauVar30[5][0xd];
            auVar81[0xe] = (byte)((ulong)uVar116 >> 0x30) ^ pauVar30[3][6] ^
                           pauVar30[4][0xe] ^ pauVar30[5][0xe];
            auVar81[0xf] = (byte)((ulong)uVar116 >> 0x38) ^ pauVar30[3][7] ^
                           pauVar30[4][0xf] ^ pauVar30[5][0xf];
            auVar93._0_8_ = auVar81._0_8_ >> 0x1f;
            auVar93._8_8_ = auVar81._8_8_ >> 0x1f;
            auVar92 = NEON_sli(auVar93,auVar81,1,8);
            uVar104 = *(undefined8 *)(pauVar30[3] + 8);
            auVar78 = pauVar30[6];
            uVar115 = *(undefined8 *)(pauVar30[7] + 8);
            uVar116 = *(undefined8 *)pauVar30[7];
            auVar106._0_8_ =
                 CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ (byte)((ulong)uVar117 >> 0x38) ^
                          auVar78[7] ^ pauVar30[5][7],
                          CONCAT16((byte)((ulong)uVar104 >> 0x30) ^ (byte)((ulong)uVar117 >> 0x30) ^
                                   auVar78[6] ^ pauVar30[5][6],
                                   CONCAT15((byte)((ulong)uVar104 >> 0x28) ^
                                            (byte)((ulong)uVar117 >> 0x28) ^ auVar78[5] ^
                                            pauVar30[5][5],
                                            CONCAT14((byte)((ulong)uVar104 >> 0x20) ^
                                                     (byte)((ulong)uVar117 >> 0x20) ^ auVar78[4] ^
                                                     pauVar30[5][4],
                                                     CONCAT13((byte)((ulong)uVar104 >> 0x18) ^
                                                              (byte)((ulong)uVar117 >> 0x18) ^
                                                              auVar78[3] ^ pauVar30[5][3],
                                                              CONCAT12((byte)((ulong)uVar104 >> 0x10
                                                                             ) ^ (byte)((ulong)
                                                  uVar117 >> 0x10) ^ auVar78[2] ^ pauVar30[5][2],
                                                  CONCAT11((byte)((ulong)uVar104 >> 8) ^
                                                           (byte)((ulong)uVar117 >> 8) ^ auVar78[1]
                                                           ^ pauVar30[5][1],
                                                           (byte)uVar104 ^ (byte)uVar117 ^
                                                           auVar78[0] ^ pauVar30[5][0])))))));
            auVar106[8] = pauVar30[5][8] ^ (byte)uVar118 ^ auVar78[8] ^ auVar92[0];
            auVar106[9] = pauVar30[5][9] ^ (byte)((ulong)uVar118 >> 8) ^ auVar78[9] ^ auVar92[1];
            auVar106[10] = pauVar30[5][10] ^ (byte)((ulong)uVar118 >> 0x10) ^ auVar78[10] ^
                           auVar92[2];
            auVar106[0xb] =
                 pauVar30[5][0xb] ^ (byte)((ulong)uVar118 >> 0x18) ^ auVar78[0xb] ^ auVar92[3];
            auVar106[0xc] =
                 pauVar30[5][0xc] ^ (byte)((ulong)uVar118 >> 0x20) ^ auVar78[0xc] ^ auVar92[4];
            auVar106[0xd] =
                 pauVar30[5][0xd] ^ (byte)((ulong)uVar118 >> 0x28) ^ auVar78[0xd] ^ auVar92[5];
            auVar106[0xe] =
                 pauVar30[5][0xe] ^ (byte)((ulong)uVar118 >> 0x30) ^ auVar78[0xe] ^ auVar92[6];
            auVar106[0xf] =
                 pauVar30[5][0xf] ^ (byte)((ulong)uVar118 >> 0x38) ^ auVar78[0xf] ^ auVar92[7];
            auVar112._0_8_ = auVar106._0_8_ >> 0x1f;
            auVar112._8_8_ = auVar106._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar112,auVar106,1,8);
            NEON_ext(auVar92,auVar78,8,1);
            dVar122 = dVar122 + (double)(lVar6 + ((uVar37 & 0xffffffff) >> 0x1b) +
                                         (uVar71 ^ uVar76 ^ uVar72) + auVar92._0_8_) +
                      (double)(lVar7 + ((uVar69 & 0xffffffff) >> 0x1b) + (uVar37 ^ uVar76 ^ uVar59)
                              + auVar92._8_8_);
            *(long *)(pauVar30[4] + 8) = auVar92._8_8_;
            *(long *)pauVar30[4] = auVar92._0_8_;
            *(long *)(pauVar30[5] + 8) = auVar78._8_8_;
            *(long *)pauVar30[5] = auVar78._0_8_;
            func_0x0001056d0a60(lVar8 + ((uVar71 & 0xffffffff) >> 0x1b) +
                                ((uVar57 | uVar37 >> 2 & 0x3fffffff) ^ uVar69 ^ uVar59));
            dVar122 = dVar122 + extraout_d2_07;
            func_0x0001056d0cac(extraout_x9_03 ^ extraout_x11_10);
            func_0x0001056d0b9c();
            auVar82._0_8_ =
                 CONCAT17(pauVar30[2][7] ^ (byte)((ulong)uVar116 >> 0x38) ^
                          (byte)((ulong)extraout_d1_02 >> 0x38) ^
                          (byte)((ulong)extraout_d3_02 >> 0x38),
                          CONCAT16(pauVar30[2][6] ^ (byte)((ulong)uVar116 >> 0x30) ^
                                   (byte)((ulong)extraout_d1_02 >> 0x30) ^
                                   (byte)((ulong)extraout_d3_02 >> 0x30),
                                   CONCAT15(pauVar30[2][5] ^ (byte)((ulong)uVar116 >> 0x28) ^
                                            (byte)((ulong)extraout_d1_02 >> 0x28) ^
                                            (byte)((ulong)extraout_d3_02 >> 0x28),
                                            CONCAT14(pauVar30[2][4] ^ (byte)((ulong)uVar116 >> 0x20)
                                                     ^ (byte)((ulong)extraout_d1_02 >> 0x20) ^
                                                     (byte)((ulong)extraout_d3_02 >> 0x20),
                                                     CONCAT13(pauVar30[2][3] ^
                                                              (byte)((ulong)uVar116 >> 0x18) ^
                                                              (byte)((ulong)extraout_d1_02 >> 0x18)
                                                              ^ (byte)((ulong)extraout_d3_02 >> 0x18
                                                                      ),
                                                              CONCAT12(pauVar30[2][2] ^
                                                                       (byte)((ulong)uVar116 >> 0x10
                                                                             ) ^ (byte)((ulong)
                                                  extraout_d1_02 >> 0x10) ^
                                                  (byte)((ulong)extraout_d3_02 >> 0x10),
                                                  CONCAT11(pauVar30[2][1] ^
                                                           (byte)((ulong)uVar116 >> 8) ^
                                                           (byte)((ulong)extraout_d1_02 >> 8) ^
                                                           (byte)((ulong)extraout_d3_02 >> 8),
                                                           pauVar30[2][0] ^ (byte)uVar116 ^
                                                           (byte)extraout_d1_02 ^
                                                           (byte)extraout_d3_02)))))));
            auVar82[8] = pauVar30[2][8] ^ (byte)uVar115 ^ (byte)extraout_var_00 ^
                         (byte)extraout_var_12;
            auVar82[9] = pauVar30[2][9] ^ (byte)((ulong)uVar115 >> 8) ^
                         (byte)((ulong)extraout_var_00 >> 8) ^ (byte)((ulong)extraout_var_12 >> 8);
            auVar82[10] = pauVar30[2][10] ^ (byte)((ulong)uVar115 >> 0x10) ^
                          (byte)((ulong)extraout_var_00 >> 0x10) ^
                          (byte)((ulong)extraout_var_12 >> 0x10);
            auVar82[0xb] = pauVar30[2][0xb] ^ (byte)((ulong)uVar115 >> 0x18) ^
                           (byte)((ulong)extraout_var_00 >> 0x18) ^
                           (byte)((ulong)extraout_var_12 >> 0x18);
            auVar82[0xc] = pauVar30[2][0xc] ^ (byte)((ulong)uVar115 >> 0x20) ^
                           (byte)((ulong)extraout_var_00 >> 0x20) ^
                           (byte)((ulong)extraout_var_12 >> 0x20);
            auVar82[0xd] = pauVar30[2][0xd] ^ (byte)((ulong)uVar115 >> 0x28) ^
                           (byte)((ulong)extraout_var_00 >> 0x28) ^
                           (byte)((ulong)extraout_var_12 >> 0x28);
            auVar82[0xe] = pauVar30[2][0xe] ^ (byte)((ulong)uVar115 >> 0x30) ^
                           (byte)((ulong)extraout_var_00 >> 0x30) ^
                           (byte)((ulong)extraout_var_12 >> 0x30);
            auVar82[0xf] = pauVar30[2][0xf] ^ (byte)((ulong)uVar115 >> 0x38) ^
                           (byte)((ulong)extraout_var_00 >> 0x38) ^
                           (byte)((ulong)extraout_var_12 >> 0x38);
            auVar94._0_8_ = auVar82._0_8_ >> 0x1f;
            auVar94._8_8_ = auVar82._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar94,auVar82,1,8);
            *(long *)(pauVar30[6] + 8) = auVar78._8_8_;
            *(long *)pauVar30[6] = auVar78._0_8_;
            dVar122 = dVar122 + (double)(((extraout_x14_12 & 0xffffffffc0000000 |
                                          uVar71 >> 2 & 0x3fffffff) ^ uVar76 ^ extraout_x12_11) +
                                         0xca62c1d6 + extraout_x13_13 * 0x20 +
                                         ((extraout_x13_13 & 0xffffffff) >> 0x1b) + auVar78._0_8_);
            func_0x0001056d0a50(extraout_x11_11 * 0x20 + 0xca62c1d6 +
                                (extraout_x11_11 >> 0x1b & 0x1f));
            uVar72 = extraout_x13_14 << 0x1e | extraout_x13_14 >> 2 & 0x3fffffff;
            iVar64 = 0x2f42;
            dVar122 = dVar122 + extraout_d1_03;
            uVar69 = extraout_x12_12;
            uVar71 = extraout_x14_13;
            uVar37 = extraout_x11_12;
            uVar76 = extraout_x15_13;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x2802) {
            dVar122 = dVar122 + (double)(uVar72 * 0x20 + 0x5a827999 +
                                         (uVar71 & uVar76 | uVar69 & (uVar76 ^ 0xffffffffffffffff))
                                         + ((uVar72 & 0xffffffff) >> 0x1b) + *(long *)pauVar30[3]) +
                      (double)(lVar42 + ((uVar37 & 0xffffffff) >> 0x1b) +
                               ((uVar61 | uVar76 >> 2 & 0x3fffffff) & uVar72 |
                               uVar71 & (uVar72 ^ 0xffffffffffffffff)) + *(long *)(pauVar30[3] + 8))
            ;
            func_0x0001056d0d60();
            dVar122 = dVar122 + (double)(ulong)(extraout_x9_02 + *(long *)pauVar30[4]);
            func_0x0001056d0a74(extraout_x8_04 + ((uVar71 & 0xffffffff) >> 0x1b) +
                                ((extraout_x11_07 & 0xffffffffc0000000 | uVar37 >> 2 & 0x3fffffff) &
                                 uVar69 | extraout_x13_10 & (uVar69 ^ 0xffffffffffffffff)) +
                                *(long *)(pauVar30[4] + 8));
            uVar37 = extraout_x12_09 & 0xffffffffc0000000 | uVar69 >> 2 & 0x3fffffff;
            dVar122 = dVar122 + (double)(extraout_x15_11 * 0x20 + 0x5a827999 +
                                         ((extraout_x15_11 & 0xffffffff) >> 0x1b) +
                                        (uVar37 & uVar71 |
                                        extraout_x11_08 & (uVar71 ^ 0xffffffffffffffff)) +
                                        *(long *)pauVar30[5]);
            func_0x0001056d0a74(extraout_x13_11 * 0x20 + 0x5a827999 +
                                ((extraout_x14_10 & 0xffffffffc0000000 | uVar71 >> 2 & 0x3fffffff) &
                                 extraout_x15_11 | uVar37 & (extraout_x15_11 ^ 0xffffffffffffffff))
                                + (extraout_x13_11 >> 0x1b & 0x1f) + *(long *)(pauVar30[5] + 8));
            uVar76 = extraout_x15_12 << 0x1e | extraout_x15_12 >> 2 & 0x3fffffff;
            iVar64 = 0x3491;
            uVar69 = extraout_x12_10;
            uVar71 = extraout_x14_11;
            uVar72 = extraout_x13_12;
            uVar37 = extraout_x11_09;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x2a69) {
            uVar57 = uVar57 | uVar37 >> 2 & 0x3fffffff;
            uVar116 = *(undefined8 *)(pauVar30[4] + 8);
            uVar104 = *(undefined8 *)pauVar30[4];
            uVar117 = *(undefined8 *)(pauVar30[5] + 8);
            uVar115 = *(undefined8 *)pauVar30[5];
            auVar85._0_8_ =
                 CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ (*pauVar30)[7] ^
                          pauVar30[6][0xf] ^ pauVar30[1][7],
                          CONCAT16((byte)((ulong)uVar104 >> 0x30) ^ (*pauVar30)[6] ^
                                   pauVar30[6][0xe] ^ pauVar30[1][6],
                                   CONCAT15((byte)((ulong)uVar104 >> 0x28) ^ (*pauVar30)[5] ^
                                            pauVar30[6][0xd] ^ pauVar30[1][5],
                                            CONCAT14((byte)((ulong)uVar104 >> 0x20) ^ (*pauVar30)[4]
                                                     ^ pauVar30[6][0xc] ^ pauVar30[1][4],
                                                     CONCAT13((byte)((ulong)uVar104 >> 0x18) ^
                                                              (*pauVar30)[3] ^
                                                              pauVar30[6][0xb] ^ pauVar30[1][3],
                                                              CONCAT12((byte)((ulong)uVar104 >> 0x10
                                                                             ) ^ (*pauVar30)[2] ^
                                                                       pauVar30[6][10] ^
                                                                       pauVar30[1][2],
                                                                       CONCAT11((byte)((ulong)
                                                  uVar104 >> 8) ^ (*pauVar30)[1] ^
                                                  pauVar30[6][9] ^ pauVar30[1][1],
                                                  (byte)uVar104 ^ (*pauVar30)[0] ^
                                                  pauVar30[6][8] ^ pauVar30[1][0])))))));
            auVar85[8] = (byte)uVar116 ^ pauVar30[7][0] ^ (*pauVar30)[8] ^ pauVar30[1][8];
            auVar85[9] = (byte)((ulong)uVar116 >> 8) ^ pauVar30[7][1] ^
                         (*pauVar30)[9] ^ pauVar30[1][9];
            auVar85[10] = (byte)((ulong)uVar116 >> 0x10) ^ pauVar30[7][2] ^
                          (*pauVar30)[10] ^ pauVar30[1][10];
            auVar85[0xb] = (byte)((ulong)uVar116 >> 0x18) ^ pauVar30[7][3] ^
                           (*pauVar30)[0xb] ^ pauVar30[1][0xb];
            auVar85[0xc] = (byte)((ulong)uVar116 >> 0x20) ^ pauVar30[7][4] ^
                           (*pauVar30)[0xc] ^ pauVar30[1][0xc];
            auVar85[0xd] = (byte)((ulong)uVar116 >> 0x28) ^ pauVar30[7][5] ^
                           (*pauVar30)[0xd] ^ pauVar30[1][0xd];
            auVar85[0xe] = (byte)((ulong)uVar116 >> 0x30) ^ pauVar30[7][6] ^
                           (*pauVar30)[0xe] ^ pauVar30[1][0xe];
            auVar85[0xf] = (byte)((ulong)uVar116 >> 0x38) ^ pauVar30[7][7] ^
                           (*pauVar30)[0xf] ^ pauVar30[1][0xf];
            auVar97._0_8_ = auVar85._0_8_ >> 0x1f;
            auVar97._8_8_ = auVar85._8_8_ >> 0x1f;
            auVar92 = NEON_sli(auVar97,auVar85,1,8);
            uVar104 = *(undefined8 *)(pauVar30[7] + 8);
            auVar78 = pauVar30[2];
            auVar107._0_8_ =
                 CONCAT17((byte)((ulong)uVar104 >> 0x38) ^ (byte)((ulong)uVar115 >> 0x38) ^
                          auVar78[7] ^ pauVar30[1][7],
                          CONCAT16((byte)((ulong)uVar104 >> 0x30) ^ (byte)((ulong)uVar115 >> 0x30) ^
                                   auVar78[6] ^ pauVar30[1][6],
                                   CONCAT15((byte)((ulong)uVar104 >> 0x28) ^
                                            (byte)((ulong)uVar115 >> 0x28) ^ auVar78[5] ^
                                            pauVar30[1][5],
                                            CONCAT14((byte)((ulong)uVar104 >> 0x20) ^
                                                     (byte)((ulong)uVar115 >> 0x20) ^ auVar78[4] ^
                                                     pauVar30[1][4],
                                                     CONCAT13((byte)((ulong)uVar104 >> 0x18) ^
                                                              (byte)((ulong)uVar115 >> 0x18) ^
                                                              auVar78[3] ^ pauVar30[1][3],
                                                              CONCAT12((byte)((ulong)uVar104 >> 0x10
                                                                             ) ^ (byte)((ulong)
                                                  uVar115 >> 0x10) ^ auVar78[2] ^ pauVar30[1][2],
                                                  CONCAT11((byte)((ulong)uVar104 >> 8) ^
                                                           (byte)((ulong)uVar115 >> 8) ^ auVar78[1]
                                                           ^ pauVar30[1][1],
                                                           (byte)uVar104 ^ (byte)uVar115 ^
                                                           auVar78[0] ^ pauVar30[1][0])))))));
            auVar107[8] = pauVar30[1][8] ^ (byte)uVar117 ^ auVar78[8] ^ auVar92[0];
            auVar107[9] = pauVar30[1][9] ^ (byte)((ulong)uVar117 >> 8) ^ auVar78[9] ^ auVar92[1];
            auVar107[10] = pauVar30[1][10] ^ (byte)((ulong)uVar117 >> 0x10) ^ auVar78[10] ^
                           auVar92[2];
            auVar107[0xb] =
                 pauVar30[1][0xb] ^ (byte)((ulong)uVar117 >> 0x18) ^ auVar78[0xb] ^ auVar92[3];
            auVar107[0xc] =
                 pauVar30[1][0xc] ^ (byte)((ulong)uVar117 >> 0x20) ^ auVar78[0xc] ^ auVar92[4];
            auVar107[0xd] =
                 pauVar30[1][0xd] ^ (byte)((ulong)uVar117 >> 0x28) ^ auVar78[0xd] ^ auVar92[5];
            auVar107[0xe] =
                 pauVar30[1][0xe] ^ (byte)((ulong)uVar117 >> 0x30) ^ auVar78[0xe] ^ auVar92[6];
            auVar107[0xf] =
                 pauVar30[1][0xf] ^ (byte)((ulong)uVar117 >> 0x38) ^ auVar78[0xf] ^ auVar92[7];
            auVar113._0_8_ = auVar107._0_8_ >> 0x1f;
            auVar113._8_8_ = auVar107._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar113,auVar107,1,8);
            NEON_ext(auVar92,auVar78,8,1);
            dVar122 = dVar122 + (double)(lVar74 + ((uVar69 & 0xffffffff) >> 0x1b) +
                                         ((uVar72 | uVar37) & uVar76 | uVar72 & uVar37) +
                                        auVar92._0_8_) +
                      (double)(lVar34 + ((uVar71 & 0xffffffff) >> 0x1b) +
                               ((uVar57 | uVar69) & uVar72 | uVar57 & uVar69) + auVar92._8_8_);
            uVar58 = uVar58 | uVar69 >> 2 & 0x3fffffff;
            func_0x0001056d0d78(lVar65 + ((uVar76 & 0xffffffff) >> 0x1b) +
                                ((uVar58 | uVar71) & uVar57 | uVar58 & uVar71));
            *(undefined8 *)(*pauVar30 + 8) = extraout_var_07;
            *(undefined8 *)*pauVar30 = extraout_d2_09;
            *(long *)(pauVar30[1] + 8) = auVar78._8_8_;
            *(long *)pauVar30[1] = auVar78._0_8_;
            func_0x0001056d0a60();
            dVar122 = dVar122 + extraout_d2_10;
            func_0x0001056d0ae0(lVar75 + ((uVar72 & 0xffffffff) >> 0x1b));
            func_0x0001056d0b9c();
            uVar37 = extraout_x15_16 & 0xffffffffc0000000 | uVar76 >> 2 & 0x3fffffff;
            func_0x0001056d0b90(extraout_x11_15 * 0x20 + 0x8f1bbcdc +
                                ((uVar72 | uVar37) & extraout_x14_15 | uVar72 & uVar37) +
                                ((extraout_x11_15 & 0xffffffff) >> 0x1b));
            *(undefined8 *)(pauVar30[2] + 8) = extraout_var_08;
            *(undefined8 *)pauVar30[2] = extraout_d2_11;
            func_0x0001056d0a38();
            func_0x0001056d0a50(extraout_x12_15 * 0x20 + 0x8f1bbcdc +
                                (extraout_x12_15 >> 0x1b & 0x1f));
            uVar37 = extraout_x11_16 << 0x1e | extraout_x11_16 >> 2 & 0x3fffffff;
            iVar64 = 0x11c8;
            dVar122 = dVar122 + extraout_d1_05;
            uVar69 = extraout_x12_16;
            uVar71 = extraout_x14_16;
            uVar72 = extraout_x13_17;
            uVar76 = extraout_x15_17;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x2f42) {
            auVar78 = pauVar30[7];
            auVar86._0_8_ =
                 CONCAT17(pauVar30[3][7] ^ pauVar30[5][0xf] ^ (*pauVar30)[7] ^ auVar78[7],
                          CONCAT16(pauVar30[3][6] ^ pauVar30[5][0xe] ^ (*pauVar30)[6] ^ auVar78[6],
                                   CONCAT15(pauVar30[3][5] ^ pauVar30[5][0xd] ^
                                            (*pauVar30)[5] ^ auVar78[5],
                                            CONCAT14(pauVar30[3][4] ^ pauVar30[5][0xc] ^
                                                     (*pauVar30)[4] ^ auVar78[4],
                                                     CONCAT13(pauVar30[3][3] ^ pauVar30[5][0xb] ^
                                                              (*pauVar30)[3] ^ auVar78[3],
                                                              CONCAT12(pauVar30[3][2] ^
                                                                       pauVar30[5][10] ^
                                                                       (*pauVar30)[2] ^ auVar78[2],
                                                                       CONCAT11(pauVar30[3][1] ^
                                                                                pauVar30[5][9] ^
                                                                                (*pauVar30)[1] ^
                                                                                auVar78[1],
                                                                                pauVar30[3][0] ^
                                                                                pauVar30[5][8] ^
                                                                                (*pauVar30)[0] ^
                                                                                auVar78[0])))))));
            auVar86[8] = pauVar30[3][8] ^ pauVar30[6][0] ^ (*pauVar30)[8] ^ auVar78[8];
            auVar86[9] = pauVar30[3][9] ^ pauVar30[6][1] ^ (*pauVar30)[9] ^ auVar78[9];
            auVar86[10] = pauVar30[3][10] ^ pauVar30[6][2] ^ (*pauVar30)[10] ^ auVar78[10];
            auVar86[0xb] = pauVar30[3][0xb] ^ pauVar30[6][3] ^ (*pauVar30)[0xb] ^ auVar78[0xb];
            auVar86[0xc] = pauVar30[3][0xc] ^ pauVar30[6][4] ^ (*pauVar30)[0xc] ^ auVar78[0xc];
            auVar86[0xd] = pauVar30[3][0xd] ^ pauVar30[6][5] ^ (*pauVar30)[0xd] ^ auVar78[0xd];
            auVar86[0xe] = pauVar30[3][0xe] ^ pauVar30[6][6] ^ (*pauVar30)[0xe] ^ auVar78[0xe];
            auVar86[0xf] = pauVar30[3][0xf] ^ pauVar30[6][7] ^ (*pauVar30)[0xf] ^ auVar78[0xf];
            auVar98._0_8_ = auVar86._0_8_ >> 0x1f;
            auVar98._8_8_ = auVar86._8_8_ >> 0x1f;
            auVar78 = NEON_sli(auVar98,auVar86,1,8);
            *(long *)(pauVar30[7] + 8) = auVar78._8_8_;
            *(long *)pauVar30[7] = auVar78._0_8_;
            dVar122 = dVar122 + (double)(lVar7 + ((uVar69 & 0xffffffff) >> 0x1b) +
                                         (uVar72 ^ uVar76 ^ uVar37) + auVar78._0_8_);
            func_0x0001056d0a50(lVar8 + (uVar71 >> 0x1b & 0x1f));
            dVar122 = dVar122 + extraout_d1_06;
            uVar69 = extraout_x12_17 & 0xffffffffc0000000 | uVar69 >> 2 & 0x3fffffff;
            *(long *)(pauVar29[lVar51 * 0xd] + lVar68 * 8) = (long)dVar122;
            iVar64 = 0x2075;
            uVar37 = extraout_x11_17;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x3491) {
            dVar122 = dVar122 + (double)(lVar42 + ((uVar37 & 0xffffffff) >> 0x1b) +
                                         (uVar76 & uVar72 | uVar71 & (uVar72 ^ 0xffffffffffffffff))
                                        + *(long *)pauVar30[6]);
            func_0x0001056d0d60();
            uVar37 = extraout_x11_03 & 0xffffffffc0000000 | uVar37 >> 2 & 0x3fffffff;
            uVar72 = extraout_x12_05 & 0xffffffffc0000000 | uVar69 >> 2 & 0x3fffffff;
            lVar74 = *(long *)(pauVar30[7] + 8);
            uVar57 = extraout_x14_07 & 0xffffffffc0000000 | uVar71 >> 2 & 0x3fffffff;
            auVar78 = *(undefined1 (*) [16])(pauVar30[6] + 8);
            auVar92 = pauVar30[1];
            auVar80._0_8_ =
                 CONCAT17(pauVar30[4][7] ^ auVar92[7] ^ (*pauVar30)[7] ^ auVar78[7],
                          CONCAT16(pauVar30[4][6] ^ auVar92[6] ^ (*pauVar30)[6] ^ auVar78[6],
                                   CONCAT15(pauVar30[4][5] ^ auVar92[5] ^
                                            (*pauVar30)[5] ^ auVar78[5],
                                            CONCAT14(pauVar30[4][4] ^ auVar92[4] ^
                                                     (*pauVar30)[4] ^ auVar78[4],
                                                     CONCAT13(pauVar30[4][3] ^ auVar92[3] ^
                                                              (*pauVar30)[3] ^ auVar78[3],
                                                              CONCAT12(pauVar30[4][2] ^ auVar92[2] ^
                                                                       (*pauVar30)[2] ^ auVar78[2],
                                                                       CONCAT11(pauVar30[4][1] ^
                                                                                auVar92[1] ^
                                                                                (*pauVar30)[1] ^
                                                                                auVar78[1],
                                                                                pauVar30[4][0] ^
                                                                                auVar92[0] ^
                                                                                (*pauVar30)[0] ^
                                                                                auVar78[0])))))));
            auVar80[8] = pauVar30[4][8] ^ auVar92[8] ^ (*pauVar30)[8] ^ auVar78[8];
            auVar80[9] = pauVar30[4][9] ^ auVar92[9] ^ (*pauVar30)[9] ^ auVar78[9];
            auVar80[10] = pauVar30[4][10] ^ auVar92[10] ^ (*pauVar30)[10] ^ auVar78[10];
            auVar80[0xb] = pauVar30[4][0xb] ^ auVar92[0xb] ^ (*pauVar30)[0xb] ^ auVar78[0xb];
            auVar80[0xc] = pauVar30[4][0xc] ^ auVar92[0xc] ^ (*pauVar30)[0xc] ^ auVar78[0xc];
            auVar80[0xd] = pauVar30[4][0xd] ^ auVar92[0xd] ^ (*pauVar30)[0xd] ^ auVar78[0xd];
            auVar80[0xe] = pauVar30[4][0xe] ^ auVar92[0xe] ^ (*pauVar30)[0xe] ^ auVar78[0xe];
            auVar80[0xf] = pauVar30[4][0xf] ^ auVar92[0xf] ^ (*pauVar30)[0xf] ^ auVar78[0xf];
            auVar91._0_8_ = auVar80._0_8_ >> 0x1f;
            auVar91._8_8_ = auVar80._8_8_ >> 0x1f;
            auVar92 = NEON_sli(auVar91,auVar80,1,8);
            *(long *)(*pauVar30 + 8) = auVar92._8_8_;
            *(long *)*pauVar30 = auVar92._0_8_;
            dVar122 = dVar122 + (double)(ulong)(extraout_x9_00 + auVar78._0_8_) +
                      (double)(extraout_x8_01 + ((uVar71 & 0xffffffff) >> 0x1b) +
                               (uVar37 & uVar69 | extraout_x13_05 & (uVar69 ^ 0xffffffffffffffff)) +
                              auVar78._8_8_) +
                      (double)(lVar77 + ((uVar76 & 0xffffffff) >> 0x1b) +
                               (uVar72 & uVar71 | uVar37 & (uVar71 ^ 0xffffffffffffffff)) + lVar74)
                      + (double)(extraout_x13_05 * 0x20 + 0x5a827999 +
                                 (uVar57 & uVar76 | uVar72 & (uVar76 ^ 0xffffffffffffffff)) +
                                 ((extraout_x13_05 & 0xffffffff) >> 0x1b) + auVar92._0_8_);
            func_0x0001056d0a74(uVar37 * 0x20 + 0x5a827999 + (uVar37 >> 0x1b & 0x1f) +
                                ((extraout_x15_06 & 0xffffffffc0000000 | uVar76 >> 2 & 0x3fffffff) &
                                 extraout_x13_05 | uVar57 & (extraout_x13_05 ^ 0xffffffffffffffff))
                                + auVar92._8_8_);
            uVar72 = extraout_x13_06 << 0x1e | extraout_x13_06 >> 2 & 0x3fffffff;
            iVar64 = 0x1407;
            uVar69 = extraout_x12_06;
            uVar71 = extraout_x14_08;
            uVar37 = extraout_x11_04;
            uVar76 = extraout_x15_07;
            goto LAB_1056ce9cc;
          }
          if (iVar64 == 0x3728) {
            func_0x0001056d0b90((uVar69 ^ uVar71 ^ uVar76) + 0x6ed9eba1 + uVar72 * 0x20 +
                                ((uVar72 & 0xffffffff) >> 0x1b));
            uVar104 = extraout_d3_01;
            uVar116 = extraout_d2_03;
            func_0x0001056d0bc8();
            dVar122 = dVar122 + (double)extraout_x8_02 +
                      (double)(lVar31 + ((uVar37 & 0xffffffff) >> 0x1b) +
                               (extraout_x15_08 ^ uVar71 ^ uVar72) + extraout_x10);
            *(undefined8 *)(pauVar30[2] + 8) = extraout_var_04;
            *(undefined8 *)pauVar30[2] = extraout_d2_04;
            *(undefined8 *)(pauVar30[3] + 8) = uVar116;
            *(undefined8 *)pauVar30[3] = uVar104;
            func_0x0001056d0a60(extraout_x9_01 + ((uVar69 & 0xffffffff) >> 0x1b) +
                                (extraout_x15_08 ^ uVar37 ^
                                (extraout_x13_07 & 0xffffffffc0000000 | uVar72 >> 2 & 0x3fffffff)));
            dVar122 = dVar122 + extraout_d2_05;
            func_0x0001056d0ae0(lVar9 + ((uVar71 & 0xffffffff) >> 0x1b));
            func_0x0001056d0b9c();
            uVar37 = extraout_x12_07 & 0xffffffffc0000000 | uVar69 >> 2 & 0x3fffffff;
            func_0x0001056d0b90(extraout_x15_09 * 0x20 + 0x8f1bbcdc +
                                ((extraout_x15_09 & 0xffffffff) >> 0x1b) +
                                ((uVar37 | uVar71) & extraout_x11_05 | uVar37 & uVar71));
            *(undefined8 *)(pauVar30[4] + 8) = extraout_var_05;
            *(undefined8 *)pauVar30[4] = extraout_d2_06;
            func_0x0001056d0a38();
            func_0x0001056d0cac(extraout_x13_08 >> 0x1b & 0x1f);
            uVar76 = extraout_x15_10 << 0x1e | extraout_x15_10 >> 2 & 0x3fffffff;
            iVar64 = 0x4d1;
            uVar37 = extraout_x11_06;
            uVar69 = extraout_x12_08;
            uVar72 = extraout_x13_09;
            uVar71 = extraout_x14_09;
            uVar57 = extraout_x8_03;
            goto LAB_1056cfabc;
          }
        } while (iVar64 != 0xb0a);
        pbStack_c0 = pbStack_c0 + (ulong)(long)(param_2 * 3) / 0x1a + 3;
      }
      pauVar29 = pauVar30;
    }
    *pcVar5 = *pcVar5 - (char)uVar67;
    _free();
    iVar64 = 0xca6;
  } while( true );
LAB_1056cdf88:
  uVar67 = 0;
  iVar28 = 0x26b6;
  goto LAB_1056cdf2c;
code_r0x0001056ce400:
  lVar51 = 0;
LAB_1056ce41c:
  if (lVar51 != 6) {
    iVar48 = 0x12db;
    iVar64 = 0x2c6;
LAB_1056ce434:
    do {
      iVar33 = 0x356b;
      if (3 < iVar64) {
        iVar33 = 0x1b86;
      }
LAB_1056ce43c:
      iVar49 = iVar48;
      if (iVar49 != 0x356b) {
        if (iVar49 == 0x12db) {
          iVar48 = 0x1ff;
          iVar64 = 0x3d4;
          goto LAB_1056ce434;
        }
        if (iVar49 == 0x1b86) {
          lVar51 = lVar51 + 1;
          goto LAB_1056ce41c;
        }
        iVar48 = iVar33;
        if ((iVar49 == 0x2c9b) || (iVar48 = iVar49, iVar49 != 0x1ff)) goto LAB_1056ce43c;
        iVar64 = 0;
        iVar48 = 0x2c9b;
        goto LAB_1056ce434;
      }
      iVar48 = iVar64 + iVar28 * 4;
      iVar33 = iVar64 + (iVar28 << 2 | 1U);
      dVar119 = ((double)iVar33 + -2.5) * 0.25;
      iVar63 = (int)dVar119;
      dVar119 = dVar119 - (double)iVar63;
      dVar122 = 1.0 - dVar119;
      iVar49 = iVar63 * 0x18;
      for (lVar68 = 0; lVar68 != 4; lVar68 = lVar68 + 1) {
        uVar50 = 0x90;
        if (uStack_ec != 0) {
          uVar50 = 0;
        }
        lVar74 = lVar68 + lVar51 * 4;
        uVar57 = lVar74 + 1;
        pdVar38 = (double *)(lVar47 + (long)iVar33 * 0xd0 + lVar74 * 8);
        dVar124 = *pdVar38 - pdVar38[2];
        dVar126 = *(double *)(lVar47 + (long)iVar48 * 0xd0 + uVar57 * 8) -
                  *(double *)(param_1 + 0x268 + (long)iVar48 * 0xd0 + uVar57 * 8);
        dVar125 = 0.0;
        dVar123 = dVar124;
        if (dVar124 <= 0.0) {
          dVar123 = 0.0;
        }
        dVar127 = 0.0;
        if (dVar124 <= 0.0) {
          dVar127 = -dVar124;
        }
        dVar124 = dVar126;
        if (dVar126 <= 0.0) {
          dVar124 = 0.0;
        }
        dVar128 = 0.0;
        if (dVar126 <= 0.0) {
          dVar128 = -dVar126;
        }
        dVar126 = ((double)(uVar57 & 0xffffffff) + -2.5) * 0.25;
        iVar40 = (int)dVar126;
        dVar126 = dVar126 - (double)iVar40;
        if ((-1 < iVar63) && (-1 < iVar40)) {
          dVar125 = dVar122 * (1.0 - dVar126);
          iVar73 = 0x133a;
          do {
            iVar1 = (uVar50 | 1) + iStack_b4;
            iVar53 = (uVar50 | 2) + iStack_b4;
            iVar2 = (uVar50 | 3) + iStack_b4;
            do {
              while( true ) {
                while( true ) {
                  while (iVar73 == 0x353d) {
                    *(double *)(lVar66 + (long)(int)(iStack_b4 + uVar50) * 8) =
                         *(double *)(lVar66 + (long)(int)(iStack_b4 + uVar50) * 8) +
                         dVar125 * dVar123;
                    *(double *)(lVar66 + (long)iVar1 * 8) =
                         *(double *)(lVar66 + (long)iVar1 * 8) + dVar125 * dVar127;
                    iVar73 = 0x1cdd;
                  }
                  if (iVar73 != 0x1cdd) break;
                  *(double *)(lVar66 + (long)iVar53 * 8) =
                       *(double *)(lVar66 + (long)iVar53 * 8) + dVar125 * dVar124;
                  *(double *)(lVar66 + (long)iVar2 * 8) =
                       *(double *)(lVar66 + (long)iVar2 * 8) + dVar125 * dVar128;
                  iVar73 = 0x2a24;
                }
                if (iVar73 == 0x1ea7) goto LAB_1056ce644;
                if (iVar73 != 0x2a24) break;
                iVar73 = 0x1ea7;
              }
            } while (iVar73 != 0x133a);
            if (uStack_ec != 0) {
              dVar125 = -dVar125;
            }
            iVar73 = 0x353d;
            iStack_b4 = iVar49 + iVar40 * 4;
          } while( true );
        }
LAB_1056ce644:
        if ((-1 < iVar63) && (iVar40 < 5)) {
          iVar73 = (iVar63 * 0x18 | 4U) + iVar40 * 4;
          iVar1 = iVar73 + uVar50;
          dVar129 = dVar122 * dVar126;
          if (uStack_ec != 0) {
            dVar129 = -(dVar122 * dVar126);
          }
          iVar53 = 0x172b;
          do {
            iVar2 = (uVar50 | 1) + iStack_b4;
            iVar3 = (uVar50 | 2) + iStack_b4;
            iVar4 = (uVar50 | 3) + iStack_b4;
            while( true ) {
              if (iVar53 == 0x17d) goto LAB_1056ce754;
              if (iVar53 == 0x357f) break;
              if (iVar53 == 0xcc1) {
                *(double *)(lVar66 + (long)iVar4 * 8) =
                     *(double *)(lVar66 + (long)iVar4 * 8) + dVar125 * dVar128;
                iVar53 = 0xbec;
              }
              else if (iVar53 == 0x172b) {
                iVar53 = 0x357f;
                dVar125 = dVar129;
              }
              else if (iVar53 == 0x1f2d) {
                *(double *)(lVar66 + (long)iVar2 * 8) =
                     *(double *)(lVar66 + (long)iVar2 * 8) + dVar125 * dVar127;
                *(double *)(lVar66 + (long)iVar3 * 8) =
                     *(double *)(lVar66 + (long)iVar3 * 8) + dVar125 * dVar124;
                iVar53 = 0xcc1;
              }
              else if (iVar53 == 0xbec) {
                iVar53 = 0x17d;
              }
            }
            *(double *)(lVar66 + (long)iVar1 * 8) =
                 *(double *)(lVar66 + (long)iVar1 * 8) + dVar125 * dVar123;
            iVar53 = 0x1f2d;
            iStack_b4 = iVar73;
          } while( true );
        }
LAB_1056ce754:
        if ((iVar63 < 5) && (-1 < iVar40)) {
          dVar129 = dVar119 * (1.0 - dVar126);
          if (uStack_ec != 0) {
            dVar129 = -(dVar119 * (1.0 - dVar126));
          }
          iVar73 = 0x1b90;
          do {
            iVar1 = (uVar50 | 1) + iStack_b4;
            iVar53 = (uVar50 | 2) + iStack_b4;
            while (iVar73 != 0x1b90) {
              if (iVar73 == 0x1130) {
                iVar73 = iStack_b4 + uVar50 + 3;
                *(double *)(lVar66 + (long)iVar73 * 8) =
                     *(double *)(lVar66 + (long)iVar73 * 8) + dVar125 * dVar128;
                goto LAB_1056ce828;
              }
              if (iVar73 == 0x195b) {
                iVar73 = 0x1130;
              }
              else if (iVar73 == 0xf24) {
                *(double *)(lVar66 + (long)(int)(iStack_b4 + uVar50) * 8) =
                     *(double *)(lVar66 + (long)(int)(iStack_b4 + uVar50) * 8) + dVar125 * dVar123;
                *(double *)(lVar66 + (long)iVar1 * 8) =
                     *(double *)(lVar66 + (long)iVar1 * 8) + dVar125 * dVar127;
                *(double *)(lVar66 + (long)iVar53 * 8) =
                     *(double *)(lVar66 + (long)iVar53 * 8) + dVar125 * dVar124;
                iVar73 = 0x195b;
              }
            }
            iVar73 = 0xf24;
            dVar125 = dVar129;
            iStack_b4 = iVar49 + 0x18 + iVar40 * 4;
          } while( true );
        }
LAB_1056ce828:
        if (iVar63 < 5 && iVar40 < 5) {
          dVar129 = dVar119 * dVar126;
          if (uStack_ec != 0) {
            dVar129 = -(dVar119 * dVar126);
          }
          iVar73 = 0x399c;
          do {
            iVar1 = (uVar50 | 1) + iStack_b4;
            iVar53 = (uVar50 | 2) + iStack_b4;
            iVar2 = (uVar50 | 3) + iStack_b4;
            while (iVar73 != 0x399c) {
              if (iVar73 == 0xf4e) goto LAB_1056ce904;
              if (iVar73 == 0x1c31) {
                *(double *)(lVar66 + (long)iVar2 * 8) =
                     *(double *)(lVar66 + (long)iVar2 * 8) + dVar125 * dVar128;
                iVar73 = 0xa9a;
              }
              else if (iVar73 == 0x2f11) {
                *(double *)(lVar66 + (long)(int)(iStack_b4 + uVar50) * 8) =
                     *(double *)(lVar66 + (long)(int)(iStack_b4 + uVar50) * 8) + dVar125 * dVar123;
                *(double *)(lVar66 + (long)iVar1 * 8) =
                     *(double *)(lVar66 + (long)iVar1 * 8) + dVar125 * dVar127;
                *(double *)(lVar66 + (long)iVar53 * 8) =
                     *(double *)(lVar66 + (long)iVar53 * 8) + dVar125 * dVar124;
                iVar73 = 0x1c31;
              }
              else if (iVar73 == 0xa9a) {
                iVar73 = 0xf4e;
              }
            }
            iVar73 = 0x2f11;
            dVar125 = dVar129;
            iStack_b4 = iVar49 + 0x1c + iVar40 * 4;
          } while( true );
        }
LAB_1056ce904:
        uStack_ec = uVar50;
      }
      iVar64 = iVar64 + 1;
      iVar48 = 0x2c9b;
    } while( true );
  }
  iVar28 = iVar28 + 1;
LAB_1056ce958:
  iVar64 = 0x1bc1;
  goto LAB_1056ce39c;
}



/* Entry: 1056cff0c; end: 1056d0043;  */

long * FUN_1056cff0c(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  lVar1 = 0x2344;
  __ZnwmRKSt9nothrow_t(0x2344,PTR___ZSt7nothrow_1103469d8);
  if (lVar1 != 0) {
    FUN_1056d0330(lVar1);
    if (((int)param_1[1] != 0) || (lVar2 = lVar1, func_0x0001056cff80(lVar1,param_2,0), lVar2 != 0))
    goto LAB_1056cff70;
  }
  *(undefined4 *)(param_1 + 1) = 0xffffe4a7;
LAB_1056cff70:
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 1056d0044; end: 1056d007b;  */

long * FUN_1056d0044(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    func_0x0001056d03e8(lVar1);
    __ZdlPv(lVar1);
  }
  return param_1;
}



/* Entry: 1056d007c; end: 1056d018b;  */

void FUN_1056d007c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_60;
  int iStack_58;
  int iStack_54;
  
  uVar1 = param_4;
  FUN_1056d018c(param_4,param_6);
  if (((-1 < (int)uVar1) && (0x31 < (int)param_4)) && (0x31 < (int)param_5)) {
    lVar3 = *param_1;
    lVar2 = lVar3;
    FUN_1056d01f0(lVar3,param_4,param_5);
    if (lVar2 != 0) {
      uStack_60 = 0;
      lVar2 = lVar3 + 0x10;
      iStack_58 = (int)param_4;
      iStack_54 = (int)param_5;
      FUN_1056d02c4(lVar2,&uStack_60,param_2,param_4,param_5,param_6,param_3);
      if ((-1 < (int)lVar2) &&
         (lVar2 = lVar3, FUN_1056cde4c(lVar3,param_4,param_5,param_3,0,0,0,0), -1 < (int)lVar2)) {
        FUN_1056cdcf4(lVar3 + 0x16a8);
        func_0x0001056cde20(lVar3 + 0x16a8,param_7,param_8);
      }
    }
  }
  return;
}



/* Entry: 1056d018c; end: 1056d01ef;  */

undefined4 FUN_1056d018c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((param_3 & 0x1e00) != 0) && ((param_3 & 0x1f00) != 0xd00)) && ((param_3 & 0x1f00) != 0x300))
  {
    return 0xffffe49d;
  }
  if (param_2 != 0) {
    uVar1 = param_3 >> 8 & 0x1f;
    if (uVar1 < 6) {
      iVar2 = *(int *)(&UNK_10ddbb540 + (ulong)uVar1 * 4);
    }
    else {
      iVar2 = 1;
    }
    uVar3 = 0xffffe49c;
    if (iVar2 * param_1 <= param_2) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}



/* Entry: 1056d01f0; end: 1056d02c3;  */

ulong FUN_1056d01f0(ulong *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)(int)param_2;
  uVar2 = param_3;
  if ((int)param_3 < 2) {
    uVar2 = 1;
  }
  lVar1 = 2;
  if (0x400000 < uVar2 * uVar7) {
    lVar1 = 3;
  }
  uVar6 = uVar2 * uVar7 << lVar1;
  uVar5 = *param_1;
  if (uVar5 < uVar6) {
    func_0x0001056d03e8(param_1);
    uVar4 = uVar6;
    _malloc();
    param_1[1] = uVar4;
    if (uVar4 != 0) {
      *param_1 = uVar6;
      uVar5 = uVar6;
      goto LAB_1056d026c;
    }
    uVar5 = *param_1;
  }
  if (uVar5 == 0) {
    return 0;
  }
  uVar4 = param_1[1];
LAB_1056d026c:
  uVar6 = (ulong)param_3;
  param_1[2] = uVar4;
  param_1[3] = uVar4;
  bVar3 = 0x400000 < uVar6 * uVar7;
  if ((int)param_3 < 2) {
    uVar6 = 1;
    bVar3 = 0x400000 < param_2;
  }
  param_1[4] = uVar7;
  param_1[5] = uVar6;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(bool *)((long)param_1 + 0x34) = bVar3;
  return uVar5;
}



/* Entry: 1056d02c4; end: 1056d032f;  */

undefined4
FUN_1056d02c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,uint param_7)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 *unaff_x19;
  
  param_7 = param_7 & 0x1f00;
  bVar1 = param_7 == 0x300;
  if (bVar1) {
    func_0x0001056d0c2c(param_1,param_3,param_4,param_5,param_6,param_2);
    if (bVar1) {
      FUN_1056d08c0(extraout_x8_00,unaff_x19[1]);
    }
    else {
      func_0x0001056d0954(extraout_x8_00,*unaff_x19);
    }
    uVar2 = *(undefined4 *)(unaff_x19 + 4);
  }
  else {
    bVar1 = param_7 == 0x100;
    if (bVar1) {
      *(undefined4 *)(param_1 + 4) = 0x2ff;
      if (*(char *)((long)param_1 + 0x24) == '\x01') {
        FUN_1056d0764(param_3,param_1[1]);
      }
      else {
        func_0x0001056d07f8(param_3,*param_1,param_4,param_5,param_6,param_2);
      }
      uVar2 = *(undefined4 *)(param_1 + 4);
    }
    else {
      if (param_7 != 0) {
        return 0xffffe4a0;
      }
      func_0x0001056d0c2c(param_1,param_3,param_4,param_5,param_6,param_2);
      if (bVar1) {
        FUN_1056d04f8(extraout_x8,unaff_x19[1]);
      }
      else {
        func_0x0001056d0628(extraout_x8,*unaff_x19);
      }
      uVar2 = *(undefined4 *)(unaff_x19 + 4);
    }
  }
  return uVar2;
}



/* Entry: 1056d0330; end: 1056d0393;  */

undefined8 * FUN_1056d0330(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  _bzero(param_1 + 7,0x1670);
  FUN_1056d0394(param_1 + 0x2d5);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 1;
  return param_1;
}



/* Entry: 1056d0394; end: 1056d04f7;  */

undefined4 * FUN_1056d0394(undefined4 *param_1)

{
  *param_1 = 0x414e4450;
  param_1[1] = 0x20000;
  *(undefined8 *)(param_1 + 4) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[6] = 0xffffffff;
  _bzero(param_1 + 7,0xc80);
  return param_1;
}



/* Entry: 1056d04f8; end: 1056d0763;  */

undefined8
FUN_1056d04f8(long param_1,long *param_2,int param_3,undefined8 param_4,int param_5,int *param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  
  iVar9 = param_3 * 3;
  if (0 < param_5) {
    iVar9 = param_5;
  }
  iVar2 = param_6[2];
  pbVar5 = (byte *)(param_1 + (long)param_6[1] * (long)iVar9 + (long)*param_6 * 3);
  *param_2 = (ulong)pbVar5[1] + (ulong)*pbVar5 + (ulong)pbVar5[2];
  lVar7 = 8;
  for (lVar6 = 1; lVar6 < iVar2; lVar6 = lVar6 + 1) {
    *(long *)((long)param_2 + lVar7) =
         (ulong)pbVar5[4] + (ulong)pbVar5[3] +
         (ulong)pbVar5[5] + ((long *)((long)param_2 + lVar7))[-1];
    lVar7 = lVar7 + 8;
    pbVar5 = pbVar5 + 3;
  }
  lVar6 = (long)(iVar2 * -3 + iVar9);
  iVar3 = param_6[3];
  plVar8 = (long *)((long)param_2 + lVar7);
  for (iVar9 = 1; iVar9 < iVar3; iVar9 = iVar9 + 1) {
    lVar7 = 0;
    lVar10 = (ulong)pbVar5[lVar6 + 4] + (ulong)pbVar5[lVar6 + 3] +
             (ulong)pbVar5[lVar6 + 5] + *param_2;
    *plVar8 = lVar10;
    pbVar5 = pbVar5 + lVar6 + 8;
    for (iVar4 = 1; plVar1 = (long *)((long)param_2 + lVar7), iVar4 < iVar2; iVar4 = iVar4 + 1) {
      lVar10 = ((lVar10 + (ulong)pbVar5[-2] + (ulong)pbVar5[-1] + (ulong)*pbVar5) - *plVar1) +
               plVar1[1];
      *(long *)((long)plVar8 + lVar7 + 8) = lVar10;
      lVar7 = lVar7 + 8;
      pbVar5 = pbVar5 + 3;
    }
    pbVar5 = pbVar5 + -5;
    param_2 = plVar1 + 1;
    plVar8 = (long *)((long)plVar8 + lVar7 + 8);
  }
  return 0x2fd;
}



/* Entry: 1056d0764; end: 1056d0897;  */

undefined8 FUN_1056d0764(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long in_stack_00000008;
  int in_stack_00000014;
  
  func_0x0001056d0d44();
  func_0x0001056d0aec();
  FUN_1056d0898();
  *unaff_x19 = param_1;
  while (1 < unaff_x22) {
    unaff_x20 = unaff_x20 + 4;
    func_0x0001056d0c9c();
    func_0x0001056d0c64();
  }
  func_0x0001056d0ba8();
  while (1 < in_stack_00000014) {
    unaff_x20 = unaff_x20 + in_stack_00000008;
    func_0x0001056d0c9c(unaff_x20);
    func_0x0001056d0b6c();
    while (unaff_x20 = unaff_x20 + 4, unaff_w21 < (int)unaff_x22) {
      func_0x0001056d0c9c();
      func_0x0001056d0b24();
    }
    func_0x0001056d0c80();
  }
  return 0x2ff;
}



/* Entry: 1056d0898; end: 1056d08bf;  */

undefined8 FUN_1056d0898(void)

{
  undefined8 uVar1;
  undefined1 in_CY;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  
  func_0x0001056d0be8();
  uVar1 = extraout_x8;
  if ((bool)in_CY) {
    uVar1 = extraout_x9;
  }
  return uVar1;
}



/* Entry: 1056d08c0; end: 1056d09f3;  */

undefined8 FUN_1056d08c0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long in_stack_00000008;
  int in_stack_00000014;
  
  func_0x0001056d0d44();
  func_0x0001056d0aec();
  func_0x0001056d09f4();
  *unaff_x19 = param_1;
  while (1 < unaff_x22) {
    unaff_x20 = unaff_x20 + 4;
    func_0x0001056d0ca4();
    func_0x0001056d0c64();
  }
  func_0x0001056d0ba8();
  while (1 < in_stack_00000014) {
    unaff_x20 = unaff_x20 + in_stack_00000008;
    func_0x0001056d0ca4(unaff_x20);
    func_0x0001056d0b6c();
    while (unaff_x20 = unaff_x20 + 4, unaff_w21 < (int)unaff_x22) {
      func_0x0001056d0ca4();
      func_0x0001056d0b24();
    }
    func_0x0001056d0c80();
  }
  return 0x2fd;
}


