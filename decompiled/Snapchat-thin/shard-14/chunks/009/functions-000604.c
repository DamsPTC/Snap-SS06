/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b70db50; end: 10b70db6b;  */

uint FUN_10b70db50(uint param_1)

{
  return (uint)(param_1 < 4) & 0xbU >> (ulong)(param_1 & 0xf);
}



/* Entry: 10b70db6c; end: 10b70dbfb;  */

undefined * FUN_10b70db6c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84d8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74338,
                        &UNK_10e5d5d77,&UNK_10e5d5da4,3,FUN_10b70dbfc,0,&UNK_10e5d5db0);
    do {
      if (puRam00000001137f84d8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84d8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84d8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84d8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84d8;
}



/* Entry: 10b70dbfc; end: 10b70dc07;  */

bool FUN_10b70dbfc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70dc08; end: 10b70dc97;  */

undefined * FUN_10b70dc08(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84e0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74358,
                        &UNK_10e5d5dbb,&UNK_10e5d5de0,2,FUN_10b70dc98,0,&UNK_10e5d5f90);
    do {
      if (puRam00000001137f84e0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84e0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84e0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84e0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84e0;
}



/* Entry: 10b70dc98; end: 10b70dca3;  */

bool FUN_10b70dc98(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b70dca4; end: 10b70dd33;  */

undefined * FUN_10b70dca4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74378,
                        &UNK_10e5d5de8,&UNK_10e5d5e2c,4,FUN_10b70dd34,0,&UNK_10e5d5e3c);
    do {
      if (puRam00000001137f84e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84e8;
}



/* Entry: 10b70dd34; end: 10b70dd3f;  */

bool FUN_10b70dd34(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70dd40; end: 10b70ddcf;  */

undefined * FUN_10b70dd40(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84f0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74398,
                        &UNK_10e5d5e4a,&UNK_10e5d5e74,2,FUN_10b70ddd0,0,&UNK_10e5d5f98);
    do {
      if (puRam00000001137f84f0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84f0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84f0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84f0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84f0;
}



/* Entry: 10b70ddd0; end: 10b70dddb;  */

bool FUN_10b70ddd0(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b70dddc; end: 10b70de6b;  */

undefined * FUN_10b70dddc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f84f8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f743b8,
                        &UNK_10e5d5e7c,&UNK_10e5d5ea8,2,FUN_10b70de6c,0,&UNK_10e5d5fa0);
    do {
      if (puRam00000001137f84f8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f84f8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f84f8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f84f8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f84f8;
}



/* Entry: 10b70de6c; end: 10b70de77;  */

bool FUN_10b70de6c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b70de78; end: 10b70df07;  */

undefined * FUN_10b70de78(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8500 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f743d8,
                        &UNK_10e5d5c0c,&UNK_10e5d5eb0,4,FUN_10b70df08,0,&UNK_10e5d5c54);
    do {
      if (puRam00000001137f8500 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8500;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8500,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8500 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8500;
}



/* Entry: 10b70df08; end: 10b70df13;  */

bool FUN_10b70df08(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b70df14; end: 10b70df8f;  */

undefined * FUN_10b70df14(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8508 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f743f8,
                        &UNK_10e5d5ec0,&UNK_10e5d5ee0,3,FUN_10b70df90,0);
    do {
      if (puRam00000001137f8508 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8508;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8508,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8508 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8508;
}



/* Entry: 10b70df90; end: 10b70df9b;  */

bool FUN_10b70df90(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70df9c; end: 10b70e017;  */

undefined * FUN_10b70df9c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f8510 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f74418,
                        &UNK_10e5d5eec,&UNK_10e5d5f08,3,FUN_10b70e018,0);
    do {
      if (puRam00000001137f8510 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137f8510;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f8510,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f8510 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f8510;
}



/* Entry: 10b70e018; end: 10b70e023;  */

bool FUN_10b70e018(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b70e024; end: 10b70e0a3; +[SCCTXContextClientInfo descriptor] */

undefined * FUN_10b70e024(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8518 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac0f0,
                        &PTR____CFConstantStringClassReference_110f74438,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c23c0,0x33,400,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8518 = puVar1;
  }
  return puRam00000001137f8518;
}



/* Entry: 10b70e0a4; end: 10b70e123; +[SCCTXContextClientInfo_GroupInviteInfo descriptor] */

undefined * FUN_10b70e0a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8520 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac140,
                        &PTR____CFConstantStringClassReference_110f74458,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4748,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8520 = puVar1;
  }
  return puRam00000001137f8520;
}



/* Entry: 10b70e124; end: 10b70e1a3; +[SCCTXContextClientInfo_SnapReplyRequestInfo descriptor] */

undefined * FUN_10b70e124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8528 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac190,
                        &PTR____CFConstantStringClassReference_110f74478,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c47a8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8528 = puVar1;
  }
  return puRam00000001137f8528;
}



/* Entry: 10b70e1a4; end: 10b70e223; +[SCCTXContextClientInfo_PrivateStoryInviteInfo descriptor] */

undefined * FUN_10b70e1a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8530 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac1e0,
                        &PTR____CFConstantStringClassReference_110f74498,&PTR_DAT_1133c37f0,
                        &PTR_s_storyId_1133c4ec8,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8530 = puVar1;
  }
  return puRam00000001137f8530;
}



/* Entry: 10b70e224; end: 10b70e29f; +[SCCTXContextClientInfo_TopicStickerInfo descriptor] */

undefined * FUN_10b70e224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8538 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac230,
                        &PTR____CFConstantStringClassReference_110f744b8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3808,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8538 = puVar1;
  }
  return puRam00000001137f8538;
}



/* Entry: 10b70e2a0; end: 10b70e31b; +[SCCTXContextClientInfo_TextRange descriptor] */

undefined * FUN_10b70e2a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8540 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac280,
                        &PTR____CFConstantStringClassReference_110f744d8,&PTR_DAT_1133c37f0,
                        &PTR_s_start_1133c3d48,2,0xc,0x1c);
    func_0x00010c228780();
    puRam00000001137f8540 = puVar1;
  }
  return puRam00000001137f8540;
}



