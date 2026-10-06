/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f0f038; end: 108f0f127;  */

undefined8 FUN_108f0f038(int param_1)

{
  if (param_1 < 0x15e) {
    if (param_1 < 0x10e) {
      if ((((0x32 < param_1 - 200U) ||
           ((1L << ((ulong)(param_1 - 200U) & 0x3f) & 0x4000000100401U) == 0)) && (param_1 != 0)) &&
         (param_1 != 100)) {
        return 0;
      }
    }
    else {
      if (0x32 < param_1 - 0x10eU) {
        return 0;
      }
      if ((1L << ((ulong)(param_1 - 0x10eU) & 0x3f) & 0x4000040000001U) == 0) {
        return 0;
      }
    }
  }
  else if (param_1 < 600) {
    if (param_1 < 0x1c2) {
      if ((param_1 != 0x15e) && (param_1 != 400)) {
        return 0;
      }
    }
    else if ((param_1 != 0x1c2) && (param_1 != 500)) {
      return 0;
    }
  }
  else if (param_1 < 700) {
    if ((param_1 != 600) && (param_1 != 0x28a)) {
      return 0;
    }
  }
  else if ((param_1 != 700) && (param_1 != 5000)) {
    return 0;
  }
  return 1;
}



/* Entry: 108f0f128; end: 108f0f1a3;  */

undefined * FUN_108f0f128(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eee0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f03ff8,
                        &UNK_10dfa6f3e,&UNK_10dfa6f64,4,FUN_108f0f1a4,0);
    do {
      if (puRam000000011372eee0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eee0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eee0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eee0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eee0;
}



/* Entry: 108f0f1a4; end: 108f0f1af;  */

bool FUN_108f0f1a4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108f0f1b0; end: 108f0f22b;  */

undefined * FUN_108f0f1b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eee8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04018,
                        &UNK_10dfa6f74,&UNK_10dfa6fd8,7,FUN_108f0f22c,0);
    do {
      if (puRam000000011372eee8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eee8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eee8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eee8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eee8;
}



/* Entry: 108f0f22c; end: 108f0f237;  */

bool FUN_108f0f22c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 108f0f238; end: 108f0f2b3;  */

undefined * FUN_108f0f238(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eef0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04038,
                        &UNK_10dfa6ff4,&UNK_10dfa7028,4,FUN_108f0f2b4,0);
    do {
      if (puRam000000011372eef0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eef0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eef0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eef0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eef0;
}



/* Entry: 108f0f2b4; end: 108f0f2bf;  */

bool FUN_108f0f2b4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108f0f2c0; end: 108f0f33b;  */

undefined * FUN_108f0f2c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372eef8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04058,
                        &UNK_10dfa7038,&UNK_10dfa70a0,5,FUN_108f0f33c,0);
    do {
      if (puRam000000011372eef8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372eef8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372eef8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372eef8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372eef8;
}



/* Entry: 108f0f33c; end: 108f0f347;  */

bool FUN_108f0f33c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108f0f348; end: 108f0f3af; +[SCMossDeviceInfo descriptor] */

void FUN_108f0f348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccf40,
                        &PTR____CFConstantStringClassReference_110f04078,&PTR_DAT_11329d8e8,
                        &PTR_s_userAgent_11329d900,3,0x18,0x1c);
    puRam000000011372ef00 = puVar1;
  }
  return;
}



/* Entry: 108f0f3b0; end: 108f0f493; +[SCMossMediaCaptureContext descriptor] */

void FUN_108f0f3b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bccf90,
                        &PTR____CFConstantStringClassReference_110f04098,&PTR_DAT_11329d8e8,
                        &PTR_DAT_11329d960,7,0x28,0x1c);
    puRam000000011372ef08 = puVar1;
  }
  return;
}



/* Entry: 108f0f494; end: 108f0f4ab;  */

bool FUN_108f0f494(uint param_1)

{
  return param_1 < 0xd || param_1 == 99;
}



/* Entry: 108f0f4ac; end: 108f0f53b;  */

