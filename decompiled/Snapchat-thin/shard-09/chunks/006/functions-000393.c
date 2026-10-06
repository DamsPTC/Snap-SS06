/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f1f740; end: 106f1f7bb;  */

undefined * FUN_106f1f740(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8478 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8d598,
                        &UNK_10de18704,&UNK_10de1871c,2,FUN_106f1f7bc,0);
    do {
      if (puRam00000001136c8478 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8478;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8478,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8478 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8478;
}



/* Entry: 106f1f7bc; end: 106f1f7c7;  */

bool FUN_106f1f7bc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 106f1f7c8; end: 106f1f82f; +[SCOrbisStoryData descriptor] */

void FUN_106f1f7c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8480 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47890,
                        &PTR____CFConstantStringClassReference_110e8d5b8,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193d50,5,0x28,0x1c);
    puRam00000001136c8480 = puVar1;
  }
  return;
}



/* Entry: 106f1f830; end: 106f1f897; +[SCOrbisSssId descriptor] */

void FUN_106f1f830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8488 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b478e0,
                        &PTR____CFConstantStringClassReference_110e8d5d8,&PTR_DAT_113193ad8,
                        &PTR_s_id_p_113193b90,2,0x18,0x1c);
    puRam00000001136c8488 = puVar1;
  }
  return;
}



/* Entry: 106f1f898; end: 106f1f8ff; +[SCOrbisSnapInfo descriptor] */

void FUN_106f1f898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8490 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47930,
                        &PTR____CFConstantStringClassReference_110e8d5f8,&PTR_DAT_113193ad8,
                        &PTR_DAT_1131941f0,0xf,0x48,0x1c);
    puRam00000001136c8490 = puVar1;
  }
  return;
}



/* Entry: 106f1f900; end: 106f1f967; +[SCOrbisStory descriptor] */

void FUN_106f1f900(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8498 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47980,
                        &PTR____CFConstantStringClassReference_110e31138,&PTR_DAT_113193ad8,
                        &PTR_DAT_113194070,0xc,0x60,0x1c);
    puRam00000001136c8498 = puVar1;
  }
  return;
}



/* Entry: 106f1f968; end: 106f1f9cf; +[SCOrbisStoryPreview descriptor] */

void FUN_106f1f968(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b479d0,
                        &PTR____CFConstantStringClassReference_110e8d618,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193e90,7,0x30,0x1c);
    puRam00000001136c84a0 = puVar1;
  }
  return;
}



/* Entry: 106f1f9d0; end: 106f1fa37; +[SCOrbisGetPoiStoriesRequest descriptor] */

void FUN_106f1f9d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47d68,
                        &PTR____CFConstantStringClassReference_110e8d638,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193af0,1,0x10,0x1c);
    puRam00000001136c84a8 = puVar1;
  }
  return;
}



/* Entry: 106f1fa38; end: 106f1fabb; +[SCOrbisGetPoiStoriesRequest_PoiRequestData descriptor] */

undefined * FUN_106f1fa38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47d90,
                        &PTR____CFConstantStringClassReference_110e8d658,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193cd0,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001136c84b0 = puVar1;
  }
  return puRam00000001136c84b0;
}



/* Entry: 106f1fabc; end: 106f1fb23; +[SCOrbisGetPoiStoriesResponse descriptor] */

void FUN_106f1fabc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47db8,
                        &PTR____CFConstantStringClassReference_110e8d678,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193b10,1,0x10,0x1c);
    puRam00000001136c84b8 = puVar1;
  }
  return;
}



/* Entry: 106f1fb24; end: 106f1fba7; +[SCOrbisGetPoiStoriesResponse_PoiStory descriptor] */

undefined * FUN_106f1fb24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47de0,
                        &PTR____CFConstantStringClassReference_110e8d698,&PTR_DAT_113193ad8,
                        &PTR_s_story_113193b30,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001136c84c0 = puVar1;
  }
  return puRam00000001136c84c0;
}



/* Entry: 106f1fba8; end: 106f1fc0f; +[SCOrbisGetStoryPreviewsRequest descriptor] */

void FUN_106f1fba8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47ac0,
                        &PTR____CFConstantStringClassReference_110e8d6b8,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193df0,5,0x18,0x1c);
    puRam00000001136c84c8 = puVar1;
  }
  return;
}



/* Entry: 106f1fc10; end: 106f1fc77; +[SCOrbisGetStoryPreviewsResponse descriptor] */

void FUN_106f1fc10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47b10,
                        &PTR____CFConstantStringClassReference_110e8d6d8,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193bd0,2,0x18,0x1c);
    puRam00000001136c84d0 = puVar1;
  }
  return;
}



/* Entry: 106f1fc78; end: 106f1fcf3; +[SCOrbisGetStoryRequest descriptor] */

undefined * FUN_106f1fc78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47b60,
                        &PTR____CFConstantStringClassReference_110e8d6f8,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193f70,8,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c84d8 = puVar1;
  }
  return puRam00000001136c84d8;
}



/* Entry: 106f1fcf4; end: 106f1fd5b; +[SCOrbisGetStoryResponse descriptor] */

void FUN_106f1fcf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47bb0,
                        &PTR____CFConstantStringClassReference_110e8d718,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193c10,2,0x18,0x1c);
    puRam00000001136c84e0 = puVar1;
  }
  return;
}



/* Entry: 106f1fd5c; end: 106f1fdc3; +[SCOrbisGetMultiOrbisStoryRequest descriptor] */

void FUN_106f1fd5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47c00,
                        &PTR____CFConstantStringClassReference_110e8d738,&PTR_DAT_113193ad8,0,0,4,
                        0x1c);
    puRam00000001136c84e8 = puVar1;
  }
  return;
}



/* Entry: 106f1fdc4; end: 106f1fe2b; +[SCOrbisGetMultiOrbisStoryResponse descriptor] */

void FUN_106f1fdc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47c50,
                        &PTR____CFConstantStringClassReference_110e8d758,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193b50,1,0x10,0x1c);
    puRam00000001136c84f0 = puVar1;
  }
  return;
}



/* Entry: 106f1fe2c; end: 106f1fe93; +[SCOrbisGetVenueStoriesRequest descriptor] */

void FUN_106f1fe2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c84f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47ca0,
                        &PTR____CFConstantStringClassReference_110e8d778,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193c50,2,0x10,0x1c);
    puRam00000001136c84f8 = puVar1;
  }
  return;
}



/* Entry: 106f1fe94; end: 106f1fefb; +[SCOrbisGetVenueStoriesResponse descriptor] */

void FUN_106f1fe94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8500 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47cf0,
                        &PTR____CFConstantStringClassReference_110e8d798,&PTR_DAT_113193ad8,
                        &PTR_DAT_113193b70,1,0x10,0x1c);
    puRam00000001136c8500 = puVar1;
  }
  return;
}



/* Entry: 106f1fefc; end: 106f1ff63; +[SCOrbisKeyValue descriptor] */

void FUN_106f1fefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8508 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47d40,
                        &PTR____CFConstantStringClassReference_110e8d7b8,&PTR_DAT_113193ad8,
                        &PTR_s_key_113193c90,2,0x18,0x1c);
    puRam00000001136c8508 = puVar1;
  }
  return;
}



/* Entry: 106f1ff64; end: 106f1ffcb; +[KeyValue descriptor] */

void FUN_106f1ff64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8510 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47e80,
                        &PTR____CFConstantStringClassReference_110e8d7b8,&PTR_DAT_1131943d0,
                        &PTR_s_key_1131943e8,2,0x18,0x1c);
    puRam00000001136c8510 = puVar1;
  }
  return;
}



/* Entry: 106f1ffcc; end: 106f20047; +[SCS2BitmojiUserInfo descriptor] */

undefined * FUN_106f1ffcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47f20,
                        &PTR____CFConstantStringClassReference_110e8d7d8,&PTR_DAT_113194428,
                        &PTR_s_avatarId_113194440,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8518 = puVar1;
  }
  return puRam00000001136c8518;
}



/* Entry: 106f20048; end: 106f2013f; +[SCS2CompositeId descriptor] */

void FUN_106f20048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b47fc0,
                        &PTR____CFConstantStringClassReference_110e8d7f8,&PTR_DAT_113194500,
                        &PTR_DAT_113194518,3,0x18,0x1c);
    puRam00000001136c8520 = puVar1;
  }
  return;
}



/* Entry: 106f20140; end: 106f2014b;  */

bool FUN_106f20140(uint param_1)

{
  return param_1 < 0x29;
}



/* Entry: 106f2014c; end: 106f201c7;  */

undefined * FUN_106f2014c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c8530 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e8d838,
                        &UNK_10de18a64,&UNK_10de18a88,3,FUN_106f201c8,0);
    do {
      if (puRam00000001136c8530 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c8530;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c8530,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c8530 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c8530;
}



/* Entry: 106f201c8; end: 106f201d3;  */

bool FUN_106f201c8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f201d4; end: 106f2024f; +[SCS2LensThumbnailSequence descriptor] */

undefined * FUN_106f201d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b480b0,
                        &PTR____CFConstantStringClassReference_110e8d858,&PTR_DAT_113194588,
                        &PTR_DAT_113194660,3,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8538 = puVar1;
  }
  return puRam00000001136c8538;
}



