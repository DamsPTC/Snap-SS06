/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b756b64; end: 10b756bcb; +[SCCameosListOfLenses descriptor] */

void FUN_10b756b64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb320,
                        &PTR____CFConstantStringClassReference_110f7b1d8,&PTR_DAT_1133cf718,
                        &PTR_DAT_1133cf730,1,0x10,0x1c);
    puRam00000001137f96e0 = puVar1;
  }
  return;
}



/* Entry: 10b756bcc; end: 10b756c33; +[SCCTPShoppingSticker descriptor] */

void FUN_10b756bcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb3c0,
                        &PTR____CFConstantStringClassReference_110f7b1f8,&PTR_DAT_1133cf790,
                        &PTR_s_snapItemId_1133cf7a8,4,0x28,0x1c);
    puRam00000001137f96e8 = puVar1;
  }
  return;
}



/* Entry: 10b756c34; end: 10b756d17; +[SCCTPDrawing descriptor] */

void FUN_10b756c34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f96f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb460,
                        &PTR____CFConstantStringClassReference_110ec6518,&PTR_DAT_1133cf828,0,0,4,
                        0x1c);
    puRam00000001137f96f0 = puVar1;
  }
  return;
}



/* Entry: 10b756d18; end: 10b756d23;  */

bool FUN_10b756d18(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b756d24; end: 10b756d9f;  */

undefined * FUN_10b756d24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9700 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b238,
                        &UNK_10e5d9d40,&UNK_10e5d9da8,5,FUN_10b756da0,0);
    do {
      if (puRam00000001137f9700 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9700;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9700,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9700 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9700;
}



/* Entry: 10b756da0; end: 10b756dab;  */

bool FUN_10b756da0(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b756dac; end: 10b756e27;  */

undefined * FUN_10b756dac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9708 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b258,
                        &UNK_10e5d9dbc,&UNK_10e5d9e1c,5,FUN_10b756e28,0);
    do {
      if (puRam00000001137f9708 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9708;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9708,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9708 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9708;
}



/* Entry: 10b756e28; end: 10b756e33;  */

bool FUN_10b756e28(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b756e34; end: 10b756ebf; +[SCCTPProxySource descriptor] */

undefined * FUN_10b756e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb500,
                        &PTR____CFConstantStringClassReference_110f7b278,&PTR_DAT_1133cf848,
                        &PTR_DAT_1133cf880,3,0x14,0x1c);
    func_0x00010c229040();
    puRam00000001137f9710 = puVar1;
  }
  return puRam00000001137f9710;
}



/* Entry: 10b756ec0; end: 10b756fa3; +[SCCTPProxyItem descriptor] */

void FUN_10b756ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb550,
                        &PTR____CFConstantStringClassReference_110f7b298,&PTR_DAT_1133cf848,
                        &PTR_s_source_1133cf860,1,0x10,0x1c);
    puRam00000001137f9718 = puVar1;
  }
  return;
}



/* Entry: 10b756fa4; end: 10b756faf;  */

bool FUN_10b756fa4(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10b756fb0; end: 10b757093; +[SCCTPLens descriptor] */

void FUN_10b756fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb5f0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_1133cf8e0,
                        &PTR_s_lensId_1133cf8f8,3,0x10,0x1c);
    puRam00000001137f9728 = puVar1;
  }
  return;
}



/* Entry: 10b757094; end: 10b75709f;  */

bool FUN_10b757094(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7570a0; end: 10b757183; +[SCCTPTemplate descriptor] */

void FUN_10b7570a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb690,
                        &PTR____CFConstantStringClassReference_110f3cc38,&PTR_DAT_1133cf958,
                        &PTR_DAT_1133cf970,6,0x30,0x1c);
    puRam00000001137f9738 = puVar1;
  }
  return;
}



/* Entry: 10b757184; end: 10b75718f;  */

bool FUN_10b757184(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b757190; end: 10b757287; +[SCCTPEncryptedMedia descriptor] */

undefined * FUN_10b757190(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb730,
                        &PTR____CFConstantStringClassReference_110f75958,&PTR_DAT_1133cfa30,
                        &PTR_s_contentURL_1133cfa48,5,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9748 = puVar1;
  }
  return puRam00000001137f9748;
}



