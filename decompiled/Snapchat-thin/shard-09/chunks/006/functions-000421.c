/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f9c7c8; end: 106f9c82f; +[MLBCancellationRequest descriptor] */

void FUN_106f9c7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8898 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d4c0,
                        &PTR____CFConstantStringClassReference_110e90678,&PTR_DAT_113197228,
                        &PTR_s_requestId_113197260,1,0x10,0x1c);
    puRam00000001136c8898 = puVar1;
  }
  return;
}



/* Entry: 106f9c830; end: 106f9c897; +[MLBStereoCalibrationDataRequest descriptor] */

void FUN_106f9c830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d510,
                        &PTR____CFConstantStringClassReference_110e90698,&PTR_DAT_113197228,
                        &PTR_DAT_113197280,1,4,0x1c);
    puRam00000001136c88a0 = puVar1;
  }
  return;
}



/* Entry: 106f9c898; end: 106f9c8ff; +[MLBStereoCalibrationData descriptor] */

void FUN_106f9c898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d560,
                        &PTR____CFConstantStringClassReference_110e906b8,&PTR_DAT_113197228,
                        &PTR_DAT_1131972a0,1,0x10,0x1c);
    puRam00000001136c88a8 = puVar1;
  }
  return;
}



/* Entry: 106f9c900; end: 106f9c967; +[MLBGpsRequest descriptor] */

void FUN_106f9c900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d5b0,
                        &PTR____CFConstantStringClassReference_110e906d8,&PTR_DAT_113197228,
                        0x113197660,3,0x18,0x1d);
    puRam00000001136c88b0 = puVar1;
  }
  return;
}



/* Entry: 106f9c968; end: 106f9c9cf; +[MLBAmbaRequest descriptor] */

void FUN_106f9c968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d600,
                        &PTR____CFConstantStringClassReference_110e903b8,&PTR_DAT_113197228,
                        &PTR_s_requestId_113197a18,10,0x48,0x1c);
    puRam00000001136c88b8 = puVar1;
  }
  return;
}



/* Entry: 106f9c9d0; end: 106f9cab3; +[MLBAmbaResponse descriptor] */

void FUN_106f9c9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d650,
                        &PTR____CFConstantStringClassReference_110e903d8,&PTR_DAT_113197228,
                        &PTR_s_requestId_1131978f8,9,0x40,0x1c);
    puRam00000001136c88c0 = puVar1;
  }
  return;
}



/* Entry: 106f9cab4; end: 106f9cabf;  */

bool FUN_106f9cab4(int param_1)

{
  return param_1 == 0;
}



/* Entry: 106f9cac0; end: 106f9cb3b;  */

undefined * FUN_106f9cac0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c88d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90718,
                        &UNK_10de19e5c,&UNK_10de19e74,2,FUN_106f9cb3c,2);
    do {
      if (puRam00000001136c88d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c88d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c88d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c88d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c88d0;
}



/* Entry: 106f9cb3c; end: 106f9cb47;  */

bool FUN_106f9cb3c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106f9cb48; end: 106f9cbaf; +[MLBEncryptionSetupRequest descriptor] */

void FUN_106f9cb48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d6f0,
                        &PTR____CFConstantStringClassReference_110e90478,&PTR_DAT_113197b58,
                        &PTR_DAT_113197b70,2,0x10,0x1c);
    puRam00000001136c88d8 = puVar1;
  }
  return;
}



/* Entry: 106f9cbb0; end: 106f9cc93; +[MLBEncryptionSetupResponse descriptor] */

void FUN_106f9cbb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c88e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d740,
                        &PTR____CFConstantStringClassReference_110e90498,&PTR_DAT_113197b58,
                        &PTR_DAT_113197bb0,2,0x10,0x1c);
    puRam00000001136c88e0 = puVar1;
  }
  return;
}



/* Entry: 106f9cc94; end: 106f9cca3;  */

bool FUN_106f9cc94(int param_1)

{
  return param_1 - 1U < 0x13;
}



/* Entry: 106f9cca4; end: 106f9cd1f;  */