undefined * FUN_108f0f4ac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372ef18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f040d8,
                        &UNK_10dfa71c8,&UNK_10dfa7270,0x26,FUN_108f0f53c,0,&UNK_10dfa7308);
    do {
      if (puRam000000011372ef18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372ef18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372ef18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372ef18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372ef18;
}



/* Entry: 108f0f53c; end: 108f0f59f;  */

undefined8 FUN_108f0f53c(uint param_1)

{
  if (((0x2c < param_1) || ((1L << ((ulong)param_1 & 0x3f) & 0x1f003ff007ffU) == 0)) &&
     ((0x2a < param_1 - 0x3c || ((1L << ((ulong)(param_1 - 0x3c) & 0x3f) & 0x70000f0001fU) == 0))))
  {
    return 0;
  }
  return 1;
}



/* Entry: 108f0f5a0; end: 108f0f62b; +[SCMossMediaVariant descriptor] */

undefined * FUN_108f0f5a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd030,
                        &PTR____CFConstantStringClassReference_110f040f8,&PTR_DAT_11329da58,
                        &PTR_DAT_11329db30,6,0x30,0x1c);
    func_0x00010c229040();
    puRam000000011372ef20 = puVar1;
  }
  return puRam000000011372ef20;
}



/* Entry: 108f0f62c; end: 108f0f6b7; +[SCMossContentDescriptorOverride descriptor] */

undefined * FUN_108f0f62c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd080,
                        &PTR____CFConstantStringClassReference_110f04118,&PTR_DAT_11329da58,
                        &PTR_DAT_11329da90,5,0x30,0x1c);
    func_0x00010c229040();
    puRam000000011372ef28 = puVar1;
  }
  return puRam000000011372ef28;
}



/* Entry: 108f0f6b8; end: 108f0f79b; +[SCMossHlsVodStreaming descriptor] */

void FUN_108f0f6b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd0d0,
                        &PTR____CFConstantStringClassReference_110f04138,&PTR_DAT_11329da58,
                        &PTR_DAT_11329da70,1,0x10,0x1c);
    puRam000000011372ef30 = puVar1;
  }
  return;
}



/* Entry: 108f0f79c; end: 108f0f7a7;  */

bool FUN_108f0f79c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108f0f7a8; end: 108f0f823;  */

undefined * FUN_108f0f7a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372ef40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04178,
                        &UNK_10dfa7340,&UNK_10dfa7374,5,FUN_108f0f824,0);
    do {
      if (puRam000000011372ef40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372ef40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372ef40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372ef40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372ef40;
}



/* Entry: 108f0f824; end: 108f0f82f;  */

bool FUN_108f0f824(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108f0f830; end: 108f0f8ab;  */

undefined * FUN_108f0f830(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372ef48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04198,
                        &UNK_10dfa7388,&UNK_10dfa73b0,7,FUN_108f0f8ac,0);
    do {
      if (puRam000000011372ef48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372ef48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372ef48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372ef48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372ef48;
}



/* Entry: 108f0f8ac; end: 108f0f8b7;  */

bool FUN_108f0f8ac(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 108f0f8b8; end: 108f0f943; +[SCMossMediaVariantMetadata descriptor] */

undefined * FUN_108f0f8b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd170,
                        &PTR____CFConstantStringClassReference_110f041b8,&PTR_DAT_11329dbf8,
                        &PTR_s_videoMetadata_11329dc10,2,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372ef50 = puVar1;
  }
  return puRam000000011372ef50;
}



/* Entry: 108f0f944; end: 108f0f9ab; +[SCMossVideoMetadata descriptor] */

void FUN_108f0f944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd260,
                        &PTR____CFConstantStringClassReference_110ebdbd8,&PTR_DAT_11329dbf8,
                        &PTR_DAT_11329ddb0,0xf,0x48,0x1c);
    puRam000000011372ef58 = puVar1;
  }
  return;
}



/* Entry: 108f0f9ac; end: 108f0fa2f; +[SCMossVideoMetadata_PrefetchHint descriptor] */

