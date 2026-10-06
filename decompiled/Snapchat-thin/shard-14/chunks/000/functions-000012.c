/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af140d4; end: 10af1413b; +[SCMTMockMapMarkers descriptor] */

void FUN_10af140d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef4d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0fca0,
                        &PTR____CFConstantStringClassReference_110f365d8,
                        &PTR_s_snapchat_map_113327330,&PTR_DAT_1133274c8,1,0x10,0x1c);
    puRam00000001137ef4d0 = puVar1;
  }
  return;
}



/* Entry: 10af1413c; end: 10af141a3; +[SCMTPipelineRunCompletionMessage descriptor] */

void FUN_10af1413c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef4d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0fcf0,
                        &PTR____CFConstantStringClassReference_110f365f8,
                        &PTR_s_snapchat_map_113327330,&PTR_DAT_1133274e8,1,0x10,0x1c);
    puRam00000001137ef4d8 = puVar1;
  }
  return;
}



/* Entry: 10af141a4; end: 10af1420b; +[SCMTScheduleMarkerPipelineRunRequest descriptor] */

void FUN_10af141a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef4e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0fd40,
                        &PTR____CFConstantStringClassReference_110f36618,
                        &PTR_s_snapchat_map_113327330,0,0,4,0x1c);
    puRam00000001137ef4e0 = puVar1;
  }
  return;
}



/* Entry: 10af1420c; end: 10af14303; +[SCMTScheduleMarkerPipelineRunResponse descriptor] */

void FUN_10af1420c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef4e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0fd90,
                        &PTR____CFConstantStringClassReference_110f36638,
                        &PTR_s_snapchat_map_113327330,0,0,4,0x1c);
    puRam00000001137ef4e8 = puVar1;
  }
  return;
}



/* Entry: 10af14304; end: 10af1430f;  */

bool FUN_10af14304(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af14310; end: 10af1438b;  */

undefined * FUN_10af14310(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef4f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36678,
                        &UNK_10e538a48,&UNK_10e538ce8,0x19,FUN_10af1438c,0);
    do {
      if (puRam00000001137ef4f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef4f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef4f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef4f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef4f8;
}



/* Entry: 10af1438c; end: 10af143a7;  */

uint FUN_10af1438c(uint param_1)

{
  return (uint)(param_1 < 0x1b) & 0x7fffe7fU >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10af143a8; end: 10af14423;  */

undefined * FUN_10af143a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef500 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36698,
                        &UNK_10e538d4c,&UNK_10e538d80,3,FUN_10af14424,0);
    do {
      if (puRam00000001137ef500 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef500;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef500,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef500 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef500;
}



/* Entry: 10af14424; end: 10af1442f;  */

bool FUN_10af14424(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af14430; end: 10af144ab;  */

undefined * FUN_10af14430(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef508 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f366b8,
                        &UNK_10e538d8c,&UNK_10e538da4,3,FUN_10af144ac,0);
    do {
      if (puRam00000001137ef508 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef508;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef508,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef508 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef508;
}



/* Entry: 10af144ac; end: 10af144b7;  */

bool FUN_10af144ac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af144b8; end: 10af14533;  */

undefined * FUN_10af144b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef510 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f366d8,
                        &UNK_10e538db0,&UNK_10e538de4,4,FUN_10af14534,0);
    do {
      if (puRam00000001137ef510 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef510;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef510,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef510 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef510;
}



/* Entry: 10af14534; end: 10af1453f;  */

bool FUN_10af14534(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af14540; end: 10af145bb;  */

undefined * FUN_10af14540(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef518 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f366f8,
                        &UNK_10e538df4,&UNK_10e538e0c,3,FUN_10af145bc,0);
    do {
      if (puRam00000001137ef518 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef518;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef518,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef518 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef518;
}



/* Entry: 10af145bc; end: 10af145c7;  */

bool FUN_10af145bc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af145c8; end: 10af14643;  */

undefined * FUN_10af145c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef520 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36718,
                        &UNK_10e538e18,&UNK_10e538e3c,4,FUN_10af14644,0);
    do {
      if (puRam00000001137ef520 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef520;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef520,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef520 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef520;
}



/* Entry: 10af14644; end: 10af1464f;  */

bool FUN_10af14644(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af14650; end: 10af146cb;  */

undefined * FUN_10af14650(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef528 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36738,
                        &UNK_10e538e4c,&UNK_10e538e74,3,FUN_10af146cc,0);
    do {
      if (puRam00000001137ef528 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef528;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef528,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef528 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef528;
}



/* Entry: 10af146cc; end: 10af146d7;  */

bool FUN_10af146cc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af146d8; end: 10af1473f; +[SCAdInfo descriptor] */

void FUN_10af146d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ffc0,
                        &PTR____CFConstantStringClassReference_110f36758,&PTR_DAT_11332a1b0,0,0,4,
                        0x1c);
    puRam00000001137ef530 = puVar1;
  }
  return;
}



/* Entry: 10af14740; end: 10af147a7; +[SCAttributionInfo descriptor] */

void FUN_10af14740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10010,
                        &PTR____CFConstantStringClassReference_110f36778,&PTR_DAT_11332a1b0,
                        &PTR_s_userId_11332a308,3,0x20,0x1c);
    puRam00000001137ef538 = puVar1;
  }
  return;
}



/* Entry: 10af147a8; end: 10af1480f; +[SCLocalizedStringSet descriptor] */

void FUN_10af147a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10060,
                        &PTR____CFConstantStringClassReference_110f36798,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a208,2,0x18,0x1c);
    puRam00000001137ef540 = puVar1;
  }
  return;
}



