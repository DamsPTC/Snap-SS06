/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7f3084; end: 10b7f309f;  */

bool FUN_10b7f3084(uint param_1)

{
  return param_1 < 0x1c || param_1 == 0xffffd8f1;
}



/* Entry: 10b7f30a0; end: 10b7f311b;  */

undefined * FUN_10b7f30a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb910 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f899b8,
                        &UNK_10e5ee090,&UNK_10e5ee0c8,4,FUN_10b7f311c,0);
    do {
      if (puRam00000001137fb910 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb910;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb910,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb910 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb910;
}



/* Entry: 10b7f311c; end: 10b7f3127;  */

bool FUN_10b7f311c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7f3128; end: 10b7f31b7;  */

undefined * FUN_10b7f3128(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb918 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e251b8,
                        &UNK_10e5ee0d8,&UNK_10e5ee6f4,0x49,FUN_10b7f31b8,0,&UNK_10e5ee818);
    do {
      if (puRam00000001137fb918 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb918;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb918,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb918 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb918;
}



/* Entry: 10b7f31b8; end: 10b7f31c3;  */

bool FUN_10b7f31b8(uint param_1)

{
  return param_1 < 0x49;
}



/* Entry: 10b7f31c4; end: 10b7f323f;  */

undefined * FUN_10b7f31c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb920 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f899d8,
                        &UNK_10e5ee880,&UNK_10e5ee89c,3,FUN_10b7f3240,0);
    do {
      if (puRam00000001137fb920 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb920;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb920,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb920 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb920;
}



/* Entry: 10b7f3240; end: 10b7f324b;  */

bool FUN_10b7f3240(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7f324c; end: 10b7f32c7;  */

undefined * FUN_10b7f324c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb928 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f899f8,
                        &UNK_10e5ee8a8,&UNK_10e5ee8c4,4,FUN_10b7f32c8,0);
    do {
      if (puRam00000001137fb928 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb928;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb928,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb928 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb928;
}



/* Entry: 10b7f32c8; end: 10b7f32d3;  */

bool FUN_10b7f32c8(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7f32d4; end: 10b7f334f;  */

undefined * FUN_10b7f32d4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb930 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89a18,
                        &UNK_10e5ee8d4,&UNK_10e5ee904,5,FUN_10b7f3350,0);
    do {
      if (puRam00000001137fb930 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb930;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb930,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb930 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb930;
}



/* Entry: 10b7f3350; end: 10b7f335b;  */

bool FUN_10b7f3350(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7f335c; end: 10b7f33e7; +[SCMemoriesCameraRollItem descriptor] */

undefined * FUN_10b7f335c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb938 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3000,
                        &PTR____CFConstantStringClassReference_110ec8c18,&PTR_DAT_1133f71e8,
                        &PTR_s_id_p_1133f7220,0xf,0x50,0x1c);
    func_0x00010c229040();
    puRam00000001137fb938 = puVar1;
  }
  return puRam00000001137fb938;
}



/* Entry: 10b7f33e8; end: 10b7f344f; +[SCMemoriesCameraRollItems descriptor] */

void FUN_10b7f33e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb940 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3050,
                        &PTR____CFConstantStringClassReference_110f89a38,&PTR_DAT_1133f71e8,
                        &PTR_s_itemsArray_1133f7200,1,0x10,0x1c);
    puRam00000001137fb940 = puVar1;
  }
  return;
}



/* Entry: 10b7f3450; end: 10b7f34b7; +[SCMapsRequestOptions descriptor] */

void FUN_10b7f3450(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb948 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce30f0,
                        &PTR____CFConstantStringClassReference_110e8ca58,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f74b8,3,0xc,0x1c);
    puRam00000001137fb948 = puVar1;
  }
  return;
}



/* Entry: 10b7f34b8; end: 10b7f3533; +[SCMapsAddress descriptor] */

