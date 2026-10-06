/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7517dc; end: 10b751843; +[SCCTPCustomStickerPackEntry descriptor] */

void FUN_10b7517dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9188 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7ea0,
                        &PTR____CFConstantStringClassReference_110f7a0d8,&PTR_DAT_1133caf30,
                        &PTR_DAT_1133caf68,3,0x20,0x1c);
    puRam00000001137f9188 = puVar1;
  }
  return;
}



/* Entry: 10b751844; end: 10b751927; +[SCCTPCustomStickerPack descriptor] */

void FUN_10b751844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9190 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7ef0,
                        &PTR____CFConstantStringClassReference_110f7a0f8,&PTR_DAT_1133caf30,
                        &PTR_DAT_1133caf48,1,0x10,0x1c);
    puRam00000001137f9190 = puVar1;
  }
  return;
}



/* Entry: 10b751928; end: 10b751933;  */

bool FUN_10b751928(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b751934; end: 10b75199b; +[SCCTPCustomSticker descriptor] */

void FUN_10b751934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f91a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb7f90,
                        &PTR____CFConstantStringClassReference_110f28c98,&PTR_DAT_1133cafc8,
                        &PTR_DAT_1133cafe0,9,0x38,0x1c);
    puRam00000001137f91a0 = puVar1;
  }
  return;
}



/* Entry: 10b75199c; end: 10b751a03; +[SCCTPEmoji descriptor] */

void FUN_10b75199c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f91a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8030,
                        &PTR____CFConstantStringClassReference_110e88d38,&PTR_DAT_1133cb100,
                        &PTR_DAT_1133cb138,3,0x20,0x1c);
    puRam00000001137f91a8 = puVar1;
  }
  return;
}



/* Entry: 10b751a04; end: 10b751ae7; +[SCCTPEmojiToDraw descriptor] */

void FUN_10b751a04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f91b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8080,
                        &PTR____CFConstantStringClassReference_110f7a138,&PTR_DAT_1133cb100,
                        &PTR_DAT_1133cb118,1,0x10,0x1c);
    puRam00000001137f91b0 = puVar1;
  }
  return;
}



/* Entry: 10b751ae8; end: 10b751af3;  */

