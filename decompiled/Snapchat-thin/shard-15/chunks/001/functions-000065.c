/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7ec6bc; end: 10b7ec70f;  */

undefined8 FUN_10b7ec6bc(int param_1)

{
  if (param_1 < 300) {
    if (((4 < param_1 - 100U) && (2 < param_1 - 200U)) && (param_1 != 0)) {
      return 0;
    }
  }
  else if ((6 < param_1 - 400U) && (1 < param_1 - 300U)) {
    return 0;
  }
  return 1;
}



/* Entry: 10b7ec710; end: 10b7ec78b;  */

undefined * FUN_10b7ec710(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb180 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88558,
                        &UNK_10e5e8e0c,&UNK_10e5e8e2c,2,FUN_10b7ec78c,0);
    do {
      if (puRam00000001137fb180 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb180;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb180,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb180 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb180;
}



/* Entry: 10b7ec78c; end: 10b7ec797;  */

bool FUN_10b7ec78c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ec798; end: 10b7ec813;  */

undefined * FUN_10b7ec798(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb188 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88578,
                        &UNK_10e5e8e34,&UNK_10e5e8f3c,10,FUN_10b7ec814,0);
    do {
      if (puRam00000001137fb188 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb188;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb188,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb188 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb188;
}



/* Entry: 10b7ec814; end: 10b7ec81f;  */

bool FUN_10b7ec814(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7ec820; end: 10b7ec89b;  */

undefined * FUN_10b7ec820(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb190 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88598,
                        &UNK_10e5e8f64,&UNK_10e5e9040,10,FUN_10b7ec89c,0);
    do {
      if (puRam00000001137fb190 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb190;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb190,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb190 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb190;
}



/* Entry: 10b7ec89c; end: 10b7ec8a7;  */

bool FUN_10b7ec89c(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7ec8a8; end: 10b7ec923;  */

undefined * FUN_10b7ec8a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb198 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f885b8,
                        &UNK_10e5e9068,&UNK_10e5e9080,1,FUN_10b7ec924,0);
    do {
      if (puRam00000001137fb198 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb198;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb198,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb198 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb198;
}



/* Entry: 10b7ec924; end: 10b7ec92f;  */

bool FUN_10b7ec924(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10b7ec930; end: 10b7ec9ab;  */

undefined * FUN_10b7ec930(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb1a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f885d8,
                        &UNK_10e5e9084,&UNK_10e5e909c,1,FUN_10b7ec9ac,0);
    do {
      if (puRam00000001137fb1a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb1a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb1a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb1a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb1a0;
}



/* Entry: 10b7ec9ac; end: 10b7ec9b7;  */

bool FUN_10b7ec9ac(int param_1)

{
  return param_1 == 0;
}



/* Entry: 10b7ec9b8; end: 10b7eca1f; +[Breadcrumbs descriptor] */

void FUN_10b7ec9b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf4a0,
                        &PTR____CFConstantStringClassReference_110f885f8,&PTR_DAT_1133f3fc8,
                        &PTR_DAT_1133f3fe0,2,0x18,0x1c);
    puRam00000001137fb1a8 = puVar1;
  }
  return;
}



/* Entry: 10b7eca20; end: 10b7ecaab; +[Breadcrumb descriptor] */

undefined * FUN_10b7eca20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf540,
                        &PTR____CFConstantStringClassReference_110f88618,&PTR_DAT_1133f4030,
                        &PTR_s_event_1133f4048,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137fb1b0 = puVar1;
  }
  return puRam00000001137fb1b0;
}



/* Entry: 10b7ecaac; end: 10b7ecb27;  */

undefined * FUN_10b7ecaac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb1b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e21078,
                        &UNK_10e5e90a0,&UNK_10e5e9104,10,FUN_10b7ecb28,0);
    do {
      if (puRam00000001137fb1b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb1b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb1b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb1b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb1b8;
}



/* Entry: 10b7ecb28; end: 10b7ecb33;  */

bool FUN_10b7ecb28(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7ecb34; end: 10b7ecb9b; +[LensUIActionContext descriptor] */

void FUN_10b7ecb34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf630,
                        &PTR____CFConstantStringClassReference_110f88638,&PTR_DAT_1133f4108,
                        &PTR_s_camera_1133f4160,3,0x20,0x1c);
    puRam00000001137fb1c0 = puVar1;
  }
  return;
}



