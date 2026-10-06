/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1058ed338; end: 1058ed3b3;  */

undefined * FUN_1058ed338(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c13e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c1b8,
                        &UNK_10ddc0fa4,&UNK_10ddc0fd4,5,FUN_1058ed3b4,0);
    do {
      if (puRam00000001136c13e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c13e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c13e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c13e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c13e0;
}



/* Entry: 1058ed3b4; end: 1058ed3bf;  */

bool FUN_1058ed3b4(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1058ed3c0; end: 1058ed43b;  */

undefined * FUN_1058ed3c0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c13e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c1d8,
                        &UNK_10ddc0fe8,&UNK_10ddc115c,0x18,FUN_1058ed43c,0);
    do {
      if (puRam00000001136c13e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c13e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c13e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c13e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c13e8;
}



/* Entry: 1058ed43c; end: 1058ed447;  */

bool FUN_1058ed43c(uint param_1)

{
  return param_1 < 0x18;
}



/* Entry: 1058ed448; end: 1058ed4d7;  */

undefined * FUN_1058ed448(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c13f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c1f8,
                        &UNK_10ddc11bc,&UNK_10ddc150c,0x33,FUN_1058ed4d8,0,&UNK_10ddc15d8);
    do {
      if (puRam00000001136c13f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c13f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c13f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c13f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c13f0;
}



/* Entry: 1058ed4d8; end: 1058ed4fb;  */

bool FUN_1058ed4d8(uint param_1)

{
  return param_1 < 0x2c || (param_1 - 500 < 6 || param_1 == 1000);
}



/* Entry: 1058ed4fc; end: 1058ed577;  */

undefined * FUN_1058ed4fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c13f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c218,
                        &UNK_10ddc15de,&UNK_10ddc162c,6,FUN_1058ed578,0);
    do {
      if (puRam00000001136c13f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c13f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c13f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c13f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c13f8;
}



/* Entry: 1058ed578; end: 1058ed583;  */

bool FUN_1058ed578(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1058ed584; end: 1058ed5ff;  */

undefined * FUN_1058ed584(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1400 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c238,
                        &UNK_10ddc1644,&UNK_10ddc168c,4,FUN_1058ed600,0);
    do {
      if (puRam00000001136c1400 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1400;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1400,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1400 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1400;
}



/* Entry: 1058ed600; end: 1058ed60b;  */

bool FUN_1058ed600(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1058ed60c; end: 1058ed687;  */

undefined * FUN_1058ed60c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1408 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c258,
                        &UNK_10ddc169c,&UNK_10ddc16e4,4,FUN_1058ed688,0);
    do {
      if (puRam00000001136c1408 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1408;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1408,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1408 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1408;
}



/* Entry: 1058ed688; end: 1058ed693;  */

bool FUN_1058ed688(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1058ed694; end: 1058ed70f;  */

undefined * FUN_1058ed694(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c1410 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e0c278,
                        &UNK_10ddc16f4,&UNK_10ddc1710,5,FUN_1058ed710,0);
    do {
      if (puRam00000001136c1410 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c1410;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c1410,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c1410 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c1410;
}



/* Entry: 1058ed710; end: 1058ed71b;  */

bool FUN_1058ed710(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 1058ed71c; end: 1058ed797; +[SCSIDXSnapModFeatures descriptor] */

undefined * FUN_1058ed71c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1418 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79760,
                        &PTR____CFConstantStringClassReference_110e0c298,&PTR_DAT_11310bb10,
                        &PTR_DAT_11310bc88,0x2b,0x78,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c1418 = puVar1;
  }
  return puRam00000001136c1418;
}



/* Entry: 1058ed798; end: 1058ed813; +[SCSIDXSnapModFeatures_EscalationType descriptor] */

undefined * FUN_1058ed798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1420 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a797b0,
                        &PTR____CFConstantStringClassReference_110e0c2b8,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c1420 = puVar1;
  }
  return puRam00000001136c1420;
}



/* Entry: 1058ed814; end: 1058ed88f; +[SCSIDXSnapModFeatures_StitchType descriptor] */

undefined * FUN_1058ed814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1428 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79800,
                        &PTR____CFConstantStringClassReference_110e0c2d8,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c1428 = puVar1;
  }
  return puRam00000001136c1428;
}



/* Entry: 1058ed890; end: 1058ed90b; +[SCSIDXSnapModFeatures_ModerationSource descriptor] */

undefined * FUN_1058ed890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1430 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79850,
                        &PTR____CFConstantStringClassReference_110e0c2f8,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c1430 = puVar1;
  }
  return puRam00000001136c1430;
}



/* Entry: 1058ed90c; end: 1058ed987; +[SCSIDXSnapModFeatures_GarmBrandSafety descriptor] */

undefined * FUN_1058ed90c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1438 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a798a0,
                        &PTR____CFConstantStringClassReference_110e0c318,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c1438 = puVar1;
  }
  return puRam00000001136c1438;
}



/* Entry: 1058ed988; end: 1058eda03; +[SCSIDXSnapModFeatures_NotificationCaptionAbusiveness descriptor] */

undefined * FUN_1058ed988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1440 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a798f0,
                        &PTR____CFConstantStringClassReference_110e0c338,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001136c1440 = puVar1;
  }
  return puRam00000001136c1440;
}



/* Entry: 1058eda04; end: 1058eda6b; +[SCSIDXRejectionReason descriptor] */

void FUN_1058eda04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1448 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79940,
                        &PTR____CFConstantStringClassReference_110e0c358,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1448 = puVar1;
  }
  return;
}



/* Entry: 1058eda6c; end: 1058edad3; +[SCSIDXRejectionReasonV2 descriptor] */

void FUN_1058eda6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1450 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79990,
                        &PTR____CFConstantStringClassReference_110e0c378,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1450 = puVar1;
  }
  return;
}



/* Entry: 1058edad4; end: 1058edb3b; +[SCSIDXModerationQueueInfo descriptor] */

void FUN_1058edad4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1458 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a799e0,
                        &PTR____CFConstantStringClassReference_110e0c398,&PTR_DAT_11310bb10,
                        &PTR_s_countryCode_11310bb28,2,0x18,0x1c);
    puRam00000001136c1458 = puVar1;
  }
  return;
}



/* Entry: 1058edb3c; end: 1058edba3; +[SCSIDXModerationScope descriptor] */

void FUN_1058edb3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1460 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79a30,
                        &PTR____CFConstantStringClassReference_110e0c3b8,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1460 = puVar1;
  }
  return;
}



/* Entry: 1058edba4; end: 1058edc0b; +[SCSIDXModerationRating descriptor] */

void FUN_1058edba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1468 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79a80,
                        &PTR____CFConstantStringClassReference_110e0c3d8,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1468 = puVar1;
  }
  return;
}



/* Entry: 1058edc0c; end: 1058edc73; +[SCSIDXModerationPolicyViolationType descriptor] */

void FUN_1058edc0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1470 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79ad0,
                        &PTR____CFConstantStringClassReference_110e0c3f8,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1470 = puVar1;
  }
  return;
}



/* Entry: 1058edc74; end: 1058edcdb; +[SCSIDXModerationCategory descriptor] */

void FUN_1058edc74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1478 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79b20,
                        &PTR____CFConstantStringClassReference_110e0c418,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1478 = puVar1;
  }
  return;
}



/* Entry: 1058edcdc; end: 1058edd43; +[SCSIDXModerationAudience descriptor] */

void FUN_1058edcdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79b70,
                        &PTR____CFConstantStringClassReference_110e0c438,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1480 = puVar1;
  }
  return;
}



/* Entry: 1058edd44; end: 1058eddab; +[SCSIDXModerationMode descriptor] */

void FUN_1058edd44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1488 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79bc0,
                        &PTR____CFConstantStringClassReference_110e0c458,&PTR_DAT_11310bb10,0,0,4,
                        0x1c);
    puRam00000001136c1488 = puVar1;
  }
  return;
}



/* Entry: 1058eddac; end: 1058ede13; +[SCSIDXAccountCategory descriptor] */

void FUN_1058eddac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79c10,
                        &PTR____CFConstantStringClassReference_110e0c478,&PTR_DAT_11310bb10,
                        &PTR_DAT_11310bba8,7,0x28,0x1c);
    puRam00000001136c1490 = puVar1;
  }
  return;
}



/* Entry: 1058ede14; end: 1058ede7b; +[SCSIDXSnapModHistory descriptor] */

void FUN_1058ede14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c1498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a79c60,
                        &PTR____CFConstantStringClassReference_110e0c498,&PTR_DAT_11310bb10,
                        &PTR_DAT_11310bb68,2,0x18,0x1c);
    puRam00000001136c1498 = puVar1;
  }
  return;
}



/* Entry: 1058ede7c; end: 1058ee1bb;  */

/* WARNING: Removing unreachable block (ram,0x0001058eeacc) */
/* WARNING: Removing unreachable block (ram,0x0001058ee428) */
/* WARNING: Removing unreachable block (ram,0x0001058ee16c) */
/* WARNING: Removing unreachable block (ram,0x0001058ee758) */
/* WARNING: Removing unreachable block (ram,0x0001058eeee0) */

