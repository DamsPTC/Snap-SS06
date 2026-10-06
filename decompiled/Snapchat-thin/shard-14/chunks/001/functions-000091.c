/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afc119c; end: 10afc1217;  */

undefined * FUN_10afc119c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f20a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47a58,
                        &UNK_10e54d740,&UNK_10e54d78c,3,FUN_10afc1218,0);
    do {
      if (puRam00000001137f20a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f20a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f20a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f20a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f20a8;
}



/* Entry: 10afc1218; end: 10afc1223;  */

bool FUN_10afc1218(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afc1224; end: 10afc129f;  */

undefined * FUN_10afc1224(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f20b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47a78,
                        &UNK_10e54d798,&UNK_10e54d7bc,4,FUN_10afc12a0,0);
    do {
      if (puRam00000001137f20b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f20b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f20b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f20b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f20b0;
}



/* Entry: 10afc12a0; end: 10afc12ab;  */

bool FUN_10afc12a0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc12ac; end: 10afc1313; +[SCSSMEngagementStats descriptor] */

void FUN_10afc12ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41660,
                        &PTR____CFConstantStringClassReference_110e0baf8,&PTR_DAT_1133547a0,
                        &PTR_DAT_1133552f8,0x1d,0xf0,0x1c);
    puRam00000001137f20b8 = puVar1;
  }
  return;
}



/* Entry: 10afc1314; end: 10afc137b; +[SCSSMSnapFragmentMetadata descriptor] */

void FUN_10afc1314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c416b0,
                        &PTR____CFConstantStringClassReference_110f47a98,&PTR_DAT_1133547a0,
                        &PTR_DAT_1133547b8,2,0x10,0x1c);
    puRam00000001137f20c0 = puVar1;
  }
  return;
}



/* Entry: 10afc137c; end: 10afc13f7; +[SCSSMSnapFragmentMetadata_Type descriptor] */

undefined * FUN_10afc137c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41700,
                        &PTR____CFConstantStringClassReference_110f35b58,&PTR_DAT_1133547a0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f20c8 = puVar1;
  }
  return puRam00000001137f20c8;
}



/* Entry: 10afc13f8; end: 10afc1473; +[SCSSMPublisher descriptor] */

undefined * FUN_10afc13f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41750,
                        &PTR____CFConstantStringClassReference_110dffd18,&PTR_DAT_1133547a0,
                        &PTR_DAT_113355038,0x16,0x80,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f20d0 = puVar1;
  }
  return puRam00000001137f20d0;
}



/* Entry: 10afc1474; end: 10afc14f3; +[SCSSMStorySnap descriptor] */

undefined * FUN_10afc1474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c417a0,
                        &PTR____CFConstantStringClassReference_110ed6c58,&PTR_DAT_1133547a0,
                        &PTR_DAT_113353f20,0x44,0x1d0,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f20d8 = puVar1;
  }
  return puRam00000001137f20d8;
}



/* Entry: 10afc14f4; end: 10afc156f; +[SCSSMStorySnap_SpotlightSnapStatus descriptor] */

undefined * FUN_10afc14f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c417f0,
                        &PTR____CFConstantStringClassReference_110f47ab8,&PTR_DAT_1133547a0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f20e0 = puVar1;
  }
  return puRam00000001137f20e0;
}



/* Entry: 10afc1570; end: 10afc15fb; +[SCSSMStorySnap_CommentSnapRepliesLabel descriptor] */

undefined * FUN_10afc1570(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41840,
                        &PTR____CFConstantStringClassReference_110f44d38,&PTR_DAT_1133547a0,
                        &PTR_DAT_1133548b8,3,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112c417a0);
    puRam00000001137f20e8 = puVar1;
  }
  return puRam00000001137f20e8;
}



/* Entry: 10afc15fc; end: 10afc1663; +[SCSSMAiGeneratedInfo descriptor] */