/* Entry: 10af14810; end: 10af1488b; +[SCLocalizedStringSet_String descriptor] */

undefined * FUN_10af14810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c100b0,
                        &PTR____CFConstantStringClassReference_110f367b8,&PTR_DAT_11332a1b0,
                        &PTR_s_locale_11332a248,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137ef548 = puVar1;
  }
  return puRam00000001137ef548;
}



/* Entry: 10af1488c; end: 10af148f3; +[SCUserAction descriptor] */

void FUN_10af1488c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10100,
                        &PTR____CFConstantStringClassReference_110e4c2b8,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a3e8,5,0x18,0x1c);
    puRam00000001137ef550 = puVar1;
  }
  return;
}



/* Entry: 10af148f4; end: 10af14993; +[SCStoryElement descriptor] */

undefined * FUN_10af148f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10150,
                        &PTR____CFConstantStringClassReference_110f367d8,&PTR_DAT_11332a1b0,
                        &PTR_s_id_p_113329c08,0x2d,0x108,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e538ec0);
    puRam00000001137ef558 = puVar1;
  }
  return puRam00000001137ef558;
}



/* Entry: 10af14994; end: 10af14a1f; +[SCStoryElement_SnapInfo descriptor] */

undefined * FUN_10af14994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c101a0,
                        &PTR____CFConstantStringClassReference_110e8d5f8,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332ab48,0x23,0x100,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c10150);
    puRam00000001137ef560 = puVar1;
  }
  return puRam00000001137ef560;
}



/* Entry: 10af14a20; end: 10af14a9b; +[SCStoryElement_SnapInfo_TitleForZoom descriptor] */

undefined * FUN_10af14a20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c101f0,
                        &PTR____CFConstantStringClassReference_110f367f8,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a288,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137ef568 = puVar1;
  }
  return puRam00000001137ef568;
}



/* Entry: 10af14a9c; end: 10af14b27; +[SCStoryElement_WebMediaInfo descriptor] */

undefined * FUN_10af14a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10240,
                        &PTR____CFConstantStringClassReference_110f36818,&PTR_DAT_11332a1b0,
                        &PTR_s_contentURL_11332a2c8,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c10150);
    puRam00000001137ef570 = puVar1;
  }
  return puRam00000001137ef570;
}



/* Entry: 10af14b28; end: 10af14ba3; +[SCStoryElement_HtmlInfo descriptor] */

undefined * FUN_10af14b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10290,
                        &PTR____CFConstantStringClassReference_110f36838,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a1c8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef578 = puVar1;
  }
  return puRam00000001137ef578;
}



/* Entry: 10af14ba4; end: 10af14c2f; +[SCStoryElement_ThumbnailInfo descriptor] */

undefined * FUN_10af14ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c102e0,
                        &PTR____CFConstantStringClassReference_110e8d958,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a488,8,0x48,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c10150);
    puRam00000001137ef580 = puVar1;
  }
  return puRam00000001137ef580;
}



/* Entry: 10af14c30; end: 10af14cab; +[SCStoryElementMetrics descriptor] */