bool FUN_10b751ae8(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b751af4; end: 10b751b6f;  */

undefined * FUN_10b751af4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91c0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a178,
                        &UNK_10e5d84a8,&UNK_10e5d84e0,4,FUN_10b751b70,0);
    do {
      if (puRam00000001137f91c0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91c0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91c0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91c0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91c0;
}



/* Entry: 10b751b70; end: 10b751b7b;  */

bool FUN_10b751b70(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b751b7c; end: 10b751bf7;  */

undefined * FUN_10b751b7c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91c8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a198,
                        &UNK_10e5d84f0,&UNK_10e5d8544,6,FUN_10b751bf8,0);
    do {
      if (puRam00000001137f91c8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91c8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91c8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91c8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91c8;
}



/* Entry: 10b751bf8; end: 10b751c03;  */

bool FUN_10b751bf8(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b751c04; end: 10b751c7f;  */

undefined * FUN_10b751c04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91d0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a1b8,
                        &UNK_10e5d855c,&UNK_10e5d85f0,0xf,FUN_10b751c80,0);
    do {
      if (puRam00000001137f91d0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91d0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91d0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91d0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91d0;
}



/* Entry: 10b751c80; end: 10b751c8b;  */

bool FUN_10b751c80(uint param_1)

{
  return param_1 < 0xf;
}



/* Entry: 10b751c8c; end: 10b751d07;  */

undefined * FUN_10b751c8c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a1d8,
                        &UNK_10e5d862c,&UNK_10e5d8664,4,FUN_10b751d08,0);
    do {
      if (puRam00000001137f91d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91d8;
}



/* Entry: 10b751d08; end: 10b751d13;  */

bool FUN_10b751d08(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b751d14; end: 10b751d8f;  */

undefined * FUN_10b751d14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a1f8,
                        &UNK_10e5d8674,&UNK_10e5d86a4,5,FUN_10b751d90,0);
    do {
      if (puRam00000001137f91e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91e0;
}



/* Entry: 10b751d90; end: 10b751d9b;  */

bool FUN_10b751d90(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b751d9c; end: 10b751e17;  */

undefined * FUN_10b751d9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a218,
                        &UNK_10e5d86b8,&UNK_10e5d86e0,4,FUN_10b751e18,0);
    do {
      if (puRam00000001137f91e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91e8;
}



/* Entry: 10b751e18; end: 10b751e23;  */

bool FUN_10b751e18(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b751e24; end: 10b751e9f;  */

undefined * FUN_10b751e24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a238,
                        &UNK_10e5d86f0,&UNK_10e5d8730,4,FUN_10b751ea0,0);
    do {
      if (puRam00000001137f91f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91f0;
}



/* Entry: 10b751ea0; end: 10b751eab;  */

bool FUN_10b751ea0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b751eac; end: 10b751f27;  */

undefined * FUN_10b751eac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f91f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a258,
                        &UNK_10e5d8740,&UNK_10e5d8768,4,FUN_10b751f28,0);
    do {
      if (puRam00000001137f91f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f91f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f91f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f91f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f91f8;
}



/* Entry: 10b751f28; end: 10b751f33;  */

bool FUN_10b751f28(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b751f34; end: 10b751faf;  */

undefined * FUN_10b751f34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9200 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a278,
                        &UNK_10e5d8778,&UNK_10e5d87a4,3,FUN_10b751fb0,0);
    do {
      if (puRam00000001137f9200 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9200;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9200,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9200 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9200;
}



/* Entry: 10b751fb0; end: 10b751fbb;  */

bool FUN_10b751fb0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b751fbc; end: 10b752037;  */

undefined * FUN_10b751fbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9208 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a298,
                        &UNK_10e5d87b0,&UNK_10e5d87dc,7,FUN_10b752038,0);
    do {
      if (puRam00000001137f9208 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9208;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9208,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9208 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9208;
}



/* Entry: 10b752038; end: 10b752043;  */

bool FUN_10b752038(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b752044; end: 10b7520bf;  */

undefined * FUN_10b752044(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9210 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a2b8,
                        &UNK_10e5d87f8,&UNK_10e5d886c,10,FUN_10b7520c0,0);
    do {
      if (puRam00000001137f9210 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9210;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9210,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9210 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9210;
}



/* Entry: 10b7520c0; end: 10b7520cb;  */

bool FUN_10b7520c0(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b7520cc; end: 10b752147;  */

undefined * FUN_10b7520cc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9218 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a2d8,
                        &UNK_10e5d8894,&UNK_10e5d88b0,3,FUN_10b752148,0);
    do {
      if (puRam00000001137f9218 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9218;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9218,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9218 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9218;
}



/* Entry: 10b752148; end: 10b752153;  */

bool FUN_10b752148(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b752154; end: 10b7521cf;  */

undefined * FUN_10b752154(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9220 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a2f8,
                        &UNK_10e5d88bc,&UNK_10e5d88ec,4,FUN_10b7521d0,0);
    do {
      if (puRam00000001137f9220 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9220;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9220,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9220 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9220;
}



/* Entry: 10b7521d0; end: 10b7521db;  */

bool FUN_10b7521d0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7521dc; end: 10b752257;  */

undefined * FUN_10b7521dc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9228 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a318,
                        &UNK_10e5d88fc,&UNK_10e5d8950,10,FUN_10b752258,0);
    do {
      if (puRam00000001137f9228 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9228;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9228,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9228 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9228;
}



/* Entry: 10b752258; end: 10b752263;  */

bool FUN_10b752258(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10b752264; end: 10b7522df;  */

undefined * FUN_10b752264(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9230 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a338,
                        &UNK_10e5d8978,&UNK_10e5d89a0,4,FUN_10b7522e0,0);
    do {
      if (puRam00000001137f9230 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9230;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9230,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9230 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9230;
}



/* Entry: 10b7522e0; end: 10b7522eb;  */

bool FUN_10b7522e0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7522ec; end: 10b752367;  */

undefined * FUN_10b7522ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9238 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a358,
                        &UNK_10e5d89b0,&UNK_10e5d89d8,4,FUN_10b752368,0);
    do {
      if (puRam00000001137f9238 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9238;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9238,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9238 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9238;
}



/* Entry: 10b752368; end: 10b752373;  */

bool FUN_10b752368(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b752374; end: 10b7523ef;  */

undefined * FUN_10b752374(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9240 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a378,
                        &UNK_10e5d89e8,&UNK_10e5d8a0c,4,FUN_10b7523f0,0);
    do {
      if (puRam00000001137f9240 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9240;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9240,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9240 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9240;
}



/* Entry: 10b7523f0; end: 10b7523fb;  */

bool FUN_10b7523f0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7523fc; end: 10b752477;  */

undefined * FUN_10b7523fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9248 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a398,
                        &UNK_10e5d8a1c,&UNK_10e5d8a50,5,FUN_10b752478,0);
    do {
      if (puRam00000001137f9248 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9248;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9248,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9248 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9248;
}



/* Entry: 10b752478; end: 10b752483;  */

bool FUN_10b752478(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b752484; end: 10b7524ff;  */

undefined * FUN_10b752484(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9250 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a3b8,
                        &UNK_10e5d8a64,&UNK_10e5d8a88,5,FUN_10b752500,0);
    do {
      if (puRam00000001137f9250 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9250;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9250,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9250 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9250;
}



/* Entry: 10b752500; end: 10b75250b;  */

bool FUN_10b752500(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b75250c; end: 10b752573; +[SCCTPFilterRequest descriptor] */

void FUN_10b75250c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8120,
                        &PTR____CFConstantStringClassReference_110f7a3d8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb238,2,0x18,0x1c);
    puRam00000001137f9258 = puVar1;
  }
  return;
}



/* Entry: 10b752574; end: 10b7525df; +[SCCTPFilter descriptor] */

void FUN_10b752574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8170,
                        &PTR____CFConstantStringClassReference_110dcb678,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cc278,0x17,0xb0,0x1c);
    puRam00000001137f9260 = puVar1;
  }
  return;
}



/* Entry: 10b7525e0; end: 10b75266b; +[SCCTPFilter_Media descriptor] */

undefined * FUN_10b7525e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb81c0,
                        &PTR____CFConstantStringClassReference_110e133f8,&PTR_DAT_1133cb1c0,
                        &PTR_s_mediaContent_1133cb778,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb8170);
    puRam00000001137f9268 = puVar1;
  }
  return puRam00000001137f9268;
}



/* Entry: 10b75266c; end: 10b7526e7; +[SCCTPFilter_ClientTargetingInfo descriptor] */

undefined * FUN_10b75266c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8ad0,
                        &PTR____CFConstantStringClassReference_110f7a3f8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cba78,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f9270 = puVar1;
  }
  return puRam00000001137f9270;
}



/* Entry: 10b7526e8; end: 10b75276b; +[SCCTPFilter_ClientTargetingInfo_Geofence descriptor] */

undefined * FUN_10b7526e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8af8,
                        &PTR____CFConstantStringClassReference_110df0118,&PTR_DAT_1133cb1c0,
                        &PTR_s_id_p_1133cb278,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9278 = puVar1;
  }
  return puRam00000001137f9278;
}



/* Entry: 10b75276c; end: 10b7527e7; +[SCCTPFilter_FriendFilterInfo descriptor] */

undefined * FUN_10b75276c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8260,
                        &PTR____CFConstantStringClassReference_110f7a418,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb538,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9280 = puVar1;
  }
  return puRam00000001137f9280;
}



/* Entry: 10b7527e8; end: 10b752863; +[SCCTPFilter_FrameFilterInfo descriptor] */

undefined * FUN_10b7527e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb82b0,
                        &PTR____CFConstantStringClassReference_110f7a438,&PTR_DAT_1133cb1c0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f9288 = puVar1;
  }
  return puRam00000001137f9288;
}



/* Entry: 10b752864; end: 10b7528df; +[SCCTPFilter_BitmojiFilterInfo descriptor] */

undefined * FUN_10b752864(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8300,
                        &PTR____CFConstantStringClassReference_110f7a458,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb1d8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9290 = puVar1;
  }
  return puRam00000001137f9290;
}



/* Entry: 10b7528e0; end: 10b75295b; +[SCCTPFilter_DynamicFilterInfo descriptor] */

undefined * FUN_10b7528e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8350,
                        &PTR____CFConstantStringClassReference_110f7a478,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb598,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f9298 = puVar1;
  }
  return puRam00000001137f9298;
}