undefined * FUN_10b7f34b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb950 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3140,
                        &PTR____CFConstantStringClassReference_110f34e38,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f78d8,0x12,0x98,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fb950 = puVar1;
  }
  return puRam00000001137fb950;
}



/* Entry: 10b7f3534; end: 10b7f359b; +[SCMapsLatLng descriptor] */

void FUN_10b7f3534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb958 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3190,
                        &PTR____CFConstantStringClassReference_110e5b098,&PTR_DAT_1133f7400,
                        &PTR_s_lat_1133f7438,2,0x18,0x1c);
    puRam00000001137fb958 = puVar1;
  }
  return;
}



/* Entry: 10b7f359c; end: 10b7f3603; +[SCMapsLocationAddressRequest descriptor] */

void FUN_10b7f359c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb960 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce31e0,
                        &PTR____CFConstantStringClassReference_110f89a58,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f7518,3,0x18,0x1c);
    puRam00000001137fb960 = puVar1;
  }
  return;
}



/* Entry: 10b7f3604; end: 10b7f366b; +[SCMapsLocationAddressResponse descriptor] */

void FUN_10b7f3604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb968 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3230,
                        &PTR____CFConstantStringClassReference_110f89a78,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f7478,2,0x18,0x1c);
    puRam00000001137fb968 = puVar1;
  }
  return;
}



/* Entry: 10b7f366c; end: 10b7f36d3; +[SCMapsAddressResult descriptor] */

void FUN_10b7f366c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb970 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3280,
                        &PTR____CFConstantStringClassReference_110f89a98,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f7578,3,0x18,0x1c);
    puRam00000001137fb970 = puVar1;
  }
  return;
}



/* Entry: 10b7f36d4; end: 10b7f373b; +[SCMapsLocationAddressWithLocalizationsRequest descriptor] */

void FUN_10b7f36d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb978 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce32d0,
                        &PTR____CFConstantStringClassReference_110f89ab8,&PTR_DAT_1133f7400,
                        &PTR_s_location_1133f7638,4,0x20,0x1c);
    puRam00000001137fb978 = puVar1;
  }
  return;
}



/* Entry: 10b7f373c; end: 10b7f37a3; +[SCMapsLocationAddressWithLocalizationsResponse descriptor] */

void FUN_10b7f373c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb980 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3320,
                        &PTR____CFConstantStringClassReference_110f89ad8,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f75d8,3,0x20,0x1c);
    puRam00000001137fb980 = puVar1;
  }
  return;
}



/* Entry: 10b7f37a4; end: 10b7f380b; +[SCMapsLocationAddressWithLocalizationsBatchRequest descriptor] */

void FUN_10b7f37a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb988 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3370,
                        &PTR____CFConstantStringClassReference_110f89af8,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f76b8,4,0x20,0x1c);
    puRam00000001137fb988 = puVar1;
  }
  return;
}



/* Entry: 10b7f380c; end: 10b7f3873; +[SCMapsLocationAddressWithLocalizationsBatchResponse descriptor] */

void FUN_10b7f380c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb990 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce33c0,
                        &PTR____CFConstantStringClassReference_110f89b18,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f7418,1,0x10,0x1c);
    puRam00000001137fb990 = puVar1;
  }
  return;
}



/* Entry: 10b7f3874; end: 10b7f38ef; +[SCMapsAddressIds descriptor] */

undefined * FUN_10b7f3874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb998 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3410,
                        &PTR____CFConstantStringClassReference_110f89b38,&PTR_DAT_1133f7400,
                        &PTR_DAT_1133f7738,0xd,0x70,0x1c);
    func_0x00010c2289e0();
    puRam00000001137fb998 = puVar1;
  }
  return puRam00000001137fb998;
}



/* Entry: 10b7f38f0; end: 10b7f3957; +[MemoriesTinyClip descriptor] */