/* Entry: 10b757288; end: 10b757293;  */

bool FUN_10b757288(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b757294; end: 10b757377; +[SCLPLensSnapchat descriptor] */

void FUN_10b757294(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb7d0,
                        &PTR____CFConstantStringClassReference_110f7b338,&PTR_DAT_1133cfae8,
                        &PTR_DAT_1133cfb00,0x14,0xa0,0x1c);
    puRam00000001137f9758 = puVar1;
  }
  return;
}



/* Entry: 10b757378; end: 10b757383;  */

bool FUN_10b757378(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b757384; end: 10b7573ff;  */

undefined * FUN_10b757384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9768 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b378,
                        &UNK_10e5d9fe0,&UNK_10e5da008,3,FUN_10b757400,0);
    do {
      if (puRam00000001137f9768 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9768;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9768,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9768 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9768;
}



/* Entry: 10b757400; end: 10b75740b;  */

bool FUN_10b757400(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b75740c; end: 10b757487;  */

undefined * FUN_10b75740c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9770 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b398,
                        &UNK_10e5da014,&UNK_10e5da050,4,FUN_10b757488,0);
    do {
      if (puRam00000001137f9770 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9770;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9770,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9770 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9770;
}



/* Entry: 10b757488; end: 10b757493;  */

bool FUN_10b757488(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b757494; end: 10b75751f; +[SCLPAttachment descriptor] */

undefined * FUN_10b757494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb870,
                        &PTR____CFConstantStringClassReference_110dcb6d8,&PTR_DAT_1133cfd88,
                        &PTR_DAT_1133cfec0,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001137f9778 = puVar1;
  }
  return puRam00000001137f9778;
}



/* Entry: 10b757520; end: 10b75759b; +[SCLPLongFormVideoAttachment descriptor] */

undefined * FUN_10b757520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb8c0,
                        &PTR____CFConstantStringClassReference_110df0238,&PTR_DAT_1133cfd88,
                        &PTR_DAT_1133cfde0,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9780 = puVar1;
  }
  return puRam00000001137f9780;
}



/* Entry: 10b75759c; end: 10b757617; +[SCLPWebViewAttachment descriptor] */

undefined * FUN_10b75759c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb910,
                        &PTR____CFConstantStringClassReference_110df01f8,&PTR_DAT_1133cfd88,
                        &PTR_DAT_1133cfda0,2,0x10,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9788 = puVar1;
  }
  return puRam00000001137f9788;
}



/* Entry: 10b757618; end: 10b757693; +[SCLPAppInstallAttachment descriptor] */

undefined * FUN_10b757618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb960,
                        &PTR____CFConstantStringClassReference_110df01d8,&PTR_DAT_1133cfd88,
                        &PTR_s_appName_1133cfe40,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9790 = puVar1;
  }
  return puRam00000001137f9790;
}



/* Entry: 10b757694; end: 10b75778b; +[SCLPRichStoryDeepLinkAttachment descriptor] */

undefined * FUN_10b757694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbb9b0,
                        &PTR____CFConstantStringClassReference_110df0218,&PTR_DAT_1133cfd88,
                        &PTR_s_uri_1133cff80,0xb,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9798 = puVar1;
  }
  return puRam00000001137f9798;
}



/* Entry: 10b75778c; end: 10b757797;  */

bool FUN_10b75778c(uint param_1)

{
  return param_1 < 0x3d;
}



/* Entry: 10b757798; end: 10b757833; +[SCLPTrackingInfo descriptor] */

undefined * FUN_10b757798(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbaa0,
                        &PTR____CFConstantStringClassReference_110f7b3d8,&PTR_DAT_1133d00e0,
                        &PTR_DAT_1133d0118,0x17,0xb8,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10e5da398);
    puRam00000001137f97a8 = puVar1;
  }
  return puRam00000001137f97a8;
}



/* Entry: 10b757834; end: 10b7578af;  */