/* Entry: 106f20250; end: 106f202cb; +[SCS2LensLensMetadata descriptor] */

undefined * FUN_106f20250(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48100,
                        &PTR____CFConstantStringClassReference_110dffdd8,&PTR_DAT_113194588,
                        &PTR_s_lensId_1131948a0,0xc,0x60,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8540 = puVar1;
  }
  return puRam00000001136c8540;
}



/* Entry: 106f202cc; end: 106f20333; +[SCS2LensUserInfo descriptor] */

void FUN_106f202cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48150,
                        &PTR____CFConstantStringClassReference_110e00738,&PTR_DAT_113194588,
                        &PTR_s_countryCode_113194620,2,0x18,0x1c);
    puRam00000001136c8548 = puVar1;
  }
  return;
}



/* Entry: 106f20334; end: 106f203bf; +[SCS2LensSearchByUserQuery descriptor] */

undefined * FUN_106f20334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b481a0,
                        &PTR____CFConstantStringClassReference_110e8d878,&PTR_DAT_113194588,
                        &PTR_s_userId_1131946c0,3,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c8550 = puVar1;
  }
  return puRam00000001136c8550;
}



/* Entry: 106f203c0; end: 106f20427; +[SCS2LensSearchByTextMatch descriptor] */

void FUN_106f203c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b481f0,
                        &PTR____CFConstantStringClassReference_110e8d898,&PTR_DAT_113194588,
                        &PTR_DAT_1131945a0,1,0x10,0x1c);
    puRam00000001136c8558 = puVar1;
  }
  return;
}



/* Entry: 106f20428; end: 106f2048f; +[SCS2LensSearchByTopLenses descriptor] */

void FUN_106f20428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48240,
                        &PTR____CFConstantStringClassReference_110e8d8b8,&PTR_DAT_113194588,
                        &PTR_DAT_1131945c0,1,4,0x1c);
    puRam00000001136c8560 = puVar1;
  }
  return;
}



/* Entry: 106f20490; end: 106f2051b; +[SCS2LensSearchRequest descriptor] */

undefined * FUN_106f20490(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48290,
                        &PTR____CFConstantStringClassReference_110dec378,&PTR_DAT_113194588,
                        &PTR_s_user_113194780,9,0x30,0x1c);
    func_0x00010c229040();
    puRam00000001136c8568 = puVar1;
  }
  return puRam00000001136c8568;
}



/* Entry: 106f2051c; end: 106f20583; +[SCS2LensSearchResponse descriptor] */

void FUN_106f2051c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b482e0,
                        &PTR____CFConstantStringClassReference_110dec398,&PTR_DAT_113194588,
                        &PTR_DAT_113194720,3,0x10,0x1c);
    puRam00000001136c8570 = puVar1;
  }
  return;
}



/* Entry: 106f20584; end: 106f205eb; +[SCS2LensDocumentRequest descriptor] */

void FUN_106f20584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48330,
                        &PTR____CFConstantStringClassReference_110e8d8d8,&PTR_DAT_113194588,
                        &PTR_DAT_1131945e0,1,0x10,0x1c);
    puRam00000001136c8578 = puVar1;
  }
  return;
}



/* Entry: 106f205ec; end: 106f20653; +[SCS2LensDocumentResponse descriptor] */

void FUN_106f205ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48380,
                        &PTR____CFConstantStringClassReference_110e8d8f8,&PTR_DAT_113194588,
                        &PTR_DAT_113194600,1,0x10,0x1c);
    puRam00000001136c8580 = puVar1;
  }
  return;
}



/* Entry: 106f20654; end: 106f206bb; +[SCS2StorySummaryInfo descriptor] */

void FUN_106f20654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48420,
                        &PTR____CFConstantStringClassReference_110e8d918,&PTR_DAT_113194a20,
                        &PTR_DAT_113194a38,3,0x10,0x1c);
    puRam00000001136c8588 = puVar1;
  }
  return;
}



/* Entry: 106f206bc; end: 106f20737; +[SCS2StorySummaryInfo_ThumbnailContentObjectInfo descriptor] */

undefined * FUN_106f206bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48470,
                        &PTR____CFConstantStringClassReference_110e8d938,&PTR_DAT_113194a20,
                        &PTR_s_key_113194a98,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001136c8590 = puVar1;
  }
  return puRam00000001136c8590;
}



/* Entry: 106f20738; end: 106f2083f; +[SCS2StorySummaryInfo_ThumbnailInfo descriptor] */

undefined * FUN_106f20738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b484c0,
                        &PTR____CFConstantStringClassReference_110e8d958,&PTR_DAT_113194a20,
                        &PTR_s_key_113194af8,4,0x28,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112b48420);
    puRam00000001136c8598 = puVar1;
  }
  return puRam00000001136c8598;
}



/* Entry: 106f20840; end: 106f2084b;  */

bool FUN_106f20840(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 106f2084c; end: 106f208d7; +[HappeningNow descriptor] */

undefined * FUN_106f2084c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48560,
                        &PTR____CFConstantStringClassReference_110e8cfd8,&PTR_DAT_113194b80,
                        &PTR_DAT_113194bb8,4,0x20,0x1c);
    func_0x00010c229040();
    puRam00000001136c85a8 = puVar1;
  }
  return puRam00000001136c85a8;
}



/* Entry: 106f208d8; end: 106f2093f; +[HappeningNowWeather descriptor] */

void FUN_106f208d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b485b0,
                        &PTR____CFConstantStringClassReference_110e8d998,&PTR_DAT_113194b80,0,0,4,
                        0x1c);
    puRam00000001136c85b0 = puVar1;
  }
  return;
}



/* Entry: 106f20940; end: 106f209bb; +[HappeningNowHoroscope descriptor] */

undefined * FUN_106f20940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48600,
                        &PTR____CFConstantStringClassReference_110e8d9b8,&PTR_DAT_113194b80,
                        &PTR_DAT_113194b98,1,8,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c85b8 = puVar1;
  }
  return puRam00000001136c85b8;
}



/* Entry: 106f209bc; end: 106f20a9f; +[SCFEEDCompositeStoryId descriptor] */

void FUN_106f209bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b486a0,
                        &PTR____CFConstantStringClassReference_110e8d9d8,&PTR_s_feed_core_113194c38,
                        &PTR_DAT_113194c50,3,0x18,0x1c);
    puRam00000001136c85c0 = puVar1;
  }
  return;
}



/* Entry: 106f20aa0; end: 106f20aab;  */

bool FUN_106f20aa0(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 106f20aac; end: 106f20b47; +[SCActivityCenterPbItem descriptor] */

undefined * FUN_106f20aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48740,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_113194cb8,
                        &PTR_s_id_p_113194cd0,0x12,0x88,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10de18c18);
    puRam00000001136c85d0 = puVar1;
  }
  return puRam00000001136c85d0;
}



/* Entry: 106f20b48; end: 106f20bd3; +[SCActivityCenterPbTapAction descriptor] */

undefined * FUN_106f20b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b487e0,
                        &PTR____CFConstantStringClassReference_110e8da18,&PTR_DAT_113194f18,
                        &PTR_DAT_113194f70,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001136c85d8 = puVar1;
  }
  return puRam00000001136c85d8;
}



/* Entry: 106f20bd4; end: 106f20c3b; +[SCActivityCenterPbNoAction descriptor] */

void FUN_106f20bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48830,
                        &PTR____CFConstantStringClassReference_110e8da38,&PTR_DAT_113194f18,0,0,4,
                        0x1c);
    puRam00000001136c85e0 = puVar1;
  }
  return;
}



/* Entry: 106f20c3c; end: 106f20ca3; +[SCActivityCenterPbOpenFriendProfile descriptor] */

void FUN_106f20c3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48880,
                        &PTR____CFConstantStringClassReference_110e8da58,&PTR_DAT_113194f18,0,0,4,
                        0x1c);
    puRam00000001136c85e8 = puVar1;
  }
  return;
}



/* Entry: 106f20ca4; end: 106f20d0b; +[SCActivityCenterPbOpenChat descriptor] */

void FUN_106f20ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b488d0,
                        &PTR____CFConstantStringClassReference_110e8da78,&PTR_DAT_113194f18,0,0,4,
                        0x1c);
    puRam00000001136c85f0 = puVar1;
  }
  return;
}



/* Entry: 106f20d0c; end: 106f20d73; +[SCActivityCenterPbOpenMap descriptor] */

void FUN_106f20d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c85f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48920,
                        &PTR____CFConstantStringClassReference_110e8da98,&PTR_DAT_113194f18,0,0,4,
                        0x1c);
    puRam00000001136c85f8 = puVar1;
  }
  return;
}



/* Entry: 106f20d74; end: 106f20ddb; +[SCActivityCenterPbOpenBirthdayLens descriptor] */

void FUN_106f20d74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48970,
                        &PTR____CFConstantStringClassReference_110e8dab8,&PTR_DAT_113194f18,
                        &PTR_s_lensId_113194f30,1,0x10,0x1c);
    puRam00000001136c8600 = puVar1;
  }
  return;
}



/* Entry: 106f20ddc; end: 106f20ebf; +[SCActivityCenterPbOpenDeeplink descriptor] */

