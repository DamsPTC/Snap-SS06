/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aee3eb4; end: 10aee3f2f;  */

undefined * FUN_10aee3eb4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edc60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2fb18,
                        &UNK_10e53466c,&UNK_10e53468c,3,FUN_10aee3f30,0);
    do {
      if (puRam00000001137edc60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edc60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edc60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edc60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edc60;
}



/* Entry: 10aee3f30; end: 10aee3f3b;  */

bool FUN_10aee3f30(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aee3f3c; end: 10aee3fa3; +[SCGLensAndChecksum descriptor] */

void FUN_10aee3f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe770,
                        &PTR____CFConstantStringClassReference_110f2fb38,&PTR_DAT_113313840,
                        &PTR_DAT_113313858,2,0x18,0x1c);
    puRam00000001137edc68 = puVar1;
  }
  return;
}



/* Entry: 10aee3fa4; end: 10aee400b; +[SCGCTItemAndChecksum descriptor] */

void FUN_10aee3fa4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe7c0,
                        &PTR____CFConstantStringClassReference_110f2fb58,&PTR_DAT_113313840,
                        &PTR_DAT_113313898,2,0x18,0x1c);
    puRam00000001137edc70 = puVar1;
  }
  return;
}



/* Entry: 10aee400c; end: 10aee4073; +[SCGFetchMixerResultsResponse descriptor] */

void FUN_10aee400c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe810,
                        &PTR____CFConstantStringClassReference_110f2fb78,&PTR_DAT_113313840,
                        &PTR_DAT_113313bd8,7,0x40,0x1c);
    puRam00000001137edc78 = puVar1;
  }
  return;
}



/* Entry: 10aee4074; end: 10aee40db; +[SCGMixerNamespaceResponse descriptor] */

void FUN_10aee4074(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe860,
                        &PTR____CFConstantStringClassReference_110f2fb98,&PTR_DAT_113313840,
                        &PTR_DAT_1133140b8,0xc,0x60,0x1c);
    puRam00000001137edc80 = puVar1;
  }
  return;
}



/* Entry: 10aee40dc; end: 10aee4143; +[SCGMixerResult descriptor] */

void FUN_10aee40dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe8b0,
                        &PTR____CFConstantStringClassReference_110f2fbb8,&PTR_DAT_113313840,
                        &PTR_s_id_p_113313d98,8,0x48,0x1c);
    puRam00000001137edc88 = puVar1;
  }
  return;
}



/* Entry: 10aee4144; end: 10aee41bf; +[SCGFeed descriptor] */

undefined * FUN_10aee4144(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe900,
                        &PTR____CFConstantStringClassReference_110dab1b8,&PTR_DAT_113313840,
                        &PTR_DAT_113313b18,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137edc90 = puVar1;
  }
  return puRam00000001137edc90;
}



/* Entry: 10aee41c0; end: 10aee4227; +[SCGFetchMixerResultsRequest descriptor] */

void FUN_10aee41c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edc98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe950,
                        &PTR____CFConstantStringClassReference_110f2fbd8,&PTR_DAT_113313840,
                        &PTR_DAT_113314238,0x10,0x80,0x1c);
    puRam00000001137edc98 = puVar1;
  }
  return;
}



/* Entry: 10aee4228; end: 10aee42a3; +[SCGFetchMixerResultsRequest_NamespaceRequest descriptor] */

undefined * FUN_10aee4228(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe9a0,
                        &PTR____CFConstantStringClassReference_110f2fbf8,&PTR_DAT_113313840,
                        &PTR_DAT_1133138d8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137edca0 = puVar1;
  }
  return puRam00000001137edca0;
}



/* Entry: 10aee42a4; end: 10aee431f; +[SCGFetchMixerResultsRequest_NamespacePagination descriptor] */

undefined * FUN_10aee42a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edca8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfe9f0,
                        &PTR____CFConstantStringClassReference_110f2fc18,&PTR_DAT_113313840,
                        &PTR_DAT_113313918,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137edca8 = puVar1;
  }
  return puRam00000001137edca8;
}



/* Entry: 10aee4320; end: 10aee439b; +[SCGFetchMixerResultsRequest_CachedItem descriptor] */

