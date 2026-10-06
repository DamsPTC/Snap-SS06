/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106fb76e4; end: 106fb775f;  */

undefined * FUN_106fb76e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90eb8,
                        &UNK_10de1a760,&UNK_10de1a7d0,8,FUN_106fb7760,2);
    do {
      if (puRam00000001136c8b20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b20;
}



/* Entry: 106fb7760; end: 106fb776b;  */

bool FUN_106fb7760(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 106fb776c; end: 106fb77e7;  */

undefined * FUN_106fb776c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90ed8,
                        &UNK_10de1a7f0,&UNK_10de1a88c,8,FUN_106fb77e8,2);
    do {
      if (puRam00000001136c8b28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b28;
}



/* Entry: 106fb77e8; end: 106fb77f7;  */

bool FUN_106fb77e8(int param_1)

{
  return param_1 - 1U < 8;
}



/* Entry: 106fb77f8; end: 106fb7873;  */

undefined * FUN_106fb77f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90ef8,
                        &UNK_10de1a8ac,&UNK_10de1a904,3,FUN_106fb7874,2);
    do {
      if (puRam00000001136c8b30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b30;
}



/* Entry: 106fb7874; end: 106fb7883;  */

bool FUN_106fb7874(int param_1)

{
  return param_1 - 1U < 3;
}



/* Entry: 106fb7884; end: 106fb78ff;  */

undefined * FUN_106fb7884(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90f18,
                        &UNK_10de1a910,&UNK_10de1a9d8,5,FUN_106fb7900,2);
    do {
      if (puRam00000001136c8b38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b38;
}



/* Entry: 106fb7900; end: 106fb790f;  */

bool FUN_106fb7900(int param_1)

{
  return param_1 - 1U < 5;
}



/* Entry: 106fb7910; end: 106fb798b;  */

undefined * FUN_106fb7910(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90f38,
                        &UNK_10de1a9ec,&UNK_10de1aa60,4,FUN_106fb798c,2);
    do {
      if (puRam00000001136c8b40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b40;
}



/* Entry: 106fb798c; end: 106fb799b;  */

bool FUN_106fb798c(int param_1)

{
  return param_1 - 1U < 4;
}



/* Entry: 106fb799c; end: 106fb7a17;  */

undefined * FUN_106fb799c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90f58,
                        &UNK_10de1aa70,&UNK_10de1aa98,6,FUN_106fb7a18,2);
    do {
      if (puRam00000001136c8b48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b48;
}



/* Entry: 106fb7a18; end: 106fb7a23;  */

bool FUN_106fb7a18(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 106fb7a24; end: 106fb7a9f;  */

undefined * FUN_106fb7a24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90f78,
                        &UNK_10de1aab0,&UNK_10de1aad8,3,FUN_106fb7aa0,2);
    do {
      if (puRam00000001136c8b50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b50;
}



/* Entry: 106fb7aa0; end: 106fb7aab;  */

bool FUN_106fb7aa0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fb7aac; end: 106fb7b27;  */

undefined * FUN_106fb7aac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90f98,
                        &UNK_10de1aab0,&UNK_10de1aae4,3,FUN_106fb7b28,2);
    do {
      if (puRam00000001136c8b58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b58;
}



/* Entry: 106fb7b28; end: 106fb7b33;  */

bool FUN_106fb7b28(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fb7b34; end: 106fb7baf;  */

undefined * FUN_106fb7b34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90fb8,
                        &UNK_10de1aaf0,&UNK_10de1ab18,4,FUN_106fb7bb0,2);
    do {
      if (puRam00000001136c8b60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b60;
}



/* Entry: 106fb7bb0; end: 106fb7bbb;  */

bool FUN_106fb7bb0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 106fb7bbc; end: 106fb7c37;  */

undefined * FUN_106fb7bbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90fd8,
                        &UNK_10de1ab28,&UNK_10de1ad10,0x16,FUN_106fb7c38,2);
    do {
      if (puRam00000001136c8b68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b68;
}



/* Entry: 106fb7c38; end: 106fb7c43;  */

bool FUN_106fb7c38(uint param_1)

{
  return param_1 < 0x16;
}



/* Entry: 106fb7c44; end: 106fb7cbf;  */

undefined * FUN_106fb7c44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e90ff8,
                        &UNK_10de1ae90,&UNK_10de1ad68,3,FUN_106fb7cc0,2);
    do {
      if (puRam00000001136c8b70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b70;
}



/* Entry: 106fb7cc0; end: 106fb7ccb;  */

bool FUN_106fb7cc0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106fb7ccc; end: 106fb7d47;  */

undefined * FUN_106fb7ccc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91018,
                        &UNK_10de1ad74,&UNK_10de1ade0,9,FUN_106fb7d48,2);
    do {
      if (puRam00000001136c8b78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b78;
}



/* Entry: 106fb7d48; end: 106fb7d53;  */

bool FUN_106fb7d48(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 106fb7d54; end: 106fb7dcf;  */

undefined * FUN_106fb7d54(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91038,
                        &UNK_10de1ae04,&UNK_10de1ae34,5,FUN_106fb7dd0,2);
    do {
      if (puRam00000001136c8b80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b80;
}



/* Entry: 106fb7dd0; end: 106fb7ddb;  */

bool FUN_106fb7dd0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fb7ddc; end: 106fb7e57;  */

undefined * FUN_106fb7ddc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8b88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e91058,
                        &UNK_10de1ae48,&UNK_10de1ae74,5,FUN_106fb7e58,2);
    do {
      if (puRam00000001136c8b88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8b88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8b88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8b88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8b88;
}



/* Entry: 106fb7e58; end: 106fb7e63;  */

bool FUN_106fb7e58(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 106fb7e64; end: 106fb7ecb; +[CHRPBGitResponse descriptor] */

void FUN_106fb7e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8b90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ed20,
                        &PTR____CFConstantStringClassReference_110e91078,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b428,6,0x30,0x1c);
    puRam00000001136c8b90 = puVar1;
  }
  return;
}



/* Entry: 106fb7ecc; end: 106fb7f33; +[CHRPBEmpty descriptor] */

void FUN_106fb7ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8b98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ed70,
                        &PTR____CFConstantStringClassReference_110e19978,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8b98 = puVar1;
  }
  return;
}



/* Entry: 106fb7f34; end: 106fb7f9f; +[CHRPBSystemState descriptor] */

void FUN_106fb7f34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ba0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4edc0,
                        &PTR____CFConstantStringClassReference_110e91098,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b728,7,0x18,0x1c);
    puRam00000001136c8ba0 = puVar1;
  }
  return;
}



/* Entry: 106fb7fa0; end: 106fb8007; +[CHRPBMediaCountsMessage descriptor] */

void FUN_106fb7fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ba8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ee10,
                        &PTR____CFConstantStringClassReference_110e910b8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a950,2,0xc,0x1c);
    puRam00000001136c8ba8 = puVar1;
  }
  return;
}