void FUN_106f20ddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b489c0,
                        &PTR____CFConstantStringClassReference_110e8dad8,&PTR_DAT_113194f18,
                        &PTR_s_deeplink_113194f50,1,0x10,0x1c);
    puRam00000001136c8608 = puVar1;
  }
  return;
}



/* Entry: 106f20ec0; end: 106f20ecb;  */

bool FUN_106f20ec0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 106f20ecc; end: 106f20f67; +[SCActivityCenterPbItemThumbnail descriptor] */

undefined * FUN_106f20ecc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48a60,
                        &PTR____CFConstantStringClassReference_110e8db18,&PTR_DAT_113195038,
                        &PTR_DAT_113195190,5,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10de18c54);
    puRam00000001136c8618 = puVar1;
  }
  return puRam00000001136c8618;
}



/* Entry: 106f20f68; end: 106f20fcf; +[SCActivityCenterPbActionmoji descriptor] */

void FUN_106f20f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48ab0,
                        &PTR____CFConstantStringClassReference_110e8db38,&PTR_DAT_113195038,
                        &PTR_s_avatarId_1131950d0,3,0x18,0x1c);
    puRam00000001136c8620 = puVar1;
  }
  return;
}



/* Entry: 106f20fd0; end: 106f21037; +[SCActivityCenterPbFriendmoji descriptor] */

void FUN_106f20fd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48b00,
                        &PTR____CFConstantStringClassReference_110dc5a18,&PTR_DAT_113195038,
                        &PTR_DAT_113195130,3,0x20,0x1c);
    puRam00000001136c8628 = puVar1;
  }
  return;
}



/* Entry: 106f21038; end: 106f2109f; +[SCActivityCenterPbAvatar descriptor] */

void FUN_106f21038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48b50,
                        &PTR____CFConstantStringClassReference_110de2218,&PTR_DAT_113195038,
                        &PTR_s_avatarId_113195050,2,0x18,0x1c);
    puRam00000001136c8630 = puVar1;
  }
  return;
}



/* Entry: 106f210a0; end: 106f2111b; +[SCActivityCenterPbLens descriptor] */

undefined * FUN_106f210a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48ba0,
                        &PTR____CFConstantStringClassReference_110dcb5d8,&PTR_DAT_113195038,
                        &PTR_s_lensId_113195090,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8638 = puVar1;
  }
  return puRam00000001136c8638;
}



/* Entry: 106f2111c; end: 106f21197; +[LensBadgeContent descriptor] */

undefined * FUN_106f2111c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c8640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b48c40,
                        &PTR____CFConstantStringClassReference_110e8db58,&PTR_DAT_113195230,
                        &PTR_DAT_113195248,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001136c8640 = puVar1;
  }
  return puRam00000001136c8640;
}



/* Entry: 106f21198; end: 106f2126b; -[SCSnapRendererExternalStreamHandler initWithExternalStreamProvider:assertPerformer:] */

undefined1 *
FUN_106f21198(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f7d18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f2126c; end: 106f2126f; -[SCSnapRendererExternalStreamHandler reset] */

void FUN_106f2126c(void)

{
  return;
}



/* Entry: 106f21270; end: 106f21327; -[SCSnapRendererExternalStreamHandler setupStreamServiceWithConfig:] */

void FUN_106f21270(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bf0ae40(uVar4);
  lVar1 = param_3;
  func_0x00010c13b340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 != 0) && (lVar3 = lVar1, func_0x00010bf529e0(), lVar3 != 0)) {
    _objc_retain(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x20) = lVar1;
    _objc_release(uVar4);
    _objc_retain(lVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2;
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f21328; end: 106f214bf; -[SCSnapRendererExternalStreamHandler addExternalStreamsWithExistingLensId:resourceIds:error:] */

void FUN_106f21328(long param_1,undefined8 param_2,long param_3,undefined **param_4,
                  undefined **param_5)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar15;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined **ppuStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined8 ***pppuStack_470;
  code *pcStack_468;
  undefined *puStack_460;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined *apuStack_418 [16];
  long lStack_398;
  undefined **ppuStack_390;
  long lStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined1 ***pppuStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  long lStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  undefined *apuStack_2f0 [16];
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined **ppuStack_250;
  undefined **ppuStack_248;
  long lStack_240;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *apuStack_d8 [16];
  long lStack_58;
  
  ppuVar14 = &puStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  ppuVar11 = *(undefined ***)(param_1 + 0x28);
  lVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)lVar1 == 0) {
LAB_106f21444:
    ppuVar14 = ppuVar11;
    if (param_5 != (undefined **)0x0) {
      ppuVar14 = &PTR____CFConstantStringClassReference_110e8db78;
      ppuVar13 = &PTR____CFConstantStringClassReference_110e8db98;
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_5 = puVar9;
    }
  }
  else {
    unaff_x23 = param_4;
    func_0x00010bf529e0();
    ppuVar2 = *(undefined ***)(param_1 + 0x20);
    func_0x00010bf529e0();
    if (unaff_x23 != ppuVar2) goto LAB_106f21444;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    uStack_108 = 0;
    puStack_110 = (undefined8 *)0x0;
    _objc_retain(param_4);
    ppuVar13 = apuStack_d8;
    ppuVar11 = param_4;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      unaff_x23 = (undefined **)*puStack_110;
      do {
        unaff_x24 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_110 != unaff_x23) {
            _objc_enumerationMutation(param_4);
          }
          func_0x00010bdc6b40(param_1,param_2,*(undefined8 *)(lStack_118 + (long)unaff_x24 * 8),
                              param_3);
          unaff_x24 = (undefined **)((long)unaff_x24 + 1);
        } while (ppuVar11 != unaff_x24);
        ppuVar13 = apuStack_d8;
        ppuVar11 = param_4;
        ppuVar14 = &puStack_120;
        func_0x00010bf52a60();
        param_5 = (undefined **)0x0;
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release(param_4);
  }
  _objc_release(param_4);
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_106f214c0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar11 = ppuVar14;
  ppuVar2 = ppuVar13;
  ppuStack_160 = unaff_x24;
  ppuStack_158 = unaff_x23;
  ppuStack_150 = param_5;
  lStack_148 = param_1;
  ppuStack_140 = param_4;
  lStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar14);
  func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0x10));
  lVar3 = *(long *)(lVar1 + 0x28);
  func_0x00010c08fa60();
  if (lVar3 == 0) {
LAB_106f215cc:
    ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (ppuVar13 != (undefined **)0x0) {
      uStack_198 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_180 = &PTR____CFConstantStringClassReference_110e8dbb8;
      ppuStack_190 = &PTR____CFConstantStringClassReference_110dd51f8;
      lVar3 = *(long *)(lVar1 + 0x28);
      func_0x00010c08fa60();
      ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar3 == 0) {
        ppuStack_178 = &PTR____CFConstantStringClassReference_110e8dbd8;
      }
      else {
        ppuStack_178 = *(undefined ***)(lVar1 + 0x28);
      }
      ppuStack_188 = &PTR____CFConstantStringClassReference_110e8dbf8;
      ppuVar11 = ppuVar14;
      func_0x00010bf529e0(ppuVar14);
      func_0x00010c0df840(ppuVar5,param_2,ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_170 = ppuVar5;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_180,&uStack_198
                          ,3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e8db78;
      ppuVar2 = (undefined **)0x12;
      puVar9 = (undefined *)ppuVar12;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *ppuVar13 = puVar9;
      _objc_release(unaff_x23);
LAB_106f216ac:
      _objc_release(ppuVar5);
      param_5 = ppuVar12;
    }
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x00010bf529e0();
    if ((lVar3 == 0) || (ppuVar12 = ppuVar14, func_0x00010bf529e0(), ppuVar12 == (undefined **)0x0))
    goto LAB_106f215cc;
    ppuVar12 = ppuVar14;
    func_0x00010bf529e0();
    ppuVar4 = *(undefined ***)(lVar1 + 0x18);
    func_0x00010bf529e0();
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    param_5 = ppuVar12;
    if (ppuVar12 != ppuVar4) {
      if (ppuVar13 == (undefined **)0x0) goto LAB_106f216b0;
      uStack_1c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_1b0 = &PTR____CFConstantStringClassReference_110e8dc18;
      ppuStack_1c0 = &PTR____CFConstantStringClassReference_110e8dc38;
      ppuVar11 = ppuVar14;
      func_0x00010bf529e0(ppuVar14);
      func_0x00010c0df840(ppuVar5,param_2,ppuVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_1b8 = &PTR____CFConstantStringClassReference_110e8dc58;
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      ppuStack_1a8 = ppuVar5;
      func_0x00010bf529e0(uVar6);
      func_0x00010c0df840(puVar7,param_2,uVar6);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_1a0 = puVar7;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1b0,&uStack_1c8
                          ,3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = &PTR____CFConstantStringClassReference_110e8db78;
      ppuVar2 = (undefined **)0x9;
      puVar8 = puVar9;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *ppuVar13 = puVar8;
      _objc_release(unaff_x24);
      _objc_release(puVar7);
      ppuVar12 = (undefined **)puVar9;
      unaff_x23 = ppuVar5;
      goto LAB_106f216ac;
    }
    lVar3 = *(long *)(lVar1 + 0x18);
    func_0x00010bf529e0();
    if (lVar3 != 0) {
      ppuVar5 = *(undefined ***)(lVar1 + 0x18);
      func_0x00010bf51e00();
      ppuVar13 = ppuVar5;
      func_0x00010bf529e0();
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar13 = (undefined **)0x0;
        do {
          ppuVar12 = ppuVar5;
          func_0x00010c0dfd40(ppuVar5,param_2,ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar14;
          func_0x00010c0dfd40(ppuVar14,param_2,ppuVar13);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuVar11 = unaff_x23;
          func_0x00010c288780(ppuVar12);
          _objc_release(ppuVar12);
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
          ppuVar4 = ppuVar5;
          func_0x00010bf529e0();
        } while (ppuVar13 < ppuVar4);
      }
      goto LAB_106f216ac;
    }
  }
LAB_106f216b0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  ppuVar13 = &puStack_350;
  pcStack_1d8 = FUN_106f217e0;
  lStack_240 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = ppuVar11;
  ppuVar12 = ppuVar2;
  ppuStack_1e0 = &puStack_130;
  _objc_retain(ppuVar11);
  func_0x00010bf0ae40(ppuVar14[2]);
  puVar9 = ppuVar14[5];
  func_0x00010c08fa60();
  if (puVar9 == (undefined *)0x0) {
LAB_106f21a28:
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (ppuVar2 == (undefined **)0x0) goto LAB_106f21b0c;
    uStack_270 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_258 = &PTR____CFConstantStringClassReference_110e8dbb8;
    ppuStack_268 = &PTR____CFConstantStringClassReference_110dd51f8;
    puVar9 = ppuVar14[5];
    func_0x00010c08fa60();
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar9 == (undefined *)0x0) {
      ppuStack_250 = &PTR____CFConstantStringClassReference_110e8dbd8;
    }
    else {
      ppuStack_250 = (undefined **)ppuVar14[5];
    }
    ppuStack_260 = &PTR____CFConstantStringClassReference_110e8dbf8;
    ppuVar13 = ppuVar11;
    func_0x00010bf529e0(ppuVar11);
    func_0x00010c0df840(ppuVar10,param_2,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    param_5 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_248 = ppuVar10;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_258,&uStack_270,3
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar13 = &PTR____CFConstantStringClassReference_110e8db78;
    ppuVar12 = (undefined **)0x12;
    puVar9 = (undefined *)ppuVar4;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *ppuVar2 = puVar9;
  }
  else {
    puVar9 = ppuVar14[4];
    func_0x00010bf529e0();
    if ((puVar9 == (undefined *)0x0) ||
       (ppuVar4 = ppuVar11, func_0x00010bf529e0(), ppuVar4 == (undefined **)0x0))
    goto LAB_106f21a28;
    puVar9 = ppuVar14[3];
    func_0x00010bf529e0();
    if (puVar9 == (undefined *)0x0) goto LAB_106f21b0c;
    ppuVar10 = (undefined **)ppuVar14[3];
    func_0x00010bf51e00();
    param_5 = ppuVar11;
    func_0x00010c0d3c80();
    lStack_348 = 0;
    puStack_350 = (undefined *)0x0;
    uStack_338 = 0;
    plStack_340 = (long *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    _objc_retain(ppuVar10);
    ppuVar12 = apuStack_2f0;
    ppuVar14 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar14 != (undefined **)0x0) {
      unaff_x27 = *plStack_340;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if (*plStack_340 != unaff_x27) {
            _objc_enumerationMutation(ppuVar10);
          }
          uVar15 = *(undefined8 *)(lStack_348 + (long)unaff_x28 * 8);
          uVar6 = uVar15;
          func_0x00010c13b320(uVar15);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = param_5;
          func_0x00010c0e00e0(param_5,param_2,uVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar6);
          if (unaff_x24 != (undefined **)0x0) {
            func_0x00010c288780(uVar15,param_2,unaff_x24);
            func_0x00010c13b320(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(param_5,param_2,uVar15);
            _objc_release(uVar15);
          }
          _objc_release(unaff_x24);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar14 != unaff_x28);
        ppuVar12 = apuStack_2f0;
        ppuVar14 = ppuVar10;
        ppuVar13 = &puStack_350;
        func_0x00010bf52a60();
        unaff_x23 = (undefined **)0x0;
      } while (ppuVar14 != (undefined **)0x0);
    }
    _objc_release(ppuVar10);
    ppuVar14 = param_5;
    func_0x00010bf529e0();
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar4 = unaff_x23;
    if ((ppuVar2 != (undefined **)0x0) && (ppuVar14 != (undefined **)0x0)) {
      uStack_310 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_308 = &PTR____CFConstantStringClassReference_110e8dc98;
      ppuStack_300 = &PTR____CFConstantStringClassReference_110e8dc78;
      unaff_x24 = param_5;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_2f8 = unaff_x24;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_300,&uStack_310
                          ,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = &PTR____CFConstantStringClassReference_110e8db78;
      ppuVar12 = (undefined **)0x1c;
      puVar8 = puVar9;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *ppuVar2 = puVar8;
      _objc_release(puVar7);
      _objc_release(unaff_x24);
      ppuVar4 = (undefined **)puVar9;
    }
  }
  _objc_release(param_5);
  _objc_release(ppuVar10);
  ppuVar5 = ppuVar13;
  ppuVar14 = ppuVar10;
  unaff_x23 = ppuVar4;