void FUN_10b7f38f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce34b0,
                        &PTR____CFConstantStringClassReference_110f89b58,&PTR_DAT_1133f7b18,
                        &PTR_DAT_1133f7b30,2,0x10,0x1c);
    puRam00000001137fb9a0 = puVar1;
  }
  return;
}



/* Entry: 10b7f3958; end: 10b7f39bf; +[TinyClipMetadata descriptor] */

void FUN_10b7f3958(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3500,
                        &PTR____CFConstantStringClassReference_110f89b78,&PTR_DAT_1133f7b18,
                        &PTR_DAT_1133f7b70,2,0x10,0x1c);
    puRam00000001137fb9a8 = puVar1;
  }
  return;
}



/* Entry: 10b7f39c0; end: 10b7f3aa3; +[CaptionsWithConfidenceScore descriptor] */

void FUN_10b7f39c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3550,
                        &PTR____CFConstantStringClassReference_110f89b98,&PTR_DAT_1133f7b18,
                        &PTR_DAT_1133f7bb0,2,0x10,0x1c);
    puRam00000001137fb9b0 = puVar1;
  }
  return;
}



/* Entry: 10b7f3aa4; end: 10b7f3aaf;  */

bool FUN_10b7f3aa4(uint param_1)

{
  return param_1 < 0x41e;
}



/* Entry: 10b7f3ab0; end: 10b7f3b93; +[VisualTagsConfidence descriptor] */

void FUN_10b7f3ab0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce35f0,
                        &PTR____CFConstantStringClassReference_110f89bd8,&PTR_DAT_1133f7bf0,
                        &PTR_DAT_1133f7c08,2,0x10,0x1c);
    puRam00000001137fb9c0 = puVar1;
  }
  return;
}



/* Entry: 10b7f3b94; end: 10b7f3b9f;  */

bool FUN_10b7f3b94(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7f3ba0; end: 10b7f3c07; +[VisualTag descriptor] */

void FUN_10b7f3ba0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3690,
                        &PTR____CFConstantStringClassReference_110ec82b8,&PTR_DAT_1133f7c48,
                        &PTR_s_value_1133f7c60,2,0xc,0x1c);
    puRam00000001137fb9d0 = puVar1;
  }
  return;
}



/* Entry: 10b7f3c08; end: 10b7f3cd7; +[TraceEventRoot extensionRegistry] */

undefined * FUN_10b7f3c08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137fb9d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e14a0;
    puRam00000001137fb9d8 = puVar1;
    func_0x00010bf9dda0(PTR_PTR_1126e14a0);
    func_0x00010bef8160(puVar1,param_2,puVar2);
  }
  return puRam00000001137fb9d8;
}



/* Entry: 10b7f3cd8; end: 10b7f3ce3;  */

bool FUN_10b7f3cd8(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 10b7f3ce4; end: 10b7f3d5f;  */

undefined * FUN_10b7f3ce4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fb9e8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89c38,
                        &UNK_10e5f1f1c,&UNK_10e5f1f80,4,FUN_10b7f3d60,0);
    do {
      if (puRam00000001137fb9e8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fb9e8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fb9e8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fb9e8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fb9e8;
}



/* Entry: 10b7f3d60; end: 10b7f3d6b;  */

bool FUN_10b7f3d60(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7f3d6c; end: 10b7f3df7; +[TraceEvent descriptor] */

undefined * FUN_10b7f3d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3730,
                        &PTR____CFConstantStringClassReference_110f89c58,&PTR_DAT_1133f7ca8,
                        &PTR_DAT_1133f7cc0,4,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001137fb9f0 = puVar1;
  }
  return puRam00000001137fb9f0;
}



/* Entry: 10b7f3df8; end: 10b7f3e5f; +[PerfettoTrace descriptor] */

void FUN_10b7f3df8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fb9f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3780,
                        &PTR____CFConstantStringClassReference_110f89c78,&PTR_DAT_1133f7ca8,
                        &PTR_DAT_1133f7d40,4,0x20,0x1c);
    puRam00000001137fb9f8 = puVar1;
  }
  return;
}