/* Entry: 106fb8008; end: 106fb806f; +[CHRPBRange descriptor] */

void FUN_106fb8008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ee60,
                        &PTR____CFConstantStringClassReference_110defc58,&PTR_DAT_11319a788,
                        &PTR_s_start_11319a990,2,0xc,0x1c);
    puRam00000001136c8bb0 = puVar1;
  }
  return;
}



/* Entry: 106fb8070; end: 106fb80d7; +[CHRPBWifiParams descriptor] */

void FUN_106fb8070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4eeb0,
                        &PTR____CFConstantStringClassReference_110e910d8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b4e8,6,0x28,0x1c);
    puRam00000001136c8bb8 = puVar1;
  }
  return;
}



/* Entry: 106fb80d8; end: 106fb813f; +[CHRPBBatteryStatusResponse descriptor] */

void FUN_106fb80d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ef00,
                        &PTR____CFConstantStringClassReference_110e910f8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b048,4,0x14,0x1c);
    puRam00000001136c8bc0 = puVar1;
  }
  return;
}



/* Entry: 106fb8140; end: 106fb81a7; +[CHRPBCrashReportDetails descriptor] */

void FUN_106fb8140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ef50,
                        &PTR____CFConstantStringClassReference_110e91118,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b0c8,4,0x20,0x1c);
    puRam00000001136c8bc8 = puVar1;
  }
  return;
}



/* Entry: 106fb81a8; end: 106fb820f; +[CHRPBCrashReport descriptor] */

void FUN_106fb81a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4efa0,
                        &PTR____CFConstantStringClassReference_110e91138,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a9d0,2,0x18,0x1c);
    puRam00000001136c8bd0 = puVar1;
  }
  return;
}



