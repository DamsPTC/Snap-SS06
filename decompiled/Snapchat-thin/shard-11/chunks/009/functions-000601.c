/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108ba7790; end: 108ba7797; -[SCUserSegments isNewUser] */

undefined1 FUN_108ba7790(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ba7798; end: 108ba779f; -[SCUserSegments is14DaysNewUser] */

undefined1 FUN_108ba7798(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108ba77a0; end: 108ba77a7; -[SCUserSegments isResurrectedUser] */

undefined1 FUN_108ba77a0(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108ba77a8; end: 108ba77af; -[SCUserSegments isNewOrHighRiskUser] */

undefined1 FUN_108ba77a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108ba77b0; end: 108ba77b7; -[SCUserSegments isInAppRatingPromptTargetUser] */

undefined1 FUN_108ba77b0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108ba77b8; end: 108ba7843; +[SCAdsBottomSnap descriptor] */

undefined * FUN_108ba77b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0110,
                        &PTR____CFConstantStringClassReference_110eea298,&PTR_DAT_11328c0d8,
                        &PTR_DAT_11328c110,0x10,0x88,0x1c);
    func_0x00010c229040();
    puRam000000011372db38 = puVar1;
  }
  return puRam000000011372db38;
}



/* Entry: 108ba7844; end: 108ba78bf; +[SCAdsBottomSnap_CtaColorConfig descriptor] */

undefined * FUN_108ba7844(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0160,
                        &PTR____CFConstantStringClassReference_110eea2b8,&PTR_DAT_11328c0d8,
                        &PTR_s_backgroundColor_11328c0f0,1,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372db40 = puVar1;
  }
  return puRam000000011372db40;
}



/* Entry: 108ba78c0; end: 108ba7927; +[SCAdsAdToLens descriptor] */

void FUN_108ba78c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0200,
                        &PTR____CFConstantStringClassReference_110eea2d8,&PTR_DAT_11328c310,
                        &PTR_DAT_11328c328,1,0x10,0x1c);
    puRam000000011372db48 = puVar1;
  }
  return;
}



/* Entry: 108ba7928; end: 108ba798f; +[SCAdsSnapcodeInfo descriptor] */

void FUN_108ba7928(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb02a0,
                        &PTR____CFConstantStringClassReference_110eea2f8,&PTR_DAT_11328c348,
                        &PTR_DAT_11328c360,2,0x18,0x1c);
    puRam000000011372db50 = puVar1;
  }
  return;
}



/* Entry: 108ba7990; end: 108ba79f7; +[SCAdsCollection descriptor] */

void FUN_108ba7990(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0340,
                        &PTR____CFConstantStringClassReference_110eea318,&PTR_DAT_11328c3a8,
                        &PTR_DAT_11328c4c0,5,0x28,0x1c);
    puRam000000011372db58 = puVar1;
  }
  return;
}



/* Entry: 108ba79f8; end: 108ba7a5f; +[SCAdsCollectionItem descriptor] */

void FUN_108ba79f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0390,
                        &PTR____CFConstantStringClassReference_110eea338,&PTR_DAT_11328c3a8,
                        &PTR_DAT_11328c3c0,4,0x28,0x1c);
    puRam000000011372db60 = puVar1;
  }
  return;
}



/* Entry: 108ba7a60; end: 108ba7aeb; +[SCAdsCollectionItemAttachment descriptor] */

undefined * FUN_108ba7a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb03e0,
                        &PTR____CFConstantStringClassReference_110eea358,&PTR_DAT_11328c3a8,
                        &PTR_DAT_11328c440,4,0x28,0x1c);
    func_0x00010c229040();
    puRam000000011372db68 = puVar1;
  }
  return puRam000000011372db68;
}



/* Entry: 108ba7aec; end: 108ba7b53; +[SCAdsAdToCall descriptor] */

void FUN_108ba7aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0480,
                        &PTR____CFConstantStringClassReference_110eea378,&PTR_DAT_11328c560,
                        &PTR_s_phoneNumber_11328c578,2,0x18,0x1c);
    puRam000000011372db70 = puVar1;
  }
  return;
}



/* Entry: 108ba7b54; end: 108ba7bdf; +[SCAdsAdToMessage descriptor] */