LAB_106f21b0c:
  ppuVar13 = ppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_240) {
    return;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_460;
  pcStack_358 = FUN_106f21b50;
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_390 = unaff_x28;
  lStack_388 = unaff_x27;
  ppuStack_380 = param_5;
  ppuStack_378 = ppuVar14;
  ppuStack_370 = ppuVar2;
  ppuStack_368 = ppuVar11;
  pppuStack_360 = &ppuStack_1e0;
  func_0x00010bf0ae40(ppuVar13[2]);
  puVar9 = ppuVar13[3];
  func_0x00010bf529e0();
  ppuVar11 = (undefined **)0x0;
  if (puVar9 != (undefined *)0x0) {
    ppuVar13 = (undefined **)ppuVar13[3];
    func_0x00010bf51e00();
    lStack_458 = 0;
    puStack_460 = (undefined *)0x0;
    uStack_448 = 0;
    puStack_450 = (undefined8 *)0x0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    _objc_retain();
    ppuVar12 = apuStack_418;
    ppuVar11 = ppuVar13;
    func_0x00010bf52a60();
    if (ppuVar11 != (undefined **)0x0) {
      ppuVar14 = (undefined **)*puStack_450;
      do {
        param_5 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_450 != ppuVar14) {
            _objc_enumerationMutation(ppuVar13);
          }
          func_0x00010bf39f80(*(undefined8 *)(lStack_458 + (long)param_5 * 8));
          param_5 = (undefined **)((long)param_5 + 1);
        } while (ppuVar11 != param_5);
        ppuVar12 = apuStack_418;
        ppuVar11 = ppuVar13;
        ppuVar4 = &puStack_460;
        func_0x00010bf52a60();
        ppuVar2 = (undefined **)0x0;
      } while (ppuVar11 != (undefined **)0x0);
    }
    _objc_release(ppuVar13);
    ppuVar11 = ppuVar13;
    _objc_release();
    ppuVar5 = ppuVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
    ___stack_chk_fail();
    pcStack_468 = FUN_106f21c64;
    ppuStack_4a0 = unaff_x24;
    ppuStack_498 = unaff_x23;
    ppuStack_490 = param_5;
    ppuStack_488 = ppuVar14;
    ppuStack_480 = ppuVar2;
    ppuStack_478 = ppuVar13;
    pppuStack_470 = &pppuStack_360;
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar12);
    ppuVar13 = ppuVar5;
    func_0x00010c08fa60();
    if ((ppuVar13 != (undefined **)0x0) &&
       (ppuVar13 = ppuVar12, func_0x00010c08fa60(), ppuVar13 != (undefined **)0x0)) {
      puVar9 = ppuVar11[3];
      puStack_4c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_4c0 = 0xc2000000;
      pcStack_4b8 = FUN_106f21da0;
      puStack_4b0 = &UNK_1109834f8;
      _objc_retain(ppuVar5);
      ppuStack_4a8 = ppuVar5;
      func_0x00010bfb2040(puVar9,param_2,&puStack_4c8);
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 == (undefined *)0x0) {
        puVar7 = PTR_PTR_1126d3348;
        _objc_alloc(PTR_PTR_1126d3348);
        func_0x00010c03f9a0();
        func_0x00010befa120(ppuVar11[3],param_2,puVar7);
        ppuVar11 = ppuVar11 + 1;
        _objc_loadWeakRetained(ppuVar11);
        ppuVar13 = ppuVar11;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199860();
        _objc_release(ppuVar13);
        _objc_release(ppuVar11);
        _objc_release(puVar7);
      }
      _objc_release(puVar9);
      _objc_release(ppuStack_4a8);
    }
    _objc_release(ppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
    return;
  }
  return;
}



