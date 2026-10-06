/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af0cae8; end: 10af0cb4f; +[VRZAddressLock descriptor] */

void FUN_10af0cae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eecb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0b830,
                        &PTR____CFConstantStringClassReference_110f34978,&PTR_DAT_1133205a0,
                        &PTR_DAT_1133208b8,6,0x38,0x1c);
    puRam00000001137eecb0 = puVar1;
  }
  return;
}



/* Entry: 10af0cb50; end: 10af0cbcb; +[VRZPlaceAttribute descriptor] */

undefined * FUN_10af0cb50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eecb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0b920,
                        &PTR____CFConstantStringClassReference_110f34998,&PTR_DAT_113320e78,
                        &PTR_s_id_p_113320f70,0xb,0x60,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eecb8 = puVar1;
  }
  return puRam00000001137eecb8;
}



/* Entry: 10af0cbcc; end: 10af0cc47; +[VRZPlaceAttributeInfo descriptor] */

undefined * FUN_10af0cbcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eecc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0b970,
                        &PTR____CFConstantStringClassReference_110f349b8,&PTR_DAT_113320e78,
                        &PTR_s_id_p_113320e90,7,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eecc0 = puVar1;
  }
  return puRam00000001137eecc0;
}



/* Entry: 10af0cc48; end: 10af0ccaf; +[VRZCategory descriptor] */

void FUN_10af0cc48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eecc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ba10,
                        &PTR____CFConstantStringClassReference_110e38518,&PTR_DAT_1133210d0,
                        &PTR_s_id_p_113321128,0xb,0x58,0x1c);
    puRam00000001137eecc8 = puVar1;
  }
  return;
}



/* Entry: 10af0ccb0; end: 10af0cd17; +[VRZBlockedServices descriptor] */

void FUN_10af0ccb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eecd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ba60,
                        &PTR____CFConstantStringClassReference_110f349d8,&PTR_DAT_1133210d0,
                        &PTR_s_map_113321288,0xe,0x18,0x1c);
    puRam00000001137eecd0 = puVar1;
  }
  return;
}



/* Entry: 10af0cd18; end: 10af0ce0f; +[VRZBlockedServices_ComponentBlocklist descriptor] */

undefined * FUN_10af0cd18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eecd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bab0,
                        &PTR____CFConstantStringClassReference_110f349f8,&PTR_DAT_1133210d0,
                        &PTR_DAT_1133210e8,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137eecd8 = puVar1;
  }
  return puRam00000001137eecd8;
}



/* Entry: 10af0ce10; end: 10af0ce1b;  */