/* Entry: 10b7ecb9c; end: 10b7ecc03; +[LensUIAction descriptor] */

void FUN_10b7ecb9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf680,
                        &PTR____CFConstantStringClassReference_110f88658,&PTR_DAT_1133f4108,
                        &PTR_DAT_1133f4120,2,0x18,0x1c);
    puRam00000001137fb1c8 = puVar1;
  }
  return;
}



/* Entry: 10b7ecc04; end: 10b7ecc6b; +[SCComposerOptionalUInt32 descriptor] */

void FUN_10b7ecc04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf720,
                        &PTR____CFConstantStringClassReference_110f88678,&PTR_DAT_1133f41c0,
                        &PTR_s_value_1133f41d8,1,8,0x1c);
    puRam00000001137fb1d0 = puVar1;
  }
  return;
}



/* Entry: 10b7ecc6c; end: 10b7eccd3; +[SCComposerComposerDynamicDeliveryConfigVersion descriptor] */

void FUN_10b7ecc6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf770,
                        &PTR____CFConstantStringClassReference_110f88698,&PTR_DAT_1133f41c0,
                        &PTR_DAT_1133f42d8,5,0x20,0x1c);
    puRam00000001137fb1d8 = puVar1;
  }
  return;
}



/* Entry: 10b7eccd4; end: 10b7ecd4f; +[SCComposerComposerDynamicDeliveryConfig descriptor] */

undefined * FUN_10b7eccd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf7c0,
                        &PTR____CFConstantStringClassReference_110f886b8,&PTR_DAT_1133f41c0,
                        &PTR_s_URL_1133f4258,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fb1e0 = puVar1;
  }
  return puRam00000001137fb1e0;
}



/* Entry: 10b7ecd50; end: 10b7ecdb7; +[SCComposerComposerDynamicDeliveryCrashReportMetadata descriptor] */

void FUN_10b7ecd50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb1e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdf810,
                        &PTR____CFConstantStringClassReference_110f886d8,&PTR_DAT_1133f41c0,
                        &PTR_DAT_1133f41f8,3,0x18,0x1c);
    puRam00000001137fb1e8 = puVar1;
  }
  return;
}



/* Entry: 10b7ecdb8; end: 10b7ece0b;  */

bool FUN_10b7ecdb8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7ece0c; end: 10b7ece87;  */