undefined * FUN_10af14c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10330,
                        &PTR____CFConstantStringClassReference_110f36858,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a868,0x17,0xb0,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef588 = puVar1;
  }
  return puRam00000001137ef588;
}



/* Entry: 10af14cac; end: 10af14d13; +[SCStoryElementDebug descriptor] */

void FUN_10af14cac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10380,
                        &PTR____CFConstantStringClassReference_110f36878,&PTR_DAT_11332a1b0,
                        &PTR_s_attributes_11332a1e8,1,0x10,0x1c);
    puRam00000001137ef590 = puVar1;
  }
  return;
}



/* Entry: 10af14d14; end: 10af14d8f; +[SCStoryManifest descriptor] */

undefined * FUN_10af14d14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c103d0,
                        &PTR____CFConstantStringClassReference_110f36898,&PTR_DAT_11332a1b0,
                        &PTR_s_id_p_11332a6a8,0xe,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef598 = puVar1;
  }
  return puRam00000001137ef598;
}



/* Entry: 10af14d90; end: 10af14e0b; +[SCSnapBoltMediaInfo descriptor] */

undefined * FUN_10af14d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10420,
                        &PTR____CFConstantStringClassReference_110f368b8,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a588,9,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef5a0 = puVar1;
  }
  return puRam00000001137ef5a0;
}



/* Entry: 10af14e0c; end: 10af14e73; +[SCSnapBoltInfo descriptor] */

void FUN_10af14e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10470,
                        &PTR____CFConstantStringClassReference_110e0bc18,&PTR_DAT_11332a1b0,
                        &PTR_DAT_11332a368,4,0x28,0x1c);
    puRam00000001137ef5a8 = puVar1;
  }
  return;
}



/* Entry: 10af14e74; end: 10af14eef; +[Audience descriptor] */

undefined * FUN_10af14e74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10510,
                        &PTR____CFConstantStringClassReference_110f368d8,&PTR_DAT_11332afa8,
                        &PTR_DAT_11332b000,6,4,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef5b0 = puVar1;
  }
  return puRam00000001137ef5b0;
}



/* Entry: 10af14ef0; end: 10af14f57; +[BrandSafety descriptor] */

void FUN_10af14ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10560,
                        &PTR____CFConstantStringClassReference_110f368f8,&PTR_DAT_11332afa8,
                        &PTR_DAT_11332afc0,2,4,0x1c);
    puRam00000001137ef5b8 = puVar1;
  }
  return;
}



/* Entry: 10af14f58; end: 10af1503b; +[SCR2MultiSnapExtension descriptor] */

void FUN_10af14f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10600,
                        &PTR____CFConstantStringClassReference_110e0bc78,&PTR_DAT_11332b0c0,
                        &PTR_DAT_11332b0d8,3,0x18,0x1c);
    puRam00000001137ef5c0 = puVar1;
  }
  return;
}



/* Entry: 10af1503c; end: 10af15047;  */

bool FUN_10af1503c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af15048; end: 10af150c3;  */

undefined * FUN_10af15048(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef5d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36938,
                        &UNK_10e538f00,&UNK_10e538f20,3,FUN_10af150c4,0);
    do {
      if (puRam00000001137ef5d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef5d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef5d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef5d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef5d0;
}



/* Entry: 10af150c4; end: 10af150cf;  */

bool FUN_10af150c4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af150d0; end: 10af15137; +[SASAudioStitch descriptor] */

void FUN_10af150d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c106a0,
                        &PTR____CFConstantStringClassReference_110f36958,&PTR_DAT_11332b140,
                        &PTR_s_id_p_11332b698,7,0x30,0x1c);
    puRam00000001137ef5d8 = puVar1;
  }
  return;
}



/* Entry: 10af15138; end: 10af1519f; +[SASAudioStitchPoint descriptor] */

void FUN_10af15138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c106f0,
                        &PTR____CFConstantStringClassReference_110f36978,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b478,4,0x20,0x1c);
    puRam00000001137ef5e0 = puVar1;
  }
  return;
}



/* Entry: 10af151a0; end: 10af15207; +[SASTrack descriptor] */

void FUN_10af151a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10740,
                        &PTR____CFConstantStringClassReference_110f36998,&PTR_DAT_11332b140,
                        &PTR_s_trackId_11332b1f8,2,0x18,0x1c);
    puRam00000001137ef5e8 = puVar1;
  }
  return;
}



/* Entry: 10af15208; end: 10af1526f; +[SASTrackMatch descriptor] */