void FUN_10afc15fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41890,
                        &PTR____CFConstantStringClassReference_110f47ad8,&PTR_DAT_1133547a0,
                        &PTR_DAT_1133547f8,2,4,0x1c);
    puRam00000001137f20f0 = puVar1;
  }
  return;
}



/* Entry: 10afc1664; end: 10afc16cb; +[SCSSMAdminPermission descriptor] */

void FUN_10afc1664(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f20f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c418e0,
                        &PTR____CFConstantStringClassReference_110f47af8,&PTR_DAT_1133547a0,
                        &PTR_DAT_113354838,2,4,0x1c);
    puRam00000001137f20f8 = puVar1;
  }
  return;
}



/* Entry: 10afc16cc; end: 10afc1747; +[SCSSMSnapPivotInfo descriptor] */

undefined * FUN_10afc16cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2100 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41930,
                        &PTR____CFConstantStringClassReference_110ed6c78,&PTR_DAT_1133547a0,
                        &PTR_DAT_113354918,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2100 = puVar1;
  }
  return puRam00000001137f2100;
}



/* Entry: 10afc1748; end: 10afc17af; +[SCSSMSnapCreatorInfo descriptor] */

void FUN_10afc1748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2108 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41980,
                        &PTR____CFConstantStringClassReference_110e0bbd8,&PTR_DAT_1133547a0,
                        &PTR_s_userId_113354978,6,0x30,0x1c);
    puRam00000001137f2108 = puVar1;
  }
  return;
}



/* Entry: 10afc17b0; end: 10afc182b; +[SCSSMSnapMediaInfo descriptor] */

undefined * FUN_10afc17b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2110 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c419d0,
                        &PTR____CFConstantStringClassReference_110e0bad8,&PTR_DAT_1133547a0,
                        &PTR_DAT_113354dd8,0x13,0x88,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2110 = puVar1;
  }
  return puRam00000001137f2110;
}



/* Entry: 10afc182c; end: 10afc1893; +[SCSSMMediaDimensions descriptor] */

void FUN_10afc182c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2118 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41a20,
                        &PTR____CFConstantStringClassReference_110f288f8,&PTR_DAT_1133547a0,
                        &PTR_s_width_113354878,2,0xc,0x1c);
    puRam00000001137f2118 = puVar1;
  }
  return;
}



/* Entry: 10afc1894; end: 10afc18fb; +[SCSSMSnapBoltInfo descriptor] */

void FUN_10afc1894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2120 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41a70,
                        &PTR____CFConstantStringClassReference_110e0bc18,&PTR_DAT_1133547a0,
                        &PTR_DAT_113354a38,6,0x38,0x1c);
    puRam00000001137f2120 = puVar1;
  }
  return;
}



/* Entry: 10afc18fc; end: 10afc1977; +[SCSSMStoryThumbnail descriptor] */

undefined * FUN_10afc18fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2128 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41ac0,
                        &PTR____CFConstantStringClassReference_110e0bab8,&PTR_DAT_1133547a0,
                        &PTR_DAT_113354bb8,0x11,0x80,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2128 = puVar1;
  }
  return puRam00000001137f2128;
}



/* Entry: 10afc1978; end: 10afc1a6f; +[SCSSMThumbnailTile descriptor] */

undefined * FUN_10afc1978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2130 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41b10,
                        &PTR____CFConstantStringClassReference_110f47b18,&PTR_DAT_1133547a0,
                        &PTR_s_tileId_113354af8,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2130 = puVar1;
  }
  return puRam00000001137f2130;
}



/* Entry: 10afc1a70; end: 10afc1a7b;  */