undefined * FUN_106f9cca4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c88f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90758,
                        &UNK_10de19fc0,&UNK_10de19ff4,4,FUN_106f9cd20,2);
    do {
      if (puRam00000001136c88f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c88f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c88f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c88f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c88f0;
}



/* Entry: 106f9cd20; end: 106f9cd2f;  */

bool FUN_106f9cd20(int param_1)

{
  return param_1 - 1U < 4;
}



/* Entry: 106f9cd30; end: 106f9cdab;  */

undefined * FUN_106f9cd30(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c88f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90778,
                        &UNK_10de1a004,&UNK_10de1a020,4,FUN_106f9cdac,2);
    do {
      if (puRam00000001136c88f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c88f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c88f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c88f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c88f8;
}



/* Entry: 106f9cdac; end: 106f9cdb7;  */

bool FUN_106f9cdac(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106f9cdb8; end: 106f9ce33;  */

undefined * FUN_106f9cdb8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8900 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90798,
                        &UNK_10de1a030,&UNK_10de1a048,2,FUN_106f9ce34,2);
    do {
      if (puRam00000001136c8900 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8900;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8900,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8900 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8900;
}



/* Entry: 106f9ce34; end: 106f9ce43;  */

bool FUN_106f9ce34(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106f9ce44; end: 106f9cebf;  */

undefined * FUN_106f9ce44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8908 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e907b8,
                        &UNK_10de1a050,&UNK_10de1a140,0xe,FUN_106f9cec0,2);
    do {
      if (puRam00000001136c8908 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8908;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8908,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8908 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8908;
}



/* Entry: 106f9cec0; end: 106f9cecf;  */

bool FUN_106f9cec0(int param_1)

{
  return param_1 - 1U < 0xe;
}



/* Entry: 106f9ced0; end: 106f9cf4b;  */

undefined * FUN_106f9ced0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8910 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e907d8,
                        &UNK_10de1a178,&UNK_10de1a1a0,2,FUN_106f9cf4c,2);
    do {
      if (puRam00000001136c8910 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8910;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8910,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8910 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8910;
}



/* Entry: 106f9cf4c; end: 106f9cf5b;  */

bool FUN_106f9cf4c(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106f9cf5c; end: 106f9cfd7;  */

undefined * FUN_106f9cf5c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8918 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e907f8,
                        &UNK_10de1a1a8,&UNK_10de1a1c8,2,FUN_106f9cfd8,2);
    do {
      if (puRam00000001136c8918 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8918;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8918,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8918 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8918;
}



/* Entry: 106f9cfd8; end: 106f9cfe7;  */

bool FUN_106f9cfd8(int param_1)

{
  return param_1 - 1U < 2;
}



/* Entry: 106f9cfe8; end: 106f9d063;  */

undefined * FUN_106f9cfe8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8920 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90818,
                        &UNK_10de1a1d0,&UNK_10de1a260,8,FUN_106f9d064,2);
    do {
      if (puRam00000001136c8920 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8920;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8920,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8920 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8920;
}



/* Entry: 106f9d064; end: 106f9d06f;  */

bool FUN_106f9d064(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106f9d070; end: 106f9d0d7; +[MLBSpecsEvent descriptor] */

void FUN_106f9d070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8928 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d7e0,
                        &PTR____CFConstantStringClassReference_110e90838,&PTR_DAT_113197bf0,
                        0x113197c68,3,0x10,0x1d);
    puRam00000001136c8928 = puVar1;
  }
  return;
}



/* Entry: 106f9d0d8; end: 106f9d13f; +[MLBTaskInfo descriptor] */

void FUN_106f9d0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d830,
                        &PTR____CFConstantStringClassReference_110e90858,&PTR_DAT_113197bf0,
                        &PTR_DAT_113197ce0,4,0x18,0x1c);
    puRam00000001136c8930 = puVar1;
  }
  return;
}



/* Entry: 106f9d140; end: 106f9d1bb; +[MLBSpectaclesPushMessage descriptor] */

undefined * FUN_106f9d140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d880,
                        &PTR____CFConstantStringClassReference_110e90138,&PTR_DAT_113197bf0,
                        0x113197d60,0x25,0xe0,0x1d);
    func_0x00010c2289e0();
    puRam00000001136c8938 = puVar1;
  }
  return puRam00000001136c8938;
}



/* Entry: 106f9d1bc; end: 106f9d237; +[MLBSpectaclesPushMessage_InvalidatedRequest descriptor] */

undefined * FUN_106f9d1bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4d8d0,
                        &PTR____CFConstantStringClassReference_110e90158,&PTR_DAT_113197bf0,
                        &PTR_DAT_113197c08,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c8940 = puVar1;
  }
  return puRam00000001136c8940;
}



/* Entry: 106f9d238; end: 106f9d28b; +[SCSpectaclesNetworkerImpl sharedNetworker] */

void FUN_106f9d238(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c8950 != -1) {
    func_0x00010002a2fc(0x1136c8950,&PTR___NSConcreteGlobalBlock_1109861e8);
  }
  uVar1 = uRam00000001136c8948;
  _objc_retain(uRam00000001136c8948);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f9d28c; end: 106f9d2b7;  */

void FUN_106f9d28c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d37e8;
  _objc_alloc_init();
  uVar1 = puRam00000001136c8948;
  puRam00000001136c8948 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f9d2b8; end: 106f9d4ab; -[SCSpectaclesNetworkerImpl createChannelWithEndpoint:enableBLEImprovements:delegate:] */

void FUN_106f9d2b8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf356e0();
  lVar4 = param_3;
  lVar5 = param_3;
  if (lVar1 == 2) {
    puVar6 = PTR_PTR_1126d3a88;
    _objc_alloc(PTR_PTR_1126d3a88);
    func_0x00010c0d8280(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a54a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c069780(param_3);
    func_0x00010c05a3c0(puVar6,param_2,lVar4,lVar5,lVar1,param_5);
LAB_106f9d464:
    _objc_release(lVar5);
  }
  else {
    if (lVar1 != 1) {
      if (lVar1 != 0) {
        puVar6 = (undefined *)0x0;
        goto LAB_106f9d478;
      }
      puVar6 = PTR_PTR_1126d3a70;
      _objc_alloc(PTR_PTR_1126d3a70);
      func_0x00010bdc0dc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15f900(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c27dd60(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c142f20(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_PTR_1126d3a78;
      _objc_alloc_init(PTR_PTR_1126d3a78);
      func_0x00010c035480(puVar6,param_2,lVar4,lVar5,lVar1,lVar2,param_4,puVar3,param_5);
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_106f9d464;
    }
    puVar6 = PTR_PTR_1126d3a80;
    _objc_alloc(PTR_PTR_1126d3a80);
    func_0x00010bdc0e40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefdc0(puVar6,param_2,lVar4,param_5);
  }
  _objc_release(lVar4);
LAB_106f9d478:
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106f9d4ac; end: 106f9d63b; -[SCSpectaclesBLEChannel initWithPeripheral:serviceUUID:txCharacteristicUUID:rxCharacteristicUUID:enableBLEImprovements:logger:delegate:] */

undefined1 *
FUN_106f9d4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f8148;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 8));
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_9);
    puVar3 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    *(undefined1 *)((long)puVar1 + 0x43) = param_7;
    *(undefined1 *)((long)puVar1 + 0x40) = 1;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9d63c; end: 106f9d67f; -[SCSpectaclesBLEChannel dealloc] */

void FUN_106f9d63c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3d9e0();
  puStack_28 = PTR_PTR_1126f8148;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106f9d680; end: 106f9d6b3; -[SCSpectaclesBLEChannel isOpen] */

bool FUN_106f9d680(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x42) == '\x01') {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c252440(lVar1);
    return lVar1 == 2;
  }
  return false;
}