undefined * FUN_10aee4320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfea40,
                        &PTR____CFConstantStringClassReference_110f2fc38,&PTR_DAT_113313840,
                        &PTR_s_id_p_113313958,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137edcb0 = puVar1;
  }
  return puRam00000001137edcb0;
}



/* Entry: 10aee439c; end: 10aee4417; +[SCGFetchMixerResultsRequest_NetworkProfile descriptor] */

undefined * FUN_10aee439c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfea90,
                        &PTR____CFConstantStringClassReference_110f2fc58,&PTR_DAT_113313840,
                        &PTR_DAT_1133139b8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137edcb8 = puVar1;
  }
  return puRam00000001137edcb8;
}



/* Entry: 10aee4418; end: 10aee447f; +[SCGMixerRequestParams descriptor] */

void FUN_10aee4418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfeae0,
                        &PTR____CFConstantStringClassReference_110f2fc78,&PTR_DAT_113313840,
                        &PTR_DAT_113313cb8,7,0x20,0x1c);
    puRam00000001137edcc0 = puVar1;
  }
  return;
}



/* Entry: 10aee4480; end: 10aee44e7; +[SCGProxyToGtqParams descriptor] */

void FUN_10aee4480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfeb30,
                        &PTR____CFConstantStringClassReference_110f2fc98,&PTR_DAT_113313840,
                        &PTR_DAT_113313e98,8,4,0x1c);
    puRam00000001137edcc8 = puVar1;
  }
  return;
}



/* Entry: 10aee44e8; end: 10aee454f; +[SCGMixerUserInfo descriptor] */

void FUN_10aee44e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfeb80,
                        &PTR____CFConstantStringClassReference_110f2fcb8,&PTR_DAT_113313840,
                        &PTR_DAT_113313f98,9,0x38,0x1c);
    puRam00000001137edcd0 = puVar1;
  }
  return;
}



/* Entry: 10aee4550; end: 10aee45cb; +[SCGMixerUserInfo_GeoLocation descriptor] */

undefined * FUN_10aee4550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfebd0,
                        &PTR____CFConstantStringClassReference_110e04498,&PTR_DAT_113313840,
                        &PTR_s_latitude_113313a18,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137edcd8 = puVar1;
  }
  return puRam00000001137edcd8;
}



/* Entry: 10aee45cc; end: 10aee46c3; +[SCGMixerUserInfo_ScreenInfo descriptor] */

undefined * FUN_10aee45cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfec20,
                        &PTR____CFConstantStringClassReference_110f2fcd8,&PTR_DAT_113313840,
                        &PTR_DAT_113313a98,4,0x14,0x1c);
    func_0x00010c228780();
    puRam00000001137edce0 = puVar1;
  }
  return puRam00000001137edce0;
}



/* Entry: 10aee46c4; end: 10aee46cf;  */

bool FUN_10aee46c4(uint param_1)

{
  return param_1 < 0x10;
}



/* Entry: 10aee46d0; end: 10aee474b;  */

undefined * FUN_10aee46d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edcf0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2fd18,
                        &UNK_10e534798,&UNK_10e5347b4,2,FUN_10aee474c,0);
    do {
      if (puRam00000001137edcf0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edcf0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edcf0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edcf0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edcf0;
}



/* Entry: 10aee474c; end: 10aee4757;  */

bool FUN_10aee474c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee4758; end: 10aee47bf; +[SCLELensExplorerRequest descriptor] */

void FUN_10aee4758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edcf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfecc0,
                        &PTR____CFConstantStringClassReference_110f2fd38,&PTR_DAT_113314448,
                        &PTR_DAT_113314500,7,0x38,0x1c);
    puRam00000001137edcf8 = puVar1;
  }
  return;
}



/* Entry: 10aee47c0; end: 10aee4827; +[SCLELensExplorerResponse descriptor] */

void FUN_10aee47c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfed10,
                        &PTR____CFConstantStringClassReference_110f2fd58,&PTR_DAT_113314448,
                        &PTR_DAT_1133144a0,3,0x18,0x1c);
    puRam00000001137edd00 = puVar1;
  }
  return;
}



/* Entry: 10aee4828; end: 10aee488f; +[SCLECategoryFeed descriptor] */