bool FUN_10af0ce10(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0ce1c; end: 10af0ce97;  */

undefined * FUN_10af0ce1c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eece8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34a38,
                        &UNK_10e537230,&UNK_10e5374b0,0x23,FUN_10af0ce98,0);
    do {
      if (puRam00000001137eece8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eece8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eece8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eece8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eece8;
}



/* Entry: 10af0ce98; end: 10af0cea3;  */

bool FUN_10af0ce98(uint param_1)

{
  return param_1 < 0x23;
}



/* Entry: 10af0cea4; end: 10af0cf1f;  */

undefined * FUN_10af0cea4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eecf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34a58,
                        &UNK_10e53753c,&UNK_10e537658,0xe,FUN_10af0cf20,0);
    do {
      if (puRam00000001137eecf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eecf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eecf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eecf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eecf0;
}



/* Entry: 10af0cf20; end: 10af0cf2b;  */

bool FUN_10af0cf20(uint param_1)

{
  return param_1 < 0xe;
}



/* Entry: 10af0cf2c; end: 10af0cfa7;  */

undefined * FUN_10af0cf2c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eecf8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34a78,
                        &UNK_10e537690,&UNK_10e53771c,10,FUN_10af0cfa8,0);
    do {
      if (puRam00000001137eecf8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eecf8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eecf8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eecf8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eecf8;
}



/* Entry: 10af0cfa8; end: 10af0cfb3;  */

bool FUN_10af0cfa8(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10af0cfb4; end: 10af0d02f;  */

undefined * FUN_10af0cfb4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed00 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34a98,
                        &UNK_10e537744,&UNK_10e537788,8,FUN_10af0d030,0);
    do {
      if (puRam00000001137eed00 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed00;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed00,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed00 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed00;
}



/* Entry: 10af0d030; end: 10af0d03b;  */

bool FUN_10af0d030(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af0d03c; end: 10af0d0b7;  */

undefined * FUN_10af0d03c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34ab8,
                        &UNK_10e5377a8,&UNK_10e5377cc,4,FUN_10af0d0b8,0);
    do {
      if (puRam00000001137eed08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed08;
}



/* Entry: 10af0d0b8; end: 10af0d0c3;  */

bool FUN_10af0d0b8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af0d0c4; end: 10af0d13f;  */

undefined * FUN_10af0d0c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34ad8,
                        &UNK_10e5377dc,&UNK_10e5377f4,3,FUN_10af0d140,0);
    do {
      if (puRam00000001137eed10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed10;
}



/* Entry: 10af0d140; end: 10af0d14b;  */

bool FUN_10af0d140(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0d14c; end: 10af0d1c7;  */

undefined * FUN_10af0d14c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34af8,
                        &UNK_10e537800,&UNK_10e537814,3,FUN_10af0d1c8,0);
    do {
      if (puRam00000001137eed18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed18;
}



/* Entry: 10af0d1c8; end: 10af0d1d3;  */

bool FUN_10af0d1c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0d1d4; end: 10af0d263;  */

undefined * FUN_10af0d1d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34b18,
                        &UNK_10e537820,&UNK_10e537854,6,FUN_10af0d264,0,&UNK_10e53786c);
    do {
      if (puRam00000001137eed20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed20;
}



/* Entry: 10af0d264; end: 10af0d26f;  */

bool FUN_10af0d264(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10af0d270; end: 10af0d2eb;  */

undefined * FUN_10af0d270(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34b38,
                        &UNK_10e537887,&UNK_10e5378f0,9,FUN_10af0d2ec,0);
    do {
      if (puRam00000001137eed28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed28;
}



/* Entry: 10af0d2ec; end: 10af0d2f7;  */

bool FUN_10af0d2ec(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10af0d2f8; end: 10af0d373;  */

undefined * FUN_10af0d2f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34b58,
                        &UNK_10e537914,&UNK_10e537948,3,FUN_10af0d374,0);
    do {
      if (puRam00000001137eed30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed30;
}



/* Entry: 10af0d374; end: 10af0d37f;  */

bool FUN_10af0d374(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0d380; end: 10af0d3fb;  */

undefined * FUN_10af0d380(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34b78,
                        &UNK_10e537954,&UNK_10e537980,5,FUN_10af0d3fc,0);
    do {
      if (puRam00000001137eed38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed38;
}



/* Entry: 10af0d3fc; end: 10af0d407;  */

bool FUN_10af0d3fc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10af0d408; end: 10af0d483;  */

undefined * FUN_10af0d408(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eed40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34b98,
                        &UNK_10e537994,&UNK_10e5379dc,8,FUN_10af0d484,0);
    do {
      if (puRam00000001137eed40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eed40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eed40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eed40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eed40;
}



/* Entry: 10af0d484; end: 10af0d48f;  */

bool FUN_10af0d484(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10af0d490; end: 10af0d4f7; +[VRZPlaceGeometry descriptor] */

void FUN_10af0d490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bb50,
                        &PTR____CFConstantStringClassReference_110f34bb8,&PTR_DAT_113321448,
                        &PTR_s_id_p_113322060,10,0x50,0x1c);
    puRam00000001137eed48 = puVar1;
  }
  return;
}



/* Entry: 10af0d4f8; end: 10af0d55f; +[VRZAttributeLock descriptor] */

void FUN_10af0d4f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bba0,
                        &PTR____CFConstantStringClassReference_110f34bd8,&PTR_DAT_113321448,
                        &PTR_s_createdAt_113321480,2,0x18,0x1c);
    puRam00000001137eed50 = puVar1;
  }
  return;
}



/* Entry: 10af0d560; end: 10af0d5df; +[VRZPopularityDetails descriptor] */

undefined * FUN_10af0d560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bbf0,
                        &PTR____CFConstantStringClassReference_110f34bf8,&PTR_DAT_113321448,
                        &PTR_DAT_113322640,0x19,0xb8,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eed58 = puVar1;
  }
  return puRam00000001137eed58;
}



/* Entry: 10af0d5e0; end: 10af0d65b; +[VRZPopularityDetails_WifiConfidence descriptor] */

undefined * FUN_10af0d5e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bc40,
                        &PTR____CFConstantStringClassReference_110f34c18,&PTR_DAT_113321448,
                        &PTR_DAT_1133214c0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eed60 = puVar1;
  }
  return puRam00000001137eed60;
}



/* Entry: 10af0d65c; end: 10af0d6d7; +[VRZPopularityDetails_PlaceViewsBySource descriptor] */

undefined * FUN_10af0d65c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bc90,
                        &PTR____CFConstantStringClassReference_110f34c38,&PTR_DAT_113321448,
                        &PTR_DAT_113321500,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eed68 = puVar1;
  }
  return puRam00000001137eed68;
}