/* Entry: 10b7f3e60; end: 10b7f3ec7; +[SCSpectrumCommonEventIdentifier descriptor] */

void FUN_10b7f3e60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3820,
                        &PTR____CFConstantStringClassReference_110f89c98,&PTR_DAT_1133f7dc0,
                        &PTR_s_uuid_1133f7dd8,2,0x18,0x1c);
    puRam00000001137fba00 = puVar1;
  }
  return;
}



/* Entry: 10b7f3ec8; end: 10b7f3f2f; +[SCSpectrumCommonUUID descriptor] */

void FUN_10b7f3ec8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3870,
                        &PTR____CFConstantStringClassReference_110e7e6d8,&PTR_DAT_1133f7dc0,
                        &PTR_DAT_1133f7e18,2,0x18,0x1c);
    puRam00000001137fba08 = puVar1;
  }
  return;
}



/* Entry: 10b7f3f30; end: 10b7f4013; +[SCAdsPreviewLeadGenerationLeadGenAdPreviewEvent descriptor] */

void FUN_10b7f3f30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3910,
                        &PTR____CFConstantStringClassReference_110f89cb8,&PTR_DAT_1133f7e58,
                        &PTR_DAT_1133f7e70,5,0x30,0x1c);
    puRam00000001137fba10 = puVar1;
  }
  return;
}



/* Entry: 10b7f4014; end: 10b7f401f;  */

bool FUN_10b7f4014(uint param_1)

{
  return param_1 < 8;
}



/* Entry: 10b7f4020; end: 10b7f409b;  */