void FUN_10aee4828(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfed60,
                        &PTR____CFConstantStringClassReference_110f2fd78,&PTR_DAT_113314448,
                        &PTR_s_feedItem_1133145e0,7,0x30,0x1c);
    puRam00000001137edd08 = puVar1;
  }
  return;
}



/* Entry: 10aee4890; end: 10aee491b; +[SCLEFeedItem descriptor] */

undefined * FUN_10aee4890(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfedb0,
                        &PTR____CFConstantStringClassReference_110f2fd98,&PTR_DAT_113314448,
                        &PTR_s_category_113314460,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137edd10 = puVar1;
  }
  return puRam00000001137edd10;
}



/* Entry: 10aee491c; end: 10aee49a7; +[SCLECategoryItem descriptor] */

undefined * FUN_10aee491c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfee00,
                        &PTR____CFConstantStringClassReference_110f2fdb8,&PTR_DAT_113314448,
                        &PTR_DAT_1133146c0,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001137edd18 = puVar1;
  }
  return puRam00000001137edd18;
}



/* Entry: 10aee49a8; end: 10aee4a23; +[SCLELensExplorerCategoryTile descriptor] */

undefined * FUN_10aee49a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfeea0,
                        &PTR____CFConstantStringClassReference_110f2fdd8,&PTR_DAT_1133147a8,
                        &PTR_DAT_1133147c0,2,0x18,0x1c);
    func_0x00010c2289e0();
    puRam00000001137edd20 = puVar1;
  }
  return puRam00000001137edd20;
}



/* Entry: 10aee4a24; end: 10aee4abf; +[SCLELensExplorerCategoryTile_Category descriptor] */

undefined * FUN_10aee4a24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfeef0,
                        &PTR____CFConstantStringClassReference_110e38518,&PTR_DAT_1133147a8,
                        &PTR_s_category_113314800,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112bfeea0);
    puRam00000001137edd28 = puVar1;
  }
  return puRam00000001137edd28;
}



/* Entry: 10aee4ac0; end: 10aee4b3b; +[SCLELensExplorerContainerTile descriptor] */

undefined * FUN_10aee4ac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfef90,
                        &PTR____CFConstantStringClassReference_110f2fdf8,&PTR_DAT_113314848,
                        &PTR_s_id_p_113314920,9,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001137edd30 = puVar1;
  }
  return puRam00000001137edd30;
}



/* Entry: 10aee4b3c; end: 10aee4bc7; +[SCLEContainerItem descriptor] */

undefined * FUN_10aee4b3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfefe0,
                        &PTR____CFConstantStringClassReference_110f2fe18,&PTR_DAT_113314848,
                        &PTR_DAT_113314860,6,0x38,0x1c);
    func_0x00010c229040();
    puRam00000001137edd38 = puVar1;
  }
  return puRam00000001137edd38;
}



/* Entry: 10aee4bc8; end: 10aee4c43;  */

undefined * FUN_10aee4bc8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edd40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2fe38,
                        &UNK_10e5347d0,&UNK_10e5347ec,2,FUN_10aee4c44,0);
    do {
      if (puRam00000001137edd40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edd40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edd40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edd40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edd40;
}



/* Entry: 10aee4c44; end: 10aee4c4f;  */

bool FUN_10aee4c44(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee4c50; end: 10aee4ccb; +[SCLELensExplorerCollectionTile descriptor] */

undefined * FUN_10aee4c50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff080,
                        &PTR____CFConstantStringClassReference_110f2fe58,&PTR_DAT_113314a40,
                        &PTR_s_collectionId_113314a78,8,0x48,0x1c);
    func_0x00010c2289e0();
    puRam00000001137edd48 = puVar1;
  }
  return puRam00000001137edd48;
}



/* Entry: 10aee4ccc; end: 10aee4d33; +[SCLECollectionLayout descriptor] */

void FUN_10aee4ccc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff0d0,
                        &PTR____CFConstantStringClassReference_110f2fe78,&PTR_DAT_113314a40,
                        &PTR_DAT_113314a58,1,8,0x1c);
    puRam00000001137edd50 = puVar1;
  }
  return;
}



