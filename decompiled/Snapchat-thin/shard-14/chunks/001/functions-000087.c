/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afb72e0; end: 10afb72eb;  */

bool FUN_10afb72e0(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10afb72ec; end: 10afb7353; +[SCSCORECustomStoryType descriptor] */

void FUN_10afb72ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3bcb0,
                        &PTR____CFConstantStringClassReference_110f453b8,&PTR_DAT_113347300,0,0,4,
                        0x1c);
    puRam00000001137f1628 = puVar1;
  }
  return;
}



/* Entry: 10afb7354; end: 10afb73bb; +[SCSCOREOurStoryFilterOptions descriptor] */

void FUN_10afb7354(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3bd50,
                        &PTR____CFConstantStringClassReference_110f453d8,&PTR_DAT_113347318,
                        &PTR_DAT_113347330,4,0x10,0x1c);
    puRam00000001137f1630 = puVar1;
  }
  return;
}



/* Entry: 10afb73bc; end: 10afb7447; +[SCSCORETweakParameter descriptor] */

undefined * FUN_10afb73bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3bdf0,
                        &PTR____CFConstantStringClassReference_110f453f8,&PTR_DAT_1133473b8,
                        &PTR_DAT_1133473f0,4,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f1638 = puVar1;
  }
  return puRam00000001137f1638;
}



/* Entry: 10afb7448; end: 10afb752b; +[SCSCORETweaks descriptor] */

void FUN_10afb7448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3be40,
                        &PTR____CFConstantStringClassReference_110f45418,&PTR_DAT_1133473b8,
                        &PTR_DAT_1133473d0,1,0x10,0x1c);
    puRam00000001137f1640 = puVar1;
  }
  return;
}



/* Entry: 10afb752c; end: 10afb7537;  */

bool FUN_10afb752c(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10afb7538; end: 10afb759f; +[SCSCOREStatusCode descriptor] */

void FUN_10afb7538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3bee0,
                        &PTR____CFConstantStringClassReference_110f45458,&PTR_DAT_113347470,0,0,4,
                        0x1c);
    puRam00000001137f1650 = puVar1;
  }
  return;
}



/* Entry: 10afb75a0; end: 10afb7683; +[SCSCOREResponseStatus descriptor] */

void FUN_10afb75a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3bf30,
                        &PTR____CFConstantStringClassReference_110ed0598,&PTR_DAT_113347470,
                        &PTR_s_code_113347488,2,0x10,0x1c);
    puRam00000001137f1658 = puVar1;
  }
  return;
}



/* Entry: 10afb7684; end: 10afb768f;  */

bool FUN_10afb7684(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb7690; end: 10afb770b;  */

undefined * FUN_10afb7690(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1668 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45498,
                        &UNK_10e540df0,&UNK_10e540e40,4,FUN_10afb770c,0);
    do {
      if (puRam00000001137f1668 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1668;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1668,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1668 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1668;
}



/* Entry: 10afb770c; end: 10afb7717;  */

bool FUN_10afb770c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb7718; end: 10afb7793;  */

undefined * FUN_10afb7718(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1670 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f454b8,
                        &UNK_10e540e50,&UNK_10e540ea4,4,FUN_10afb7794,0);
    do {
      if (puRam00000001137f1670 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1670;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1670,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1670 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1670;
}



/* Entry: 10afb7794; end: 10afb779f;  */

bool FUN_10afb7794(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb77a0; end: 10afb781b;  */

undefined * FUN_10afb77a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1678 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f454d8,
                        &UNK_10e540eb4,&UNK_10e540f04,7,FUN_10afb781c,0);
    do {
      if (puRam00000001137f1678 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1678;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1678,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1678 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1678;
}



/* Entry: 10afb781c; end: 10afb7827;  */

bool FUN_10afb781c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10afb7828; end: 10afb788f; +[SCSUPBasicAttributes descriptor] */

void FUN_10afb7828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3bfd0,
                        &PTR____CFConstantStringClassReference_110f454f8,&PTR_DAT_1133474c8,
                        &PTR_s_userId_1133474e0,0x32,0x120,0x1c);
    puRam00000001137f1680 = puVar1;
  }
  return;
}



/* Entry: 10afb7890; end: 10afb78f7; +[SCSUPAppVersion descriptor] */

void FUN_10afb7890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c070,
                        &PTR____CFConstantStringClassReference_110df4198,&PTR_DAT_113347b20,
                        &PTR_DAT_113347b38,3,0x20,0x1c);
    puRam00000001137f1688 = puVar1;
  }
  return;
}