/* Entry: 10b70e31c; end: 10b70e39b; +[SCCTXContextClientInfo_TappableElement descriptor] */

undefined * FUN_10b70e31c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8548 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac2d0,
                        &PTR____CFConstantStringClassReference_110f744f8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4808,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8548 = puVar1;
  }
  return puRam00000001137f8548;
}



/* Entry: 10b70e39c; end: 10b70e417; +[SCCTXContextClientInfo_TappableElement_Point descriptor] */

undefined * FUN_10b70e39c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8550 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac320,
                        &PTR____CFConstantStringClassReference_110e06b78,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3d88,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8550 = puVar1;
  }
  return puRam00000001137f8550;
}



/* Entry: 10b70e418; end: 10b70e493; +[SCCTXContextClientInfo_TappableElement_Size descriptor] */

undefined * FUN_10b70e418(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8558 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac370,
                        &PTR____CFConstantStringClassReference_110deff78,&PTR_DAT_1133c37f0,
                        &PTR_s_width_1133c3dc8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8558 = puVar1;
  }
  return puRam00000001137f8558;
}



/* Entry: 10b70e494; end: 10b70e513; +[SCCTXContextClientInfo_TappableElement_Appearance descriptor] */

undefined * FUN_10b70e494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8560 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac3c0,
                        &PTR____CFConstantStringClassReference_110f74518,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4f48,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f8560 = puVar1;
  }
  return puRam00000001137f8560;
}



/* Entry: 10b70e514; end: 10b70e58f; +[SCCTXContextClientInfo_TappableElement_Action descriptor] */

undefined * FUN_10b70e514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8568 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac410,
                        &PTR____CFConstantStringClassReference_110dfd518,&PTR_DAT_1133c37f0,
                        &PTR_s_key_1133c3e08,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8568 = puVar1;
  }
  return puRam00000001137f8568;
}



/* Entry: 10b70e590; end: 10b70e60b; +[SCCTXContextClientInfo_TappableElementsInfo descriptor] */

undefined * FUN_10b70e590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8570 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac460,
                        &PTR____CFConstantStringClassReference_110f74538,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3e48,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8570 = puVar1;
  }
  return puRam00000001137f8570;
}



/* Entry: 10b70e60c; end: 10b70e687; +[SCCTXContextClientInfo_TappableElementsInfo_SourceClient descriptor] */

undefined * FUN_10b70e60c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8578 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac4b0,
                        &PTR____CFConstantStringClassReference_110f74558,&PTR_DAT_1133c37f0,
                        &PTR_s_os_1133c3e88,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8578 = puVar1;
  }
  return puRam00000001137f8578;
}



/* Entry: 10b70e688; end: 10b70e703; +[SCCTXContextClientInfo_SnapProStoryReplyFeature descriptor] */

undefined * FUN_10b70e688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8580 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac500,
                        &PTR____CFConstantStringClassReference_110f74578,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3ec8,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f8580 = puVar1;
  }
  return puRam00000001137f8580;
}