/* Entry: 10aee4d34; end: 10aee4d9b; +[SCLELensExplorerCreatorTile descriptor] */

void FUN_10aee4d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff170,
                        &PTR____CFConstantStringClassReference_110f2fe98,&PTR_DAT_113314b78,
                        &PTR_DAT_113314bb0,4,0x28,0x1c);
    puRam00000001137edd58 = puVar1;
  }
  return;
}



/* Entry: 10aee4d9c; end: 10aee4e17; +[SCLELensExplorerCreatorSnapThumbnail descriptor] */

undefined * FUN_10aee4d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff1c0,
                        &PTR____CFConstantStringClassReference_110f2feb8,&PTR_DAT_113314b78,
                        &PTR_DAT_113314c30,9,0x50,0x1c);
    func_0x00010c2289e0();
    puRam00000001137edd60 = puVar1;
  }
  return puRam00000001137edd60;
}



/* Entry: 10aee4e18; end: 10aee4e7f; +[SCLELensExplorerCreatorSnap descriptor] */

void FUN_10aee4e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff210,
                        &PTR____CFConstantStringClassReference_110f2fed8,&PTR_DAT_113314b78,
                        &PTR_DAT_113314b90,1,0x10,0x1c);
    puRam00000001137edd68 = puVar1;
  }
  return;
}



/* Entry: 10aee4e80; end: 10aee4efb; +[SCLELensExplorerHeroTile descriptor] */

undefined * FUN_10aee4e80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff2b0,
                        &PTR____CFConstantStringClassReference_110f2fef8,&PTR_DAT_113314d60,
                        &PTR_s_id_p_113314e58,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137edd70 = puVar1;
  }
  return puRam00000001137edd70;
}



/* Entry: 10aee4efc; end: 10aee4f97; +[SCLELensExplorerHeroTile_LayoutElement descriptor] */

undefined * FUN_10aee4efc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff300,
                        &PTR____CFConstantStringClassReference_110f2ff18,&PTR_DAT_113314d60,
                        &PTR_DAT_113314df8,3,0x20,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112bff2b0);
    puRam00000001137edd78 = puVar1;
  }
  return puRam00000001137edd78;
}



/* Entry: 10aee4f98; end: 10aee5033; +[SCLELensExplorerHeroTile_LayoutElement_ImageElement descriptor] */

undefined * FUN_10aee4f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff350,
                        &PTR____CFConstantStringClassReference_110f2ff38,&PTR_DAT_113314d60,
                        &PTR_DAT_113314d78,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112bff300);
    puRam00000001137edd80 = puVar1;
  }
  return puRam00000001137edd80;
}



/* Entry: 10aee5034; end: 10aee50af; +[SCLELensExplorerHeroTile_LayoutElement_TextElement descriptor] */

undefined * FUN_10aee5034(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff3a0,
                        &PTR____CFConstantStringClassReference_110f2ff58,&PTR_DAT_113314d60,
                        &PTR_s_text_113314db8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137edd88 = puVar1;
  }
  return puRam00000001137edd88;
}



/* Entry: 10aee50b0; end: 10aee51a7; +[SCLELensExplorerLensTopicTile descriptor] */

void FUN_10aee50b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edd90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff440,
                        &PTR____CFConstantStringClassReference_110f2ff78,&PTR_DAT_113314ed8,
                        &PTR_s_id_p_113314ef0,8,0x48,0x1c);
    puRam00000001137edd90 = puVar1;
  }
  return;
}



/* Entry: 10aee51a8; end: 10aee51d7;  */

undefined8 FUN_10aee51a8(uint param_1)

{
  if ((0x7a < param_1 - 6) && ((4 < param_1 || (param_1 == 3)))) {
    return 0;
  }
  return 1;
}



/* Entry: 10aee51d8; end: 10aee5253;  */