void FUN_1058ede7c(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8,undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x24;
  char *unaff_x25;
  undefined1 *puVar16;
  double dVar17;
  double dVar18;
  char acStack_4c0 [24];
  undefined1 *puStack_4a8;
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined8 auStack_428 [2];
  char cStack_411;
  long alStack_410 [2];
  char acStack_3a0 [24];
  undefined1 *puStack_388;
  undefined8 auStack_380 [3];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined8 auStack_320 [2];
  char cStack_309;
  long lStack_308;
  char acStack_298 [24];
  char *pcStack_280;
  undefined8 auStack_278 [3];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char acStack_1b0 [24];
  undefined1 *puStack_198;
  undefined8 auStack_190 [3];
  undefined1 auStack_178 [24];
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  char acStack_e8 [24];
  char *pcStack_d0;
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar2 = param_4;
  pcVar7 = param_5;
  pcVar3 = param_6;
  dVar17 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_c8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,pcVar1);
    unaff_x25 = (char *)auStack_c8;
    unaff_x24 = auStack_80;
    pcVar1 = "true";
    if ((int)param_6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    acStack_e8[0] = '\0';
    acStack_e8[1] = '\0';
    acStack_e8[2] = '\0';
    acStack_e8[3] = '\0';
    acStack_e8[4] = '\0';
    acStack_e8[5] = '\0';
    acStack_e8[6] = '\0';
    acStack_e8[7] = '\0';
    acStack_e8[8] = '\0';
    acStack_e8[9] = '\0';
    acStack_e8[10] = '\0';
    acStack_e8[0xb] = '\0';
    acStack_e8[0xc] = '\0';
    acStack_e8[0xd] = '\0';
    acStack_e8[0xe] = '\0';
    acStack_e8[0xf] = '\0';
    acStack_e8[0x10] = '\0';
    acStack_e8[0x11] = '\0';
    acStack_e8[0x12] = '\0';
    acStack_e8[0x13] = '\0';
    acStack_e8[0x14] = '\0';
    acStack_e8[0x15] = '\0';
    acStack_e8[0x16] = '\0';
    acStack_e8[0x17] = '\0';
    func_0x00010007e1e8(acStack_e8,auStack_c8,&lStack_68,4);
    dVar17 = param_1 * 1000.0;
    pcVar7 = (char *)(long)dVar17;
    pcVar1 = "\x01";
    pcVar2 = acStack_e8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_d0 = acStack_e8;
    func_0x00010007e5dc(&pcStack_d0);
    lVar14 = 0;
    do {
      if ((&cStack_69)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x60);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_5);
    puVar15 = auStack_c8;
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != puVar15);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar1;
    __Unwind_Resume();
    pcVar5 = acStack_1b0;
    lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = param_3;
    pcVar4 = pcVar2;
    pcVar8 = pcVar7;
    dVar18 = dVar17;
    _objc_retain(param_3);
    _objc_retain(pcVar2);
    if (pcVar9 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar2);
      plVar13 = *(long **)(pcVar9 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_190,pcVar1);
      _objc_retain(pcVar2);
      if (pcVar2 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar2);
        pcVar1 = pcVar2;
        func_0x00010bdc3520(pcVar2);
      }
      _objc_release(pcVar2);
      func_0x00010002b838(auStack_178,pcVar1);
      unaff_x24 = auStack_190;
      puVar15 = auStack_160;
      pcVar1 = "true";
      if ((int)pcVar7 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(puVar15,pcVar1);
      acStack_1b0[0] = '\0';
      acStack_1b0[1] = '\0';
      acStack_1b0[2] = '\0';
      acStack_1b0[3] = '\0';
      acStack_1b0[4] = '\0';
      acStack_1b0[5] = '\0';
      acStack_1b0[6] = '\0';
      acStack_1b0[7] = '\0';
      acStack_1b0[8] = '\0';
      acStack_1b0[9] = '\0';
      acStack_1b0[10] = '\0';
      acStack_1b0[0xb] = '\0';
      acStack_1b0[0xc] = '\0';
      acStack_1b0[0xd] = '\0';
      acStack_1b0[0xe] = '\0';
      acStack_1b0[0xf] = '\0';
      acStack_1b0[0x10] = '\0';
      acStack_1b0[0x11] = '\0';
      acStack_1b0[0x12] = '\0';
      acStack_1b0[0x13] = '\0';
      acStack_1b0[0x14] = '\0';
      acStack_1b0[0x15] = '\0';
      acStack_1b0[0x16] = '\0';
      acStack_1b0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1b0,auStack_190,&lStack_148,3);
      dVar18 = dVar17 * 1000.0;
      pcVar8 = (char *)(long)dVar18;
      pcVar1 = "\x01";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_198 = acStack_1b0;
      func_0x00010007e5dc(&puStack_198);
      lVar14 = 0;
      pcVar4 = pcVar5;
      do {
        if ((&cStack_149)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_160 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x48);
      _objc_release(pcVar2);
      _objc_release(param_3);
    }
    pcVar7 = pcVar2;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_148) {
      ___stack_chk_fail();
      _objc_release(pcVar2);
      do {
        puVar15 = puVar15 + -3;
      } while (puVar15 != auStack_190);
      _objc_release(pcVar2);
      _objc_release(param_3);
      _objc_release(pcVar2);
      _objc_release(param_3);
      param_3 = pcVar1;
      __Unwind_Resume();
      lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = param_3;
      pcVar2 = pcVar4;
      pcVar9 = pcVar8;
      pcVar5 = pcVar3;
      _objc_retain(param_3);
      _objc_retain(pcVar4);
      _objc_retain(pcVar8);
      if (pcVar7 != (char *)0x0) {
        _objc_retain(param_3);
        _objc_retain(pcVar4);
        _objc_retain(pcVar8);
        plVar13 = *(long **)(pcVar7 + 8);
        _objc_retain(param_3);
        if (param_3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = param_3;
          _objc_retainAutorelease(param_3);
          func_0x00010bdc3520();
        }
        _objc_release(param_3);
        func_0x00010002b838(auStack_278,pcVar1);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar1 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_260,pcVar1);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar1 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_248,pcVar1);
        unaff_x25 = (char *)auStack_278;
        unaff_x24 = auStack_230;
        pcVar1 = "true";
        if ((int)pcVar3 == 0) {
          pcVar1 = "false";
        }
        func_0x00010002b838(unaff_x24,pcVar1);
        acStack_298[0] = '\0';
        acStack_298[1] = '\0';
        acStack_298[2] = '\0';
        acStack_298[3] = '\0';
        acStack_298[4] = '\0';
        acStack_298[5] = '\0';
        acStack_298[6] = '\0';
        acStack_298[7] = '\0';
        acStack_298[8] = '\0';
        acStack_298[9] = '\0';
        acStack_298[10] = '\0';
        acStack_298[0xb] = '\0';
        acStack_298[0xc] = '\0';
        acStack_298[0xd] = '\0';
        acStack_298[0xe] = '\0';
        acStack_298[0xf] = '\0';
        acStack_298[0x10] = '\0';
        acStack_298[0x11] = '\0';
        acStack_298[0x12] = '\0';
        acStack_298[0x13] = '\0';
        acStack_298[0x14] = '\0';
        acStack_298[0x15] = '\0';
        acStack_298[0x16] = '\0';
        acStack_298[0x17] = '\0';
        func_0x00010007e1e8(acStack_298,auStack_278,&lStack_218,4);
        pcVar9 = (char *)(long)(dVar18 * 1000.0);
        pcVar1 = "\x01";
        pcVar2 = acStack_298;
        (**(code **)(*plVar13 + 0x18))(plVar13);
        pcStack_280 = acStack_298;
        func_0x00010007e5dc(&pcStack_280);
        lVar14 = 0;
        do {
          if ((&cStack_219)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x60);
        _objc_release(pcVar8);
        _objc_release(pcVar4);
        _objc_release(param_3);
      }
      _objc_release(pcVar8);
      pcVar7 = pcVar4;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
        ___stack_chk_fail();
        _objc_release(pcVar8);
        do {
          unaff_x24 = unaff_x24 + -3;
        } while (unaff_x24 != auStack_278);
        _objc_release(pcVar8);
        _objc_release(pcVar4);
        _objc_release(param_3);
        _objc_release(pcVar8);
        _objc_release(pcVar4);
        _objc_release(param_3);
        __Unwind_Resume();
        pcVar6 = acStack_3a0;
        lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar3 = pcVar1;
        pcVar4 = pcVar2;
        pcVar8 = pcVar9;
        pcVar10 = pcVar5;
        pcVar11 = param_7;
        pcVar12 = param_8;
        _objc_retain(pcVar1);
        _objc_retain(pcVar2);
        _objc_retain(pcVar9);
        _objc_retain(param_7);
        if (pcVar7 != (char *)0x0) {
          plVar13 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar1);
          if (pcVar1 == (char *)0x0) {
            pcVar7 = "";
          }
          else {
            pcVar7 = pcVar1;
            _objc_retainAutorelease(pcVar1);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar1);
          func_0x00010002b838(auStack_380,pcVar7);
          _objc_retain(pcVar2);
          if (pcVar2 == (char *)0x0) {
            pcVar7 = "";
          }
          else {
            _objc_retainAutorelease(pcVar2);
            pcVar7 = pcVar2;
            func_0x00010bdc3520(pcVar2);
          }
          _objc_release(pcVar2);
          func_0x00010002b838(auStack_368,pcVar7);
          _objc_retain(pcVar9);
          if (pcVar9 == (char *)0x0) {
            pcVar7 = "";
          }
          else {
            _objc_retainAutorelease(pcVar9);
            pcVar7 = pcVar9;
            func_0x00010bdc3520(pcVar9);
          }
          _objc_release(pcVar9);
          func_0x00010002b838(auStack_350,pcVar7);
          pcVar7 = "true";
          if ((int)pcVar5 == 0) {
            pcVar7 = "false";
          }
          func_0x00010002b838(auStack_338,pcVar7);
          _objc_retain(param_7);
          if (param_7 == (char *)0x0) {
            pcVar7 = "";
          }
          else {
            _objc_retainAutorelease(param_7);
            pcVar7 = param_7;
            func_0x00010bdc3520();
          }
          _objc_release(param_7);
          func_0x00010002b838(auStack_320,pcVar7);
          acStack_3a0[0] = '\0';
          acStack_3a0[1] = '\0';
          acStack_3a0[2] = '\0';
          acStack_3a0[3] = '\0';
          acStack_3a0[4] = '\0';
          acStack_3a0[5] = '\0';
          acStack_3a0[6] = '\0';
          acStack_3a0[7] = '\0';
          acStack_3a0[8] = '\0';
          acStack_3a0[9] = '\0';
          acStack_3a0[10] = '\0';
          acStack_3a0[0xb] = '\0';
          acStack_3a0[0xc] = '\0';
          acStack_3a0[0xd] = '\0';
          acStack_3a0[0xe] = '\0';
          acStack_3a0[0xf] = '\0';
          acStack_3a0[0x10] = '\0';
          acStack_3a0[0x11] = '\0';
          acStack_3a0[0x12] = '\0';
          acStack_3a0[0x13] = '\0';
          acStack_3a0[0x14] = '\0';
          acStack_3a0[0x15] = '\0';
          acStack_3a0[0x16] = '\0';
          acStack_3a0[0x17] = '\0';
          func_0x00010007e1e8(acStack_3a0,auStack_380,&lStack_308,5);
          pcVar3 = "";
          (**(code **)(*plVar13 + 0x18))(plVar13);
          puStack_388 = acStack_3a0;
          func_0x00010007e5dc(&puStack_388);
          lVar14 = 0;
          pcVar4 = pcVar6;
          pcVar8 = param_8;
          do {
            if ((&cStack_309)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_320 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
            unaff_x25 = acStack_3a0;
          } while (lVar14 != -0x78);
        }
        _objc_release(param_7);
        _objc_release(pcVar9);
        _objc_release(pcVar2);
        pcVar7 = pcVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(param_7);
        do {
          unaff_x25 = (char *)((long)unaff_x25 + -0x18);
        } while (unaff_x25 != (char *)auStack_380);
        _objc_release(param_7);
        _objc_release(pcVar9);
        _objc_release(pcVar2);
        _objc_release(pcVar1);
        __Unwind_Resume();
        pcVar2 = acStack_4c0;
        alStack_410[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar1 = pcVar4;
        param_3 = pcVar10;
        _objc_retain(pcVar3);
        _objc_retain(pcVar4);
        _objc_retain(pcVar8);
        _objc_retain(pcVar10);
        _objc_retain(pcVar11);
        _objc_retain(pcVar12);
        puVar16 = (undefined1 *)0x0;
        if (pcVar7 != (char *)0x0) {
          plVar13 = *(long **)(pcVar7 + 8);
          _objc_retain(pcVar3);
          if (pcVar3 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            pcVar1 = pcVar3;
            _objc_retainAutorelease(pcVar3);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar3);
          func_0x00010002b838(auStack_4a0,pcVar1);
          _objc_retain(pcVar4);
          if (pcVar4 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar4);
            pcVar1 = pcVar4;
            func_0x00010bdc3520(pcVar4);
          }
          _objc_release(pcVar4);
          func_0x00010002b838(auStack_488,pcVar1);
          _objc_retain(pcVar8);
          if (pcVar8 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar8);
            pcVar1 = pcVar8;
            func_0x00010bdc3520(pcVar8);
          }
          _objc_release(pcVar8);
          func_0x00010002b838(auStack_470,pcVar1);
          _objc_retain(pcVar10);
          if (pcVar10 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar10);
            pcVar1 = pcVar10;
            func_0x00010bdc3520(pcVar10);
          }
          _objc_release(pcVar10);
          func_0x00010002b838(auStack_458,pcVar1);
          _objc_retain(pcVar11);
          if (pcVar11 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar11);
            pcVar1 = pcVar11;
            func_0x00010bdc3520(pcVar11);
          }
          _objc_release(pcVar11);
          func_0x00010002b838(auStack_440,pcVar1);
          _objc_retain(pcVar12);
          if (pcVar12 == (char *)0x0) {
            pcVar1 = "";
          }
          else {
            _objc_retainAutorelease(pcVar12);
            pcVar1 = pcVar12;
            func_0x00010bdc3520(pcVar12);
          }
          _objc_release(pcVar12);
          func_0x00010002b838(auStack_428,pcVar1);
          acStack_4c0[0] = '\0';
          acStack_4c0[1] = '\0';
          acStack_4c0[2] = '\0';
          acStack_4c0[3] = '\0';
          acStack_4c0[4] = '\0';
          acStack_4c0[5] = '\0';
          acStack_4c0[6] = '\0';
          acStack_4c0[7] = '\0';
          acStack_4c0[8] = '\0';
          acStack_4c0[9] = '\0';
          acStack_4c0[10] = '\0';
          acStack_4c0[0xb] = '\0';
          acStack_4c0[0xc] = '\0';
          acStack_4c0[0xd] = '\0';
          acStack_4c0[0xe] = '\0';
          acStack_4c0[0xf] = '\0';
          acStack_4c0[0x10] = '\0';
          acStack_4c0[0x11] = '\0';
          acStack_4c0[0x12] = '\0';
          acStack_4c0[0x13] = '\0';
          acStack_4c0[0x14] = '\0';
          acStack_4c0[0x15] = '\0';
          acStack_4c0[0x16] = '\0';
          acStack_4c0[0x17] = '\0';
          func_0x00010007e1e8(acStack_4c0,auStack_4a0,alStack_410,6);
          (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108be4c8,acStack_4c0,param_9);
          puStack_4a8 = acStack_4c0;
          func_0x00010007e5dc(&puStack_4a8);
          lVar14 = 0;
          puVar16 = auStack_4a0;
          pcVar1 = pcVar2;
          do {
            if ((&cStack_411)[lVar14] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_428 + lVar14));
            }
            lVar14 = lVar14 + -0x18;
          } while (lVar14 != -0x90);
        }
        _objc_release(pcVar12);
        _objc_release(pcVar11);
        _objc_release(pcVar10);
        _objc_release(pcVar8);
        _objc_release(pcVar4);
        pcVar2 = pcVar3;
        _objc_release(pcVar3);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_410[0]) {
          return;
        }
        ___stack_chk_fail();
        _objc_release(pcVar12);
        do {
          puVar16 = puVar16 + -0x18;
        } while (puVar16 != auStack_4a0);
        _objc_release(pcVar12);
        _objc_release(pcVar11);
        _objc_release(pcVar10);
        _objc_release(pcVar8);
        _objc_release(pcVar4);
        _objc_release(pcVar3);
        __Unwind_Resume(pcVar2);
        _objc_retain(param_3);
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = pcVar1;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar7;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pcVar7);
        _objc_release(pcVar1);
        pcVar1 = pcVar3;
        func_0x00010bf0d0a0();
        if ((int)pcVar1 == 5) {
          pcVar1 = pcVar3;
          func_0x00010bf04f00(pcVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be15ba0(pcVar2);
          _objc_release(pcVar1);
        }
        _objc_release(pcVar3);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058ee1bc; end: 1058ee467;  */

/* WARNING: Removing unreachable block (ram,0x0001058eeacc) */
/* WARNING: Removing unreachable block (ram,0x0001058ee428) */
/* WARNING: Removing unreachable block (ram,0x0001058ee758) */
/* WARNING: Removing unreachable block (ram,0x0001058eeee0) */

void FUN_1058ee1bc(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8,undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  char *unaff_x25;
  undefined1 *puVar15;
  double dVar16;
  char acStack_3d0 [24];
  undefined1 *puStack_3b8;
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined8 auStack_338 [2];
  char cStack_321;
  long alStack_320 [2];
  char acStack_2b0 [24];
  undefined1 *puStack_298;
  undefined8 auStack_290 [3];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  char acStack_1a8 [24];
  char *pcStack_190;
  undefined8 auStack_188 [3];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined8 auStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar3 = param_4;
  pcVar6 = param_5;
  dVar16 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_88,pcVar1);
    unaff_x24 = auStack_a0;
    unaff_x23 = auStack_70;
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x23,pcVar1);
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
    dVar16 = param_1 * 1000.0;
    pcVar6 = (char *)(long)dVar16;
    pcVar1 = "\x01";
    (**(code **)(*plVar13 + 0x18))(plVar13);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar14 = 0;
    pcVar3 = pcVar2;
    do {
      if ((&cStack_59)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x48);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x23 = unaff_x23 + -3;
    } while (unaff_x23 != auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_release(param_3);
    param_3 = pcVar1;
    __Unwind_Resume();
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = param_3;
    pcVar4 = pcVar3;
    pcVar7 = pcVar6;
    pcVar9 = param_6;
    _objc_retain(param_3);
    _objc_retain(pcVar3);
    _objc_retain(pcVar6);
    if (pcVar2 != (char *)0x0) {
      _objc_retain(param_3);
      _objc_retain(pcVar3);
      _objc_retain(pcVar6);
      plVar13 = *(long **)(pcVar2 + 8);
      _objc_retain(param_3);
      if (param_3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x00010002b838(auStack_188,pcVar1);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar3);
        pcVar1 = pcVar3;
        func_0x00010bdc3520(pcVar3);
      }
      _objc_release(pcVar3);
      func_0x00010002b838(auStack_170,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_158,pcVar1);
      unaff_x25 = (char *)auStack_188;
      unaff_x24 = auStack_140;
      pcVar1 = "true";
      if ((int)param_6 == 0) {
        pcVar1 = "false";
      }
      func_0x00010002b838(unaff_x24,pcVar1);
      acStack_1a8[0] = '\0';
      acStack_1a8[1] = '\0';
      acStack_1a8[2] = '\0';
      acStack_1a8[3] = '\0';
      acStack_1a8[4] = '\0';
      acStack_1a8[5] = '\0';
      acStack_1a8[6] = '\0';
      acStack_1a8[7] = '\0';
      acStack_1a8[8] = '\0';
      acStack_1a8[9] = '\0';
      acStack_1a8[10] = '\0';
      acStack_1a8[0xb] = '\0';
      acStack_1a8[0xc] = '\0';
      acStack_1a8[0xd] = '\0';
      acStack_1a8[0xe] = '\0';
      acStack_1a8[0xf] = '\0';
      acStack_1a8[0x10] = '\0';
      acStack_1a8[0x11] = '\0';
      acStack_1a8[0x12] = '\0';
      acStack_1a8[0x13] = '\0';
      acStack_1a8[0x14] = '\0';
      acStack_1a8[0x15] = '\0';
      acStack_1a8[0x16] = '\0';
      acStack_1a8[0x17] = '\0';
      func_0x00010007e1e8(acStack_1a8,auStack_188,&lStack_128,4);
      pcVar7 = (char *)(long)(dVar16 * 1000.0);
      pcVar1 = "\x01";
      pcVar4 = acStack_1a8;
      (**(code **)(*plVar13 + 0x18))(plVar13);
      pcStack_190 = acStack_1a8;
      func_0x00010007e5dc(&pcStack_190);
      lVar14 = 0;
      do {
        if ((&cStack_129)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x60);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
      _objc_release(param_3);
    }
    _objc_release(pcVar6);
    pcVar2 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      _objc_release(pcVar6);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_188);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
      _objc_release(param_3);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
      _objc_release(param_3);
      __Unwind_Resume();
      pcVar5 = acStack_2b0;
      lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar3 = pcVar1;
      pcVar6 = pcVar4;
      pcVar8 = pcVar7;
      pcVar10 = pcVar9;
      pcVar11 = param_7;
      pcVar12 = param_8;
      _objc_retain(pcVar1);
      _objc_retain(pcVar4);
      _objc_retain(pcVar7);
      _objc_retain(param_7);
      if (pcVar2 != (char *)0x0) {
        plVar13 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          pcVar3 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_290,pcVar3);
        _objc_retain(pcVar4);
        if (pcVar4 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar4);
          pcVar3 = pcVar4;
          func_0x00010bdc3520(pcVar4);
        }
        _objc_release(pcVar4);
        func_0x00010002b838(auStack_278,pcVar3);
        _objc_retain(pcVar7);
        if (pcVar7 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(pcVar7);
          pcVar3 = pcVar7;
          func_0x00010bdc3520(pcVar7);
        }
        _objc_release(pcVar7);
        func_0x00010002b838(auStack_260,pcVar3);
        pcVar3 = "true";
        if ((int)pcVar9 == 0) {
          pcVar3 = "false";
        }
        func_0x00010002b838(auStack_248,pcVar3);
        _objc_retain(param_7);
        if (param_7 == (char *)0x0) {
          pcVar3 = "";
        }
        else {
          _objc_retainAutorelease(param_7);
          pcVar3 = param_7;
          func_0x00010bdc3520();
        }
        _objc_release(param_7);
        func_0x00010002b838(auStack_230,pcVar3);
        acStack_2b0[0] = '\0';
        acStack_2b0[1] = '\0';
        acStack_2b0[2] = '\0';
        acStack_2b0[3] = '\0';
        acStack_2b0[4] = '\0';
        acStack_2b0[5] = '\0';
        acStack_2b0[6] = '\0';
        acStack_2b0[7] = '\0';
        acStack_2b0[8] = '\0';
        acStack_2b0[9] = '\0';
        acStack_2b0[10] = '\0';
        acStack_2b0[0xb] = '\0';
        acStack_2b0[0xc] = '\0';
        acStack_2b0[0xd] = '\0';
        acStack_2b0[0xe] = '\0';
        acStack_2b0[0xf] = '\0';
        acStack_2b0[0x10] = '\0';
        acStack_2b0[0x11] = '\0';
        acStack_2b0[0x12] = '\0';
        acStack_2b0[0x13] = '\0';
        acStack_2b0[0x14] = '\0';
        acStack_2b0[0x15] = '\0';
        acStack_2b0[0x16] = '\0';
        acStack_2b0[0x17] = '\0';
        func_0x00010007e1e8(acStack_2b0,auStack_290,&lStack_218,5);
        pcVar3 = "";
        (**(code **)(*plVar13 + 0x18))(plVar13);
        puStack_298 = acStack_2b0;
        func_0x00010007e5dc(&puStack_298);
        lVar14 = 0;
        pcVar6 = pcVar5;
        pcVar8 = param_8;
        do {
          if ((&cStack_219)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
          unaff_x25 = acStack_2b0;
        } while (lVar14 != -0x78);
      }
      _objc_release(param_7);
      _objc_release(pcVar7);
      _objc_release(pcVar4);
      pcVar2 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_218) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(param_7);
      do {
        unaff_x25 = (char *)((long)unaff_x25 + -0x18);
      } while (unaff_x25 != (char *)auStack_290);
      _objc_release(param_7);
      _objc_release(pcVar7);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume();
      pcVar4 = acStack_3d0;
      alStack_320[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar6;
      param_3 = pcVar10;
      _objc_retain(pcVar3);
      _objc_retain(pcVar6);
      _objc_retain(pcVar8);
      _objc_retain(pcVar10);
      _objc_retain(pcVar11);
      _objc_retain(pcVar12);
      puVar15 = (undefined1 *)0x0;
      if (pcVar2 != (char *)0x0) {
        plVar13 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar3);
        if (pcVar3 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar3;
          _objc_retainAutorelease(pcVar3);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar3);
        func_0x00010002b838(auStack_3b0,pcVar1);
        _objc_retain(pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar6);
          pcVar1 = pcVar6;
          func_0x00010bdc3520(pcVar6);
        }
        _objc_release(pcVar6);
        func_0x00010002b838(auStack_398,pcVar1);
        _objc_retain(pcVar8);
        if (pcVar8 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar8);
          pcVar1 = pcVar8;
          func_0x00010bdc3520(pcVar8);
        }
        _objc_release(pcVar8);
        func_0x00010002b838(auStack_380,pcVar1);
        _objc_retain(pcVar10);
        if (pcVar10 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar10);
          pcVar1 = pcVar10;
          func_0x00010bdc3520(pcVar10);
        }
        _objc_release(pcVar10);
        func_0x00010002b838(auStack_368,pcVar1);
        _objc_retain(pcVar11);
        if (pcVar11 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar11);
          pcVar1 = pcVar11;
          func_0x00010bdc3520(pcVar11);
        }
        _objc_release(pcVar11);
        func_0x00010002b838(auStack_350,pcVar1);
        _objc_retain(pcVar12);
        if (pcVar12 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(pcVar12);
          pcVar1 = pcVar12;
          func_0x00010bdc3520(pcVar12);
        }
        _objc_release(pcVar12);
        func_0x00010002b838(auStack_338,pcVar1);
        acStack_3d0[0] = '\0';
        acStack_3d0[1] = '\0';
        acStack_3d0[2] = '\0';
        acStack_3d0[3] = '\0';
        acStack_3d0[4] = '\0';
        acStack_3d0[5] = '\0';
        acStack_3d0[6] = '\0';
        acStack_3d0[7] = '\0';
        acStack_3d0[8] = '\0';
        acStack_3d0[9] = '\0';
        acStack_3d0[10] = '\0';
        acStack_3d0[0xb] = '\0';
        acStack_3d0[0xc] = '\0';
        acStack_3d0[0xd] = '\0';
        acStack_3d0[0xe] = '\0';
        acStack_3d0[0xf] = '\0';
        acStack_3d0[0x10] = '\0';
        acStack_3d0[0x11] = '\0';
        acStack_3d0[0x12] = '\0';
        acStack_3d0[0x13] = '\0';
        acStack_3d0[0x14] = '\0';
        acStack_3d0[0x15] = '\0';
        acStack_3d0[0x16] = '\0';
        acStack_3d0[0x17] = '\0';
        func_0x00010007e1e8(acStack_3d0,auStack_3b0,alStack_320,6);
        (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108be4c8,acStack_3d0,param_9);
        puStack_3b8 = acStack_3d0;
        func_0x00010007e5dc(&puStack_3b8);
        lVar14 = 0;
        puVar15 = auStack_3b0;
        pcVar1 = pcVar4;
        do {
          if ((&cStack_321)[lVar14] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_338 + lVar14));
          }
          lVar14 = lVar14 + -0x18;
        } while (lVar14 != -0x90);
      }
      _objc_release(pcVar12);
      _objc_release(pcVar11);
      _objc_release(pcVar10);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      pcVar2 = pcVar3;
      _objc_release(pcVar3);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_320[0]) {
        return;
      }
      ___stack_chk_fail();
      _objc_release(pcVar12);
      do {
        puVar15 = puVar15 + -0x18;
      } while (puVar15 != auStack_3b0);
      _objc_release(pcVar12);
      _objc_release(pcVar11);
      _objc_release(pcVar10);
      _objc_release(pcVar8);
      _objc_release(pcVar6);
      _objc_release(pcVar3);
      __Unwind_Resume(pcVar2);
      _objc_retain(param_3);
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar1;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar3;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar3);
      _objc_release(pcVar1);
      pcVar1 = pcVar6;
      func_0x00010bf0d0a0();
      if ((int)pcVar1 == 5) {
        pcVar1 = pcVar6;
        func_0x00010bf04f00(pcVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be15ba0(pcVar2);
        _objc_release(pcVar1);
      }
      _objc_release(pcVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058ee468; end: 1058ee7a7;  */

/* WARNING: Removing unreachable block (ram,0x0001058eeacc) */
/* WARNING: Removing unreachable block (ram,0x0001058ee758) */
/* WARNING: Removing unreachable block (ram,0x0001058eeee0) */

void FUN_1058ee468(double param_1,long param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,char *param_8,undefined8 param_9)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long *plVar13;
  long lVar14;
  undefined8 *unaff_x24;
  char *unaff_x25;
  undefined1 *puVar15;
  char acStack_310 [24];
  undefined1 *puStack_2f8;
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined8 auStack_278 [2];
  char cStack_261;
  long alStack_260 [2];
  char acStack_1f0 [24];
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [3];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined8 auStack_170 [2];
  char cStack_159;
  long lStack_158;
  char acStack_e8 [24];
  char *pcStack_d0;
  undefined8 auStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar4 = param_4;
  pcVar8 = param_5;
  pcVar3 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    plVar13 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_c8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_98,pcVar1);
    unaff_x25 = (char *)auStack_c8;
    unaff_x24 = auStack_80;
    pcVar1 = "true";
    if ((int)param_6 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(unaff_x24,pcVar1);
    acStack_e8[0] = '\0';
    acStack_e8[1] = '\0';
    acStack_e8[2] = '\0';
    acStack_e8[3] = '\0';
    acStack_e8[4] = '\0';
    acStack_e8[5] = '\0';
    acStack_e8[6] = '\0';
    acStack_e8[7] = '\0';
    acStack_e8[8] = '\0';
    acStack_e8[9] = '\0';
    acStack_e8[10] = '\0';
    acStack_e8[0xb] = '\0';
    acStack_e8[0xc] = '\0';
    acStack_e8[0xd] = '\0';
    acStack_e8[0xe] = '\0';
    acStack_e8[0xf] = '\0';
    acStack_e8[0x10] = '\0';
    acStack_e8[0x11] = '\0';
    acStack_e8[0x12] = '\0';
    acStack_e8[0x13] = '\0';
    acStack_e8[0x14] = '\0';
    acStack_e8[0x15] = '\0';
    acStack_e8[0x16] = '\0';
    acStack_e8[0x17] = '\0';
    func_0x00010007e1e8(acStack_e8,auStack_c8,&lStack_68,4);
    pcVar8 = (char *)(long)(param_1 * 1000.0);
    pcVar1 = "\x01";
    pcVar4 = acStack_e8;
    (**(code **)(*plVar13 + 0x18))(plVar13);
    pcStack_d0 = acStack_e8;
    func_0x00010007e5dc(&pcStack_d0);
    lVar14 = 0;
    do {
      if ((&cStack_69)[lVar14] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar14));
      }
      lVar14 = lVar14 + -0x18;
    } while (lVar14 != -0x60);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_5);
  pcVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != auStack_c8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    pcVar7 = acStack_1f0;
    lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar5 = pcVar1;
    pcVar6 = pcVar4;
    pcVar9 = pcVar8;
    pcVar10 = pcVar3;
    pcVar11 = param_7;
    pcVar12 = param_8;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    _objc_retain(pcVar8);
    _objc_retain(param_7);
    if (pcVar2 != (char *)0x0) {
      plVar13 = *(long **)(pcVar2 + 8);
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
      func_0x00010002b838(auStack_1d0,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_1b8,pcVar2);
      _objc_retain(pcVar8);
      if (pcVar8 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar8);
        pcVar2 = pcVar8;
        func_0x00010bdc3520(pcVar8);
      }
      _objc_release(pcVar8);
      func_0x00010002b838(auStack_1a0,pcVar2);
      pcVar2 = "true";
      if ((int)pcVar3 == 0) {
        pcVar2 = "false";
      }
      func_0x00010002b838(auStack_188,pcVar2);
      _objc_retain(param_7);
      if (param_7 == (char *)0x0) {
        pcVar3 = "";
      }
      else {
        _objc_retainAutorelease(param_7);
        pcVar3 = param_7;
        func_0x00010bdc3520();
      }
      _objc_release(param_7);
      func_0x00010002b838(auStack_170,pcVar3);
      acStack_1f0[0] = '\0';
      acStack_1f0[1] = '\0';
      acStack_1f0[2] = '\0';
      acStack_1f0[3] = '\0';
      acStack_1f0[4] = '\0';
      acStack_1f0[5] = '\0';
      acStack_1f0[6] = '\0';
      acStack_1f0[7] = '\0';
      acStack_1f0[8] = '\0';
      acStack_1f0[9] = '\0';
      acStack_1f0[10] = '\0';
      acStack_1f0[0xb] = '\0';
      acStack_1f0[0xc] = '\0';
      acStack_1f0[0xd] = '\0';
      acStack_1f0[0xe] = '\0';
      acStack_1f0[0xf] = '\0';
      acStack_1f0[0x10] = '\0';
      acStack_1f0[0x11] = '\0';
      acStack_1f0[0x12] = '\0';
      acStack_1f0[0x13] = '\0';
      acStack_1f0[0x14] = '\0';
      acStack_1f0[0x15] = '\0';
      acStack_1f0[0x16] = '\0';
      acStack_1f0[0x17] = '\0';
      func_0x00010007e1e8(acStack_1f0,auStack_1d0,&lStack_158,5);
      pcVar5 = "";
      (**(code **)(*plVar13 + 0x18))(plVar13);
      puStack_1d8 = acStack_1f0;
      func_0x00010007e5dc(&puStack_1d8);
      lVar14 = 0;
      pcVar6 = pcVar7;
      pcVar9 = param_8;
      do {
        if ((&cStack_159)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_170 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
        unaff_x25 = acStack_1f0;
      } while (lVar14 != -0x78);
    }
    _objc_release(param_7);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    pcVar3 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_158) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      unaff_x25 = (char *)((long)unaff_x25 + -0x18);
    } while (unaff_x25 != (char *)auStack_1d0);
    _objc_release(param_7);
    _objc_release(pcVar8);
    _objc_release(pcVar4);
    _objc_release(pcVar1);
    __Unwind_Resume();
    pcVar4 = acStack_310;
    alStack_260[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar6;
    param_3 = pcVar10;
    _objc_retain(pcVar5);
    _objc_retain(pcVar6);
    _objc_retain(pcVar9);
    _objc_retain(pcVar10);
    _objc_retain(pcVar11);
    _objc_retain(pcVar12);
    puVar15 = (undefined1 *)0x0;
    if (pcVar3 != (char *)0x0) {
      plVar13 = *(long **)(pcVar3 + 8);
      _objc_retain(pcVar5);
      if (pcVar5 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar5;
        _objc_retainAutorelease(pcVar5);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar5);
      func_0x00010002b838(auStack_2f0,pcVar1);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar1 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_2d8,pcVar1);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar1 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_2c0,pcVar1);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar1 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_2a8,pcVar1);
      _objc_retain(pcVar11);
      if (pcVar11 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar11);
        pcVar1 = pcVar11;
        func_0x00010bdc3520(pcVar11);
      }
      _objc_release(pcVar11);
      func_0x00010002b838(auStack_290,pcVar1);
      _objc_retain(pcVar12);
      if (pcVar12 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(pcVar12);
        pcVar1 = pcVar12;
        func_0x00010bdc3520(pcVar12);
      }
      _objc_release(pcVar12);
      func_0x00010002b838(auStack_278,pcVar1);
      acStack_310[0] = '\0';
      acStack_310[1] = '\0';
      acStack_310[2] = '\0';
      acStack_310[3] = '\0';
      acStack_310[4] = '\0';
      acStack_310[5] = '\0';
      acStack_310[6] = '\0';
      acStack_310[7] = '\0';
      acStack_310[8] = '\0';
      acStack_310[9] = '\0';
      acStack_310[10] = '\0';
      acStack_310[0xb] = '\0';
      acStack_310[0xc] = '\0';
      acStack_310[0xd] = '\0';
      acStack_310[0xe] = '\0';
      acStack_310[0xf] = '\0';
      acStack_310[0x10] = '\0';
      acStack_310[0x11] = '\0';
      acStack_310[0x12] = '\0';
      acStack_310[0x13] = '\0';
      acStack_310[0x14] = '\0';
      acStack_310[0x15] = '\0';
      acStack_310[0x16] = '\0';
      acStack_310[0x17] = '\0';
      func_0x00010007e1e8(acStack_310,auStack_2f0,alStack_260,6);
      (**(code **)(*plVar13 + 0x18))(plVar13,&UNK_1108be4c8,acStack_310,param_9);
      puStack_2f8 = acStack_310;
      func_0x00010007e5dc(&puStack_2f8);
      lVar14 = 0;
      puVar15 = auStack_2f0;
      pcVar1 = pcVar4;
      do {
        if ((&cStack_261)[lVar14] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_278 + lVar14));
        }
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != -0x90);
    }
    _objc_release(pcVar12);
    _objc_release(pcVar11);
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    pcVar4 = pcVar5;
    _objc_release(pcVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_260[0]) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pcVar12);
    do {
      puVar15 = puVar15 + -0x18;
    } while (puVar15 != auStack_2f0);
    _objc_release(pcVar12);
    _objc_release(pcVar11);
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar6);
    _objc_release(pcVar5);
    __Unwind_Resume(pcVar4);
    _objc_retain(param_3);
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar8);
    _objc_release(pcVar1);
    pcVar1 = pcVar3;
    func_0x00010bf0d0a0();
    if ((int)pcVar1 == 5) {
      pcVar1 = pcVar3;
      func_0x00010bf04f00(pcVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be15ba0(pcVar4);
      _objc_release(pcVar1);
    }
    _objc_release(pcVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058ee7a8; end: 1058eeb0b;  */

/* WARNING: Removing unreachable block (ram,0x0001058eeacc) */
/* WARNING: Removing unreachable block (ram,0x0001058eeee0) */

void FUN_1058ee7a8(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x25;
  undefined1 *puVar13;
  char acStack_220 [24];
  undefined1 *puStack_208;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined8 auStack_188 [2];
  char cStack_171;
  long alStack_170 [2];
  char acStack_100 [24];
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  
  pcVar2 = acStack_100;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar4 = param_3;
  pcVar6 = param_4;
  pcVar7 = param_5;
  pcVar9 = param_6;
  pcVar10 = param_7;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_e0,pcVar1);
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
    func_0x00010002b838(auStack_c8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_b0,pcVar1);
    pcVar1 = "true";
    if ((int)param_5 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(auStack_98,pcVar1);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      pcVar1 = param_6;
      func_0x00010bdc3520();
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_80,pcVar1);
    acStack_100[0] = '\0';
    acStack_100[1] = '\0';
    acStack_100[2] = '\0';
    acStack_100[3] = '\0';
    acStack_100[4] = '\0';
    acStack_100[5] = '\0';
    acStack_100[6] = '\0';
    acStack_100[7] = '\0';
    acStack_100[8] = '\0';
    acStack_100[9] = '\0';
    acStack_100[10] = '\0';
    acStack_100[0xb] = '\0';
    acStack_100[0xc] = '\0';
    acStack_100[0xd] = '\0';
    acStack_100[0xe] = '\0';
    acStack_100[0xf] = '\0';
    acStack_100[0x10] = '\0';
    acStack_100[0x11] = '\0';
    acStack_100[0x12] = '\0';
    acStack_100[0x13] = '\0';
    acStack_100[0x14] = '\0';
    acStack_100[0x15] = '\0';
    acStack_100[0x16] = '\0';
    acStack_100[0x17] = '\0';
    func_0x00010007e1e8(acStack_100,auStack_e0,&lStack_68,5);
    pcVar1 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puStack_e8 = acStack_100;
    func_0x00010007e5dc(&puStack_e8);
    lVar11 = 0;
    pcVar4 = pcVar2;
    pcVar6 = param_7;
    do {
      if ((&cStack_69)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_80 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
      unaff_x25 = acStack_100;
    } while (lVar11 != -0x78);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_6);
    do {
      unaff_x25 = unaff_x25 + -0x18;
    } while (unaff_x25 != auStack_e0);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    pcVar5 = acStack_220;
    alStack_170[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar4;
    pcVar8 = pcVar7;
    _objc_retain(pcVar1);
    _objc_retain(pcVar4);
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    _objc_retain(pcVar9);
    _objc_retain(pcVar10);
    puVar13 = (undefined1 *)0x0;
    if (pcVar2 != (char *)0x0) {
      plVar12 = *(long **)(pcVar2 + 8);
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
      func_0x00010002b838(auStack_200,pcVar2);
      _objc_retain(pcVar4);
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar4);
        pcVar2 = pcVar4;
        func_0x00010bdc3520(pcVar4);
      }
      _objc_release(pcVar4);
      func_0x00010002b838(auStack_1e8,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_1d0,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_1b8,pcVar2);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar9);
        pcVar2 = pcVar9;
        func_0x00010bdc3520(pcVar9);
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_1a0,pcVar2);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar10);
        pcVar2 = pcVar10;
        func_0x00010bdc3520(pcVar10);
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_188,pcVar2);
      acStack_220[0] = '\0';
      acStack_220[1] = '\0';
      acStack_220[2] = '\0';
      acStack_220[3] = '\0';
      acStack_220[4] = '\0';
      acStack_220[5] = '\0';
      acStack_220[6] = '\0';
      acStack_220[7] = '\0';
      acStack_220[8] = '\0';
      acStack_220[9] = '\0';
      acStack_220[10] = '\0';
      acStack_220[0xb] = '\0';
      acStack_220[0xc] = '\0';
      acStack_220[0xd] = '\0';
      acStack_220[0xe] = '\0';
      acStack_220[0xf] = '\0';
      acStack_220[0x10] = '\0';
      acStack_220[0x11] = '\0';
      acStack_220[0x12] = '\0';
      acStack_220[0x13] = '\0';
      acStack_220[0x14] = '\0';
      acStack_220[0x15] = '\0';
      acStack_220[0x16] = '\0';
      acStack_220[0x17] = '\0';
      func_0x00010007e1e8(acStack_220,auStack_200,alStack_170,6);
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_1108be4c8,acStack_220,param_8);
      puStack_208 = acStack_220;
      func_0x00010007e5dc(&puStack_208);
      lVar11 = 0;
      puVar13 = auStack_200;
      pcVar3 = pcVar5;
      do {
        if ((&cStack_171)[lVar11] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_188 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x90);
    }
    _objc_release(pcVar10);
    _objc_release(pcVar9);
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    _objc_release(pcVar4);
    pcVar2 = pcVar1;
    _objc_release(pcVar1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_170[0]) {
      ___stack_chk_fail();
      _objc_release(pcVar10);
      do {
        puVar13 = puVar13 + -0x18;
      } while (puVar13 != auStack_200);
      _objc_release(pcVar10);
      _objc_release(pcVar9);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      _objc_release(pcVar4);
      _objc_release(pcVar1);
      __Unwind_Resume(pcVar2);
      _objc_retain(pcVar8);
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar3;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pcVar1);
      _objc_release(pcVar3);
      pcVar1 = pcVar4;
      func_0x00010bf0d0a0();
      if ((int)pcVar1 == 5) {
        pcVar1 = pcVar4;
        func_0x00010bf04f00(pcVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be15ba0(pcVar2);
        _objc_release(pcVar1);
      }
      _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pcVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1058eeb0c; end: 1058eef2f;  */

/* WARNING: Removing unreachable block (ram,0x0001058eeee0) */

void FUN_1058eeb0c(long param_1,char *param_2,char *param_3,char *param_4,char *param_5,
                  char *param_6,char *param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  pcVar2 = acStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  pcVar5 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar7 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_100,pcVar1);
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
    func_0x00010002b838(auStack_e8,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_d0,pcVar1);
    _objc_retain(param_5);
    if (param_5 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_5);
      pcVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_b8,pcVar1);
    _objc_retain(param_6);
    if (param_6 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_6);
      pcVar1 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_7);
    if (param_7 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_7);
      pcVar1 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x00010002b838(auStack_88,pcVar1);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,alStack_70,6);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_1108be4c8,acStack_120,param_8);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    lVar6 = 0;
    puVar7 = auStack_100;
    pcVar1 = pcVar2;
    do {
      if ((&cStack_71)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x90);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_70[0]) {
    ___stack_chk_fail();
    _objc_release(param_7);
    do {
      puVar7 = puVar7 + -0x18;
    } while (puVar7 != auStack_100);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume(pcVar2);
    _objc_retain(pcVar5);
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar3);
    _objc_release(pcVar1);
    pcVar1 = pcVar4;
    func_0x00010bf0d0a0();
    if ((int)pcVar1 == 5) {
      pcVar1 = pcVar4;
      func_0x00010bf04f00(pcVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be15ba0(pcVar2);
      _objc_release(pcVar1);
    }
    _objc_release(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pcVar5);
    return;
  }
  return;
}