undefined * FUN_108f0f9ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd288,
                        &PTR____CFConstantStringClassReference_110f041d8,&PTR_DAT_11329dbf8,
                        &PTR_DAT_11329dc50,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372ef60 = puVar1;
  }
  return puRam000000011372ef60;
}



/* Entry: 108f0fa30; end: 108f0fab3; +[SCMossVideoMetadata_SeekPoint descriptor] */

undefined * FUN_108f0fa30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd2b0,
                        &PTR____CFConstantStringClassReference_110f041f8,&PTR_DAT_11329dbf8,
                        &PTR_DAT_11329dc90,2,0xc,0x1c);
    func_0x00010c228780();
    puRam000000011372ef68 = puVar1;
  }
  return puRam000000011372ef68;
}



/* Entry: 108f0fab4; end: 108f0fbab; +[SCMossImageMetadata descriptor] */

void FUN_108f0fab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd238,
                        &PTR____CFConstantStringClassReference_110f04218,&PTR_DAT_11329dbf8,
                        &PTR_DAT_11329dcd0,7,0x28,0x1c);
    puRam000000011372ef70 = puVar1;
  }
  return;
}



/* Entry: 108f0fbac; end: 108f0fbe3;  */

undefined8 FUN_108f0fbac(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x60d) {
    uVar1 = 1;
                    /* WARNING: Could not recover jumptable at 0x000108f0fbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dfa73cc)[param_1] * 4 + 0x108f0fbd8))(1);
    return uVar1;
  }
  return 0;
}



/* Entry: 108f0fbe4; end: 108f0fc4b; +[SCBoltCountriesPolicy descriptor] */

void FUN_108f0fbe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd3a0,
                        &PTR____CFConstantStringClassReference_110f04258,&PTR_DAT_11329df98,
                        &PTR_DAT_11329dfb0,1,0x10,0x1c);
    puRam000000011372ef80 = puVar1;
  }
  return;
}



/* Entry: 108f0fc4c; end: 108f0fcb3; +[SCBoltStringRegionsPolicy descriptor] */

void FUN_108f0fc4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd3f0,
                        &PTR____CFConstantStringClassReference_110f04278,&PTR_DAT_11329df98,
                        &PTR_DAT_11329dfd0,1,0x10,0x1c);
    puRam000000011372ef88 = puVar1;
  }
  return;
}



/* Entry: 108f0fcb4; end: 108f0fd1b; +[SCBoltStringRegionsStrictPolicy descriptor] */

void FUN_108f0fcb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd440,
                        &PTR____CFConstantStringClassReference_110f04298,&PTR_DAT_11329df98,
                        &PTR_DAT_11329e050,3,0x18,0x1c);
    puRam000000011372ef90 = puVar1;
  }
  return;
}



/* Entry: 108f0fd1c; end: 108f0fd83; +[SCBoltBoltDefaultPolicy descriptor] */

void FUN_108f0fd1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372ef98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd490,
                        &PTR____CFConstantStringClassReference_110f042b8,&PTR_DAT_11329df98,
                        &PTR_DAT_11329dff0,1,8,0x1c);
    puRam000000011372ef98 = puVar1;
  }
  return;
}



/* Entry: 108f0fd84; end: 108f0fdeb; +[SCBoltNoReplicationPolicy descriptor] */

void FUN_108f0fd84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd4e0,
                        &PTR____CFConstantStringClassReference_110f042d8,&PTR_DAT_11329df98,0,0,4,
                        0x1c);
    puRam000000011372efa0 = puVar1;
  }
  return;
}



/* Entry: 108f0fdec; end: 108f0fe53; +[SCBoltAllProvidersReplicationPolicy descriptor] */

void FUN_108f0fdec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd530,
                        &PTR____CFConstantStringClassReference_110f042f8,&PTR_DAT_11329df98,0,0,4,
                        0x1c);
    puRam000000011372efa8 = puVar1;
  }
  return;
}



/* Entry: 108f0fe54; end: 108f0febb; +[SCBoltCombinedReplicationPolicy descriptor] */