undefined * FUN_10aee51d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edda0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2ffb8,
                        &UNK_10e53516e,&UNK_10e53518c,2,FUN_10aee5254,0);
    do {
      if (puRam00000001137edda0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edda0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edda0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edda0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edda0;
}



/* Entry: 10aee5254; end: 10aee525f;  */

bool FUN_10aee5254(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee5260; end: 10aee52ef;  */

undefined * FUN_10aee5260(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edda8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2ffd8,
                        &UNK_10e535194,&UNK_10e5351dc,8,FUN_10aee52f0,0,&UNK_10e5351fc);
    do {
      if (puRam00000001137edda8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edda8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edda8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edda8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edda8;
}



/* Entry: 10aee52f0; end: 10aee52fb;  */

bool FUN_10aee52f0(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10aee52fc; end: 10aee5377;  */

undefined * FUN_10aee52fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eddb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f2fff8,
                        &UNK_10e53520d,&UNK_10e535240,4,FUN_10aee5378,0);
    do {
      if (puRam00000001137eddb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eddb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eddb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eddb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eddb0;
}



/* Entry: 10aee5378; end: 10aee5383;  */

bool FUN_10aee5378(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10aee5384; end: 10aee53ff;  */

undefined * FUN_10aee5384(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eddb8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30018,
                        &UNK_10e535250,&UNK_10e53526c,2,FUN_10aee5400,0);
    do {
      if (puRam00000001137eddb8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eddb8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eddb8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eddb8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eddb8;
}



/* Entry: 10aee5400; end: 10aee540b;  */

bool FUN_10aee5400(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee540c; end: 10aee5487;  */

undefined * FUN_10aee540c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eddc0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30038,
                        &UNK_10e535274,&UNK_10e535288,2,FUN_10aee5488,0);
    do {
      if (puRam00000001137eddc0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eddc0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eddc0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eddc0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eddc0;
}



/* Entry: 10aee5488; end: 10aee5493;  */

bool FUN_10aee5488(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee5494; end: 10aee550f;  */

undefined * FUN_10aee5494(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137eddc8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30058,
                        &UNK_10e535290,&UNK_10e5352b0,3,FUN_10aee5510,0);
    do {
      if (puRam00000001137eddc8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137eddc8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137eddc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137eddc8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137eddc8;
}



/* Entry: 10aee5510; end: 10aee551b;  */

bool FUN_10aee5510(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aee551c; end: 10aee5597; +[SCLELensExplorerCategory descriptor] */

undefined * FUN_10aee551c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eddd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff4e0,
                        &PTR____CFConstantStringClassReference_110f30078,&PTR_DAT_113314ff8,
                        &PTR_s_displayName_113315150,8,0x40,0x1c);
    func_0x00010c2289e0();
    puRam00000001137eddd0 = puVar1;
  }
  return puRam00000001137eddd0;
}



/* Entry: 10aee5598; end: 10aee55ff; +[SCLELensExplorerSubCategory descriptor] */

void FUN_10aee5598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eddd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff530,
                        &PTR____CFConstantStringClassReference_110f30098,&PTR_DAT_113314ff8,
                        &PTR_s_displayName_1133150d0,4,0x20,0x1c);
    puRam00000001137eddd8 = puVar1;
  }
  return;
}



/* Entry: 10aee5600; end: 10aee5667; +[SCLELensExplorerItemRenderStrategy descriptor] */

void FUN_10aee5600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edde0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff580,
                        &PTR____CFConstantStringClassReference_110f300b8,&PTR_DAT_113314ff8,
                        &PTR_DAT_113315250,8,0x28,0x1c);
    puRam00000001137edde0 = puVar1;
  }
  return;
}



/* Entry: 10aee5668; end: 10aee5703; +[SCLELensExplorerItemRenderStrategy_LensTilePresentation descriptor] */

undefined * FUN_10aee5668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edde8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff5d0,
                        &PTR____CFConstantStringClassReference_110f300d8,&PTR_DAT_113314ff8,
                        &PTR_DAT_113315030,2,0x10,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112bff580);
    puRam00000001137edde8 = puVar1;
  }
  return puRam00000001137edde8;
}



/* Entry: 10aee5704; end: 10aee576b; +[SCLETheme descriptor] */

void FUN_10aee5704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eddf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff620,
                        &PTR____CFConstantStringClassReference_110f300f8,&PTR_DAT_113314ff8,
                        &PTR_DAT_113315010,1,0x10,0x1c);
    puRam00000001137eddf0 = puVar1;
  }
  return;
}



/* Entry: 10aee576c; end: 10aee584f; +[SCLETabColorScheme descriptor] */