/* Entry: 10afb78f8; end: 10afb79ef; +[SCSUPWindowedMetrics descriptor] */

void FUN_10afb78f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c110,
                        &PTR____CFConstantStringClassReference_110f45518,&PTR_DAT_113347b98,
                        &PTR_DAT_113347bb0,4,0x14,0x1c);
    puRam00000001137f1690 = puVar1;
  }
  return;
}



/* Entry: 10afb79f0; end: 10afb7b53;  */

undefined8 FUN_10afb79f0(uint param_1)

{
  if ((int)param_1 < 10000) {
    if ((int)param_1 < 1000) {
      if (((0x33 < param_1 - 0xe4) || (param_1 - 0xe4 == 10)) &&
         ((0x19 < param_1 - 0xc9 && (0xf < param_1)))) {
        return 0;
      }
    }
    else if ((int)param_1 < 0x7d1) {
      if ((9 < param_1 - 0x44d) && (param_1 != 1000)) {
        return 0;
      }
    }
    else if ((9 < param_1 - 0x7d1) && (3 < param_1 - 9000)) {
      return 0;
    }
  }
  else if ((int)param_1 < 0x283d) {
    if (((0x25 < param_1 - 0x2774) && (0xc < param_1 - 10000)) && (9 < param_1 - 0x27d9)) {
      return 0;
    }
  }
  else if ((int)param_1 < 0x2f45) {
    if ((int)param_1 < 0x2af9) {
      if ((4 < param_1 - 0x283d) && (4 < param_1 - 0x28a1)) {
        return 0;
      }
    }
    else if ((9 < param_1 - 0x2af9) && (8 < param_1 - 0x2ee1)) {
      return 0;
    }
  }
  else if (((0xe < param_1 - 30000) && (9 < param_1 - 0x2f45)) && (1 < param_1 - 19999)) {
    return 0;
  }
  return 1;
}



/* Entry: 10afb7b54; end: 10afb7bbb; +[FeedType descriptor] */

void FUN_10afb7b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c1b0,
                        &PTR____CFConstantStringClassReference_110f45558,&PTR_DAT_113347c30,0,0,4,
                        0x1c);
    puRam00000001137f16a0 = puVar1;
  }
  return;
}



/* Entry: 10afb7bbc; end: 10afb7c23; +[FeedTypeMetadata descriptor] */

void FUN_10afb7bbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c200,
                        &PTR____CFConstantStringClassReference_110f45578,&PTR_DAT_113347c30,
                        &PTR_DAT_113347c88,9,0x40,0x1c);
    puRam00000001137f16a8 = puVar1;
  }
  return;
}



/* Entry: 10afb7c24; end: 10afb7c8b; +[TopicPageSectionMetadata descriptor] */

void FUN_10afb7c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c250,
                        &PTR____CFConstantStringClassReference_110f45598,&PTR_DAT_113347c30,
                        &PTR_DAT_113347c48,2,0x18,0x1c);
    puRam00000001137f16b0 = puVar1;
  }
  return;
}



/* Entry: 10afb7c8c; end: 10afb7d6f; +[SCSSMSectionConfig descriptor] */