bool FUN_10afc1a70(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 10afc1a7c; end: 10afc1af7;  */

undefined * FUN_10afc1a7c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2140 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47b58,
                        &UNK_10e54d960,&UNK_10e54d990,4,FUN_10afc1af8,0);
    do {
      if (puRam00000001137f2140 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2140;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2140,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2140 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2140;
}



/* Entry: 10afc1af8; end: 10afc1b03;  */

bool FUN_10afc1af8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc1b04; end: 10afc1b93;  */

undefined * FUN_10afc1b04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2148 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47b78,
                        &UNK_10e54d9a0,&UNK_10e54e028,99,FUN_10afc1b94,0,&UNK_10e54e1b4);
    do {
      if (puRam00000001137f2148 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2148;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2148,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2148 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2148;
}



/* Entry: 10afc1b94; end: 10afc1b9f;  */

bool FUN_10afc1b94(uint param_1)

{
  return param_1 < 99;
}



/* Entry: 10afc1ba0; end: 10afc1c1b;  */

undefined * FUN_10afc1ba0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2150 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47b98,
                        &UNK_10e54e1cd,&UNK_10e54e1f0,2,FUN_10afc1c1c,0);
    do {
      if (puRam00000001137f2150 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2150;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2150,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2150 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2150;
}



/* Entry: 10afc1c1c; end: 10afc1c27;  */

bool FUN_10afc1c1c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afc1c28; end: 10afc1c8f; +[IMPContentModerationStatus descriptor] */

void FUN_10afc1c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2158 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41bb0,
                        &PTR____CFConstantStringClassReference_110f47bb8,&PTR_DAT_113355698,
                        &PTR_s_status_1133556b0,6,0x28,0x1c);
    puRam00000001137f2158 = puVar1;
  }
  return;
}



/* Entry: 10afc1c90; end: 10afc1cf7; +[SCConnectSnapConnectAttributes descriptor] */

void FUN_10afc1c90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2160 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41c50,
                        &PTR____CFConstantStringClassReference_110f47bd8,&PTR_DAT_113355770,
                        &PTR_DAT_113355788,2,0x18,0x1c);
    puRam00000001137f2160 = puVar1;
  }
  return;
}



/* Entry: 10afc1cf8; end: 10afc1ddb; +[SCSCOREMultiSnapExtension descriptor] */

void FUN_10afc1cf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2168 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41cf0,
                        &PTR____CFConstantStringClassReference_110e0bc78,&PTR_DAT_1133557c8,
                        &PTR_DAT_1133557e0,3,0x18,0x1c);
    puRam00000001137f2168 = puVar1;
  }
  return;
}



/* Entry: 10afc1ddc; end: 10afc1de7;  */

bool FUN_10afc1ddc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc1de8; end: 10afc1e63;  */

undefined * FUN_10afc1de8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2178 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47c18,
                        &UNK_10e54e254,&UNK_10e54e298,4,FUN_10afc1e64,0);
    do {
      if (puRam00000001137f2178 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2178;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2178,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2178 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2178;
}



/* Entry: 10afc1e64; end: 10afc1e6f;  */

bool FUN_10afc1e64(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc1e70; end: 10afc1eeb;  */

undefined * FUN_10afc1e70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2180 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47c38,
                        &UNK_10e54e2a8,&UNK_10e54e2b4,2,FUN_10afc1eec,0);
    do {
      if (puRam00000001137f2180 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2180;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2180,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2180 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2180;
}



/* Entry: 10afc1eec; end: 10afc1ef7;  */

bool FUN_10afc1eec(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afc1ef8; end: 10afc1f73;  */

undefined * FUN_10afc1ef8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2188 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47c58,
                        &UNK_10e54e2bc,&UNK_10e54e2d0,3,FUN_10afc1f74,0);
    do {
      if (puRam00000001137f2188 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2188;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2188,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2188 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2188;
}



/* Entry: 10afc1f74; end: 10afc1f7f;  */

bool FUN_10afc1f74(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afc1f80; end: 10afc1ffb;  */

undefined * FUN_10afc1f80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2190 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47c78,
                        &UNK_10e54e2dc,&UNK_10e54e2f4,2,FUN_10afc1ffc,0);
    do {
      if (puRam00000001137f2190 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2190;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2190,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2190 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2190;
}



/* Entry: 10afc1ffc; end: 10afc2007;  */

bool FUN_10afc1ffc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afc2008; end: 10afc206f; +[SCSCOREPublisherPostFrequency descriptor] */

void FUN_10afc2008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2198 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41d90,
                        &PTR____CFConstantStringClassReference_110f47c98,&PTR_DAT_113355840,0,0,4,
                        0x1c);
    puRam00000001137f2198 = puVar1;
  }
  return;
}



/* Entry: 10afc2070; end: 10afc20d7; +[SCSCORELogoDisplay descriptor] */

void FUN_10afc2070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f21a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41de0,
                        &PTR____CFConstantStringClassReference_110ed69b8,&PTR_DAT_113355840,0,0,4,
                        0x1c);
    puRam00000001137f21a0 = puVar1;
  }
  return;
}



