/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1056e3550; end: 1056e36c7;  */

void FUN_1056e3550(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  if (param_3 == 0) {
    puVar2 = param_2;
    func_0x00010c22d2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010be544c0(uVar6,lVar4);
    _objc_release(puVar2);
  }
  else {
    func_0x00010be544c0(uVar6,lVar4);
  }
  _objc_release(lVar4);
  puVar2 = param_2;
  func_0x00010c22d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010c08fa60();
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x20);
    pcVar3 = *(code **)(lVar4 + 0x10);
    puVar1 = (undefined *)0x0;
    puVar5 = puVar2;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,0,param_3);
      goto LAB_1056e36a4;
    }
    puVar1 = param_2;
    func_0x00010c22d2c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = *(code **)(lVar4 + 0x10);
    puVar2 = (undefined *)0x0;
    puVar5 = puVar1;
  }
  (*pcVar3)(lVar4,puVar1,puVar2);
  _objc_release(puVar5);
LAB_1056e36a4:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e36c8; end: 1056e3827; -[SCShortLinkEncodingGRPCService _grpcUnifiedGrpcServiceForUnifiedGRPCClientFactory:] */

void FUN_1056e36c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21dec0(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2eb1a7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520(puVar2,param_2,puVar3,0x15,0,1);
  _objc_release(puVar3);
  uVar4 = param_3;
  func_0x00010bf56360(param_3,param_2,&PTR____CFConstantStringClassReference_110df7c98,puVar1,puVar2
                     );
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1056e3828; end: 1056e396b; -[SCShortLinkEncodingGRPCService _logGrapheneMetricsWithStartTime:hasError:isNetworkError:] */

void FUN_1056e3828(double param_1,long param_2,undefined8 param_3,int param_4,ulong param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  double dVar6;
  
  dVar6 = param_1;
  if ((param_5 & 1) == 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110dad2d8;
    if (param_4 == 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110dab0d8;
    }
    _objc_retain(ppuVar5);
  }
  else {
    ppuVar5 = &PTR____CFConstantStringClassReference_110df7cf8;
  }
  puVar1 = PTR_PTR_1126bd428;
  func_0x00010c22da20(PTR_PTR_1126bd428);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22da00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22da00();
  _objc_retainAutoreleasedReturnValue();
  _CACurrentMediaTime();
  func_0x00010befbfe0(uVar4,param_3,puVar2,(long)((dVar6 - param_1) * 1000.0));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 1056e396c; end: 1056e39b3; -[SCShortLinkEncodingGRPCService .cxx_destruct] */

void FUN_1056e396c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e39b4; end: 1056e39df; +[SCGrapheneShortlinkEncodingMetric shortlinkEncodingRequest] */

void FUN_1056e39b4(void)

{
  _objc_alloc(PTR_PTR_1126bd428);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e39e0; end: 1056e3a7f; -[SCGrapheneShortlinkEncodingMetric description] */

void FUN_1056e39e0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df7d58;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df7d58,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9be8;
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



/* Entry: 1056e3a80; end: 1056e3bc3; -[SCGrapheneRegistry shortlinkEncodingGraphene] */

void FUN_1056e3a80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1056e3b08;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfa18 != -1) {
    func_0x00010002a2fc(0x1136bfa18,&puStack_48);
  }
  uVar1 = uRam00000001136bfa10;
  _objc_retain(uRam00000001136bfa10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056e3bc4; end: 1056e3c2b; +[SCDeeplinkShortLinkQrRequest descriptor] */

void FUN_1056e3bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5af90,
                        &PTR____CFConstantStringClassReference_110df7d98,&PTR_DAT_1130f5c10,
                        &PTR_DAT_1130f5c28,3,0xc,0x1c);
    puRam00000001136bfa20 = puVar1;
  }
  return;
}



/* Entry: 1056e3c2c; end: 1056e3c93; +[SCDeeplinkCreateShortLinkRequest descriptor] */

void FUN_1056e3c2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5afe0,
                        &PTR____CFConstantStringClassReference_110df7db8,&PTR_DAT_1130f5c10,
                        &PTR_DAT_1130f5d08,7,0x38,0x1c);
    puRam00000001136bfa28 = puVar1;
  }
  return;
}



/* Entry: 1056e3c94; end: 1056e3d2f; +[SCDeeplinkCreateShortLinkResponse descriptor] */

undefined * FUN_1056e3c94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5b030,
                        &PTR____CFConstantStringClassReference_110df7dd8,&PTR_DAT_1130f5c10,
                        &PTR_DAT_1130f5c88,4,0x28,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddbbe54);
    puRam00000001136bfa30 = puVar1;
  }
  return puRam00000001136bfa30;
}



/* Entry: 1056e3d30; end: 1056e3dab;  */

undefined * FUN_1056e3d30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfa38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7df8,
                        &UNK_10ddbbe60,&UNK_10ddbbe90,5,FUN_1056e3dac,0);
    do {
      if (puRam00000001136bfa38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfa38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfa38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfa38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfa38;
}



/* Entry: 1056e3dac; end: 1056e3db7;  */

bool FUN_1056e3dac(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1056e3db8; end: 1056e3e33;  */

undefined * FUN_1056e3db8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfa40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7e18,
                        &UNK_10ddbbea4,&UNK_10ddbc010,0x19,FUN_1056e3e34,0);
    do {
      if (puRam00000001136bfa40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfa40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfa40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfa40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfa40;
}



/* Entry: 1056e3e34; end: 1056e3e3f;  */

bool FUN_1056e3e34(uint param_1)

{
  return param_1 < 0x19;
}



/* Entry: 1056e3e40; end: 1056e3ebb;  */

undefined * FUN_1056e3e40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfa48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7e38,
                        &UNK_10ddbc074,&UNK_10ddbc0f0,0xc,FUN_1056e3ebc,0);
    do {
      if (puRam00000001136bfa48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfa48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfa48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfa48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfa48;
}



/* Entry: 1056e3ebc; end: 1056e3ec7;  */

bool FUN_1056e3ebc(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 1056e3ec8; end: 1056e3f43;  */

undefined * FUN_1056e3ec8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfa50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7e58,
                        &UNK_10ddbc120,&UNK_10ddbc144,3,FUN_1056e3f44,0);
    do {
      if (puRam00000001136bfa50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfa50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfa50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfa50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfa50;
}



/* Entry: 1056e3f44; end: 1056e3f4f;  */

bool FUN_1056e3f44(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1056e3f50; end: 1056e3fcb;  */

undefined * FUN_1056e3f50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfa58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7e78,
                        &UNK_10ddbc150,&UNK_10ddbc190,5,FUN_1056e3fcc,0);
    do {
      if (puRam00000001136bfa58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfa58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfa58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfa58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfa58;
}



/* Entry: 1056e3fcc; end: 1056e3fd7;  */

bool FUN_1056e3fcc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1056e3fd8; end: 1056e4053;  */

undefined * FUN_1056e3fd8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfa60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df7e98,
                        &UNK_10ddbc1a4,&UNK_10ddbc204,5,FUN_1056e4054,0);
    do {
      if (puRam00000001136bfa60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfa60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfa60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfa60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfa60;
}



/* Entry: 1056e4054; end: 1056e405f;  */

bool FUN_1056e4054(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1056e4060; end: 1056e40c7; +[SCDeeplinkCreateNoncePayload descriptor] */

void FUN_1056e4060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5b120,
                        &PTR____CFConstantStringClassReference_110df7eb8,&PTR_DAT_1130f5de8,
                        &PTR_s_userId_1130f5e00,6,0x30,0x1c);
    puRam00000001136bfa68 = puVar1;
  }
  return;
}



/* Entry: 1056e40c8; end: 1056e41bf; +[SCDeeplinkShortLinkPayload descriptor] */

undefined * FUN_1056e40c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5b170,
                        &PTR____CFConstantStringClassReference_110df7ed8,&PTR_DAT_1130f5de8,
                        &PTR_DAT_1130f5ec0,9,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136bfa70 = puVar1;
  }
  return puRam00000001136bfa70;
}



/* Entry: 1056e41c0; end: 1056e41cb;  */

bool FUN_1056e41c0(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 1056e41cc; end: 1056e4233; +[CommunicationChannel descriptor] */

void FUN_1056e41cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfa80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5b210,
                        &PTR____CFConstantStringClassReference_110df7f18,&PTR_DAT_1130f5fe0,0,0,4,
                        0x1c);
    puRam00000001136bfa80 = puVar1;
  }
  return;
}



/* Entry: 1056e4234; end: 1056e42a7; -[SCGrapheneTermsOfUsePromptMetric2 init] */