/* Entry: 106fb8210; end: 106fb8277; +[CHRPBLogsResponse descriptor] */

void FUN_106fb8210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4eff0,
                        &PTR____CFConstantStringClassReference_110e91158,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a7a0,1,0x10,0x1c);
    puRam00000001136c8bd8 = puVar1;
  }
  return;
}



/* Entry: 106fb8278; end: 106fb82e3; +[CHRPBLocationData descriptor] */

void FUN_106fb8278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8be0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f040,
                        &PTR____CFConstantStringClassReference_110e60018,&PTR_DAT_11319a788,
                        &PTR_s_latitude_11319b808,8,0x28,0x1c);
    puRam00000001136c8be0 = puVar1;
  }
  return;
}



/* Entry: 106fb82e4; end: 106fb834b; +[CHRPBTemperatureResponse descriptor] */

void FUN_106fb82e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8be8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f090,
                        &PTR____CFConstantStringClassReference_110e91178,&PTR_DAT_11319a788,
                        &PTR_DAT_11319adf0,3,0x10,0x1c);
    puRam00000001136c8be8 = puVar1;
  }
  return;
}



/* Entry: 106fb834c; end: 106fb83b3; +[CHRPBEncryptionNonceExchange descriptor] */

void FUN_106fb834c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f0e0,
                        &PTR____CFConstantStringClassReference_110e91198,&PTR_DAT_11319a788,
                        0x11319ad50,2,0x10,0x1d);
    puRam00000001136c8bf0 = puVar1;
  }
  return;
}



/* Entry: 106fb83b4; end: 106fb841b; +[CHRPBOTAUpdateRequest descriptor] */

void FUN_106fb83b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8bf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f130,
                        &PTR____CFConstantStringClassReference_110e911b8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a7c0,1,8,0x1c);
    puRam00000001136c8bf8 = puVar1;
  }
  return;
}



/* Entry: 106fb841c; end: 106fb8483; +[CHRPBOTAUpdateEventData descriptor] */

void FUN_106fb841c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f180,
                        &PTR____CFConstantStringClassReference_110e911d8,&PTR_DAT_11319a788,
                        0x11319afd0,3,0x10,0x1d);
    puRam00000001136c8c00 = puVar1;
  }
  return;
}



/* Entry: 106fb8484; end: 106fb850f; +[CHRPBOTAUpdateResponse descriptor] */

undefined * FUN_106fb8484(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f1d0,
                        &PTR____CFConstantStringClassReference_110e911f8,&PTR_DAT_11319a788,
                        0x11319b248,4,0x28,0x1d);
    func_0x00010c229040();
    puRam00000001136c8c08 = puVar1;
  }
  return puRam00000001136c8c08;
}



/* Entry: 106fb8510; end: 106fb8577; +[CHRPBFirmwareUpdateUploadRequest descriptor] */

void FUN_106fb8510(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f220,
                        &PTR____CFConstantStringClassReference_110e90238,&PTR_DAT_11319a788,
                        &PTR_s_data_p_11319ae50,3,0x10,0x1c);
    puRam00000001136c8c10 = puVar1;
  }
  return;
}



/* Entry: 106fb8578; end: 106fb85df; +[CHRPBFirmwareUpdateUploadResponse descriptor] */

void FUN_106fb8578(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f270,
                        &PTR____CFConstantStringClassReference_110e90658,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a7e0,1,8,0x1c);
    puRam00000001136c8c18 = puVar1;
  }
  return;
}



/* Entry: 106fb85e0; end: 106fb8647; +[CHRPBDialPosition descriptor] */

void FUN_106fb85e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f2c0,
                        &PTR____CFConstantStringClassReference_110e91218,&PTR_DAT_11319a788,
                        0x11319a900,1,8,0x1d);
    puRam00000001136c8c20 = puVar1;
  }
  return;
}



/* Entry: 106fb8648; end: 106fb86af; +[CHRPBCaptainStateFlyingManual descriptor] */

void FUN_106fb8648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f310,
                        &PTR____CFConstantStringClassReference_110e91238,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8c28 = puVar1;
  }
  return;
}



/* Entry: 106fb86b0; end: 106fb8717; +[CHRPBCaptainStatePreTakeOff descriptor] */

void FUN_106fb86b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f360,
                        &PTR____CFConstantStringClassReference_110e91258,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8c30 = puVar1;
  }
  return;
}