/* Entry: 106f9d6b4; end: 106f9d743; -[SCSpectaclesBLEChannel open] */

void FUN_106f9d6b4(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    param_1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_30 = *plVar1;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_30,1);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_1;
    func_0x00010bf828e0(uVar2,param_2,param_1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (param_1[0x42] == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_sync_enter(uVar2);
    func_0x00010bf06ae0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    func_0x00010beebb40(param_1);
    _objc_sync_exit(uVar2);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f9d744; end: 106f9d7cf; -[SCSpectaclesBLEChannel writeData:] */

void FUN_106f9d744(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x42) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    _objc_sync_enter(uVar1);
    func_0x00010bf06ae0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
    func_0x00010beebb40(param_1);
    _objc_sync_exit(uVar1);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f9d7d0; end: 106f9d82f; -[SCSpectaclesBLEChannel close] */

void FUN_106f9d7d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x42) = 0;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + 8),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c06a0d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_invalidateLogger_1125f8240);
  return;
}



/* Entry: 106f9d830; end: 106f9daff; -[SCSpectaclesBLEChannel _writeNextPacket] */

void FUN_106f9d830(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f8 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if ((lStack_1f8 != 0) && (*(char *)(param_1 + 0x41) == '\x01')) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c15f960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar12 = *plStack_1a0;
      lStack_1f8 = 0;
      do {
        lVar14 = 0;
        do {
          if (*plStack_1a0 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          lVar4 = *(long *)(lStack_1a8 + lVar14 * 8);
          lStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          plStack_1e0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          func_0x00010bf35a80();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf52a60();
          if (lVar5 != 0) {
            lVar13 = *plStack_1e0;
            do {
              lVar16 = 0;
              do {
                if (*plStack_1e0 != lVar13) {
                  _objc_enumerationMutation(lVar4);
                }
                lVar15 = *(long *)(lStack_1e8 + lVar16 * 8);
                lVar6 = lVar15;
                func_0x00010bdc3540();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010c071ae0();
                _objc_release(lVar6);
                if ((int)lVar7 != 0) {
                  _objc_retain(lVar15);
                  _objc_release(lStack_1f8);
                  lStack_1f8 = lVar15;
                  goto LAB_106f9d9b8;
                }
                lVar16 = lVar16 + 1;
              } while (lVar5 != lVar16);
              lVar5 = lVar4;
              func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
            } while (lVar5 != 0);
          }
LAB_106f9d9b8:
          _objc_release(lVar4);
          lVar14 = lVar14 + 1;
        } while (lVar14 != lVar3);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
      } while (lVar3 != 0);
      _objc_release();
      iVar1 = (int)lVar2;
      if (lStack_1f8 != 0) {
        if ((*(char *)(param_1 + 0x43) == '\x01') && (func_0x00010b6fc238(), iVar1 != 0)) {
          uVar8 = *(ulong *)(param_1 + 8);
          func_0x00010c0c3700(uVar8,param_2,1);
        }
        else {
          uVar8 = 0x14;
        }
        uVar9 = *(ulong *)(param_1 + 0x28);
        func_0x00010c08fa60();
        if (uVar8 <= uVar9) {
          uVar9 = uVar8;
        }
        uVar10 = *(undefined8 *)(param_1 + 0x28);
        func_0x00010c25eac0(uVar10,param_2,0,uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c130ce0(*(undefined8 *)(param_1 + 0x28),param_2,0,uVar9,0,0);
        *(undefined1 *)(param_1 + 0x41) = 0;
        lVar2 = *(long *)(param_1 + 0x30);
        lVar3 = lVar2;
        func_0x00010c0ddd00(lVar2);
        func_0x00010c1ceaa0(lVar2,param_2,lVar3 + uVar9);
        func_0x00010c2be720(*(undefined8 *)(param_1 + 8),param_2,uVar10,lStack_1f8,0);
        _objc_release(uVar10);
        _objc_release(lStack_1f8);
        goto LAB_106f9dac4;
      }
    }
    func_0x00010be9f340(param_1);
    lStack_1f8 = param_1;
  }
LAB_106f9dac4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar3 = lStack_1f8 + 0x48;
    _objc_loadWeakRetained(lVar3);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e78258,2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35540(lVar3,param_2,lStack_1f8,puVar11);
    _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106f9db00; end: 106f9db73; -[SCSpectaclesBLEChannel _sendGenericError] */

void FUN_106f9db00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110e78258,2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf35540(lVar1,param_2,param_1,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f9db74; end: 106f9dd6f; -[SCSpectaclesBLEChannel peripheral:didDiscoverServices:] */

void FUN_106f9db74(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined *unaff_x24;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long unaff_x27;
  long lVar11;
  undefined **unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined **ppuStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == (undefined1 *)0x0) {
    puVar10 = param_3;
    func_0x00010c15f960();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = puVar10;
    func_0x00010bf529e0();
    _objc_release(puVar10);
    if (unaff_x23 == (undefined8 *)0x0) {
      func_0x00010be9f340(param_1);
    }
    else {
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      puVar10 = param_3;
      puStack_148 = param_4;
      func_0x00010c15f960();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = &uStack_140;
      puVar2 = auStack_f0;
      param_5 = (undefined1 *)0x10;
      puVar1 = puVar10;
      func_0x00010bf52a60();
      if (puVar1 != (undefined8 *)0x0) {
        unaff_x27 = *plStack_130;
        unaff_x28 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
        do {
          puVar8 = (undefined8 *)0x0;
          do {
            if (*plStack_130 != unaff_x27) {
              _objc_enumerationMutation(puVar10);
            }
            unaff_x24 = *(undefined **)(lStack_138 + (long)puVar8 * 8);
            unaff_x25 = unaff_x24;
            func_0x00010bdc3540();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = unaff_x25;
            func_0x00010c071ae0();
            _objc_release(unaff_x25);
            if ((int)unaff_x26 != 0) {
              uStack_100 = param_1[3];
              uStack_f8 = param_1[4];
              unaff_x25 = PTR__OBJC_CLASS___NSArray_1126ae530;
              func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_100,2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf814a0(param_3,param_2,unaff_x25,unaff_x24);
              _objc_release(unaff_x25);
            }
            puVar8 = (undefined8 *)((long)puVar8 + 1);
          } while (puVar1 != puVar8);
          puVar8 = &uStack_140;
          puVar2 = auStack_f0;
          param_5 = (undefined1 *)0x10;
          puVar1 = puVar10;
          func_0x00010bf52a60();
          unaff_x23 = (undefined8 *)0x0;
        } while (puVar1 != (undefined8 *)0x0);
      }
      _objc_release(puVar10);
      param_4 = puStack_148;
    }
  }
  else {
    puVar10 = param_1 + 9;
    _objc_loadWeakRetained();
    puVar8 = param_1;
    puVar2 = param_4;
    func_0x00010bf35540();
    _objc_release(puVar10);
  }
  _objc_release(param_4);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_106f9dd70;
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_5;
  ppuStack_1b0 = unaff_x28;
  lStack_1a8 = unaff_x27;
  puStack_1a0 = unaff_x26;
  puStack_198 = unaff_x25;
  puStack_190 = unaff_x24;
  puStack_188 = unaff_x23;
  puStack_180 = puVar10;
  puStack_178 = param_1;
  puStack_170 = param_4;
  puStack_168 = param_3;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar8);
  _objc_retain(param_5);
  if (param_5 == (undefined1 *)0x0) {
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    func_0x00010bf35a80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_240;
    puVar7 = (undefined1 *)0x10;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    if (puVar3 != (undefined1 *)0x0) {
      lVar11 = *plStack_270;
      do {
        puVar7 = (undefined1 *)0x0;
        do {
          if (*plStack_270 != lVar11) {
            _objc_enumerationMutation(puVar2);
          }
          uVar9 = *(undefined8 *)(lStack_278 + (long)puVar7 * 8);
          uVar4 = uVar9;
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c071ae0();
          _objc_release(uVar4);
          if ((int)uVar5 != 0) {
            func_0x00010c1ce840(puVar8,param_2,1,uVar9);
          }
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar9;
          func_0x00010c071ae0();
          _objc_release(uVar9);
          if ((int)uVar4 != 0) {
            puVar10 = (undefined8 *)puVar1[5];
            _objc_retain(puVar10);
            _objc_sync_enter(puVar10);
            if ((*(byte *)((long)puVar1 + 0x42) & 1) == 0) {
              *(undefined2 *)((long)puVar1 + 0x41) = 0x101;
              _objc_sync_exit(puVar10);
              _objc_release(puVar10);
              puVar10 = puVar1 + 9;
              _objc_loadWeakRetained();
              func_0x00010bf35620();
            }
            else {
              _objc_sync_exit(puVar10);
            }
            _objc_release(puVar10);
          }
          puVar7 = puVar7 + 1;
        } while (puVar3 != puVar7);
        puVar6 = auStack_240;
        puVar7 = (undefined1 *)0x10;
        puVar3 = puVar2;
        func_0x00010bf52a60(puVar2,param_2,&uStack_280);
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(puVar2);
  }
  else {
    puVar1 = puVar1 + 9;
    _objc_loadWeakRetained();
    puVar6 = param_5;
    func_0x00010bf35540();
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar7 == (undefined1 *)0x0) {
    puVar2 = puVar6;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c071ae0();
    _objc_release(puVar2);
    if ((int)puVar3 == 0) goto LAB_106f9e050;
    puVar10 = puVar8 + 9;
    _objc_loadWeakRetained(puVar10);
    puVar2 = puVar6;
    func_0x00010c296d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35560(puVar10,param_2,puVar8,puVar2);
    _objc_release(puVar2);
  }
  else {
    puVar10 = puVar8 + 9;
    _objc_loadWeakRetained(puVar10);
    func_0x00010bf35540();
  }
  _objc_release(puVar10);
LAB_106f9e050:
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106f9dd70; end: 106f9df93; -[SCSpectaclesBLEChannel peripheral:didDiscoverCharacteristicsForService:error:] */

void FUN_106f9dd70(long param_1,undefined8 param_2,long param_3,long param_4,undefined1 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
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
  puVar7 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 == (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    func_0x00010bf35a80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = auStack_f0;
    puVar7 = (undefined1 *)0x10;
    lVar1 = param_4;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_4);
          }
          uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar2 = uVar9;
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c071ae0();
          _objc_release(uVar2);
          if ((int)uVar3 != 0) {
            func_0x00010c1ce840(param_3,param_2,1,uVar9);
          }
          func_0x00010bdc3540();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar9;
          func_0x00010c071ae0();
          _objc_release(uVar9);
          if ((int)uVar2 != 0) {
            lVar10 = *(long *)(param_1 + 0x28);
            _objc_retain(lVar10);
            _objc_sync_enter(lVar10);
            if ((*(byte *)(param_1 + 0x42) & 1) == 0) {
              *(undefined2 *)(param_1 + 0x41) = 0x101;
              _objc_sync_exit(lVar10);
              _objc_release(lVar10);
              lVar10 = param_1 + 0x48;
              _objc_loadWeakRetained();
              func_0x00010bf35620();
            }
            else {
              _objc_sync_exit(lVar10);
            }
            _objc_release(lVar10);
          }
          lVar8 = lVar8 + 1;
        } while (lVar1 != lVar8);
        puVar6 = auStack_f0;
        puVar7 = (undefined1 *)0x10;
        lVar1 = param_4;
        func_0x00010bf52a60(param_4,param_2,&uStack_130);
      } while (lVar1 != 0);
    }
    _objc_release(param_4);
  }
  else {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained();
    puVar6 = param_5;
    func_0x00010bf35540();
    _objc_release(param_1);
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar7 == (undefined1 *)0x0) {
    puVar4 = puVar6;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c071ae0();
    _objc_release(puVar4);
    if ((int)puVar5 == 0) goto LAB_106f9e050;
    lVar1 = param_3 + 0x48;
    _objc_loadWeakRetained(lVar1);
    puVar4 = puVar6;
    func_0x00010c296d80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35560(lVar1,param_2,param_3,puVar4);
    _objc_release(puVar4);
  }
  else {
    lVar1 = param_3 + 0x48;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf35540();
  }
  _objc_release(lVar1);