/* Entry: 10b75295c; end: 10b7529d7; +[SCCTPFilter_DynamicFilterInfo_Content descriptor] */

undefined * FUN_10b75295c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb83a0,
                        &PTR____CFConstantStringClassReference_110f7a498,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cbc58,6,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f92a0 = puVar1;
  }
  return puRam00000001137f92a0;
}



/* Entry: 10b7529d8; end: 10b752a53; +[SCCTPFilter_DynamicFilterInfo_Content_LayoutParameters descriptor] */

undefined * FUN_10b7529d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb83f0,
                        &PTR____CFConstantStringClassReference_110f7a4b8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cbd18,6,0x1c,0x1c);
    func_0x00010c228780();
    puRam00000001137f92a8 = puVar1;
  }
  return puRam00000001137f92a8;
}



/* Entry: 10b752a54; end: 10b752af3; +[SCCTPFilter_DynamicFilterInfo_Content_DisplayParameters descriptor] */

undefined * FUN_10b752a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8440,
                        &PTR____CFConstantStringClassReference_110f7a4d8,&PTR_DAT_1133cb1c0,
                        &PTR_s_font_1133cc0f8,0xc,0x58,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb83a0);
    puRam00000001137f92b0 = puVar1;
  }
  return puRam00000001137f92b0;
}