/* Entry: 106fb8718; end: 106fb877f; +[CHRPBCaptainStateTakingOff descriptor] */

void FUN_106fb8718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f3b0,
                        &PTR____CFConstantStringClassReference_110e91278,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8c38 = puVar1;
  }
  return;
}



/* Entry: 106fb8780; end: 106fb87e7; +[CHRPBCaptainStateLanding descriptor] */

void FUN_106fb8780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f400,
                        &PTR____CFConstantStringClassReference_110e91298,&PTR_DAT_11319a788,
                        0x11319a928,1,8,0x1d);
    puRam00000001136c8c40 = puVar1;
  }
  return;
}



/* Entry: 106fb87e8; end: 106fb884f; +[CHRPBCaptainStateIdle descriptor] */

void FUN_106fb87e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f450,
                        &PTR____CFConstantStringClassReference_110e912b8,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8c48 = puVar1;
  }
  return;
}



/* Entry: 106fb8850; end: 106fb88b7; +[CHRPBCaptainStateFlyingTraj descriptor] */

void FUN_106fb8850(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f4a0,
                        &PTR____CFConstantStringClassReference_110e912d8,&PTR_DAT_11319a788,
                        0x11319ada0,2,0xc,0x1d);
    puRam00000001136c8c50 = puVar1;
  }
  return;
}



/* Entry: 106fb88b8; end: 106fb8943; +[CHRPBCaptainInfo descriptor] */

undefined * FUN_106fb88b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f4f0,
                        &PTR____CFConstantStringClassReference_110e912f8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b5a8,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136c8c58 = puVar1;
  }
  return puRam00000001136c8c58;
}



/* Entry: 106fb8944; end: 106fb89ab; +[CHRPBStorageCapacity descriptor] */

void FUN_106fb8944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f540,
                        &PTR____CFConstantStringClassReference_110e91318,&PTR_DAT_11319a788,
                        &PTR_DAT_11319aa10,2,0x18,0x1c);
    puRam00000001136c8c60 = puVar1;
  }
  return;
}



/* Entry: 106fb89ac; end: 106fb8a13; +[CHRPBOTAScheduledUpdate descriptor] */

void FUN_106fb89ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f590,
                        &PTR____CFConstantStringClassReference_110e91338,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b2e8,5,0x20,0x1c);
    puRam00000001136c8c68 = puVar1;
  }
  return;
}



/* Entry: 106fb8a14; end: 106fb8a7b; +[CHRPBOTACancelScheduledUpdateResponse descriptor] */

void FUN_106fb8a14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f5e0,
                        &PTR____CFConstantStringClassReference_110e91358,&PTR_DAT_11319a788,
                        &PTR_s_success_11319a800,1,4,0x1c);
    puRam00000001136c8c70 = puVar1;
  }
  return;
}



/* Entry: 106fb8a7c; end: 106fb8ae3; +[CHRPBDisableFlightRequest descriptor] */

void FUN_106fb8a7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f630,
                        &PTR____CFConstantStringClassReference_110e91378,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a820,1,4,0x1c);
    puRam00000001136c8c78 = puVar1;
  }
  return;
}



/* Entry: 106fb8ae4; end: 106fb8b4b; +[CHRPBDisableFlightResponse descriptor] */

void FUN_106fb8ae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f680,
                        &PTR____CFConstantStringClassReference_110e91398,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8c80 = puVar1;
  }
  return;
}



/* Entry: 106fb8b4c; end: 106fb8bb3; +[CHRPBFlightModeConfig descriptor] */

void FUN_106fb8b4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f6d0,
                        &PTR____CFConstantStringClassReference_110e913b8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a840,1,8,0x1c);
    puRam00000001136c8c88 = puVar1;
  }
  return;
}



/* Entry: 106fb8bb4; end: 106fb8c1b; +[CHRPBDurationParams descriptor] */

void FUN_106fb8bb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f720,
                        &PTR____CFConstantStringClassReference_110e913d8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319aa50,2,0x10,0x1c);
    puRam00000001136c8c90 = puVar1;
  }
  return;
}



/* Entry: 106fb8c1c; end: 106fb8c83; +[CHRPBVideoResolutionParams descriptor] */