void FUN_10af15208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10790,
                        &PTR____CFConstantStringClassReference_110f369b8,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b5f8,5,0x28,0x1c);
    puRam00000001137ef5f0 = puVar1;
  }
  return;
}



/* Entry: 10af15270; end: 10af152fb; +[SASAudioStitchIngest descriptor] */

undefined * FUN_10af15270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef5f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c107e0,
                        &PTR____CFConstantStringClassReference_110f369d8,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b2f8,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137ef5f8 = puVar1;
  }
  return puRam00000001137ef5f8;
}



/* Entry: 10af152fc; end: 10af15377; +[SASAudioFingerprintMessage descriptor] */

undefined * FUN_10af152fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10830,
                        &PTR____CFConstantStringClassReference_110f369f8,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b778,0x10,0x78,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ef600 = puVar1;
  }
  return puRam00000001137ef600;
}



/* Entry: 10af15378; end: 10af153df; +[SASSnapDeletionMessage descriptor] */

void FUN_10af15378(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10880,
                        &PTR____CFConstantStringClassReference_110f36a18,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b358,3,0x20,0x1c);
    puRam00000001137ef608 = puVar1;
  }
  return;
}



/* Entry: 10af153e0; end: 10af15447; +[SASDataflowMessage descriptor] */

void FUN_10af153e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10c68,
                        &PTR____CFConstantStringClassReference_110f36a38,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b158,1,0x10,0x1c);
    puRam00000001137ef610 = puVar1;
  }
  return;
}



/* Entry: 10af15448; end: 10af154cb; +[SASDataflowMessage_AudioStitchAction descriptor] */

undefined * FUN_10af15448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10c90,
                        &PTR____CFConstantStringClassReference_110f36a58,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b238,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef618 = puVar1;
  }
  return puRam00000001137ef618;
}



/* Entry: 10af154cc; end: 10af15533; +[SASComputeAudioStitchesRequest descriptor] */

void FUN_10af154cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10920,
                        &PTR____CFConstantStringClassReference_110f36a78,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b3b8,3,0x18,0x1c);
    puRam00000001137ef620 = puVar1;
  }
  return;
}



/* Entry: 10af15534; end: 10af1559b; +[SASComputeAudioStitchesResponse descriptor] */

void FUN_10af15534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10970,
                        &PTR____CFConstantStringClassReference_110f36a98,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b178,1,0x10,0x1c);
    puRam00000001137ef628 = puVar1;
  }
  return;
}



/* Entry: 10af1559c; end: 10af15603; +[SASAudioStitchMediaRequest descriptor] */

void FUN_10af1559c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c109c0,
                        &PTR____CFConstantStringClassReference_110f36ab8,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b418,3,0x20,0x1c);
    puRam00000001137ef630 = puVar1;
  }
  return;
}



/* Entry: 10af15604; end: 10af1566b; +[SASAudioStitchMediaResponse descriptor] */

void FUN_10af15604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10a10,
                        &PTR____CFConstantStringClassReference_110f36ad8,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b4f8,4,0x20,0x1c);
    puRam00000001137ef638 = puVar1;
  }
  return;
}



/* Entry: 10af1566c; end: 10af156d3; +[SASMediaInfo descriptor] */

void FUN_10af1566c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10a60,
                        &PTR____CFConstantStringClassReference_110e0bbf8,&PTR_DAT_11332b140,
                        &PTR_s_bucket_11332b578,4,0x28,0x1c);
    puRam00000001137ef640 = puVar1;
  }
  return;
}



/* Entry: 10af156d4; end: 10af1573b; +[SASMatchSnapRequest descriptor] */

void FUN_10af156d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10ab0,
                        &PTR____CFConstantStringClassReference_110f36af8,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b198,1,0x10,0x1c);
    puRam00000001137ef648 = puVar1;
  }
  return;
}



/* Entry: 10af1573c; end: 10af157a3; +[SASMatchSnapResponse descriptor] */

void FUN_10af1573c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10b00,
                        &PTR____CFConstantStringClassReference_110f36b18,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b1b8,1,0x10,0x1c);
    puRam00000001137ef650 = puVar1;
  }
  return;
}



/* Entry: 10af157a4; end: 10af1580b; +[SASUploadTrackRequest descriptor] */

void FUN_10af157a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10b50,
                        &PTR____CFConstantStringClassReference_110f36b38,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b278,2,0x18,0x1c);
    puRam00000001137ef658 = puVar1;
  }
  return;
}