/* Entry: 10b70e704; end: 10b70e77f; +[SCCTXContextClientInfo_AppInfo descriptor] */

undefined * FUN_10b70e704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8588 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac550,
                        &PTR____CFConstantStringClassReference_110f43fd8,&PTR_DAT_1133c37f0,
                        &PTR_s_id_p_1133c3f08,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8588 = puVar1;
  }
  return puRam00000001137f8588;
}



/* Entry: 10b70e780; end: 10b70e7fb; +[SCCTXContextClientInfo_CameoInfo descriptor] */

undefined * FUN_10b70e780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8590 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac5a0,
                        &PTR____CFConstantStringClassReference_110f74598,&PTR_DAT_1133c37f0,
                        &PTR_s_id_p_1133c3828,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8590 = puVar1;
  }
  return puRam00000001137f8590;
}



/* Entry: 10b70e7fc; end: 10b70e87b; +[SCCTXContextClientInfo_MusicTrackInfo descriptor] */

undefined * FUN_10b70e7fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8598 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac5f0,
                        &PTR____CFConstantStringClassReference_110f745b8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c59a8,7,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f8598 = puVar1;
  }
  return puRam00000001137f8598;
}



/* Entry: 10b70e87c; end: 10b70e8fb; +[SCCTXContextClientInfo_CreativeToolsStickerInfo descriptor] */

undefined * FUN_10b70e87c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf660,
                        &PTR____CFConstantStringClassReference_110f745d8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4fc8,4,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f85a0 = puVar1;
  }
  return puRam00000001137f85a0;
}



/* Entry: 10b70e8fc; end: 10b70e997; +[SCCTXContextClientInfo_CreativeToolsStickerInfo_StickerAttribution descriptor] */

undefined * FUN_10b70e8fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf688,
                        &PTR____CFConstantStringClassReference_110f745f8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3f48,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112caf660);
    puRam00000001137f85a8 = puVar1;
  }
  return puRam00000001137f85a8;
}



/* Entry: 10b70e998; end: 10b70ea17; +[SCCTXContextClientInfo_Hashtag descriptor] */

undefined * FUN_10b70e998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac690,
                        &PTR____CFConstantStringClassReference_110eaa918,&PTR_DAT_1133c37f0,
                        &PTR_s_title_1133c4868,3,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f85b0 = puVar1;
  }
  return puRam00000001137f85b0;
}



/* Entry: 10b70ea18; end: 10b70eab3; +[SCCTXContextClientInfo_AstrologyProfileInfo descriptor] */

undefined * FUN_10b70ea18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf6b0,
                        &PTR____CFConstantStringClassReference_110f74618,&PTR_DAT_1133c37f0,
                        &PTR_s_personalityProfile_1133c3f88,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cac0f0);
    puRam00000001137f85b8 = puVar1;
  }
  return puRam00000001137f85b8;
}



/* Entry: 10b70eab4; end: 10b70eb37; +[SCCTXContextClientInfo_AstrologyProfileInfo_PersonalityProfile descriptor] */

undefined * FUN_10b70eab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf6d8,
                        &PTR____CFConstantStringClassReference_110f74638,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3848,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f85c0 = puVar1;
  }
  return puRam00000001137f85c0;
}



/* Entry: 10b70eb38; end: 10b70ebbb; +[SCCTXContextClientInfo_AstrologyProfileInfo_CompatibilityProfile descriptor] */

undefined * FUN_10b70eb38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf700,
                        &PTR____CFConstantStringClassReference_110f74658,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3868,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f85c8 = puVar1;
  }
  return puRam00000001137f85c8;
}



/* Entry: 10b70ebbc; end: 10b70ec5b; +[SCCTXContextClientInfo_RemixInfo descriptor] */

undefined * FUN_10b70ebbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac758,
                        &PTR____CFConstantStringClassReference_110f74678,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c55e8,6,0x30,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cac0f0);
    puRam00000001137f85d0 = puVar1;
  }
  return puRam00000001137f85d0;
}



/* Entry: 10b70ec5c; end: 10b70ecd7; +[SCCTXContextClientInfo_RemixInfo_UserStorySource descriptor] */

undefined * FUN_10b70ec5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac7a8,
                        &PTR____CFConstantStringClassReference_110f74698,&PTR_DAT_1133c37f0,
                        &PTR_s_userId_1133c3fc8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f85d8 = puVar1;
  }
  return puRam00000001137f85d8;
}



/* Entry: 10b70ecd8; end: 10b70ed53; +[SCCTXContextClientInfo_RemixInfo_SpotlightSource descriptor] */

