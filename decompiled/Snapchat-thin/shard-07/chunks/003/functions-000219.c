/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053e77a8; end: 1053e788b;  */

void FUN_1053e77a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e788c;
  puStack_70 = &UNK_110849530;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar1);
  puStack_b0 = puVar5;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1053e78a8;
  puStack_98 = &UNK_110859a38;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  _objc_retain(uVar6);
  uStack_90 = uVar6;
  func_0x00010bea5120(uVar2,param_2,uVar3,uVar4,uVar7,uVar7,&puStack_88,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1053e788c; end: 1053e78c3;  */

void FUN_1053e788c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e78a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
  return;
}



/* Entry: 1053e78c4; end: 1053e790f; -[SCFeatureSettingsUserPropertiesService addFeatureSetting:withValue:] */

void FUN_1053e78c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010be45d60();
  if ((int)uVar1 == -0x4524111) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bef8390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addFeatureSettingWithItemId_with_11259ba88,(long)(int)uVar1,param_4);
  return;
}



/* Entry: 1053e7910; end: 1053e791b; -[SCFeatureSettingsUserPropertiesService addFeatureSettingWithItemId:withValue:] */

void FUN_1053e7910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addFeatureSettingWithItemId_with_11259ba90,param_3,param_4,0,0);
  return;
}



/* Entry: 1053e791c; end: 1053e79eb; -[SCFeatureSettingsUserPropertiesService addFeatureSettingWithItemId:withValue:queue:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e791c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e79ec;
  puStack_70 = &UNK_1108846d8;
  lStack_68 = param_1;
  uStack_60 = param_5;
  uStack_58 = param_6;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c0f8240(uVar1,param_2,&puStack_88);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1053e79ec; end: 1053e7acf;  */

void FUN_1053e79ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053e7ad0;
  puStack_70 = &UNK_110849530;
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar7);
  puStack_b0 = puVar5;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1053e7aec;
  puStack_98 = &UNK_110859a38;
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar7;
  _objc_retain(uVar6);
  uStack_90 = uVar6;
  func_0x00010bdc6be0(uVar2,param_2,uVar1,uVar3,uVar4,uVar4,&puStack_88,&puStack_b0);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  return;
}



/* Entry: 1053e7ad0; end: 1053e7b07;  */

void FUN_1053e7ad0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001053e7ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1,0);
    return;
  }
  return;
}



/* Entry: 1053e7b08; end: 1053e7e53; -[SCFeatureSettingsUserPropertiesService _setFeatureSettingWithItemId:value:isSpeculativeWrite:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e7b08(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722cb0);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010c12c4a0(uVar5);
  puVar2 = PTR_PTR_1126b8720;
  _objc_alloc(PTR_PTR_1126b8720);
  func_0x00010c01ff40();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89f00(param_1);
  _objc_release(uVar5);
  uVar5 = param_6;
  FUN_1053e7e54(param_6,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  pbVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  if (((ulong)pbVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSData_1126ae778;
    _objc_opt_class(PTR__OBJC_CLASS___NSData_1126ae778);
    pbVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    if (((ulong)pbVar4 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      pbVar4 = param_4;
      _objc_opt_isKindOfClass(param_4,puVar3);
      if (((ulong)pbVar4 & 1) != 0) {
        _objc_retain(param_4);
        pbVar4 = param_4;
        _objc_retainAutorelease();
        func_0x00010c0dfba0();
        bVar1 = *pbVar4;
        if (bVar1 < 100) {
          if (bVar1 == 0x51) {
            if (pbVar4[1] == 0) {
              uVar6 = *(undefined8 *)(param_1 + _DAT_112722cac);
              func_0x00010c2827c0(param_4);
              func_0x00010c11c720(uVar6);
            }
          }
          else if (bVar1 == 99) {
            uVar6 = *(undefined8 *)(param_1 + _DAT_112722cac);
            func_0x00010bf1f3c0(param_4);
            func_0x00010c11c660(uVar6);
          }
        }
        else if (bVar1 == 100) {
          if (pbVar4[1] == 0) {
            uVar6 = *(undefined8 *)(param_1 + _DAT_112722cac);
            func_0x00010bf885a0(param_4);
            func_0x00010c11c6a0(uVar6);
          }
        }
        else if (bVar1 == 0x66) {
          if (pbVar4[1] == 0) {
            uVar6 = *(undefined8 *)(param_1 + _DAT_112722cac);
            func_0x00010bfb2c80(param_4);
            func_0x00010c11c6c0(uVar6);
          }
        }
        else if ((bVar1 == 0x71) && (pbVar4[1] == 0)) {
          uVar6 = *(undefined8 *)(param_1 + _DAT_112722cac);
          func_0x00010c0b4fe0(param_4);
          func_0x00010c11c6e0(uVar6);
        }
        _objc_release(param_4);
      }
    }
    else {
      func_0x00010c11c680(*(undefined8 *)(param_1 + _DAT_112722cac));
    }
  }
  else {
    func_0x00010c11c700(*(undefined8 *)(param_1 + _DAT_112722cac));
  }
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053e7e54; end: 1053e7f53;  */