void FUN_10afb7c8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c2f0,
                        &PTR____CFConstantStringClassReference_110ed6e98,&PTR_DAT_113347da8,
                        &PTR_DAT_113347dc0,2,0x10,0x1c);
    puRam00000001137f16b8 = puVar1;
  }
  return;
}



/* Entry: 10afb7d70; end: 10afb7d7b;  */

bool FUN_10afb7d70(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb7d7c; end: 10afb7df7;  */

undefined * FUN_10afb7d7c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f16c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f455d8,
                        &UNK_10e542790,&UNK_10e5427c4,5,FUN_10afb7df8,0);
    do {
      if (puRam00000001137f16c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f16c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f16c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f16c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f16c8;
}



/* Entry: 10afb7df8; end: 10afb7e03;  */

bool FUN_10afb7df8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10afb7e04; end: 10afb7e8f; +[SCRankingJaguarSectionLayoutSectionLayout descriptor] */

undefined * FUN_10afb7e04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c390,
                        &PTR____CFConstantStringClassReference_110f455f8,&PTR_DAT_113347e08,
                        &PTR_DAT_113347ea0,6,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001137f16d0 = puVar1;
  }
  return puRam00000001137f16d0;
}



/* Entry: 10afb7e90; end: 10afb7f0b; +[SCRankingJaguarSectionLayoutSectionLayout_Padding descriptor] */

undefined * FUN_10afb7e90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c3e0,
                        &PTR____CFConstantStringClassReference_110f45618,&PTR_DAT_113347e08,
                        &PTR_DAT_113347e60,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137f16d8 = puVar1;
  }
  return puRam00000001137f16d8;
}



/* Entry: 10afb7f0c; end: 10afb7f73; +[SCRankingJaguarSectionLayoutVerticalSection descriptor] */

void FUN_10afb7f0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c4a8,
                        &PTR____CFConstantStringClassReference_110f45638,&PTR_DAT_113347e08,
                        &PTR_DAT_113347e20,1,8,0x1c);
    puRam00000001137f16e0 = puVar1;
  }
  return;
}



/* Entry: 10afb7f74; end: 10afb7ff7; +[SCRankingJaguarSectionLayoutVerticalSection_GridStyle descriptor] */

undefined * FUN_10afb7f74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c4d0,
                        &PTR____CFConstantStringClassReference_110f45658,&PTR_DAT_113347e08,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f16e8 = puVar1;
  }
  return puRam00000001137f16e8;
}



/* Entry: 10afb7ff8; end: 10afb805f; +[SCRankingJaguarSectionLayoutHorizontalSection descriptor] */

void FUN_10afb7ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c4f8,
                        &PTR____CFConstantStringClassReference_110f45678,&PTR_DAT_113347e08,
                        &PTR_DAT_113347e40,1,8,0x1c);
    puRam00000001137f16f0 = puVar1;
  }
  return;
}



/* Entry: 10afb8060; end: 10afb80e3; +[SCRankingJaguarSectionLayoutHorizontalSection_ItemStyle descriptor] */

undefined * FUN_10afb8060(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f16f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c520,
                        &PTR____CFConstantStringClassReference_110f45698,&PTR_DAT_113347e08,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f16f8 = puVar1;
  }
  return puRam00000001137f16f8;
}



/* Entry: 10afb80e4; end: 10afb815f;  */

undefined * FUN_10afb80e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1700 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f456b8,
                        &UNK_10e5427d8,&UNK_10e5427fc,3,FUN_10afb8160,0);
    do {
      if (puRam00000001137f1700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1700;
}



/* Entry: 10afb8160; end: 10afb816b;  */

bool FUN_10afb8160(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb816c; end: 10afb81e7;  */

undefined * FUN_10afb816c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1708 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f456d8,
                        &UNK_10e5427d8,&UNK_10e542808,3,FUN_10afb81e8,0);
    do {
      if (puRam00000001137f1708 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1708;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1708,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1708 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1708;
}



/* Entry: 10afb81e8; end: 10afb81f3;  */

bool FUN_10afb81e8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb81f4; end: 10afb825b; +[SCSSMJaguarClientLogging descriptor] */

void FUN_10afb81f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c5c0,
                        &PTR____CFConstantStringClassReference_110f456f8,&PTR_DAT_113347f60,
                        &PTR_DAT_1133482b8,10,0x48,0x1c);
    puRam00000001137f1710 = puVar1;
  }
  return;
}