/* Entry: 10afc20d8; end: 10afc213f; +[SCSCOREPublisherSnapMediaType descriptor] */

void FUN_10afc20d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f21a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41e30,
                        &PTR____CFConstantStringClassReference_110f47cb8,&PTR_DAT_113355840,0,0,4,
                        0x1c);
    puRam00000001137f21a8 = puVar1;
  }
  return;
}



/* Entry: 10afc2140; end: 10afc21a7; +[SCSCOREPublisherAdSetting descriptor] */

void FUN_10afc2140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f21b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41e80,
                        &PTR____CFConstantStringClassReference_110ed69d8,&PTR_DAT_113355840,0,0,4,
                        0x1c);
    puRam00000001137f21b0 = puVar1;
  }
  return;
}



/* Entry: 10afc21a8; end: 10afc228b; +[SCSCOREPublisherTierLevel descriptor] */

void FUN_10afc21a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f21b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41ed0,
                        &PTR____CFConstantStringClassReference_110f47cd8,&PTR_DAT_113355840,0,0,4,
                        0x1c);
    puRam00000001137f21b8 = puVar1;
  }
  return;
}



/* Entry: 10afc228c; end: 10afc2297;  */

bool FUN_10afc228c(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 10afc2298; end: 10afc237b; +[SCSCORESnapSource descriptor] */

void FUN_10afc2298(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f21c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c41f70,
                        &PTR____CFConstantStringClassReference_110f47d18,&PTR_DAT_113355858,
                        &PTR_s_source_113355870,1,8,0x1c);
    puRam00000001137f21c8 = puVar1;
  }
  return;
}



/* Entry: 10afc237c; end: 10afc2387;  */