undefined * FUN_10b757834(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f97b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b3f8,
                        &UNK_10e5da3a4,&UNK_10e5da470,0x10,FUN_10b7578b0,0);
    do {
      if (puRam00000001137f97b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f97b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f97b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f97b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f97b0;
}



/* Entry: 10b7578b0; end: 10b7578bb;  */

bool FUN_10b7578b0(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10b7578bc; end: 10b757937;  */

undefined * FUN_10b7578bc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f97b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b418,
                        &UNK_10e5da4b0,&UNK_10e5da4c8,3,FUN_10b757938,0);
    do {
      if (puRam00000001137f97b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f97b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f97b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f97b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f97b8;
}



/* Entry: 10b757938; end: 10b757943;  */

bool FUN_10b757938(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b757944; end: 10b757a27; +[SCLPCarouselPosition descriptor] */

void FUN_10b757944(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbb90,
                        &PTR____CFConstantStringClassReference_110f7b438,&PTR_DAT_1133d03f8,
                        &PTR_DAT_1133d0410,6,0x28,0x1c);
    puRam00000001137f97c0 = puVar1;
  }
  return;
}



/* Entry: 10b757a28; end: 10b757a33;  */

bool FUN_10b757a28(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b757a34; end: 10b757a9b; +[CarouselGlobalScore descriptor] */

void FUN_10b757a34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbc30,
                        &PTR____CFConstantStringClassReference_110f7b478,&PTR_DAT_1133d04d0,
                        &PTR_DAT_1133d0508,2,0xc,0x1c);
    puRam00000001137f97d0 = puVar1;
  }
  return;
}



/* Entry: 10b757a9c; end: 10b757b03; +[CarouselGlobalScoreList descriptor] */

void FUN_10b757a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbc80,
                        &PTR____CFConstantStringClassReference_110f7b498,&PTR_DAT_1133d04d0,
                        &PTR_DAT_1133d04e8,1,0x10,0x1c);
    puRam00000001137f97d8 = puVar1;
  }
  return;
}



/* Entry: 10b757b04; end: 10b757b6b; +[SCLPLensCreator descriptor] */

void FUN_10b757b04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbd20,
                        &PTR____CFConstantStringClassReference_110e44ef8,&PTR_DAT_1133d0548,
                        &PTR_s_id_p_1133d0560,8,0x28,0x1c);
    puRam00000001137f97e0 = puVar1;
  }
  return;
}



/* Entry: 10b757b6c; end: 10b757bd3; +[SCLPMusicTrackMetadata descriptor] */

void FUN_10b757b6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbdc0,
                        &PTR____CFConstantStringClassReference_110f7b4b8,&PTR_DAT_1133d0660,
                        &PTR_s_trackId_1133d0678,3,0x18,0x1c);
    puRam00000001137f97e8 = puVar1;
  }
  return;
}



/* Entry: 10b757bd4; end: 10b757c5f; +[SCCTPContentRestrictions descriptor] */

undefined * FUN_10b757bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbe60,
                        &PTR____CFConstantStringClassReference_110f7b4d8,&PTR_DAT_1133d06e0,
                        &PTR_DAT_1133d0718,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137f97f0 = puVar1;
  }
  return puRam00000001137f97f0;
}



/* Entry: 10b757c60; end: 10b757cdb; +[SCCTPContentRestrictions_CountryList descriptor] */

undefined * FUN_10b757c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f97f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbeb0,
                        &PTR____CFConstantStringClassReference_110f7b4f8,&PTR_DAT_1133d06e0,
                        &PTR_DAT_1133d06f8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f97f8 = puVar1;
  }
  return puRam00000001137f97f8;
}



/* Entry: 10b757cdc; end: 10b757d43; +[SCLPSponsoredInfo descriptor] */

void FUN_10b757cdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9800 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbf50,
                        &PTR____CFConstantStringClassReference_110f7b518,&PTR_DAT_1133d0758,
                        &PTR_DAT_1133d0770,3,0x10,0x1c);
    puRam00000001137f9800 = puVar1;
  }
  return;
}



/* Entry: 10b757d44; end: 10b757dab; +[SCLPHint descriptor] */