/* Entry: 10af1580c; end: 10af15873; +[SASUploadTrackResponse descriptor] */

void FUN_10af1580c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10ba0,
                        &PTR____CFConstantStringClassReference_110f36b58,&PTR_DAT_11332b140,0,0,4,
                        0x1c);
    puRam00000001137ef660 = puVar1;
  }
  return;
}



/* Entry: 10af15874; end: 10af158db; +[SASGetTrackStitchRequest descriptor] */

void FUN_10af15874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10bf0,
                        &PTR____CFConstantStringClassReference_110f36b78,&PTR_DAT_11332b140,
                        &PTR_s_trackId_11332b2b8,2,0x18,0x1c);
    puRam00000001137ef668 = puVar1;
  }
  return;
}



/* Entry: 10af158dc; end: 10af159d3; +[SASGetTrackStitchResponse descriptor] */

void FUN_10af158dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10c40,
                        &PTR____CFConstantStringClassReference_110f36b98,&PTR_DAT_11332b140,
                        &PTR_DAT_11332b1d8,1,0x10,0x1c);
    puRam00000001137ef670 = puVar1;
  }
  return;
}



/* Entry: 10af159d4; end: 10af159df;  */

bool FUN_10af159d4(uint param_1)

{
  return param_1 < 0x1a;
}



/* Entry: 10af159e0; end: 10af15a5b;  */

undefined * FUN_10af159e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef680 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36bb8,
                        &UNK_10e539133,&UNK_10e539158,4,FUN_10af15a5c,0);
    do {
      if (puRam00000001137ef680 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef680;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef680,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef680 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef680;
}



/* Entry: 10af15a5c; end: 10af15a67;  */

bool FUN_10af15a5c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af15a68; end: 10af15ae3;  */

undefined * FUN_10af15a68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef688 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36bd8,
                        &UNK_10e539168,&UNK_10e53917c,4,FUN_10af15ae4,0);
    do {
      if (puRam00000001137ef688 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef688;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef688,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef688 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef688;
}



/* Entry: 10af15ae4; end: 10af15aef;  */

bool FUN_10af15ae4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af15af0; end: 10af15b6b;  */

undefined * FUN_10af15af0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef690 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36bf8,
                        &UNK_10e53918c,&UNK_10e5391b4,4,FUN_10af15b6c,0);
    do {
      if (puRam00000001137ef690 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef690;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef690,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef690 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef690;
}



/* Entry: 10af15b6c; end: 10af15b77;  */

bool FUN_10af15b6c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af15b78; end: 10af15bf3;  */

undefined * FUN_10af15b78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef698 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36c18,
                        &UNK_10e5391c4,&UNK_10e5391cc,2,FUN_10af15bf4,0);
    do {
      if (puRam00000001137ef698 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef698;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef698,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef698 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef698;
}



/* Entry: 10af15bf4; end: 10af15bff;  */

bool FUN_10af15bf4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af15c00; end: 10af15c8f;  */

undefined * FUN_10af15c00(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef6a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36c38,
                        &UNK_10e5391d4,&UNK_10e5391e4,2,FUN_10af15c90,0,&UNK_10e539258);
    do {
      if (puRam00000001137ef6a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef6a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef6a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef6a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef6a0;
}



/* Entry: 10af15c90; end: 10af15c9b;  */

bool FUN_10af15c90(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10af15c9c; end: 10af15d17;  */

undefined * FUN_10af15c9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ef6a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f36c58,
                        &UNK_10e5391ec,&UNK_10e539224,4,FUN_10af15d18,0);
    do {
      if (puRam00000001137ef6a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ef6a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ef6a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ef6a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ef6a8;
}



/* Entry: 10af15d18; end: 10af15d23;  */

bool FUN_10af15d18(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af15d24; end: 10af15dc3; +[SnapBrainRequest descriptor] */

undefined * FUN_10af15d24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c118c0,
                        &PTR____CFConstantStringClassReference_110f36c78,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332d838,0x11,0x88,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e539234);
    puRam00000001137ef6b0 = puVar1;
  }
  return puRam00000001137ef6b0;
}



/* Entry: 10af15dc4; end: 10af15e47; +[SnapBrainRequest_Face descriptor] */

undefined * FUN_10af15dc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c118e8,
                        &PTR____CFConstantStringClassReference_110e82ef8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332be78,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6b8 = puVar1;
  }
  return puRam00000001137ef6b8;
}