undefined1 * FUN_1056e4234(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9bf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1056e42a8; end: 1056e44d7;  */

/* WARNING: Removing unreachable block (ram,0x0001056e4760) */
/* WARNING: Removing unreachable block (ram,0x0001056e4a20) */

void FUN_1056e42a8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 *puVar19;
  char *pcVar20;
  long lVar21;
  long *plVar22;
  char *unaff_x24;
  undefined **ppuStack_240;
  long lStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  char acStack_160 [24];
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar14 = param_3;
  pcVar17 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar22 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (char *)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar14 = acStack_98;
    (**(code **)(*plVar22 + 0x18))(plVar22);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar21 = 0;
    pcVar17 = param_4;
    do {
      if ((&cStack_49)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcVar16 = acStack_160;
  pcStack_a8 = FUN_1056e44d8;
  lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar13 = pcVar1;
  pcVar15 = pcVar14;
  pcVar18 = pcVar17;
  pcVar20 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar14);
  _objc_retain(pcVar17);
  if (pcVar2 != (char *)0x0) {
    plVar22 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_140,pcVar2);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar2 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_128,pcVar2);
    _objc_retain(pcVar17);
    if (pcVar17 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar17);
      pcVar2 = pcVar17;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar17);
    func_0x00010002b838(auStack_110,pcVar2);
    acStack_160[0] = '\0';
    acStack_160[1] = '\0';
    acStack_160[2] = '\0';
    acStack_160[3] = '\0';
    acStack_160[4] = '\0';
    acStack_160[5] = '\0';
    acStack_160[6] = '\0';
    acStack_160[7] = '\0';
    acStack_160[8] = '\0';
    acStack_160[9] = '\0';
    acStack_160[10] = '\0';
    acStack_160[0xb] = '\0';
    acStack_160[0xc] = '\0';
    acStack_160[0xd] = '\0';
    acStack_160[0xe] = '\0';
    acStack_160[0xf] = '\0';
    acStack_160[0x10] = '\0';
    acStack_160[0x11] = '\0';
    acStack_160[0x12] = '\0';
    acStack_160[0x13] = '\0';
    acStack_160[0x14] = '\0';
    acStack_160[0x15] = '\0';
    acStack_160[0x16] = '\0';
    acStack_160[0x17] = '\0';
    func_0x00010007e1e8(acStack_160,auStack_140,&lStack_f8,3);
    pcVar13 = "";
    (**(code **)(*plVar22 + 0x18))(plVar22);
    puStack_148 = acStack_160;
    func_0x00010007e5dc(&puStack_148);
    lVar21 = 0;
    pcVar15 = pcVar16;
    pcVar18 = param_5;
    do {
      if ((&cStack_f9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x24 = acStack_160;
    } while (lVar21 != -0x48);
  }
  _objc_release(pcVar17);
  _objc_release(pcVar14);
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar17);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_140);
  _objc_release(pcVar17);
  _objc_release(pcVar14);
  _objc_release(pcVar1);
  __Unwind_Resume();
  pcStack_168 = FUN_1056e4798;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_170 = &puStack_b0;
  _objc_retain(pcVar13);
  _objc_retain(pcVar15);
  _objc_retain(pcVar18);
  if (pcVar2 != (char *)0x0) {
    plVar22 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar13);
    if (pcVar13 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar13;
      _objc_retainAutorelease(pcVar13);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar13);
    func_0x00010002b838(auStack_200,pcVar1);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar1 = pcVar15;
      func_0x00010bdc3520(pcVar15);
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_1e8,pcVar1);
    _objc_retain(pcVar18);
    if (pcVar18 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(pcVar18);
      pcVar1 = pcVar18;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar18);
    func_0x00010002b838(auStack_1d0,pcVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x00010007e1e8(&uStack_220,auStack_200,&lStack_1b8,3);
    (**(code **)(*plVar22 + 0x18))(plVar22,&UNK_1108aa0f0,&uStack_220,pcVar20);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x00010007e5dc(&puStack_208);
    lVar21 = 0;
    do {
      if ((&cStack_1b9)[lVar21] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar21));
      }
      lVar21 = lVar21 + -0x18;
      unaff_x24 = (char *)&uStack_220;
    } while (lVar21 != -0x48);
  }
  _objc_release(pcVar18);
  _objc_release(pcVar15);
  pcVar1 = pcVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar18);
  do {
    unaff_x24 = (char *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (char *)auStack_200);
  _objc_release(pcVar18);
  _objc_release(pcVar15);
  _objc_release(pcVar13);
  __Unwind_Resume(pcVar1);
  pppuVar4 = &ppuStack_240;
  pcStack_228 = FUN_1056e4a58;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_240 = &PTR____CFConstantStringClassReference_110df7f38;
  puVar19 = (undefined8 *)0x1;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  pppuStack_230 = &ppuStack_170;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = (undefined **)pppuVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c08fa60();
  if (ppuVar6 == (undefined **)0x0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110df7f98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar19 = ppuVar6;
  }
  else {
    ppuVar6 = (undefined **)pppuVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = ppuVar6;
    func_0x00010c08fa60();
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar7 = &PTR____CFConstantStringClassReference_110df7fb8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar19 = ppuVar7;
    }
    else {
      ppuVar7 = ppuVar6;
      func_0x000108d39c90();
      if (((ulong)ppuVar7 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar3;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar19 = puVar11;
        _objc_release(puVar3);
      }
      else {
        ppuVar7 = (undefined **)pppuVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c08fa60();
        if ((ppuVar8 == (undefined **)0x0) ||
           (ppuVar8 = ppuVar7, func_0x000108d39c90(), ((ulong)ppuVar8 & 1) != 0)) {
          ppuVar8 = (undefined **)pppuVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar8;
          func_0x00010c08fa60();
          if (ppuVar12 == (undefined **)0x0) {
            ppuVar12 = &PTR____CFConstantStringClassReference_110df8018;
            goto LAB_1056e4d30;
          }
          ppuVar12 = (undefined **)pppuVar4;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar12;
          func_0x00010c08fa60();
          if (ppuVar9 == (undefined **)0x0) {
            ppuVar9 = &PTR____CFConstantStringClassReference_110df8038;
            func_0x000108543ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *puVar19 = ppuVar9;
          }
          else {
            func_0x00010c067fc0();
            uVar10 = *(undefined8 *)(puVar3 + 8);
            func_0x00010c269d40(uVar10);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0e9c0();
            _objc_release(uVar10);
            puVar3 = PTR_PTR_1126b5938;
            _objc_alloc(PTR_PTR_1126b5938);
            func_0x00010c050fa0();
            _objc_alloc(PTR_PTR_1126bd430);
            func_0x00010c01cba0();
            _objc_release(puVar3);
          }
          _objc_release(ppuVar12);
        }
        else {
          ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar12;
LAB_1056e4d30:
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar19 = ppuVar12;
        }
        _objc_release(ppuVar8);
        _objc_release(ppuVar7);
      }
    }
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar5);
  _objc_release(pppuVar4);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e44d8; end: 1056e4797;  */

/* WARNING: Removing unreachable block (ram,0x0001056e4760) */
/* WARNING: Removing unreachable block (ram,0x0001056e4a20) */

void FUN_1056e44d8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  char *unaff_x24;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar14 = param_3;
  pcVar15 = param_4;
  pcVar3 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar17 = 0;
    pcVar14 = pcVar2;
    pcVar15 = param_5;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_c8 = FUN_1056e4798;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(pcVar14);
  _objc_retain(pcVar15);
  if (pcVar2 != (char *)0x0) {
    plVar18 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar2);
    _objc_retain(pcVar14);
    if (pcVar14 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar14);
      pcVar2 = pcVar14;
      func_0x00010bdc3520(pcVar14);
    }
    _objc_release(pcVar14);
    func_0x00010002b838(auStack_148,pcVar2);
    _objc_retain(pcVar15);
    if (pcVar15 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      _objc_retainAutorelease(pcVar15);
      pcVar2 = pcVar15;
      func_0x00010bdc3520();
    }
    _objc_release(pcVar15);
    func_0x00010002b838(auStack_130,pcVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&uStack_180,auStack_160,&lStack_118,3);
    (**(code **)(*plVar18 + 0x18))(plVar18,&UNK_1108aa0f0,&uStack_180,pcVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar17 = 0;
    do {
      if ((&cStack_119)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = (char *)&uStack_180;
    } while (lVar17 != -0x48);
  }
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar15);
  do {
    unaff_x24 = unaff_x24 + -0x18;
  } while (unaff_x24 != auStack_160);
  _objc_release(pcVar15);
  _objc_release(pcVar14);
  _objc_release(pcVar1);
  __Unwind_Resume(pcVar3);
  pppuVar5 = &ppuStack_1a0;
  pcStack_188 = FUN_1056e4a58;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110df7f38;
  puVar16 = (undefined8 *)0x1;
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  ppuStack_190 = &puStack_d0;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = (undefined **)pppuVar5;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar6;
  func_0x00010c08fa60();
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = &PTR____CFConstantStringClassReference_110df7f98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar16 = ppuVar7;
  }
  else {
    ppuVar7 = (undefined **)pppuVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = ppuVar7;
    func_0x00010c08fa60();
    if (ppuVar8 == (undefined **)0x0) {
      ppuVar8 = &PTR____CFConstantStringClassReference_110df7fb8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar16 = ppuVar8;
    }
    else {
      ppuVar8 = ppuVar7;
      func_0x000108d39c90();
      if (((ulong)ppuVar8 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar4;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar16 = puVar12;
        _objc_release(puVar4);
      }
      else {
        ppuVar8 = (undefined **)pppuVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c08fa60();
        if ((ppuVar9 == (undefined **)0x0) ||
           (ppuVar9 = ppuVar8, func_0x000108d39c90(), ((ulong)ppuVar9 & 1) != 0)) {
          ppuVar9 = (undefined **)pppuVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar9;
          func_0x00010c08fa60();
          if (ppuVar13 == (undefined **)0x0) {
            ppuVar13 = &PTR____CFConstantStringClassReference_110df8018;
            goto LAB_1056e4d30;
          }
          ppuVar13 = (undefined **)pppuVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar13;
          func_0x00010c08fa60();
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110df8038;
            func_0x000108543ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *puVar16 = ppuVar10;
          }
          else {
            func_0x00010c067fc0();
            uVar11 = *(undefined8 *)(puVar4 + 8);
            func_0x00010c269d40(uVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0e9c0();
            _objc_release(uVar11);
            puVar4 = PTR_PTR_1126b5938;
            _objc_alloc(PTR_PTR_1126b5938);
            func_0x00010c050fa0();
            _objc_alloc(PTR_PTR_1126bd430);
            func_0x00010c01cba0();
            _objc_release(puVar4);
          }
          _objc_release(ppuVar13);
        }
        else {
          ppuVar13 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar13;
LAB_1056e4d30:
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar16 = ppuVar13;
        }
        _objc_release(ppuVar9);
        _objc_release(ppuVar8);
      }
    }
    _objc_release(ppuVar7);
  }
  _objc_release(ppuVar6);
  _objc_release(pppuVar5);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e4798; end: 1056e4a57;  */

/* WARNING: Removing unreachable block (ram,0x0001056e4a20) */

void FUN_1056e4798(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *unaff_x24;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_1108aa0f0,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pcVar1);
  pppuVar3 = &ppuStack_e0;
  pcStack_c8 = FUN_1056e4a58;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_e0 = &PTR____CFConstantStringClassReference_110df7f38;
  puVar12 = (undefined8 *)0x1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = (undefined **)pppuVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar5 == (undefined **)0x0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110df7f98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar12 = ppuVar5;
  }
  else {
    ppuVar5 = (undefined **)pppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar5;
    func_0x00010c08fa60();
    if (ppuVar6 == (undefined **)0x0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110df7fb8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar12 = ppuVar6;
    }
    else {
      ppuVar6 = ppuVar5;
      func_0x000108d39c90();
      if (((ulong)ppuVar6 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar2;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar12 = puVar10;
        _objc_release(puVar2);
      }
      else {
        ppuVar6 = (undefined **)pppuVar3;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar6;
        func_0x00010c08fa60();
        if ((ppuVar7 == (undefined **)0x0) ||
           (ppuVar7 = ppuVar6, func_0x000108d39c90(), ((ulong)ppuVar7 & 1) != 0)) {
          ppuVar7 = (undefined **)pppuVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar7;
          func_0x00010c08fa60();
          if (ppuVar11 == (undefined **)0x0) {
            ppuVar11 = &PTR____CFConstantStringClassReference_110df8018;
            goto LAB_1056e4d30;
          }
          ppuVar11 = (undefined **)pppuVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar8 = ppuVar11;
          func_0x00010c08fa60();
          if (ppuVar8 == (undefined **)0x0) {
            ppuVar8 = &PTR____CFConstantStringClassReference_110df8038;
            func_0x000108543ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *puVar12 = ppuVar8;
          }
          else {
            func_0x00010c067fc0();
            uVar9 = *(undefined8 *)(puVar2 + 8);
            func_0x00010c269d40(uVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0e9c0();
            _objc_release(uVar9);
            puVar2 = PTR_PTR_1126b5938;
            _objc_alloc(PTR_PTR_1126b5938);
            func_0x00010c050fa0();
            _objc_alloc(PTR_PTR_1126bd430);
            func_0x00010c01cba0();
            _objc_release(puVar2);
          }
          _objc_release(ppuVar11);
        }
        else {
          ppuVar11 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00();
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar11;
LAB_1056e4d30:
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar12 = ppuVar11;
        }
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
      }
    }
    _objc_release(ppuVar5);
  }
  _objc_release(ppuVar4);
  _objc_release(pppuVar3);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e4a58; end: 1056e4ac3; -[SCComposerBitmojiDownloader supportedURLSchemes] */

void FUN_1056e4a58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df7f38;
  puVar11 = (undefined8 *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = (undefined **)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c08fa60();
  if (ppuVar4 == (undefined **)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110df7f98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar11 = ppuVar4;
  }
  else {
    ppuVar4 = (undefined **)pppuVar2;
    func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110db11d8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010c08fa60();
    if (ppuVar5 == (undefined **)0x0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110df7fb8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar11 = ppuVar5;
    }
    else {
      ppuVar5 = ppuVar4;
      func_0x000108d39c90();
      if (((ulong)ppuVar5 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110df7fd8);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar11 = puVar9;
        _objc_release(puVar1);
      }
      else {
        ppuVar5 = (undefined **)pppuVar2;
        func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110db11f8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar5;
        func_0x00010c08fa60();
        if ((ppuVar6 == (undefined **)0x0) ||
           (ppuVar6 = ppuVar5, func_0x000108d39c90(), ((ulong)ppuVar6 & 1) != 0)) {
          ppuVar6 = (undefined **)pppuVar2;
          func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110db1138);
          _objc_retainAutoreleasedReturnValue();
          ppuVar10 = ppuVar6;
          func_0x00010c08fa60();
          if (ppuVar10 == (undefined **)0x0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110df8018;
            goto LAB_1056e4d30;
          }
          ppuVar10 = (undefined **)pppuVar2;
          func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110db1058);
          _objc_retainAutoreleasedReturnValue();
          ppuVar7 = ppuVar10;
          func_0x00010c08fa60();
          if (ppuVar7 == (undefined **)0x0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110df8038;
            func_0x000108543ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *puVar11 = ppuVar7;
          }
          else {
            func_0x00010c067fc0();
            uVar8 = *(undefined8 *)(puVar1 + 8);
            func_0x00010c269d40(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0e9c0();
            _objc_release(uVar8);
            puVar1 = PTR_PTR_1126b5938;
            _objc_alloc(PTR_PTR_1126b5938);
            func_0x00010c050fa0();
            _objc_alloc(PTR_PTR_1126bd430);
            func_0x00010c01cba0();
            _objc_release(puVar1);
          }
          _objc_release(ppuVar10);
        }
        else {
          ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110df7ff8);
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar10;
LAB_1056e4d30:
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar11 = ppuVar10;
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
      }
    }
    _objc_release(ppuVar4);
  }
  _objc_release(ppuVar3);
  _objc_release(pppuVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e4ac4; end: 1056e4dbf; -[SCComposerBitmojiDownloader requestPayloadWithURL:error:] */

void FUN_1056e4ac4(long param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined **)0x0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110df7f98;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar9 = (undefined *)0x0;
    *param_4 = ppuVar2;
    goto LAB_1056e4d8c;
  }
  ppuVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db11d8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df7fb8;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar9 = (undefined *)0x0;
    *param_4 = ppuVar3;
  }
  else {
    ppuVar3 = ppuVar2;
    func_0x000108d39c90();
    if (((ulong)ppuVar3 & 1) == 0) {
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110df7fd8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar9;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar7;
      _objc_release(puVar9);
      puVar9 = (undefined *)0x0;
    }
    else {
      ppuVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db11f8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar3;
      func_0x00010c08fa60();
      if ((ppuVar4 == (undefined **)0x0) ||
         (ppuVar4 = ppuVar3, func_0x000108d39c90(), ((ulong)ppuVar4 & 1) != 0)) {
        ppuVar4 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar4;
        func_0x00010c08fa60();
        if (ppuVar8 == (undefined **)0x0) {
          ppuVar8 = &PTR____CFConstantStringClassReference_110df8018;
          goto LAB_1056e4d30;
        }
        ppuVar8 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1058);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar8;
        func_0x00010c08fa60();
        if (ppuVar5 == (undefined **)0x0) {
          ppuVar5 = &PTR____CFConstantStringClassReference_110df8038;
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar9 = (undefined *)0x0;
          *param_4 = ppuVar5;
        }
        else {
          func_0x00010c067fc0();
          uVar6 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0e9c0();
          _objc_release(uVar6);
          puVar7 = PTR_PTR_1126b5938;
          _objc_alloc(PTR_PTR_1126b5938);
          func_0x00010c050fa0();
          puVar9 = PTR_PTR_1126bd430;
          _objc_alloc(PTR_PTR_1126bd430);
          func_0x00010c01cba0();
          _objc_release(puVar7);
        }
        _objc_release(ppuVar8);
      }
      else {
        ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110df7ff8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar8;
LAB_1056e4d30:
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar9 = (undefined *)0x0;
        *param_4 = ppuVar8;
      }
      _objc_release(ppuVar4);
      _objc_release(ppuVar3);
    }
  }
  _objc_release(ppuVar2);