/* Entry: 106f214c0; end: 106f217df; -[SCSnapRendererExternalStreamHandler configureExternalTextures:error:] */

void FUN_106f214c0(long param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined **unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar13;
  long unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined **ppuStack_388;
  undefined **ppuStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 *puStack_360;
  undefined **ppuStack_358;
  undefined1 ***pppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 auStack_2f8 [16];
  long lStack_278;
  undefined **ppuStack_270;
  long lStack_268;
  undefined **ppuStack_260;
  undefined **ppuStack_258;
  undefined8 *puStack_250;
  undefined **ppuStack_248;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined8 auStack_1d0 [16];
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  long lStack_120;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = param_3;
  puVar11 = param_4;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_106f215cc:
    ppuVar10 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_4 != (undefined8 *)0x0) {
      uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e8dbb8;
      ppuStack_70 = &PTR____CFConstantStringClassReference_110dd51f8;
      lVar1 = *(long *)(param_1 + 0x28);
      func_0x00010c08fa60();
      ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
      if (lVar1 == 0) {
        ppuStack_58 = &PTR____CFConstantStringClassReference_110e8dbd8;
      }
      else {
        ppuStack_58 = *(undefined ***)(param_1 + 0x28);
      }
      ppuStack_68 = &PTR____CFConstantStringClassReference_110e8dbf8;
      ppuVar4 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x00010c0df840(ppuVar3,param_2,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_50 = ppuVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,&uStack_78,3
                         );
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e8db78;
      puVar11 = (undefined8 *)0x12;
      puVar8 = (undefined *)ppuVar10;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar8;
      _objc_release(unaff_x23);
LAB_106f216ac:
      _objc_release(ppuVar3);
      unaff_x22 = ppuVar10;
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if ((lVar1 == 0) || (ppuVar10 = param_3, func_0x00010bf529e0(), ppuVar10 == (undefined **)0x0))
    goto LAB_106f215cc;
    ppuVar10 = param_3;
    func_0x00010bf529e0();
    ppuVar2 = *(undefined ***)(param_1 + 0x18);
    func_0x00010bf529e0();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    unaff_x22 = ppuVar10;
    if (ppuVar10 != ppuVar2) {
      if (param_4 == (undefined8 *)0x0) goto LAB_106f216b0;
      uStack_a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_90 = &PTR____CFConstantStringClassReference_110e8dc18;
      ppuStack_a0 = &PTR____CFConstantStringClassReference_110e8dc38;
      ppuVar4 = param_3;
      func_0x00010bf529e0(param_3);
      func_0x00010c0df840(ppuVar3,param_2,ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      ppuStack_98 = &PTR____CFConstantStringClassReference_110e8dc58;
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      ppuStack_88 = ppuVar3;
      func_0x00010bf529e0(uVar5);
      func_0x00010c0df840(puVar6,param_2,uVar5);
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_80 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_90,&uStack_a8,3
                         );
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &PTR____CFConstantStringClassReference_110e8db78;
      puVar11 = (undefined8 *)0x9;
      puVar7 = puVar8;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar7;
      _objc_release(unaff_x24);
      _objc_release(puVar6);
      ppuVar10 = (undefined **)puVar8;
      unaff_x23 = ppuVar3;
      goto LAB_106f216ac;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      ppuVar3 = *(undefined ***)(param_1 + 0x18);
      func_0x00010bf51e00();
      ppuVar2 = ppuVar3;
      func_0x00010bf529e0();
      if (ppuVar2 != (undefined **)0x0) {
        ppuVar2 = (undefined **)0x0;
        do {
          ppuVar10 = ppuVar3;
          func_0x00010c0dfd40(ppuVar3,param_2,ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = param_3;
          func_0x00010c0dfd40(param_3,param_2,ppuVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuVar4 = unaff_x23;
          func_0x00010c288780(ppuVar10);
          _objc_release(ppuVar10);
          ppuVar2 = (undefined **)((long)ppuVar2 + 1);
          ppuVar9 = ppuVar3;
          func_0x00010bf529e0();
        } while (ppuVar2 < ppuVar9);
      }
      goto LAB_106f216ac;
    }
  }
LAB_106f216b0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppuVar10 = &puStack_230;
  pcStack_b8 = FUN_106f217e0;
  lStack_120 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar4;
  puVar12 = puVar11;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  func_0x00010bf0ae40(param_3[2]);
  puVar8 = param_3[5];
  func_0x00010c08fa60();
  if (puVar8 == (undefined *)0x0) {
LAB_106f21a28:
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSError_1126ae858;
    if (puVar11 == (undefined8 *)0x0) goto LAB_106f21b0c;
    uStack_150 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_138 = &PTR____CFConstantStringClassReference_110e8dbb8;
    ppuStack_148 = &PTR____CFConstantStringClassReference_110dd51f8;
    puVar8 = param_3[5];
    func_0x00010c08fa60();
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (puVar8 == (undefined *)0x0) {
      ppuStack_130 = &PTR____CFConstantStringClassReference_110e8dbd8;
    }
    else {
      ppuStack_130 = (undefined **)param_3[5];
    }
    ppuStack_140 = &PTR____CFConstantStringClassReference_110e8dbf8;
    ppuVar10 = ppuVar4;
    func_0x00010bf529e0(ppuVar4);
    func_0x00010c0df840(ppuVar9,param_2,ppuVar10);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuStack_128 = ppuVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_138,&uStack_150,3
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = &PTR____CFConstantStringClassReference_110e8db78;
    puVar12 = (undefined8 *)0x12;
    puVar8 = (undefined *)ppuVar2;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *puVar11 = puVar8;
  }
  else {
    puVar8 = param_3[4];
    func_0x00010bf529e0();
    if ((puVar8 == (undefined *)0x0) ||
       (ppuVar2 = ppuVar4, func_0x00010bf529e0(), ppuVar2 == (undefined **)0x0)) goto LAB_106f21a28;
    puVar8 = param_3[3];
    func_0x00010bf529e0();
    if (puVar8 == (undefined *)0x0) goto LAB_106f21b0c;
    ppuVar9 = (undefined **)param_3[3];
    func_0x00010bf51e00();
    unaff_x22 = ppuVar4;
    func_0x00010c0d3c80();
    lStack_228 = 0;
    puStack_230 = (undefined *)0x0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    _objc_retain(ppuVar9);
    puVar12 = auStack_1d0;
    ppuVar3 = ppuVar9;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      unaff_x27 = *plStack_220;
      do {
        unaff_x28 = (undefined **)0x0;
        do {
          if (*plStack_220 != unaff_x27) {
            _objc_enumerationMutation(ppuVar9);
          }
          uVar13 = *(undefined8 *)(lStack_228 + (long)unaff_x28 * 8);
          uVar5 = uVar13;
          func_0x00010c13b320(uVar13);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x22;
          func_0x00010c0e00e0(unaff_x22,param_2,uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          if (unaff_x24 != (undefined **)0x0) {
            func_0x00010c288780(uVar13,param_2,unaff_x24);
            func_0x00010c13b320(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(unaff_x22,param_2,uVar13);
            _objc_release(uVar13);
          }
          _objc_release(unaff_x24);
          unaff_x28 = (undefined **)((long)unaff_x28 + 1);
        } while (ppuVar3 != unaff_x28);
        puVar12 = auStack_1d0;
        ppuVar3 = ppuVar9;
        ppuVar10 = &puStack_230;
        func_0x00010bf52a60();
        unaff_x23 = (undefined **)0x0;
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar9);
    ppuVar3 = unaff_x22;
    func_0x00010bf529e0();
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    ppuVar2 = unaff_x23;
    if ((puVar11 != (undefined8 *)0x0) && (ppuVar3 != (undefined **)0x0)) {
      uStack_1f0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_1e8 = &PTR____CFConstantStringClassReference_110e8dc98;
      ppuStack_1e0 = &PTR____CFConstantStringClassReference_110e8dc78;
      unaff_x24 = unaff_x22;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_1d8 = unaff_x24;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1e0,&uStack_1f0
                          ,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = &PTR____CFConstantStringClassReference_110e8db78;
      puVar12 = (undefined8 *)0x1c;
      puVar7 = puVar8;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar11 = puVar7;
      _objc_release(puVar6);
      _objc_release(unaff_x24);
      ppuVar2 = (undefined **)puVar8;
    }
  }
  _objc_release(unaff_x22);
  _objc_release(ppuVar9);
  ppuVar3 = ppuVar10;
  param_3 = ppuVar9;
  unaff_x23 = ppuVar2;
LAB_106f21b0c:
  ppuVar10 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_120) {
    return;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_340;
  pcStack_238 = FUN_106f21b50;
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = unaff_x28;
  lStack_268 = unaff_x27;
  ppuStack_260 = unaff_x22;
  ppuStack_258 = param_3;
  puStack_250 = puVar11;
  ppuStack_248 = ppuVar4;
  ppuStack_240 = &puStack_c0;
  func_0x00010bf0ae40(ppuVar10[2]);
  puVar8 = ppuVar10[3];
  func_0x00010bf529e0();
  ppuVar4 = (undefined **)0x0;
  if (puVar8 != (undefined *)0x0) {
    ppuVar10 = (undefined **)ppuVar10[3];
    func_0x00010bf51e00();
    lStack_338 = 0;
    puStack_340 = (undefined *)0x0;
    uStack_328 = 0;
    puStack_330 = (undefined8 *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    _objc_retain();
    puVar12 = auStack_2f8;
    ppuVar4 = ppuVar10;
    func_0x00010bf52a60();
    if (ppuVar4 != (undefined **)0x0) {
      param_3 = (undefined **)*puStack_330;
      do {
        unaff_x22 = (undefined **)0x0;
        do {
          if ((undefined **)*puStack_330 != param_3) {
            _objc_enumerationMutation(ppuVar10);
          }
          func_0x00010bf39f80(*(undefined8 *)(lStack_338 + (long)unaff_x22 * 8));
          unaff_x22 = (undefined **)((long)unaff_x22 + 1);
        } while (ppuVar4 != unaff_x22);
        puVar12 = auStack_2f8;
        ppuVar4 = ppuVar10;
        ppuVar2 = &puStack_340;
        func_0x00010bf52a60();
        puVar11 = (undefined8 *)0x0;
      } while (ppuVar4 != (undefined **)0x0);
    }
    _objc_release(ppuVar10);
    ppuVar4 = ppuVar10;
    _objc_release();
    ppuVar3 = ppuVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
    ___stack_chk_fail();
    pcStack_348 = FUN_106f21c64;
    ppuStack_380 = unaff_x24;
    ppuStack_378 = unaff_x23;
    ppuStack_370 = unaff_x22;
    ppuStack_368 = param_3;
    puStack_360 = puVar11;
    ppuStack_358 = ppuVar10;
    pppuStack_350 = &ppuStack_240;
    _objc_retain(ppuVar3);
    _objc_retain(puVar12);
    ppuVar10 = ppuVar3;
    func_0x00010c08fa60();
    if ((ppuVar10 != (undefined **)0x0) &&
       (puVar11 = puVar12, func_0x00010c08fa60(), puVar11 != (undefined8 *)0x0)) {
      puVar8 = ppuVar4[3];
      puStack_3a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_3a0 = 0xc2000000;
      pcStack_398 = FUN_106f21da0;
      puStack_390 = &UNK_1109834f8;
      _objc_retain(ppuVar3);
      ppuStack_388 = ppuVar3;
      func_0x00010bfb2040(puVar8,param_2,&puStack_3a8);
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 == (undefined *)0x0) {
        puVar6 = PTR_PTR_1126d3348;
        _objc_alloc(PTR_PTR_1126d3348);
        func_0x00010c03f9a0();
        func_0x00010befa120(ppuVar4[3],param_2,puVar6);
        ppuVar4 = ppuVar4 + 1;
        _objc_loadWeakRetained(ppuVar4);
        ppuVar10 = ppuVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c199860();
        _objc_release(ppuVar10);
        _objc_release(ppuVar4);
        _objc_release(puVar6);
      }
      _objc_release(puVar8);
      _objc_release(ppuStack_388);
    }
    _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar3);
    return;
  }
  return;
}



/* Entry: 106f217e0; end: 106f21b4f; -[SCSnapRendererExternalStreamHandler configureExternalTexturesByResourceId:error:] */

void FUN_106f217e0(undefined *param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined **unaff_x22;
  undefined *unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar13;
  long unaff_x27;
  undefined *unaff_x28;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined **ppuStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  long lStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 auStack_248 [16];
  long lStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined **ppuStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 auStack_120 [16];
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  ppuVar9 = &puStack_180;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar5 = param_3;
  puVar12 = param_4;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
LAB_106f21a28:
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_4 == (undefined8 *)0x0) goto LAB_106f21b0c;
    uStack_a0 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110e8dbb8;
    ppuStack_98 = &PTR____CFConstantStringClassReference_110dd51f8;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c08fa60();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (lVar1 == 0) {
      ppuStack_80 = &PTR____CFConstantStringClassReference_110e8dbd8;
    }
    else {
      ppuStack_80 = *(undefined ***)(param_1 + 0x28);
    }
    ppuStack_90 = &PTR____CFConstantStringClassReference_110e8dbf8;
    ppuVar9 = param_3;
    func_0x00010bf529e0(param_3);
    func_0x00010c0df840(puVar3,param_2,ppuVar9);
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_78 = puVar3;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_88,&uStack_a0,3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = &PTR____CFConstantStringClassReference_110e8db78;
    puVar12 = (undefined8 *)0x12;
    puVar7 = puVar8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar7;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    if ((lVar1 == 0) || (ppuVar2 = param_3, func_0x00010bf529e0(), ppuVar2 == (undefined **)0x0))
    goto LAB_106f21a28;
    lVar1 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    if (lVar1 == 0) goto LAB_106f21b0c;
    puVar3 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf51e00();
    unaff_x22 = param_3;
    func_0x00010c0d3c80();
    lStack_178 = 0;
    puStack_180 = (undefined *)0x0;
    uStack_168 = 0;
    plStack_170 = (long *)0x0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    _objc_retain(puVar3);
    puVar12 = auStack_120;
    puVar8 = puVar3;
    func_0x00010bf52a60();
    if (puVar8 != (undefined *)0x0) {
      unaff_x27 = *plStack_170;
      do {
        unaff_x28 = (undefined *)0x0;
        do {
          if (*plStack_170 != unaff_x27) {
            _objc_enumerationMutation(puVar3);
          }
          uVar13 = *(undefined8 *)(lStack_178 + (long)unaff_x28 * 8);
          uVar4 = uVar13;
          func_0x00010c13b320(uVar13);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x22;
          func_0x00010c0e00e0(unaff_x22,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          if (unaff_x24 != (undefined **)0x0) {
            func_0x00010c288780(uVar13,param_2,unaff_x24);
            func_0x00010c13b320(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12d3e0(unaff_x22,param_2,uVar13);
            _objc_release(uVar13);
          }
          _objc_release(unaff_x24);
          unaff_x28 = unaff_x28 + 1;
        } while (puVar8 != unaff_x28);
        puVar12 = auStack_120;
        puVar8 = puVar3;
        ppuVar9 = &puStack_180;
        func_0x00010bf52a60();
        unaff_x23 = (undefined *)0x0;
      } while (puVar8 != (undefined *)0x0);
    }
    _objc_release(puVar3);
    ppuVar5 = unaff_x22;
    func_0x00010bf529e0();
    puVar7 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar8 = unaff_x23;
    if ((param_4 != (undefined8 *)0x0) && (ppuVar5 != (undefined **)0x0)) {
      uStack_140 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_138 = &PTR____CFConstantStringClassReference_110e8dc98;
      ppuStack_130 = &PTR____CFConstantStringClassReference_110e8dc78;
      unaff_x24 = unaff_x22;
      func_0x00010bf002e0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      ppuStack_128 = unaff_x24;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_130,&uStack_140
                          ,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = &PTR____CFConstantStringClassReference_110e8db78;
      puVar12 = (undefined8 *)0x1c;
      puVar6 = puVar7;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar6;
      _objc_release(puVar8);
      _objc_release(unaff_x24);
      puVar8 = puVar7;
    }
  }
  _objc_release(unaff_x22);
  _objc_release(puVar3);
  ppuVar5 = ppuVar9;
  param_1 = puVar3;
  unaff_x23 = puVar8;
LAB_106f21b0c:
  ppuVar9 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  ppuVar11 = &puStack_290;
  pcStack_188 = FUN_106f21b50;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1c0 = unaff_x28;
  lStack_1b8 = unaff_x27;
  ppuStack_1b0 = unaff_x22;
  puStack_1a8 = param_1;
  puStack_1a0 = param_4;
  ppuStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  func_0x00010bf0ae40(ppuVar9[2]);
  puVar8 = ppuVar9[3];
  func_0x00010bf529e0();
  ppuVar2 = (undefined **)0x0;
  if (puVar8 != (undefined *)0x0) {
    ppuVar9 = (undefined **)ppuVar9[3];
    func_0x00010bf51e00();
    lStack_288 = 0;
    puStack_290 = (undefined *)0x0;
    uStack_278 = 0;
    puStack_280 = (undefined8 *)0x0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    _objc_retain();
    puVar12 = auStack_248;
    ppuVar5 = ppuVar9;
    func_0x00010bf52a60();
    if (ppuVar5 != (undefined **)0x0) {
      param_1 = (undefined *)*puStack_280;
      do {
        unaff_x22 = (undefined **)0x0;
        do {
          if ((undefined *)*puStack_280 != param_1) {
            _objc_enumerationMutation(ppuVar9);
          }
          func_0x00010bf39f80(*(undefined8 *)(lStack_288 + (long)unaff_x22 * 8));
          unaff_x22 = (undefined **)((long)unaff_x22 + 1);
        } while (ppuVar5 != unaff_x22);
        puVar12 = auStack_248;
        ppuVar5 = ppuVar9;
        ppuVar11 = &puStack_290;
        func_0x00010bf52a60();
        param_4 = (undefined8 *)0x0;
      } while (ppuVar5 != (undefined **)0x0);
    }
    _objc_release(ppuVar9);
    ppuVar2 = ppuVar9;
    _objc_release();
    ppuVar5 = ppuVar11;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  pcStack_298 = FUN_106f21c64;
  ppuStack_2d0 = unaff_x24;
  puStack_2c8 = unaff_x23;
  ppuStack_2c0 = unaff_x22;
  puStack_2b8 = param_1;
  puStack_2b0 = param_4;
  ppuStack_2a8 = ppuVar9;
  ppuStack_2a0 = &puStack_190;
  _objc_retain(ppuVar5);
  _objc_retain(puVar12);
  ppuVar9 = ppuVar5;
  func_0x00010c08fa60();
  if ((ppuVar9 != (undefined **)0x0) &&
     (puVar10 = puVar12, func_0x00010c08fa60(), puVar10 != (undefined8 *)0x0)) {
    puVar8 = ppuVar2[3];
    puStack_2f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2f0 = 0xc2000000;
    pcStack_2e8 = FUN_106f21da0;
    puStack_2e0 = &UNK_1109834f8;
    _objc_retain(ppuVar5);
    ppuStack_2d8 = ppuVar5;
    func_0x00010bfb2040(puVar8,param_2,&puStack_2f8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar8 == (undefined *)0x0) {
      puVar3 = PTR_PTR_1126d3348;
      _objc_alloc(PTR_PTR_1126d3348);
      func_0x00010c03f9a0();
      func_0x00010befa120(ppuVar2[3],param_2,puVar3);
      ppuVar2 = ppuVar2 + 1;
      _objc_loadWeakRetained(ppuVar2);
      ppuVar9 = ppuVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199860();
      _objc_release(ppuVar9);
      _objc_release(ppuVar2);
      _objc_release(puVar3);
    }
    _objc_release(puVar8);
    _objc_release(ppuStack_2d8);
  }
  _objc_release(puVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar5);
  return;
}



/* Entry: 106f21b50; end: 106f21c63; -[SCSnapRendererExternalStreamHandler cleanUpExternalStreams] */

void FUN_106f21b50(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 *puStack_158;
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
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bf529e0();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf51e00();
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    _objc_retain();
    param_4 = auStack_c8;
    lVar1 = lVar2;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar6 = *plStack_100;
      do {
        lVar7 = 0;
        do {
          if (*plStack_100 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010bf39f80(*(undefined8 *)(lStack_108 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar1 != lVar7);
        param_4 = auStack_c8;
        lVar1 = lVar2;
        puVar5 = &uStack_110;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(lVar2);
    _objc_release();
    param_3 = (undefined1 *)puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = param_3;
  func_0x00010c08fa60();
  if ((puVar3 != (undefined1 *)0x0) &&
     (puVar3 = param_4, func_0x00010c08fa60(), puVar3 != (undefined1 *)0x0)) {
    lVar1 = *(long *)(lVar2 + 0x18);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_106f21da0;
    puStack_160 = &UNK_1109834f8;
    _objc_retain(param_3);
    puStack_158 = param_3;
    func_0x00010bfb2040(lVar1,param_2,&puStack_178);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      puVar4 = PTR_PTR_1126d3348;
      _objc_alloc(PTR_PTR_1126d3348);
      func_0x00010c03f9a0();
      func_0x00010befa120(*(undefined8 *)(lVar2 + 0x18),param_2,puVar4);
      lVar2 = lVar2 + 8;
      _objc_loadWeakRetained(lVar2);
      lVar6 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199860();
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(puVar4);
    }
    _objc_release(lVar1);
    _objc_release(puStack_158);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f21c64; end: 106f21d9f; -[SCSnapRendererExternalStreamHandler _addExternalStreamWithResourceId:lensId:] */

void FUN_106f21c64(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010c08fa60();
  if ((lVar3 != 0) && (lVar3 = param_4, func_0x00010c08fa60(), lVar3 != 0)) {
    lVar3 = *(long *)(param_1 + 0x18);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106f21da0;
    puStack_50 = &UNK_1109834f8;
    _objc_retain(param_3);
    lStack_48 = param_3;
    func_0x00010bfb2040(lVar3,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      puVar1 = PTR_PTR_1126d3348;
      _objc_alloc(PTR_PTR_1126d3348);
      func_0x00010c03f9a0();
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x18),param_2,puVar1);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c199860();
      _objc_release(lVar2);
      _objc_release(param_1);
      _objc_release(puVar1);
    }
    _objc_release(lVar3);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f21da0; end: 106f21de7;  */

undefined8 FUN_106f21da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c13b320(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 106f21de8; end: 106f21e37; -[SCSnapRendererExternalStreamHandler .cxx_destruct] */

void FUN_106f21de8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106f21e38; end: 106f21eaf; -[SCSnapRendererExternalStreamProvider initWithResourceId:] */

undefined1 * FUN_106f21e38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f7d20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f21eb0; end: 106f21ef3; -[SCSnapRendererExternalStreamProvider dealloc] */

void FUN_106f21eb0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bf39f80();
  puStack_28 = PTR_PTR_1126f7d20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106f21ef4; end: 106f21f1b; -[SCSnapRendererExternalStreamProvider resourceId] */

void FUN_106f21ef4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f21f1c; end: 106f21f93; -[SCSnapRendererExternalStreamProvider updatePixelBuffer:] */

void FUN_106f21f1c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    _CVPixelBufferRelease();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (param_3 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar1 = 0;
      _CMMemoryPoolCreate();
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
    func_0x0001090461f4();
    *(long *)(param_1 + 8) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 106f21f94; end: 106f21fe3; -[SCSnapRendererExternalStreamProvider currentCVPixelBufferRef] */

undefined8 FUN_106f21f94(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _CVPixelBufferRetain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x18);
  return uVar1;
}



/* Entry: 106f21fe4; end: 106f21fff; -[SCSnapRendererExternalStreamProvider preferredFrameTransformForReverseCamera] */

void FUN_106f21fe4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  uVar2 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar2;
  return;
}



/* Entry: 106f22000; end: 106f2206b; -[SCSnapRendererExternalStreamProvider cleanUp] */

void FUN_106f22000(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    _CVPixelBufferRelease();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _CMMemoryPoolFlush();
    _CMMemoryPoolInvalidate(*(undefined8 *)(param_1 + 0x10));
    _CFRelease(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 106f2206c; end: 106f22077; -[SCSnapRendererExternalStreamProvider .cxx_destruct] */

void FUN_106f2206c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 106f22078; end: 106f220eb; -[SCSampleBufferRef sc_copy] */

void FUN_106f22078(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = param_1;
  func_0x00010c1494c0();
  lVar2 = param_1;
  func_0x00010bde9a00(param_1,param_2,lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d3350;
    _objc_alloc(PTR_PTR_1126d3350);
    lVar1 = param_1;
    func_0x00010c07b320(param_1);
    func_0x00010c07bf20(param_1);
    func_0x00010c041380(puVar3,param_2,lVar2,lVar1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f220ec; end: 106f2230f; -[SCSampleBufferRef _copyCVPixelBuffer:] */

ulong FUN_106f220ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uStack_68;
  
  if (param_3 != 0) {
    uVar4 = param_3;
    _CVPixelBufferGetWidth(param_3);
    uVar12 = param_3;
    _CVPixelBufferGetHeight(param_3);
    uVar5 = param_3;
    _CVPixelBufferGetPixelFormatType(param_3);
    puVar3 = PTR__kCFTypeDictionaryValueCallBacks_11034ac20;
    puVar2 = PTR__kCFTypeDictionaryKeyCallBacks_11034ac18;
    uStack_68 = 0;
    uVar13 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
    uVar6 = uVar13;
    _CFDictionaryCreate(uVar13,0,0,0,PTR__kCFTypeDictionaryKeyCallBacks_11034ac18,
                        PTR__kCFTypeDictionaryValueCallBacks_11034ac20);
    uVar7 = uVar13;
    _CFDictionaryCreateMutable(uVar13,1,puVar2,puVar3);
    _CFDictionarySetValue();
    _CVPixelBufferCreate(uVar13,uVar4,uVar12,uVar5,uVar7,&uStack_68);
    if ((int)uVar13 == 0) {
      _CVPixelBufferLockBaseAddress(param_3,1);
      _CVPixelBufferLockBaseAddress(uStack_68,0);
      uVar4 = param_3;
      _CVPixelBufferGetPlaneCount();
      uVar12 = 0;
      if (uVar4 != 0) {
        uVar12 = 0;
        do {
          uVar8 = param_3;
          _CVPixelBufferGetHeightOfPlane(param_3,uVar12);
          uVar9 = param_3;
          _CVPixelBufferGetBytesPerRowOfPlane(param_3,uVar12);
          uVar5 = param_3;
          _CVPixelBufferGetBaseAddressOfPlane(param_3,uVar12);
          uVar10 = uStack_68;
          _CVPixelBufferGetBytesPerRowOfPlane(uStack_68,uVar12);
          uVar11 = uStack_68;
          _CVPixelBufferGetBaseAddressOfPlane(uStack_68,uVar12);
          if (uVar9 == uVar10) {
            _memcpy(uVar11,uVar5,uVar9 * uVar8);
          }
          else {
            uVar1 = uVar9;
            if (uVar10 <= uVar9) {
              uVar1 = uVar10;
            }
            for (; uVar8 != 0; uVar8 = uVar8 - 1) {
              _memcpy(uVar11,uVar5,uVar1);
              uVar5 = uVar5 + uVar9;
              uVar11 = uVar11 + uVar10;
            }
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar4);
        _CVPixelBufferUnlockBaseAddress(param_3,1);
        _CVPixelBufferUnlockBaseAddress(uStack_68,0);
        _CVBufferGetAttachments(param_3,1);
        if (param_3 != 0) {
          _CVBufferSetAttachments(uStack_68,param_3,1);
        }
        _CFRelease(uVar6);
        _CFRelease(uVar7);
        uVar12 = uStack_68;
      }
    }
    else {
      uVar12 = 0;
    }
    return uVar12;
  }
  return 0;
}



/* Entry: 106f22310; end: 106f223c3; -[SCSampleBufferRef _copyCMSampleBufferWithImageBuffer:] */

undefined8 FUN_106f22310(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [72];
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    lVar1 = param_3;
    _CMSampleBufferGetImageBuffer();
    uStack_38 = 0;
    if ((lVar1 != 0) && (func_0x00010bde9a20(), uStack_38 = 0, param_1 != 0)) {
      uStack_38 = 0;
      _CMSampleBufferGetSampleTimingInfo(param_3,0,auStack_80);
      uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_11034ab78;
      _CMSampleBufferGetFormatDescription(param_3);
      _CMSampleBufferCreateForImageBuffer(uVar2,param_1,1,0,0,param_3,auStack_80,&uStack_38);
      _CFRelease(param_1);
    }
    return uStack_38;
  }
  return 0;
}



/* Entry: 106f223c4; end: 106f224fb; -[SCSnapRendererLensContentPreparationFramesLoopStrategy initWithLoopFrequencyMs:timeoutSec:asyncTaskAnnouncer:performer:] */

undefined1 *
FUN_106f223c4(double param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f7d28;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = param_4;
    func_0x00010c067fc0();
    if (lVar2 < 0xb) {
      lVar2 = 10;
    }
    if (999 < lVar2) {
      lVar2 = 1000;
    }
    *(long *)((long)puVar1 + 8) = lVar2;
    func_0x00010bf885a0(param_5);
    dVar4 = 3.0;
    if (3.0 <= param_1) {
      dVar4 = param_1;
    }
    uVar5 = NEON_fminnm(dVar4,0x404e000000000000);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar5;
    _objc_retain(param_6);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar5);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106f224fc; end: 106f2262b; -[SCSnapRendererLensContentPreparationFramesLoopStrategy prepareLensContentForLensId:frameProcessingBlock:] */

void FUN_106f224fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x48) == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar3;
    _objc_release(uVar2);
    func_0x00010c19f420(param_1,param_2,param_4);
    func_0x00010bebf760(param_1);
    func_0x00010bec1c40(param_1);
    puVar3 = PTR_PTR_1126ae560;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined **)(param_1 + 0x40) = puVar3;
    _objc_release(uVar2);
    puVar3 = *(undefined **)(param_1 + 0x40);
    func_0x00010bfbc3e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e8dcb8,
                        &PTR____CFConstantStringClassReference_110e8dcf8,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae558;
    func_0x00010bfe9c80(PTR_PTR_1126ae558,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106f2262c; end: 106f2267f; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _reset] */

void FUN_106f2262c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bec3a00();
  func_0x00010bec2de0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  func_0x00010c19f420(param_1,param_2,0);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106f22680; end: 106f227a3; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _startTimer] */

void FUN_106f22680(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 8) * 1000000;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = 0;
  _dispatch_time(0,0);
  _dispatch_source_set_timer(uVar3,uVar1,lVar4,(long)((double)lVar4 * 0.1));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106f227a4;
  puStack_48 = &UNK_1108434b0;
  _objc_copyWeak(auStack_40,auStack_38);
  _dispatch_source_set_event_handler(uVar1,&puStack_60);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x30));
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 106f227a4; end: 106f227d7;  */

void FUN_106f227a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010becbe00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f227d8; end: 106f22813; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _stopTimer] */

void FUN_106f227d8(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 106f22814; end: 106f2291f; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _startAsyncTaskObserving] */

void FUN_106f22814(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf0c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106f22920; end: 106f229fb;  */

void FUN_106f22920(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106f229fc;
    puStack_58 = &UNK_110841fb0;
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    _objc_retain(param_2);
    uStack_50 = param_2;
    func_0x000100a0df38(uVar2,&puStack_70);
    _objc_release(uStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106f229fc; end: 106f22d07;  */

void FUN_106f229fc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106f22ce8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c071ae0();
  _objc_release(uVar13);
  _objc_release(uVar2);
  if ((int)uVar3 == 0) goto LAB_106f22ce8;
  puVar4 = PTR_PTR_1126b0250;
  _objc_alloc(PTR_PTR_1126b0250);
  puVar5 = PTR_PTR_1126b0258;
  func_0x00010bf4d120(PTR_PTR_1126b0258);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefa40(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar2;
  func_0x00010c2481e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfe5f20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar13;
  func_0x00010c071ae0(uVar13,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c252d60();
    if (lVar6 == 4) {
      ppuVar12 = &PTR____CFConstantStringClassReference_110e8dd58;
      uVar13 = 5;
LAB_106f22be8:
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                          &PTR____CFConstantStringClassReference_110e8dcb8,ppuVar12,uVar13);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar6 != 3) {
        if (lVar6 == 2) {
          func_0x00010bde38e0(lVar1,param_2,PTR____kCFBooleanTrue_11034ab68,0);
        }
        goto LAB_106f22ce0;
      }
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar7;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar13;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf1f3c0();
      _objc_release(uVar3);
      _objc_release(uVar13);
      _objc_release(uVar7);
      if ((int)uVar2 != 0) {
        ppuVar12 = &PTR____CFConstantStringClassReference_110e8dd18;
        uVar13 = 4;
        goto LAB_106f22be8;
      }
      ppuVar8 = *(undefined ***)(param_1 + 0x20);
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c0f3900();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = &PTR____CFConstantStringClassReference_110db8b78;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar12 = ppuVar10;
      }
      _objc_retain(ppuVar12);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110e8dd38);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar12);
      func_0x00010bf99260(puVar5,param_2,&PTR____CFConstantStringClassReference_110e8dcb8,puVar11,3)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
    }
    func_0x00010bde38e0(lVar1,param_2,0,puVar5);
    _objc_release(puVar5);
  }
LAB_106f22ce0:
  _objc_release(puVar4);
LAB_106f22ce8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106f22d08; end: 106f22d0f; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _stopAsyncTaskObserving] */

void FUN_106f22d08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 106f22d10; end: 106f22ecb; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _tick] */

/* WARNING: Removing unreachable block (ram,0x000106f22db4) */
/* WARNING: Removing unreachable block (ram,0x000106f22de4) */

void FUN_106f22d10(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auStack_58 [24];
  
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x38));
  param_1 = ABS(param_1);
  if (*(double *)(param_2 + 0x10) <= param_1) {
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde38e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  func_0x00010c26f3a0(*(undefined8 *)(param_2 + 0x38));
  dVar2 = -param_1;
  if (0.0 <= param_1) {
    dVar2 = param_1;
  }
  _CMTimeMakeWithSeconds(auStack_58,dVar2,600);
  func_0x00010bfb6ea0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))();
  _objc_retain(0);
  _objc_release(param_2);
  _objc_release(0);
  return;
}