undefined * FUN_108ba7b54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0520,
                        &PTR____CFConstantStringClassReference_110eea398,&PTR_DAT_11328c5c0,
                        &PTR_s_phoneNumber_11328c5d8,4,0x28,0x1c);
    func_0x00010c229040();
    puRam000000011372db78 = puVar1;
  }
  return puRam000000011372db78;
}



/* Entry: 108ba7be0; end: 108ba7cc3; +[SCAdsAdToPlace descriptor] */

void FUN_108ba7be0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372db80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb05c0,
                        &PTR____CFConstantStringClassReference_110eea3b8,&PTR_DAT_11328c658,
                        &PTR_s_placeId_11328c670,1,0x10,0x1c);
    puRam000000011372db80 = puVar1;
  }
  return;
}



/* Entry: 108ba7cc4; end: 108ba7ccf;  */

bool FUN_108ba7cc4(uint param_1)

{
  return param_1 < 0xd;
}



/* Entry: 108ba7cd0; end: 108ba7d4b;  */

undefined * FUN_108ba7cd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372db90 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea3f8,
                        &UNK_10df94bbc,&UNK_10df94c00,3,FUN_108ba7d4c,0);
    do {
      if (puRam000000011372db90 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372db90;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372db90,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372db90 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372db90;
}



/* Entry: 108ba7d4c; end: 108ba7d57;  */

bool FUN_108ba7d4c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ba7d58; end: 108ba7dd3;  */

undefined * FUN_108ba7d58(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372db98 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea418,
                        &UNK_10df94c0c,&UNK_10df94c68,4,FUN_108ba7dd4,0);
    do {
      if (puRam000000011372db98 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372db98;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372db98,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372db98 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372db98;
}



/* Entry: 108ba7dd4; end: 108ba7ddf;  */

bool FUN_108ba7dd4(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ba7de0; end: 108ba7e5b;  */

undefined * FUN_108ba7de0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dba0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea438,
                        &UNK_10df94c78,&UNK_10df94cb0,4,FUN_108ba7e5c,0);
    do {
      if (puRam000000011372dba0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dba0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dba0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dba0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dba0;
}



/* Entry: 108ba7e5c; end: 108ba7e67;  */

bool FUN_108ba7e5c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ba7e68; end: 108ba7ee3;  */

undefined * FUN_108ba7e68(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dba8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea458,
                        &UNK_10df94cc0,&UNK_10df94d3c,7,FUN_108ba7ee4,0);
    do {
      if (puRam000000011372dba8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dba8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dba8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dba8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dba8;
}



/* Entry: 108ba7ee4; end: 108ba7eef;  */

bool FUN_108ba7ee4(uint param_1)

{
  return param_1 < 7;
}



/* Entry: 108ba7ef0; end: 108ba7f6b;  */

undefined * FUN_108ba7ef0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dbb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea478,
                        &UNK_10df94d58,&UNK_10df94d8c,2,FUN_108ba7f6c,0);
    do {
      if (puRam000000011372dbb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dbb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dbb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dbb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dbb0;
}



/* Entry: 108ba7f6c; end: 108ba7f77;  */

bool FUN_108ba7f6c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108ba7f78; end: 108ba7ff3; +[SCAdsProtoRenderLeadGeneration descriptor] */

undefined * FUN_108ba7f78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0660,
                        &PTR____CFConstantStringClassReference_110eea498,&PTR_DAT_11328c690,
                        &PTR_DAT_11328c9e8,0x13,0x88,0x1c);
    func_0x00010c2289e0();
    puRam000000011372dbb8 = puVar1;
  }
  return puRam000000011372dbb8;
}



/* Entry: 108ba7ff4; end: 108ba806f; +[SCAdsProtoRenderLeadGeneration_FieldRequest descriptor] */

undefined * FUN_108ba7ff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb06b0,
                        &PTR____CFConstantStringClassReference_110e24e38,&PTR_DAT_11328c690,
                        &PTR_s_identifier_11328c928,6,0x30,0x1c);
    func_0x00010c228780();
    puRam000000011372dbc0 = puVar1;
  }
  return puRam000000011372dbc0;
}



/* Entry: 108ba8070; end: 108ba80eb; +[SCAdsProtoRenderLeadGeneration_LegalConsentCheckbox descriptor] */