undefined * FUN_10b70ecd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac7f8,
                        &PTR____CFConstantStringClassReference_110f746b8,&PTR_DAT_1133c37f0,
                        &PTR_s_userId_1133c4008,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f85e0 = puVar1;
  }
  return puRam00000001137f85e0;
}



/* Entry: 10b70ed54; end: 10b70edcf; +[SCCTXContextClientInfo_RemixInfo_MemoriesSource descriptor] */

undefined * FUN_10b70ed54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac848,
                        &PTR____CFConstantStringClassReference_110f746d8,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f85e8 = puVar1;
  }
  return puRam00000001137f85e8;
}



/* Entry: 10b70edd0; end: 10b70ee5f; +[SCCTXContextClientInfo_SnapKitInfo descriptor] */

undefined * FUN_10b70edd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac898,
                        &PTR____CFConstantStringClassReference_110f746f8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c48c8,3,0x20,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cac0f0);
    puRam00000001137f85f0 = puVar1;
  }
  return puRam00000001137f85f0;
}



/* Entry: 10b70ee60; end: 10b70eedb; +[SCCTXContextClientInfo_RemixSettingsInfo descriptor] */

undefined * FUN_10b70ee60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f85f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac8e8,
                        &PTR____CFConstantStringClassReference_110f74718,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4048,2,4,0x1c);
    func_0x00010c228780();
    puRam00000001137f85f8 = puVar1;
  }
  return puRam00000001137f85f8;
}



/* Entry: 10b70eedc; end: 10b70ef5b; +[SCCTXContextClientInfo_CommerceInfo descriptor] */

undefined * FUN_10b70eedc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8600 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac938,
                        &PTR____CFConstantStringClassReference_110f74738,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4928,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8600 = puVar1;
  }
  return puRam00000001137f8600;
}



/* Entry: 10b70ef5c; end: 10b70efdb; +[SCCTXContextClientInfo_CommerceInfo_CommerceItemInfo descriptor] */

undefined * FUN_10b70ef5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8608 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac988,
                        &PTR____CFConstantStringClassReference_110f74758,&PTR_DAT_1133c37f0,
                        &PTR_s_key_1133c5048,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8608 = puVar1;
  }
  return puRam00000001137f8608;
}



/* Entry: 10b70efdc; end: 10b70f05b; +[SCCTXContextClientInfo_CommerceInfo_CommerceStoreInfo descriptor] */

undefined * FUN_10b70efdc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8610 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cac9d8,
                        &PTR____CFConstantStringClassReference_110f4d438,&PTR_DAT_1133c37f0,
                        &PTR_s_key_1133c4988,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8610 = puVar1;
  }
  return puRam00000001137f8610;
}



/* Entry: 10b70f05c; end: 10b70f0d7; +[SCCTXContextClientInfo_CommerceInfo_ScreenShopSnapEligibility descriptor] */

undefined * FUN_10b70f05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8618 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caca28,
                        &PTR____CFConstantStringClassReference_110f74778,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4088,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8618 = puVar1;
  }
  return puRam00000001137f8618;
}



/* Entry: 10b70f0d8; end: 10b70f157; +[SCCTXContextClientInfo_PollContextInfo descriptor] */

undefined * FUN_10b70f0d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8620 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caca78,
                        &PTR____CFConstantStringClassReference_110f74798,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c50c8,4,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8620 = puVar1;
  }
  return puRam00000001137f8620;
}



/* Entry: 10b70f158; end: 10b70f1d3; +[SCCTXContextClientInfo_QuestionStickerInfo descriptor] */

undefined * FUN_10b70f158(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8628 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacac8,
                        &PTR____CFConstantStringClassReference_110f747b8,&PTR_DAT_1133c37f0,
                        &PTR_s_question_1133c40c8,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f8628 = puVar1;
  }
  return puRam00000001137f8628;
}



/* Entry: 10b70f1d4; end: 10b70f253; +[SCCTXContextClientInfo_CameraContextInfo descriptor] */

undefined * FUN_10b70f1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8630 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacb18,
                        &PTR____CFConstantStringClassReference_110f747d8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c52c8,5,0x30,0x1c);
    func_0x00010c228780();
    puRam00000001137f8630 = puVar1;
  }
  return puRam00000001137f8630;
}



/* Entry: 10b70f254; end: 10b70f2cf; +[SCCTXContextClientInfo_ShoppingLensInfo descriptor] */

undefined * FUN_10b70f254(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8638 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacb68,
                        &PTR____CFConstantStringClassReference_110f747f8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3888,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8638 = puVar1;
  }
  return puRam00000001137f8638;
}