void FUN_10aee576c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eddf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff670,
                        &PTR____CFConstantStringClassReference_110f30118,&PTR_DAT_113314ff8,
                        &PTR_DAT_113315070,3,0x20,0x1c);
    puRam00000001137eddf8 = puVar1;
  }
  return;
}



/* Entry: 10aee5850; end: 10aee585b;  */

bool FUN_10aee5850(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee585c; end: 10aee58d7;  */

undefined * FUN_10aee585c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ede08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30158,
                        &UNK_10e5352ec,&UNK_10e535340,5,FUN_10aee58d8,0);
    do {
      if (puRam00000001137ede08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ede08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ede08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ede08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ede08;
}



/* Entry: 10aee58d8; end: 10aee58e3;  */

bool FUN_10aee58d8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10aee58e4; end: 10aee595f;  */

undefined * FUN_10aee58e4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ede10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30178,
                        &UNK_10e535354,&UNK_10e535368,2,FUN_10aee5960,0);
    do {
      if (puRam00000001137ede10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ede10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ede10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ede10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ede10;
}



/* Entry: 10aee5960; end: 10aee596b;  */

bool FUN_10aee5960(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee596c; end: 10aee59e7;  */

undefined * FUN_10aee596c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ede18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30198,
                        &UNK_10e535370,&UNK_10e535384,2,FUN_10aee59e8,0);
    do {
      if (puRam00000001137ede18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ede18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ede18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ede18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ede18;
}



/* Entry: 10aee59e8; end: 10aee59f3;  */

bool FUN_10aee59e8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee59f4; end: 10aee5a6f;  */

undefined * FUN_10aee59f4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ede20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f301b8,
                        &UNK_10e53538c,&UNK_10e5353dc,6,FUN_10aee5a70,0);
    do {
      if (puRam00000001137ede20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ede20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ede20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ede20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ede20;
}



/* Entry: 10aee5a70; end: 10aee5a7b;  */

bool FUN_10aee5a70(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10aee5a7c; end: 10aee5af7;  */

undefined * FUN_10aee5a7c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ede28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f301d8,
                        &UNK_10e5353f4,&UNK_10e53540c,2,FUN_10aee5af8,0);
    do {
      if (puRam00000001137ede28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ede28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ede28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ede28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ede28;
}



/* Entry: 10aee5af8; end: 10aee5b03;  */

bool FUN_10aee5af8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee5b04; end: 10aee5b7f;  */

undefined * FUN_10aee5b04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137ede30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f301f8,
                        &UNK_10e535420,&UNK_10e535414,2,FUN_10aee5b80,0);
    do {
      if (puRam00000001137ede30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137ede30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137ede30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137ede30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137ede30;
}



/* Entry: 10aee5b80; end: 10aee5b8b;  */

bool FUN_10aee5b80(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee5b8c; end: 10aee5bf3; +[SCLESpaceMultipliers descriptor] */

void FUN_10aee5b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff710,
                        &PTR____CFConstantStringClassReference_110f30218,&PTR_DAT_113315358,
                        &PTR_s_start_113315490,4,0x14,0x1c);
    puRam00000001137ede38 = puVar1;
  }
  return;
}



/* Entry: 10aee5bf4; end: 10aee5c5b; +[SCLEShapedBackground descriptor] */

void FUN_10aee5bf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff760,
                        &PTR____CFConstantStringClassReference_110f30238,&PTR_DAT_113315358,
                        &PTR_DAT_113315370,2,0xc,0x1c);
    puRam00000001137ede40 = puVar1;
  }
  return;
}



/* Entry: 10aee5c5c; end: 10aee5ce7; +[SCLETint descriptor] */

undefined * FUN_10aee5c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff7b0,
                        &PTR____CFConstantStringClassReference_110f30258,&PTR_DAT_113315358,
                        &PTR_DAT_1133153b0,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137ede48 = puVar1;
  }
  return puRam00000001137ede48;
}



/* Entry: 10aee5ce8; end: 10aee5d4f; +[SCLELinearGradient descriptor] */