/* Entry: 10af0d6d8; end: 10af0d753; +[VRZPopularityDetails_DistributionDetails descriptor] */

undefined * FUN_10af0d6d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c410,
                        &PTR____CFConstantStringClassReference_110f34c58,&PTR_DAT_113321448,
                        &PTR_DAT_1133221a0,0x12,0x70,0x1c);
    func_0x00010c228780();
    puRam00000001137eed70 = puVar1;
  }
  return puRam00000001137eed70;
}



/* Entry: 10af0d754; end: 10af0d7d7; +[VRZPopularityDetails_DistributionDetails_WifiParam descriptor] */

undefined * FUN_10af0d754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c438,
                        &PTR____CFConstantStringClassReference_110f34c78,&PTR_DAT_113321448,
                        &PTR_DAT_113321540,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eed78 = puVar1;
  }
  return puRam00000001137eed78;
}



/* Entry: 10af0d7d8; end: 10af0d85b; +[VRZPopularityDetails_DistributionDetails_TimeOfDayParam descriptor] */

undefined * FUN_10af0d7d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c460,
                        &PTR____CFConstantStringClassReference_110f34c98,&PTR_DAT_113321448,
                        &PTR_DAT_113321580,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137eed80 = puVar1;
  }
  return puRam00000001137eed80;
}



/* Entry: 10af0d85c; end: 10af0d8df; +[VRZPopularityDetails_DistributionDetails_DayOfWeekParam descriptor] */

undefined * FUN_10af0d85c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c488,
                        &PTR____CFConstantStringClassReference_110f34cb8,&PTR_DAT_113321448,
                        &PTR_DAT_1133215c0,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137eed88 = puVar1;
  }
  return puRam00000001137eed88;
}



/* Entry: 10af0d8e0; end: 10af0d973; +[VRZPopularityDetails_DistributionDetails_GenderParam descriptor] */

undefined * FUN_10af0d8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c4b0,
                        &PTR____CFConstantStringClassReference_110f34cd8,&PTR_DAT_113321448,
                        &PTR_DAT_113321d00,9,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c0c410);
    puRam00000001137eed90 = puVar1;
  }
  return puRam00000001137eed90;
}



/* Entry: 10af0d974; end: 10af0da07; +[VRZPopularityDetails_DistributionDetails_AgeGroupParam descriptor] */

undefined * FUN_10af0d974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eed98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c4d8,
                        &PTR____CFConstantStringClassReference_110f34cf8,&PTR_DAT_113321448,
                        &PTR_DAT_113321e20,9,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c0c410);
    puRam00000001137eed98 = puVar1;
  }
  return puRam00000001137eed98;
}



/* Entry: 10af0da08; end: 10af0da9b; +[VRZPopularityDetails_DistributionDetails_SnapPersonaTypeParam descriptor] */

undefined * FUN_10af0da08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeda0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c500,
                        &PTR____CFConstantStringClassReference_110f34d18,&PTR_DAT_113321448,
                        &PTR_DAT_113321f40,9,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c0c410);
    puRam00000001137eeda0 = puVar1;
  }
  return puRam00000001137eeda0;
}