undefined * FUN_10b7ece0c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb248 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88858,
                        &UNK_10e5e9758,&UNK_10e5e97b4,7,FUN_10b7ece88,0);
    do {
      if (puRam00000001137fb248 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb248;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb248,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb248 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb248;
}



/* Entry: 10b7ece88; end: 10b7ece93;  */

bool FUN_10b7ece88(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7ece94; end: 10b7ecf0f;  */

undefined * FUN_10b7ece94(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb250 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88878,
                        &UNK_10e5e97d0,&UNK_10e5e985c,0xd,FUN_10b7ecf10,0);
    do {
      if (puRam00000001137fb250 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb250;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb250,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb250 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb250;
}



/* Entry: 10b7ecf10; end: 10b7ecf1b;  */

bool FUN_10b7ecf10(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10b7ecf1c; end: 10b7ecf97;  */

undefined * FUN_10b7ecf1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb258 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88898,
                        &UNK_10e5e9890,&UNK_10e5e98b8,3,FUN_10b7ecf98,0);
    do {
      if (puRam00000001137fb258 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb258;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb258,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb258 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb258;
}



/* Entry: 10b7ecf98; end: 10b7ecfa3;  */

bool FUN_10b7ecf98(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7ecfa4; end: 10b7ed01f;  */

undefined * FUN_10b7ecfa4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb260 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f888b8,
                        &UNK_10e5e98c4,&UNK_10e5e9934,9,FUN_10b7ed020,0);
    do {
      if (puRam00000001137fb260 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb260;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb260,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb260 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb260;
}



/* Entry: 10b7ed020; end: 10b7ed02b;  */

bool FUN_10b7ed020(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7ed02c; end: 10b7ed0a7;  */

undefined * FUN_10b7ed02c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb268 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f888d8,
                        &UNK_10e5e9958,&UNK_10e5e99a8,7,FUN_10b7ed0a8,0);
    do {
      if (puRam00000001137fb268 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb268;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb268,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb268 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb268;
}



/* Entry: 10b7ed0a8; end: 10b7ed0b3;  */

bool FUN_10b7ed0a8(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7ed0b4; end: 10b7ed12f;  */

undefined * FUN_10b7ed0b4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb270 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f888f8,
                        &UNK_10e5e99c4,&UNK_10e5e9a88,0xc,FUN_10b7ed130,0);
    do {
      if (puRam00000001137fb270 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb270;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb270,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb270 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb270;
}



/* Entry: 10b7ed130; end: 10b7ed13b;  */

bool FUN_10b7ed130(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7ed13c; end: 10b7ed1b7;  */

undefined * FUN_10b7ed13c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb278 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88918,
                        &UNK_10e5e9ab8,&UNK_10e5e9b40,0xe,FUN_10b7ed1b8,0);
    do {
      if (puRam00000001137fb278 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb278;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb278,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb278 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb278;
}



/* Entry: 10b7ed1b8; end: 10b7ed1c3;  */

bool FUN_10b7ed1b8(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b7ed1c4; end: 10b7ed23f;  */

undefined * FUN_10b7ed1c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb280 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88938,
                        &UNK_10e5e9b78,&UNK_10e5e9b8c,2,FUN_10b7ed240,0);
    do {
      if (puRam00000001137fb280 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb280;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb280,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb280 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb280;
}



/* Entry: 10b7ed240; end: 10b7ed24b;  */

bool FUN_10b7ed240(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ed24c; end: 10b7ed2c7;  */

undefined * FUN_10b7ed24c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb288 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88958,
                        &UNK_10e5e9b94,&UNK_10e5e9ba8,2,FUN_10b7ed2c8,0);
    do {
      if (puRam00000001137fb288 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb288;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb288,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb288 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb288;
}



/* Entry: 10b7ed2c8; end: 10b7ed2d3;  */

bool FUN_10b7ed2c8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ed2d4; end: 10b7ed34f;  */

undefined * FUN_10b7ed2d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb290 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88978,
                        &UNK_10e5e9bb0,&UNK_10e5e9c10,7,FUN_10b7ed350,0);
    do {
      if (puRam00000001137fb290 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb290;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb290,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb290 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb290;
}



/* Entry: 10b7ed350; end: 10b7ed35b;  */

bool FUN_10b7ed350(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7ed35c; end: 10b7ed3d7;  */

undefined * FUN_10b7ed35c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb298 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88998,
                        &UNK_10e5e9c2c,&UNK_10e5e9d88,0x16,FUN_10b7ed3d8,0);
    do {
      if (puRam00000001137fb298 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb298;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb298,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb298 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb298;
}



/* Entry: 10b7ed3d8; end: 10b7ed3e3;  */

bool FUN_10b7ed3d8(uint param_1)

{
  return param_1 < 0x16;
}



/* Entry: 10b7ed3e4; end: 10b7ed45f;  */

undefined * FUN_10b7ed3e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f889b8,
                        &UNK_10e5e9de0,&UNK_10e5e9e24,9,FUN_10b7ed460,0);
    do {
      if (puRam00000001137fb2a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2a0;
}



/* Entry: 10b7ed460; end: 10b7ed46b;  */

bool FUN_10b7ed460(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7ed46c; end: 10b7ed4e7;  */

undefined * FUN_10b7ed46c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f889d8,
                        &UNK_10e5e9e48,&UNK_10e5e9ee8,0xe,FUN_10b7ed4e8,0);
    do {
      if (puRam00000001137fb2a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2a8;
}



/* Entry: 10b7ed4e8; end: 10b7ed4f3;  */

bool FUN_10b7ed4e8(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10b7ed4f4; end: 10b7ed56f;  */

undefined * FUN_10b7ed4f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f889f8,
                        &UNK_10e5e9f20,&UNK_10e5e9fa0,0xc,FUN_10b7ed570,0);
    do {
      if (puRam00000001137fb2b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2b0;
}



/* Entry: 10b7ed570; end: 10b7ed57b;  */

bool FUN_10b7ed570(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7ed57c; end: 10b7ed5f7;  */

undefined * FUN_10b7ed57c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88a18,
                        &UNK_10e5e9fd0,&UNK_10e5ea00c,7,FUN_10b7ed5f8,0);
    do {
      if (puRam00000001137fb2b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2b8;
}



/* Entry: 10b7ed5f8; end: 10b7ed603;  */

bool FUN_10b7ed5f8(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7ed604; end: 10b7ed67f;  */

undefined * FUN_10b7ed604(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88a38,
                        &UNK_10e5ea028,&UNK_10e5ea064,7,FUN_10b7ed680,0);
    do {
      if (puRam00000001137fb2c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2c0;
}



/* Entry: 10b7ed680; end: 10b7ed68b;  */

bool FUN_10b7ed680(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7ed68c; end: 10b7ed707;  */

undefined * FUN_10b7ed68c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88a58,
                        &UNK_10e5ea080,&UNK_10e5ea0cc,8,FUN_10b7ed708,0);
    do {
      if (puRam00000001137fb2c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2c8;
}



/* Entry: 10b7ed708; end: 10b7ed713;  */

bool FUN_10b7ed708(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7ed714; end: 10b7ed78f;  */

undefined * FUN_10b7ed714(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88a78,
                        &UNK_10e5ea0ec,&UNK_10e5ea110,2,FUN_10b7ed790,0);
    do {
      if (puRam00000001137fb2d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2d0;
}



/* Entry: 10b7ed790; end: 10b7ed79b;  */

bool FUN_10b7ed790(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7ed79c; end: 10b7ed817;  */

undefined * FUN_10b7ed79c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88a98,
                        &UNK_10e5ea118,&UNK_10e5ea17c,9,FUN_10b7ed818,0);
    do {
      if (puRam00000001137fb2d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2d8;
}



/* Entry: 10b7ed818; end: 10b7ed823;  */

bool FUN_10b7ed818(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7ed824; end: 10b7ed89f;  */

undefined * FUN_10b7ed824(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88ab8,
                        &UNK_10e5ea1a0,&UNK_10e5ea1c8,5,FUN_10b7ed8a0,0);
    do {
      if (puRam00000001137fb2e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2e0;
}



/* Entry: 10b7ed8a0; end: 10b7ed8ab;  */

bool FUN_10b7ed8a0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7ed8ac; end: 10b7ed927;  */

undefined * FUN_10b7ed8ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88ad8,
                        &UNK_10e5ea1dc,&UNK_10e5ea214,6,FUN_10b7ed928,0);
    do {
      if (puRam00000001137fb2e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2e8;
}



/* Entry: 10b7ed928; end: 10b7ed933;  */

bool FUN_10b7ed928(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7ed934; end: 10b7ed9af;  */

undefined * FUN_10b7ed934(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88af8,
                        &UNK_10e5ea22c,&UNK_10e5ea2c0,0xc,FUN_10b7ed9b0,0);
    do {
      if (puRam00000001137fb2f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2f0;
}



/* Entry: 10b7ed9b0; end: 10b7ed9bb;  */

bool FUN_10b7ed9b0(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7ed9bc; end: 10b7eda37;  */

undefined * FUN_10b7ed9bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb2f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88b18,
                        &UNK_10e5ea2f0,&UNK_10e5ea360,0xc,FUN_10b7eda38,0);
    do {
      if (puRam00000001137fb2f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb2f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb2f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb2f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb2f8;
}



/* Entry: 10b7eda38; end: 10b7eda43;  */

bool FUN_10b7eda38(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7eda44; end: 10b7edabf;  */

undefined * FUN_10b7eda44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb300 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88b38,
                        &UNK_10e5ea390,&UNK_10e5ea3f0,7,FUN_10b7edac0,0);
    do {
      if (puRam00000001137fb300 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb300;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb300,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb300 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb300;
}



/* Entry: 10b7edac0; end: 10b7edacb;  */

bool FUN_10b7edac0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b7edacc; end: 10b7edb47;  */

undefined * FUN_10b7edacc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb308 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88b58,
                        &UNK_10e5ea40c,&UNK_10e5ea434,3,FUN_10b7edb48,0);
    do {
      if (puRam00000001137fb308 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb308;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb308,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb308 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb308;
}



/* Entry: 10b7edb48; end: 10b7edb53;  */

bool FUN_10b7edb48(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7edb54; end: 10b7edbcf;  */

undefined * FUN_10b7edb54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb310 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88b78,
                        &UNK_10e5ea440,&UNK_10e5ea4b4,0xc,FUN_10b7edbd0,0);
    do {
      if (puRam00000001137fb310 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb310;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb310,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb310 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb310;
}



/* Entry: 10b7edbd0; end: 10b7edbdb;  */

bool FUN_10b7edbd0(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7edbdc; end: 10b7edc57;  */

undefined * FUN_10b7edbdc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb318 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88b98,
                        &UNK_10e5ea4e4,&UNK_10e5ea5bc,0x10,FUN_10b7edc58,0);
    do {
      if (puRam00000001137fb318 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb318;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb318,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb318 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb318;
}



/* Entry: 10b7edc58; end: 10b7edc63;  */

bool FUN_10b7edc58(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10b7edc64; end: 10b7edcdf;  */

undefined * FUN_10b7edc64(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb320 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88bb8,
                        &UNK_10e5ea5fc,&UNK_10e5ea620,3,FUN_10b7edce0,0);
    do {
      if (puRam00000001137fb320 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb320;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb320,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb320 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb320;
}



/* Entry: 10b7edce0; end: 10b7edceb;  */

bool FUN_10b7edce0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7edcec; end: 10b7edd67;  */

undefined * FUN_10b7edcec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb328 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88bd8,
                        &UNK_10e5ea62c,&UNK_10e5ea64c,5,FUN_10b7edd68,0);
    do {
      if (puRam00000001137fb328 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb328;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb328,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb328 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb328;
}



/* Entry: 10b7edd68; end: 10b7edd73;  */

bool FUN_10b7edd68(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7edd74; end: 10b7eddef;  */

undefined * FUN_10b7edd74(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb330 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88bf8,
                        &UNK_10e5ea660,&UNK_10e5ea674,2,FUN_10b7eddf0,0);
    do {
      if (puRam00000001137fb330 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb330;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb330,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb330 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb330;
}



/* Entry: 10b7eddf0; end: 10b7eddfb;  */

bool FUN_10b7eddf0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7eddfc; end: 10b7ede77;  */

undefined * FUN_10b7eddfc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb338 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f88c18,
                        &UNK_10e5ea67c,&UNK_10e5ea69c,4,FUN_10b7ede78,0);
    do {
      if (puRam00000001137fb338 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb338;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb338,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb338 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb338;
}



/* Entry: 10b7ede78; end: 10b7ede83;  */

bool FUN_10b7ede78(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7ede84; end: 10b7edf13; +[SCShakeToReportFeature descriptor] */

undefined * FUN_10b7ede84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfc70,
                        &PTR____CFConstantStringClassReference_110e32f78,&PTR_DAT_1133f5138,
                        &PTR_DAT_1133f4470,0x66,0x338,0x1c);
    func_0x00010c229040();
    puRam00000001137fb340 = puVar1;
  }
  return puRam00000001137fb340;
}



/* Entry: 10b7edf14; end: 10b7edf7b; +[SCShakeToReportShakeToReport descriptor] */

void FUN_10b7edf14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfcc0,
                        &PTR____CFConstantStringClassReference_110f88c38,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb348 = puVar1;
  }
  return;
}



/* Entry: 10b7edf7c; end: 10b7edfe3; +[SCShakeToReportAds descriptor] */

void FUN_10b7edf7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfd10,
                        &PTR____CFConstantStringClassReference_110e6a018,&PTR_DAT_1133f5138,
                        &PTR_s_subfeature_1133f5150,1,8,0x1c);
    puRam00000001137fb350 = puVar1;
  }
  return;
}



/* Entry: 10b7edfe4; end: 10b7ee04b; +[SCShakeToReportActivityCenter descriptor] */

void FUN_10b7edfe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfd60,
                        &PTR____CFConstantStringClassReference_110e5f358,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb358 = puVar1;
  }
  return;
}



/* Entry: 10b7ee04c; end: 10b7ee0b3; +[SCShakeToReportAppExtension descriptor] */

void FUN_10b7ee04c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfdb0,
                        &PTR____CFConstantStringClassReference_110f88c58,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb360 = puVar1;
  }
  return;
}



/* Entry: 10b7ee0b4; end: 10b7ee11b; +[SCShakeToReportAppIconBadge descriptor] */

void FUN_10b7ee0b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfe00,
                        &PTR____CFConstantStringClassReference_110f88c78,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb368 = puVar1;
  }
  return;
}



/* Entry: 10b7ee11c; end: 10b7ee183; +[SCShakeToReportAppNavigation descriptor] */

void FUN_10b7ee11c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfe50,
                        &PTR____CFConstantStringClassReference_110f88c98,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb370 = puVar1;
  }
  return;
}



/* Entry: 10b7ee184; end: 10b7ee1eb; +[SCShakeToReportAppStartup descriptor] */

void FUN_10b7ee184(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfea0,
                        &PTR____CFConstantStringClassReference_110f88cb8,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb378 = puVar1;
  }
  return;
}



/* Entry: 10b7ee1ec; end: 10b7ee253; +[SCShakeToReportARShopping descriptor] */

void FUN_10b7ee1ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdfef0,
                        &PTR____CFConstantStringClassReference_110f88cd8,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb380 = puVar1;
  }
  return;
}



/* Entry: 10b7ee254; end: 10b7ee2bb; +[SCShakeToReportAuthentication descriptor] */

void FUN_10b7ee254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdff40,
                        &PTR____CFConstantStringClassReference_110e3ab18,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb388 = puVar1;
  }
  return;
}



/* Entry: 10b7ee2bc; end: 10b7ee323; +[SCShakeToReportBattery descriptor] */

void FUN_10b7ee2bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb390 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdff90,
                        &PTR____CFConstantStringClassReference_110ec66f8,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb390 = puVar1;
  }
  return;
}



/* Entry: 10b7ee324; end: 10b7ee38b; +[SCShakeToReportBillboard descriptor] */

void FUN_10b7ee324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cdffe0,
                        &PTR____CFConstantStringClassReference_110f88cf8,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb398 = puVar1;
  }
  return;
}



/* Entry: 10b7ee38c; end: 10b7ee3f3; +[SCShakeToReportBitmoji descriptor] */

void FUN_10b7ee38c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb3a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce0030,
                        &PTR____CFConstantStringClassReference_110dec718,&PTR_DAT_1133f5138,
                        &PTR_s_subfeature_1133f5170,1,8,0x1c);
    puRam00000001137fb3a0 = puVar1;
  }
  return;
}



/* Entry: 10b7ee3f4; end: 10b7ee45b; +[SCShakeToReportBusiness descriptor] */

void FUN_10b7ee3f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb3a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce0080,
                        &PTR____CFConstantStringClassReference_110f4fd78,&PTR_DAT_1133f5138,
                        &PTR_s_subfeature_1133f5190,1,8,0x1c);
    puRam00000001137fb3a8 = puVar1;
  }
  return;
}



/* Entry: 10b7ee45c; end: 10b7ee4c3; +[SCShakeToReportCalling descriptor] */

void FUN_10b7ee45c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb3b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce00d0,
                        &PTR____CFConstantStringClassReference_110e66d38,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb3b0 = puVar1;
  }
  return;
}



/* Entry: 10b7ee4c4; end: 10b7ee52b; +[SCShakeToReportCameos descriptor] */

void FUN_10b7ee4c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb3b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce0120,
                        &PTR____CFConstantStringClassReference_110e04418,&PTR_DAT_1133f5138,0,0,4,
                        0x1c);
    puRam00000001137fb3b8 = puVar1;
  }
  return;
}