/* Entry: 10b70f2d0; end: 10b70f34b; +[SCCTXContextClientInfo_BitmojiOutfitInfo descriptor] */

undefined * FUN_10b70f2d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8640 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacbb8,
                        &PTR____CFConstantStringClassReference_110f74818,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c38a8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8640 = puVar1;
  }
  return puRam00000001137f8640;
}



/* Entry: 10b70f34c; end: 10b70f3c7; +[SCCTXContextClientInfo_StoryMentionRepost descriptor] */

undefined * FUN_10b70f34c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8648 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacc08,
                        &PTR____CFConstantStringClassReference_110f74838,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c38c8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8648 = puVar1;
  }
  return puRam00000001137f8648;
}



/* Entry: 10b70f3c8; end: 10b70f443; +[SCCTXContextClientInfo_LensCollectionInfo descriptor] */

undefined * FUN_10b70f3c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8650 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacc58,
                        &PTR____CFConstantStringClassReference_110f74858,&PTR_DAT_1133c37f0,
                        &PTR_s_collectionId_1133c38e8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8650 = puVar1;
  }
  return puRam00000001137f8650;
}



/* Entry: 10b70f444; end: 10b70f4bf; +[SCCTXContextClientInfo_TemplateInfo descriptor] */

undefined * FUN_10b70f444(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8658 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacca8,
                        &PTR____CFConstantStringClassReference_110f74878,&PTR_DAT_1133c37f0,
                        &PTR_s_templateId_1133c3908,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8658 = puVar1;
  }
  return puRam00000001137f8658;
}



/* Entry: 10b70f4c0; end: 10b70f53f; +[SCCTXContextClientInfo_DreamsInfo descriptor] */

undefined * FUN_10b70f4c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8660 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caccf8,
                        &PTR____CFConstantStringClassReference_110f74898,&PTR_DAT_1133c37f0,
                        &PTR_s_dreamPackId_1133c49e8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8660 = puVar1;
  }
  return puRam00000001137f8660;
}



/* Entry: 10b70f540; end: 10b70f5bf; +[SCCTXContextClientInfo_CustomizationInfo descriptor] */

undefined * FUN_10b70f540(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8668 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacd48,
                        &PTR____CFConstantStringClassReference_110f748b8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c5368,5,0x28,0x1c);
    func_0x00010c228780();
    puRam00000001137f8668 = puVar1;
  }
  return puRam00000001137f8668;
}



/* Entry: 10b70f5c0; end: 10b70f64f; +[SCCTXContextClientInfo_LensConfigInfo descriptor] */

undefined * FUN_10b70f5c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8670 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacd98,
                        &PTR____CFConstantStringClassReference_110f748d8,&PTR_DAT_1133c37f0,
                        &PTR_s_promptId_1133c5e48,10,0x48,0x1c);
    func_0x00010c2289e0();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cac0f0);
    puRam00000001137f8670 = puVar1;
  }
  return puRam00000001137f8670;
}



/* Entry: 10b70f650; end: 10b70f6cb; +[SCCTXContextClientInfo_LensConfigInfo_LensQuestionMetadata descriptor] */

undefined * FUN_10b70f650(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8678 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacde8,
                        &PTR____CFConstantStringClassReference_110f748f8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3928,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8678 = puVar1;
  }
  return puRam00000001137f8678;
}



/* Entry: 10b70f6cc; end: 10b70f767; +[SCCTXContextClientInfo_LensConfigInfo_LensTappableElementInfo descriptor] */

undefined * FUN_10b70f6cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8680 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cace38,
                        &PTR____CFConstantStringClassReference_110f74918,&PTR_DAT_1133c37f0,
                        &PTR_s_key_1133c4108,2,0x18,0x1c);
    func_0x00010c229040();
    func_0x00010c228780(puVar1,param_2,&PTR_PTR_112cacd98);
    puRam00000001137f8680 = puVar1;
  }
  return puRam00000001137f8680;
}



/* Entry: 10b70f768; end: 10b70f7e3; +[SCCTXContextClientInfo_AICameraTextToImageInfo descriptor] */

undefined * FUN_10b70f768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8688 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cace88,
                        &PTR____CFConstantStringClassReference_110f74938,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f8688 = puVar1;
  }
  return puRam00000001137f8688;
}



/* Entry: 10b70f7e4; end: 10b70f85f; +[SCCTXContextClientInfo_PostCaptureAIInfo descriptor] */

undefined * FUN_10b70f7e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8690 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caced8,
                        &PTR____CFConstantStringClassReference_110f74958,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f8690 = puVar1;
  }
  return puRam00000001137f8690;
}