/* Entry: 10af0da9c; end: 10af0db1f; +[VRZPopularityDetails_DistributionDetails_ElevationParam descriptor] */

undefined * FUN_10af0da9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeda8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c528,
                        &PTR____CFConstantStringClassReference_110f34d38,&PTR_DAT_113321448,
                        &PTR_DAT_113321840,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eeda8 = puVar1;
  }
  return puRam00000001137eeda8;
}



/* Entry: 10af0db20; end: 10af0dba3; +[VRZPopularityDetails_DistributionDetails_PoiCategoryParam descriptor] */

undefined * FUN_10af0db20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c550,
                        &PTR____CFConstantStringClassReference_110f34d58,&PTR_DAT_113321448,
                        &PTR_DAT_113321600,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eedb0 = puVar1;
  }
  return puRam00000001137eedb0;
}



/* Entry: 10af0dba4; end: 10af0dc1f; +[VRZPopularityDetails_MinZoomDetails descriptor] */

undefined * FUN_10af0dba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0be48,
                        &PTR____CFConstantStringClassReference_110f34d78,&PTR_DAT_113321448,
                        &PTR_DAT_1133218a0,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eedb8 = puVar1;
  }
  return puRam00000001137eedb8;
}



/* Entry: 10af0dc20; end: 10af0dc87; +[VRZLanguageDetails descriptor] */

void FUN_10af0dc20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0be98,
                        &PTR____CFConstantStringClassReference_110f34d98,&PTR_DAT_113321448,
                        &PTR_DAT_113321900,3,0x20,0x1c);
    puRam00000001137eedc0 = puVar1;
  }
  return;
}



/* Entry: 10af0dc88; end: 10af0dcef; +[VRZPlaceAttributeData descriptor] */

void FUN_10af0dc88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bee8,
                        &PTR____CFConstantStringClassReference_110f34db8,&PTR_DAT_113321448,
                        &PTR_DAT_113321640,2,0x10,0x1c);
    puRam00000001137eedc8 = puVar1;
  }
  return;
}



/* Entry: 10af0dcf0; end: 10af0dd6b; +[VRZContactInfo descriptor] */

undefined * FUN_10af0dcf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bf38,
                        &PTR____CFConstantStringClassReference_110f34dd8,&PTR_DAT_113321448,
                        &PTR_s_phoneNumber_113321a40,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eedd0 = puVar1;
  }
  return puRam00000001137eedd0;
}



/* Entry: 10af0dd6c; end: 10af0dde7; +[VRZContactInfo_PhoneNumber descriptor] */

undefined * FUN_10af0dd6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bf88,
                        &PTR____CFConstantStringClassReference_110f34df8,&PTR_DAT_113321448,
                        &PTR_s_phoneNumber_113321680,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eedd8 = puVar1;
  }
  return puRam00000001137eedd8;
}



/* Entry: 10af0dde8; end: 10af0de4f; +[VRZOpeningHours descriptor] */

void FUN_10af0dde8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eede0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0bfd8,
                        &PTR____CFConstantStringClassReference_110ed7498,&PTR_DAT_113321448,
                        &PTR_DAT_1133219c0,4,0x28,0x1c);
    puRam00000001137eede0 = puVar1;
  }
  return;
}



/* Entry: 10af0de50; end: 10af0decb; +[VRZOpeningHours_HourMinute descriptor] */

undefined * FUN_10af0de50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eede8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c028,
                        &PTR____CFConstantStringClassReference_110ed74b8,&PTR_DAT_113321448,
                        &PTR_s_hour_1133216c0,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137eede8 = puVar1;
  }
  return puRam00000001137eede8;
}



/* Entry: 10af0decc; end: 10af0df47; +[VRZOpeningHours_TimeRange descriptor] */

undefined * FUN_10af0decc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c078,
                        &PTR____CFConstantStringClassReference_110ed74d8,&PTR_DAT_113321448,
                        &PTR_s_start_113321700,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137eedf0 = puVar1;
  }
  return puRam00000001137eedf0;
}