bool FUN_10afc237c(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10afc2388; end: 10afc2403;  */

undefined * FUN_10afc2388(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f21d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47d58,
                        &UNK_10e54e494,&UNK_10e54e4bc,4,FUN_10afc2404,0);
    do {
      if (puRam00000001137f21d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f21d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f21d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f21d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f21d8;
}



/* Entry: 10afc2404; end: 10afc240f;  */

bool FUN_10afc2404(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc2410; end: 10afc249f;  */

undefined * FUN_10afc2410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f21e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47d78,
                        &UNK_10e54e4cc,&UNK_10e54e554,0x11,FUN_10afc24a0,0,&UNK_10e54e598);
    do {
      if (puRam00000001137f21e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f21e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f21e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f21e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f21e0;
}



/* Entry: 10afc24a0; end: 10afc258f;  */

undefined8 FUN_10afc24a0(int param_1)

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



/* Entry: 10afc2590; end: 10afc260b;  */

undefined * FUN_10afc2590(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f21e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47d98,
                        &UNK_10e54e5de,&UNK_10e54e644,7,FUN_10afc260c,0);
    do {
      if (puRam00000001137f21e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f21e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f21e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f21e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f21e8;
}



/* Entry: 10afc260c; end: 10afc2617;  */

bool FUN_10afc260c(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 10afc2618; end: 10afc2693;  */

undefined * FUN_10afc2618(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f21f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47db8,
                        &UNK_10e54e660,&UNK_10e54e694,4,FUN_10afc2694,0);
    do {
      if (puRam00000001137f21f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f21f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f21f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f21f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f21f0;
}



/* Entry: 10afc2694; end: 10afc269f;  */

bool FUN_10afc2694(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc26a0; end: 10afc2707; +[BoltPolicy descriptor] */

void FUN_10afc26a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f21f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42060,
                        &PTR____CFConstantStringClassReference_110f47dd8,&PTR_DAT_113355890,
                        &PTR_DAT_1133558a8,2,0x18,0x1c);
    puRam00000001137f21f8 = puVar1;
  }
  return;
}



/* Entry: 10afc2708; end: 10afc278b; +[BoltPolicy_DeviceInfo descriptor] */

undefined * FUN_10afc2708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42088,
                        &PTR____CFConstantStringClassReference_110f04078,&PTR_DAT_113355890,
                        &PTR_s_userAgent_1133558e8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f2200 = puVar1;
  }
  return puRam00000001137f2200;
}



/* Entry: 10afc278c; end: 10afc280f; +[BoltPolicy_MediaCaptureContext descriptor] */

undefined * FUN_10afc278c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c420b0,
                        &PTR____CFConstantStringClassReference_110f04098,&PTR_DAT_113355890,
                        &PTR_DAT_113355948,7,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f2208 = puVar1;
  }
  return puRam00000001137f2208;
}



/* Entry: 10afc2810; end: 10afc2877; +[MyBoost descriptor] */

void FUN_10afc2810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42150,
                        &PTR____CFConstantStringClassReference_110f47df8,&PTR_DAT_113355a28,
                        &PTR_DAT_113355ac0,4,0x20,0x1c);
    puRam00000001137f2210 = puVar1;
  }
  return;
}



/* Entry: 10afc2878; end: 10afc28df; +[FriendBoost descriptor] */

void FUN_10afc2878(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c421a0,
                        &PTR____CFConstantStringClassReference_110f47e18,&PTR_DAT_113355a28,
                        &PTR_s_userId_113355a40,1,0x10,0x1c);
    puRam00000001137f2218 = puVar1;
  }
  return;
}



/* Entry: 10afc28e0; end: 10afc2947; +[BoostMetadata descriptor] */

void FUN_10afc28e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c421f0,
                        &PTR____CFConstantStringClassReference_110ea8058,&PTR_DAT_113355a28,
                        &PTR_DAT_113355a80,2,0x18,0x1c);
    puRam00000001137f2220 = puVar1;
  }
  return;
}



/* Entry: 10afc2948; end: 10afc2a2b; +[BoostConfig descriptor] */

void FUN_10afc2948(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42240,
                        &PTR____CFConstantStringClassReference_110f47e38,&PTR_DAT_113355a28,
                        &PTR_DAT_113355a60,1,4,0x1c);
    puRam00000001137f2228 = puVar1;
  }
  return;
}



/* Entry: 10afc2a2c; end: 10afc2a37;  */

bool FUN_10afc2a2c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10afc2a38; end: 10afc2ab3;  */