/* Entry: 10b70f860; end: 10b70f8df; +[SCCTXContextClientInfo_RepostToStoryInfo descriptor] */

undefined * FUN_10b70f860(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8698 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacf28,
                        &PTR____CFConstantStringClassReference_110f73d98,&PTR_DAT_1133c37f0,
                        &PTR_s_snapId_1133c5c48,8,0x40,0x1c);
    func_0x00010c228780();
    puRam00000001137f8698 = puVar1;
  }
  return puRam00000001137f8698;
}



/* Entry: 10b70f8e0; end: 10b70f95b; +[SCCTXContextClientInfo_TextModeInfo descriptor] */

undefined * FUN_10b70f8e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacf78,
                        &PTR____CFConstantStringClassReference_110f74978,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f86a0 = puVar1;
  }
  return puRam00000001137f86a0;
}



/* Entry: 10b70f95c; end: 10b70f9d7; +[SCCTXContextClientInfo_GenAIFeaturedStoryInfo descriptor] */

undefined * FUN_10b70f95c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cacfc8,
                        &PTR____CFConstantStringClassReference_110f74998,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3948,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137f86a8 = puVar1;
  }
  return puRam00000001137f86a8;
}



/* Entry: 10b70f9d8; end: 10b70fa53; +[SCCTXContextClientInfo_CuratedStoryContextInfo descriptor] */

undefined * FUN_10b70f9d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad018,
                        &PTR____CFConstantStringClassReference_110f749b8,&PTR_DAT_1133c37f0,
                        &PTR_s_originalSnapId_1133c3968,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f86b0 = puVar1;
  }
  return puRam00000001137f86b0;
}



/* Entry: 10b70fa54; end: 10b70facf; +[SCCTXContextClientInfo_LensMusicInfo descriptor] */

undefined * FUN_10b70fa54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad068,
                        &PTR____CFConstantStringClassReference_110f749d8,&PTR_DAT_1133c37f0,
                        &PTR_s_trackId_1133c4148,2,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f86b8 = puVar1;
  }
  return puRam00000001137f86b8;
}



/* Entry: 10b70fad0; end: 10b70fb4b; +[SCCTXContextClientInfo_MyAISnapInfo descriptor] */

undefined * FUN_10b70fad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad0b8,
                        &PTR____CFConstantStringClassReference_110f749f8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3988,1,8,0x1c);
    func_0x00010c228780();
    puRam00000001137f86c0 = puVar1;
  }
  return puRam00000001137f86c0;
}



/* Entry: 10b70fb4c; end: 10b70fbc7; +[SCCTXContextClientInfo_MySelfieInfo descriptor] */

undefined * FUN_10b70fb4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad108,
                        &PTR____CFConstantStringClassReference_110f74a18,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    func_0x00010c228780();
    puRam00000001137f86c8 = puVar1;
  }
  return puRam00000001137f86c8;
}



/* Entry: 10b70fbc8; end: 10b70fc47; +[SCCTXContextClientInfo_AudioMixingInfo descriptor] */

undefined * FUN_10b70fbc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad158,
                        &PTR____CFConstantStringClassReference_110f74a38,&PTR_DAT_1133c37f0,
                        &PTR_s_source_1133c4a48,3,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f86d0 = puVar1;
  }
  return puRam00000001137f86d0;
}



/* Entry: 10b70fc48; end: 10b70fcc3; +[SCCTXContextClientInfo_QuickCutInfo descriptor] */

undefined * FUN_10b70fc48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad1a8,
                        &PTR____CFConstantStringClassReference_110f74a58,&PTR_DAT_1133c37f0,
                        &PTR_s_lensId_1133c4188,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001137f86d8 = puVar1;
  }
  return puRam00000001137f86d8;
}



/* Entry: 10b70fcc4; end: 10b70fd3f; +[SCCTXContextClientInfo_SnapMeStickerInfo descriptor] */

undefined * FUN_10b70fcc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad1f8,
                        &PTR____CFConstantStringClassReference_110f74a78,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c39a8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f86e0 = puVar1;
  }
  return puRam00000001137f86e0;
}



/* Entry: 10b70fd40; end: 10b70fdab; +[SCCTXActionMetric descriptor] */

void FUN_10b70fd40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad248,
                        &PTR____CFConstantStringClassReference_110f74a98,&PTR_DAT_1133c37f0,
                        &PTR_s_actionType_1133c4aa8,3,0x18,0x1c);
    puRam00000001137f86e8 = puVar1;
  }
  return;
}