undefined * FUN_108ba8070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0700,
                        &PTR____CFConstantStringClassReference_110eea4b8,&PTR_DAT_11328c690,
                        &PTR_s_label_11328c6a8,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372dbc8 = puVar1;
  }
  return puRam000000011372dbc8;
}



/* Entry: 108ba80ec; end: 108ba8167; +[SCAdsProtoRenderLeadGeneration_CustomLegalDisclaimer descriptor] */

undefined * FUN_108ba80ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0750,
                        &PTR____CFConstantStringClassReference_110eea4d8,&PTR_DAT_11328c690,
                        &PTR_s_title_11328c768,3,0x20,0x1c);
    func_0x00010c228780();
    puRam000000011372dbd0 = puVar1;
  }
  return puRam000000011372dbd0;
}



/* Entry: 108ba8168; end: 108ba81e3; +[SCAdsProtoRenderLeadGeneration_MultiSelectSubField descriptor] */

undefined * FUN_108ba8168(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb07a0,
                        &PTR____CFConstantStringClassReference_110eea4f8,&PTR_DAT_11328c690,
                        &PTR_s_label_11328c7c8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372dbd8 = puVar1;
  }
  return puRam000000011372dbd8;
}



/* Entry: 108ba81e4; end: 108ba825f; +[SCAdsProtoRenderLeadGeneration_EndPage descriptor] */

undefined * FUN_108ba81e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbe0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb07f0,
                        &PTR____CFConstantStringClassReference_110eea518,&PTR_DAT_11328c690,
                        &PTR_DAT_11328c828,3,0x20,0x1c);
    func_0x00010c228780();
    puRam000000011372dbe0 = puVar1;
  }
  return puRam000000011372dbe0;
}



/* Entry: 108ba8260; end: 108ba82eb; +[SCAdsProtoRenderLeadGeneration_EndPageProperties descriptor] */

undefined * FUN_108ba8260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbe8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0840,
                        &PTR____CFConstantStringClassReference_110eea538,&PTR_DAT_11328c690,
                        &PTR_DAT_11328c6e8,2,0x10,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112bb0660);
    puRam000000011372dbe8 = puVar1;
  }
  return puRam000000011372dbe8;
}



/* Entry: 108ba82ec; end: 108ba8367; +[SCAdsProtoRenderLeadGeneration_PageTitle descriptor] */

undefined * FUN_108ba82ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0890,
                        &PTR____CFConstantStringClassReference_110eea558,&PTR_DAT_11328c690,
                        &PTR_DAT_11328c728,2,0x10,0x1c);
    func_0x00010c228780();
    puRam000000011372dbf0 = puVar1;
  }
  return puRam000000011372dbf0;
}



/* Entry: 108ba8368; end: 108ba83e3; +[SCAdsProtoRenderLeadGeneration_Page descriptor] */

undefined * FUN_108ba8368(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dbf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb08e0,
                        &PTR____CFConstantStringClassReference_110e4b4f8,&PTR_DAT_11328c690,
                        &PTR_DAT_11328c888,5,0x28,0x1c);
    func_0x00010c228780();
    puRam000000011372dbf8 = puVar1;
  }
  return puRam000000011372dbf8;
}



/* Entry: 108ba83e4; end: 108ba844b; +[SCAdsShowcaseCallout descriptor] */

void FUN_108ba83e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0980,
                        &PTR____CFConstantStringClassReference_110eea578,&PTR_DAT_11328cc48,
                        &PTR_s_text_11328cc60,1,0x10,0x1c);
    puRam000000011372dc00 = puVar1;
  }
  return;
}



/* Entry: 108ba844c; end: 108ba84b3; +[SCAdsShowcaseAttachment descriptor] */

void FUN_108ba844c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb09d0,
                        &PTR____CFConstantStringClassReference_110eea598,&PTR_DAT_11328cc48,
                        &PTR_DAT_11328cc80,4,0x28,0x1c);
    puRam000000011372dc08 = puVar1;
  }
  return;
}



/* Entry: 108ba84b4; end: 108ba851b; +[SCAdsReminder descriptor] */

void FUN_108ba84b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0a70,
                        &PTR____CFConstantStringClassReference_110eea5b8,&PTR_DAT_11328cd08,
                        &PTR_DAT_11328cdc0,6,0x38,0x1c);
    puRam000000011372dc10 = puVar1;
  }
  return;
}