void FUN_10b757d44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9808 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbbff0,
                        &PTR____CFConstantStringClassReference_110f7b538,&PTR_DAT_1133d07d0,
                        &PTR_DAT_1133d07e8,2,0x18,0x1c);
    puRam00000001137f9808 = puVar1;
  }
  return;
}



/* Entry: 10b757dac; end: 10b757e27; +[SCLPHint_HintData descriptor] */

undefined * FUN_10b757dac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9810 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc040,
                        &PTR____CFConstantStringClassReference_110f7b558,&PTR_DAT_1133d07d0,
                        &PTR_s_id_p_1133d0828,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f9810 = puVar1;
  }
  return puRam00000001137f9810;
}



/* Entry: 10b757e28; end: 10b757f0b; +[SCLPConnectedLensInfo descriptor] */

void FUN_10b757e28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9818 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc0e0,
                        &PTR____CFConstantStringClassReference_110f51db8,&PTR_DAT_1133d0868,
                        &PTR_s_appId_1133d0880,1,0x10,0x1c);
    puRam00000001137f9818 = puVar1;
  }
  return;
}



/* Entry: 10b757f0c; end: 10b757f17;  */

bool FUN_10b757f0c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b757f18; end: 10b757f93;  */

undefined * FUN_10b757f18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9828 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b598,
                        &UNK_10e5da558,&UNK_10e5da57c,4,FUN_10b757f94,0);
    do {
      if (puRam00000001137f9828 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9828;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9828,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9828 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9828;
}



/* Entry: 10b757f94; end: 10b757f9f;  */

bool FUN_10b757f94(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b757fa0; end: 10b758097; +[SCLPLens descriptor] */

undefined * FUN_10b757fa0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9830 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc180,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_1133d08a0,
                        &PTR_s_id_p_1133d08b8,0xf,0x68,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9830 = puVar1;
  }
  return puRam00000001137f9830;
}



/* Entry: 10b758098; end: 10b7580a3;  */

bool FUN_10b758098(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7580a4; end: 10b75819b; +[SCLPApplicableContext descriptor] */

void FUN_10b7580a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9840 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc220,
                        &PTR____CFConstantStringClassReference_110f7b5d8,&PTR_DAT_1133d0a98,
                        &PTR_DAT_1133d0ab0,2,0x18,0x1c);
    puRam00000001137f9840 = puVar1;
  }
  return;
}



/* Entry: 10b75819c; end: 10b7581a7;  */

bool FUN_10b75819c(uint param_1)

{
  return param_1 < 0x17;
}



/* Entry: 10b7581a8; end: 10b758223;  */

undefined * FUN_10b7581a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9850 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b618,
                        &UNK_10e5da738,&UNK_10e5da744,2,FUN_10b758224,0);
    do {
      if (puRam00000001137f9850 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9850;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9850,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9850 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9850;
}



/* Entry: 10b758224; end: 10b75822f;  */

bool FUN_10b758224(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b758230; end: 10b7582ab;  */

undefined * FUN_10b758230(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9858 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b638,
                        &UNK_10e5da74c,&UNK_10e5da778,5,FUN_10b7582ac,0);
    do {
      if (puRam00000001137f9858 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9858;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9858,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9858 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9858;
}



/* Entry: 10b7582ac; end: 10b7582b7;  */

bool FUN_10b7582ac(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7582b8; end: 10b7583c3; +[SCLPLensResource descriptor] */

undefined * FUN_10b7582b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9860 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc310,
                        &PTR____CFConstantStringClassReference_110f52038,&PTR_DAT_1133d0af0,
                        &PTR_s_format_1133d0b08,6,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9860 = puVar1;
  }
  return puRam00000001137f9860;
}



/* Entry: 10b7583c4; end: 10b7583cf;  */

bool FUN_10b7583c4(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 10b7583d0; end: 10b75844b;  */

undefined * FUN_10b7583d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9870 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b678,
                        &UNK_10e5da830,&UNK_10e5da854,4,FUN_10b75844c,0);
    do {
      if (puRam00000001137f9870 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9870;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9870,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9870 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9870;
}



/* Entry: 10b75844c; end: 10b758457;  */

bool FUN_10b75844c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b758458; end: 10b7584d3;  */

undefined * FUN_10b758458(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9878 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b698,
                        &UNK_10e5da864,&UNK_10e5da870,2,FUN_10b7584d4,0);
    do {
      if (puRam00000001137f9878 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9878;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9878,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9878 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9878;
}



/* Entry: 10b7584d4; end: 10b7584df;  */

bool FUN_10b7584d4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7584e0; end: 10b75856b; +[SCLPLensAsset descriptor] */

undefined * FUN_10b7584e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9880 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc3b0,
                        &PTR____CFConstantStringClassReference_110f7b6b8,&PTR_DAT_1133d0bd0,
                        &PTR_DAT_1133d0c48,6,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001137f9880 = puVar1;
  }
  return puRam00000001137f9880;
}



/* Entry: 10b75856c; end: 10b7585e7; +[SCLPLensAssetStorageOption descriptor] */

undefined * FUN_10b75856c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9888 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc400,
                        &PTR____CFConstantStringClassReference_110f7b6d8,&PTR_DAT_1133d0bd0,
                        &PTR_s_format_1133d0be8,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9888 = puVar1;
  }
  return puRam00000001137f9888;
}