undefined * FUN_10afc2a38(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2238 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47e78,
                        &UNK_10e54e6d0,&UNK_10e54e704,4,FUN_10afc2ab4,0);
    do {
      if (puRam00000001137f2238 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2238;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2238,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2238 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2238;
}



/* Entry: 10afc2ab4; end: 10afc2abf;  */

bool FUN_10afc2ab4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc2ac0; end: 10afc2b3b;  */

undefined * FUN_10afc2ac0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f2240 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f47e98,
                        &UNK_10e54e714,&UNK_10e54e754,4,FUN_10afc2b3c,0);
    do {
      if (puRam00000001137f2240 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f2240;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f2240,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f2240 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f2240;
}



/* Entry: 10afc2b3c; end: 10afc2b47;  */

bool FUN_10afc2b3c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10afc2b48; end: 10afc2baf; +[BoostType descriptor] */

void FUN_10afc2b48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c422e0,
                        &PTR____CFConstantStringClassReference_110f47eb8,&PTR_DAT_113355b40,0,0,4,
                        0x1c);
    puRam00000001137f2248 = puVar1;
  }
  return;
}



/* Entry: 10afc2bb0; end: 10afc2c17; +[Status descriptor] */

void FUN_10afc2bb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42330,
                        &PTR____CFConstantStringClassReference_110e05018,&PTR_DAT_113355b40,0,0,4,
                        0x1c);
    puRam00000001137f2250 = puVar1;
  }
  return;
}



/* Entry: 10afc2c18; end: 10afc2c7f; +[ActionSubresponse descriptor] */

void FUN_10afc2c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42380,
                        &PTR____CFConstantStringClassReference_110f47ed8,&PTR_DAT_113355b40,
                        &PTR_DAT_113355b58,2,0x10,0x1c);
    puRam00000001137f2258 = puVar1;
  }
  return;
}



/* Entry: 10afc2c80; end: 10afc2ce7; +[BoostItem descriptor] */

void FUN_10afc2c80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c423d0,
                        &PTR____CFConstantStringClassReference_110f47ef8,&PTR_DAT_113355b40,
                        &PTR_s_compositeStoryId_113355e58,6,0x30,0x1c);
    puRam00000001137f2260 = puVar1;
  }
  return;
}



/* Entry: 10afc2ce8; end: 10afc2d4f; +[BoostAction descriptor] */

void FUN_10afc2ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42420,
                        &PTR____CFConstantStringClassReference_110f47f18,&PTR_DAT_113355b40,
                        &PTR_DAT_113355b98,2,0x18,0x1c);
    puRam00000001137f2268 = puVar1;
  }
  return;
}



/* Entry: 10afc2d50; end: 10afc2db7; +[CreateBoostActionsRequest descriptor] */

void FUN_10afc2d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42470,
                        &PTR____CFConstantStringClassReference_110f47f38,&PTR_DAT_113355b40,
                        &PTR_s_metadata_113355bd8,2,0x18,0x1c);
    puRam00000001137f2270 = puVar1;
  }
  return;
}



/* Entry: 10afc2db8; end: 10afc2e1f; +[CreateBoostActionsResponse descriptor] */

void FUN_10afc2db8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c424c0,
                        &PTR____CFConstantStringClassReference_110f47f58,&PTR_DAT_113355b40,
                        &PTR_s_requestId_113355c18,2,0x18,0x1c);
    puRam00000001137f2278 = puVar1;
  }
  return;
}



/* Entry: 10afc2e20; end: 10afc2e87; +[DeleteBoostAction descriptor] */

void FUN_10afc2e20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42510,
                        &PTR____CFConstantStringClassReference_110f47f78,&PTR_DAT_113355b40,
                        &PTR_DAT_113355f18,6,0x30,0x1c);
    puRam00000001137f2280 = puVar1;
  }
  return;
}



/* Entry: 10afc2e88; end: 10afc2eef; +[DeleteBoostActionsRequest descriptor] */

void FUN_10afc2e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42560,
                        &PTR____CFConstantStringClassReference_110f47f98,&PTR_DAT_113355b40,
                        &PTR_s_metadata_113355c58,2,0x18,0x1c);
    puRam00000001137f2288 = puVar1;
  }
  return;
}



/* Entry: 10afc2ef0; end: 10afc2f57; +[DeleteBoostActionsResponse descriptor] */