/* Entry: 10afb825c; end: 10afb82d7; +[SCSSMJaguarClientLogging_ExplorationSource descriptor] */

undefined * FUN_10afb825c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c610,
                        &PTR____CFConstantStringClassReference_110f45718,&PTR_DAT_113347f60,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f1718 = puVar1;
  }
  return puRam00000001137f1718;
}



/* Entry: 10afb82d8; end: 10afb833f; +[SCSSMImpressionLoggingExtension descriptor] */

void FUN_10afb82d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c660,
                        &PTR____CFConstantStringClassReference_110f45738,&PTR_DAT_113347f60,
                        &PTR_DAT_1133480d8,6,0x20,0x1c);
    puRam00000001137f1720 = puVar1;
  }
  return;
}



/* Entry: 10afb8340; end: 10afb83a7; +[SCSSMActionLoggingExtension descriptor] */

void FUN_10afb8340(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c6b0,
                        &PTR____CFConstantStringClassReference_110f45758,&PTR_DAT_113347f60,
                        &PTR_DAT_113347fd8,4,0x10,0x1c);
    puRam00000001137f1728 = puVar1;
  }
  return;
}



/* Entry: 10afb83a8; end: 10afb840f; +[SCSSMViewSessionLoggingExtension descriptor] */

void FUN_10afb83a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c700,
                        &PTR____CFConstantStringClassReference_110f45778,&PTR_DAT_113347f60,
                        &PTR_DAT_113348058,4,0x10,0x1c);
    puRam00000001137f1730 = puVar1;
  }
  return;
}



/* Entry: 10afb8410; end: 10afb8477; +[SCSSMCommonLoggingExtension descriptor] */

void FUN_10afb8410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c750,
                        &PTR____CFConstantStringClassReference_110f45798,&PTR_DAT_113347f60,
                        &PTR_DAT_113347f98,2,0x10,0x1c);
    puRam00000001137f1738 = puVar1;
  }
  return;
}



/* Entry: 10afb8478; end: 10afb84df; +[SCSSMUpNextLoggingExtension descriptor] */

void FUN_10afb8478(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c7a0,
                        &PTR____CFConstantStringClassReference_110f457b8,&PTR_DAT_113347f60,
                        &PTR_DAT_113347f78,1,0x10,0x1c);
    puRam00000001137f1740 = puVar1;
  }
  return;
}



/* Entry: 10afb84e0; end: 10afb8547; +[SCSSMLoggingContext descriptor] */

void FUN_10afb84e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c818,
                        &PTR____CFConstantStringClassReference_110f457d8,&PTR_DAT_113347f60,
                        &PTR_DAT_113348198,9,0x40,0x1c);
    puRam00000001137f1748 = puVar1;
  }
  return;
}



/* Entry: 10afb8548; end: 10afb85cb; +[SCSSMLoggingContext_ExplorationSource descriptor] */

undefined * FUN_10afb8548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c840,
                        &PTR____CFConstantStringClassReference_110f45718,&PTR_DAT_113347f60,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f1750 = puVar1;
  }
  return puRam00000001137f1750;
}



/* Entry: 10afb85cc; end: 10afb8647;  */