void FUN_10aee5ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff800,
                        &PTR____CFConstantStringClassReference_110e7c5b8,&PTR_DAT_113315358,
                        &PTR_DAT_113315430,3,0x18,0x1c);
    puRam00000001137ede50 = puVar1;
  }
  return;
}



/* Entry: 10aee5d50; end: 10aee5dcb; +[SCLELinearGradient_Segment descriptor] */

undefined * FUN_10aee5d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff850,
                        &PTR____CFConstantStringClassReference_110f30278,&PTR_DAT_113315358,
                        &PTR_DAT_1133153f0,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137ede58 = puVar1;
  }
  return puRam00000001137ede58;
}



/* Entry: 10aee5dcc; end: 10aee5e33; +[SCLELensExplorerLensStoryTile descriptor] */

void FUN_10aee5dcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff8f0,
                        &PTR____CFConstantStringClassReference_110f30298,&PTR_DAT_113315510,
                        &PTR_s_id_p_113315528,6,0x38,0x1c);
    puRam00000001137ede60 = puVar1;
  }
  return;
}



/* Entry: 10aee5e34; end: 10aee5ebf; +[SCLPLensBadge descriptor] */

undefined * FUN_10aee5e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff990,
                        &PTR____CFConstantStringClassReference_110e8d038,&PTR_DAT_1133155f0,
                        &PTR_DAT_113315628,2,0x18,0x1c);
    func_0x00010c229040();
    puRam00000001137ede68 = puVar1;
  }
  return puRam00000001137ede68;
}



/* Entry: 10aee5ec0; end: 10aee5f27; +[SCLPUserCountryViralBadge descriptor] */

void FUN_10aee5ec0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bff9e0,
                        &PTR____CFConstantStringClassReference_110f302b8,&PTR_DAT_1133155f0,
                        &PTR_s_rank_113315668,2,0x10,0x1c);
    puRam00000001137ede70 = puVar1;
  }
  return;
}



/* Entry: 10aee5f28; end: 10aee600b; +[SCLPUserFriendPlayBadge descriptor] */

void FUN_10aee5f28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffa30,
                        &PTR____CFConstantStringClassReference_110f302d8,&PTR_DAT_1133155f0,
                        &PTR_DAT_113315608,1,8,0x1c);
    puRam00000001137ede78 = puVar1;
  }
  return;
}



/* Entry: 10aee600c; end: 10aee6017;  */

bool FUN_10aee600c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aee6018; end: 10aee607f; +[SCLPRestrictedLensItem descriptor] */

void FUN_10aee6018(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffad0,
                        &PTR____CFConstantStringClassReference_110f30318,&PTR_DAT_1133156a8,
                        &PTR_s_lensId_1133156e0,3,0x18,0x1c);
    puRam00000001137ede88 = puVar1;
  }
  return;
}



/* Entry: 10aee6080; end: 10aee60e7; +[SCLPRestrictedLensesInfo descriptor] */

void FUN_10aee6080(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffb20,
                        &PTR____CFConstantStringClassReference_110f30338,&PTR_DAT_1133156a8,
                        &PTR_DAT_1133156c0,1,0x10,0x1c);
    puRam00000001137ede90 = puVar1;
  }
  return;
}



/* Entry: 10aee60e8; end: 10aee61df; +[SCLPLensNotificationCustomization descriptor] */

undefined * FUN_10aee60e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137ede98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffbc0,
                        &PTR____CFConstantStringClassReference_110f30358,&PTR_DAT_113315740,
                        &PTR_s_title_113315758,4,0x28,0x1c);
    func_0x00010c2289e0();
    puRam00000001137ede98 = puVar1;
  }
  return puRam00000001137ede98;
}



/* Entry: 10aee61e0; end: 10aee61eb;  */

bool FUN_10aee61e0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10aee61ec; end: 10aee6267;  */

undefined * FUN_10aee61ec(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137edea8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f30398,
                        &UNK_10e5354a4,&UNK_10e5354c4,3,FUN_10aee6268,0);
    do {
      if (puRam00000001137edea8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137edea8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137edea8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137edea8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137edea8;
}



/* Entry: 10aee6268; end: 10aee6273;  */

bool FUN_10aee6268(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10aee6274; end: 10aee62db; +[ServeGeoLensesRequest descriptor] */

void FUN_10aee6274(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edeb0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffc60,
                        &PTR____CFConstantStringClassReference_110f303b8,&PTR_DAT_1133157d8,
                        &PTR_s_request_1133157f0,1,0x10,0x1c);
    puRam00000001137edeb0 = puVar1;
  }
  return;
}