void FUN_10afc2ef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c425b0,
                        &PTR____CFConstantStringClassReference_110f47fb8,&PTR_DAT_113355b40,
                        &PTR_s_requestId_113355c98,2,0x18,0x1c);
    puRam00000001137f2290 = puVar1;
  }
  return;
}



/* Entry: 10afc2f58; end: 10afc2fbf; +[BoostKey descriptor] */

void FUN_10afc2f58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42600,
                        &PTR____CFConstantStringClassReference_110f47fd8,&PTR_DAT_113355b40,
                        &PTR_s_compositeStoryId_113355cd8,2,0x18,0x1c);
    puRam00000001137f2298 = puVar1;
  }
  return;
}



/* Entry: 10afc2fc0; end: 10afc3027; +[BoosterProfile descriptor] */

void FUN_10afc2fc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42650,
                        &PTR____CFConstantStringClassReference_110f47ff8,&PTR_DAT_113355b40,
                        &PTR_s_userId_113355d18,2,0x18,0x1c);
    puRam00000001137f22a0 = puVar1;
  }
  return;
}



/* Entry: 10afc3028; end: 10afc308f; +[GetBoostsRequest descriptor] */

void FUN_10afc3028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c426a0,
                        &PTR____CFConstantStringClassReference_110f48018,&PTR_DAT_113355b40,
                        &PTR_s_metadata_113355fd8,6,0x28,0x1c);
    puRam00000001137f22a8 = puVar1;
  }
  return;
}



/* Entry: 10afc3090; end: 10afc30f7; +[GetBoostsResponse descriptor] */

void FUN_10afc3090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c426f0,
                        &PTR____CFConstantStringClassReference_110f48038,&PTR_DAT_113355b40,
                        &PTR_DAT_113355d58,2,0x18,0x1c);
    puRam00000001137f22b0 = puVar1;
  }
  return;
}



/* Entry: 10afc30f8; end: 10afc315f; +[SpotlightRepostNotif descriptor] */

void FUN_10afc30f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42740,
                        &PTR____CFConstantStringClassReference_110f48058,&PTR_DAT_113355b40,
                        &PTR_s_snapId_113355d98,2,0x18,0x1c);
    puRam00000001137f22b8 = puVar1;
  }
  return;
}



/* Entry: 10afc3160; end: 10afc31c7; +[SpotlightFriendFavoritedRepostNotif descriptor] */

void FUN_10afc3160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42790,
                        &PTR____CFConstantStringClassReference_110f48078,&PTR_DAT_113355b40,
                        &PTR_s_snapId_113355dd8,4,0x28,0x1c);
    puRam00000001137f22c0 = puVar1;
  }
  return;
}



/* Entry: 10afc31c8; end: 10afc322f; +[SCSCORERequestOrigin descriptor] */

void FUN_10afc31c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42880,
                        &PTR____CFConstantStringClassReference_110f480b8,&PTR_DAT_113356098,0,0,4,
                        0x1c);
    puRam00000001137f22d8 = puVar1;
  }
  return;
}



/* Entry: 10afc3230; end: 10afc3313; +[SCSIDXLLMGeneratedMetadata descriptor] */

void FUN_10afc3230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f22e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42970,
                        &PTR____CFConstantStringClassReference_110f480f8,&PTR_DAT_113356210,
                        &PTR_DAT_113356228,1,0x10,0x1c);
    puRam00000001137f22e8 = puVar1;
  }
  return;
}



/* Entry: 10afc3314; end: 10afc331f;  */

bool FUN_10afc3314(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10afc3320; end: 10afc33af;  */

undefined * FUN_10afc3320(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f22f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f48138,
                        &UNK_10e54ec1c,&UNK_10e54ec5c,8,FUN_10afc33b0,0,&UNK_10e54ec7c);
    do {
      if (puRam00000001137f22f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f22f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f22f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f22f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f22f8;
}



/* Entry: 10afc33b0; end: 10afc33bb;  */

bool FUN_10afc33b0(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10afc33bc; end: 10afc3423; +[SCSCORECreatorEligibility descriptor] */

void FUN_10afc33bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42a10,
                        &PTR____CFConstantStringClassReference_110f48158,&PTR_DAT_113356248,
                        &PTR_DAT_113356280,2,8,0x1c);
    puRam00000001137f2300 = puVar1;
  }
  return;
}