/* Entry: 108ba851c; end: 108ba8583; +[SCAdsReminderLocation descriptor] */

void FUN_108ba851c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0ac0,
                        &PTR____CFConstantStringClassReference_110eea5d8,&PTR_DAT_11328cd08,
                        &PTR_s_latitude_11328cd60,3,0x20,0x1c);
    puRam000000011372dc18 = puVar1;
  }
  return;
}



/* Entry: 108ba8584; end: 108ba860f; +[SCAdsReminderAttachment descriptor] */

undefined * FUN_108ba8584(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0b10,
                        &PTR____CFConstantStringClassReference_110eea5f8,&PTR_DAT_11328cd08,
                        &PTR_DAT_11328cd20,2,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372dc20 = puVar1;
  }
  return puRam000000011372dc20;
}



/* Entry: 108ba8610; end: 108ba868b;  */

undefined * FUN_108ba8610(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dc28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea618,
                        &UNK_10df94da4,&UNK_10df94de0,4,FUN_108ba868c,0);
    do {
      if (puRam000000011372dc28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dc28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dc28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dc28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dc28;
}



/* Entry: 108ba868c; end: 108ba8697;  */

bool FUN_108ba868c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ba8698; end: 108ba8713;  */

undefined * FUN_108ba8698(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dc30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea638,
                        &UNK_10df94df0,&UNK_10df94e14,3,FUN_108ba8714,0);
    do {
      if (puRam000000011372dc30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dc30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dc30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dc30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dc30;
}



/* Entry: 108ba8714; end: 108ba871f;  */

bool FUN_108ba8714(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ba8720; end: 108ba879b;  */

undefined * FUN_108ba8720(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dc38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea658,
                        &UNK_10df94e20,&UNK_10df94e4c,3,FUN_108ba879c,0);
    do {
      if (puRam000000011372dc38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dc38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dc38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dc38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dc38;
}



/* Entry: 108ba879c; end: 108ba87a7;  */

bool FUN_108ba879c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ba87a8; end: 108ba880f; +[SCAdsSurvey descriptor] */

void FUN_108ba87a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0bb0,
                        &PTR____CFConstantStringClassReference_110eea678,&PTR_DAT_11328ce80,
                        &PTR_DAT_11328ce98,1,0x10,0x1c);
    puRam000000011372dc40 = puVar1;
  }
  return;
}



/* Entry: 108ba8810; end: 108ba888b; +[SCAdsSurvey_Choice descriptor] */

undefined * FUN_108ba8810(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0c00,
                        &PTR____CFConstantStringClassReference_110eea698,&PTR_DAT_11328ce80,
                        &PTR_s_text_11328cf18,4,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372dc48 = puVar1;
  }
  return puRam000000011372dc48;
}



/* Entry: 108ba888c; end: 108ba8907; +[SCAdsSurvey_Question descriptor] */

undefined * FUN_108ba888c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0c50,
                        &PTR____CFConstantStringClassReference_110eea6b8,&PTR_DAT_11328ce80,
                        &PTR_s_text_11328ceb8,3,0x18,0x1c);
    func_0x00010c228780();
    puRam000000011372dc50 = puVar1;
  }
  return puRam000000011372dc50;
}



/* Entry: 108ba8908; end: 108ba896f; +[SCAdsReminderCountdown descriptor] */

void FUN_108ba8908(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0cf0,
                        &PTR____CFConstantStringClassReference_110eea6d8,&PTR_DAT_11328cfa0,
                        &PTR_DAT_11328cff8,4,0x28,0x1c);
    puRam000000011372dc58 = puVar1;
  }
  return;
}



/* Entry: 108ba8970; end: 108ba89fb; +[SCAdsReminderItemAttachment descriptor] */

undefined * FUN_108ba8970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0d40,
                        &PTR____CFConstantStringClassReference_110eea6f8,&PTR_DAT_11328cfa0,
                        &PTR_DAT_11328cfb8,2,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372dc60 = puVar1;
  }
  return puRam000000011372dc60;
}



/* Entry: 108ba89fc; end: 108ba8a77;  */