undefined * FUN_10afb85cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1758 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f457f8,
                        &UNK_10e542814,&UNK_10e54293c,0x17,FUN_10afb8648,0);
    do {
      if (puRam00000001137f1758 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1758;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1758,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1758 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1758;
}



/* Entry: 10afb8648; end: 10afb865f;  */

bool FUN_10afb8648(uint param_1)

{
  return param_1 < 0x16 || param_1 == 100;
}



/* Entry: 10afb8660; end: 10afb86ef;  */

undefined * FUN_10afb8660(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1760 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45818,
                        &UNK_10e542998,&UNK_10e542a08,0xb,FUN_10afb86f0,0,&UNK_10e542a34);
    do {
      if (puRam00000001137f1760 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1760;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1760,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1760 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1760;
}



/* Entry: 10afb86f0; end: 10afb86fb;  */

bool FUN_10afb86f0(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 10afb86fc; end: 10afb8763; +[SCSCOREExplorationStage descriptor] */

void FUN_10afb86fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c8e0,
                        &PTR____CFConstantStringClassReference_110f45838,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f1768 = puVar1;
  }
  return;
}



/* Entry: 10afb8764; end: 10afb87cb; +[SCSCOREExplorationViewsStage descriptor] */

void FUN_10afb8764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c930,
                        &PTR____CFConstantStringClassReference_110f45858,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f1770 = puVar1;
  }
  return;
}



/* Entry: 10afb87cc; end: 10afb8833; +[SCSCOREExplorationIndexingMetadata descriptor] */

void FUN_10afb87cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c980,
                        &PTR____CFConstantStringClassReference_110f45878,&PTR_DAT_1133483f8,
                        &PTR_DAT_1133487d0,8,0x48,0x1c);
    puRam00000001137f1778 = puVar1;
  }
  return;
}



/* Entry: 10afb8834; end: 10afb889b; +[SCSCOREExplorationTierParams descriptor] */

void FUN_10afb8834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3c9d0,
                        &PTR____CFConstantStringClassReference_110f45898,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348ad0,0xe,0x58,0x1c);
    puRam00000001137f1780 = puVar1;
  }
  return;
}



/* Entry: 10afb889c; end: 10afb8903; +[SCSCOREExplorationCohortParams descriptor] */

void FUN_10afb889c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3ca20,
                        &PTR____CFConstantStringClassReference_110f458b8,&PTR_DAT_1133483f8,
                        &PTR_s_country_1133488d0,8,0x40,0x1c);
    puRam00000001137f1788 = puVar1;
  }
  return;
}



/* Entry: 10afb8904; end: 10afb896b; +[SCSCOREExplorationParams descriptor] */

void FUN_10afb8904(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3ca70,
                        &PTR____CFConstantStringClassReference_110f458d8,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348410,1,0x10,0x1c);
    puRam00000001137f1790 = puVar1;
  }
  return;
}



/* Entry: 10afb896c; end: 10afb89d3; +[SCSCOREExplorationS2IParams descriptor] */

void FUN_10afb896c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cac0,
                        &PTR____CFConstantStringClassReference_110f458f8,&PTR_DAT_1133483f8,
                        &PTR_s_category_1133489d0,8,0x48,0x1c);
    puRam00000001137f1798 = puVar1;
  }
  return;
}



/* Entry: 10afb89d4; end: 10afb8a4f; +[SCSCOREExplorationContentCategoryParams descriptor] */

undefined * FUN_10afb89d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cb10,
                        &PTR____CFConstantStringClassReference_110f45918,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348430,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f17a0 = puVar1;
  }
  return puRam00000001137f17a0;
}



/* Entry: 10afb8a50; end: 10afb8ab7; +[SCSCOREExplorationPromotionReason descriptor] */

void FUN_10afb8a50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cb60,
                        &PTR____CFConstantStringClassReference_110f45938,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f17a8 = puVar1;
  }
  return;
}



/* Entry: 10afb8ab8; end: 10afb8b1f; +[SCSCOREExplorationDropReason descriptor] */

void FUN_10afb8ab8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cbb0,
                        &PTR____CFConstantStringClassReference_110f45958,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f17b0 = puVar1;
  }
  return;
}



/* Entry: 10afb8b20; end: 10afb8b87; +[SCSCOREExplorationAbTreatment descriptor] */