/* Entry: 1058eef30; end: 1058eeff7; -[SCAppDeepLinkAttachmentPagePropertiesProvider pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058eef30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar1 = uVar2;
  func_0x00010bf0d0a0();
  if ((int)uVar1 == 5) {
    uVar1 = uVar2;
    func_0x00010bf04f00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be15ba0(param_1,param_2,uVar1,param_5);
    _objc_release(uVar1);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1058eeff8; end: 1058ef4f7; -[SCAppDeepLinkAttachmentPagePropertiesProvider _fillAppDeepLink:pageProperties:] */

void FUN_1058eeff8(undefined8 param_1,undefined8 param_2,undefined8 ****param_3,
                  undefined8 ****param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 ***pppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined *puVar6;
  undefined8 ****ppppuVar7;
  undefined *puVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 ****unaff_x21;
  undefined8 ****unaff_x22;
  undefined8 ****ppppuVar15;
  undefined8 ****unaff_x23;
  undefined8 ****unaff_x24;
  undefined **unaff_x25;
  undefined *unaff_x26;
  undefined **ppuStack_2a8;
  undefined **ppuStack_2a0;
  undefined **ppuStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined *puStack_280;
  long lStack_278;
  undefined8 ***pppuStack_270;
  undefined8 ***pppuStack_268;
  undefined8 ***pppuStack_260;
  undefined8 ***pppuStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **ppuStack_228;
  undefined *puStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_208;
  undefined *puStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined *puStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  long lStack_198;
  undefined *puStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined8 ***pppuStack_168;
  undefined8 uStack_160;
  undefined8 ***pppuStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined8 ***pppuStack_118;
  undefined8 ***pppuStack_110;
  undefined8 ***pppuStack_108;
  undefined8 ***pppuStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined8 ***pppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 ***pppuStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 ***pppuStack_90;
  undefined *puStack_88;
  undefined8 ***pppuStack_80;
  undefined8 **ppuStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar5 = param_3;
  ppppuVar4 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined8 ****)0x0) {
    pppuVar2 = (undefined8 ***)PTR_PTR_1126bfe00;
    func_0x00010bf3fe60();
    _objc_retainAutoreleasedReturnValue();
    unaff_x25 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1cc0;
    ppuStack_70 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1cc0;
    ppppuVar4 = (undefined8 ****)&ppuStack_78;
    param_5 = 1;
    ppppuVar15 = (undefined8 ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_78 = pppuVar2;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_70);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = ppppuVar15;
    func_0x00010c2b53e0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(ppppuVar15);
    _objc_release(pppuVar2);
    unaff_x21 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = unaff_x21;
    func_0x00010c08fa60();
    _objc_release(unaff_x21);
    ppppuVar15 = (undefined8 ****)PTR__OBJC_CLASS___NSURL_1126ae598;
    unaff_x22 = (undefined8 ****)0x0;
    if (ppppuVar3 != (undefined8 ****)0x0) {
      unaff_x22 = param_3;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(ppppuVar15,param_2,unaff_x22);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined8 ****)PTR_PTR_1126bfe00;
      func_0x00010bef23a0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar15;
      ppppuVar4 = unaff_x23;
      func_0x00010c1d0760(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(ppppuVar15);
      _objc_release(unaff_x22);
      unaff_x21 = ppppuVar15;
    }
    ppppuVar15 = param_3;
    func_0x00010bfa04e0();
    iVar1 = (int)ppppuVar15;
    if (iVar1 == 0) {
      unaff_x21 = (undefined8 ****)PTR_PTR_1126bfe00;
      func_0x00010bef2360();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_c0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1cf0;
      pppuVar11 = &ppuStack_c0;
      ppppuVar4 = &pppuStack_c8;
      pppuStack_c8 = unaff_x21;
    }
    else if (iVar1 == 5) {
      ppppuVar4 = param_3;
      func_0x00010c2a3840();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar4;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar15 = ppppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppppuVar5);
      _objc_release(ppppuVar4);
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      unaff_x23 = (undefined8 ****)0x0;
      if (ppppuVar15 != (undefined8 ****)0x0) {
        ppppuVar4 = param_3;
        func_0x00010c2a3840();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppppuVar4;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar6,param_2,unaff_x23);
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = (undefined8 ****)PTR_PTR_1126bfe00;
        func_0x00010bef2380();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0760(param_4,param_2,puVar6,unaff_x24);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        _objc_release(puVar6);
        _objc_release(unaff_x23);
        _objc_release(ppppuVar4);
      }
      unaff_x21 = (undefined8 ****)PTR_PTR_1126bfe00;
      func_0x00010bef2360();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_b0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1cc0;
      pppuVar11 = &ppuStack_b0;
      ppppuVar4 = &pppuStack_b8;
      pppuStack_b8 = unaff_x21;
    }
    else {
      if (iVar1 != 4) goto LAB_1058ef4ac;
      ppppuVar4 = param_3;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar4;
      func_0x00010c06af60();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar15 = ppppuVar5;
      func_0x00010bf05300();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(ppppuVar5);
      _objc_release(ppppuVar4);
      if (ppppuVar15 != (undefined8 ****)0x0) {
        puVar6 = PTR_PTR_1126bfe00;
        func_0x00010bef2340();
        _objc_retainAutoreleasedReturnValue();
        uStack_98 = *(undefined8 *)PTR__SKStoreProductParameterITunesItemIdentifier_110347e80;
        ppppuVar4 = param_3;
        puStack_88 = puVar6;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar5 = ppppuVar4;
        func_0x00010c06af60();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar15 = ppppuVar5;
        func_0x00010bf05300();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        pppuStack_90 = ppppuVar15;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&pppuStack_90,
                            &uStack_98,1);
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        pppuStack_80 = (undefined8 ***)unaff_x25;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&pppuStack_80,
                            &puStack_88,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(param_4,param_2,unaff_x26);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(ppppuVar15);
        _objc_release(ppppuVar5);
        _objc_release(ppppuVar4);
        _objc_release(puVar6);
      }
      ppppuVar4 = param_3;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar4;
      func_0x00010c06af60();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = ppppuVar5;
      func_0x00010bf05280();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = (undefined8 ****)PTR_PTR_1126bfe00;
      func_0x00010bef23c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(param_4,param_2,unaff_x23,unaff_x24);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(ppppuVar5);
      _objc_release(ppppuVar4);
      unaff_x21 = (undefined8 ****)PTR_PTR_1126bfe00;
      func_0x00010bef2360();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_a0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1cd8;
      pppuVar11 = &ppuStack_a0;
      ppppuVar4 = &pppuStack_a8;
      pppuStack_a8 = unaff_x21;
    }
    param_5 = 1;
    unaff_x22 = (undefined8 ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar11);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = unaff_x22;
    func_0x00010c2b53e0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(unaff_x22);
    _objc_release(unaff_x21);
  }