undefined * FUN_108ba89fc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dc68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea718,
                        &UNK_10df94e58,&UNK_10df94e88,4,FUN_108ba8a78,0);
    do {
      if (puRam000000011372dc68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dc68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dc68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dc68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dc68;
}



/* Entry: 108ba8a78; end: 108ba8a83;  */

bool FUN_108ba8a78(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ba8a84; end: 108ba8aff;  */

undefined * FUN_108ba8a84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dc70 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea738,
                        &UNK_10df94e98,&UNK_10df94edc,3,FUN_108ba8b00,0);
    do {
      if (puRam000000011372dc70 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dc70;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dc70,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dc70 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dc70;
}



/* Entry: 108ba8b00; end: 108ba8b0b;  */

bool FUN_108ba8b00(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108ba8b0c; end: 108ba8b73; +[SCAdsComposerItem descriptor] */

void FUN_108ba8b0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0de0,
                        &PTR____CFConstantStringClassReference_110eea758,&PTR_DAT_11328d088,
                        &PTR_DAT_11328d0a0,0xc,0x58,0x1c);
    puRam000000011372dc78 = puVar1;
  }
  return;
}



/* Entry: 108ba8b74; end: 108ba8bff; +[SCAdsComposerTopSnap descriptor] */

undefined * FUN_108ba8b74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0e30,
                        &PTR____CFConstantStringClassReference_110eea778,&PTR_DAT_11328d088,
                        &PTR_s_itemsArray_11328d220,0x14,0xb0,0x1c);
    func_0x00010c229040();
    puRam000000011372dc80 = puVar1;
  }
  return puRam000000011372dc80;
}



/* Entry: 108ba8c00; end: 108ba8c67; +[SCAdsDpaOneTapOpenConfig descriptor] */

void FUN_108ba8c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0ed0,
                        &PTR____CFConstantStringClassReference_110eea798,
                        &PTR_s_snapchat_ads_abconfig_11328d4a0,&PTR_DAT_11328d4b8,2,0x10,0x1c);
    puRam000000011372dc88 = puVar1;
  }
  return;
}



/* Entry: 108ba8c68; end: 108ba8ccf; +[SCAdsDpaReshuffleConfig descriptor] */

void FUN_108ba8c68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0f70,
                        &PTR____CFConstantStringClassReference_110eea7b8,
                        &PTR_s_snapchat_ads_abconfig_11328d500,&PTR_s_animationDurationMs_11328d518,
                        2,0x18,0x1c);
    puRam000000011372dc90 = puVar1;
  }
  return;
}



/* Entry: 108ba8cd0; end: 108ba8d37; +[SCAdsDpaBottomSheetConfig descriptor] */

void FUN_108ba8cd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dc98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb0fc0,
                        &PTR____CFConstantStringClassReference_110eea7d8,
                        &PTR_s_snapchat_ads_abconfig_11328d500,0,0,4,0x1c);
    puRam000000011372dc98 = puVar1;
  }
  return;
}



/* Entry: 108ba8d38; end: 108ba8dc3; +[SCAdsDpaMoreItemsConfig descriptor] */

undefined * FUN_108ba8d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dca0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1010,
                        &PTR____CFConstantStringClassReference_110eea7f8,
                        &PTR_s_snapchat_ads_abconfig_11328d500,&PTR_DAT_11328d558,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372dca0 = puVar1;
  }
  return puRam000000011372dca0;
}



/* Entry: 108ba8dc4; end: 108ba8e3f;  */

undefined * FUN_108ba8dc4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dca8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea818,
                        &UNK_10df94ee8,&UNK_10df94f64,10,FUN_108ba8e40,0);
    do {
      if (puRam000000011372dca8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dca8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dca8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dca8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dca8;
}



/* Entry: 108ba8e40; end: 108ba8e4b;  */

bool FUN_108ba8e40(uint param_1)

{
  return param_1 < 10;
}



/* Entry: 108ba8e4c; end: 108ba8ec7;  */

undefined * FUN_108ba8e4c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dcb0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea838,
                        &UNK_10df94f8c,&UNK_10df94fc4,5,FUN_108ba8ec8,0);
    do {
      if (puRam000000011372dcb0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dcb0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dcb0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dcb0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dcb0;
}



/* Entry: 108ba8ec8; end: 108ba8ed3;  */

bool FUN_108ba8ec8(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108ba8ed4; end: 108ba8f3b; +[SCAdsComposerItemMediaOverlay descriptor] */

void FUN_108ba8ed4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcb8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb10b0,
                        &PTR____CFConstantStringClassReference_110eea858,&PTR_DAT_11328d5c0,
                        &PTR_DAT_11328d6b8,7,0x38,0x1c);
    puRam000000011372dcb8 = puVar1;
  }
  return;
}