/* Entry: 10b70fdac; end: 10b70fe13; +[SCCTXUrlAction descriptor] */

void FUN_10b70fdac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad298,
                        &PTR____CFConstantStringClassReference_110f74ab8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c41c8,2,0x10,0x1c);
    puRam00000001137f86f0 = puVar1;
  }
  return;
}



/* Entry: 10b70fe14; end: 10b70fe7b; +[SCCTXShowSnapAction descriptor] */

void FUN_10b70fe14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f86f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad2e8,
                        &PTR____CFConstantStringClassReference_110f74ad8,&PTR_DAT_1133c37f0,
                        &PTR_s_snapId_1133c39c8,1,0x10,0x1c);
    puRam00000001137f86f8 = puVar1;
  }
  return;
}



/* Entry: 10b70fe7c; end: 10b70fefb; +[SCCTXSnapKitActionInfo descriptor] */

undefined * FUN_10b70fe7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8700 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad338,
                        &PTR____CFConstantStringClassReference_110f74af8,&PTR_DAT_1133c37f0,
                        &PTR_s_snapKitApplicationId_1133c5408,5,0x30,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8700 = puVar1;
  }
  return puRam00000001137f8700;
}



/* Entry: 10b70fefc; end: 10b70ff7b; +[SCCTXSnapKitIdentityWebViewAction descriptor] */

undefined * FUN_10b70fefc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8708 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad388,
                        &PTR____CFConstantStringClassReference_110f74b18,&PTR_DAT_1133c37f0,
                        &PTR_s_snapKitApplicationId_1133c56a8,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8708 = puVar1;
  }
  return puRam00000001137f8708;
}



/* Entry: 10b70ff7c; end: 10b70fffb; +[SCCTXSnapKitInviteOpenAction descriptor] */

undefined * FUN_10b70ff7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8710 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad3d8,
                        &PTR____CFConstantStringClassReference_110f74b38,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4b08,3,0x20,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8710 = puVar1;
  }
  return puRam00000001137f8710;
}



/* Entry: 10b70fffc; end: 10b710063; +[SCCTXChatAction descriptor] */

void FUN_10b70fffc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8718 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad428,
                        &PTR____CFConstantStringClassReference_110f74b58,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    puRam00000001137f8718 = puVar1;
  }
  return;
}



/* Entry: 10b710064; end: 10b7100cb; +[SCCTXQuickReactionAction descriptor] */

void FUN_10b710064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8720 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad478,
                        &PTR____CFConstantStringClassReference_110f74b78,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    puRam00000001137f8720 = puVar1;
  }
  return;
}



/* Entry: 10b7100cc; end: 10b710133; +[SCCTXAiStoryReplyAction descriptor] */

void FUN_10b7100cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8728 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad4c8,
                        &PTR____CFConstantStringClassReference_110f74b98,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    puRam00000001137f8728 = puVar1;
  }
  return;
}



/* Entry: 10b710134; end: 10b71019b; +[SCCTXCameraAction descriptor] */

void FUN_10b710134(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8730 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad518,
                        &PTR____CFConstantStringClassReference_110f74bb8,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    puRam00000001137f8730 = puVar1;
  }
  return;
}



/* Entry: 10b71019c; end: 10b71022b; +[SCCTXCameraV2Action descriptor] */

undefined * FUN_10b71019c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8738 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad568,
                        &PTR____CFConstantStringClassReference_110f74bd8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c5a88,7,0x40,0x1c);
    func_0x00010c229040();
    puRam00000001137f8738 = puVar1;
  }
  return puRam00000001137f8738;
}



/* Entry: 10b71022c; end: 10b7102a7; +[SCCTXCameraV2Action_Music descriptor] */

undefined * FUN_10b71022c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8740 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad5b8,
                        &PTR____CFConstantStringClassReference_110dcb5f8,&PTR_DAT_1133c37f0,
                        &PTR_s_trackId_1133c39e8,1,0x10,0x1c);
    func_0x00010c228780();
    puRam00000001137f8740 = puVar1;
  }
  return puRam00000001137f8740;
}



/* Entry: 10b7102a8; end: 10b71030f; +[SCCTXCardsAction descriptor] */

void FUN_10b7102a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8748 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad608,
                        &PTR____CFConstantStringClassReference_110f74bf8,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    puRam00000001137f8748 = puVar1;
  }
  return;
}



/* Entry: 10b710310; end: 10b71037b; +[SCCTXGroupInviteAction descriptor] */