/* Entry: 10af0df48; end: 10af0dfc3; +[VRZOpeningHours_DayHours descriptor] */

undefined * FUN_10af0df48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eedf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c0c8,
                        &PTR____CFConstantStringClassReference_110ed74f8,&PTR_DAT_113321448,
                        &PTR_s_day_113321740,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eedf8 = puVar1;
  }
  return puRam00000001137eedf8;
}



/* Entry: 10af0dfc4; end: 10af0e03f; +[VRZOpeningHours_SpecialHours descriptor] */

undefined * FUN_10af0dfc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c118,
                        &PTR____CFConstantStringClassReference_110f34e18,&PTR_DAT_113321448,
                        &PTR_s_description_p_113321780,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137eee00 = puVar1;
  }
  return puRam00000001137eee00;
}



/* Entry: 10af0e040; end: 10af0e0bb; +[VRZAddress descriptor] */

undefined * FUN_10af0e040(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c168,
                        &PTR____CFConstantStringClassReference_110f34e38,&PTR_DAT_113321448,
                        &PTR_DAT_113321b80,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eee08 = puVar1;
  }
  return puRam00000001137eee08;
}



/* Entry: 10af0e0bc; end: 10af0e127; +[VRZPlaceSources descriptor] */

void FUN_10af0e0bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c1b8,
                        &PTR____CFConstantStringClassReference_110f34e58,&PTR_DAT_113321448,
                        &PTR_DAT_1133223e0,0x13,0xa0,0x1c);
    puRam00000001137eee10 = puVar1;
  }
  return;
}



/* Entry: 10af0e128; end: 10af0e1b3; +[VRZPlaceSources_ContactInfoSource descriptor] */

undefined * FUN_10af0e128(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c208,
                        &PTR____CFConstantStringClassReference_110f34e78,&PTR_DAT_113321448,
                        &PTR_s_phoneNumber_113321ae0,5,0x30,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c0c1b8);
    puRam00000001137eee18 = puVar1;
  }
  return puRam00000001137eee18;
}



/* Entry: 10af0e1b4; end: 10af0e23f; +[VRZPlaceSources_AddressSource descriptor] */

undefined * FUN_10af0e1b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c258,
                        &PTR____CFConstantStringClassReference_110f34e98,&PTR_DAT_113321448,
                        &PTR_DAT_113321c40,6,0x38,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c0c1b8);
    puRam00000001137eee20 = puVar1;
  }
  return puRam00000001137eee20;
}



/* Entry: 10af0e240; end: 10af0e2bf; +[VRZPlace descriptor] */

undefined * FUN_10af0e240(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c2a8,
                        &PTR____CFConstantStringClassReference_110dcb618,&PTR_DAT_113321448,
                        &PTR_s_id_p_113322960,0x2f,0x178,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eee28 = puVar1;
  }
  return puRam00000001137eee28;
}



/* Entry: 10af0e2c0; end: 10af0e33b; +[VRZPlace_HierarchyStep descriptor] */

undefined * FUN_10af0e2c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c2f8,
                        &PTR____CFConstantStringClassReference_110f34eb8,&PTR_DAT_113321448,
                        &PTR_s_placeId_1133217c0,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137eee30 = puVar1;
  }
  return puRam00000001137eee30;
}



/* Entry: 10af0e33c; end: 10af0e3b7; +[VRZPlace_Hierarchy descriptor] */

undefined * FUN_10af0e33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c348,
                        &PTR____CFConstantStringClassReference_110f34ed8,&PTR_DAT_113321448,
                        &PTR_DAT_113321460,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eee38 = puVar1;
  }
  return puRam00000001137eee38;
}



/* Entry: 10af0e3b8; end: 10af0e433; +[VRZPlace_Tag descriptor] */

undefined * FUN_10af0e3b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c398,
                        &PTR____CFConstantStringClassReference_110e8d078,&PTR_DAT_113321448,
                        &PTR_DAT_113321960,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137eee40 = puVar1;
  }
  return puRam00000001137eee40;
}



/* Entry: 10af0e434; end: 10af0e4af; +[VRZPlace_HierarchyLabelStep descriptor] */