/* Entry: 108ba8f3c; end: 108ba8fc7; +[SCAdsOverlay descriptor] */

undefined * FUN_108ba8f3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcc0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1100,
                        &PTR____CFConstantStringClassReference_110ea71b8,&PTR_DAT_11328d5c0,
                        &PTR_DAT_11328d658,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372dcc0 = puVar1;
  }
  return puRam000000011372dcc0;
}



/* Entry: 108ba8fc8; end: 108ba9043; +[SCAdsImageOverlay descriptor] */

undefined * FUN_108ba8fc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcc8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1150,
                        &PTR____CFConstantStringClassReference_110eea878,&PTR_DAT_11328d5c0,
                        &PTR_s_imageURL_11328d5d8,1,0x10,0x1c);
    func_0x00010c2289e0();
    puRam000000011372dcc8 = puVar1;
  }
  return puRam000000011372dcc8;
}



/* Entry: 108ba9044; end: 108ba90ab; +[SCAdsRatingOverlay descriptor] */

void FUN_108ba9044(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcd0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb11a0,
                        &PTR____CFConstantStringClassReference_110eea898,&PTR_DAT_11328d5c0,
                        &PTR_DAT_11328d5f8,1,0x10,0x1c);
    puRam000000011372dcd0 = puVar1;
  }
  return;
}



/* Entry: 108ba90ac; end: 108ba9113; +[SCAdsTextOverlay descriptor] */

void FUN_108ba90ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb11f0,
                        &PTR____CFConstantStringClassReference_110eea8b8,&PTR_DAT_11328d5c0,
                        &PTR_s_text_11328d618,2,0x18,0x1c);
    puRam000000011372dcd8 = puVar1;
  }
  return;
}



/* Entry: 108ba9114; end: 108ba917b; +[SCAdsComposerImage descriptor] */

void FUN_108ba9114(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dce0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1290,
                        &PTR____CFConstantStringClassReference_110eea8d8,&PTR_DAT_11328d7a0,
                        &PTR_DAT_11328d878,4,0x28,0x1c);
    puRam000000011372dce0 = puVar1;
  }
  return;
}



/* Entry: 108ba917c; end: 108ba91e3; +[SCAdsComposerVideo descriptor] */

void FUN_108ba917c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dce8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb12e0,
                        &PTR____CFConstantStringClassReference_110eea8f8,&PTR_DAT_11328d7a0,
                        &PTR_DAT_11328d7b8,3,0x20,0x1c);
    puRam000000011372dce8 = puVar1;
  }
  return;
}



/* Entry: 108ba91e4; end: 108ba926f; +[SCAdsComposerMedia descriptor] */

undefined * FUN_108ba91e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcf0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1330,
                        &PTR____CFConstantStringClassReference_110eea918,&PTR_DAT_11328d7a0,
                        &PTR_s_image_11328d818,3,0x18,0x1c);
    func_0x00010c229040();
    puRam000000011372dcf0 = puVar1;
  }
  return puRam000000011372dcf0;
}



/* Entry: 108ba9270; end: 108ba9353; +[SCAdsDpaItemRatingInfo descriptor] */

void FUN_108ba9270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dcf8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb13d0,
                        &PTR____CFConstantStringClassReference_110eea938,&PTR_DAT_11328d8f8,
                        &PTR_DAT_11328d910,2,0x18,0x1c);
    puRam000000011372dcf8 = puVar1;
  }
  return;
}



/* Entry: 108ba9354; end: 108ba935f;  */