LAB_1056e4d8c:
  _objc_release(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1056e4dc0; end: 1056e4f3f; -[SCComposerBitmojiDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1056e4dc0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126bd430;
  _objc_opt_class(PTR_PTR_1126bd430);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar4 = PTR_PTR_1126bd438;
  _objc_alloc(PTR_PTR_1126bd438);
  puVar2 = PTR_PTR_1126ae558;
  uVar3 = uVar1;
  func_0x00010bfe83e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9ca0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1820(uVar1);
  _objc_release(uVar1);
  _objc_retain(param_6);
  func_0x00010bff8140(puVar4);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1056e4f40; end: 1056e4fa7;  */

void FUN_1056e4f40(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001056e4fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2);
  return;
}



/* Entry: 1056e4fa8; end: 1056e5127; -[SCComposerBitmojiDownloader loadBytesWithRequestPayload:completion:] */

void FUN_1056e4fa8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bd430;
  _objc_opt_class(PTR_PTR_1126bd430);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfe83e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1820(uVar1);
  _objc_release(uVar1);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar7 = uVar4;
  func_0x00010bfa5460(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1056e5128; end: 1056e5137;  */

void FUN_1056e5128(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e5134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 1056e5138; end: 1056e5167; -[SCComposerBitmojiDownloader .cxx_destruct] */

void FUN_1056e5138(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e5168; end: 1056e5307; -[SCComposerBitmojiFetchTask initWithBitmojiImageFetcher:imageParamsFuture:contexts:feature:completion:] */

undefined1 *
FUN_1056e5168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = &uStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_88 = PTR_PTR_1126e9c00;
  uStack_90 = param_1;
  _objc_msgSendSuper2(&uStack_90,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    _objc_initWeak(auStack_58,puVar1);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1056e535c;
    puStack_68 = &UNK_1108aa1f0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c297260(uVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056e5308; end: 1056e535b; -[SCComposerBitmojiFetchTask cancel] */

void FUN_1056e5308(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x30);
  if (*(char *)(param_1 + 0x34) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
    return;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1056e535c; end: 1056e556f;  */

void FUN_1056e535c(long param_1,long param_2,undefined *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar4 = param_3;
  if (param_1 != 0) {
    _os_unfair_lock_lock(param_1 + 0x30);
    if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
      if (param_2 == 0) {
        if (param_3 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
          _objc_retainAutoreleasedReturnValue();
        }
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar4,0);
      }
      else {
        _objc_initWeak(auStack_58,param_1);
        uVar1 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = 0x15;
        _dispatch_get_global_queue(0x15,0);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        uVar3 = uVar1;
        func_0x00010bfa60c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x38) = uVar3;
        _objc_release(uVar5);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    _os_unfair_lock_unlock(param_1 + 0x30);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056e5570; end: 1056e56ef;  */

void FUN_1056e5570(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  
  _objc_retain(param_5);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _objc_retain(param_2);
  _objc_retain(param_5);
  if (param_1 == 0) goto LAB_1056e5668;
  if (param_2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + 0x28);
    pcVar6 = *(code **)(lVar3 + 0x10);
    puVar4 = (undefined *)0x0;
    bVar2 = false;
    puVar7 = puVar5;
LAB_1056e565c:
    (*pcVar6)(lVar3,puVar4,puVar5,bVar2);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _os_unfair_lock_lock(param_1 + 0x30);
    bVar1 = *(byte *)(param_1 + 0x34);
    _os_unfair_lock_unlock(param_1 + 0x30);
    puVar7 = puVar4;
    if ((bVar1 & 1) == 0) {
      if (puVar4 != (undefined *)0x0) {
        lVar3 = param_5;
        func_0x00010c252ee0(param_5);
        bVar2 = lVar3 == 0;
        lVar3 = *(long *)(param_1 + 0x28);
        pcVar6 = *(code **)(lVar3 + 0x10);
        puVar5 = (undefined *)0x0;
        goto LAB_1056e565c;
      }
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,puVar5,0);
      _objc_release(puVar5);
      puVar7 = (undefined *)0x0;
    }
  }
  _objc_release(puVar7);
LAB_1056e5668:
  _objc_release(param_5);
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056e56f0; end: 1056e5743; -[SCComposerBitmojiFetchTask .cxx_destruct] */

void FUN_1056e56f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e5744; end: 1056e57af; -[SCComposerBitmojiSelfieDownloader supportedURLSchemes] */

void FUN_1056e5744(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined ***pppuVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar3 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df8078;
  puVar15 = (undefined8 *)0x1;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)pppuVar3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c08fa60();
    if (puVar5 == (undefined1 *)0x0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110df7fb8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar15 = ppuVar10;
    }
    else {
      puVar5 = puVar4;
      func_0x000108d39c90();
      if (((ulong)puVar5 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            &PTR____CFConstantStringClassReference_110df7fd8);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *puVar15 = puVar11;
        _objc_release(puVar2);
      }
      else {
        puVar5 = (undefined1 *)pppuVar3;
        func_0x00010c0e00e0(pppuVar3,param_2,&PTR____CFConstantStringClassReference_110db1318);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        if (puVar6 == (undefined1 *)0x0) {
          ppuVar10 = &PTR____CFConstantStringClassReference_110df80b8;
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *puVar15 = ppuVar10;
        }
        else {
          puVar6 = (undefined1 *)pppuVar3;
          func_0x00010c0e00e0(pppuVar3,param_2,&PTR____CFConstantStringClassReference_110db1138);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c08fa60();
          if (puVar7 == (undefined1 *)0x0) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110df8018;
            func_0x000108543ce4();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *puVar15 = ppuVar10;
          }
          else {
            puVar7 = (undefined1 *)pppuVar3;
            func_0x00010c0e00e0(pppuVar3,param_2,&PTR____CFConstantStringClassReference_110df8098);
            _objc_retainAutoreleasedReturnValue();
            puVar8 = (undefined1 *)pppuVar3;
            func_0x00010c0e00e0(pppuVar3,param_2,&PTR____CFConstantStringClassReference_110db1218);
            _objc_retainAutoreleasedReturnValue();
            puVar11 = puVar2;
            func_0x00010be23bc0(puVar2,param_2,puVar8);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            puVar8 = (undefined1 *)pppuVar3;
            func_0x00010c0e00e0(pppuVar3,param_2,&PTR____CFConstantStringClassReference_110db1058);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar8;
            func_0x00010c08fa60();
            if (puVar9 == (undefined1 *)0x0) {
              uVar16 = 0;
            }
            else {
              puVar9 = puVar8;
              func_0x00010c067fc0();
              uVar13 = 3;
              if ((int)puVar9 != 0) {
                uVar13 = 0;
              }
              uVar16 = 2;
              if ((int)puVar9 != 2) {
                uVar16 = uVar13;
              }
            }
            puVar9 = (undefined1 *)pppuVar3;
            func_0x00010c0e00e0(pppuVar3,param_2,&PTR____CFConstantStringClassReference_110dad058);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = puVar9;
            func_0x00010c08fa60();
            if (puVar12 == (undefined1 *)0x0) {
              bVar1 = false;
            }
            else {
              puVar12 = puVar9;
              func_0x00010c067fc0(puVar9);
              bVar1 = (int)puVar12 != 0;
            }
            uVar13 = *(undefined8 *)(puVar2 + 8);
            func_0x00010c269d40(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf0e9c0();
            _objc_release(uVar13);
            puVar2 = PTR_PTR_1126afd38;
            _objc_opt_new(PTR_PTR_1126afd38);
            func_0x00010c2bc360();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2a8ea0(puVar2,param_2,puVar4);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b8160(puVar2,param_2,puVar7);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b78c0(puVar2,param_2,uVar16);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b4100(puVar2,param_2,0);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2bbd20(puVar2,param_2,bVar1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2bcea0(puVar2,param_2,1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c2b6d20(puVar2,param_2,puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar14 = puVar2;
            func_0x00010bf21f60(puVar2);
            _objc_retainAutoreleasedReturnValue();
            _objc_alloc(PTR_PTR_1126bd440);
            func_0x00010c012920();
            _objc_release(puVar14);
            _objc_release(puVar2);
            _objc_release(puVar9);
            _objc_release(puVar8);
            _objc_release(puVar11);
            _objc_release(puVar7);
          }
          _objc_release(puVar6);
        }
        _objc_release(puVar5);
      }
    }
    _objc_release(puVar4);
    _objc_release(pppuVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e57b0; end: 1056e5b7f; -[SCComposerBitmojiSelfieDownloader requestPayloadWithURL:error:] */

void FUN_1056e57b0(long param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fa60();
  if (uVar3 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110df7fb8;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar15 = (undefined *)0x0;
    *param_4 = ppuVar9;
  }
  else {
    uVar3 = uVar2;
    func_0x000108d39c90();
    if ((uVar3 & 1) == 0) {
      puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110df7fd8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar15;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar10;
      _objc_release(puVar15);
      puVar15 = (undefined *)0x0;
    }
    else {
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1318);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c08fa60();
      if (uVar4 == 0) {
        ppuVar9 = &PTR____CFConstantStringClassReference_110df80b8;
        func_0x000108543ce4();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        puVar15 = (undefined *)0x0;
        *param_4 = ppuVar9;
      }
      else {
        uVar4 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1138);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c08fa60();
        if (uVar5 == 0) {
          ppuVar9 = &PTR____CFConstantStringClassReference_110df8018;
          func_0x000108543ce4();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          puVar15 = (undefined *)0x0;
          *param_4 = ppuVar9;
        }
        else {
          uVar5 = param_3;
          func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110df8098);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1218);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_1;
          func_0x00010be23bc0(param_1,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          uVar6 = param_3;
          func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110db1058);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c08fa60();
          if (uVar8 == 0) {
            uVar14 = 0;
          }
          else {
            uVar8 = uVar6;
            func_0x00010c067fc0();
            uVar12 = 3;
            if ((int)uVar8 != 0) {
              uVar12 = 0;
            }
            uVar14 = 2;
            if ((int)uVar8 != 2) {
              uVar14 = uVar12;
            }
          }
          uVar8 = param_3;
          func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar8;
          func_0x00010c08fa60();
          if (uVar11 == 0) {
            bVar1 = false;
          }
          else {
            uVar11 = uVar8;
            func_0x00010c067fc0(uVar8);
            bVar1 = (int)uVar11 != 0;
          }
          uVar12 = *(undefined8 *)(param_1 + 8);
          func_0x00010c269d40(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0e9c0();
          _objc_release(uVar12);
          puVar10 = PTR_PTR_1126afd38;
          _objc_opt_new(PTR_PTR_1126afd38);
          func_0x00010c2bc360();
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2a8ea0(puVar10,param_2,uVar2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b8160(puVar10,param_2,uVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b78c0(puVar10,param_2,uVar14);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b4100(puVar10,param_2,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2bbd20(puVar10,param_2,bVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2bcea0(puVar10,param_2,1);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010c2b6d20(puVar10,param_2,lVar7);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar13 = puVar10;
          func_0x00010bf21f60(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar15 = PTR_PTR_1126bd440;
          _objc_alloc(PTR_PTR_1126bd440);
          func_0x00010c012920();
          _objc_release(puVar13);
          _objc_release(puVar10);
          _objc_release(uVar8);
          _objc_release(uVar6);
          _objc_release(lVar7);
          _objc_release(uVar5);
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar15);
  return;
}



/* Entry: 1056e5b80; end: 1056e5ccf; -[SCComposerBitmojiSelfieDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1056e5b80(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126bd440;
  _objc_opt_class(PTR_PTR_1126bd440);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  puVar2 = PTR_PTR_1126bd448;
  _objc_alloc(PTR_PTR_1126bd448);
  uVar3 = uVar1;
  func_0x00010bfaa0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1820(uVar1);
  _objc_release(uVar1);
  _objc_retain(param_6);
  func_0x00010bff82e0(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1056e5cd0; end: 1056e5d3b;  */

void FUN_1056e5cd0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b27a8;
    func_0x00010bfe9800(PTR_PTR_1126b27a8,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001056e5d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,0,0);
  return;
}



/* Entry: 1056e5d3c; end: 1056e5ebb; -[SCComposerBitmojiSelfieDownloader loadBytesWithRequestPayload:completion:] */

void FUN_1056e5d3c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126bd440;
  _objc_opt_class(PTR_PTR_1126bd440);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfaa0c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4f6c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa1820(uVar1);
  _objc_release(uVar1);
  uVar6 = 0x15;
  _dispatch_get_global_queue(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  uVar7 = uVar4;
  func_0x00010bfa62a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1056e5ebc; end: 1056e5ecb;  */

void FUN_1056e5ebc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e5ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 1056e5ecc; end: 1056e5f47; -[SCComposerBitmojiSelfieDownloader _getValidRenderStyle:] */

undefined ** FUN_1056e5ecc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c14f8;
  }
  else {
    lVar2 = param_3;
    func_0x00010c08fa60();
    ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c14f8;
    if (lVar2 != 0) {
      lVar2 = param_3;
      func_0x00010c067ec0();
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1528;
      if ((int)lVar2 != 0) {
        ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c14f8;
      }
      ppuVar3 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1510;
      if ((int)lVar2 != 3) {
        ppuVar3 = ppuVar1;
      }
    }
  }
  _objc_release(param_3);
  return ppuVar3;
}



/* Entry: 1056e5f48; end: 1056e5f77; -[SCComposerBitmojiSelfieDownloader .cxx_destruct] */

void FUN_1056e5f48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e5f78; end: 1056e608f; -[SCComposerBitmojiSelfieFetchTask initWithBitmojiSelfieFetcher:selfieRequest:contexts:feature:completion:] */

undefined1 *
FUN_1056e5f78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e9c10;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x20) = param_6;
    uVar2 = param_7;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x30) = 0;
    func_0x00010c24d960(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056e6090; end: 1056e60e3; -[SCComposerBitmojiSelfieFetchTask cancel] */

void FUN_1056e6090(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x30);
  if (*(char *)(param_1 + 0x34) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x30);
    return;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1056e60e4; end: 1056e6233; -[SCComposerBitmojiSelfieFetchTask start] */

void FUN_1056e60e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _os_unfair_lock_lock(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    uVar3 = uVar1;
    func_0x00010bfaa020();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _os_unfair_lock_unlock(param_1 + 0x30);
  return;
}



/* Entry: 1056e6234; end: 1056e62b3;  */

void FUN_1056e6234(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfdea0();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056e62b4; end: 1056e634b; -[SCComposerBitmojiSelfieFetchTask _didFetchImage:selfieRequest:responseContext:] */

void FUN_1056e62b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _os_unfair_lock_lock(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x30);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1056e634c; end: 1056e639f; -[SCComposerBitmojiSelfieFetchTask .cxx_destruct] */

void FUN_1056e634c(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e63a0; end: 1056e64ff; -[SCComposerEncryptedImageDownloaderRequest initWithTargetURL:contentObject:dataDecryptor:contentManagerEncryptionKey:contentManagerEncryptionIV:shouldScale:composerEncryptionConfig:] */

undefined1 *
FUN_1056e63a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
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
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e9c18;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1056e6500; end: 1056e6507; -[SCComposerEncryptedImageDownloaderRequest targetURL] */

undefined8 FUN_1056e6500(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056e6508; end: 1056e650f; -[SCComposerEncryptedImageDownloaderRequest contentObject] */

undefined8 FUN_1056e6508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056e6510; end: 1056e6517; -[SCComposerEncryptedImageDownloaderRequest dataDecryptor] */

undefined8 FUN_1056e6510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056e6518; end: 1056e651f; -[SCComposerEncryptedImageDownloaderRequest contentManagerEncryptionKey] */

undefined8 FUN_1056e6518(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1056e6520; end: 1056e6527; -[SCComposerEncryptedImageDownloaderRequest contentManagerEncryptionIV] */

undefined8 FUN_1056e6520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1056e6528; end: 1056e652f; -[SCComposerEncryptedImageDownloaderRequest shouldScale] */

undefined1 FUN_1056e6528(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1056e6530; end: 1056e6537; -[SCComposerEncryptedImageDownloaderRequest composerEncryptionConfig] */

undefined8 FUN_1056e6530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056e6538; end: 1056e6597; -[SCComposerEncryptedImageDownloaderRequest .cxx_destruct] */

void FUN_1056e6538(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1056e6598; end: 1056e6603; -[SCComposerEncryptedImageDownloader supportedURLSchemes] */

void FUN_1056e6598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110dc1718;
  puVar13 = (undefined8 *)0x1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar3 = (undefined1 *)pppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = (undefined1 *)pppuVar2;
    func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110dc1738);
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0 && puVar3 == (undefined1 *)0x0) {
      ppuVar10 = &PTR____CFConstantStringClassReference_110df80f8;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar13 = ppuVar10;
    }
    else {
      puVar5 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110dc1758);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110dc1778);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110dad058);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c067fc0();
      _objc_release(puVar7);
      puVar7 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110dc1798);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar7;
      func_0x00010c067fc0();
      _objc_release(puVar7);
      puVar7 = (undefined1 *)pppuVar2;
      func_0x00010c0e00e0(pppuVar2,param_2,&PTR____CFConstantStringClassReference_110dc17b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      _objc_release(puVar7);
      if ((long)puVar9 < 1) {
        _objc_retain(puVar5);
        _objc_retain(puVar6);
        puVar7 = puVar5;
        func_0x00010c08fa60();
        if (puVar7 == (undefined1 *)0x0) {
          puVar14 = (undefined *)0x0;
        }
        else {
          puVar14 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar5);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar7 = puVar6;
        func_0x00010c08fa60();
        if (puVar7 == (undefined1 *)0x0) {
          puVar15 = (undefined *)0x0;
        }
        else {
          puVar15 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar6);
          _objc_retainAutoreleasedReturnValue();
        }
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_1056e8460;
        puStack_b0 = &UNK_1108aa310;
        _objc_retain(puVar15);
        puStack_a8 = puVar15;
        _objc_retain(puVar14);
        ppuVar10 = &puStack_c8;
        puStack_a0 = puVar14;
        _objc_retainBlock();
        puStack_f8 = puVar1;
        uStack_f0 = 0xc2000000;
        pcStack_e8 = FUN_1056e8508;
        puStack_e0 = &UNK_1108aa310;
        _objc_retain(puVar14);
        puStack_d8 = puVar14;
        _objc_retain(puVar15);
        ppuVar11 = &puStack_f8;
        puStack_d0 = puVar15;
        _objc_retainBlock();
        ppuVar12 = ppuVar11;
        if (((int)puVar8 == 2) || (ppuVar12 = ppuVar10, (int)puVar8 == 1)) {
          _objc_retainBlock(ppuVar12);
        }
        else {
          puStack_128 = puVar1;
          uStack_120 = 0xc2000000;
          pcStack_118 = FUN_1056e856c;
          puStack_110 = &UNK_1108aa340;
          _objc_retain(ppuVar10);
          ppuStack_108 = ppuVar10;
          _objc_retain(ppuVar11);
          ppuVar12 = &puStack_128;
          ppuStack_100 = ppuVar11;
          _objc_retainBlock(ppuVar12);
          _objc_release(ppuStack_100);
          _objc_release(ppuStack_108);
        }
        _objc_release(ppuVar11);
        _objc_release(puStack_d0);
        _objc_release(puStack_d8);
        _objc_release(ppuVar10);
        _objc_release(puStack_a0);
        _objc_release(puStack_a8);
        _objc_release(puVar15);
        _objc_release(puVar14);
        _objc_release(puVar6);
        _objc_release(puVar5);
        puVar14 = PTR_PTR_1126bd458;
        _objc_alloc();
        func_0x00010bff6b60();
        _objc_alloc(PTR_PTR_1126bd450);
        func_0x00010c050c80();
        _objc_release(puVar14);
        _objc_release(ppuVar12);
      }
      else {
        _objc_alloc(PTR_PTR_1126bd450);
        func_0x00010c050c80();
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(pppuVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e6604; end: 1056e6a37; -[SCComposerEncryptedImageDownloader requestPayloadWithURL:error:] */

void FUN_1056e6604(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  lVar2 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1738);
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 == (undefined *)0x0 && lVar2 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110df80f8;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    puVar12 = (undefined *)0x0;
    *param_4 = ppuVar9;
  }
  else {
    lVar4 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1758);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1778);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad058);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c067fc0();
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc1798);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c067fc0();
    _objc_release(lVar6);
    lVar6 = param_3;
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dc17b8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f3c0();
    _objc_release(lVar6);
    if (lVar8 < 1) {
      _objc_retain(lVar4);
      _objc_retain(lVar5);
      lVar6 = lVar4;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      lVar6 = lVar5;
      func_0x00010c08fa60();
      if (lVar6 == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
        func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar5);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_1056e8460;
      puStack_90 = &UNK_1108aa310;
      _objc_retain(puVar13);
      puStack_88 = puVar13;
      _objc_retain(puVar12);
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar12;
      _objc_retainBlock();
      puStack_d8 = puVar1;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1056e8508;
      puStack_c0 = &UNK_1108aa310;
      _objc_retain(puVar12);
      puStack_b8 = puVar12;
      _objc_retain(puVar13);
      ppuVar10 = &puStack_d8;
      puStack_b0 = puVar13;
      _objc_retainBlock();
      ppuVar11 = ppuVar10;
      if (((int)lVar7 == 2) || (ppuVar11 = ppuVar9, (int)lVar7 == 1)) {
        _objc_retainBlock(ppuVar11);
      }
      else {
        puStack_108 = puVar1;
        uStack_100 = 0xc2000000;
        pcStack_f8 = FUN_1056e856c;
        puStack_f0 = &UNK_1108aa340;
        _objc_retain(ppuVar9);
        ppuStack_e8 = ppuVar9;
        _objc_retain(ppuVar10);
        ppuVar11 = &puStack_108;
        ppuStack_e0 = ppuVar10;
        _objc_retainBlock(ppuVar11);
        _objc_release(ppuStack_e0);
        _objc_release(ppuStack_e8);
      }
      _objc_release(ppuVar10);
      _objc_release(puStack_b0);
      _objc_release(puStack_b8);
      _objc_release(ppuVar9);
      _objc_release(puStack_80);
      _objc_release(puStack_88);
      _objc_release(puVar13);
      _objc_release(puVar12);
      _objc_release(lVar5);
      _objc_release(lVar4);
      puVar13 = PTR_PTR_1126bd458;
      _objc_alloc();
      func_0x00010bff6b60();
      puVar12 = PTR_PTR_1126bd450;
      _objc_alloc(PTR_PTR_1126bd450);
      func_0x00010c050c80();
      _objc_release(puVar13);
      _objc_release(ppuVar11);
    }
    else {
      puVar12 = PTR_PTR_1126bd450;
      _objc_alloc(PTR_PTR_1126bd450);
      func_0x00010c050c80();
    }
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1056e6a38; end: 1056e6b53; -[SCComposerEncryptedImageDownloader loadImageWithRequestPayload:parameters:completion:] */

void FUN_1056e6a38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c26a220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bf4cce0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      param_1 = 0;
    }
    else {
      func_0x00010be11b20(param_1,param_2,param_3,param_4,param_5,PTR___dispatch_main_q_11034be20,
                          param_6);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010be0f4c0(param_1,param_2,param_3,param_4,param_5,PTR___dispatch_main_q_11034be20,
                        param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056e6b54; end: 1056e6cef; -[SCComposerEncryptedImageDownloader _fetchAndDecryptImageDataForImageURLRequest:parameters:completionQueue:completion:] */

void FUN_1056e6b54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x00010be37020(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_3;
    func_0x00010bf63760();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = 0x15;
    _dispatch_get_global_queue(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(param_3);
    _objc_retain(uVar1);
    func_0x00010bde7be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(uVar1);
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056e6cf0; end: 1056e6f2f;  */

void FUN_1056e6cf0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar3 = param_2;
  if (param_3 == 0) {
    if ((*(long *)(param_1 + 0x38) != 0) && (lVar2 = param_2, func_0x00010c08fa60(), lVar2 != 0)) {
      lVar3 = *(long *)(param_1 + 0x38);
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      lVar2 = lVar3;
      func_0x00010c08fa60();
      if (lVar2 == 0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0xc2000000;
        pcStack_88 = FUN_1056e6f44;
        puStack_80 = &UNK_110849530;
        puVar5 = *(undefined **)(param_1 + 0x30);
        _objc_retain(puVar5);
        puStack_78 = puVar5;
        func_0x00010007380c(uVar6,&puStack_98);
        puVar5 = puStack_78;
        goto LAB_1056e6ea8;
      }
    }
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c232f40();
    puVar5 = puVar4;
    if (((iVar1 != 0) && (0 < (long)*(ulong *)(param_1 + 0x40))) &&
       (0 < (long)*(ulong *)(param_1 + 0x48))) {
      func_0x00010c14e680((double)*(ulong *)(param_1 + 0x40),(double)*(ulong *)(param_1 + 0x48));
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1056e6f90;
    puStack_b0 = &UNK_11084aaa8;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    puStack_a8 = puVar5;
    _objc_retain(uVar6);
    uStack_a0 = uVar6;
    _objc_retain(puVar5);
    func_0x00010007380c(uVar7,&puStack_c8);
    _objc_release(uStack_a0);
    _objc_release(puStack_a8);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_1056e6f30;
    puStack_58 = &UNK_11084aaa8;
    puVar5 = *(undefined **)(param_1 + 0x30);
    _objc_retain(puVar5);
    puStack_48 = puVar5;
    _objc_retain(param_3);
    lStack_50 = param_3;
    func_0x00010007380c(uVar6,&puStack_70);
    _objc_release(lStack_50);
    puVar5 = puStack_48;
  }
LAB_1056e6ea8:
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(lVar3);
  return;
}



/* Entry: 1056e6f30; end: 1056e6f43;  */

void FUN_1056e6f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e6f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1056e6f44; end: 1056e700b;  */

void FUN_1056e6f44(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8118;
  func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df8118);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1056e700c; end: 1056e7377; -[SCComposerEncryptedImageDownloader _imageFetchingServiceWithURLForConfig:parameters:completionQueue:completion:] */

void FUN_1056e700c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar3 = PTR_PTR_1126b08b0;
  lVar1 = param_3;
  func_0x00010c26a220(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf33760(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar4 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  lVar1 = param_3;
  func_0x00010bf4cac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf4caa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195d00(puVar4,param_2,lVar1,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126b85a0;
  puVar5 = puVar4;
  func_0x00010bf220e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar6,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar7 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar7,param_2,lVar1,0xc);
  _objc_release(lVar1);
  func_0x00010c232f40();
  lVar1 = param_3;
  func_0x00010bf44ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126bd460;
  if (lVar1 == 0) {
    func_0x00010c27f9a0(PTR_PTR_1126bd460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = param_3;
    func_0x00010bf44ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf447e0(puVar5,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  puVar8 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf20(puVar8,param_2,puVar6,puVar7,puVar5);
  _objc_release(puVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1056e7378;
  puStack_88 = &UNK_1108538e0;
  uStack_80 = param_6;
  uStack_78 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010bfa7900(uVar10,param_2,puVar8,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 1056e7378; end: 1056e741b;  */

void FUN_1056e7378(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1056e741c;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = param_2;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e741c; end: 1056e74d3;  */

void FUN_1056e741c(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_1056e74d4;
  puStack_50 = &UNK_110891570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056e754c;
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



/* Entry: 1056e74d4; end: 1056e754b;  */

void FUN_1056e74d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b27a8;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e754c; end: 1056e7597;  */

void FUN_1056e754c(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8138;
  func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df8138);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1056e7598; end: 1056e7897; -[SCComposerEncryptedImageDownloader _contentDeliveryWithURLForConfig:parameters:completionQueue:completion:] */

void FUN_1056e7598(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong in_stack_ffffffffffffff48;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c26a220();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b08b8;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0295e0(puVar2,param_2,uVar3,0xb);
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b1058;
  _objc_alloc();
  uVar3 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b360(puVar4,param_2,uVar3,&PTR____CFConstantStringClassReference_110dc1718,
                      &PTR____CFConstantStringClassReference_110db6dd8,0,1);
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126b1050;
  _objc_alloc(PTR_PTR_1126b1050);
  uVar3 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar6;
  func_0x00010c05a200(puVar5,param_2,uVar3,0,0,0,0,0,uVar6,
                      in_stack_ffffffffffffff48 & 0xffffffffffffff00,puVar4);
  _objc_release(uVar6);
  _objc_release(uVar3);
  puVar7 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  uVar8 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf4cac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010bf4caa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056e7898;
  puStack_78 = &UNK_1108aa2b0;
  uStack_70 = param_6;
  uStack_68 = param_7;
  _objc_retain(param_7);
  _objc_retain(param_6);
  uVar10 = uVar8;
  func_0x00010c1267e0(uVar8,param_2,puVar2,puVar5,uVar3,uVar6,puVar7,puVar9,
                      uVar11 & 0xffffffffffffff00,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
  return;
}



/* Entry: 1056e7898; end: 1056e797b;  */

void FUN_1056e7898(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  if ((param_3 & 1) == 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110df8158;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = (undefined **)0x0;
  }
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1056e797c;
  puStack_50 = &UNK_11084a9e8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = param_2;
  ppuStack_40 = ppuVar3;
  uStack_38 = uVar2;
  _objc_retain(ppuVar3);
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(ppuStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(ppuVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e797c; end: 1056e798f;  */

void FUN_1056e797c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056e798c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1056e7990; end: 1056e7bb3; -[SCComposerEncryptedImageDownloader _fetchImageForContentObjectRequest:parameters:completionQueue:completion:] */

void FUN_1056e7990(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010bf4cce0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  func_0x00010bff6b20();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b08b0;
  func_0x00010bf4cd80(PTR_PTR_1126b08b0,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b17d8;
  _objc_alloc(PTR_PTR_1126b17d8);
  func_0x00010c003a80();
  lVar6 = param_3;
  func_0x00010bf4cac0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar6 = param_3;
    func_0x00010bf4caa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) goto LAB_1056e7aec;
  }
  else {
    _objc_release();
  }
  lVar6 = param_3;
  func_0x00010bf4cac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf4caa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195d00(puVar5,param_2,lVar6,lVar7);
  _objc_release(lVar7);
  _objc_release(lVar6);
LAB_1056e7aec:
  cVar1 = *(char *)(param_1 + 0x20);
  puVar8 = puVar5;
  func_0x00010bf220e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010be37000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bebc1e0(param_1,param_2,puVar8,param_3,param_4,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1056e7bb4; end: 1056e7d17; -[SCComposerEncryptedImageDownloader _simpleContentFetcherWithContentObjectForConfig:request:parameters:completionQueue:completion:] */

void FUN_1056e7bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010bf63760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1056e7d18;
  puStack_88 = &UNK_1108aa2e0;
  uStack_80 = param_7;
  uStack_78 = param_4;
  uStack_70 = uVar1;
  uStack_68 = param_8;
  uStack_60 = param_5;
  uStack_58 = param_6;
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(uVar1);
  uVar3 = uVar2;
  func_0x00010c13e5e0(uVar2,param_2,param_3,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uStack_78);
  _objc_release(uStack_68);
  _objc_release(uStack_80);
  _objc_release(uStack_70);
  _objc_release(param_4);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056e7d18; end: 1056e7ebf;  */

void FUN_1056e7d18(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  if ((*(long *)(param_1 + 0x30) != 0) && (lVar2 = param_2, func_0x00010c08fa60(), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 0x30);
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    param_2 = lVar3;
    if (lVar2 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_1056e7ec0;
      puStack_40 = &UNK_110849530;
      puVar5 = *(undefined **)(param_1 + 0x38);
      _objc_retain(puVar5);
      puStack_38 = puVar5;
      func_0x00010007380c(uVar6,&puStack_58);
      puVar5 = puStack_38;
      goto LAB_1056e7e9c;
    }
  }
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010c232f40();
  puVar5 = puVar4;
  if (iVar1 != 0) {
    func_0x00010c14e680((double)*(long *)(param_1 + 0x40),(double)*(long *)(param_1 + 0x48));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1056e7f0c;
  puStack_70 = &UNK_11084aaa8;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puStack_68 = puVar5;
  _objc_retain(uVar6);
  uStack_60 = uVar6;
  _objc_retain(puVar5);
  func_0x00010007380c(uVar7,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(puStack_68);
LAB_1056e7e9c:
  _objc_release(puVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e7ec0; end: 1056e7f87;  */

void FUN_1056e7ec0(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8118;
  func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df8118);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1056e7f88; end: 1056e8203; -[SCComposerEncryptedImageDownloader _imageFetchingServiceWithContentObjectForConfig:request:parameters:completionQueue:completion:] */

void FUN_1056e7f88(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b85a0;
  func_0x00010c23c900(PTR_PTR_1126b85a0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  lVar3 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar2,param_2,lVar3,0xc);
  _objc_release(lVar3);
  func_0x00010c232f40();
  lVar3 = param_4;
  func_0x00010bf44ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar4 = PTR_PTR_1126bd460;
  if (lVar3 == 0) {
    func_0x00010c27f9a0(PTR_PTR_1126bd460);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar3 = param_4;
    func_0x00010bf44ac0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf447e0(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf20(puVar5,param_2,puVar1,puVar2,puVar4);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1056e8204;
  puStack_88 = &UNK_1108538e0;
  uStack_80 = param_7;
  uStack_78 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bfa7900(uVar7,param_2,puVar5,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1056e8204; end: 1056e82a7;  */

void FUN_1056e8204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1056e82a8;
  puStack_48 = &UNK_11084aaa8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = param_2;
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  _objc_retain(param_2);
  func_0x00010007380c(uVar1,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 1056e82a8; end: 1056e835f;  */

void FUN_1056e82a8(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_1056e8360;
  puStack_50 = &UNK_110891570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  puStack_90 = puVar3;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1056e83d8;
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



/* Entry: 1056e8360; end: 1056e83d7;  */

void FUN_1056e8360(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b27a8;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe9800(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1056e83d8; end: 1056e8423;  */

void FUN_1056e83d8(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  ppuVar1 = &PTR____CFConstantStringClassReference_110df8138;
  func_0x000108543ce4(&PTR____CFConstantStringClassReference_110df8138);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,0,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 1056e8424; end: 1056e845f; -[SCComposerEncryptedImageDownloader .cxx_destruct] */

void FUN_1056e8424(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e8460; end: 1056e8507;  */

void FUN_1056e8460(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bcb4460(uVar3,param_2,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80(uVar2);
    func_0x00010bf06ae0();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bcb4460(uVar3,uVar2,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1056e8508; end: 1056e856b;  */

void FUN_1056e8508(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  if (*(long *)(param_1 + 0x20) == 0) {
    _objc_retain(param_2);
  }
  else {
    func_0x00010b29143c(param_2,*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),1,0);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1056e856c; end: 1056e85e3;  */

void FUN_1056e856c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1056e85e4; end: 1056e864f; -[SCComposerEncryptedThumbnailDownloader supportedURLSchemes] */

void FUN_1056e85e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined ***pppuVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar2 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df8178;
  puVar20 = (undefined8 *)0x1;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = (undefined1 *)pppuVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar10;
  func_0x00010c08fa60();
  if (puVar11 == (undefined1 *)0x0) {
    puVar11 = puVar5;
    func_0x00010c08fa60();
    if (puVar11 != (undefined1 *)0x0) {
      puVar21 = (undefined *)0x0;
      goto LAB_1056e87d0;
    }
LAB_1056e8a08:
    ppuVar19 = &PTR____CFConstantStringClassReference_110df8218;
    func_0x000108543ce4();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar20 = ppuVar19;
  }
  else {
    puVar21 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar5;
    func_0x00010c08fa60();
    if (puVar11 == (undefined1 *)0x0) {
      if (puVar21 == (undefined *)0x0) goto LAB_1056e8a08;
      puVar12 = PTR_PTR_1126b08b0;
      func_0x00010bf4cd80();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
LAB_1056e87d0:
      puVar12 = PTR_PTR_1126b08b0;
      func_0x00010bf33760();
      _objc_retainAutoreleasedReturnValue();
    }
    puVar13 = PTR_PTR_1126b17d8;
    _objc_alloc();
    puStack_88 = PTR_PTR_1126e9c28;
    puStack_90 = puVar1;
    _objc_msgSendSuper2(&puStack_90,PTR_s_contentTtlInMinutes_11252a738);
    func_0x00010c003a80();
    puVar11 = puVar3;
    func_0x00010c08fa60();
    if ((((puVar11 != (undefined1 *)0x0) ||
         (puVar11 = puVar4, func_0x00010c08fa60(), puVar11 != (undefined1 *)0x0)) ||
        (puVar11 = puVar8, func_0x00010c08fa60(), puVar11 != (undefined1 *)0x0)) ||
       (puVar11 = puVar9, func_0x00010c08fa60(), puVar11 != (undefined1 *)0x0)) {
      func_0x00010c195d00(puVar13);
    }
    puVar11 = puVar3;
    func_0x00010c08fa60();
    if (((puVar11 != (undefined1 *)0x0) &&
        (puVar11 = puVar4, func_0x00010c08fa60(), puVar11 != (undefined1 *)0x0)) &&
       (puVar11 = puVar8, func_0x00010c08fa60(), puVar11 != (undefined1 *)0x0)) {
      func_0x00010c08fa60(puVar9);
    }
    puVar15 = PTR_PTR_1126b85a0;
    puVar14 = puVar13;
    func_0x00010bf220e0(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23c900(puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126aebf0;
    _objc_alloc(PTR_PTR_1126aebf0);
    _objc_opt_class(puVar1);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c011b80(puVar14);
    _objc_release(puVar1);
    puVar1 = PTR_PTR_1126bd458;
    _objc_alloc(PTR_PTR_1126bd458);
    func_0x00010bff6b60();
    puVar16 = PTR_PTR_1126bd460;
    func_0x00010bf447e0(PTR_PTR_1126bd460);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_1126b85a8;
    _objc_alloc(PTR_PTR_1126b85a8);
    puVar18 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    func_0x00010c01cf20(param_1,*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar17);
    _objc_release(puVar18);
    _objc_release(puVar16);
    _objc_release(puVar1);
    _objc_release(puVar14);
    _objc_release(puVar15);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar21);
  }
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(pppuVar2);
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e8650; end: 1056e8abb; -[SCComposerEncryptedThumbnailDownloader requestPayloadWithURL:error:] */

void FUN_1056e8650(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000108543f0c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c08fa60();
  if (lVar9 == 0) {
    lVar9 = lVar3;
    func_0x00010c08fa60();
    if (lVar9 == 0) {
LAB_1056e8a08:
      ppuVar17 = &PTR____CFConstantStringClassReference_110df8218;
      func_0x000108543ce4();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      puVar19 = (undefined *)0x0;
      *param_5 = ppuVar17;
      goto LAB_1056e8a28;
    }
    puVar18 = (undefined *)0x0;
LAB_1056e87d0:
    puVar10 = PTR_PTR_1126b08b0;
    func_0x00010bf33760();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar3;
    func_0x00010c08fa60();
    if (lVar9 != 0) goto LAB_1056e87d0;
    if (puVar18 == (undefined *)0x0) goto LAB_1056e8a08;
    puVar10 = PTR_PTR_1126b08b0;
    func_0x00010bf4cd80();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar11 = PTR_PTR_1126b17d8;
  _objc_alloc();
  puStack_68 = PTR_PTR_1126e9c28;
  uStack_70 = param_2;
  _objc_msgSendSuper2(&uStack_70,PTR_s_contentTtlInMinutes_11252a738);
  func_0x00010c003a80();
  lVar9 = lVar1;
  func_0x00010c08fa60();
  if ((((lVar9 != 0) || (lVar9 = lVar2, func_0x00010c08fa60(), lVar9 != 0)) ||
      (lVar9 = lVar6, func_0x00010c08fa60(), lVar9 != 0)) ||
     (lVar9 = lVar7, func_0x00010c08fa60(), lVar9 != 0)) {
    func_0x00010c195d00(puVar11);
  }
  lVar9 = lVar1;
  func_0x00010c08fa60();
  if (((lVar9 != 0) && (lVar9 = lVar2, func_0x00010c08fa60(), lVar9 != 0)) &&
     (lVar9 = lVar6, func_0x00010c08fa60(), lVar9 != 0)) {
    func_0x00010c08fa60(lVar7);
  }
  puVar12 = PTR_PTR_1126b85a0;
  puVar19 = puVar11;
  func_0x00010bf220e0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23c900(puVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar19);
  puVar13 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_2);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar13);
  _objc_release(param_2);
  puVar14 = PTR_PTR_1126bd458;
  _objc_alloc(PTR_PTR_1126bd458);
  func_0x00010bff6b60();
  puVar15 = PTR_PTR_1126bd460;
  func_0x00010bf447e0(PTR_PTR_1126bd460);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR_PTR_1126b85a8;
  _objc_alloc(PTR_PTR_1126b85a8);
  puVar16 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c01cf20(param_1,*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar19);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar18);
LAB_1056e8a28:
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 1056e8abc; end: 1056e8b2f; -[SCComposerLensIconDownloaderRequest initWithLensId:] */

undefined1 * FUN_1056e8abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9c30;
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



/* Entry: 1056e8b30; end: 1056e8b37; -[SCComposerLensIconDownloaderRequest lensId] */

undefined8 FUN_1056e8b30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1056e8b38; end: 1056e8b43; -[SCComposerLensIconDownloaderRequest .cxx_destruct] */

void FUN_1056e8b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1056e8b44; end: 1056e8baf; -[SCComposerLensIconDownloader supportedURLSchemes] */

void FUN_1056e8b44(undefined8 param_1,undefined8 param_2)

{
  undefined ***pppuVar1;
  undefined1 *puVar2;
  undefined **ppuStack_20;
  long lStack_18;
  
  pppuVar1 = &ppuStack_20;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110df8238;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_20,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    func_0x000108543f0c(pppuVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)pppuVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_alloc(PTR_PTR_1126bd468);
    func_0x00010c024240();
    _objc_release(puVar2);
    _objc_release(pppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056e8bb0; end: 1056e8c27; -[SCComposerLensIconDownloader requestPayloadWithURL:error:] */

void FUN_1056e8bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000108543f0c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd468;
  _objc_alloc(PTR_PTR_1126bd468);
  func_0x00010c024240();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