void FUN_108f0fe54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd580,
                        &PTR____CFConstantStringClassReference_110f04318,&PTR_DAT_11329df98,
                        &PTR_DAT_11329e010,1,0x10,0x1c);
    puRam000000011372efb0 = puVar1;
  }
  return;
}



/* Entry: 108f0febc; end: 108f0ff23; +[SCBoltFriendReplicationPolicy descriptor] */

void FUN_108f0febc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd5d0,
                        &PTR____CFConstantStringClassReference_110f04338,&PTR_DAT_11329df98,
                        &PTR_s_userId_11329e030,1,0x10,0x1c);
    puRam000000011372efb8 = puVar1;
  }
  return;
}



/* Entry: 108f0ff24; end: 108f0ffaf; +[SCBoltReplicationPolicy descriptor] */

undefined * FUN_108f0ff24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd620,
                        &PTR____CFConstantStringClassReference_110f04358,&PTR_DAT_11329df98,
                        &PTR_DAT_11329e0b0,8,0x48,0x1c);
    func_0x00010c229040();
    puRam000000011372efc0 = puVar1;
  }
  return puRam000000011372efc0;
}



/* Entry: 108f0ffb0; end: 108f1003b; +[SCBoltStoragePolicy descriptor] */

undefined * FUN_108f0ffb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd6c0,
                        &PTR____CFConstantStringClassReference_110f04378,&PTR_DAT_11329e1b8,
                        &PTR_DAT_11329e1d0,1,0x10,0x1c);
    func_0x00010c229040();
    puRam000000011372efc8 = puVar1;
  }
  return puRam000000011372efc8;
}



/* Entry: 108f1003c; end: 108f100a3; +[SCBoltStorageClassPolicy descriptor] */

void FUN_108f1003c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd710,
                        &PTR____CFConstantStringClassReference_110f04398,&PTR_DAT_11329e1b8,
                        &PTR_DAT_11329e1f0,1,0x10,0x1c);
    puRam000000011372efd0 = puVar1;
  }
  return;
}



/* Entry: 108f100a4; end: 108f1010b; +[SCBoltv2Claim descriptor] */

void FUN_108f100a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd7b0,
                        &PTR____CFConstantStringClassReference_110f043b8,&PTR_DAT_11329e210,
                        &PTR_s_useCase_11329e228,9,0x30,0x1c);
    puRam000000011372efd8 = puVar1;
  }
  return;
}



/* Entry: 108f1010c; end: 108f101ef; +[SCBoltv2ClaimPolicy descriptor] */

void FUN_108f1010c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372efe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd850,
                        &PTR____CFConstantStringClassReference_110f043d8,&PTR_DAT_11329e348,
                        &PTR_DAT_11329e360,4,0x28,0x1c);
    puRam000000011372efe0 = puVar1;
  }
  return;
}



/* Entry: 108f101f0; end: 108f10207;  */

uint FUN_108f101f0(uint param_1)

{
  return (uint)(param_1 < 0xd) & 0x1c01U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 108f10208; end: 108f102a3; +[SCBoltv2ContentReference descriptor] */

undefined * FUN_108f10208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eff0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd940,
                        &PTR____CFConstantStringClassReference_110ec8f18,&PTR_DAT_11329e3e8,
                        &PTR_s_contentURL_11329e400,4,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10ddc0718);
    puRam000000011372eff0 = puVar1;
  }
  return puRam000000011372eff0;
}



/* Entry: 108f102a4; end: 108f103af; +[SCBoltv2ContentReferenceResult descriptor] */

undefined * FUN_108f102a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372eff8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcd9e0,
                        &PTR____CFConstantStringClassReference_110f04418,&PTR_DAT_11329e480,
                        &PTR_s_statusCode_11329e498,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam000000011372eff8 = puVar1;
  }
  return puRam000000011372eff8;
}



/* Entry: 108f103b0; end: 108f103bb;  */

bool FUN_108f103b0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f103bc; end: 108f10423; +[SCBoltv2ExternalContentReference descriptor] */