undefined * FUN_10b7f4020(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba20 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89cf8,
                        &UNK_10e5f201c,&UNK_10e5f20e8,0xc,FUN_10b7f409c,0);
    do {
      if (puRam00000001137fba20 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba20;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba20,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba20 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba20;
}



/* Entry: 10b7f409c; end: 10b7f40a7;  */

bool FUN_10b7f409c(uint param_1)

{
  return param_1 < 0xc;
}



/* Entry: 10b7f40a8; end: 10b7f4123;  */

undefined * FUN_10b7f40a8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba28 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89d18,
                        &UNK_10e5f2118,&UNK_10e5f2144,4,FUN_10b7f4124,0);
    do {
      if (puRam00000001137fba28 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba28;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba28,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba28 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba28;
}



/* Entry: 10b7f4124; end: 10b7f412f;  */

bool FUN_10b7f4124(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10b7f4130; end: 10b7f41ab;  */

undefined * FUN_10b7f4130(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89d38,
                        &UNK_10e5f2154,&UNK_10e5f2190,3,FUN_10b7f41ac,0);
    do {
      if (puRam00000001137fba30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba30;
}



/* Entry: 10b7f41ac; end: 10b7f41b7;  */

bool FUN_10b7f41ac(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7f41b8; end: 10b7f4233;  */

undefined * FUN_10b7f41b8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba38 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89d58,
                        &UNK_10e5f219c,&UNK_10e5f21c8,3,FUN_10b7f4234,0);
    do {
      if (puRam00000001137fba38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba38;
}



/* Entry: 10b7f4234; end: 10b7f423f;  */

bool FUN_10b7f4234(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7f4240; end: 10b7f42bb;  */

undefined * FUN_10b7f4240(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89d78,
                        &UNK_10e5f21d4,&UNK_10e5f21fc,3,FUN_10b7f42bc,0);
    do {
      if (puRam00000001137fba40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba40;
}



/* Entry: 10b7f42bc; end: 10b7f42c7;  */

bool FUN_10b7f42bc(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7f42c8; end: 10b7f4343;  */

undefined * FUN_10b7f42c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba48 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89d98,
                        &UNK_10e5f2208,&UNK_10e5f2254,3,FUN_10b7f4344,0);
    do {
      if (puRam00000001137fba48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba48;
}



/* Entry: 10b7f4344; end: 10b7f434f;  */

bool FUN_10b7f4344(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10b7f4350; end: 10b7f43cb;  */

undefined * FUN_10b7f4350(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba50 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89db8,
                        &UNK_10e5f2260,&UNK_10e5f2298,5,FUN_10b7f43cc,0);
    do {
      if (puRam00000001137fba50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba50;
}



/* Entry: 10b7f43cc; end: 10b7f43d7;  */

bool FUN_10b7f43cc(uint param_1)

{
  return param_1 < 5;
}



/* Entry: 10b7f43d8; end: 10b7f4453;  */

undefined * FUN_10b7f43d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137fba58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f89dd8,
                        &UNK_10e5f22ac,&UNK_10e5f2394,6,FUN_10b7f4454,0);
    do {
      if (puRam00000001137fba58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001137fba58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137fba58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137fba58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137fba58;
}



/* Entry: 10b7f4454; end: 10b7f445f;  */

bool FUN_10b7f4454(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 10b7f4460; end: 10b7f44c7; +[SCAdsProtoLeadGenerationFieldIdentifier descriptor] */

void FUN_10b7f4460(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce39b0,
                        &PTR____CFConstantStringClassReference_110f89df8,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f7fc8,3,0x18,0x1c);
    puRam00000001137fba60 = puVar1;
  }
  return;
}



/* Entry: 10b7f44c8; end: 10b7f452f; +[SCAdsProtoLeadGenerationSubmittedField descriptor] */

void FUN_10b7f44c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba68 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3a00,
                        &PTR____CFConstantStringClassReference_110f89e18,&PTR_DAT_1133f7f10,
                        &PTR_s_identifier_1133f8028,5,0x28,0x1c);
    puRam00000001137fba68 = puVar1;
  }
  return;
}



/* Entry: 10b7f4530; end: 10b7f4597; +[SCAdsProtoLeadGenerationSubmittedConsentCheckbox descriptor] */

void FUN_10b7f4530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3a50,
                        &PTR____CFConstantStringClassReference_110f89e38,&PTR_DAT_1133f7f10,
                        &PTR_s_label_1133f7f48,2,0x10,0x1c);
    puRam00000001137fba70 = puVar1;
  }
  return;
}



/* Entry: 10b7f4598; end: 10b7f45ff; +[SCAdsProtoLeadGenerationSubmittedLead descriptor] */

void FUN_10b7f4598(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba78 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3aa0,
                        &PTR____CFConstantStringClassReference_110f89e58,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f8248,0xb,0x48,0x1c);
    puRam00000001137fba78 = puVar1;
  }
  return;
}



/* Entry: 10b7f4600; end: 10b7f4667; +[SCAdsProtoLeadGenerationEndPageInteraction descriptor] */

void FUN_10b7f4600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba80 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3af0,
                        &PTR____CFConstantStringClassReference_110f89e78,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f7f28,1,4,0x1c);
    puRam00000001137fba80 = puVar1;
  }
  return;
}



/* Entry: 10b7f4668; end: 10b7f46cf; +[SCAdsProtoLeadGenerationLeadCertificateData descriptor] */

void FUN_10b7f4668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba88 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3b40,
                        &PTR____CFConstantStringClassReference_110f89e98,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f80c8,6,0x30,0x1c);
    puRam00000001137fba88 = puVar1;
  }
  return;
}



/* Entry: 10b7f46d0; end: 10b7f4737; +[SCAdsProtoLeadGenerationLeadCertificateTrackData descriptor] */

void FUN_10b7f46d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba90 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3b90,
                        &PTR____CFConstantStringClassReference_110f89eb8,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f83a8,0xb,0x58,0x1c);
    puRam00000001137fba90 = puVar1;
  }
  return;
}



/* Entry: 10b7f4738; end: 10b7f479f; +[SCAdsProtoLeadGenerationInputFieldCertificateTrackData descriptor] */