/* Entry: 106f22ecc; end: 106f22f4f; -[SCSnapRendererLensContentPreparationFramesLoopStrategy _completeWithValue:error:] */

void FUN_106f22ecc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar1 = param_3;
    func_0x00010bf1f3c0();
    if ((param_4 == 0) && ((int)uVar1 != 0)) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
    }
    else {
      func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x40),param_2,param_4);
    }
    func_0x00010be92140(param_1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106f22f50; end: 106f22f57; -[SCSnapRendererLensContentPreparationFramesLoopStrategy frameProcessingBlock] */

undefined8 FUN_106f22f50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 106f22f58; end: 106f22f5f; -[SCSnapRendererLensContentPreparationFramesLoopStrategy setFrameProcessingBlock:] */

void FUN_106f22f58(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106f22f60; end: 106f22fd7; -[SCSnapRendererLensContentPreparationFramesLoopStrategy .cxx_destruct] */

void FUN_106f22f60(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 106f22fd8; end: 106f22fff;  */

void FUN_106f22fd8(void)

{
  return;
}



/* Entry: 106f23000; end: 106f23073; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f23000(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_1127611ac));
  lVar2 = (long)_DAT_1127611b0;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f7d30;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f23074; end: 106f230eb; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint _cameraDidDisappear] */

void FUN_106f23074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010087d9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf29c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3358;
  func_0x00010bf29540(PTR_PTR_1126d3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106f230ec; end: 106f23163; -[SCSRLensEffectPluginCameraLifecycleObservingEntryPoint _sessionDidStartRunning] */

void FUN_106f230ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010087d9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf29c80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d3358;
  func_0x00010bf2ad20(PTR_PTR_1126d3358);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