LAB_106f9e050:
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106f9df94; end: 106f9e06f; -[SCSpectaclesBLEChannel peripheral:didUpdateValueForCharacteristic:error:] */

void FUN_106f9df94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar1 = param_4;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106f9e050;
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    uVar1 = param_4;
    func_0x00010c296d80(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf35560(lVar3,param_2,param_1,uVar1);
    _objc_release(uVar1);
  }
  else {
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf35540();
  }
  _objc_release(lVar3);
LAB_106f9e050:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106f9e070; end: 106f9e167; -[SCSpectaclesBLEChannel peripheral:didWriteValueForCharacteristic:error:] */

void FUN_106f9e070(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    uVar1 = param_4;
    func_0x00010bdc3540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c071ae0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) goto LAB_106f9e12c;
    lVar3 = *(long *)(param_1 + 0x28);
    _objc_retain(lVar3);
    _objc_sync_enter(lVar3);
    *(undefined1 *)(param_1 + 0x41) = 1;
    func_0x00010beebb40(param_1);
    _objc_sync_exit(lVar3);
  }
  else {
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf35540();
  }
  _objc_release(lVar3);
LAB_106f9e12c:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f9e168; end: 106f9e203; -[SCSpectaclesBLEChannel peripheral:didReadRSSI:error:] */