void FUN_10b7f4738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fba98 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3be0,
                        &PTR____CFConstantStringClassReference_110f89ed8,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f8188,6,0x20,0x1c);
    puRam00000001137fba98 = puVar1;
  }
  return;
}



/* Entry: 10b7f47a0; end: 10b7f4807; +[SCAdsProtoLeadGenerationConsentFieldCertificateTrackData descriptor] */

void FUN_10b7f47a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbaa0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3c30,
                        &PTR____CFConstantStringClassReference_110f89ef8,&PTR_DAT_1133f7f10,
                        &PTR_DAT_1133f7f88,2,4,0x1c);
    puRam00000001137fbaa0 = puVar1;
  }
  return;
}



/* Entry: 10b7f4808; end: 10b7f488b; +[SSXExtensionsRoot extensionRegistry] */

undefined * FUN_10b7f4808(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (puRam00000001137fbaa8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126e1498;
    _objc_alloc_init();
    puVar2 = PTR_PTR_1126e1538;
    puRam00000001137fbaa8 = puVar1;
    _objc_alloc(PTR_PTR_1126e1538);
    func_0x00010c011220();
    func_0x00010bef8120(puRam00000001137fbaa8,param_2,puVar2);
    func_0x00010bfcd1c0(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  return puRam00000001137fbaa8;
}



/* Entry: 10b7f488c; end: 10b7f4987; +[FilterOptions descriptor] */

undefined * FUN_10b7f488c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137fbab0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ce3d20,
                        &PTR____CFConstantStringClassReference_110f89f18,&PTR_DAT_1133f8538,0,0,4,
                        0x1c);
    func_0x00010c2289c0();
    puRam00000001137fbab0 = puVar1;
  }
  return puRam00000001137fbab0;
}



/* Entry: 10b7f4988; end: 10b7f499f;  */

uint FUN_10b7f4988(uint param_1)

{
  return (uint)(param_1 < 8) & 0xf7U >> (ulong)(param_1 & 0x1f);
}



/* Entry: 10b7f49a0; end: 10b7f49ab; -[SCBackgroundExecutionServices .cxx_destruct] */

void FUN_10b7f49a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f49ac; end: 10b7f49b3; -[SCContentDeliveryServices contentResolutionMonitor] */

undefined8 FUN_10b7f49ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f49b4; end: 10b7f49ef; -[SCContentDeliveryServices .cxx_destruct] */

void FUN_10b7f49b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f49f0; end: 10b7f49f7; -[SCSystemContentDeliveryServices bufferedContentFetcher] */

undefined8 FUN_10b7f49f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7f49f8; end: 10b7f49ff; -[SCSystemContentDeliveryServices cacheController] */

undefined8 FUN_10b7f49f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b7f4a00; end: 10b7f4a53; -[SCSystemContentDeliveryServices .cxx_destruct] */

void FUN_10b7f4a00(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f4a54; end: 10b7f4bc7; -[SCNNetworkManagerUrlRequestImpl initWithUrl:relativePath:requestMethod:headers:payload:parameters:key:isAuthenticated:trackingInfo:] */

undefined1 *
FUN_10b7f4a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_11270af98;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = param_10;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f4bc8; end: 10b7f4bef; -[SCNNetworkManagerUrlRequestImpl getUrl] */

void FUN_10b7f4bc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7f4bf0; end: 10b7f4bf7; -[SCNNetworkManagerUrlRequestImpl getIsRelativePath] */

undefined1 FUN_10b7f4bf0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10b7f4bf8; end: 10b7f4bff; -[SCNNetworkManagerUrlRequestImpl getRequestMethod] */

undefined8 FUN_10b7f4bf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b7f4c00; end: 10b7f4c07; -[SCNNetworkManagerUrlRequestImpl getRequestType] */

undefined8 FUN_10b7f4c00(void)

{
  return 0;
}



/* Entry: 10b7f4c08; end: 10b7f4c2f; -[SCNNetworkManagerUrlRequestImpl getHeaders] */

void FUN_10b7f4c08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7f4c30; end: 10b7f4c57; -[SCNNetworkManagerUrlRequestImpl getPayloadDeprecated] */

void FUN_10b7f4c30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7f4c58; end: 10b7f4c5f; -[SCNNetworkManagerUrlRequestImpl getPayloadDataRef] */

void FUN_10b7f4c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf63650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_data_1125b6738);
  return;
}