undefined * FUN_10af0e434(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c3e8,
                        &PTR____CFConstantStringClassReference_110f34ef8,&PTR_DAT_113321448,
                        &PTR_DAT_113321800,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137eee48 = puVar1;
  }
  return puRam00000001137eee48;
}



/* Entry: 10af0e4b0; end: 10af0e593; +[VRZLocalizedLabels descriptor] */

void FUN_10af0e4b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c5f0,
                        &PTR____CFConstantStringClassReference_110f34f18,&PTR_DAT_113322f40,
                        &PTR_s_locale_113322f58,3,0x20,0x1c);
    puRam00000001137eee50 = puVar1;
  }
  return;
}



/* Entry: 10af0e594; end: 10af0e59f;  */

bool FUN_10af0e594(uint param_1)

{
  return param_1 < 0x3c;
}



/* Entry: 10af0e5a0; end: 10af0e607; +[VRZConcordance descriptor] */

void FUN_10af0e5a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c690,
                        &PTR____CFConstantStringClassReference_110f34f58,&PTR_DAT_113322fb8,
                        &PTR_s_provider_113322fd0,5,0x28,0x1c);
    puRam00000001137eee60 = puVar1;
  }
  return;
}



/* Entry: 10af0e608; end: 10af0e6eb; +[VRZAttributeSource descriptor] */

void FUN_10af0e608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c6e0,
                        &PTR____CFConstantStringClassReference_110f34f78,&PTR_DAT_113322fb8,
                        &PTR_DAT_113323070,5,0x28,0x1c);
    puRam00000001137eee68 = puVar1;
  }
  return;
}



/* Entry: 10af0e6ec; end: 10af0e6f7;  */

bool FUN_10af0e6ec(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10af0e6f8; end: 10af0e773;  */

undefined * FUN_10af0e6f8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eee78 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34fb8,
                        &UNK_10e537e78,&UNK_10e537f54,0x10,FUN_10af0e774,0);
    do {
      if (puRam00000001137eee78 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eee78;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eee78,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eee78 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eee78;
}



/* Entry: 10af0e774; end: 10af0e77f;  */

bool FUN_10af0e774(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10af0e780; end: 10af0e7fb;  */

undefined * FUN_10af0e780(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eee80 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34fd8,
                        &UNK_10e537f94,&UNK_10e537fd8,4,FUN_10af0e7fc,0);
    do {
      if (puRam00000001137eee80 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eee80;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eee80,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eee80 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eee80;
}



/* Entry: 10af0e7fc; end: 10af0e807;  */

bool FUN_10af0e7fc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af0e808; end: 10af0e883;  */

undefined * FUN_10af0e808(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eee88 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f34ff8,
                        &UNK_10e537fe8,&UNK_10e538028,4,FUN_10af0e884,0);
    do {
      if (puRam00000001137eee88 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eee88;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eee88,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eee88 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eee88;
}



/* Entry: 10af0e884; end: 10af0e88f;  */

bool FUN_10af0e884(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10af0e890; end: 10af0e8f7; +[SCMEGetExplorerStatusesRequest descriptor] */

void FUN_10af0e890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c780,
                        &PTR____CFConstantStringClassReference_110f35018,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_1133238e8,8,0x38,0x1c);
    puRam00000001137eee90 = puVar1;
  }
  return;
}



/* Entry: 10af0e8f8; end: 10af0e95f; +[SCMEGetExplorerStatusesResponse descriptor] */

void FUN_10af0e8f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eee98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c7d0,
                        &PTR____CFConstantStringClassReference_110f35038,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323208,2,0x18,0x1c);
    puRam00000001137eee98 = puVar1;
  }
  return;
}



/* Entry: 10af0e960; end: 10af0e9c7; +[SCMEGetMapStatusesRequest descriptor] */

void FUN_10af0e960(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeea0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c820,
                        &PTR____CFConstantStringClassReference_110f35058,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_113323508,5,0x28,0x1c);
    puRam00000001137eeea0 = puVar1;
  }
  return;
}



/* Entry: 10af0e9c8; end: 10af0ea2f; +[SCMEGetMapStatusesResponse descriptor] */