/* Entry: 10b752af4; end: 10b752b6f; +[SCCTPFilter_DynamicFilterInfo_Content_DisplayParameters_TextShadow descriptor] */

undefined * FUN_10b752af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8490,
                        &PTR____CFConstantStringClassReference_110df02d8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb7f8,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f92b8 = puVar1;
  }
  return puRam00000001137f92b8;
}



/* Entry: 10b752b70; end: 10b752beb; +[SCCTPFilter_DynamicFilterInfo_Content_DisplayParameters_DynamicText descriptor] */

undefined * FUN_10b752b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb84e0,
                        &PTR____CFConstantStringClassReference_110f7a4f8,&PTR_DAT_1133cb1c0,
                        &PTR_s_text_1133cb2b8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f92c0 = puVar1;
  }
  return puRam00000001137f92c0;
}



/* Entry: 10b752bec; end: 10b752c67; +[SCCTPFilter_DynamicFilterInfo_Content_DisplayParameters_DynamicCountdown descriptor] */

undefined * FUN_10b752bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8530,
                        &PTR____CFConstantStringClassReference_110f7a518,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb2f8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f92c8 = puVar1;
  }
  return puRam00000001137f92c8;
}



/* Entry: 10b752c68; end: 10b752d03; +[SCCTPFilter_DynamicFilterInfo_Content_CompanionCreativeInfo descriptor] */

undefined * FUN_10b752c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8b20,
                        &PTR____CFConstantStringClassReference_110f7a538,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb5f8,3,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb83a0);
    puRam00000001137f92d0 = puVar1;
  }
  return puRam00000001137f92d0;
}



/* Entry: 10b752d04; end: 10b752d97; +[SCCTPFilter_DynamicFilterInfo_Content_CompanionCreativeInfo_RatingSticker descriptor] */

undefined * FUN_10b752d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8b48,
                        &PTR____CFConstantStringClassReference_110f7a558,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb878,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb8b20);
    puRam00000001137f92d8 = puVar1;
  }
  return puRam00000001137f92d8;
}



/* Entry: 10b752d98; end: 10b752e13; +[SCCTPFilter_DynamicFilterInfo_ContentSettings descriptor] */

undefined * FUN_10b752d98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb85d0,
                        &PTR____CFConstantStringClassReference_110f7a578,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cbdd8,7,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f92e0 = puVar1;
  }
  return puRam00000001137f92e0;
}



/* Entry: 10b752e14; end: 10b752e8f; +[SCCTPFilter_DynamicFilterInfo_Context descriptor] */

undefined * FUN_10b752e14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8b70,
                        &PTR____CFConstantStringClassReference_110dcb198,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb338,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f92e8 = puVar1;
  }
  return puRam00000001137f92e8;
}



/* Entry: 10b752e90; end: 10b752f13; +[SCCTPFilter_DynamicFilterInfo_Context_TimeComponent descriptor] */