void FUN_106f9e168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x48;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf35580();
    _objc_release(param_1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106f9e204; end: 106f9e21b; -[SCSpectaclesBLEChannel delegate] */

void FUN_106f9e204(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f9e21c; end: 106f9e227; -[SCSpectaclesBLEChannel setDelegate:] */

void FUN_106f9e21c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x48,param_3);
  return;
}



/* Entry: 106f9e228; end: 106f9e28f; -[SCSpectaclesBLEChannel .cxx_destruct] */

void FUN_106f9e228(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 106f9e290; end: 106f9e387; -[SCSpectaclesBLEChannelLogger init] */

undefined8 * FUN_106f9e290(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f8150;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[2] = 0;
    puVar1[3] = 0;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x106f9e32c;
    puStack_40 = &UNK_110842e18;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x0001000d76cc("APPSTORE",&puStack_58);
    _objc_release(puStack_38);
  }
  return puVar1;
}



/* Entry: 106f9e388; end: 106f9e38f; -[SCSpectaclesBLEChannelLogger invalidateLogger] */

void FUN_106f9e388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 106f9e390; end: 106f9e397; -[SCSpectaclesBLEChannelLogger _logDataSent] */

void FUN_106f9e390(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 106f9e398; end: 106f9e39f; -[SCSpectaclesBLEChannelLogger numBytesSentWriteWithResponsePerMin] */

undefined8 FUN_106f9e398(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f9e3a0; end: 106f9e3a7; -[SCSpectaclesBLEChannelLogger setNumBytesSentWriteWithResponsePerMin:] */

void FUN_106f9e3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 106f9e3a8; end: 106f9e3af; -[SCSpectaclesBLEChannelLogger numBytesSentWriteWithoutResponsePerMin] */

undefined8 FUN_106f9e3a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106f9e3b0; end: 106f9e3b7; -[SCSpectaclesBLEChannelLogger setNumBytesSentWriteWithoutResponsePerMin:] */

void FUN_106f9e3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 106f9e3b8; end: 106f9e3c3; -[SCSpectaclesBLEChannelLogger .cxx_destruct] */

void FUN_106f9e3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f9e3c4; end: 106f9e47f; +[SCSpectaclesBleAdvertisementUtility isSnapchat:] */

ulong FUN_106f9e3c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_3,param_2,
                      *(undefined8 *)PTR__CBAdvertisementDataManufacturerDataKey_11034ba28);
  _objc_retainAutoreleasedReturnValue();
  if ((param_3 == 0) || (uVar1 = param_3, func_0x00010c08fa60(), uVar1 < 2)) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c25eac0(param_3,param_2,0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d38c8;
    func_0x00010c244260(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c071cc0(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106f9e480; end: 106f9e56b; +[SCSpectaclesBleAdvertisementUtility isSpecificPairingAdvertising:code:] */

undefined8 FUN_106f9e480(int param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class();
  func_0x00010c07eca0();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,
                        *(undefined8 *)PTR__CBAdvertisementDataManufacturerDataKey_11034ba28);
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010c08fa60(), uVar2 < 5)) {
      uVar3 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x00010c25eac0(uVar1,param_2,2,3);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010c071cc0(param_4,param_2,uVar2);
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 106f9e56c; end: 106f9e5b7; +[SCSpectaclesBleAdvertisementUtility isConnectable:] */

undefined8 FUN_106f9e56c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)PTR__CBAdvertisementDataIsConnectable_11034ba20
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf1f3c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106f9e5b8; end: 106f9e6ab; +[SCSpectaclesBleAdvertisementUtility containsProtoService:] */

ulong FUN_106f9e5b8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)PTR__CBAdvertisementDataServiceUUIDsKey_11034ba30;
  uVar1 = param_3;
  func_0x00010c0e00e0(param_3,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d38c8;
  func_0x00010c0b7ca0(PTR_PTR_1126d38c8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf4b900(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if ((uVar4 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0e00e0(param_3,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126d38c8;
    func_0x00010c087ca0(PTR_PTR_1126d38c8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010bf4b900(uVar1,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  else {
    uVar4 = 1;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106f9e6ac; end: 106f9e71b; +[SCSpectaclesBleAdvertisementUtility shouldFilterRSSI:minimum:] */

bool FUN_106f9e6ac(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  
  _objc_retain(param_3);
  if (param_4 == -0x80000000) {
    bVar2 = false;
  }
  else {
    lVar1 = param_3;
    func_0x00010c067fc0();
    if (lVar1 < param_4) {
      bVar2 = true;
    }
    else {
      lVar1 = param_3;
      func_0x00010c067fc0(param_3);
      bVar2 = 0 < lVar1;
    }
  }
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 106f9e71c; end: 106f9e72f; +[SCSpectaclesBleConstants lagunaServiceUUID] */

void FUN_106f9e71c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CBUUID_1126d3a90,PTR_s_UUIDWithString__11254e710,
             &PTR____CFConstantStringClassReference_110e90878);
  return;
}



/* Entry: 106f9e730; end: 106f9e743; +[SCSpectaclesBleConstants lagunaTxCharacteristicUUID] */

void FUN_106f9e730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CBUUID_1126d3a90,PTR_s_UUIDWithString__11254e710,
             &PTR____CFConstantStringClassReference_110e90898);
  return;
}



/* Entry: 106f9e744; end: 106f9e757; +[SCSpectaclesBleConstants lagunaRxCharacteristicUUID] */

void FUN_106f9e744(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CBUUID_1126d3a90,PTR_s_UUIDWithString__11254e710,
             &PTR____CFConstantStringClassReference_110e908b8);
  return;
}



/* Entry: 106f9e758; end: 106f9e76b; +[SCSpectaclesBleConstants malibuServiceUUID] */

void FUN_106f9e758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CBUUID_1126d3a90,PTR_s_UUIDWithString__11254e710,
             &PTR____CFConstantStringClassReference_110e908d8);
  return;
}



/* Entry: 106f9e76c; end: 106f9e77f; +[SCSpectaclesBleConstants malibuTxCharacteristicUUID] */

void FUN_106f9e76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CBUUID_1126d3a90,PTR_s_UUIDWithString__11254e710,
             &PTR____CFConstantStringClassReference_110e908f8);
  return;
}



/* Entry: 106f9e780; end: 106f9e793; +[SCSpectaclesBleConstants malibuRxCharacteristicUUID] */

void FUN_106f9e780(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___CBUUID_1126d3a90,PTR_s_UUIDWithString__11254e710,
             &PTR____CFConstantStringClassReference_110e90918);
  return;
}



/* Entry: 106f9e794; end: 106f9e7e7; +[SCSpectaclesBleConstants snapchatVendorID] */

void FUN_106f9e794(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c8958 != -1) {
    func_0x00010002a2fc(0x1136c8958,&PTR___NSConcreteGlobalBlock_110986208);
  }
  uVar1 = uRam00000001136c8960;
  _objc_retain(uRam00000001136c8960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f9e7e8; end: 106f9e837;  */

void FUN_106f9e7e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined2 uStack_12;
  
  uStack_12 = 0x3c2;
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf64a00(PTR__OBJC_CLASS___NSData_1126ae778,param_2,&uStack_12,2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136c8960;
  puRam00000001136c8960 = puVar2;
  _objc_release(uVar1);
  return;
}



/* Entry: 106f9e838; end: 106f9e8e3; -[SCSpectaclesBleMonitor initWithCentralManager:delegate:] */

undefined1 *
FUN_106f9e838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8158;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + 0x20));
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9e8e4; end: 106f9e9f3; -[SCSpectaclesBleMonitor setupWithConnectedPeripheral:] */