void FUN_10af0e9c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeea8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c870,
                        &PTR____CFConstantStringClassReference_110f35078,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323128,1,0x10,0x1c);
    puRam00000001137eeea8 = puVar1;
  }
  return;
}



/* Entry: 10af0ea30; end: 10af0ea97; +[SCMEGetExploreWebStatusesRequest descriptor] */

void FUN_10af0ea30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeeb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c8c0,
                        &PTR____CFConstantStringClassReference_110f35098,
                        &PTR_s_snapchat_map_113323110,0,0,4,0x1c);
    puRam00000001137eeeb0 = puVar1;
  }
  return;
}



/* Entry: 10af0ea98; end: 10af0eaff; +[SCMEGetExploreWebStatusesResponse descriptor] */

void FUN_10af0ea98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeeb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c910,
                        &PTR____CFConstantStringClassReference_110f350b8,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323148,1,0x10,0x1c);
    puRam00000001137eeeb8 = puVar1;
  }
  return;
}



/* Entry: 10af0eb00; end: 10af0eb67; +[SCMEGetExploreBadgeTimestampRequest descriptor] */

void FUN_10af0eb00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c960,
                        &PTR____CFConstantStringClassReference_110f350d8,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_113323168,1,0x10,0x1c);
    puRam00000001137eeec0 = puVar1;
  }
  return;
}



/* Entry: 10af0eb68; end: 10af0ebcf; +[SCMEGetExploreBadgeTimestampResponse descriptor] */

void FUN_10af0eb68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0c9b0,
                        &PTR____CFConstantStringClassReference_110f350f8,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323188,1,0x10,0x1c);
    puRam00000001137eeec8 = puVar1;
  }
  return;
}



/* Entry: 10af0ebd0; end: 10af0ec37; +[SCMEGetMyExplorerStatusesRequest descriptor] */

void FUN_10af0ebd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeed0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ca00,
                        &PTR____CFConstantStringClassReference_110f35118,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_1133235a8,5,0x28,0x1c);
    puRam00000001137eeed0 = puVar1;
  }
  return;
}



/* Entry: 10af0ec38; end: 10af0ec9f; +[SCMEGetMyExplorerStatusesResponse descriptor] */

void FUN_10af0ec38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeed8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ca50,
                        &PTR____CFConstantStringClassReference_110f35138,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323248,2,0x18,0x1c);
    puRam00000001137eeed8 = puVar1;
  }
  return;
}



/* Entry: 10af0eca0; end: 10af0ed07; +[SCMEGetFriendExplorerStatusesRequest descriptor] */

void FUN_10af0eca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0caa0,
                        &PTR____CFConstantStringClassReference_110f35158,
                        &PTR_s_snapchat_map_113323110,&PTR_s_friendId_113323288,2,0x18,0x1c);
    puRam00000001137eeee0 = puVar1;
  }
  return;
}



/* Entry: 10af0ed08; end: 10af0ed6f; +[SCMEGetFriendExplorerStatusesResponse descriptor] */

void FUN_10af0ed08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0caf0,
                        &PTR____CFConstantStringClassReference_110f35178,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_1133231a8,1,0x10,0x1c);
    puRam00000001137eeee8 = puVar1;
  }
  return;
}



/* Entry: 10af0ed70; end: 10af0edeb; +[SCMEDeleteExplorerStatusRequest descriptor] */

undefined * FUN_10af0ed70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cb40,
                        &PTR____CFConstantStringClassReference_110f35198,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_113323648,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eeef0 = puVar1;
  }
  return puRam00000001137eeef0;
}



/* Entry: 10af0edec; end: 10af0ee53; +[SCMEDeleteExplorerStatusResponse descriptor] */

void FUN_10af0edec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eeef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cb90,
                        &PTR____CFConstantStringClassReference_110f351b8,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_1133231c8,1,0x10,0x1c);
    puRam00000001137eeef8 = puVar1;
  }
  return;
}



/* Entry: 10af0ee54; end: 10af0eebb; +[SCMEMyExplorerStatus descriptor] */