undefined * FUN_10b752e90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8b98,
                        &PTR____CFConstantStringClassReference_110deff38,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb658,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f92f0 = puVar1;
  }
  return puRam00000001137f92f0;
}



/* Entry: 10b752f14; end: 10b752f8f; +[SCCTPFilter_SponsoredFilterInfo descriptor] */

undefined * FUN_10b752f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f92f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8bc0,
                        &PTR____CFConstantStringClassReference_110f7a598,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb378,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f92f8 = puVar1;
  }
  return puRam00000001137f92f8;
}



/* Entry: 10b752f90; end: 10b753013; +[SCCTPFilter_SponsoredFilterInfo_TrackInfo descriptor] */

undefined * FUN_10b752f90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8be8,
                        &PTR____CFConstantStringClassReference_110f7a5b8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cbeb8,9,0x48,0x1c);
    func_0x00010c228780();
    puRam00000001137f9300 = puVar1;
  }
  return puRam00000001137f9300;
}



/* Entry: 10b753014; end: 10b75308f; +[SCCTPFilter_SponsoredSlug descriptor] */

undefined * FUN_10b753014(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb86c0,
                        &PTR____CFConstantStringClassReference_110f7a5d8,&PTR_DAT_1133cb1c0,
                        &PTR_s_text_1133cb6b8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9308 = puVar1;
  }
  return puRam00000001137f9308;
}



/* Entry: 10b753090; end: 10b75310b; +[SCCTPFilter_SponsoredTrackInfo descriptor] */

undefined * FUN_10b753090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8710,
                        &PTR____CFConstantStringClassReference_110f7a5f8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cbfd8,9,0x48,0x1c);
    func_0x00010c228780();
    puRam00000001137f9310 = puVar1;
  }
  return puRam00000001137f9310;
}



/* Entry: 10b75310c; end: 10b753197; +[SCCTPFilter_Audio descriptor] */

undefined * FUN_10b75310c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8760,
                        &PTR____CFConstantStringClassReference_110defdf8,&PTR_DAT_1133cb1c0,
                        &PTR_s_URL_1133cb3b8,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb8170);
    puRam00000001137f9318 = puVar1;
  }
  return puRam00000001137f9318;
}



/* Entry: 10b753198; end: 10b753233; +[SCCTPFilter_Attachment descriptor] */

undefined * FUN_10b753198(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8c10,
                        &PTR____CFConstantStringClassReference_110dcb6d8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cbb18,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb8170);
    puRam00000001137f9320 = puVar1;
  }
  return puRam00000001137f9320;
}



/* Entry: 10b753234; end: 10b7532b7; +[SCCTPFilter_Attachment_LongFormVideo descriptor] */

undefined * FUN_10b753234(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8c38,
                        &PTR____CFConstantStringClassReference_110f7a618,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb3f8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9328 = puVar1;
  }
  return puRam00000001137f9328;
}



/* Entry: 10b7532b8; end: 10b753333; +[SCCTPFilter_ClientOrderingInfo descriptor] */

undefined * FUN_10b7532b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8800,
                        &PTR____CFConstantStringClassReference_110f7a638,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb8f8,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9330 = puVar1;
  }
  return puRam00000001137f9330;
}



/* Entry: 10b753334; end: 10b7533af; +[SCCTPFilter_ClientOrderingInfo_CarouselGroupInfo descriptor] */

undefined * FUN_10b753334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8850,
                        &PTR____CFConstantStringClassReference_110f7a658,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb438,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9338 = puVar1;
  }
  return puRam00000001137f9338;
}



/* Entry: 10b7533b0; end: 10b75342b; +[SCCTPFilter_ClientRenderingInfo descriptor] */

undefined * FUN_10b7533b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb88a0,
                        &PTR____CFConstantStringClassReference_110f7a678,&PTR_DAT_1133cb1c0,
                        &PTR_s_scale_1133cb718,3,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137f9340 = puVar1;
  }
  return puRam00000001137f9340;
}



/* Entry: 10b75342c; end: 10b7534c7; +[SCCTPFilter_ArSegmentationInfo descriptor] */

undefined * FUN_10b75342c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb88f0,
                        &PTR____CFConstantStringClassReference_110f7a698,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb978,4,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb8170);
    puRam00000001137f9348 = puVar1;
  }
  return puRam00000001137f9348;
}