void FUN_10b710310(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8750 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad658,
                        &PTR____CFConstantStringClassReference_110f74c18,&PTR_DAT_1133c37f0,
                        &PTR_s_deeplink_1133c4b68,3,0x20,0x1c);
    puRam00000001137f8750 = puVar1;
  }
  return;
}



/* Entry: 10b71037c; end: 10b7103e3; +[SCCTXStoryReplyAction descriptor] */

void FUN_10b71037c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8758 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad6a8,
                        &PTR____CFConstantStringClassReference_110f74c38,&PTR_DAT_1133c37f0,
                        &PTR_s_request_1133c3a08,1,0x10,0x1c);
    puRam00000001137f8758 = puVar1;
  }
  return;
}



/* Entry: 10b7103e4; end: 10b71044b; +[SCCTXStoryInviteAction descriptor] */

void FUN_10b7103e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8760 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad6f8,
                        &PTR____CFConstantStringClassReference_110f74c58,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3a28,1,0x10,0x1c);
    puRam00000001137f8760 = puVar1;
  }
  return;
}



/* Entry: 10b71044c; end: 10b7104cb; +[SCCTXGameAction descriptor] */

undefined * FUN_10b71044c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8768 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad748,
                        &PTR____CFConstantStringClassReference_110f74c78,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c5768,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam00000001137f8768 = puVar1;
  }
  return puRam00000001137f8768;
}



/* Entry: 10b7104cc; end: 10b710537; +[SCCTXUserProfileAction descriptor] */

void FUN_10b7104cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8770 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad798,
                        &PTR____CFConstantStringClassReference_110f74c98,&PTR_DAT_1133c37f0,
                        &PTR_s_userId_1133c54a8,5,0x30,0x1c);
    puRam00000001137f8770 = puVar1;
  }
  return;
}



/* Entry: 10b710538; end: 10b71059f; +[SCCTXPublicProfileAction descriptor] */

void FUN_10b710538(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8778 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad7e8,
                        &PTR____CFConstantStringClassReference_110f74cb8,&PTR_DAT_1133c37f0,
                        &PTR_s_profileId_1133c4208,2,0x18,0x1c);
    puRam00000001137f8778 = puVar1;
  }
  return;
}



/* Entry: 10b7105a0; end: 10b710607; +[SCCTXSnappableAction descriptor] */

void FUN_10b7105a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8780 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad838,
                        &PTR____CFConstantStringClassReference_110f74cd8,&PTR_DAT_1133c37f0,
                        &PTR_s_lensId_1133c4248,2,0x18,0x1c);
    puRam00000001137f8780 = puVar1;
  }
  return;
}



/* Entry: 10b710608; end: 10b710673; +[SCCTXLensAction descriptor] */

void FUN_10b710608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8788 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf728,
                        &PTR____CFConstantStringClassReference_110f74cf8,&PTR_DAT_1133c37f0,
                        &PTR_s_lensId_1133c5d48,8,0x28,0x1c);
    puRam00000001137f8788 = puVar1;
  }
  return;
}



/* Entry: 10b710674; end: 10b7106fb; +[SCCTXLensAction_CustomizationInfo descriptor] */

undefined * FUN_10b710674(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8790 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112caf750,
                        &PTR____CFConstantStringClassReference_110f748b8,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c4bc8,3,0x20,0x1c);
    func_0x00010c228780();
    puRam00000001137f8790 = puVar1;
  }
  return puRam00000001137f8790;
}



/* Entry: 10b7106fc; end: 10b710763; +[SCCTXLensCollectionAction descriptor] */

void FUN_10b7106fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f8798 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad8d8,
                        &PTR____CFConstantStringClassReference_110f74d18,&PTR_DAT_1133c37f0,
                        &PTR_s_collectionId_1133c4288,2,0x18,0x1c);
    puRam00000001137f8798 = puVar1;
  }
  return;
}



/* Entry: 10b710764; end: 10b7107cb; +[SCCTXCameoOnboardingAction descriptor] */

void FUN_10b710764(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f87a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad928,
                        &PTR____CFConstantStringClassReference_110f74d38,&PTR_DAT_1133c37f0,
                        &PTR_DAT_1133c3a48,1,0x10,0x1c);
    puRam00000001137f87a0 = puVar1;
  }
  return;
}



/* Entry: 10b7107cc; end: 10b710833; +[SCCTXBoostAction descriptor] */

void FUN_10b7107cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f87a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112cad978,
                        &PTR____CFConstantStringClassReference_110f47f18,&PTR_DAT_1133c37f0,0,0,4,
                        0x1c);
    puRam00000001137f87a8 = puVar1;
  }
  return;
}