void FUN_106f9e8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bf34940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f9e9f4; end: 106f9eabb;  */

void FUN_106f9e9f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c252440();
  if (lVar2 == 2) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bfe5ec0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99e0(lVar1,param_2,uVar3);
    _objc_release(uVar3);
    func_0x00010c1daac0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
    func_0x00010c209fc0(lVar1,param_2,4);
    func_0x00010c250480(lVar1);
  }
  else {
    func_0x00010c209fc0(lVar1,param_2,0);
    lVar2 = lVar1;
    func_0x00010bf6b020(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1cac0();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f9eabc; end: 106f9ebcb; -[SCSpectaclesBleMonitor connectPeripheralWithIdentifier:] */

void FUN_106f9eabc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bf34940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 106f9ebcc; end: 106f9ec13;  */

void FUN_106f9ebcc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1a99e0();
  func_0x00010c1daac0(param_1,param_2,0);
  func_0x00010be96a60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f9ec14; end: 106f9ecfb; -[SCSpectaclesBleMonitor cancelBleConnection] */

void FUN_106f9ec14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bf34940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0f98a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106f9ecfc; end: 106f9eda7;  */

void FUN_106f9ecfc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    uVar3 = 5;
  }
  else {
    if (1 < lVar1 - 1U) goto LAB_106f9ed94;
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f99c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1cac0(lVar1,param_2,param_1,lVar2,0);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = 0;
  }
  func_0x00010becf280(param_1,param_2,uVar3);
LAB_106f9ed94:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f9eda8; end: 106f9efcf; -[SCSpectaclesBleMonitor _transitionToState:] */

/* WARNING: Possible PIC construction at 0x000106f9f2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106f9f26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f9f2b4) */

void FUN_106f9eda8(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c252440();
  if (param_3 == puVar1) {
LAB_106f9ede0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  else {
    func_0x00010c209fc0(param_1);
    puVar1 = param_1;
    func_0x00010c252440();
    if ((long)puVar1 < 4) {
      if (puVar1 != (undefined *)0x0) {
        if (puVar1 == (undefined *)0x3) {
          puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010bf34940();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0f99c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf482e0(puVar2);
          _objc_release(param_1);
          _objc_release(puVar2);
          _objc_release();
        }
        goto LAB_106f9ede0;
      }
      func_0x00010c1daac0(param_1);
      puVar1 = param_1;
      func_0x00010c1a99e0();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bec3870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopRssiUpdates_11258e7c0);
        return;
      }
    }
    else {
      puVar2 = param_1;
      if (puVar1 == (undefined *)0x4) {
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f99c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1caa0(puVar2);
      }
      else {
        if (puVar1 != (undefined *)0x5) goto LAB_106f9ede0;
        func_0x00010bf34940();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f99c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2ea00(puVar2);
      }
      _objc_release();
      puVar1 = param_1;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) goto code_r0x00010bdbf3e4;
    }
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  func_0x00010bf34940();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c252440();
  _objc_release();
  if (puVar2 == (undefined *)0x5) {
    puVar2 = puVar1;
    func_0x00010bf34940();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c13ed20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf529e0();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1cac0();
      _objc_release(puVar2);
LAB_106f9f234:
      func_0x00010c209fc0(puVar1);
    }
    else {
      puVar2 = puVar3;
      func_0x00010c0dfd40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1daac0(puVar1);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010bf6b020(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c0f99c0(puVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1cae0(puVar2);
      _objc_release(puVar4);
      _objc_release(puVar2);
      puVar2 = puVar1;
      func_0x00010c0f99c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c252440();
      _objc_release(puVar2);
      if ((long)puVar4 < 2) {
        if (puVar4 == (undefined *)0x0) {
          uVar7 = 3;
          goto code_r0x00010becf280;
        }
        if (puVar4 == (undefined *)0x1) {
          puVar2 = puVar1;
          func_0x00010bf34940();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010bfe39e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010c0f99c0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar4;
          func_0x00010bf4b900();
          _objc_release(puVar5);
          _objc_release(puVar4);
          _objc_release(puVar2);
          if (((ulong)puVar6 & 1) == 0) {
            uVar7 = 2;
            goto code_r0x00010becf280;
          }
          goto LAB_106f9f234;
        }
      }
      else {
        if (puVar4 == (undefined *)0x2) {
          uVar7 = 5;
code_r0x00010becf280:
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s__transitionToState__112591648,uVar7);
          return;
        }
        if (puVar4 == (undefined *)0x3) {
          uVar7 = 2;
          goto code_r0x00010becf280;
        }
      }
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    uVar7 = 1;
    goto code_r0x00010becf280;
  }
  ___stack_chk_fail();
  puVar1 = puVar3;
  func_0x00010c142460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  func_0x00010be9fd00(puVar3);
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x4014000000000000,PTR_PTR_1126bc890);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eebc0(puVar3);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f9efd0; end: 106f9f2ff; -[SCSpectaclesBleMonitor _retrievePeripheralAndReconnect] */

/* WARNING: Possible PIC construction at 0x000106f9f2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000106f9f26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106f9f2b4) */

void FUN_106f9efd0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf34940();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c252440();
  _objc_release();
  if (uVar2 != 5) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      uVar7 = 1;
      goto code_r0x00010becf280;
    }
    goto LAB_106f9f2fc;
  }
  uVar2 = param_1;
  func_0x00010bf34940();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c13ed20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf529e0();
  if (uVar2 == 0) {
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1cac0();
    _objc_release(uVar2);
LAB_106f9f234:
    func_0x00010c209fc0(param_1);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0dfd40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1daac0(param_1);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c0f99c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1cae0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_1;
    func_0x00010c0f99c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c252440();
    _objc_release(uVar2);
    if ((long)uVar3 < 2) {
      if (uVar3 == 0) {
        uVar7 = 3;
        goto code_r0x00010becf280;
      }
      if (uVar3 == 1) {
        uVar2 = param_1;
        func_0x00010bf34940();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bfe39e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_1;
        func_0x00010c0f99c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar3;
        func_0x00010bf4b900();
        _objc_release(uVar5);
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar6 & 1) == 0) {
          uVar7 = 2;
          goto code_r0x00010becf280;
        }
        goto LAB_106f9f234;
      }
    }
    else {
      if (uVar3 == 2) {
        uVar7 = 5;
code_r0x00010becf280:
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,uVar7);
        return;
      }
      if (uVar3 == 3) {
        uVar7 = 2;
        goto code_r0x00010becf280;
      }
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
LAB_106f9f2fc:
  ___stack_chk_fail();
  uVar2 = uVar1;
  func_0x00010c142460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 == 0) {
    func_0x00010be9fd00(uVar1);
    puVar4 = PTR_PTR_1126bc890;
    func_0x00010c150380(0x4014000000000000,PTR_PTR_1126bc890);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eebc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 106f9f300; end: 106f9f383; -[SCSpectaclesBleMonitor startRssiUpdates] */

void FUN_106f9f300(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c142460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  func_0x00010be9fd00(param_1);
  puVar2 = PTR_PTR_1126bc890;
  func_0x00010c150380(0x4014000000000000,PTR_PTR_1126bc890,param_2,param_1,
                      PTR_s__sendReadRSSI_1125858e8,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eebc0(param_1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106f9f384; end: 106f9f38b; -[SCSpectaclesBleMonitor _stopRssiUpdates] */

void FUN_106f9f384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eebd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRssiTimer__112659518,0);
  return;
}



/* Entry: 106f9f38c; end: 106f9f40b; -[SCSpectaclesBleMonitor _sendReadRSSI] */

void FUN_106f9f38c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae520;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf07b60();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x2) {
    return;
  }
  func_0x00010c0f99c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1217e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f9f40c; end: 106f9f517; -[SCSpectaclesBleMonitor centralManagerDidUpdateState:] */

void FUN_106f9f40c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bf34940();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c252440();
    _objc_release(lVar1);
    if (lVar2 == 5) {
                    /* WARNING: Could not recover jumptable at 0x00010be96a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (param_1,PTR_s__retrievePeripheralAndReconnect_112583438);
      return;
    }
  }
  else {
    lVar1 = param_1;
    func_0x00010c252440();
    if (lVar1 != 0) {
      lVar1 = param_1;
      func_0x00010bf34940();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c252440();
      _objc_release(lVar1);
      if (lVar2 != 5) {
        lVar1 = param_1;
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_1;
        func_0x00010c0f99c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1cac0(lVar1);
        _objc_release(lVar2);
        _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,0);
        return;
      }
    }
  }
  return;
}



/* Entry: 106f9f518; end: 106f9f59b; -[SCSpectaclesBleMonitor centralManager:didConnectPeripheral:] */

void FUN_106f9f518(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if ((param_4 == lVar1) && (lVar1 = param_1, func_0x00010c252440(), lVar1 == 3)) {
                    /* WARNING: Could not recover jumptable at 0x00010becf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__transitionToState__112591648,4);
    return;
  }
  return;
}



/* Entry: 106f9f59c; end: 106f9f67b; -[SCSpectaclesBleMonitor centralManager:didFailToConnectPeripheral:error:] */

void FUN_106f9f59c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (param_4 == lVar1) {
    func_0x00010c1b8500(param_1,param_2,param_5);
    lVar1 = param_1;
    func_0x00010c252440();
    if (lVar1 == 3) {
      lVar1 = param_1;
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c0f99c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1cac0(lVar1,param_2,param_1,lVar2,2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010becf280(param_1,param_2,0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106f9f67c; end: 106f9f78b; -[SCSpectaclesBleMonitor centralManager:didDisconnectPeripheral:error:] */

void FUN_106f9f67c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c0f99c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  if (param_4 != lVar1) goto LAB_106f9f774;
  func_0x00010c1b8500(param_1,param_2,param_5);
  lVar1 = param_1;
  func_0x00010c252440();
  if (lVar1 - 3U < 2) {
    uVar3 = 2;
LAB_106f9f714:
    lVar1 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c0f99c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1cac0(lVar1,param_2,param_1,lVar2,uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    uVar3 = 0;
  }
  else {
    if (lVar1 != 2) {
      if (lVar1 != 5) goto LAB_106f9f774;
      uVar3 = 0;
      goto LAB_106f9f714;
    }
    uVar3 = 3;
  }
  func_0x00010becf280(param_1,param_2,uVar3);
LAB_106f9f774:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106f9f78c; end: 106f9f793; -[SCSpectaclesBleMonitor peripheral] */

undefined8 FUN_106f9f78c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106f9f794; end: 106f9f7c3; -[SCSpectaclesBleMonitor setPeripheral:] */

void FUN_106f9f794(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 106f9f7c4; end: 106f9f7cb; -[SCSpectaclesBleMonitor lastPeripheralError] */

undefined8 FUN_106f9f7c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106f9f7cc; end: 106f9f7fb; -[SCSpectaclesBleMonitor setLastPeripheralError:] */

void FUN_106f9f7cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f9f7fc; end: 106f9f813; -[SCSpectaclesBleMonitor delegate] */

void FUN_106f9f7fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f9f814; end: 106f9f81f; -[SCSpectaclesBleMonitor setDelegate:] */

void FUN_106f9f814(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 106f9f820; end: 106f9f827; -[SCSpectaclesBleMonitor centralManager] */

undefined8 FUN_106f9f820(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106f9f828; end: 106f9f857; -[SCSpectaclesBleMonitor setCentralManager:] */

void FUN_106f9f828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f9f858; end: 106f9f85f; -[SCSpectaclesBleMonitor state] */

undefined8 FUN_106f9f858(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106f9f860; end: 106f9f867; -[SCSpectaclesBleMonitor setState:] */

void FUN_106f9f860(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 106f9f868; end: 106f9f86f; -[SCSpectaclesBleMonitor identifier] */

undefined8 FUN_106f9f868(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106f9f870; end: 106f9f877; -[SCSpectaclesBleMonitor setIdentifier:] */

void FUN_106f9f870(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f9f878; end: 106f9f87f; -[SCSpectaclesBleMonitor rssiTimer] */

undefined8 FUN_106f9f878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106f9f880; end: 106f9f8af; -[SCSpectaclesBleMonitor setRssiTimer:] */

void FUN_106f9f880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