/* Entry: 10afc3424; end: 10afc349f; +[SCSCOREImpalaUserInfo descriptor] */

undefined * FUN_10afc3424(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42b28,
                        &PTR____CFConstantStringClassReference_110f48178,&PTR_DAT_113356248,
                        &PTR_DAT_113356320,0x16,0x90,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f2308 = puVar1;
  }
  return puRam00000001137f2308;
}



/* Entry: 10afc34a0; end: 10afc3523; +[SCSCOREImpalaUserInfo_BusinessProfileCategory descriptor] */

undefined * FUN_10afc34a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42b50,
                        &PTR____CFConstantStringClassReference_110f48198,&PTR_DAT_113356248,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f2310 = puVar1;
  }
  return puRam00000001137f2310;
}



/* Entry: 10afc3524; end: 10afc358b; +[SCSCOREImpalaUserInfoLite descriptor] */

void FUN_10afc3524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42ab0,
                        &PTR____CFConstantStringClassReference_110f481b8,&PTR_DAT_113356248,
                        &PTR_DAT_1133562c0,3,0x18,0x1c);
    puRam00000001137f2318 = puVar1;
  }
  return;
}



/* Entry: 10afc358c; end: 10afc3683; +[SCSCOREImpalaUserList descriptor] */

void FUN_10afc358c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42b00,
                        &PTR____CFConstantStringClassReference_110f481d8,&PTR_DAT_113356248,
                        &PTR_DAT_113356260,1,0x10,0x1c);
    puRam00000001137f2320 = puVar1;
  }
  return;
}



/* Entry: 10afc3684; end: 10afc369b;  */

bool FUN_10afc3684(uint param_1)

{
  return param_1 < 0xd || param_1 == 99;
}



/* Entry: 10afc369c; end: 10afc3703; +[CreatorType descriptor] */

void FUN_10afc369c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42bf0,
                        &PTR____CFConstantStringClassReference_110f48218,&PTR_DAT_1133565e0,0,0,4,
                        0x1c);
    puRam00000001137f2330 = puVar1;
  }
  return;
}



/* Entry: 10afc3704; end: 10afc376b; +[CreatorAudience descriptor] */

void FUN_10afc3704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42c40,
                        &PTR____CFConstantStringClassReference_110f48238,&PTR_DAT_1133565e0,
                        &PTR_DAT_1133565f8,2,0x10,0x1c);
    puRam00000001137f2338 = puVar1;
  }
  return;
}



/* Entry: 10afc376c; end: 10afc37d3; +[CreatorAgency descriptor] */

void FUN_10afc376c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2340 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42c90,
                        &PTR____CFConstantStringClassReference_110f48258,&PTR_DAT_1133565e0,0,0,4,
                        0x1c);
    puRam00000001137f2340 = puVar1;
  }
  return;
}



/* Entry: 10afc37d4; end: 10afc383b; +[CreatorCategory descriptor] */

void FUN_10afc37d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f2348 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c42ce0,
                        &PTR____CFConstantStringClassReference_110f48278,&PTR_DAT_1133565e0,0,0,4,
                        0x1c);
    puRam00000001137f2348 = puVar1;
  }
  return;
}



/* Entry: 10afc383c; end: 10afc3883; +[SCContactPermissionResumeFlow guide] */

void FUN_10afc383c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae5f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc3884; end: 10afc38cf; +[SCContactPermissionResumeFlow iOS18Guide] */

void FUN_10afc3884(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae5f8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