/* Entry: 10af15e48; end: 10af15ecb; +[SnapBrainRequest_SnapLang descriptor] */

undefined * FUN_10af15e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11910,
                        &PTR____CFConstantStringClassReference_110f36c98,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332bcf8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6c0 = puVar1;
  }
  return puRam00000001137ef6c0;
}



/* Entry: 10af15ecc; end: 10af15f4f; +[SnapBrainRequest_Tag descriptor] */

undefined * FUN_10af15ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11938,
                        &PTR____CFConstantStringClassReference_110e8d078,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332bd18,1,4,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6c8 = puVar1;
  }
  return puRam00000001137ef6c8;
}



/* Entry: 10af15f50; end: 10af15fd3; +[SnapBrainRequest_LogoDetection descriptor] */

undefined * FUN_10af15f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11960,
                        &PTR____CFConstantStringClassReference_110f36cb8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332beb8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6d0 = puVar1;
  }
  return puRam00000001137ef6d0;
}



/* Entry: 10af15fd4; end: 10af16057; +[SnapBrainRequest_SnapText descriptor] */

undefined * FUN_10af15fd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11988,
                        &PTR____CFConstantStringClassReference_110f36cd8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332bd38,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6d8 = puVar1;
  }
  return puRam00000001137ef6d8;
}



/* Entry: 10af16058; end: 10af160db; +[SnapBrainRequest_Safety descriptor] */

undefined * FUN_10af16058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c119b0,
                        &PTR____CFConstantStringClassReference_110dc6638,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332bd58,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6e0 = puVar1;
  }
  return puRam00000001137ef6e0;
}



/* Entry: 10af160dc; end: 10af16143; +[SnapBrainResponse descriptor] */

void FUN_10af160dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10e48,
                        &PTR____CFConstantStringClassReference_110f36cf8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332cb78,5,0x28,0x1c);
    puRam00000001137ef6e8 = puVar1;
  }
  return;
}



/* Entry: 10af16144; end: 10af161c3; +[SnapBrainResponse_Results descriptor] */

undefined * FUN_10af16144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10e98,
                        &PTR____CFConstantStringClassReference_110f36d18,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332b978,0x1b,0xd8,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6f0 = puVar1;
  }
  return puRam00000001137ef6f0;
}



/* Entry: 10af161c4; end: 10af16243; +[SnapBrainResponse_Results_Tag descriptor] */

undefined * FUN_10af161c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef6f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10ee8,
                        &PTR____CFConstantStringClassReference_110e8d078,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332d658,0xf,0x68,0x1c);
    func_0x00010c228780();
    puRam00000001137ef6f8 = puVar1;
  }
  return puRam00000001137ef6f8;
}



/* Entry: 10af16244; end: 10af162bf; +[SnapBrainResponse_Results_Interestingness descriptor] */

undefined * FUN_10af16244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10f38,
                        &PTR____CFConstantStringClassReference_110f36d38,&PTR_DAT_11332bce0,
                        &PTR_s_score_11332c5f8,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137ef700 = puVar1;
  }
  return puRam00000001137ef700;
}



/* Entry: 10af162c0; end: 10af1633b; +[SnapBrainResponse_Results_AudioFingerprint descriptor] */

undefined * FUN_10af162c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10f88,
                        &PTR____CFConstantStringClassReference_110f36d58,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332c678,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137ef708 = puVar1;
  }
  return puRam00000001137ef708;
}



/* Entry: 10af1633c; end: 10af163b7; +[SnapBrainResponse_Results_Hydra descriptor] */

undefined * FUN_10af1633c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c10fd8,
                        &PTR____CFConstantStringClassReference_110f36d78,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332c2f8,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef710 = puVar1;
  }
  return puRam00000001137ef710;
}



/* Entry: 10af163b8; end: 10af16433; +[SnapBrainResponse_Results_OpenNSFW descriptor] */

undefined * FUN_10af163b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11028,
                        &PTR____CFConstantStringClassReference_110f36d98,&PTR_DAT_11332bce0,
                        &PTR_s_score_11332bd78,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef718 = puVar1;
  }
  return puRam00000001137ef718;
}



/* Entry: 10af16434; end: 10af164b3; +[SnapBrainResponse_Results_MediaInfo descriptor] */