void FUN_106fb8c1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8c98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f770,
                        &PTR____CFConstantStringClassReference_110e913f8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319aa90,2,0x10,0x1c);
    puRam00000001136c8c98 = puVar1;
  }
  return;
}



/* Entry: 106fb8c84; end: 106fb8ceb; +[CHRPBPhotoResolutionParams descriptor] */

void FUN_106fb8c84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f7c0,
                        &PTR____CFConstantStringClassReference_110e91418,&PTR_DAT_11319a788,
                        &PTR_DAT_11319aad0,2,0x10,0x1c);
    puRam00000001136c8ca0 = puVar1;
  }
  return;
}



/* Entry: 106fb8cec; end: 106fb8d53; +[CHRPBDistanceParams descriptor] */

void FUN_106fb8cec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f810,
                        &PTR____CFConstantStringClassReference_110e91438,&PTR_DAT_11319a788,
                        &PTR_DAT_11319aeb0,3,0x18,0x1c);
    puRam00000001136c8ca8 = puVar1;
  }
  return;
}



/* Entry: 106fb8d54; end: 106fb8dbb; +[CHRPBCaptureTypeParams descriptor] */

void FUN_106fb8d54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f860,
                        &PTR____CFConstantStringClassReference_110e91458,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ab10,2,0x10,0x1c);
    puRam00000001136c8cb0 = puVar1;
  }
  return;
}



/* Entry: 106fb8dbc; end: 106fb8e23; +[CHRPBTrackingParams descriptor] */

void FUN_106fb8dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f8b0,
                        &PTR____CFConstantStringClassReference_110e91478,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ab50,2,0x10,0x1c);
    puRam00000001136c8cb8 = puVar1;
  }
  return;
}



/* Entry: 106fb8e24; end: 106fb8e8b; +[CHRPBRemainingFlightInfo descriptor] */

void FUN_106fb8e24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f900,
                        &PTR____CFConstantStringClassReference_110e91498,&PTR_DAT_11319a788,
                        &PTR_DAT_11319af10,3,0x18,0x1c);
    puRam00000001136c8cc0 = puVar1;
  }
  return;
}



/* Entry: 106fb8e8c; end: 106fb8ef3; +[CHRPBFlightStatusError descriptor] */

void FUN_106fb8e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f950,
                        &PTR____CFConstantStringClassReference_110e914b8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a860,1,0x10,0x1c);
    puRam00000001136c8cc8 = puVar1;
  }
  return;
}



/* Entry: 106fb8ef4; end: 106fb8f5b; +[CHRPBVideoFormatParams descriptor] */

void FUN_106fb8ef4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f9a0,
                        &PTR____CFConstantStringClassReference_110e914d8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ab90,2,0x10,0x1c);
    puRam00000001136c8cd0 = puVar1;
  }
  return;
}



/* Entry: 106fb8f5c; end: 106fb8fc3; +[CHRPBCustomFlightMode descriptor] */

void FUN_106fb8f5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4f9f0,
                        &PTR____CFConstantStringClassReference_110e914f8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a880,1,0x10,0x1c);
    puRam00000001136c8cd8 = puVar1;
  }
  return;
}



/* Entry: 106fb8fc4; end: 106fb902b; +[CHRPBUSBConnectionStatus descriptor] */

void FUN_106fb8fc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fa40,
                        &PTR____CFConstantStringClassReference_110e91518,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a8a0,1,4,0x1c);
    puRam00000001136c8ce0 = puVar1;
  }
  return;
}



/* Entry: 106fb902c; end: 106fb9093; +[CHRPBErrorResponse descriptor] */

void FUN_106fb902c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8ce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fa90,
                        &PTR____CFConstantStringClassReference_110df75b8,&PTR_DAT_11319a788,
                        &PTR_s_errorCode_11319abd0,2,0x10,0x1c);
    puRam00000001136c8ce8 = puVar1;
  }
  return;
}



/* Entry: 106fb9094; end: 106fb90fb; +[CHRPBLogFileTransferRequest descriptor] */

void FUN_106fb9094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fae0,
                        &PTR____CFConstantStringClassReference_110e90358,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ac10,2,0x18,0x1c);
    puRam00000001136c8cf0 = puVar1;
  }
  return;
}



/* Entry: 106fb90fc; end: 106fb9163; +[CHRPBLogRequest descriptor] */