void FUN_10afb8b20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cc00,
                        &PTR____CFConstantStringClassReference_110f45978,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348510,5,0x30,0x1c);
    puRam00000001137f17b8 = puVar1;
  }
  return;
}



/* Entry: 10afb8b88; end: 10afb8bef; +[SCSCOREExplorationAbExp descriptor] */

void FUN_10afb8b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cc50,
                        &PTR____CFConstantStringClassReference_110f45998,&PTR_DAT_1133483f8,
                        &PTR_DAT_1133484b0,3,0x20,0x1c);
    puRam00000001137f17c0 = puVar1;
  }
  return;
}



/* Entry: 10afb8bf0; end: 10afb8c57; +[SCSCOREExplorationAb descriptor] */

void FUN_10afb8bf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cca0,
                        &PTR____CFConstantStringClassReference_110f459b8,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348450,1,0x10,0x1c);
    puRam00000001137f17c8 = puVar1;
  }
  return;
}



/* Entry: 10afb8c58; end: 10afb8cbf; +[SCSCOREExplorationIndexCohortMetadata descriptor] */

void FUN_10afb8c58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3ccf0,
                        &PTR____CFConstantStringClassReference_110f459d8,&PTR_DAT_1133483f8,
                        &PTR_DAT_1133486f0,7,0x30,0x1c);
    puRam00000001137f17d0 = puVar1;
  }
  return;
}



/* Entry: 10afb8cc0; end: 10afb8d27; +[SCSCOREContinuousExplorationIndexMetadata descriptor] */

void FUN_10afb8cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cd40,
                        &PTR____CFConstantStringClassReference_110f459f8,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348470,2,0x18,0x1c);
    puRam00000001137f17d8 = puVar1;
  }
  return;
}



/* Entry: 10afb8d28; end: 10afb8d8f; +[SCSCOREExplorationIndexState descriptor] */

void FUN_10afb8d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cd90,
                        &PTR____CFConstantStringClassReference_110f45a18,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f17e0 = puVar1;
  }
  return;
}



/* Entry: 10afb8d90; end: 10afb8df7; +[SCSCOREExplorationSkipReason descriptor] */

void FUN_10afb8d90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cde0,
                        &PTR____CFConstantStringClassReference_110f45a38,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f17e8 = puVar1;
  }
  return;
}



/* Entry: 10afb8df8; end: 10afb8e5f; +[SCSCOREContentViewTier descriptor] */

void FUN_10afb8df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3ce30,
                        &PTR____CFConstantStringClassReference_110f45a58,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f17f0 = puVar1;
  }
  return;
}



/* Entry: 10afb8e60; end: 10afb8ec7; +[SCSCOREContentViewTierInfo descriptor] */

void FUN_10afb8e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f17f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3ce80,
                        &PTR____CFConstantStringClassReference_110f45a78,&PTR_DAT_1133483f8,
                        &PTR_DAT_1133485b0,5,0x20,0x1c);
    puRam00000001137f17f8 = puVar1;
  }
  return;
}



/* Entry: 10afb8ec8; end: 10afb8f2f; +[SCSCOREBCDRuleType descriptor] */

void FUN_10afb8ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3ced0,
                        &PTR____CFConstantStringClassReference_110f45a98,&PTR_DAT_1133483f8,0,0,4,
                        0x1c);
    puRam00000001137f1800 = puVar1;
  }
  return;
}



/* Entry: 10afb8f30; end: 10afb9013; +[SCSCOREBCDTargetInfo descriptor] */

void FUN_10afb8f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3cf20,
                        &PTR____CFConstantStringClassReference_110f45ab8,&PTR_DAT_1133483f8,
                        &PTR_DAT_113348650,5,0x20,0x1c);
    puRam00000001137f1808 = puVar1;
  }
  return;
}



/* Entry: 10afb9014; end: 10afb901f;  */