/* Entry: 10aee62dc; end: 10aee6343; +[ServeGeoLensesResponse descriptor] */

void FUN_10aee62dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edeb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffcb0,
                        &PTR____CFConstantStringClassReference_110f303d8,&PTR_DAT_1133157d8,
                        &PTR_DAT_113315830,2,0x18,0x1c);
    puRam00000001137edeb8 = puVar1;
  }
  return;
}



/* Entry: 10aee6344; end: 10aee63ab; +[GtqServeFeaturedLensesRequest descriptor] */

void FUN_10aee6344(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edec0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffd00,
                        &PTR____CFConstantStringClassReference_110f303f8,&PTR_DAT_1133157d8,
                        &PTR_DAT_113315a10,0x13,0x78,0x1c);
    puRam00000001137edec0 = puVar1;
  }
  return;
}



/* Entry: 10aee63ac; end: 10aee6427; +[GtqServeFeaturedLensesRequest_GtqServeFeaturedLensesNamespaceRequest descriptor] */

undefined * FUN_10aee63ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edec8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffd50,
                        &PTR____CFConstantStringClassReference_110f30418,&PTR_DAT_1133157d8,
                        &PTR_DAT_113315870,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137edec8 = puVar1;
  }
  return puRam00000001137edec8;
}



/* Entry: 10aee6428; end: 10aee64a3; +[GtqServeFeaturedLensesRequest_CachedUnlockableItem descriptor] */

undefined * FUN_10aee6428(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eded0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffda0,
                        &PTR____CFConstantStringClassReference_110f30438,&PTR_DAT_1133157d8,
                        &PTR_DAT_113315810,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137eded0 = puVar1;
  }
  return puRam00000001137eded0;
}



/* Entry: 10aee64a4; end: 10aee651f; +[GtqServeFeaturedLensesRequest_NetworkProfile descriptor] */

undefined * FUN_10aee64a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137eded8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffdf0,
                        &PTR____CFConstantStringClassReference_110f2fc58,&PTR_DAT_1133157d8,
                        &PTR_DAT_1133158d0,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137eded8 = puVar1;
  }
  return puRam00000001137eded8;
}



/* Entry: 10aee6520; end: 10aee659b; +[GtqServeFeaturedLensesRequest_SponsoredLensRequestInfo descriptor] */

undefined * FUN_10aee6520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edee0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffe40,
                        &PTR____CFConstantStringClassReference_110f30458,&PTR_DAT_1133157d8,
                        &PTR_DAT_113315990,4,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137edee0 = puVar1;
  }
  return puRam00000001137edee0;
}



/* Entry: 10aee659c; end: 10aee6617; +[GtqServeFeaturedLensesRequest_GeoLensRequestInfo descriptor] */

undefined * FUN_10aee659c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edee8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bffe90,
                        &PTR____CFConstantStringClassReference_110f30478,&PTR_DAT_1133157d8,
                        &PTR_DAT_113315930,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137edee8 = puVar1;
  }
  return puRam00000001137edee8;
}



/* Entry: 10aee6618; end: 10aee667f; +[SCLPFeaturedLensResponse descriptor] */

void FUN_10aee6618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edef0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfff30,
                        &PTR____CFConstantStringClassReference_110f30498,&PTR_DAT_113315c70,
                        &PTR_s_itemsArray_113315c88,2,0x18,0x1c);
    puRam00000001137edef0 = puVar1;
  }
  return;
}



/* Entry: 10aee6680; end: 10aee66e7; +[SCLPFeaturedLensNamespaceResponse descriptor] */

void FUN_10aee6680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137edef8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bfff80,
                        &PTR____CFConstantStringClassReference_110f304b8,&PTR_DAT_113315c70,
                        &PTR_DAT_113315d68,10,0x50,0x1c);
    puRam00000001137edef8 = puVar1;
  }
  return;
}