void FUN_1053e7e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar1 = &puStack_80;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x1053e85b4;
  puStack_68 = &UNK_110884738;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_48);
  _objc_release(uStack_60);
  _objc_release(uStack_50);
  _objc_release(param_2);
  _objc_release(param_4);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1053e7f54; end: 1053e81c7; -[SCFeatureSettingsUserPropertiesService _setLargerValueFeatureSettingWithItemId:value:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e7f54(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112722cb0);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c12c4a0(uVar6);
  puVar2 = PTR_PTR_1126b8720;
  _objc_alloc(PTR_PTR_1126b8720);
  func_0x00010c01ff40();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89f00(param_1);
  _objc_release(uVar6);
  uVar6 = param_5;
  FUN_1053e7e54(param_5,param_6,param_7,param_8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  pbVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  if (((ulong)pbVar4 & 1) != 0) {
    _objc_retain(param_4);
    pbVar4 = param_4;
    _objc_retainAutorelease();
    func_0x00010c0dfba0();
    bVar1 = *pbVar4;
    if (bVar1 < 0x66) {
      if (bVar1 == 0x51) {
        if (pbVar4[1] == 0) {
          uVar5 = *(undefined8 *)(param_1 + _DAT_112722cac);
          func_0x00010c2827c0(param_4);
          func_0x00010c11c860(uVar5);
        }
      }
      else if ((bVar1 == 100) && (pbVar4[1] == 0)) {
        uVar5 = *(undefined8 *)(param_1 + _DAT_112722cac);
        func_0x00010bf885a0(param_4);
        func_0x00010c11c800(uVar5);
      }
    }
    else if (bVar1 == 0x66) {
      if (pbVar4[1] == 0) {
        uVar5 = *(undefined8 *)(param_1 + _DAT_112722cac);
        func_0x00010bfb2c80(param_4);
        func_0x00010c11c820(uVar5);
      }
    }
    else if ((bVar1 == 0x71) && (pbVar4[1] == 0)) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_112722cac);
      func_0x00010c0b4fe0(param_4);
      func_0x00010c11c840(uVar5);
    }
    _objc_release(param_4);
  }
  _objc_release(uVar6);
  _objc_release(puVar2);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1053e81c8; end: 1053e8467; -[SCFeatureSettingsUserPropertiesService _addFeatureSettingWithItemId:withValue:successQueue:failureQueue:successBlock:failureBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e81c8(long param_1)

{
  undefined *puVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112722cb0);
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  _objc_retain(in_x5);
  _objc_retain(in_x4);
  func_0x00010c12c4a0(uVar2);
  puVar1 = PTR_PTR_1126b8720;
  _objc_alloc(PTR_PTR_1126b8720);
  func_0x00010c01ff40();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112722cb8);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be89f00(param_1);
  _objc_release(uVar2);
  uVar2 = in_x4;
  FUN_1053e7e54(in_x4,in_x5,in_x6,in_x7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
  func_0x00010c286be0(*(undefined8 *)(param_1 + _DAT_112722cac));
  _objc_release(in_x4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053e8468; end: 1053e84e7; -[SCFeatureSettingsUserPropertiesService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e8468(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112722cc0,0);
  _objc_storeStrong(param_1 + _DAT_112722cbc,0);
  _objc_storeStrong(param_1 + _DAT_112722cb8,0);
  _objc_storeStrong(param_1 + _DAT_112722cb4,0);
  _objc_storeStrong(param_1 + _DAT_112722cb0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112722cac,0);
  return;
}



/* Entry: 1053e84e8; end: 1053e86d7;  */

void FUN_1053e84e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010bf60460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c26d3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
    func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c26d3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640();
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053e86d8; end: 1053e86e7;  */

void FUN_1053e86d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053e86e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1053e86e8; end: 1053e8713; +[SCGrapheneFeatureSettingsMetric fsMissingFromSupProto] */

void FUN_1053e86e8(void)

{
  _objc_alloc(PTR_PTR_1126b8718);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e8714; end: 1053e873f; +[SCGrapheneFeatureSettingsMetric fsFallbackToLegacy] */

void FUN_1053e8714(void)

{
  _objc_alloc(PTR_PTR_1126b8718);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e8740; end: 1053e876b; +[SCGrapheneFeatureSettingsMetric fsAllUpdatesResponseCount] */

void FUN_1053e8740(void)

{
  _objc_alloc(PTR_PTR_1126b8718);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e876c; end: 1053e880b; -[SCGrapheneFeatureSettingsMetric description] */

void FUN_1053e876c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8cf8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd8cf8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e81a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053e880c; end: 1053e8817;  */

bool FUN_1053e880c(uint param_1)

{
  return param_1 < 0x565;
}



/* Entry: 1053e8818; end: 1053e88a3; +[SCValue descriptor] */

undefined * FUN_1053e8818(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb9a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a33760,
                        &PTR____CFConstantStringClassReference_110dd6778,
                        &PTR_s_com_snapchat_sup_1130d4bd0,&PTR_s_boolean_1130d4be8,5,0x28,0x1c);
    func_0x00010c229040();
    puRam00000001136bb9a8 = puVar1;
  }
  return puRam00000001136bb9a8;
}



/* Entry: 1053e88a4; end: 1053e88cf; +[SCGrapheneImageServiceMetric imageRequestCount] */

void FUN_1053e88a4(void)

{
  _objc_alloc(PTR_PTR_1126b8728);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e88d0; end: 1053e88fb; +[SCGrapheneImageServiceMetric imageRequestLatency] */

void FUN_1053e88d0(void)

{
  _objc_alloc(PTR_PTR_1126b8728);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e88fc; end: 1053e899b; -[SCGrapheneImageServiceMetric description] */

void FUN_1053e88fc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd8d98;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd8d98,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e81b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1053e899c; end: 1053e8ae7; -[SCGrapheneRegistry imageServiceGraphene] */

void FUN_1053e899c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x1053e8a24;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb9b8 != -1) {
    func_0x00010002a2fc(0x1136bb9b8,&puStack_48);
  }
  uVar1 = uRam00000001136bb9b0;
  _objc_retain(uRam00000001136bb9b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053e8ae8; end: 1053e8b6b; +[SCActivityCenterDynamicFHPCampaignABHelper isACDynamicFHPActivated:] */

undefined8 FUN_1053e8ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010bf398e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0b84a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f3c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1053e8b6c; end: 1053e8caf; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl initWithCampaignsObservableFuture:performerProvider:] */

undefined1 *
FUN_1053e8b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e81b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_new(PTR__OBJC_CLASS___NSSet_1126ae870);
    func_0x00010c166d20(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x00010c162580(puVar1);
    _objc_release(puVar2);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    uVar3 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053e8cb0; end: 1053e8d7f; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl startObservingIfNeeded] */

void FUN_1053e8cb0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c297260(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053e8d80; end: 1053e8dc7;  */

void FUN_1053e8d80(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec0a40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e8dc8; end: 1053e8f4b; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _startObservingCampaignData:] */

void FUN_1053e8dc8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    if (param_3 == 0) {
      func_0x00010bde2ea0(param_1);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_1053e8f4c;
      puStack_68 = &UNK_110842c58;
      _objc_copyWeak(auStack_60,auStack_58);
      puStack_a8 = puVar1;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x1053e8f94;
      puStack_90 = &UNK_11084fd28;
      _objc_copyWeak(auStack_88,auStack_58);
      _objc_copyWeak(auStack_b0,auStack_58);
      lVar2 = param_3;
      func_0x00010c260440();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar2;
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_b0);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1053e8f4c; end: 1053e8ff3;  */

void FUN_1053e8f4c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd9820();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e8ff4; end: 1053e90cb; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _campaignsDidUpdate:] */

void FUN_1053e8ff4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1053e90cc; end: 1053e92df;  */

void FUN_1053e90cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c162580(lVar2);
    lVar9 = *(long *)(param_1 + 0x20);
    lVar4 = lVar2;
    func_0x00010beffc00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar9);
    puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c226ce0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar9);
    lVar6 = lVar9;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar6 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar9);
        }
        uVar7 = *(undefined8 *)(lVar10 * 8);
        func_0x00010bf19d00(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar6 != lVar10);
      lVar6 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    _objc_release(lVar9);
    func_0x00010c166d20(lVar2);
    _objc_release(puVar5);
    _objc_release(lVar4);
    func_0x00010bde2ea0(lVar2);
    lVar6 = lVar2 + 0x40;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bef1420();
    _objc_release(lVar6);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdd9810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(lVar3 + 0x20),PTR_s__campaignToUIConfig__112553fa0,param_2);
  return;
}