/* Entry: 10b7585e8; end: 10b7586cb; +[SCLPSHA256 descriptor] */

void FUN_10b7585e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9890 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc4a0,
                        &PTR____CFConstantStringClassReference_110f7b6f8,&PTR_DAT_1133d0d08,
                        &PTR_s_data_p_1133d0d20,1,0x10,0x1c);
    puRam00000001137f9890 = puVar1;
  }
  return;
}



/* Entry: 10b7586cc; end: 10b7586d7;  */

bool FUN_10b7586cc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7586d8; end: 10b758767;  */

undefined * FUN_10b7586d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f98a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b738,
                        &UNK_10e5da8a4,&UNK_10e5daf5c,0x6d,FUN_10b758768,0,&UNK_10e5db110);
    do {
      if (puRam00000001137f98a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f98a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f98a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f98a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f98a0;
}



/* Entry: 10b758768; end: 10b758773;  */

bool FUN_10b758768(uint param_1)

{
  return param_1 < 0x6d;
}



/* Entry: 10b758774; end: 10b7587db; +[SCLPDebugInfo descriptor] */

void FUN_10b758774(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc5e0,
                        &PTR____CFConstantStringClassReference_110defeb8,&PTR_DAT_1133d0d40,
                        &PTR_DAT_1133d0d58,1,0x10,0x1c);
    puRam00000001137f98a8 = puVar1;
  }
  return;
}



/* Entry: 10b7587dc; end: 10b758843; +[SCLPTargetingInfo descriptor] */

void FUN_10b7587dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc680,
                        &PTR____CFConstantStringClassReference_110f3bf18,&PTR_DAT_1133d0d78,
                        &PTR_DAT_1133d0d90,1,0x10,0x1c);
    puRam00000001137f98b0 = puVar1;
  }
  return;
}



/* Entry: 10b758844; end: 10b758927; +[SCLPRemoteApiInfo descriptor] */

void FUN_10b758844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc720,
                        &PTR____CFConstantStringClassReference_110f51dd8,&PTR_DAT_1133d0db0,
                        &PTR_DAT_1133d0dc8,1,0x10,0x1c);
    puRam00000001137f98b8 = puVar1;
  }
  return;
}



/* Entry: 10b758928; end: 10b758933;  */

bool FUN_10b758928(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b758934; end: 10b75899b; +[SCLPLensCustomizationInfo descriptor] */

void FUN_10b758934(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc7c0,
                        &PTR____CFConstantStringClassReference_110f51f18,&PTR_DAT_1133d0de8,
                        &PTR_DAT_1133d0e00,4,0x20,0x1c);
    puRam00000001137f98c8 = puVar1;
  }
  return;
}



/* Entry: 10b75899c; end: 10b758a93; +[SCLPLensPreview descriptor] */

undefined * FUN_10b75899c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc860,
                        &PTR____CFConstantStringClassReference_110e37bb8,&PTR_DAT_1133d0e80,
                        &PTR_DAT_1133d0e98,4,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f98d0 = puVar1;
  }
  return puRam00000001137f98d0;
}