LAB_1058ef4ac:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_d8 = FUN_1058ef4f8;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar10 = ppppuVar5;
  uVar13 = param_5;
  puStack_120 = unaff_x26;
  pppuStack_118 = (undefined8 ***)unaff_x25;
  pppuStack_110 = unaff_x24;
  pppuStack_108 = unaff_x23;
  pppuStack_100 = unaff_x22;
  pppuStack_f8 = unaff_x21;
  pppuStack_f0 = param_4;
  pppuStack_e8 = param_3;
  puStack_e0 = &stack0xfffffffffffffff0;
  _objc_retain(ppppuVar5);
  _objc_retain(param_5);
  ppppuVar3 = ppppuVar5;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar7 = ppppuVar3;
  func_0x00010bf0d820();
  _objc_release(ppppuVar3);
  ppppuVar15 = (undefined8 ****)0x0;
  if (ppppuVar7 != (undefined8 ****)0x0) {
    ppppuVar15 = ppppuVar5;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x23 = ppppuVar15;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar3 = unaff_x23;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x23);
    _objc_release(ppppuVar15);
    ppppuVar7 = ppppuVar3;
    func_0x00010bf0d0a0();
    if ((int)ppppuVar7 == 6) {
      ppppuVar7 = ppppuVar3;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      ppppuVar15 = (undefined8 ****)0x0;
      if (ppppuVar7 != (undefined8 ****)0x0) {
        puVar6 = PTR_PTR_1126bfe00;
        func_0x00010bf05560();
        _objc_retainAutoreleasedReturnValue();
        puStack_130 = PTR____kCFBooleanTrue_11034ab68;
        uVar13 = 1;
        puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_138 = puVar6;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_130,
                            &puStack_138);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(param_5,param_2,puVar8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(puVar6);
        ppppuVar15 = ppppuVar3;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = ppppuVar15;
        func_0x00010c06af60();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c257aa0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = (undefined **)PTR_PTR_1126bfe00;
        func_0x00010c257a80();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar10 = unaff_x24;
        ppppuVar4 = (undefined8 ****)unaff_x25;
        func_0x00010c1d0760(param_5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        _objc_release(ppppuVar15);
      }
    }
    _objc_release(ppppuVar3);
  }
  _objc_release(param_5);
  _objc_release(ppppuVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_1058ef714;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x26;
  pppuStack_188 = (undefined8 ***)unaff_x25;
  pppuStack_180 = unaff_x24;
  pppuStack_178 = unaff_x23;
  pppuStack_170 = ppppuVar15;
  pppuStack_168 = ppppuVar3;
  uStack_160 = param_5;
  pppuStack_158 = ppppuVar5;
  ppuStack_150 = &puStack_e0;
  _objc_retain(ppppuVar10);
  _objc_retain(ppppuVar4);
  ppppuVar5 = ppppuVar10;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar15 = ppppuVar5;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar3 = ppppuVar15;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar15);
  _objc_release(ppppuVar5);
  ppppuVar5 = ppppuVar3;
  func_0x00010bf0d0a0();
  ppppuVar15 = (undefined8 ****)0x0;
  iVar1 = (int)ppppuVar5;
  if (iVar1 < 7) {
    if (4 < iVar1) {
      if (iVar1 == 5) {
        func_0x000107b94e28();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar15 = ppppuVar5;
      }
      else if (iVar1 == 6) {
        func_0x000107b94de0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar15 = ppppuVar5;
      }
      goto LAB_1058efb6c;
    }
    if (iVar1 == 3) {
      ppppuVar15 = ppppuVar10;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar15;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppppuVar5);
      _objc_release();
      if (ppppuVar7 == (undefined8 ****)0x0) {
        func_0x000107b94db0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppppuVar15 = (undefined8 ****)0x0;
      }
      ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_1a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_1a0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar11 = &ppuStack_1a8;
      pppuVar12 = &ppuStack_1b8;
    }
    else {
      if (iVar1 != 4) goto LAB_1058efb6c;
      ppppuVar15 = ppppuVar10;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar15;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppppuVar5);
      _objc_release();
      if (ppppuVar7 == (undefined8 ****)0x0) {
        func_0x000107b94e58();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppppuVar15 = (undefined8 ****)0x0;
      }
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_1c0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar11 = &ppuStack_1c8;
      pppuVar12 = &ppuStack_1d8;
    }
  }
  else if (iVar1 < 9) {
    if (iVar1 == 7) {
      ppppuVar15 = ppppuVar10;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar15;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppppuVar5);
      _objc_release();
      if (ppppuVar7 == (undefined8 ****)0x0) {
        func_0x000107b94e40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppppuVar15 = (undefined8 ****)0x0;
      }
      ppuStack_1f8 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_1f0 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_1e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_1e0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar11 = &ppuStack_1e8;
      pppuVar12 = &ppuStack_1f8;
    }
    else {
      if (iVar1 != 8) goto LAB_1058efb6c;
      ppppuVar15 = ppppuVar10;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar15;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar5;
      func_0x00010c08fa60();
      _objc_release(ppppuVar5);
      _objc_release();
      if (ppppuVar7 == (undefined8 ****)0x0) {
        func_0x000107b94dc8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        ppppuVar15 = (undefined8 ****)0x0;
      }
      ppuStack_218 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_210 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_208 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_200 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar11 = &ppuStack_208;
      pppuVar12 = &ppuStack_218;
    }
  }
  else {
    if (iVar1 == 9) {
      func_0x000107b94df8();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar15 = ppppuVar5;
      goto LAB_1058efb6c;
    }
    if (iVar1 != 10) goto LAB_1058efb6c;
    ppppuVar15 = ppppuVar10;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = ppppuVar15;
    func_0x00010bf61300();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = ppppuVar5;
    func_0x00010c08fa60();
    _objc_release(ppppuVar5);
    _objc_release();
    if (ppppuVar7 == (undefined8 ****)0x0) {
      func_0x000107b94e10();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      ppppuVar15 = (undefined8 ****)0x0;
    }
    ppuStack_238 = &PTR____CFConstantStringClassReference_110f0cff8;
    ppuStack_230 = &PTR____CFConstantStringClassReference_110f0d058;
    ppuStack_228 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
    puStack_220 = PTR____kCFBooleanTrue_11034ab68;
    pppuVar11 = &ppuStack_228;
    pppuVar12 = &ppuStack_238;
  }
  uVar13 = 2;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar11,pppuVar12);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(ppppuVar4,param_2,puVar6);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