/* Entry: 1053e92e0; end: 1053e92eb;  */

void FUN_1053e92e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd9810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__campaignToUIConfig__112553fa0,param_2);
  return;
}



/* Entry: 1053e92ec; end: 1053e93a3; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _completeObservationPromiseWithSuccess:] */

void FUN_1053e92ec(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f88c0(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1053e93a4; end: 1053e93d7;  */

void FUN_1053e93a4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde2ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1053e93d8; end: 1053e943b; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _completeObservationPromiseWithSuccessHelper:] */

void FUN_1053e93d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60(uVar2,param_2,puVar1);
    _objc_release(puVar1);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



/* Entry: 1053e943c; end: 1053e976f; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _campaignToUIConfig:] */

void FUN_1053e943c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf19d00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf19d80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf19d80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf19d80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010beecf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf19d80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf259e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf19d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c0e6fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010be6ff20(param_1,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf19d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010bfe5400();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010be702a0(param_1,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010bf19d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c0e6f20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be6ff20(param_1,param_2,lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c0844e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_3;
  func_0x00010bf19d80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar10 = lVar7;
  func_0x00010c0b3cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf52720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar10);
  _objc_release(lVar7);
  lVar7 = lVar11;
  func_0x00010c08fa60();
  if (lVar7 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126aeed0;
    _objc_alloc();
    func_0x00010c006040();
  }
  puVar12 = PTR_PTR_1126aed90;
  _objc_alloc();
  func_0x00010bffc2e0();
  _objc_release(puVar13);
  _objc_release(lVar11);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1053e9770; end: 1053e97d3; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _parseAction:] */

void FUN_1053e9770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lStack_28;
  
  lStack_28 = 0;
  puVar1 = PTR_PTR_1126ae8a8;
  func_0x00010c0f40e0(PTR_PTR_1126ae8a8,param_2,param_3,&lStack_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)0x0;
  if (lStack_28 == 0) {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053e97d4; end: 1053e9997; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl _parseIcon:] */

void FUN_1053e97d4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar2 = PTR_PTR_1126b8730;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfe58e0();
  puVar9 = PTR_PTR_1126aeed8;
  iVar1 = (int)puVar3;
  puVar3 = puVar2;
  if (iVar1 == 3) {
    func_0x00010bf8e2c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf8ea60(puVar9,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (iVar1 == 2) {
    func_0x00010bf1c040(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf12ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010bf1c040(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf1c040(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c15ade0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1c1c0(puVar9,param_2,puVar4,puVar6,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    if (iVar1 != 1) {
      puVar9 = (undefined *)0x0;
      goto LAB_1053e9970;
    }
    func_0x00010bfe8f00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28fae0(puVar9,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
LAB_1053e9970:
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1053e9998; end: 1053e99a3; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl allCampaignIDs] */

void FUN_1053e9998(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 1053e99a4; end: 1053e99ab; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl setAllCampaignIDs:] */

void FUN_1053e99a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1053e99ac; end: 1053e99b7; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl activeConfigs] */

void FUN_1053e99ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x38,1);
  return;
}



/* Entry: 1053e99b8; end: 1053e99bf; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl setActiveConfigs:] */

void FUN_1053e99b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1053e99c0; end: 1053e99d7; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl delegate] */

void FUN_1053e99c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053e99d8; end: 1053e99e3; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl setDelegate:] */

void FUN_1053e99d8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 1053e99e4; end: 1053e9a4b; -[SCActivityCenterDynamicFHPCampaignDataProviderImpl .cxx_destruct] */

void FUN_1053e99e4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053e9a4c; end: 1053e9b3b; -[SCActivityCenterDynamicServiceProvider provide] */

void FUN_1053e9a4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126b8738;
  _objc_alloc(PTR_PTR_1126b8738);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011500(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053e9b3c; end: 1053e9b7b;  */

void FUN_1053e9b3c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be157c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053e9b7c; end: 1053e9dab; -[SCActivityCenterDynamicServiceProvider _fhpCampaignDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e9b7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  puVar2 = PTR_PTR_1126b8740;
  lVar1 = param_1 + _DAT_112722ce8;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c06b260(puVar2,param_2,lVar1);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae558;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_new(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x00010bfe9c80(puVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b8748;
    _objc_alloc(PTR_PTR_1126b8748);
    lVar1 = param_1 + _DAT_112722cec;
    _objc_loadWeakRetained(lVar1);
    lVar6 = lVar1;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc340(puVar2,param_2,puVar5,lVar6);
    _objc_release(lVar6);
  }
  else {
    puVar5 = PTR_PTR_1126ae560;
    _objc_opt_new();
    lVar1 = param_1 + _DAT_112722cf0;
    _objc_loadWeakRetained();
    _CFAbsoluteTimeGetCurrent();
    lVar6 = param_1 + _DAT_112722cf4;
    _objc_loadWeakRetained(lVar6);
    lVar3 = lVar6;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e33e0();
    _objc_release(lVar3);
    _objc_release(lVar6);
    puVar2 = PTR_PTR_1126b8748;
    _objc_alloc(PTR_PTR_1126b8748);
    puVar4 = puVar5;
    func_0x00010bfbc3e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + _DAT_112722cec;
    _objc_loadWeakRetained(param_1);
    lVar6 = param_1;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffc340(puVar2,param_2,puVar4,lVar6);
    _objc_release(lVar6);
    _objc_release(param_1);
    _objc_release(puVar4);
  }
  _objc_release(lVar1);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053e9dac; end: 1053e9e13;  */

void FUN_1053e9dac(long param_1,undefined8 param_2)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1053e9e14;
  puStack_38 = &UNK_1108847f8;
  uStack_18 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfc69a0(param_2,param_2,&puStack_50);
  return;
}



/* Entry: 1053e9e14; end: 1053ea073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053e9e14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_2);
  _CFAbsoluteTimeGetCurrent();
  puVar1 = PTR_PTR_1126b8750;
  _objc_opt_new(PTR_PTR_1126b8750);
  puVar2 = PTR_PTR_1126b1530;
  _objc_alloc(PTR_PTR_1126b1530);
  func_0x00010c0460e0();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfebe60();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1abec0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a0100(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar10);
  _objc_release(lVar3);
  puVar6 = PTR_PTR_1126b8758;
  _objc_alloc(PTR_PTR_1126b8758);
  func_0x00010c008ce0();
  if (*(long *)(param_1 + 0x28) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x28) + (long)_DAT_112722cfc;
    _objc_loadWeakRetained(lVar10);
  }
  lVar4 = lVar10;
  func_0x00010bf3f640(lVar10);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17df60(puVar6);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar10);
  puVar7 = PTR_PTR_1126b8760;
  func_0x00010bfbc0e0(PTR_PTR_1126b8760);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  puVar8 = puVar7;
  func_0x00010bf54ca0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfa5380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ea074; end: 1053ea0db; -[SCActivityCenterDynamicServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053ea074(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112722cfc);
  _objc_destroyWeak(param_1 + _DAT_112722ce8);
  _objc_destroyWeak(param_1 + _DAT_112722cf4);
  _objc_destroyWeak(param_1 + _DAT_112722cec);
  _objc_destroyWeak(param_1 + _DAT_112722cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112722cf8);
  return;
}



/* Entry: 1053ea0dc; end: 1053ea153; -[SCACBillboardLoggingPayload initWithCorrespondentId:] */

undefined1 * FUN_1053ea0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e81c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053ea154; end: 1053ea177; -[SCACBillboardLoggingPayload copyWithZone:] */

undefined8 FUN_1053ea154(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1053ea178; end: 1053ea17f; -[SCACBillboardLoggingPayload hash] */

void FUN_1053ea178(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 1053ea180; end: 1053ea20f; -[SCACBillboardLoggingPayload isEqual:] */

long FUN_1053ea180(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1053ea1f4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1053ea1f4;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1053ea1f4;
    }
  }
  lVar3 = 1;
LAB_1053ea1f4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1053ea210; end: 1053ea217; -[SCACBillboardLoggingPayload correspondentId] */

undefined8 FUN_1053ea210(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053ea218; end: 1053ea223; -[SCACBillboardLoggingPayload .cxx_destruct] */

void FUN_1053ea218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053ea224; end: 1053ea22f; +[SCCActivityCenterBillboardCreateBillboardActionTracker modulePath] */

undefined ** FUN_1053ea224(void)

{
  return &PTR____CFConstantStringClassReference_110dd8e58;
}



/* Entry: 1053ea230; end: 1053ea237; +[SCCActivityCenterBillboardCreateBillboardActionTracker asyncStrictMode] */

undefined8 FUN_1053ea230(void)

{
  return 0;
}



/* Entry: 1053ea238; end: 1053ea27b; -[SCCActivityCenterBillboardCreateBillboardActionTracker createBillboardActionTracker] */

void FUN_1053ea238(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  FUN_1053ea718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053ea27c; end: 1053ea31f; +[SCCActivityCenterBillboardCreateBillboardActionTracker invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_1053ea27c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1053ea320;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x0001053ea784();
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  func_0x0001053ea734();
  _objc_release(lStack_30);
  func_0x0001053ea718();
  func_0x0001053ea77c();
  return;
}



/* Entry: 1053ea320; end: 1053ea393;  */

void FUN_1053ea320(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeef8;
  func_0x00010bfbc0e0(PTR_PTR_1126aeef8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001053ea75c(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
  func_0x0001053ea774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053ea394; end: 1053ea3a7; +[SCCActivityCenterBillboardCreateBillboardActionTracker valdiMarshallableObjectDescriptor] */

void FUN_1053ea394(undefined8 *param_1)

{
  *param_1 = &PTR_s_createBillboardActionTracker_110884858;
  param_1[1] = &PTR_s_SCCActivityCenterBillboardBillbo_110884888;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1053ea3a8; end: 1053ea3b3; +[SCCActivityCenterBillboardCreateBillboardDataProvider modulePath] */

undefined ** FUN_1053ea3a8(void)

{
  return &PTR____CFConstantStringClassReference_110dd8e78;
}



/* Entry: 1053ea3b4; end: 1053ea3bb; +[SCCActivityCenterBillboardCreateBillboardDataProvider asyncStrictMode] */

undefined8 FUN_1053ea3b4(void)

{
  return 0;
}



/* Entry: 1053ea3bc; end: 1053ea423; -[SCCActivityCenterBillboardCreateBillboardDataProvider createBillboardDataProviderWithDynamicFeedHeaderPromptContext:] */

void FUN_1053ea3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  FUN_1053ea718();
  func_0x0001053ea77c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1053ea424; end: 1053ea55f; +[SCCActivityCenterBillboardCreateBillboardDataProvider invokeWithJSRuntimeProvider:dynamicFeedHeaderPromptContext:completionHandler:] */

void FUN_1053ea424(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x0001053ea784();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x0001053ea74c();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1053ea4e8;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = lVar1;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x0001053ea784();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  func_0x0001053ea734();
  func_0x0001053ea77c();
  func_0x0001053ea718();
  func_0x0001053ea774();
  return;
}



/* Entry: 1053ea560; end: 1053ea573; +[SCCActivityCenterBillboardCreateBillboardDataProvider valdiMarshallableObjectDescriptor] */

void FUN_1053ea560(undefined8 *param_1)

{
  *param_1 = &PTR_s_createBillboardDataProvider_110884898;
  param_1[1] = &PTR_s_SCCActivityCenterBillboardBillbo_1108848c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 1053ea574; end: 1053ea597; +[SCCActivityCenterBillboardBillboardActionTracker valdiMarshallableObjectDescriptor] */

void FUN_1053ea574(undefined8 *param_1)

{
  *param_1 = &PTR_s_onBillboardAction_110884928;
  param_1[1] = &PTR_s_SCCActivityCenterBillboardBillbo_110884970;
  param_1[2] = &PTR_s_ooio_v_1108848e0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1053ea598; end: 1053ea5c3;  */

undefined8 FUN_1053ea598(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3]);
  return 0;
}



/* Entry: 1053ea5c4; end: 1053ea61f;  */

void FUN_1053ea5c4(void)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  _objc_retain();
  func_0x0001053ea74c();
  uStack_40 = 0xc2000000;
  func_0x0001053ea73c(FUN_1053ea6b0);
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x0001053ea734();
  func_0x0001053ea718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053ea620; end: 1053ea637;  */

void FUN_1053ea620(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001053ea634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),param_2[3],param_2[4]);
  return;
}



/* Entry: 1053ea638; end: 1053ea693;  */

void FUN_1053ea638(void)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  _objc_retain();
  func_0x0001053ea74c();
  uStack_40 = 0xc2000000;
  func_0x0001053ea73c(0x1053ea6e4);
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x0001053ea734();
  func_0x0001053ea718();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053ea694; end: 1053ea6af; +[SCCActivityCenterBillboardBillboardDataProvider valdiMarshallableObjectDescriptor] */

void FUN_1053ea694(undefined8 *param_1)

{
  *param_1 = &PTR_s_fetchBillboardDynamicFeedHeaderP_110884988;
  param_1[1] = &PTR_s_SCBridgeObservable_1108849b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 1053ea6b0; end: 1053ea717;  */

void FUN_1053ea6b0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1053ea718; end: 1053ea7a3;  */

void FUN_1053ea718(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1053ea7a4; end: 1053ea7ab; -[SCCActivityCenterBillboardBillboardActionType__Enum init] */

void FUN_1053ea7a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 1053ea7ac; end: 1053ea7e3; -[SCCActivityCenterBillboardBillboardDynamicFeedHeaderPrompt initWithBillboardCampaignId:billboardFeedHeaderPromptDynamicUx:itemId:] */

void FUN_1053ea7ac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e81c8;
  uStack_20 = param_1;
  func_0x0001053ea948();
  func_0x0001053ea940(&uStack_20);
  return;
}



/* Entry: 1053ea7e4; end: 1053ea7f7; +[SCCActivityCenterBillboardBillboardDynamicFeedHeaderPrompt valdiMarshallableObjectDescriptor] */

void FUN_1053ea7e4(undefined8 *param_1)

{
  *param_1 = &PTR_s_billboardCampaignId_110884a30;
  param_1[1] = &PTR_s_SCCActivityCenterBillboardFeedHe_110884a90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053ea7f8; end: 1053ea82b; -[SCCActivityCenterBillboardBillboardDynamicFeedHeaderPromptContext initWithDataProviders:] */

void FUN_1053ea7f8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e81d0;
  uStack_20 = param_1;
  func_0x0001053ea948();
  func_0x0001053ea940(&uStack_20);
  return;
}



/* Entry: 1053ea82c; end: 1053ea83f; +[SCCActivityCenterBillboardBillboardDynamicFeedHeaderPromptContext valdiMarshallableObjectDescriptor] */

void FUN_1053ea82c(undefined8 *param_1)

{
  *param_1 = &PTR_s_dataProviders_110884aa0;
  param_1[1] = &PTR_s_SCCActivityCenterBillboardBillbo_110884ae8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053ea840; end: 1053ea873; -[SCCActivityCenterBillboardBillboardDynamicFeedHeaderPromptDataProviders init] */

void FUN_1053ea840(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e81d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1053ea874; end: 1053ea887; +[SCCActivityCenterBillboardBillboardDynamicFeedHeaderPromptDataProviders valdiMarshallableObjectDescriptor] */

void FUN_1053ea874(undefined8 *param_1)

{
  *param_1 = &PTR_s_incomingFriendStore_110884b00;
  param_1[1] = &PTR_s_SCCIncomingFriendStoring_110884b48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053ea888; end: 1053ea8bb; -[SCCActivityCenterBillboardFeedHeaderPromptDynamicLoggingPayload initWithCorrespondentId:] */

void FUN_1053ea888(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e81e0;
  uStack_20 = param_1;
  func_0x0001053ea948();
  func_0x0001053ea940(&uStack_20);
  return;
}



/* Entry: 1053ea8bc; end: 1053ea8d3; +[SCCActivityCenterBillboardFeedHeaderPromptDynamicLoggingPayload valdiMarshallableObjectDescriptor] */

void FUN_1053ea8bc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_correspondentId_110884b60;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053ea8d4; end: 1053ea91b; -[SCCActivityCenterBillboardFeedHeaderPromptDynamicUxConfig initWithTitle:] */

void FUN_1053ea8d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e81e8;
  uStack_20 = param_1;
  func_0x0001053ea948();
  func_0x0001053ea940(&uStack_20);
  return;
}



/* Entry: 1053ea91c; end: 1053ea953; +[SCCActivityCenterBillboardFeedHeaderPromptDynamicUxConfig valdiMarshallableObjectDescriptor] */

void FUN_1053ea91c(undefined8 *param_1)

{
  *param_1 = &PTR_s_title_110884b90;
  param_1[1] = &PTR_s_SCCActivityCenterBillboardFeedHe_110884c68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1053ea954; end: 1053ea9ef; +[SCBillboardPbIcon descriptor] */

undefined * FUN_1053ea954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb9c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a33cb0,
                        &PTR____CFConstantStringClassReference_110dac678,
                        &PTR_s_com_snapchat_billboard_1130d4cf0,&PTR_s_imageURL_1130d4d08,3,0x20,
                        0x1c);
    func_0x00010c229040();
    func_0x00010c2289e0(puVar1,param_2,&UNK_10dd8a808);
    puRam00000001136bb9c0 = puVar1;
  }
  return puRam00000001136bb9c0;
}



/* Entry: 1053ea9f0; end: 1053eaa57; +[SCBillboardPbIconBitmojiSelfie descriptor] */

void FUN_1053ea9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bb9c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a33d00,
                        &PTR____CFConstantStringClassReference_110dd8e98,
                        &PTR_s_com_snapchat_billboard_1130d4cf0,&PTR_s_avatarId_1130d4d68,3,0x20,
                        0x1c);
    puRam00000001136bb9c8 = puVar1;
  }
  return;
}



/* Entry: 1053eaa58; end: 1053eaacb; -[SCGrapheneAgeVerificationPostAuthMetric2 init] */

undefined1 * FUN_1053eaa58(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e81f0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1053eaacc; end: 1053eab2f; -[SCPreferences shouldAutoGrantUserPerm] */

void FUN_1053eaacc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd8eb8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1053eab30; end: 1053eab3b; -[SCPreferences setShouldAutoGrantUserPerm:] */

void FUN_1053eab30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKeyedSubscript__112651bb8,param_3,
             &PTR____CFConstantStringClassReference_110dd8eb8);
  return;
}



/* Entry: 1053eab3c; end: 1053eab47; -[SCFeatureSettingsService hasContactSyncUserLevelPermissionGrantedDeviceList] */

void FUN_1053eab3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110dd8f78);
  return;
}



/* Entry: 1053eab48; end: 1053eab53; -[SCFeatureSettingsService contactSyncUserLevelPermissionGrantedDeviceListServerParam] */

undefined ** FUN_1053eab48(void)

{
  return &PTR____CFConstantStringClassReference_110dd8f78;
}



/* Entry: 1053eab54; end: 1053eab63; -[SCFeatureSettingsService setContactSyncUserLevelPermissionGrantedDeviceList:] */

void FUN_1053eab54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_stringValue__112586918,
             &PTR____CFConstantStringClassReference_110dd8f78,param_3);
  return;
}



/* Entry: 1053eab64; end: 1053eab8b; -[SCFeatureSettingsService contact_sync_user_level_permission_granted_device_list_client_value:] */

void FUN_1053eab64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1053eab8c; end: 1053eabb3; -[SCFeatureSettingsService contact_sync_user_level_permission_granted_device_list_server_value:] */

void FUN_1053eab8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1053eabb4; end: 1053eabc7; -[SCFeatureSettingsService contactSyncUserLevelPermissionGrantedDeviceList] */

void FUN_1053eabb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__stringForFeatureSetting_default_11258ef18,
             &PTR____CFConstantStringClassReference_110dd8f78,
             &PTR____CFConstantStringClassReference_110daafd8);
  return;
}



/* Entry: 1053eabc8; end: 1053eac8f; -[SCFeatureSettingsService grantedDevices] */

void FUN_1053eabc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x00010bf4a6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b8768;
    _objc_alloc();
    func_0x00010c008360();
    puVar4 = (undefined *)0x0;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010c0f9de0(puVar3);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}