/* Entry: 10b758a94; end: 10b758a9f;  */

bool FUN_10b758a94(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b758aa0; end: 10b758b1b;  */

undefined * FUN_10b758aa0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f98e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b798,
                        &UNK_10e5db1e4,&UNK_10e5db208,3,FUN_10b758b1c,0);
    do {
      if (puRam00000001137f98e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f98e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f98e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f98e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f98e0;
}



/* Entry: 10b758b1c; end: 10b758b27;  */

bool FUN_10b758b1c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b758b28; end: 10b758b8f; +[SCLPLensSourceInfo descriptor] */

void FUN_10b758b28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc900,
                        &PTR____CFConstantStringClassReference_110f7b7b8,&PTR_DAT_1133d0f18,
                        &PTR_DAT_1133d0f30,2,0xc,0x1c);
    puRam00000001137f98e8 = puVar1;
  }
  return;
}



/* Entry: 10b758b90; end: 10b758bf7; +[SCLPLensPlusTierConfig descriptor] */

void FUN_10b758b90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbc9a0,
                        &PTR____CFConstantStringClassReference_110f7b7d8,&PTR_DAT_1133d0f70,
                        &PTR_DAT_1133d0f88,3,0x10,0x1c);
    puRam00000001137f98f0 = puVar1;
  }
  return;
}



/* Entry: 10b758bf8; end: 10b758c5f; +[SCLPLensFreemiumInfo descriptor] */

void FUN_10b758bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f98f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbca40,
                        &PTR____CFConstantStringClassReference_110f7b7f8,&PTR_DAT_1133d0fe8,
                        &PTR_DAT_1133d1000,3,0x18,0x1c);
    puRam00000001137f98f8 = puVar1;
  }
  return;
}



/* Entry: 10b758c60; end: 10b758cc7; +[SCCTPAutoCaptionsMetadata descriptor] */

void FUN_10b758c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9900 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcae0,
                        &PTR____CFConstantStringClassReference_110f7b818,&PTR_DAT_1133d1060,
                        &PTR_DAT_1133d1078,3,0x20,0x1c);
    puRam00000001137f9900 = puVar1;
  }
  return;
}



/* Entry: 10b758cc8; end: 10b758dab; +[SCCTPBitmojiStickerMetadata descriptor] */

void FUN_10b758cc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9908 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcb80,
                        &PTR____CFConstantStringClassReference_110f7b838,&PTR_DAT_1133d10d8,
                        &PTR_s_avatarId_1133d10f0,5,0x28,0x1c);
    puRam00000001137f9908 = puVar1;
  }
  return;
}



/* Entry: 10b758dac; end: 10b758dbb;  */

bool FUN_10b758dac(int param_1)

{
  return param_1 == 0 || param_1 == 3;
}



/* Entry: 10b758dbc; end: 10b758eb3; +[SCCTPMediaContent descriptor] */

undefined * FUN_10b758dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9918 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcc70,
                        &PTR____CFConstantStringClassReference_110f3b598,&PTR_DAT_1133d1190,
                        &PTR_DAT_1133d11a8,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f9918 = puVar1;
  }
  return puRam00000001137f9918;
}



/* Entry: 10b758eb4; end: 10b758ebf;  */

bool FUN_10b758eb4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b758ec0; end: 10b758f3b;  */

undefined * FUN_10b758ec0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f9928 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f7b898,
                        &UNK_10e5db280,&UNK_10e5db2e8,8,FUN_10b758f3c,0);
    do {
      if (puRam00000001137f9928 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f9928;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f9928,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f9928 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f9928;
}



/* Entry: 10b758f3c; end: 10b758f47;  */

bool FUN_10b758f3c(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b758f48; end: 10b758faf; +[SCCTPRange descriptor] */

void FUN_10b758f48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9930 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcd10,
                        &PTR____CFConstantStringClassReference_110defc58,&PTR_DAT_1133d1230,
                        &PTR_s_location_1133d1288,2,0x18,0x1c);
    puRam00000001137f9930 = puVar1;
  }
  return;
}