undefined * FUN_10af16434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11078,
                        &PTR____CFConstantStringClassReference_110e0bbf8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332cf38,6,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137ef720 = puVar1;
  }
  return puRam00000001137ef720;
}



/* Entry: 10af164b4; end: 10af1653f; +[SnapBrainResponse_Results_Face descriptor] */

undefined * FUN_10af164b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c119d8,
                        &PTR____CFConstantStringClassReference_110e82ef8,&PTR_DAT_11332bce0,
                        &PTR_s_version_11332bef8,2,0x18,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c10e98);
    puRam00000001137ef728 = puVar1;
  }
  return puRam00000001137ef728;
}



/* Entry: 10af16540; end: 10af165c3; +[SnapBrainResponse_Results_Face_Detection descriptor] */

undefined * FUN_10af16540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11a00,
                        &PTR____CFConstantStringClassReference_110f36db8,&PTR_DAT_11332bce0,
                        &PTR_s_attributes_11332c6f8,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137ef730 = puVar1;
  }
  return puRam00000001137ef730;
}



/* Entry: 10af165c4; end: 10af16647; +[SnapBrainResponse_Results_Face_Detection_Attributes descriptor] */

undefined * FUN_10af165c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11a28,
                        &PTR____CFConstantStringClassReference_110f36dd8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332c778,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137ef738 = puVar1;
  }
  return puRam00000001137ef738;
}



/* Entry: 10af16648; end: 10af166cb; +[SnapBrainResponse_Results_Face_Detection_Attributes_Gender descriptor] */

undefined * FUN_10af16648(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11a50,
                        &PTR____CFConstantStringClassReference_110f36df8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332bf38,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137ef740 = puVar1;
  }
  return puRam00000001137ef740;
}



/* Entry: 10af166cc; end: 10af1674f; +[SnapBrainResponse_Results_Face_Detection_BoundingBox descriptor] */

undefined * FUN_10af166cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11a78,
                        &PTR____CFConstantStringClassReference_110f36e18,&PTR_DAT_11332bce0,
                        &PTR_s_height_11332cc18,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137ef748 = puVar1;
  }
  return puRam00000001137ef748;
}



/* Entry: 10af16750; end: 10af167cb; +[SnapBrainResponse_Results_NormalizedBoundingBox descriptor] */

undefined * FUN_10af16750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11190,
                        &PTR____CFConstantStringClassReference_110f36e38,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332c7f8,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001137ef750 = puVar1;
  }
  return puRam00000001137ef750;
}



/* Entry: 10af167cc; end: 10af16847; +[SnapBrainResponse_Results_LogoDetection descriptor] */

undefined * FUN_10af167cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11aa0,
                        &PTR____CFConstantStringClassReference_110f36cb8,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332c878,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137ef758 = puVar1;
  }
  return puRam00000001137ef758;
}



/* Entry: 10af16848; end: 10af168db; +[SnapBrainResponse_Results_LogoDetection_Detection descriptor] */

undefined * FUN_10af16848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11ac8,
                        &PTR____CFConstantStringClassReference_110f36db8,&PTR_DAT_11332bce0,
                        &PTR_s_objectId_11332c8f8,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c11aa0);
    puRam00000001137ef760 = puVar1;
  }
  return puRam00000001137ef760;
}



/* Entry: 10af168dc; end: 10af16963; +[SnapBrainResponse_Results_LogoDetection_LogoBoundingBox descriptor] */

undefined * FUN_10af168dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11af0,
                        &PTR____CFConstantStringClassReference_110f36e58,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332ccb8,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137ef768 = puVar1;
  }
  return puRam00000001137ef768;
}



/* Entry: 10af16964; end: 10af169df; +[SnapBrainResponse_Results_SpokenKeywords descriptor] */

undefined * FUN_10af16964(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11b18,
                        &PTR____CFConstantStringClassReference_110f36e78,&PTR_DAT_11332bce0,
                        &PTR_s_status_11332bf78,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ef770 = puVar1;
  }
  return puRam00000001137ef770;
}



/* Entry: 10af169e0; end: 10af16a67; +[SnapBrainResponse_Results_SpokenKeywords_Result descriptor] */

undefined * FUN_10af169e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ef778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c11b40,
                        &PTR____CFConstantStringClassReference_110debb78,&PTR_DAT_11332bce0,
                        &PTR_DAT_11332cd58,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137ef778 = puVar1;
  }
  return puRam00000001137ef778;
}