void FUN_106fb90fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8cf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fb30,
                        &PTR____CFConstantStringClassReference_110e90378,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ac50,2,0x10,0x1c);
    puRam00000001136c8cf8 = puVar1;
  }
  return;
}



/* Entry: 106fb9164; end: 106fb91cb; +[CHRPBLogFileMetadata descriptor] */

void FUN_106fb9164(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fb80,
                        &PTR____CFConstantStringClassReference_110e90338,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ac90,2,0x10,0x1c);
    puRam00000001136c8d00 = puVar1;
  }
  return;
}



/* Entry: 106fb91cc; end: 106fb9233; +[CHRPBLogData descriptor] */

void FUN_106fb91cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fbd0,
                        &PTR____CFConstantStringClassReference_110e90638,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b148,4,0x28,0x1c);
    puRam00000001136c8d08 = puVar1;
  }
  return;
}



/* Entry: 106fb9234; end: 106fb929b; +[CHRPBLogResponse descriptor] */

void FUN_106fb9234(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fc20,
                        &PTR____CFConstantStringClassReference_110e90398,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b1c8,4,0x18,0x1c);
    puRam00000001136c8d10 = puVar1;
  }
  return;
}



/* Entry: 106fb929c; end: 106fb9303; +[CHRPBKeepDeviceActiveParams descriptor] */

void FUN_106fb929c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fc70,
                        &PTR____CFConstantStringClassReference_110e91538,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d18 = puVar1;
  }
  return;
}



/* Entry: 106fb9304; end: 106fb936b; +[CHRPBKeepDeviceActiveResult descriptor] */

void FUN_106fb9304(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fcc0,
                        &PTR____CFConstantStringClassReference_110e91558,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d20 = puVar1;
  }
  return;
}



/* Entry: 106fb936c; end: 106fb93d3; +[CHRPBCalibrationResult descriptor] */

void FUN_106fb936c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fd10,
                        &PTR____CFConstantStringClassReference_110e91578,&PTR_DAT_11319a788,
                        &PTR_s_direction_11319acd0,2,8,0x1c);
    puRam00000001136c8d28 = puVar1;
  }
  return;
}



/* Entry: 106fb93d4; end: 106fb943b; +[CHRPBCalibrationStatus descriptor] */

void FUN_106fb93d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fd60,
                        &PTR____CFConstantStringClassReference_110e91598,&PTR_DAT_11319a788,
                        &PTR_DAT_11319af70,3,0x18,0x1c);
    puRam00000001136c8d30 = puVar1;
  }
  return;
}



/* Entry: 106fb943c; end: 106fb94a3; +[CHRPBStartCalibrationRequest descriptor] */

void FUN_106fb943c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fdb0,
                        &PTR____CFConstantStringClassReference_110e915b8,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d38 = puVar1;
  }
  return;
}



/* Entry: 106fb94a4; end: 106fb950b; +[CHRPBStartCalibrationResponse descriptor] */

void FUN_106fb94a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fe00,
                        &PTR____CFConstantStringClassReference_110e915d8,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d40 = puVar1;
  }
  return;
}



/* Entry: 106fb950c; end: 106fb9573; +[CHRPBStopCalibrationRequest descriptor] */

void FUN_106fb950c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fe50,
                        &PTR____CFConstantStringClassReference_110e915f8,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d48 = puVar1;
  }
  return;
}



/* Entry: 106fb9574; end: 106fb95db; +[CHRPBStopCalibrationResponse descriptor] */

void FUN_106fb9574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fea0,
                        &PTR____CFConstantStringClassReference_110e91618,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d50 = puVar1;
  }
  return;
}



/* Entry: 106fb95dc; end: 106fb9643; +[CHRPBActivateLostModeRequest descriptor] */

void FUN_106fb95dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4fef0,
                        &PTR____CFConstantStringClassReference_110e91638,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d58 = puVar1;
  }
  return;
}



/* Entry: 106fb9644; end: 106fb96ab; +[CHRPBActivateLostModeResponse descriptor] */

void FUN_106fb9644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ff40,
                        &PTR____CFConstantStringClassReference_110e91658,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d60 = puVar1;
  }
  return;
}



/* Entry: 106fb96ac; end: 106fb9713; +[CHRPBDeactivateLostModeRequest descriptor] */

void FUN_106fb96ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ff90,
                        &PTR____CFConstantStringClassReference_110e91678,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d68 = puVar1;
  }
  return;
}