void FUN_10af0ee54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cbe0,
                        &PTR____CFConstantStringClassReference_110f351d8,
                        &PTR_s_snapchat_map_113323110,&PTR_s_status_113323348,3,0x20,0x1c);
    puRam00000001137eef00 = puVar1;
  }
  return;
}



/* Entry: 10af0eebc; end: 10af0ef23; +[SCMEExplorerStatus descriptor] */

void FUN_10af0eebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cc30,
                        &PTR____CFConstantStringClassReference_110f351f8,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323408,4,0x20,0x1c);
    puRam00000001137eef08 = puVar1;
  }
  return;
}



/* Entry: 10af0ef24; end: 10af0ef8b; +[SCMEExplorerFriendStatus descriptor] */

void FUN_10af0ef24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d040,
                        &PTR____CFConstantStringClassReference_110f35218,
                        &PTR_s_snapchat_map_113323110,&PTR_s_status_1133236e8,5,0x28,0x1c);
    puRam00000001137eef10 = puVar1;
  }
  return;
}



/* Entry: 10af0ef8c; end: 10af0f00f; +[SCMEExplorerFriendStatus_StatusData descriptor] */

undefined * FUN_10af0ef8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d068,
                        &PTR____CFConstantStringClassReference_110f35238,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_1133239e8,0xf,0x68,0x1c);
    func_0x00010c228780();
    puRam00000001137eef18 = puVar1;
  }
  return puRam00000001137eef18;
}



/* Entry: 10af0f010; end: 10af0f093; +[SCMEExplorerFriendStatus_StatusData_LiveCancellationInfo descriptor] */

undefined * FUN_10af0f010(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0d090,
                        &PTR____CFConstantStringClassReference_110f35258,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_1133233a8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137eef20 = puVar1;
  }
  return puRam00000001137eef20;
}



/* Entry: 10af0f094; end: 10af0f10f; +[SCMEExplorerMapStatus descriptor] */

undefined * FUN_10af0f094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ccf8,
                        &PTR____CFConstantStringClassReference_110f35278,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323e08,0x16,0xa8,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eef28 = puVar1;
  }
  return puRam00000001137eef28;
}



/* Entry: 10af0f110; end: 10af0f177; +[SCMEExplorerStatusModel descriptor] */

void FUN_10af0f110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cd48,
                        &PTR____CFConstantStringClassReference_110f35298,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_113323bc8,0x12,0x80,0x1c);
    puRam00000001137eef30 = puVar1;
  }
  return;
}



/* Entry: 10af0f178; end: 10af0f1f3; +[SCMEExplorerStatusModel_Location descriptor] */

undefined * FUN_10af0f178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cd98,
                        &PTR____CFConstantStringClassReference_110df2f78,
                        &PTR_s_snapchat_map_113323110,&PTR_s_lat_113323828,6,0x38,0x1c);
    func_0x00010c228780();
    puRam00000001137eef38 = puVar1;
  }
  return puRam00000001137eef38;
}



/* Entry: 10af0f1f4; end: 10af0f26f; +[SCMESnapMetadata descriptor] */

undefined * FUN_10af0f1f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0cde8,
                        &PTR____CFConstantStringClassReference_110f352b8,
                        &PTR_s_snapchat_map_113323110,&PTR_s_snapId_113323488,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eef40 = puVar1;
  }
  return puRam00000001137eef40;
}



/* Entry: 10af0f270; end: 10af0f2d7; +[SCMEExplorerStatusQueue descriptor] */

void FUN_10af0f270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ce38,
                        &PTR____CFConstantStringClassReference_110f352d8,
                        &PTR_s_snapchat_map_113323110,&PTR_s_userId_113323788,5,0x28,0x1c);
    puRam00000001137eef48 = puVar1;
  }
  return;
}



/* Entry: 10af0f2d8; end: 10af0f33f; +[SCMEAddExplorerStatusRequest descriptor] */

void FUN_10af0f2d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eef50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c0ce88,
                        &PTR____CFConstantStringClassReference_110f352f8,
                        &PTR_s_snapchat_map_113323110,&PTR_DAT_1133231e8,1,0x10,0x1c);
    puRam00000001137eef50 = puVar1;
  }
  return;
}