void FUN_108f103bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f008 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdad0,
                        &PTR____CFConstantStringClassReference_110e66278,&PTR_DAT_11329e558,
                        &PTR_DAT_11329e570,4,0x20,0x1c);
    puRam000000011372f008 = puVar1;
  }
  return;
}



/* Entry: 108f10424; end: 108f104bf; +[SCBoltv2GetOverwriteLocationRequest descriptor] */

undefined * FUN_108f10424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f010 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdb70,
                        &PTR____CFConstantStringClassReference_110f04458,&PTR_DAT_11329e5f8,
                        &PTR_s_contentId_11329e650,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8bfa0);
    puRam000000011372f010 = puVar1;
  }
  return puRam000000011372f010;
}



/* Entry: 108f104c0; end: 108f1053b; +[SCBoltv2GetOverwriteLocationResponse descriptor] */

undefined * FUN_108f104c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f018 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdbc0,
                        &PTR____CFConstantStringClassReference_110f04478,&PTR_DAT_11329e5f8,
                        &PTR_DAT_11329e610,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f018 = puVar1;
  }
  return puRam000000011372f018;
}



/* Entry: 108f1053c; end: 108f105b7; +[SCBoltv2GetUploadLocationsRequest descriptor] */

undefined * FUN_108f1053c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f020 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdc60,
                        &PTR____CFConstantStringClassReference_110f04498,&PTR_DAT_11329e6f0,
                        &PTR_DAT_11329e868,0x13,0x68,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f020 = puVar1;
  }
  return puRam000000011372f020;
}



/* Entry: 108f105b8; end: 108f1061f; +[SCBoltv2GetUploadLocationsResponse descriptor] */

void FUN_108f105b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f028 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdcb0,
                        &PTR____CFConstantStringClassReference_110f044b8,&PTR_DAT_11329e6f0,
                        &PTR_DAT_11329e708,1,0x10,0x1c);
    puRam000000011372f028 = puVar1;
  }
  return;
}



/* Entry: 108f10620; end: 108f1069b; +[SCBoltv2UploadCofConfig descriptor] */

undefined * FUN_108f10620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f030 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdd00,
                        &PTR____CFConstantStringClassReference_110f044d8,&PTR_DAT_11329e6f0,
                        &PTR_DAT_11329e748,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f030 = puVar1;
  }
  return puRam000000011372f030;
}



/* Entry: 108f1069c; end: 108f10703; +[SCBoltv2UserContext descriptor] */

void FUN_108f1069c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f038 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdd50,
                        &PTR____CFConstantStringClassReference_110e00498,&PTR_DAT_11329e6f0,
                        &PTR_DAT_11329e7c8,5,0x30,0x1c);
    puRam000000011372f038 = puVar1;
  }
  return;
}



/* Entry: 108f10704; end: 108f1076b; +[SCBoltv2UploadLocationHints descriptor] */

void FUN_108f10704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f040 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdda0,
                        &PTR____CFConstantStringClassReference_110f044f8,&PTR_DAT_11329e6f0,
                        &PTR_DAT_11329e728,1,0x10,0x1c);
    puRam000000011372f040 = puVar1;
  }
  return;
}



/* Entry: 108f1076c; end: 108f10863; +[SCBoltv2MediaOptimizationProperties descriptor] */

undefined * FUN_108f1076c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f048 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcde40,
                        &PTR____CFConstantStringClassReference_110f04518,&PTR_DAT_11329eac8,
                        &PTR_s_featureContentType_11329eae0,0x12,0x48,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f048 = puVar1;
  }
  return puRam000000011372f048;
}



/* Entry: 108f10864; end: 108f1086f;  */