bool FUN_108ba9354(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108ba9360; end: 108ba93db;  */

undefined * FUN_108ba9360(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dd08 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea978,
                        &UNK_10df95010,&UNK_10df95070,8,FUN_108ba93dc,0);
    do {
      if (puRam000000011372dd08 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dd08;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dd08,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dd08 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dd08;
}



/* Entry: 108ba93dc; end: 108ba93e7;  */

bool FUN_108ba93dc(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 108ba93e8; end: 108ba9463;  */

undefined * FUN_108ba93e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dd10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea998,
                        &UNK_10df95090,&UNK_10df950c0,5,FUN_108ba9464,0);
    do {
      if (puRam000000011372dd10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dd10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dd10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dd10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dd10;
}



/* Entry: 108ba9464; end: 108ba946f;  */

bool FUN_108ba9464(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 108ba9470; end: 108ba94eb;  */

undefined * FUN_108ba9470(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372dd18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110eea9b8,
                        &UNK_10df950d4,&UNK_10df950fc,2,FUN_108ba94ec,0);
    do {
      if (puRam000000011372dd18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372dd18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372dd18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372dd18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372dd18;
}



/* Entry: 108ba94ec; end: 108ba94f7;  */

bool FUN_108ba94ec(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108ba94f8; end: 108ba955f; +[DynamicTemplate descriptor] */

void FUN_108ba94f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1470,
                        &PTR____CFConstantStringClassReference_110eea9d8,&PTR_DAT_11328d950,
                        &PTR_s_layout_11328da88,9,0x48,0x1c);
    puRam000000011372dd20 = puVar1;
  }
  return;
}



/* Entry: 108ba9560; end: 108ba95db; +[OverlaySpec descriptor] */

undefined * FUN_108ba9560(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd28 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb14c0,
                        &PTR____CFConstantStringClassReference_110eea9f8,&PTR_DAT_11328d950,
                        &PTR_DAT_11328d9c8,6,0x30,0x1c);
    func_0x00010c2289e0();
    puRam000000011372dd28 = puVar1;
  }
  return puRam000000011372dd28;
}



/* Entry: 108ba95dc; end: 108ba9643; +[TextOverlayProperties descriptor] */

void FUN_108ba95dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372dd30 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb1510,
                        &PTR____CFConstantStringClassReference_110eeaa18,&PTR_DAT_11328d950,
                        &PTR_DAT_11328d968,3,0x18,0x1c);
    puRam000000011372dd30 = puVar1;
  }
  return;
}



/* Entry: 108ba9644; end: 108ba964b; -[SCAdLensCarouselInteraction carouselSize] */

undefined8 FUN_108ba9644(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba964c; end: 108ba9653; -[SCAdLensCarouselInteraction setCarouselSize:] */

void FUN_108ba964c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 108ba9654; end: 108ba965b; -[SCAdLensCarouselInteraction lensSessionId] */

undefined8 FUN_108ba9654(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ba965c; end: 108ba9663; -[SCAdLensCarouselInteraction setLensSessionId:] */

void FUN_108ba965c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba9664; end: 108ba966b; -[SCAdLensCarouselInteraction lastInteractedLensId] */

undefined8 FUN_108ba9664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ba966c; end: 108ba9673; -[SCAdLensCarouselInteraction setLastInteractedLensId:] */

void FUN_108ba966c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba9674; end: 108ba967b; -[SCAdLensCarouselInteraction lensSwipeInteractions] */

undefined8 FUN_108ba9674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ba967c; end: 108ba96ab; -[SCAdLensCarouselInteraction setLensSwipeInteractions:] */

void FUN_108ba967c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108ba96ac; end: 108ba96b3; -[SCAdLensCarouselInteraction adSnapCreationInfo] */

undefined8 FUN_108ba96ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ba96b4; end: 108ba96bb; -[SCAdLensCarouselInteraction setAdSnapCreationInfo:] */

void FUN_108ba96b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba96bc; end: 108ba96c3; -[SCAdLensCarouselInteraction deviceScreenHeight] */

undefined8 FUN_108ba96bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ba96c4; end: 108ba96cb; -[SCAdLensCarouselInteraction setDeviceScreenHeight:] */

void FUN_108ba96c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba96cc; end: 108ba96d3; -[SCAdLensCarouselInteraction deviceScreenWidth] */

undefined8 FUN_108ba96cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108ba96d4; end: 108ba96db; -[SCAdLensCarouselInteraction setDeviceScreenWidth:] */

void FUN_108ba96d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 108ba96dc; end: 108ba96e3; -[SCAdLensCarouselInteraction carouselExitEvent] */

undefined8 FUN_108ba96dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 108ba96e4; end: 108ba96eb; -[SCAdLensCarouselInteraction setCarouselExitEvent:] */

void FUN_108ba96e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}