/* Entry: 106fb9714; end: 106fb977b; +[CHRPBDeactivateLostModeResponse descriptor] */

void FUN_106fb9714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b4ffe0,
                        &PTR____CFConstantStringClassReference_110e91698,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d70 = puVar1;
  }
  return;
}



/* Entry: 106fb977c; end: 106fb97e3; +[CHRPBGetLostModeStateRequest descriptor] */

void FUN_106fb977c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50030,
                        &PTR____CFConstantStringClassReference_110e916b8,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d78 = puVar1;
  }
  return;
}



/* Entry: 106fb97e4; end: 106fb984b; +[CHRPBGetLostModeStateResponse descriptor] */

void FUN_106fb97e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50080,
                        &PTR____CFConstantStringClassReference_110e916d8,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a8c0,1,4,0x1c);
    puRam00000001136c8d80 = puVar1;
  }
  return;
}



/* Entry: 106fb984c; end: 106fb98b3; +[CHRPBLostModeBeginEvent descriptor] */

void FUN_106fb984c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b500d0,
                        &PTR____CFConstantStringClassReference_110e916f8,&PTR_DAT_11319a788,0,0,4,
                        0x1c);
    puRam00000001136c8d88 = puVar1;
  }
  return;
}



/* Entry: 106fb98b4; end: 106fb991b; +[CHRPBLostModeEndEvent descriptor] */

void FUN_106fb98b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50120,
                        &PTR____CFConstantStringClassReference_110e91718,&PTR_DAT_11319a788,
                        &PTR_DAT_11319a8e0,1,8,0x1c);
    puRam00000001136c8d90 = puVar1;
  }
  return;
}



/* Entry: 106fb991c; end: 106fb99a7; +[CHRPBLostModeEvent descriptor] */

undefined * FUN_106fb991c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8d98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50170,
                        &PTR____CFConstantStringClassReference_110e91738,&PTR_DAT_11319a788,
                        &PTR_DAT_11319ad10,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001136c8d98 = puVar1;
  }
  return puRam00000001136c8d98;
}



/* Entry: 106fb99a8; end: 106fb9a0f; +[CHRPBFlightModeSettings descriptor] */

void FUN_106fb99a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8da0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b501c0,
                        &PTR____CFConstantStringClassReference_110e91758,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b388,5,0x18,0x1c);
    puRam00000001136c8da0 = puVar1;
  }
  return;
}



/* Entry: 106fb9a10; end: 106fb9af3; +[CHRPBFlightSettings descriptor] */

void FUN_106fb9a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8da8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50210,
                        &PTR____CFConstantStringClassReference_110e91778,&PTR_DAT_11319a788,
                        &PTR_DAT_11319b668,6,0x38,0x1c);
    puRam00000001136c8da8 = puVar1;
  }
  return;
}



/* Entry: 106fb9af4; end: 106fb9b03;  */

bool FUN_106fb9af4(int param_1)

{
  return param_1 - 1U < 8;
}



/* Entry: 106fb9b04; end: 106fb9b8f; +[HRMPBHermosaRpcRequest descriptor] */

undefined * FUN_106fb9b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8db8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b502b0,
                        &PTR____CFConstantStringClassReference_110e917b8,&PTR_DAT_11319cb60,
                        &PTR_DAT_11319cb78,0x75,0x398,0x1c);
    func_0x00010c229040();
    puRam00000001136c8db8 = puVar1;
  }
  return puRam00000001136c8db8;
}



/* Entry: 106fb9b90; end: 106fb9c1f; +[HRMPBHermosaRpcResponse descriptor] */

undefined * FUN_106fb9b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8dc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b50300,
                        &PTR____CFConstantStringClassReference_110e917d8,&PTR_DAT_11319cb60,
                        0x11319b908,0x75,0x380,0x1d);
    func_0x00010c229040();
    puRam00000001136c8dc0 = puVar1;
  }
  return puRam00000001136c8dc0;
}



/* Entry: 106fb9c20; end: 106fb9d03; +[HRMPBBoolValue descriptor] */

void FUN_106fb9c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8dc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b503a0,
                        &PTR____CFConstantStringClassReference_110e917f8,&PTR_DAT_11319da18,
                        &PTR_s_value_11319da30,1,4,0x1c);
    puRam00000001136c8dc8 = puVar1;
  }
  return;
}