bool FUN_108f10864(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108f10870; end: 108f108ff;  */

undefined * FUN_108f10870(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f058 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04558,
                        &UNK_10dfac7c4,&UNK_10dfad050,0x6c,FUN_108f10900,0,&UNK_10dfad200);
    do {
      if (puRam000000011372f058 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f058;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f058,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f058 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f058;
}



/* Entry: 108f10900; end: 108f10993;  */

undefined8 FUN_108f10900(uint param_1)

{
  if ((int)param_1 < 0xa0) {
    if (((0x39 < param_1 - 0x5f) ||
        ((1L << ((ulong)(param_1 - 0x5f) & 0x3f) & 0x3fffffffff8003fU) == 0)) &&
       ((0x19 < param_1 || ((1 << (ulong)(param_1 & 0x1f) & 0x3fff3ffU) == 0)))) {
      return 0;
    }
  }
  else if (0x14 < param_1 - 0xa0) {
    if (0x3e < param_1 - 0xb6) {
      return 0;
    }
    if ((1L << ((ulong)(param_1 - 0xb6) & 0x3f) & 0x7800000000003fffU) == 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 108f10994; end: 108f109fb; +[SCBoltv2UploadBucket descriptor] */

void FUN_108f10994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f060 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdf80,
                        &PTR____CFConstantStringClassReference_110f04578,&PTR_DAT_11329ed28,
                        &PTR_DAT_11329ed40,1,0x10,0x1c);
    puRam000000011372f060 = puVar1;
  }
  return;
}



/* Entry: 108f109fc; end: 108f10a63; +[SCBoltv2UploadLocationPool descriptor] */

void FUN_108f109fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f068 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bcdfd0,
                        &PTR____CFConstantStringClassReference_110f04598,&PTR_DAT_11329ed28,
                        &PTR_s_method_11329ede0,5,0x20,0x1c);
    puRam000000011372f068 = puVar1;
  }
  return;
}



/* Entry: 108f10a64; end: 108f10aff; +[SCBoltv2PresignedUploadLocation descriptor] */

undefined * FUN_108f10a64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f070 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce020,
                        &PTR____CFConstantStringClassReference_110f045b8,&PTR_DAT_11329ed28,
                        &PTR_s_URL_11329ee80,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfad4d6);
    puRam000000011372f070 = puVar1;
  }
  return puRam000000011372f070;
}



/* Entry: 108f10b00; end: 108f10b7b; +[SCBoltv2PresignedUploadLocationMultipart descriptor] */

undefined * FUN_108f10b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f078 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce070,
                        &PTR____CFConstantStringClassReference_110f045d8,&PTR_DAT_11329ed28,
                        &PTR_DAT_11329ed60,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f078 = puVar1;
  }
  return puRam000000011372f078;
}



/* Entry: 108f10b7c; end: 108f10c73; +[SCBoltv2UploadLocation descriptor] */

undefined * FUN_108f10b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f080 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce110,
                        &PTR____CFConstantStringClassReference_110f045f8,&PTR_DAT_11329ef20,
                        &PTR_DAT_11329ef38,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f080 = puVar1;
  }
  return puRam000000011372f080;
}



/* Entry: 108f10c74; end: 108f10c7f;  */

bool FUN_108f10c74(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108f10c80; end: 108f10cfb;  */

undefined * FUN_108f10c80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f090 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04638,
                        &UNK_10dfad5cc,&UNK_10dfad5e8,3,FUN_108f10cfc,0);
    do {
      if (puRam000000011372f090 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f090;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f090,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f090 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f090;
}



/* Entry: 108f10cfc; end: 108f10d07;  */

bool FUN_108f10cfc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f10d08; end: 108f10d83;  */

undefined * FUN_108f10d08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f098 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04658,
                        &UNK_10dfad5f4,&UNK_10dfad62c,3,FUN_108f10d84,0);
    do {
      if (puRam000000011372f098 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f098;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f098,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f098 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f098;
}



/* Entry: 108f10d84; end: 108f10d8f;  */

bool FUN_108f10d84(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f10d90; end: 108f10e0b;  */

undefined * FUN_108f10d90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f0a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04678,
                        &UNK_10dfad638,&UNK_10dfad66c,4,FUN_108f10e0c,0);
    do {
      if (puRam000000011372f0a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f0a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f0a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f0a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f0a0;
}



/* Entry: 108f10e0c; end: 108f10e27;  */

uint FUN_108f10e0c(uint param_1)

{
  return (uint)(param_1 < 0x1f) & 0x40100401U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 108f10e28; end: 108f10ea3; +[SCBoltv2VariantProperties descriptor] */

undefined * FUN_108f10e28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce250,
                        &PTR____CFConstantStringClassReference_110f04698,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f2a0,0xb,0x40,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f0a8 = puVar1;
  }
  return puRam000000011372f0a8;
}



/* Entry: 108f10ea4; end: 108f10f0b; +[SCBoltv2VodStreamingProperties descriptor] */

void FUN_108f10ea4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce2a0,
                        &PTR____CFConstantStringClassReference_110f046b8,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f080,1,0x10,0x1c);
    puRam000000011372f0b0 = puVar1;
  }
  return;
}