/* Entry: 10b758fb0; end: 10b759017; +[SCCTPMention descriptor] */

void FUN_10b758fb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcd60,
                        &PTR____CFConstantStringClassReference_110dcb698,&PTR_DAT_1133d1230,
                        &PTR_DAT_1133d12c8,2,0x18,0x1c);
    puRam00000001137f9938 = puVar1;
  }
  return;
}



/* Entry: 10b759018; end: 10b759093; +[SCCTPMention_User descriptor] */

undefined * FUN_10b759018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcdb0,
                        &PTR____CFConstantStringClassReference_110df7698,&PTR_DAT_1133d1230,
                        &PTR_s_userId_1133d1248,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9940 = puVar1;
  }
  return puRam00000001137f9940;
}



/* Entry: 10b759094; end: 10b75910f; +[SCCTPMention_Place descriptor] */

undefined * FUN_10b759094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbce00,
                        &PTR____CFConstantStringClassReference_110dcb618,&PTR_DAT_1133d1230,
                        &PTR_s_id_p_1133d1268,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f9948 = puVar1;
  }
  return puRam00000001137f9948;
}



/* Entry: 10b759110; end: 10b7591ab; +[SCCTPMention_Entity descriptor] */

undefined * FUN_10b759110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbce50,
                        &PTR____CFConstantStringClassReference_110f3b9f8,&PTR_DAT_1133d1230,
                        &PTR_s_user_1133d1308,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cbcd60);
    puRam00000001137f9950 = puVar1;
  }
  return puRam00000001137f9950;
}



/* Entry: 10b7591ac; end: 10b759213; +[SCCTPColorRange descriptor] */

void FUN_10b7591ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcea0,
                        &PTR____CFConstantStringClassReference_110f7b8b8,&PTR_DAT_1133d1230,
                        &PTR_DAT_1133d1348,2,0x18,0x1c);
    puRam00000001137f9958 = puVar1;
  }
  return;
}



/* Entry: 10b759214; end: 10b75927b; +[SCCTPStyleRange descriptor] */

void FUN_10b759214(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcef0,
                        &PTR____CFConstantStringClassReference_110f7b8d8,&PTR_DAT_1133d1230,
                        &PTR_DAT_1133d13c8,4,0x10,0x1c);
    puRam00000001137f9960 = puVar1;
  }
  return;
}



/* Entry: 10b75927c; end: 10b7592e3; +[SCCTPMagicCaptionMetadata descriptor] */

void FUN_10b75927c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcf40,
                        &PTR____CFConstantStringClassReference_110f7b8f8,&PTR_DAT_1133d1230,
                        &PTR_DAT_1133d1388,2,0x18,0x1c);
    puRam00000001137f9968 = puVar1;
  }
  return;
}



/* Entry: 10b7592e4; end: 10b7593c7; +[SCCTPCaptionStyleMetadata descriptor] */

void FUN_10b7592e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbcf90,
                        &PTR____CFConstantStringClassReference_110f7b918,&PTR_DAT_1133d1230,
                        &PTR_s_text_1133d1448,0xf,0x68,0x1c);
    puRam00000001137f9970 = puVar1;
  }
  return;
}



/* Entry: 10b7593c8; end: 10b7593d3;  */

bool FUN_10b7593c8(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7593d4; end: 10b75943b; +[SCCTPCaptionAnimationMetadata descriptor] */

void FUN_10b7593d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbd030,
                        &PTR____CFConstantStringClassReference_110f7b958,&PTR_DAT_1133d1628,
                        &PTR_s_animationType_1133d1640,1,8,0x1c);
    puRam00000001137f9980 = puVar1;
  }
  return;
}



/* Entry: 10b75943c; end: 10b75951f; +[SCCTPCTItemInstanceCommonMetadata descriptor] */

void FUN_10b75943c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f9988 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cbd0d0,
                        &PTR____CFConstantStringClassReference_110f7b978,&PTR_DAT_1133d1660,
                        &PTR_DAT_1133d1678,1,0x10,0x1c);
    puRam00000001137f9988 = puVar1;
  }
  return;
}