/* Entry: 10b7f4c60; end: 10b7f4c67; -[SCNNetworkManagerUrlRequestImpl getPayloadLocalUrl] */

undefined8 FUN_10b7f4c60(void)

{
  return 0;
}



/* Entry: 10b7f4c68; end: 10b7f4c6f; -[SCNNetworkManagerUrlRequestImpl getPayloadStream] */

undefined8 FUN_10b7f4c68(void)

{
  return 0;
}



/* Entry: 10b7f4c70; end: 10b7f4c97; -[SCNNetworkManagerUrlRequestImpl getParameters] */

void FUN_10b7f4c70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7f4c98; end: 10b7f4cbf; -[SCNNetworkManagerUrlRequestImpl getKey] */

void FUN_10b7f4c98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7f4cc0; end: 10b7f4cc7; -[SCNNetworkManagerUrlRequestImpl getIsAuthenticated] */

undefined1 FUN_10b7f4cc0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Entry: 10b7f4cc8; end: 10b7f4cef; -[SCNNetworkManagerUrlRequestImpl getTrackingInfo] */

void FUN_10b7f4cc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7f4cf0; end: 10b7f4cf7; -[SCNNetworkManagerUrlRequestImpl getSwitchboardConfigKey] */

undefined8 FUN_10b7f4cf0(void)

{
  return 0;
}



/* Entry: 10b7f4cf8; end: 10b7f4cff; -[SCNNetworkManagerUrlRequestImpl getFallbackUrlProvider] */

undefined8 FUN_10b7f4cf8(void)

{
  return 0;
}



/* Entry: 10b7f4d00; end: 10b7f4d5f; -[SCNNetworkManagerUrlRequestImpl .cxx_destruct] */

void FUN_10b7f4d00(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7f4d60; end: 10b7f4e17; -[SCSimpleContentFetchingConfigBuilder initWithContentReference:mediaContextType:ttlInMinutes:requestContexts:] */

undefined1 *
FUN_10b7f4d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_11270afa0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f4e18; end: 10b7f4f9b; -[SCSimpleContentFetchingConfigBuilder initWithContentFetchingConfig:] */

undefined1 * FUN_10b7f4e18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_11270afa0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf4d200();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0c46a0();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010c27d160();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    uVar2 = param_3;
    func_0x00010c1350c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf93de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0c6c20();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010c15eac0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c104860();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010c0d7e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf4c8a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7f4f9c; end: 10b7f4fff; -[SCSimpleContentFetchingConfigBuilder setEncryptionKey:encryptionIV:] */

void FUN_10b7f4f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_4;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7f5000; end: 10b7f5007; -[SCSimpleContentFetchingConfigBuilder setMediaType:] */

void FUN_10b7f5000(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 10b7f5008; end: 10b7f5037; -[SCSimpleContentFetchingConfigBuilder setSerializedFeatureMetadata:] */

void FUN_10b7f5008(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7f5038; end: 10b7f5067; -[SCSimpleContentFetchingConfigBuilder setPostDownloadTransformParams:] */

void FUN_10b7f5038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7f5068; end: 10b7f5097; -[SCSimpleContentFetchingConfigBuilder setNetworkRequestContext:] */

void FUN_10b7f5068(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7f5098; end: 10b7f50c7; -[SCSimpleContentFetchingConfigBuilder setContentKey:] */

void FUN_10b7f5098(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