/* Entry: 108f10f0c; end: 108f10f87; +[SCBoltv2OverlayProperties descriptor] */

undefined * FUN_108f10f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce2f0,
                        &PTR____CFConstantStringClassReference_110f046d8,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f120,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam000000011372f0b8 = puVar1;
  }
  return puRam000000011372f0b8;
}



/* Entry: 108f10f88; end: 108f11013; +[SCBoltv2VideoProperties descriptor] */

undefined * FUN_108f10f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce340,
                        &PTR____CFConstantStringClassReference_110f046f8,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f400,0xb,0x28,0x1c);
    func_0x00010c229040();
    puRam000000011372f0c0 = puVar1;
  }
  return puRam000000011372f0c0;
}



/* Entry: 108f11014; end: 108f1107b; +[SCBoltv2SegmentFrameProperties descriptor] */

void FUN_108f11014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce390,
                        &PTR____CFConstantStringClassReference_110f04718,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f0a0,2,0xc,0x1c);
    puRam000000011372f0c8 = puVar1;
  }
  return;
}



/* Entry: 108f1107c; end: 108f110e3; +[SCBoltv2SegmentTimeProperties descriptor] */

void FUN_108f1107c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce3e0,
                        &PTR____CFConstantStringClassReference_110f04738,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f0e0,2,0x18,0x1c);
    puRam000000011372f0d0 = puVar1;
  }
  return;
}



/* Entry: 108f110e4; end: 108f1114b; +[SCBoltv2MediaTransformationProperties descriptor] */

void FUN_108f110e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce430,
                        &PTR____CFConstantStringClassReference_110f04758,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f1e0,6,0x1c,0x1c);
    puRam000000011372f0d8 = puVar1;
  }
  return;
}



/* Entry: 108f1114c; end: 108f111e7; +[SCBoltv2SubtitleProperties descriptor] */

undefined * FUN_108f1114c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372f0e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bce480,
                        &PTR____CFConstantStringClassReference_110f04778,&PTR_DAT_11329f068,
                        &PTR_DAT_11329f180,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dfad688);
    puRam000000011372f0e0 = puVar1;
  }
  return puRam000000011372f0e0;
}



/* Entry: 108f111e8; end: 108f11277;  */