bool FUN_10afb9014(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb9020; end: 10afb90af;  */

undefined * FUN_10afb9020(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1818 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45af8,
                        &UNK_10e542aac,&UNK_10e542afc,7,FUN_10afb90b0,0,&UNK_10e542b18);
    do {
      if (puRam00000001137f1818 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1818;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1818,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1818 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1818;
}



/* Entry: 10afb90b0; end: 10afb90bb;  */

bool FUN_10afb90b0(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10afb90bc; end: 10afb9137;  */

undefined * FUN_10afb90bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1820 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45b18,
                        &UNK_10e542b40,&UNK_10e542ba0,3,FUN_10afb9138,0);
    do {
      if (puRam00000001137f1820 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1820;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1820,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1820 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1820;
}



/* Entry: 10afb9138; end: 10afb9143;  */

bool FUN_10afb9138(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb9144; end: 10afb91bf;  */

undefined * FUN_10afb9144(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1828 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45b38,
                        &UNK_10e542bac,&UNK_10e542c24,6,FUN_10afb91c0,0);
    do {
      if (puRam00000001137f1828 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1828;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1828,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1828 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1828;
}



/* Entry: 10afb91c0; end: 10afb91cb;  */

bool FUN_10afb91c0(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10afb91cc; end: 10afb9247;  */

undefined * FUN_10afb91cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1830 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45b58,
                        &UNK_10e542c3c,&UNK_10e542cd4,6,FUN_10afb9248,0);
    do {
      if (puRam00000001137f1830 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1830;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1830,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1830 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1830;
}



/* Entry: 10afb9248; end: 10afb9253;  */

bool FUN_10afb9248(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10afb9254; end: 10afb92bb; +[SCSSMContentSurvey descriptor] */

void FUN_10afb9254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1838 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d010,
                        &PTR____CFConstantStringClassReference_110f45b78,&PTR_DAT_113348c98,
                        &PTR_DAT_113348ef0,0xc,0x50,0x1c);
    puRam00000001137f1838 = puVar1;
  }
  return;
}



/* Entry: 10afb92bc; end: 10afb9347; +[SCSSMDistributionStrategy descriptor] */

undefined * FUN_10afb92bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d060,
                        &PTR____CFConstantStringClassReference_110f45b98,&PTR_DAT_113348c98,
                        &PTR_DAT_113348e30,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001137f1840 = puVar1;
  }
  return puRam00000001137f1840;
}



/* Entry: 10afb9348; end: 10afb93af; +[SCSSMFixedPositions descriptor] */

void FUN_10afb9348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1848 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d0b0,
                        &PTR____CFConstantStringClassReference_110f45bb8,&PTR_DAT_113348c98,
                        &PTR_DAT_113348cb0,1,0x10,0x1c);
    puRam00000001137f1848 = puVar1;
  }
  return;
}



/* Entry: 10afb93b0; end: 10afb9417; +[SCSSMFirstN descriptor] */

void FUN_10afb93b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1850 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d100,
                        &PTR____CFConstantStringClassReference_110f45bd8,&PTR_DAT_113348c98,
                        &PTR_DAT_113348cd0,1,8,0x1c);
    puRam00000001137f1850 = puVar1;
  }
  return;
}



/* Entry: 10afb9418; end: 10afb947f; +[SCSSMRandomSampling descriptor] */

void FUN_10afb9418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1858 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d150,
                        &PTR____CFConstantStringClassReference_110f45bf8,&PTR_DAT_113348c98,
                        &PTR_DAT_113348cf0,1,8,0x1c);
    puRam00000001137f1858 = puVar1;
  }
  return;
}



/* Entry: 10afb9480; end: 10afb94e7; +[SCSSMSignalBased descriptor] */

void FUN_10afb9480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d1a0,
                        &PTR____CFConstantStringClassReference_110f45c18,&PTR_DAT_113348c98,
                        &PTR_DAT_113348d50,2,0x10,0x1c);
    puRam00000001137f1860 = puVar1;
  }
  return;
}