/* Entry: 10b7534c8; end: 10b753553; +[SCCTPFilter_ArSegmentationInfo_SkyFilter descriptor] */

undefined * FUN_10b7534c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9350 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8940,
                        &PTR____CFConstantStringClassReference_110f7a6b8,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb9f8,4,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb88f0);
    puRam00000001137f9350 = puVar1;
  }
  return puRam00000001137f9350;
}



/* Entry: 10b753554; end: 10b7535df; +[SCCTPFilter_ArSegmentationInfo_PortraitFilter descriptor] */

undefined * FUN_10b753554(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9358 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8990,
                        &PTR____CFConstantStringClassReference_110f7a6d8,&PTR_DAT_1133cb1c0,
                        &PTR_s_URL_1133cb478,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb88f0);
    puRam00000001137f9358 = puVar1;
  }
  return puRam00000001137f9358;
}



/* Entry: 10b7535e0; end: 10b75365b; +[SCCTPFilter_Tooltip descriptor] */

undefined * FUN_10b7535e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9360 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb89e0,
                        &PTR____CFConstantStringClassReference_110defd78,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb4b8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9360 = puVar1;
  }
  return puRam00000001137f9360;
}



/* Entry: 10b75365c; end: 10b7536d7; +[SCCTPFilter_ToastMessage descriptor] */

undefined * FUN_10b75365c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9368 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8a30,
                        &PTR____CFConstantStringClassReference_110f7a6f8,&PTR_DAT_1133cb1c0,
                        &PTR_s_message_1133cbbb8,5,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f9368 = puVar1;
  }
  return puRam00000001137f9368;
}



/* Entry: 10b7536d8; end: 10b753773; +[SCCTPFilter_ClientGeneratedFilter descriptor] */

undefined * FUN_10b7536d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9370 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8c60,
                        &PTR____CFConstantStringClassReference_110f7a718,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb4f8,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cb8170);
    puRam00000001137f9370 = puVar1;
  }
  return puRam00000001137f9370;
}



/* Entry: 10b753774; end: 10b7537f7; +[SCCTPFilter_ClientGeneratedFilter_ColorFilter descriptor] */

undefined * FUN_10b753774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9378 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8c88,
                        &PTR____CFConstantStringClassReference_110f7a738,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb1f8,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137f9378 = puVar1;
  }
  return puRam00000001137f9378;
}



/* Entry: 10b7537f8; end: 10b75387b; +[SCCTPFilter_ClientGeneratedFilter_MotionFilter descriptor] */

undefined * FUN_10b7537f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9380 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8cb0,
                        &PTR____CFConstantStringClassReference_110f7a758,&PTR_DAT_1133cb1c0,
                        &PTR_DAT_1133cb218,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137f9380 = puVar1;
  }
  return puRam00000001137f9380;
}



/* Entry: 10b75387c; end: 10b753917; +[SCAdsWebViewAttachment descriptor] */

undefined * FUN_10b75387c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9388 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8d50,
                        &PTR____CFConstantStringClassReference_110df01f8,&PTR_DAT_1133cc568,
                        &PTR_DAT_1133cc580,0x26,0xd0,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5d8ad0);
    puRam00000001137f9388 = puVar1;
  }
  return puRam00000001137f9388;
}



/* Entry: 10b753918; end: 10b753993;  */

undefined * FUN_10b753918(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9390 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7a778,
                        &UNK_10e5d8aec,&UNK_10e5d8b30,3,FUN_10b753994,0);
    do {
      if (puRam00000001137f9390 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9390;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9390,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9390 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9390;
}



/* Entry: 10b753994; end: 10b75399f;  */

bool FUN_10b753994(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7539a0; end: 10b753a83; +[SCAdsRetargetingPromptConfig descriptor] */

void FUN_10b7539a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9398 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8df0,
                        &PTR____CFConstantStringClassReference_110f7a798,
                        &PTR_s_snapchat_ads_abconfig_1133cca40,&PTR_s_title_1133cca58,4,0x20,0x1c);
    puRam00000001137f9398 = puVar1;
  }
  return;
}



/* Entry: 10b753a84; end: 10b753a8f;  */