undefined * FUN_108f111e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f0e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04798,
                        &UNK_10dfad690,&UNK_10dfad750,0xc,FUN_108f11278,2,&UNK_10dfad780);
    do {
      if (puRam000000011372f0e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f0e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f0e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f0e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f0e8;
}



/* Entry: 108f11278; end: 108f112cf;  */

undefined8 FUN_108f11278(uint param_1)

{
  if ((int)param_1 < 0x3e6) {
    if ((2 < param_1) && (param_1 != 900)) {
      return 0;
    }
  }
  else if (((3 < param_1 - 0x3e6) && (2 < param_1 - 0x1869d)) && (param_1 != 0x7fffffff)) {
    return 0;
  }
  return 1;
}



/* Entry: 108f112d0; end: 108f1134b;  */

undefined * FUN_108f112d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f0f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f047b8,
                        &UNK_10dfad7a8,&UNK_10dfad7c0,2,FUN_108f1134c,2);
    do {
      if (puRam000000011372f0f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f0f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f0f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f0f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f0f0;
}



/* Entry: 108f1134c; end: 108f11357;  */

bool FUN_108f1134c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108f11358; end: 108f113d3;  */

undefined * FUN_108f11358(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f0f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f047d8,
                        &UNK_10dfad7c8,&UNK_10dfad890,0x12,FUN_108f113d4,2);
    do {
      if (puRam000000011372f0f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f0f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f0f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f0f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f0f8;
}



/* Entry: 108f113d4; end: 108f113e3;  */

bool FUN_108f113d4(int param_1)

{
  return param_1 - 1U < 0x12;
}



/* Entry: 108f113e4; end: 108f1145f;  */

undefined * FUN_108f113e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f100 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f047f8,
                        &UNK_10dfad8d8,&UNK_10dfad904,3,FUN_108f11460,2);
    do {
      if (puRam000000011372f100 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f100;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f100,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f100 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f100;
}



/* Entry: 108f11460; end: 108f1146f;  */

bool FUN_108f11460(int param_1)

{
  return param_1 - 1U < 3;
}



/* Entry: 108f11470; end: 108f114eb;  */

undefined * FUN_108f11470(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f108 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04818,
                        &UNK_10dfad910,&UNK_10dfad92c,3,FUN_108f114ec,2);
    do {
      if (puRam000000011372f108 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f108;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f108,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f108 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f108;
}



/* Entry: 108f114ec; end: 108f114fb;  */

bool FUN_108f114ec(int param_1)

{
  return param_1 - 1U < 3;
}



/* Entry: 108f114fc; end: 108f11577;  */

undefined * FUN_108f114fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f110 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04838,
                        &UNK_10dfad938,&UNK_10dfad954,3,FUN_108f11578,2);
    do {
      if (puRam000000011372f110 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f110;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f110,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f110 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f110;
}



/* Entry: 108f11578; end: 108f11583;  */

bool FUN_108f11578(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f11584; end: 108f115ff;  */

undefined * FUN_108f11584(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f118 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04858,
                        &UNK_10dfad960,&UNK_10dfad97c,3,FUN_108f11600,2);
    do {
      if (puRam000000011372f118 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f118;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f118,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f118 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f118;
}



/* Entry: 108f11600; end: 108f1160b;  */

bool FUN_108f11600(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f1160c; end: 108f11687;  */

undefined * FUN_108f1160c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f120 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04878,
                        &UNK_10dfad988,&UNK_10dfad9bc,3,FUN_108f11688,2);
    do {
      if (puRam000000011372f120 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f120;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f120,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f120 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f120;
}



/* Entry: 108f11688; end: 108f11693;  */

bool FUN_108f11688(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f11694; end: 108f1170f;  */

undefined * FUN_108f11694(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f128 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f04898,
                        &UNK_10dfad9c8,&UNK_10dfada7c,10,FUN_108f11710,2);
    do {
      if (puRam000000011372f128 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f128;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f128,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f128 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f128;
}



/* Entry: 108f11710; end: 108f1171b;  */

bool FUN_108f11710(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 108f1171c; end: 108f11797;  */

undefined * FUN_108f1171c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f130 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f048b8,
                        &UNK_10dfadaa4,&UNK_10dfadad4,3,FUN_108f11798,2);
    do {
      if (puRam000000011372f130 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f130;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f130,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f130 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f130;
}



/* Entry: 108f11798; end: 108f117a3;  */

bool FUN_108f11798(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108f117a4; end: 108f1181f;  */

undefined * FUN_108f117a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f138 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f048d8,
                        &UNK_10dfadae0,&UNK_10dfadb18,4,FUN_108f11820,2);
    do {
      if (puRam000000011372f138 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f138;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f138,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f138 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f138;
}



/* Entry: 108f11820; end: 108f1182b;  */

bool FUN_108f11820(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108f1182c; end: 108f118a7;  */

undefined * FUN_108f1182c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372f140 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f048f8,
                        &UNK_10dfadb28,&UNK_10dfadb48,3,FUN_108f118a8,2);
    do {
      if (puRam000000011372f140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372f140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372f140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372f140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372f140;
}