LAB_1058efb6c:
  ppppuVar5 = ppppuVar10;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar7 = ppppuVar5;
  func_0x00010bf61300();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar9 = ppppuVar7;
  func_0x00010c08fa60();
  _objc_release(ppppuVar7);
  _objc_release(ppppuVar5);
  ppppuVar5 = ppppuVar15;
  if (ppppuVar9 != (undefined8 ****)0x0) {
    ppppuVar7 = ppppuVar10;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar5 = ppppuVar7;
    func_0x00010bf61300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppppuVar15);
    _objc_release(ppppuVar7);
  }
  ppppuVar15 = ppppuVar5;
  func_0x00010c1d0760(ppppuVar4,param_2,ppppuVar5,&PTR____CFConstantStringClassReference_110f0d018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(ppppuVar3);
  _objc_release(ppppuVar5);
  _objc_release(ppppuVar4);
  _objc_release(ppppuVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_198) {
    ___stack_chk_fail();
    pcStack_248 = FUN_1058efc5c;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppppuVar7 = ppppuVar15;
    uVar14 = uVar13;
    pppuStack_270 = ppppuVar5;
    pppuStack_268 = ppppuVar3;
    pppuStack_260 = ppppuVar4;
    pppuStack_258 = ppppuVar10;
    pppuStack_250 = &ppuStack_150;
    _objc_retain(uVar13);
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar4 = ppppuVar15;
    func_0x00010bf0d820();
    _objc_release(ppppuVar15);
    if (ppppuVar4 != (undefined8 ****)0x0) {
      ppuStack_2a8 = &PTR____CFConstantStringClassReference_110f0e038;
      ppuStack_2a0 = &PTR____CFConstantStringClassReference_110f0e538;
      puStack_290 = PTR____kCFBooleanTrue_11034ab68;
      puStack_288 = PTR____kCFBooleanFalse_11034ab60;
      ppuStack_298 = &PTR____CFConstantStringClassReference_110f0e5b8;
      puStack_280 = PTR____kCFBooleanFalse_11034ab60;
      uVar14 = 3;
      ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_290,
                          &ppuStack_2a8,3);
      _objc_retainAutoreleasedReturnValue();
      ppppuVar7 = ppppuVar4;
      func_0x00010c2b53e0(uVar13);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(ppppuVar4);
    }
    _objc_release(uVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
      ___stack_chk_fail();
      _objc_retain(ppppuVar7);
      _objc_retain(uVar14);
      ppppuVar4 = ppppuVar7;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      ppppuVar5 = ppppuVar4;
      func_0x00010bf0d820();
      _objc_release(ppppuVar4);
      if (ppppuVar5 != (undefined8 ****)0x0) {
        ppppuVar4 = ppppuVar7;
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar5 = ppppuVar4;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar15 = ppppuVar5;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar5);
        _objc_release(ppppuVar4);
        ppppuVar4 = ppppuVar15;
        func_0x00010bf0d0a0();
        if ((int)ppppuVar4 == 8) {
          ppppuVar4 = ppppuVar15;
          func_0x00010c0b5520(ppppuVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be15d80(uVar13,param_2,ppppuVar4,uVar14,ppppuVar7);
          _objc_release(ppppuVar4);
        }
        _objc_release(ppppuVar15);
      }
      _objc_release(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppppuVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1058ef4f8; end: 1058ef713; -[SCAppInstallAttachmentPagePropertiesResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058ef4f8(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  uVar9 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf0d820();
  _objc_release(puVar2);
  if (puVar11 != (undefined *)0x0) {
    puVar2 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = puVar2;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar2);
    puVar2 = puVar3;
    func_0x00010bf0d0a0();
    if ((int)puVar2 == 6) {
      puVar2 = puVar3;
      func_0x00010bf054e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar2 != (undefined *)0x0) {
        puVar2 = PTR_PTR_1126bfe00;
        func_0x00010bf05560();
        _objc_retainAutoreleasedReturnValue();
        puStack_60 = PTR____kCFBooleanTrue_11034ab68;
        uVar9 = 1;
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_68 = puVar2;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&puStack_68
                           );
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2b53e0(param_5,param_2,puVar11);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x00010c06af60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar11;
        func_0x00010c257aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126bfe00;
        func_0x00010c257a80();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        param_4 = puVar5;
        func_0x00010c1d0760(param_5);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar11);
        _objc_release(puVar2);
      }
    }
    _objc_release(puVar3);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_78 = FUN_1058ef714;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(puVar6);
  _objc_retain(param_4);
  puVar2 = puVar6;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar2;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar11);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf0d0a0();
  puVar11 = (undefined *)0x0;
  iVar1 = (int)puVar2;
  if (iVar1 < 7) {
    if (4 < iVar1) {
      if (iVar1 == 5) {
        func_0x000107b94e28();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
      }
      else if (iVar1 == 6) {
        func_0x000107b94de0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
      }
      goto LAB_1058efb6c;
    }
    if (iVar1 == 3) {
      puVar11 = puVar6;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94db0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_e0 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar7 = &ppuStack_d8;
      pppuVar8 = &ppuStack_e8;
    }
    else {
      if (iVar1 != 4) goto LAB_1058efb6c;
      puVar11 = puVar6;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94e58();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      ppuStack_108 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_100 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_f0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar7 = &ppuStack_f8;
      pppuVar8 = &ppuStack_108;
    }
  }
  else if (iVar1 < 9) {
    if (iVar1 == 7) {
      puVar11 = puVar6;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94e40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      ppuStack_128 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_120 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_118 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_110 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar7 = &ppuStack_118;
      pppuVar8 = &ppuStack_128;
    }
    else {
      if (iVar1 != 8) goto LAB_1058efb6c;
      puVar11 = puVar6;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar11;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94dc8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar11 = (undefined *)0x0;
      }
      ppuStack_148 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_140 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_138 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_130 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar7 = &ppuStack_138;
      pppuVar8 = &ppuStack_148;
    }
  }
  else {
    if (iVar1 == 9) {
      func_0x000107b94df8();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      goto LAB_1058efb6c;
    }
    if (iVar1 != 10) goto LAB_1058efb6c;
    puVar11 = puVar6;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010bf61300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107b94e10();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar11 = (undefined *)0x0;
    }
    ppuStack_168 = &PTR____CFConstantStringClassReference_110f0cff8;
    ppuStack_160 = &PTR____CFConstantStringClassReference_110f0d058;
    ppuStack_158 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
    puStack_150 = PTR____kCFBooleanTrue_11034ab68;
    pppuVar7 = &ppuStack_158;
    pppuVar8 = &ppuStack_168;
  }
  uVar9 = 2;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar7,pppuVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_1058efb6c:
  puVar2 = puVar6;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf61300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar11;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = puVar6;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf61300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    _objc_release(puVar4);
  }
  puVar11 = puVar2;
  func_0x00010c1d0760(param_4,param_2,puVar2,&PTR____CFConstantStringClassReference_110f0d018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c8) {
    ___stack_chk_fail();
    pcStack_178 = FUN_1058efc5c;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar11;
    uVar10 = uVar9;
    puStack_1a0 = puVar2;
    puStack_198 = puVar3;
    puStack_190 = param_4;
    puStack_188 = puVar6;
    ppuStack_180 = &puStack_80;
    _objc_retain(uVar9);
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar11;
    func_0x00010bf0d820();
    _objc_release(puVar11);
    if (puVar2 != (undefined *)0x0) {
      ppuStack_1d8 = &PTR____CFConstantStringClassReference_110f0e038;
      ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f0e538;
      puStack_1c0 = PTR____kCFBooleanTrue_11034ab68;
      puStack_1b8 = PTR____kCFBooleanFalse_11034ab60;
      ppuStack_1c8 = &PTR____CFConstantStringClassReference_110f0e5b8;
      puStack_1b0 = PTR____kCFBooleanFalse_11034ab60;
      uVar10 = 3;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1c0,
                          &ppuStack_1d8,3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c2b53e0(uVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(uVar9);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1a8) {
      ___stack_chk_fail();
      _objc_retain(puVar4);
      _objc_retain(uVar10);
      puVar2 = puVar4;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar2;
      func_0x00010bf0d820();
      _objc_release(puVar2);
      if (puVar11 != (undefined *)0x0) {
        puVar2 = puVar4;
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar2;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(puVar2);
        puVar2 = puVar6;
        func_0x00010bf0d0a0();
        if ((int)puVar2 == 8) {
          puVar2 = puVar6;
          func_0x00010c0b5520(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be15d80(uVar9,param_2,puVar2,uVar10,puVar4);
          _objc_release(puVar2);
        }
        _objc_release(puVar6);
      }
      _objc_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1058ef714; end: 1058efc5b; -[SCArrowLayerPagePropertiesResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058ef714(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar2;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar2 = puVar3;
  func_0x00010bf0d0a0();
  puVar9 = (undefined *)0x0;
  iVar1 = (int)puVar2;
  if (iVar1 < 7) {
    if (4 < iVar1) {
      if (iVar1 == 5) {
        func_0x000107b94e28();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
      }
      else if (iVar1 == 6) {
        func_0x000107b94de0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
      }
      goto LAB_1058efb6c;
    }
    if (iVar1 == 3) {
      puVar9 = param_3;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94db0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_60 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar6 = &ppuStack_68;
      pppuVar7 = &ppuStack_78;
    }
    else {
      if (iVar1 != 4) goto LAB_1058efb6c;
      puVar9 = param_3;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94e58();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      ppuStack_98 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_88 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_80 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar6 = &ppuStack_88;
      pppuVar7 = &ppuStack_98;
    }
  }
  else if (iVar1 < 9) {
    if (iVar1 == 7) {
      puVar9 = param_3;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94e40();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      ppuStack_b8 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_b0 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_a0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar6 = &ppuStack_a8;
      pppuVar7 = &ppuStack_b8;
    }
    else {
      if (iVar1 != 8) goto LAB_1058efb6c;
      puVar9 = param_3;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf61300();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107b94dc8();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar9 = (undefined *)0x0;
      }
      ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0cff8;
      ppuStack_d0 = &PTR____CFConstantStringClassReference_110f0d058;
      ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
      puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
      pppuVar6 = &ppuStack_c8;
      pppuVar7 = &ppuStack_d8;
    }
  }
  else {
    if (iVar1 == 9) {
      func_0x000107b94df8();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      goto LAB_1058efb6c;
    }
    if (iVar1 != 10) goto LAB_1058efb6c;
    puVar9 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf61300();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c08fa60();
    _objc_release(puVar2);
    _objc_release();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107b94e10();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar9 = (undefined *)0x0;
    }
    ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0cff8;
    ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0d058;
    ppuStack_e8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d08;
    puStack_e0 = PTR____kCFBooleanTrue_11034ab68;
    pppuVar6 = &ppuStack_e8;
    pppuVar7 = &ppuStack_f8;
  }
  param_5 = 2;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar6,pppuVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_4,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
LAB_1058efb6c:
  puVar2 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf61300();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c08fa60();
  _objc_release(puVar4);
  _objc_release(puVar2);
  puVar2 = puVar9;
  if (puVar5 != (undefined *)0x0) {
    puVar4 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar4;
    func_0x00010bf61300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar4);
  }
  puVar9 = puVar2;
  func_0x00010c1d0760(param_4,param_2,puVar2,&PTR____CFConstantStringClassReference_110f0d018);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    pcStack_108 = FUN_1058efc5c;
    lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar9;
    uVar8 = param_5;
    puStack_130 = puVar2;
    puStack_128 = puVar3;
    uStack_120 = param_4;
    puStack_118 = param_3;
    puStack_110 = &stack0xfffffffffffffff0;
    _objc_retain(param_5);
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf0d820();
    _objc_release(puVar9);
    if (puVar2 != (undefined *)0x0) {
      ppuStack_168 = &PTR____CFConstantStringClassReference_110f0e038;
      ppuStack_160 = &PTR____CFConstantStringClassReference_110f0e538;
      puStack_150 = PTR____kCFBooleanTrue_11034ab68;
      puStack_148 = PTR____kCFBooleanFalse_11034ab60;
      ppuStack_158 = &PTR____CFConstantStringClassReference_110f0e5b8;
      puStack_140 = PTR____kCFBooleanFalse_11034ab60;
      uVar8 = 3;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_150,
                          &ppuStack_168,3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      func_0x00010c2b53e0(param_5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    _objc_release(param_5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
      ___stack_chk_fail();
      _objc_retain(puVar4);
      _objc_retain(uVar8);
      puVar2 = puVar4;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar2;
      func_0x00010bf0d820();
      _objc_release(puVar2);
      if (puVar9 != (undefined *)0x0) {
        puVar2 = puVar4;
        func_0x00010bf0d7e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar2;
        func_0x00010bf0d800();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar9;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar2);
        puVar2 = puVar3;
        func_0x00010bf0d0a0();
        if ((int)puVar2 == 8) {
          puVar2 = puVar3;
          func_0x00010c0b5520(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be15d80(param_5,param_2,puVar2,uVar8,puVar4);
          _objc_release(puVar2);
        }
        _objc_release(puVar3);
      }
      _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar4);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1058efc5c; end: 1058efd73; -[SCDefaultAttachmentPagePropertiesResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058efc5c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  uVar5 = param_5;
  _objc_retain(param_5);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf0d820();
  _objc_release(param_3);
  if (puVar1 != (undefined *)0x0) {
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f0e038;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110f0e538;
    puStack_50 = PTR____kCFBooleanTrue_11034ab68;
    puStack_48 = PTR____kCFBooleanFalse_11034ab60;
    ppuStack_58 = &PTR____CFConstantStringClassReference_110f0e5b8;
    puStack_40 = PTR____kCFBooleanFalse_11034ab60;
    uVar5 = 3;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_50,&ppuStack_68,3)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c2b53e0(param_5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  _objc_retain(uVar5);
  puVar1 = puVar4;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf0d820();
  _objc_release(puVar1);
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar4;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = puVar3;
    func_0x00010bf0d0a0();
    if ((int)puVar1 == 8) {
      puVar1 = puVar3;
      func_0x00010c0b5520(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be15d80(param_5,param_2,puVar1,uVar5,puVar4);
      _objc_release(puVar1);
    }
    _objc_release(puVar3);
  }
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1058efd74; end: 1058efe77; -[SCLongformVideoPagePropertiesProvider pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058efd74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d820();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf0d0a0();
    if ((int)lVar1 == 8) {
      lVar1 = lVar3;
      func_0x00010c0b5520(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be15d80(param_1,param_2,lVar1,param_5,param_3);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058efe78; end: 1058eff27; -[SCLongformVideoPagePropertiesProvider _findMediaReferences:ids:] */

void FUN_1058efe78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010c0c6280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1058eff28;
  puStack_40 = &UNK_1108be678;
  uStack_38 = param_4;
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x0001006372a4(param_3,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058eff28; end: 1058eff87;  */

undefined8 FUN_1058eff28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c55e0(param_2);
  func_0x00010c0df7c0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar2);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1058eff88; end: 1058f023b; -[SCLongformVideoPagePropertiesProvider _fillLongformVideo:pageProperties:snapDoc:] */

ulong FUN_1058eff88(undefined8 param_1,undefined **param_2,ulong param_3,undefined **param_4,
                   undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_3;
  ppuVar11 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 != 0) {
    uVar1 = param_3;
    func_0x00010c0fd9c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c55e0();
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (uVar2 != 0) {
      uVar1 = param_3;
      func_0x00010c0fd9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c55e0();
      func_0x00010c0df7c0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2268e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be16b20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar1);
      uVar5 = param_1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0c55e0();
      func_0x00010c0df7c0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c25d700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0760(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(uVar5);
      _objc_release(param_1);
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar1 = param_3;
    func_0x00010bfe5ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar2 = param_3;
    func_0x00010c0b83e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = &PTR____CFConstantStringClassReference_110f0cab8;
    uVar1 = uVar2;
    func_0x00010c1d0760(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_3;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar1);
  _objc_retain(ppuVar11);
  uVar2 = uVar1;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = uVar1;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    param_2 = &PTR___NSConcreteGlobalBlock_1108be6a8;
    uVar7 = uVar6;
    func_0x0001006372a4();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c2a3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar6;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c08fa60();
    _objc_release(uVar2);
    if (uVar8 == 0) {
      uVar2 = uVar1;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85640();
      _objc_release(uVar8);
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(ppuVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  _objc_release(ppuVar11);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar12) {
    ___stack_chk_fail();
    func_0x00010c2a3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar11 = param_2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = ppuVar11;
    func_0x00010c08fa60();
    _objc_release(ppuVar11);
    _objc_release(param_2);
    return (ulong)(ppuVar10 != (undefined **)0x0);
  }
  return uVar1;
}



/* Entry: 1058f023c; end: 1058f0497; -[SCPlaybackCharacteristicsPagePropertiersResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

ulong FUN_1058f023c(undefined8 param_1,undefined **param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0ff660();
    _objc_retainAutoreleasedReturnValue();
    param_2 = &PTR___NSConcreteGlobalBlock_1108be6a8;
    uVar3 = uVar2;
    func_0x0001006372a4();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c2a3a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    if (uVar4 == 0) {
      uVar1 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0fef80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf85640();
      _objc_release(uVar4);
      _objc_release(uVar1);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(param_4);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    func_0x00010c2a3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = param_2;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar8;
    func_0x00010c08fa60();
    _objc_release(ppuVar8);
    _objc_release(param_2);
    return (ulong)(ppuVar9 != (undefined **)0x0);
  }
  return param_3;
}



/* Entry: 1058f0498; end: 1058f04fb;  */

bool FUN_1058f0498(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2a3a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 1058f04fc; end: 1058f0553; -[SCSnapDocOperaPageResolverEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058f04fc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272be90,0);
  _objc_storeStrong(param_1 + _DAT_11272be88,0);
  _objc_destroyWeak(param_1 + _DAT_11272be8c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272be94);
  return;
}



/* Entry: 1058f0554; end: 1058f0697; -[SCSnapDocOperaPageResolverImpl pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058f0554(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar4 = *(long *)(param_1 + 8);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010c0f1ae0(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1058f0698; end: 1058f06a3; -[SCSnapDocOperaPageResolverImpl .cxx_destruct] */

void FUN_1058f0698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f06a4; end: 1058f085f; -[SCSnapDocOperaWebPagePageResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058f06a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0ff660();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001006372a4();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2a3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar4 != 0) {
    func_0x00010be15e60(param_1);
  }
  lVar1 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  lVar1 = lVar5;
  func_0x00010bf0d0a0();
  if ((int)lVar1 == 3) {
    lVar1 = lVar5;
    func_0x00010c2a3a80(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be15e60(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058f0860; end: 1058f08c3;  */

bool FUN_1058f0860(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c2a3a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  _objc_release(param_2);
  return lVar2 != 0;
}



/* Entry: 1058f08c4; end: 1058f1207; -[SCSnapDocOperaWebPagePageResolver _fillWebPage:pagePropertiesBuilder:topSnap:] */

void FUN_1058f08c4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined8 uVar19;
  ulong uVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined **ppuStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined **ppuStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  uVar19 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar7 = param_3;
  func_0x00010bdc2b80();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c08fa60();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (puVar8 == (undefined *)0x0) goto LAB_1058f11bc;
  puVar8 = param_3;
  func_0x00010bdc2b80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar7,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bfe00;
  func_0x00010bf3fe60();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d20;
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_80 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_78,&puStack_80,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_4,param_2,puVar9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bfe00;
  func_0x00010bef2400(PTR_PTR_1126bfe00);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_4,param_2,puVar7,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = param_3;
  func_0x00010c22c640();
  iVar6 = (int)puVar8;
  bVar5 = iVar6 == 2 || iVar6 == 1;
  uVar21 = (uint)param_5;
  if (uVar21 != 0) {
    puVar8 = param_3;
    func_0x00010bf8bc40();
    bVar5 = (int)puVar8 == 1 || bVar5;
  }
  puVar9 = PTR_PTR_1126bdd88;
  func_0x00010c22a9a0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_150 = puVar9;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,bVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126bdd88;
  puStack_e8 = puVar10;
  func_0x00010c22b140();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_148 = puVar11;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,iVar6 == 2);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_140 = &PTR____CFConstantStringClassReference_110f0caf8;
  puVar13 = param_3;
  puStack_e0 = puVar12;
  func_0x00010bf1d300();
  if (((ulong)puVar13 & 1) == 0) {
    puVar13 = param_3;
    func_0x00010c22c5c0(param_3);
    bVar5 = (int)puVar13 != 1;
  }
  else {
    bVar5 = false;
  }
  func_0x00010c0df760(puVar8,param_2,bVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar13 = PTR____kCFBooleanTrue_11034ab68;
  puStack_d0 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_138 = &PTR____CFConstantStringClassReference_110f0bcf8;
  ppuStack_130 = &PTR____CFConstantStringClassReference_110f0bd38;
  ppuStack_c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d38;
  puStack_c0 = PTR____kCFBooleanTrue_11034ab68;
  ppuStack_128 = &PTR____CFConstantStringClassReference_110f0bd58;
  ppuStack_120 = &PTR____CFConstantStringClassReference_110f0ce18;
  puVar14 = param_3;
  puStack_d8 = puVar8;
  func_0x00010c2a4940(param_3);
  func_0x00010c0df760(puVar15,param_2,(int)puVar14 == 1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_b0 = puVar13;
  ppuStack_118 = &PTR____CFConstantStringClassReference_110f0cb18;
  ppuStack_110 = &PTR____CFConstantStringClassReference_110f0cbf8;
  ppuStack_a8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d38;
  ppuStack_108 = &PTR____CFConstantStringClassReference_110f0cc38;
  puVar16 = param_3;
  puStack_b8 = puVar15;
  func_0x00010c108840(param_3);
  func_0x00010c0df760(puVar14,param_2,(int)puVar16 != 3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_98 = puVar13;
  ppuStack_100 = &PTR____CFConstantStringClassReference_110f0ccb8;
  ppuStack_f8 = &PTR____CFConstantStringClassReference_110f0cb78;
  puStack_90 = PTR____kCFBooleanFalse_11034ab60;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110f0cd18;
  puVar13 = param_3;
  puStack_a0 = puVar14;
  func_0x00010bf4fec0(param_3);
  func_0x00010c0df6e0(puVar16,param_2,puVar13);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar16;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_e8,&puStack_150,0xd)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_4,param_2,puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar8);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  puVar8 = PTR_PTR_1126b0380;
  func_0x00010c291260(PTR_PTR_1126b0380);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0bbd8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = param_3;
  func_0x00010bf21120();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bf529e0();
  _objc_release(puVar8);
  if (puVar9 == (undefined *)0x0) {
    uVar20 = 0;
    uVar22 = 0;
    uVar23 = 1;
  }
  else {
    uVar22 = 0;
    uVar20 = 0;
    uVar23 = 1;
    puVar8 = (undefined *)0x1;
    do {
      puVar9 = param_3;
      func_0x00010bf21120();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010c296de0();
      _objc_release(puVar9);
      iVar6 = (int)puVar10;
      uVar2 = uVar20;
      if (iVar6 == 1) {
        uVar2 = uVar20 | 2;
      }
      uVar3 = uVar20 | 1;
      if (iVar6 != 2) {
        uVar3 = uVar2;
      }
      uVar1 = 0;
      if (iVar6 != 2) {
        uVar1 = uVar23;
      }
      if (iVar6 != 3) {
        uVar20 = uVar3;
      }
      uVar4 = 1;
      if (iVar6 != 3) {
        uVar23 = uVar1;
        uVar4 = uVar22;
      }
      uVar22 = uVar4;
      puVar9 = param_3;
      func_0x00010bf21120();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bf529e0();
      _objc_release(puVar9);
      bVar5 = puVar8 < puVar10;
      puVar8 = (undefined *)(ulong)((int)puVar8 + 1);
    } while (bVar5);
  }
  ppuStack_1c0 = &PTR____CFConstantStringClassReference_110f0cd38;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar20);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b8 = &PTR____CFConstantStringClassReference_110f0ccf8;
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_188 = puVar8;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar22);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1b0 = &PTR____CFConstantStringClassReference_110f0cf78;
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_180 = puVar9;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a8 = &PTR____CFConstantStringClassReference_110f0ce58;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_178 = puVar10;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar21 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1a0 = &PTR____CFConstantStringClassReference_110f0ce78;
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_170 = puVar11;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar21);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_198 = &PTR____CFConstantStringClassReference_110f0ce98;
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_168 = puVar12;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar21 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_190 = &PTR____CFConstantStringClassReference_110f0cb98;
  puVar15 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_160 = puVar13;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_158 = puVar15;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_188,&ppuStack_1c0,7)
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b53e0(param_4,param_2,puVar14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  func_0x00010c1d0760(param_4,param_2,puVar7,&PTR____CFConstantStringClassReference_110f0cad8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c08fa60();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (puVar9 != (undefined *)0x0) {
    puVar9 = param_3;
    func_0x00010bf13d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf415c0(puVar8,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0cb38);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0cf18);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  puVar8 = param_3;
  func_0x00010c260840();
  iVar6 = (int)puVar8;
  if ((iVar6 == -0x4524111) || (iVar6 == 0)) {
    ppuStack_1e0 = &PTR____CFConstantStringClassReference_110f0c858;
    ppuStack_1d8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d50;
    pppuVar17 = &ppuStack_1d8;
    pppuVar18 = &ppuStack_1e0;
LAB_1058f10e4:
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,pppuVar17,pppuVar18,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_4,param_2,puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else if (iVar6 == 1) {
    ppuStack_1d0 = &PTR____CFConstantStringClassReference_110f0c858;
    ppuStack_1c8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d20;
    pppuVar17 = &ppuStack_1c8;
    pppuVar18 = &ppuStack_1d0;
    goto LAB_1058f10e4;
  }
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  ppuStack_200 = &PTR____CFConstantStringClassReference_110f0e038;
  puVar9 = param_3;
  func_0x00010c29d520(param_3);
  func_0x00010c0df760(puVar8,param_2,(int)puVar9 == 1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_1f8 = &PTR____CFConstantStringClassReference_110f0cd78;
  puStack_1e8 = PTR____kCFBooleanFalse_11034ab60;
  uVar19 = 2;
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_1f0 = puVar8;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_1f0,&ppuStack_200,2)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar10;
  func_0x00010c2b53e0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_1058f11bc:
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    _objc_retain(uVar19);
    puVar7 = puVar9;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf0d820();
    _objc_release(puVar7);
    if (puVar8 != (undefined *)0x0) {
      puVar7 = puVar9;
      func_0x00010bf0d7e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bf0d800();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar8;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar7);
      puVar7 = puVar10;
      func_0x00010bf0d0a0();
      if ((int)puVar7 == 10) {
        puVar7 = puVar10;
        func_0x00010c2606c0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be15de0(param_3,param_2,puVar7,uVar19);
        _objc_release(puVar7);
      }
      _objc_release(puVar10);
    }
    _objc_release(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
  return;
}



/* Entry: 1058f1208; end: 1058f1307; -[SCSubscriptionAttachmentPagePropertiesResolver pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058f1208(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf0d820();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf0d800();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = lVar3;
    func_0x00010bf0d0a0();
    if ((int)lVar1 == 10) {
      lVar1 = lVar3;
      func_0x00010c2606c0(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be15de0(param_1,param_2,lVar1,param_5);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1058f1308; end: 1058f16bb; -[SCSubscriptionAttachmentPagePropertiesResolver _fillSubscription:pageProperties:] */

void FUN_1058f1308(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined ***param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  pppuVar6 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != (undefined *)0x0) {
    puVar8 = param_3;
    func_0x00010c260860();
    if ((int)puVar8 == 2) {
      puVar8 = param_3;
      func_0x00010bf627c0();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010c112dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010c08fa60();
      _objc_release(puVar9);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      if (puVar2 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar9 = param_3;
        func_0x00010bf627c0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar9;
        func_0x00010c112dc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf415c0(puVar8,param_2,puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        _objc_release(puVar9);
      }
      puVar9 = param_3;
      func_0x00010bf627c0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010c154ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c08fa60();
      _objc_release(puVar2);
      _objc_release(puVar9);
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      if (puVar3 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar2 = param_3;
        func_0x00010bf627c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c154ea0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf415c0(puVar9,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_release(puVar2);
      }
      func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0c758);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0c798);
      _objc_unsafeClaimAutoreleasedReturnValue();
      func_0x00010c1d0760(param_4,param_2,puVar9,&PTR____CFConstantStringClassReference_110f0c778);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    func_0x000107b94d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0d258);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x000107b94d68();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0c7d8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x000107b94d68();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0c818);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x000107b94d68();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0c838);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x000107b94d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0760(param_4,param_2,puVar8,&PTR____CFConstantStringClassReference_110f0c7f8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f0c7b8;
    ppuStack_60 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1d68;
    pppuVar6 = &ppuStack_68;
    param_5 = 1;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,pppuVar6,1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010c2b53e0(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar8);
  _objc_retain(pppuVar6);
  _objc_retain(param_5);
  puVar9 = puVar8;
  func_0x00010bfda280();
  if ((int)puVar9 == 0) goto LAB_1058f18d4;
  puVar3 = puVar8;
  func_0x00010c0f9ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c22aca0();
  puVar2 = PTR____kCFBooleanTrue_11034ab68;
  puVar9 = PTR____kCFBooleanFalse_11034ab60;
  iVar1 = (int)puVar4;
  if (iVar1 == -0x4524111) {
LAB_1058f174c:
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110f0dd98;
    puStack_d0 = PTR____kCFBooleanFalse_11034ab60;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_d0,&ppuStack_d8,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(pppuVar6,param_2,puVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar8;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf0d820();
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) {
      ppuStack_e8 = &PTR____CFConstantStringClassReference_110f0ddb8;
      puStack_e0 = puVar9;
      ppuVar5 = &puStack_e0;
      pppuVar7 = &ppuStack_e8;
LAB_1058f189c:
      puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar5,pppuVar7,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(param_5,param_2,puVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
  }
  else if (iVar1 == 1) {
    ppuStack_108 = &PTR____CFConstantStringClassReference_110f0dd98;
    ppuStack_100 = &PTR____CFConstantStringClassReference_110f0dc78;
    puStack_f8 = PTR____kCFBooleanTrue_11034ab68;
    puStack_f0 = PTR____kCFBooleanTrue_11034ab68;
    puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_f8,&ppuStack_108,2
                       );
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(pppuVar6,param_2,puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar9;
    func_0x00010bf0d820();
    _objc_release(puVar9);
    if (puVar4 != (undefined *)0x0) {
      ppuStack_118 = &PTR____CFConstantStringClassReference_110f0ddb8;
      puStack_110 = puVar2;
      ppuVar5 = &puStack_110;
      pppuVar7 = &ppuStack_118;
      goto LAB_1058f189c;
    }
  }
  else if (iVar1 == 0) goto LAB_1058f174c;
  _objc_release(puVar3);
LAB_1058f18d4:
  _objc_release(param_5);
  _objc_release(pppuVar6);
  _objc_release(puVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puVar8 + 0x20;
  _objc_loadWeakRetained(puVar8);
  puVar9 = puVar8;
  func_0x00010bdf4320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1058f16bc; end: 1058f1923; -[SCUserPermittedActionsPagePropertiesProvider pagePropertiesForSnapDoc:pageProperties:attachmentProperties:] */

void FUN_1058f16bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = param_3;
  func_0x00010bfda280();
  if ((int)lVar2 == 0) goto LAB_1058f18d4;
  lVar2 = param_3;
  func_0x00010c0f9ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22aca0();
  puVar4 = PTR____kCFBooleanTrue_11034ab68;
  puVar5 = PTR____kCFBooleanFalse_11034ab60;
  iVar1 = (int)lVar3;
  if (iVar1 == -0x4524111) {
LAB_1058f174c:
    ppuStack_68 = &PTR____CFConstantStringClassReference_110f0dd98;
    puStack_60 = PTR____kCFBooleanFalse_11034ab60;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_60,&ppuStack_68,1)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_4,param_2,puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar4);
    lVar3 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf0d820();
    _objc_release(lVar3);
    if (lVar6 != 0) {
      ppuStack_78 = &PTR____CFConstantStringClassReference_110f0ddb8;
      puStack_70 = puVar5;
      ppuVar7 = &puStack_70;
      pppuVar8 = &ppuStack_78;
LAB_1058f189c:
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar7,pppuVar8,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b53e0(param_5,param_2,puVar5);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
    }
  }
  else if (iVar1 == 1) {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110f0dd98;
    ppuStack_90 = &PTR____CFConstantStringClassReference_110f0dc78;
    puStack_88 = PTR____kCFBooleanTrue_11034ab68;
    puStack_80 = PTR____kCFBooleanTrue_11034ab68;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_88,&ppuStack_98,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b53e0(param_4,param_2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    lVar3 = param_3;
    func_0x00010bf0d7e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf0d820();
    _objc_release(lVar3);
    if (lVar6 != 0) {
      ppuStack_a8 = &PTR____CFConstantStringClassReference_110f0ddb8;
      puStack_a0 = puVar4;
      ppuVar7 = &puStack_a0;
      pppuVar8 = &ppuStack_a8;
      goto LAB_1058f189c;
    }
  }
  else if (iVar1 == 0) goto LAB_1058f174c;
  _objc_release(lVar2);
LAB_1058f18d4:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  lVar2 = param_3;
  func_0x00010bdf4320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1058f1924; end: 1058f1a23;  */

void FUN_1058f1924(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf4320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1058f1a24; end: 1058f1a2b;  */

void FUN_1058f1a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 1058f1a2c; end: 1058f1ab3;  */

void FUN_1058f1a2c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d92a0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1058f1ab4; end: 1058f1aef; -[SCPlaybackLegacyHLSServiceEntryPoint end] */

void FUN_1058f1ab4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eace0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058f1af0; end: 1058f1cef; -[SCPlaybackLegacyHLSServiceEntryPoint _createStreamingMediaManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058f1af0(long param_1,undefined8 param_2)

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
  long lVar11;
  long lVar12;
  long lVar13;
  
  puVar1 = PTR_PTR_1126bfe70;
  _objc_alloc(PTR_PTR_1126bfe70);
  if (param_1 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = param_1 + _DAT_11272beb0;
    _objc_loadWeakRetained();
  }
  lVar2 = lVar9;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_11272bea8;
    _objc_loadWeakRetained();
  }
  lVar3 = lVar10;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_11272beac;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11272bea4;
    _objc_loadWeakRetained(lVar13);
  }
  lVar5 = lVar13;
  func_0x00010bf07a00(lVar13);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11272beb4;
    _objc_loadWeakRetained(lVar12);
  }
  lVar6 = lVar12;
  func_0x00010c0b83c0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_11272beb8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar8 = lVar7;
  func_0x00010c0f98e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036e20(puVar1,param_2,lVar2,lVar3,lVar4,lVar5,lVar6,lVar8);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar12);
  _objc_release(lVar5);
  _objc_release(lVar13);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar3);
  _objc_release(lVar10);
  _objc_release(lVar2);
  _objc_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f1cf0; end: 1058f1d73; -[SCPlaybackLegacyHLSServiceEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1058f1cf0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272be9c,0);
  _objc_destroyWeak(param_1 + _DAT_11272beb8);
  _objc_destroyWeak(param_1 + _DAT_11272beb4);
  _objc_destroyWeak(param_1 + _DAT_11272beb0);
  _objc_destroyWeak(param_1 + _DAT_11272beac);
  _objc_destroyWeak(param_1 + _DAT_11272bea8);
  _objc_destroyWeak(param_1 + _DAT_11272bea4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272bea0);
  return;
}



/* Entry: 1058f1d74; end: 1058f1e57; -[SCPlaybackSingleMediaResolutionRequest downloadUrl] */

void FUN_1058f1d74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1058f1e58;
  uStack_30 = 0x1058f1e68;
  uStack_28 = 0;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1120();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058f1e58; end: 1058f1e6f;  */

void FUN_1058f1e58(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1058f1e70; end: 1058f1ea7;  */

void FUN_1058f1e70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1058f1ea8; end: 1058f1eab;  */

void FUN_1058f1ea8(void)

{
  return;
}



/* Entry: 1058f1eac; end: 1058f1f43; -[SCPlaybackSingleMediaResolutionRequest expirationDate] */

void FUN_1058f1eac(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    puVar3 = puVar2;
    func_0x00010bf64e40(0x40f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058f1f44; end: 1058f22d7; -[SCPlaybackSingleMediaResolutionRequest debugInfo] */

void FUN_1058f1f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
  uVar2 = param_1;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c4b8);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010c0c6c20(param_1);
  func_0x00010c0df780(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c4d8);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010c08c440(param_1);
  func_0x00010c0df780(puVar5,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c4f8);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c292920();
  func_0x00010c0df760(puVar5,param_2,(uint)uVar3 ^ 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c518);
  _objc_release(puVar5);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c538);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c558);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c292920();
  func_0x00010c0df6e0(puVar5,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c107de0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar4;
  func_0x00010bf438e0();
  func_0x00010c0df6e0(puVar7,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar6 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar6;
  func_0x00010c13e320();
  func_0x00010c0df6e0(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bdc0ca0();
  func_0x00010c0df6e0(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf06ba0(puVar1,param_2,&PTR____CFConstantStringClassReference_110e0c578);
  _objc_release(puVar10);
  _objc_release(param_1);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f22d8; end: 1058f238f; -[SCPlaybackSingleMediaResolutionRequest debugIdentifier] */

void FUN_1058f22d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c08c440();
  func_0x000107cd1d5c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0c6c20();
  func_0x000107cd1d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf8660(param_1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110df2d98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1058f2390; end: 1058f241f; -[SCPlaybackSingleMediaResolutionRequest abrDebugIdentifier] */

void FUN_1058f2390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bdf8660(param_1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf661e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110e0c598);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058f2420; end: 1058f2533; -[SCPlaybackSingleMediaResolutionRequest _debugMediaId:] */

void FUN_1058f2420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1058f1e58;
  uStack_40 = 0x1058f1e68;
  uStack_38 = 0;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1120();
  _objc_release(param_1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1058f2534; end: 1058f258b;  */

void FUN_1058f2534(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e0c5b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1058f258c; end: 1058f2713;  */

void FUN_1058f258c(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar8;
  func_0x00010c0c5180();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(lVar8);
    _objc_release(lVar2);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x30);
    _objc_release();
    _objc_release(lVar8);
    _objc_release(lVar2);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((bVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf9d9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf4c8a0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c0c5180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      uVar7 = *(undefined8 *)(lVar8 + 0x28);
      *(undefined **)(lVar8 + 0x28) = puVar6;
      _objc_release(uVar7);
      goto LAB_1058f26e0;
    }
  }
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = param_2;
  func_0x00010b0eebbc();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c280580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar9 = *(undefined8 *)(lVar8 + 0x28);
  *(undefined **)(lVar8 + 0x28) = puVar6;
LAB_1058f26e0:
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f2714; end: 1058f285f; -[SCPlaybackSingleMediaResolutionRequest switchBoardKey] */

void FUN_1058f2714(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010c0c6c20();
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010c08c440(param_1);
  func_0x00010c0df780(puVar3,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = param_1;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c29d360();
  func_0x00010c0df780(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf9d9e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c292920();
  func_0x00010c0df6e0(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar7,param_2,&PTR____CFConstantStringClassReference_110e0c618);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1058f2860; end: 1058f28df; -[SCDispatchGroupGuard initWithDispatchGroup:] */

undefined1 * FUN_1058f2860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eace8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
    _dispatch_group_enter(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1058f28e0; end: 1058f2923; -[SCDispatchGroupGuard leave] */

void FUN_1058f28e0(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010be49e20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1058f2924; end: 1058f2973; -[SCDispatchGroupGuard cancel] */

void FUN_1058f2924(long param_1)

{
  long lVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = param_1;
  func_0x00010be49e20();
  if ((int)lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1058f2974; end: 1058f29a7; -[SCDispatchGroupGuard isCancelled] */

undefined1 FUN_1058f2974(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  _os_unfair_lock_unlock(param_1 + 0x10);
  return uVar1;
}



/* Entry: 1058f29a8; end: 1058f29db; -[SCDispatchGroupGuard _leaveIfNeeded] */

byte FUN_1058f29a8(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x15);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x15) = 1;
    _dispatch_group_leave(*(undefined8 *)(param_1 + 8));
  }
  return bVar1 ^ 1;
}



/* Entry: 1058f29dc; end: 1058f29e7; -[SCDispatchGroupGuard .cxx_destruct] */

void FUN_1058f29dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f29e8; end: 1058f2a63; -[SCDispatchGroupHolder init] */

undefined1 * FUN_1058f29e8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eacf0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    _dispatch_group_create();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar4);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1058f2a64; end: 1058f2acb; -[SCDispatchGroupHolder enter] */

void FUN_1058f2a64(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  puVar1 = PTR_PTR_1126bfe78;
  _objc_alloc(PTR_PTR_1126bfe78);
  func_0x00010c00d220();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,puVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1058f2acc; end: 1058f2c03; -[SCDispatchGroupHolder isCancelled] */

undefined1 * FUN_1058f2acc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar4 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _os_unfair_lock_lock(param_1 + 0x18);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar5 = *(long *)(param_1 + 0x10);
  _objc_retain(lVar5);
  puVar3 = auStack_c8;
  lVar1 = lVar5;
  func_0x00010bf52a60();
  puVar6 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    unaff_x22 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(lVar5);
        }
        uVar2 = *(ulong *)(lStack_108 + lVar8 * 8);
        func_0x00010c06e0e0();
        if ((uVar2 & 1) != 0) {
          puVar6 = (undefined1 *)0x1;
          goto LAB_1058f2b98;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar3 = auStack_c8;
      lVar1 = lVar5;
      puVar4 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    puVar6 = (undefined1 *)0x0;
  }
LAB_1058f2b98:
  _objc_release(lVar5);
  lVar1 = param_1 + 0x18;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  lVar5 = lVar1;
  __Unwind_Resume();
  pcStack_118 = FUN_1058f2c04;
  lStack_140 = unaff_x22;
  puStack_138 = puVar6;
  lStack_130 = lVar1;
  lStack_128 = param_1;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  uVar7 = *(undefined8 *)(lVar5 + 8);
  puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_168 = 0xc2000000;
  pcStack_160 = FUN_1058f2c9c;
  puStack_158 = &UNK_11084aaa8;
  lStack_150 = lVar5;
  puStack_148 = puVar3;
  _objc_retain(puVar3);
  func_0x00010bcbe628(uVar7,puVar4,&puStack_170);
  _objc_release(puStack_148);
  _objc_release(puVar3);
  return puVar3;
}



/* Entry: 1058f2c04; end: 1058f2c9b; -[SCDispatchGroupHolder notify:block:] */

void FUN_1058f2c04(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1058f2c9c;
  puStack_48 = &UNK_11084aaa8;
  lStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010bcbe628(uVar1,param_3,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 1058f2c9c; end: 1058f2cd7;  */

void FUN_1058f2c9c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001058f2cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 1058f2cd8; end: 1058f2d07; -[SCDispatchGroupHolder .cxx_destruct] */

void FUN_1058f2cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f2d08; end: 1058f2f03; -[SCPlaybackABRMediaResolver initWithBoltContentResolver:contentDelivery:configProvider:abrMediaServices:webProxyServices:legacyMediaResolver:performer:] */

undefined1 *
FUN_1058f2d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126eacf8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar3 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar3 + 8);
    *(undefined8 *)((long)puVar3 + 8) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x10);
    *(undefined8 *)((long)puVar3 + 0x10) = param_4;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x20);
    *(undefined8 *)((long)puVar3 + 0x20) = param_5;
    _objc_release(uVar4);
    uVar4 = param_6;
    func_0x00010c0c64a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x18);
    *(undefined8 *)((long)puVar3 + 0x18) = uVar4;
    _objc_release(uVar6);
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar3 + 0x40);
    *(undefined **)((long)puVar3 + 0x40) = puVar5;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x38);
    *(undefined8 *)((long)puVar3 + 0x38) = param_9;
    _objc_release(uVar4);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar3 + 0x20);
    func_0x00010bf1f440();
    *(undefined1 *)((long)puVar3 + 0x28) = uVar1;
    iVar2 = (int)*(undefined8 *)((long)puVar3 + 0x20);
    func_0x00010c067f00();
    *(long *)((long)puVar3 + 0x30) = (long)iVar2;
    uVar4 = param_7;
    func_0x00010c119cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)((long)puVar3 + 0x48);
    *(undefined8 *)((long)puVar3 + 0x48) = uVar4;
    _objc_release(uVar6);
    _objc_retain(param_8);
    uVar4 = *(undefined8 *)((long)puVar3 + 0x50);
    *(undefined8 *)((long)puVar3 + 0x50) = param_8;
    _objc_release(uVar4);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar3;
}



/* Entry: 1058f2f04; end: 1058f30db; -[SCPlaybackABRMediaResolver shouldResolveWithRequest:] */

bool FUN_1058f2f04(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010c0df780(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar7,param_2,puVar3);
  _objc_release(puVar3);
  if ((int)uVar7 != 0) {
    uVar2 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bdc0ca0();
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) {
      bVar1 = true;
      goto LAB_1058f30a4;
    }
    uVar2 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0c5180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bfda7c0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if ((int)uVar6 != 0) {
      uVar2 = param_3;
      func_0x00010bf9d9e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      func_0x00010c135080();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c11fca0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfa96c0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      if (uVar6 < 3) {
        uVar2 = param_3;
        func_0x00010bf9d9e0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar2;
        func_0x00010bf4c8a0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0c46a0();
        if (uVar5 == 0x10) {
          uVar5 = param_3;
          func_0x00010c08c440(param_3);
          bVar1 = uVar5 == 1;
        }
        else {
          bVar1 = false;
        }
        _objc_release(uVar4);
        _objc_release(uVar2);
        goto LAB_1058f30a4;
      }
    }
  }
  bVar1 = false;
LAB_1058f30a4:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1058f30dc; end: 1058f3213; -[SCPlaybackABRMediaResolver resolveRequest:completion:] */

void FUN_1058f30dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0c5220();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c271da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be0e440(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    lVar1 = param_3;
    func_0x00010c0c5220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0,puVar3);
    (**(code **)(param_4 + 0x10))(param_4,param_1,puVar3);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    func_0x00010b0eeb90();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be82020();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1058f3214; end: 1058f3217; -[SCPlaybackABRMediaResolver downloadSingleMedia:range:loggedUseCase:completion:] */

void FUN_1058f3214(void)

{
  _objc_opt_new(PTR_PTR_1126b7fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058f3218; end: 1058f321b; -[SCPlaybackABRMediaResolver prefetchStreamingContentFrom:completion:] */

void FUN_1058f3218(void)

{
  _objc_opt_new(PTR_PTR_1126b7fc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1058f321c; end: 1058f3323; -[SCPlaybackABRMediaResolver _failureResultForRequest:errorCode:] */

void FUN_1058f321c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  _objc_retain(param_3);
  func_0x00010bf99240(puVar1,param_2,&PTR____CFConstantStringClassReference_110f68bf8,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bfe88;
  _objc_alloc(PTR_PTR_1126bfe88);
  uVar3 = param_3;
  func_0x00010c0c6c20(param_3);
  uVar4 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0c46a0();
  uVar7 = param_3;
  func_0x00010c08c440(param_3);
  _objc_release(param_3);
  func_0x00010c029fe0(puVar2,param_2,uVar3,uVar6,uVar7,puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058f3324; end: 1058f36a3; -[SCPlaybackABRMediaResolver _processRequest:contentBundle:completion:] */

void FUN_1058f3324(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf93e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c085300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010c08fa60();
  uVar5 = param_4;
  if ((puVar1 != (undefined *)0x0) &&
     (puVar1 = puVar4, func_0x00010c08fa60(), puVar1 != (undefined *)0x0)) {
    func_0x00010c2ad2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
  }
  puVar1 = param_3;
  func_0x00010bf9d9e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c107de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010bf438e0();
    puVar1 = PTR_PTR_1126b8010;
    _objc_alloc(PTR_PTR_1126b8010);
    func_0x00010bf438e0(puVar2);
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0003a0(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar6);
  }
  _objc_initWeak(auStack_68,param_1);
  puVar2 = PTR_PTR_1126b7fc0;
  _objc_alloc_init();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  puVar6 = param_3;
  func_0x00010bf9d9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(puVar2);
  func_0x00010c09c0c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010bef7460(puVar2);
  _objc_retain(puVar2);
  _objc_release(uVar8);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1058f36a4; end: 1058f3817;  */

void FUN_1058f36a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be94fc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar6);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    func_0x00010c0c0800(lVar2);
    _objc_release(uVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f3818; end: 1058f39df;  */

void FUN_1058f3818(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126bfe90;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010beec820(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9d9e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c135080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05a140(puVar1);
  _objc_release(param_2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c119ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126bfe88;
  _objc_alloc(PTR_PTR_1126bfe88);
  func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf9d9e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf4c8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c08c440(*(undefined8 *)(param_1 + 0x20));
  uVar3 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02a000(puVar5);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar5,0);
  _objc_release(puVar5);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1058f39e0; end: 1058f3b3b;  */

void FUN_1058f39e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar1 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x50);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bfe88;
    _objc_alloc(PTR_PTR_1126bfe88);
    func_0x00010c0c6c20(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9d9e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c08c440(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c029fe0(puVar1);
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar5 = *(long *)(param_1 + 0x38);
    puVar3 = PTR_PTR_1126bfe80;
    _objc_alloc(PTR_PTR_1126bfe80);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0c5220(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c029740(0,puVar3);
    (**(code **)(lVar5 + 0x10))(lVar5,puVar1,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c13ace0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(uVar4);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1058f3b3c; end: 1058f3cc3; -[SCPlaybackABRMediaResolver _resolvedUrlFromABRResult:error:] */

void FUN_1058f3b3c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar1 = param_3;
    func_0x00010c25c880();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c071ae0();
    if ((uVar3 & 1) == 0) {
      uVar3 = 8;
      func_0x000107cd11bc(8,&PTR____CFConstantStringClassReference_110e0c698);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar2 = param_3;
      func_0x00010c0b6e00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfcbc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      uVar2 = uVar3;
      func_0x00010c08fa60();
      puVar4 = PTR_PTR_1126af5d0;
      if (uVar2 == 0) {
        puVar5 = (undefined *)0x9;
        func_0x000107cd11bc(9,&PTR____CFConstantStringClassReference_110e0c6b8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126af5d0;
        func_0x00010bfa01c0(PTR_PTR_1126af5d0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
        func_0x00010c04e820();
        func_0x00010c2619e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
    }
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  else {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1058f3cc4; end: 1058f3d3b; -[SCPlaybackABRMediaResolver .cxx_destruct] */

void FUN_1058f3cc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1058f3d3c; end: 1058f3e0b; -[SCPlaybackBoltMediaResolver initWithBoltContentResolver:performer:] */

undefined1 *
FUN_1058f3d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ead00;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
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



/* Entry: 1058f3e0c; end: 1058f3ef3; -[SCPlaybackBoltMediaResolver shouldResolveWithRequest:] */

undefined8 FUN_1058f3e0c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf89200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4bb00();
  if ((int)uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf9d9e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc0ca0();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if ((uVar3 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = param_3;
      func_0x00010c0c6c20(param_3);
      func_0x00010c0df780(puVar4,param_2,uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf4b900(uVar5,param_2,puVar4);
      _objc_release(puVar4);
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}