bool FUN_10b753a84(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b753a90; end: 10b753b0b; +[SCAdsCidMetadata descriptor] */

undefined * FUN_10b753a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8e90,
                        &PTR____CFConstantStringClassReference_110f7a7d8,&PTR_DAT_1133ccad8,
                        &PTR_DAT_1133ccaf0,5,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f93a8 = puVar1;
  }
  return puRam00000001137f93a8;
}



/* Entry: 10b753b0c; end: 10b753b73; +[SCAdsInstantShopConfiguration descriptor] */

void FUN_10b753b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8f30,
                        &PTR____CFConstantStringClassReference_110f7a7f8,&PTR_DAT_1133ccb90,
                        &PTR_DAT_1133ccba8,5,4,0x1c);
    puRam00000001137f93b0 = puVar1;
  }
  return;
}



/* Entry: 10b753b74; end: 10b753bdb; +[SCAdsNativeProductCollectionPageRenderData descriptor] */

void FUN_10b753b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb8fd0,
                        &PTR____CFConstantStringClassReference_110f7a818,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133ccc80,2,0x18,0x1c);
    puRam00000001137f93b8 = puVar1;
  }
  return;
}



/* Entry: 10b753bdc; end: 10b753c43; +[SCAdsRelatedProductGroup descriptor] */

void FUN_10b753bdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9020,
                        &PTR____CFConstantStringClassReference_110f7a838,&PTR_DAT_1133ccc48,
                        &PTR_s_title_1133cccc0,2,0x18,0x1c);
    puRam00000001137f93c0 = puVar1;
  }
  return;
}



/* Entry: 10b753c44; end: 10b753cab; +[SCAdsNativeProductPageRenderData descriptor] */

void FUN_10b753c44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9070,
                        &PTR____CFConstantStringClassReference_110f7a858,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133ccf80,7,0x40,0x1c);
    puRam00000001137f93c8 = puVar1;
  }
  return;
}



/* Entry: 10b753cac; end: 10b753d27; +[SCAdsProductMainData descriptor] */

undefined * FUN_10b753cac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb91d8,
                        &PTR____CFConstantStringClassReference_110f7a878,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133cd060,9,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f93d0 = puVar1;
  }
  return puRam00000001137f93d0;
}



/* Entry: 10b753d28; end: 10b753dab; +[SCAdsProductMainData_ProductTag descriptor] */

undefined * FUN_10b753d28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9200,
                        &PTR____CFConstantStringClassReference_110f7a898,&PTR_DAT_1133ccc48,
                        &PTR_s_tag_1133ccc60,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f93d8 = puVar1;
  }
  return puRam00000001137f93d8;
}



/* Entry: 10b753dac; end: 10b753e2f; +[SCAdsProductMainData_ReviewInfo descriptor] */

undefined * FUN_10b753dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9228,
                        &PTR____CFConstantStringClassReference_110f7a8b8,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133ccd40,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f93e0 = puVar1;
  }
  return puRam00000001137f93e0;
}



/* Entry: 10b753e30; end: 10b753e97; +[SCAdsPricingInfo descriptor] */

void FUN_10b753e30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9138,
                        &PTR____CFConstantStringClassReference_110f7a8d8,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133cce00,6,0x38,0x1c);
    puRam00000001137f93e8 = puVar1;
  }
  return;
}



/* Entry: 10b753e98; end: 10b753f13; +[SCAdsProductVariant descriptor] */

undefined * FUN_10b753e98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9250,
                        &PTR____CFConstantStringClassReference_110e407d8,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133ccec0,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f93f0 = puVar1;
  }
  return puRam00000001137f93f0;
}



/* Entry: 10b753f14; end: 10b753f97; +[SCAdsProductVariant_ProductOption descriptor] */

undefined * FUN_10b753f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f93f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb9278,
                        &PTR____CFConstantStringClassReference_110f7a8f8,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133ccd00,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f93f8 = puVar1;
  }
  return puRam00000001137f93f8;
}



/* Entry: 10b753f98; end: 10b75401b; +[SCAdsProductVariant_ProductOptionValue descriptor] */

undefined * FUN_10b753f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9400 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cb92a0,
                        &PTR____CFConstantStringClassReference_110f7a918,&PTR_DAT_1133ccc48,
                        &PTR_DAT_1133ccda0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9400 = puVar1;
  }
  return puRam00000001137f9400;
}