/* Entry: 10afb94e8; end: 10afb954f; +[SCSSMMixedStrategy descriptor] */

void FUN_10afb94e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1868 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d1f0,
                        &PTR____CFConstantStringClassReference_110f45c38,&PTR_DAT_113348c98,
                        &PTR_DAT_113348d10,1,0x10,0x1c);
    puRam00000001137f1868 = puVar1;
  }
  return;
}



/* Entry: 10afb9550; end: 10afb95b7; +[SCSSMSurveyMetadata descriptor] */

void FUN_10afb9550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1870 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d240,
                        &PTR____CFConstantStringClassReference_110f45c58,&PTR_DAT_113348c98,
                        &PTR_DAT_113348d30,1,0x10,0x1c);
    puRam00000001137f1870 = puVar1;
  }
  return;
}



/* Entry: 10afb95b8; end: 10afb961f; +[SCSSMSurveyFrequencyConfig descriptor] */

void FUN_10afb95b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1878 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d290,
                        &PTR____CFConstantStringClassReference_110f45c78,&PTR_DAT_113348c98,
                        &PTR_DAT_113348dd0,3,0x18,0x1c);
    puRam00000001137f1878 = puVar1;
  }
  return;
}



/* Entry: 10afb9620; end: 10afb9703; +[SCSSMPerSurveyFrequencyCap descriptor] */

void FUN_10afb9620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f1880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c3d2e0,
                        &PTR____CFConstantStringClassReference_110f45c98,&PTR_DAT_113348c98,
                        &PTR_DAT_113348d90,2,0xc,0x1c);
    puRam00000001137f1880 = puVar1;
  }
  return;
}



/* Entry: 10afb9704; end: 10afb970f;  */

bool FUN_10afb9704(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10afb9710; end: 10afb978b;  */

undefined * FUN_10afb9710(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1890 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45cd8,
                        &UNK_10e542d44,&UNK_10e542d5c,3,FUN_10afb978c,0);
    do {
      if (puRam00000001137f1890 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1890;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1890,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1890 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1890;
}



/* Entry: 10afb978c; end: 10afb9797;  */

bool FUN_10afb978c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb9798; end: 10afb9813;  */

undefined * FUN_10afb9798(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f1898 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45cf8,
                        &UNK_10e542d68,&UNK_10e542dc4,8,FUN_10afb9814,0);
    do {
      if (puRam00000001137f1898 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f1898;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f1898,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f1898 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f1898;
}



/* Entry: 10afb9814; end: 10afb981f;  */

bool FUN_10afb9814(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10afb9820; end: 10afb989b;  */

undefined * FUN_10afb9820(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f18a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45d18,
                        &UNK_10e542de4,&UNK_10e542e20,4,FUN_10afb989c,0);
    do {
      if (puRam00000001137f18a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f18a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f18a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f18a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f18a0;
}



/* Entry: 10afb989c; end: 10afb98a7;  */

bool FUN_10afb989c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afb98a8; end: 10afb9923;  */

undefined * FUN_10afb98a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f18a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45d38,
                        &UNK_10e542e30,&UNK_10e542e54,3,FUN_10afb9924,0);
    do {
      if (puRam00000001137f18a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f18a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f18a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f18a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f18a8;
}



/* Entry: 10afb9924; end: 10afb992f;  */

bool FUN_10afb9924(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afb9930; end: 10afb99ab;  */

undefined * FUN_10afb9930(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f18b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f45d58,
                        &UNK_10e542e60,&UNK_10e542e8c,3,FUN_10afb99ac,0);
    do {
      if (puRam00000001137f18b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f18b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f18b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f18b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f18b0;
}



/* Entry: 10afb99ac; end: 10afb99b7;  */

bool FUN_10afb99ac(uint param_1)

{
  return param_1 < 3;
}


