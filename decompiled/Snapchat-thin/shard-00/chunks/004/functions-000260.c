/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1005d80cc; end: 1005d80f3;  */

void FUN_1005d80cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1005d80f4; end: 1005d8117;  */

undefined8 FUN_1005d80f4(undefined8 param_1)

{
  func_0x0001005d80dc(param_1,0);
  return param_1;
}



/* Entry: 1005d8118; end: 1005d813b;  */

void FUN_1005d8118(void)

{
  return;
}



/* Entry: 1005d813c; end: 1005d8153; -[SCCameraDeviceSettingsConfigurationImpl isWeakOwnershipEnabled] */

void FUN_1005d813c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110de53f8,0,0);
  return;
}



/* Entry: 1005d8154; end: 1005d8177;  */

void FUN_1005d8154(long param_1)

{
  func_0x0001005d1958();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1005d8178; end: 1005d82ab; -[SCCameraDeviceSettingsResolverDecorator initWithResolver:weakOwnershipEnabled:] */

undefined1 * FUN_1005d8178(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126f40d8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    *(char *)((long)puVar1 + 0x28) = (char)param_4;
    if (param_4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988();
      func_0x000107c61180();
      lVar4 = 0x18;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
      func_0x000107c5c214();
      func_0x000107c61180();
      lVar4 = 0x20;
    }
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d82ac; end: 1005d831f; -[SCCameraDeviceSettingsResolverServices initWithDeviceSettingsResolver:] */

undefined1 * FUN_1005d82ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a440;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005d8320; end: 1005d8327;  */

void FUN_1005d8320(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d8328; end: 1005d83a3;  */

void FUN_1005d8328(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d83a4; end: 1005d85a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005d83a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(param_1 + _DAT_113082430);
  func_0x0001005d3b6c();
  if (lVar1 == 1) {
    lVar1 = *(long *)(param_3 + _DAT_113074f60);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x0001044e72c4();
      uVar2 = param_2;
      func_0x000107c41964(param_2);
      func_0x000107c61180();
      puStack_98 = (undefined *)0xd00000000000004b;
      uStack_90 = 0x800000010f0e4000;
      uStack_68 = 0x22;
      puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar3);
      uVar6 = uStack_90;
      puVar3 = puStack_98;
      func_0x000107c5fadc(puStack_98,uStack_90);
      func_0x000107c6142c(uVar6);
      puStack_78 = &UNK_102a331d4;
      uStack_70 = 0;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      pcStack_88 = FUN_1000f6b44;
      puStack_80 = &UNK_110589318;
      ppuVar4 = &puStack_98;
      func_0x000107c60bc4(ppuVar4);
      lVar5 = lVar1;
      func_0x000107c5bba4();
      func_0x000107c61180();
      func_0x000107c61170(param_3);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar3);
      lVar1 = _DAT_113082460;
      func_0x000107c61428(param_1 + _DAT_113082460,&puStack_98,1,0);
      uVar6 = *(undefined8 *)(param_1 + lVar1);
      *(long *)(param_1 + lVar1) = lVar5;
      func_0x000107c61170(param_1);
      func_0x000107c615e8(uVar6);
      return;
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1005d85a8; end: 1005d85db;  */

void FUN_1005d85a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d85dc; end: 1005d85e7;  */

undefined ** FUN_1005d85dc(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005d85e8; end: 1005d866b;  */

void FUN_1005d85e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(param_4,param_3);
  FUN_100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 1005d866c; end: 1005d8697;  */

void FUN_1005d866c(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005d8698; end: 1005d869f;  */

void FUN_1005d8698(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5a9c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005d86a0; end: 1005d86bf;  */

void FUN_1005d86a0(void)

{
  func_0x000107c61168(&PTR_PTR_11300bc50);
  return;
}



/* Entry: 1005d86c0; end: 1005d8743;  */

void FUN_1005d86c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5a9c,param_2,&UNK_1029f5aa0,param_2,&UNK_1029f5ac8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005d8744; end: 1005d8873;  */

void FUN_1005d8744(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_6;
  *(undefined8 *)(unaff_x20 + 0x28) = param_7;
  if (param_1 == 0) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_7);
    (*param_4)();
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_3);
    param_5 = param_7;
  }
  else if (param_1 != 1) {
    func_0x0001000ab060(0);
    puVar1 = &UNK_110711930;
    func_0x000107c613fc(&UNK_110711930,0x20,7);
    *(code **)(puVar1 + 0x10) = param_4;
    *(undefined8 *)(puVar1 + 0x18) = param_5;
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_7);
    func_0x000107c6157c(param_5);
    lVar2 = param_1;
    FUN_1009107f0(param_1,0,0,0,&UNK_103dc50f0,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_7);
    FUN_1009107f0(param_1);
    return;
  }
  func_0x000107c61574(param_5);
  return;
}



/* Entry: 1005d8874; end: 1005d8897;  */

void FUN_1005d8874(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d8898; end: 1005d88a7;  */

void FUN_1005d8898(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005d88a8; end: 1005d88d3;  */

void FUN_1005d88a8(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005d88d4; end: 1005d88db;  */

void FUN_1005d88d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5bcc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005d88dc; end: 1005d895f;  */

void FUN_1005d88dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5bcc,param_2,&UNK_1029f5bd0,param_2,&UNK_1029f5bf8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005d8960; end: 1005d896b;  */

undefined ** FUN_1005d8960(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005d896c; end: 1005d8a0f;  */

void FUN_1005d896c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11059e448;
  func_0x000107c613fc(&UNK_11059e448,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(FUN_1005d8a54,puVar1);
  return;
}



/* Entry: 1005d8a10; end: 1005d8a53;  */

void FUN_1005d8a10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1005d896c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_100082720("AsyncCameraFeatureScopeWorkflowScopeInitializationPluginPluginProvider",0x46,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d8a54; end: 1005d8a5f;  */

void FUN_1005d8a54(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(auStack_70);
  FUN_100083b20(auStack_98);
  FUN_100083b20(auStack_c0);
  func_0x0001005dc060();
  func_0x000107c613fc();
  FUN_1005dc0c4(uStack_48,auStack_70,auStack_98,auStack_c0);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11059e538;
  return;
}



/* Entry: 1005d8a60; end: 1005d8b07;  */

void FUN_1005d8a60(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(auStack_70);
  FUN_100083b20(auStack_98);
  FUN_100083b20(auStack_c0);
  func_0x0001005dc060();
  func_0x000107c613fc();
  FUN_1005dc0c4(uStack_48,auStack_70,auStack_98,auStack_c0);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_11059e538;
  return;
}



/* Entry: 1005d8b08; end: 1005d8b7f;  */

void FUN_1005d8b08(void)

{
  ulong uVar1;
  undefined1 in_CY;
  long lVar2;
  long lVar3;
  ulong extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x9;
  long extraout_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x23;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  FUN_1005d059c();
  if ((bool)in_CY) {
    FUN_1005d0628();
    if (extraout_x10 != 0) {
      func_0x000107c2c584();
LAB_1005d8b7c:
      func_0x000104bd35f4();
      lVar2 = *(long *)(unaff_x20 + 0x10);
      FUN_100083b20(&uStack_98,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                    *(undefined8 *)(unaff_x20 + 0x20));
      FUN_100083b20(&uStack_a0);
      FUN_100083b20(&uStack_a8);
      FUN_1005d98c4();
      lVar3 = lVar2;
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = uStack_a0;
      *(undefined8 *)(lVar3 + 0x20) = uStack_98;
      *(undefined8 *)(lVar3 + 0x10) = uStack_a8;
      extraout_x8_00[3] = lVar2;
      extraout_x8_00[4] = (long)&PTR_DAT_11059e6d0;
      *extraout_x8_00 = lVar3;
      return;
    }
    func_0x0001005d0640();
    uVar1 = extraout_x9;
    if ((bool)in_CY) {
      uVar1 = extraout_x8;
    }
    if (uVar1 != 0) {
      if (uVar1 >> 0x3d != 0) goto LAB_1005d8b7c;
      func_0x0001005d0660();
    }
    func_0x0001005d0668();
    *unaff_x19 = unaff_x21;
    unaff_x19[1] = unaff_x23;
    unaff_x19[2] = uVar1;
    if (unaff_x20 != 0) {
      FUN_1005d1198();
    }
  }
  else {
    func_0x000107c35704();
  }
  unaff_x19[1] = unaff_x23;
  return;
}



/* Entry: 1005d8b80; end: 1005d8b8b;  */

void FUN_1005d8b80(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
               );
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1005d98c4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = uStack_50;
  *(undefined8 *)(lVar2 + 0x20) = uStack_48;
  *(undefined8 *)(lVar2 + 0x10) = uStack_58;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11059e6d0;
  *param_1 = lVar2;
  return;
}



/* Entry: 1005d8b8c; end: 1005d8c23;  */

void FUN_1005d8b8c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_1005d98c4();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  *(undefined8 *)(lVar1 + 0x20) = uStack_48;
  *(undefined8 *)(lVar1 + 0x10) = uStack_58;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11059e6d0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005d8c24; end: 1005d8ca7;  */

void FUN_1005d8c24(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  int extraout_w10;
  undefined1 uStack_31;
  undefined1 **ppuStack_30;
  undefined1 *puStack_28;
  
  if (lRam000000011383d6e0 != -1) {
    puStack_28 = &uStack_31;
    ppuStack_30 = &puStack_28;
    func_0x000107c60c38(0x11383d6e0,&ppuStack_30,FUN_1005d8d64);
  }
  lVar2 = lRam000000011383d6f8;
  uVar1 = uRam000000011383d6f0;
  param_1[1] = lRam000000011383d6f8;
  *param_1 = uVar1;
  if (lVar2 != 0) {
    do {
      func_0x00010060f2ec();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1005d8ca8; end: 1005d8d63;  */

undefined8 FUN_1005d8ca8(void)

{
  int iVar1;
  undefined1 uStack_21;
  undefined1 **ppuStack_20;
  undefined1 *puStack_18;
  
  if ((bRam000000011383d678 & 1) == 0) {
    iVar1 = 0x1383d678;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      uRam000000011383d658 = 0;
      uRam000000011383d65c = 0;
      uRam000000011383d660 = 0xa000003e8;
      uRam000000011383d668 = 0x3f8000003ecccccd;
      uRam000000011383d670 = 0x3f666666;
      func_0x000107c60e4c(0x11383d678);
    }
  }
  if (lRam000000011383d680 != -1) {
    puStack_18 = &uStack_21;
    ppuStack_20 = &puStack_18;
    func_0x000107c60c38(0x11383d680,&ppuStack_20,FUN_1005d959c);
  }
  return 0x11383d658;
}



/* Entry: 1005d8d64; end: 1005d9507;  */

void FUN_1005d8d64(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 **ppuVar10;
  undefined1 ***pppuVar11;
  byte bVar12;
  long extraout_x8;
  long extraout_x8_00;
  long *plVar13;
  undefined8 extraout_x8_01;
  undefined8 *puVar14;
  long extraout_x8_02;
  undefined8 extraout_x9;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  undefined1 ***pppuVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_270 [16];
  undefined1 **appuStack_260 [2];
  undefined1 **ppuStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_228;
  byte bStack_220;
  undefined1 uStack_178;
  undefined1 *puStack_170;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e0;
  undefined1 uStack_dc;
  undefined4 uStack_d8;
  undefined1 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined1 uStack_c8;
  undefined1 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_98;
  undefined1 uStack_8c;
  
  FUN_1005d8ca8();
  puVar9 = (undefined8 *)0x2e0;
  func_0x000107c60e20();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_DAT_110cee050;
  pppuVar20 = (undefined1 ***)(puVar9 + 3);
  *pppuVar20 = &PTR_DAT_110cedca8;
  puVar14 = puVar9 + 4;
  FUN_1005e76cc();
  puVar9[0xd] = 0x32aaaba7;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xf] = 0;
  puVar9[0xe] = 0;
  puVar9[0x11] = 0;
  puVar9[0x10] = 0;
  puVar9[0x13] = 0;
  puVar9[0x12] = 0;
  puVar9[0x14] = 0;
  uVar24 = param_1[1];
  uVar22 = *param_1;
  uVar25 = *(undefined8 *)((long)param_1 + 0xc);
  *(undefined8 *)((long)puVar9 + 0xbc) = *(undefined8 *)((long)param_1 + 0x14);
  *(undefined8 *)((long)puVar9 + 0xb4) = uVar25;
  puVar9[0x16] = uVar24;
  puVar9[0x15] = uVar22;
  func_0x0001005e772c();
  uVar5 = (int)(bStack_220 - 1) < 0;
  if (bStack_220 == 1) {
    func_0x00010060e8c8(uStack_228);
    func_0x00010060e8c8(*(undefined8 *)(extraout_x8 + 0x18));
    bVar12 = *(byte *)(extraout_x8_00 + 0x18);
  }
  else {
    bVar12 = 0;
  }
  FUN_1005ec8b8();
  *(byte *)((long)puVar9 + 0xc4) = bVar12 & 1;
  FUN_1005ec8e0();
  bVar7 = (byte)puVar14;
  if (((ulong)puVar14 & 1) == 0) {
    func_0x000100600454();
    bVar12 = bVar12 | bVar7;
  }
  else {
    bVar12 = 1;
  }
  puVar9[0x1a] = 0;
  puVar9[0x19] = 0;
  *(byte *)((long)puVar9 + 0xc5) = bVar12 & 1;
  puVar9[0x1c] = 0;
  puVar9[0x1b] = 0;
  *(undefined4 *)(puVar9 + 0x1d) = 0x3f800000;
  puVar9[0x1f] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x21] = 0;
  puVar9[0x20] = 0;
  *(undefined4 *)(puVar9 + 0x22) = 0x3f800000;
  puVar14 = puVar9 + 0x23;
  puVar9[0x24] = 0;
  *puVar14 = 0;
  puVar9[0x26] = 0;
  puVar9[0x25] = 0;
  puVar9[0x29] = 0;
  puVar9[0x28] = 0;
  plVar17 = puVar9 + 0x2a;
  puVar9[0x2b] = 0;
  *plVar17 = 0;
  puVar9[0x2d] = 0;
  puVar9[0x2c] = 0;
  *(undefined4 *)(puVar9 + 0x27) = 0x3f800000;
  puVar9[0x33] = 0;
  puVar9[0x32] = 0;
  puVar9[0x2f] = 0;
  puVar9[0x2e] = 0;
  puVar9[0x31] = 0;
  puVar9[0x30] = 0;
  puVar9[0x35] = 0;
  puVar9[0x34] = 0;
  *(undefined4 *)(puVar9 + 0x36) = 0x3f800000;
  puVar9[0x3b] = 0;
  puVar9[0x38] = 0;
  puVar9[0x37] = 0;
  puVar9[0x3a] = 0;
  puVar9[0x39] = 0;
  *(undefined4 *)(puVar9 + 0x3c) = 0x3f800000;
  puVar9[0x3e] = 0;
  puVar9[0x3d] = 0;
  puVar9[0x40] = 0;
  puVar9[0x3f] = 0;
  *(undefined4 *)(puVar9 + 0x41) = 0x3f800000;
  puVar9[0x43] = 0;
  puVar9[0x42] = 0;
  puVar9[0x45] = 0;
  puVar9[0x44] = 0;
  *(undefined4 *)(puVar9 + 0x46) = 3;
  puVar9[0x48] = 0;
  puVar9[0x47] = 0;
  puVar9[0x4a] = 0;
  puVar9[0x49] = 0;
  puVar9[0x4c] = 0;
  puVar9[0x4b] = 0;
  *(undefined4 *)(puVar9 + 0x4d) = 3;
  puVar9[0x4f] = &PTR_DAT_110cfb000;
  puVar9[0x50] = 0;
  puVar9[0x52] = 0;
  puVar9[0x51] = 0;
  puVar9[0x54] = 0;
  puVar9[0x53] = 0;
  puVar9[0x56] = 0;
  puVar9[0x55] = 0;
  puVar9[0x58] = 0;
  puVar9[0x57] = 0;
  puVar9[0x5a] = 0;
  puVar9[0x59] = 0;
  puVar9[0x5b] = 0;
  FUN_1006009b0();
  uStack_e0 = *(undefined4 *)(puVar9 + 0x17);
  uStack_d0 = *(undefined4 *)((long)puVar9 + 0xbc);
  puVar9[0x4e] = 0x11383d700;
  puVar23 = (undefined1 *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_140 = 0x3f800000;
  uStack_118 = 0x3f800000;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0x3f800000;
  uStack_dc = 1;
  uStack_d8 = *(undefined4 *)((long)puVar9 + 0xb4);
  uStack_d4 = 1;
  uStack_cc = 1;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_a0 = 0x3f800000;
  uStack_98 = 0;
  uStack_8c = 0;
  ppuVar10 = &puStack_170;
  FUN_100600c44(ppuVar10,&uStack_160,*(undefined4 *)(puVar9 + 0x4d));
  uVar18 = puVar9[0x24];
  if ((uVar18 == 0) || (plVar13 = *(long **)*puVar14, plVar13 == (long *)0x0)) {
LAB_1005d9010:
    func_0x0001006012f0();
    puVar1 = puVar9 + 0x25;
    uStack_240 = 1;
    ppuStack_250 = ppuVar10;
    puStack_248 = puVar1;
    *ppuVar10 = (undefined1 *)0x0;
    ppuVar10[1] = (undefined1 *)0x0;
    *(undefined4 *)(ppuVar10 + 2) = 0;
    puVar23 = puStack_170;
    ppuVar10[4] = puStack_168;
    ppuVar10[3] = puStack_170;
    puStack_170 = (undefined1 *)0x0;
    puStack_168 = (undefined1 *)0x0;
    func_0x0001006012f8(puVar9[0x26]);
    if ((uVar18 == 0) || (FUN_100b449e4(), (bool)uVar5)) {
      func_0x000100601304();
      bVar4 = 2 < uVar18;
      bVar6 = uVar18 == 3;
      func_0x00010060131c();
      uVar22 = extraout_x8_01;
      if (!bVar4 || bVar6) {
        uVar22 = extraout_x9;
      }
      FUN_100601330(puVar14,uVar22);
      uVar18 = puVar9[0x24];
    }
    puVar14 = (undefined8 *)*puVar14;
    puVar15 = (undefined8 *)*puVar14;
    if (puVar15 == (undefined8 *)0x0) {
      *ppuVar10 = (undefined1 *)*puVar1;
      *puVar1 = ppuVar10;
      *puVar14 = puVar1;
      if (*ppuVar10 != (undefined1 *)0x0) {
        uVar16 = *(ulong *)(*ppuVar10 + 8);
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar16 = uVar16 & uVar18 - 1;
        }
        else if (uVar18 <= uVar16) {
          uVar3 = 0;
          if (uVar18 != 0) {
            uVar3 = uVar16 / uVar18;
          }
          uVar16 = uVar16 - uVar3 * uVar18;
        }
        puVar14[uVar16] = ppuVar10;
      }
    }
    else {
      *ppuVar10 = (undefined1 *)*puVar15;
      *puVar15 = ppuVar10;
    }
    ppuStack_250 = (undefined1 **)0x0;
    puVar9[0x26] = puVar9[0x26] + 1;
    FUN_1006014e4(&ppuStack_250);
  }
  else {
    do {
      while( true ) {
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_1005d9010;
        uVar16 = plVar13[1];
        if (uVar16 == 0) break;
        if ((uVar18 & uVar18 - 1) == 0) {
          uVar5 = 0;
          if ((uVar16 & uVar18 - 1) != 0) goto LAB_1005d9010;
        }
        else {
          uVar5 = (long)(uVar16 - uVar18) < 0;
          if (uVar16 < uVar18) goto LAB_1005d9010;
          uVar3 = 0;
          if (uVar18 != 0) {
            uVar3 = uVar16 / uVar18;
          }
          if (uVar16 != uVar3 * uVar18) goto LAB_1005d9010;
        }
      }
    } while (*(int *)(plVar13 + 2) != 0);
  }
  FUN_100601520(&puStack_170);
  func_0x0001005e772c();
  if (bStack_220 == 1) {
    func_0x000107c30534(puVar9 + 0x4f,&ppuStack_250);
  }
  FUN_1005ec8b8();
  func_0x00010060e8c8(puVar9[0x53]);
  fVar21 = SUB84(puVar23,0);
  uVar18 = *(ulong *)(extraout_x8_02 + 0x10);
  puVar2 = (ulong *)(extraout_x8_02 + 0x10);
  if ((uVar18 & 1) != 0) {
    puVar2 = (ulong *)(uVar18 + 7);
  }
  for (lVar19 = (long)*(int *)(extraout_x8_02 + 0x18) << 3; lVar19 != 0; lVar19 = lVar19 + -8) {
    FUN_100206870(puVar9 + 0x55,*puVar2);
    fVar21 = SUB84(puVar23,0);
    puVar2 = puVar2 + 1;
  }
  if ((bRam00000001137f6528 & 1) == 0) {
    iVar8 = 0x137f6528;
    func_0x000107c60e48();
    if (iVar8 != 0) {
      uRam00000001137f65e8 = 0;
      cRam00000001137f66c0 = '\0';
      func_0x000107c60e4c(0x1137f6528);
    }
  }
  if (lRam00000001137f6530 != -1) {
    puStack_170 = auStack_270;
    appuStack_260[0] = &puStack_170;
    func_0x000107c60c38(0x1137f6530,appuStack_260,FUN_10060e8d4);
  }
  ppuStack_250 = (undefined1 **)((ulong)ppuStack_250 & 0xffffffffffffff00);
  uStack_178 = 0;
  if (cRam00000001137f66c0 == '\x01') {
    FUN_100600d04(&ppuStack_250,0x1137f65e8);
    uStack_178 = 1;
    func_0x000107c30068(&puStack_170,pppuVar20,&ppuStack_250,1);
    func_0x000107c300f8(&puStack_170);
  }
  pppuVar11 = &ppuStack_250;
  FUN_10060ef58();
  if (*(char *)((long)puVar9 + 0xc5) == '\x01') {
    func_0x000107c30068(appuStack_260,pppuVar20,&uStack_160,4);
    pppuVar11 = appuStack_260;
    func_0x000107c300f8();
    func_0x000107c60d9c();
    puVar9[0x29] = pppuVar11;
  }
  func_0x000107c60d9c();
  puVar9[0x28] = pppuVar11;
  if ((bRam00000001137f6538 & 1) == 0) {
    pppuVar11 = (undefined1 ***)0x1137f6538;
    func_0x000107c60e48();
    if ((int)pppuVar11 != 0) {
      func_0x0001005e7638(&PTR_DAT_110cedd20);
      pppuVar11 = (undefined1 ***)0x1137f6538;
      fRam00000001137f6504 = fVar21;
      func_0x000107c60e4c();
    }
  }
  fVar21 = fRam00000001137f6504;
  func_0x0001006012f0();
  FUN_10060129c((double)fVar21,0);
  lVar19 = *plVar17;
  *plVar17 = (long)pppuVar11;
  if (lVar19 != 0) {
    func_0x000107c396ac();
  }
  pppuVar11 = pppuVar20;
  FUN_10060ef78();
  FUN_10060eff8();
  if ((int)pppuVar11 != 0) {
    func_0x000107c39714();
    func_0x000107c30030(0x3fc0000000000000,0x3fd0000000000000,0,0x7ff0000000000000,
                        0x404e000000000000,0x7ff0000000000000,0x7ff0000000000000,0);
    ppuStack_250 = (undefined1 **)0x0;
    func_0x000107c300e0(puVar9 + 0x37,pppuVar11);
    pppuVar11 = &ppuStack_250;
    func_0x000107c300dc();
  }
  FUN_10060f068();
  iVar8 = (int)pppuVar11;
  if ((((ulong)pppuVar11 & 1) != 0) || (FUN_10060f0d8(), iVar8 != 0)) {
    FUN_10002b838(&ppuStack_250,&UNK_10f770838);
    FUN_10044fc54(auStack_270,&ppuStack_250,0x1a,2,0);
    FUN_100450bb4(puVar9 + 0x58,auStack_270);
    FUN_100450be4(auStack_270);
    func_0x000107c396ec();
  }
  func_0x00010060f1a0(&uStack_160);
  uStack_160 = 0;
  uStack_158 = 0;
  puStack_248 = puRam000000011383d6f8;
  ppuStack_250 = (undefined1 **)pppuRam000000011383d6f0;
  pppuRam000000011383d6f0 = pppuVar20;
  puRam000000011383d6f8 = puVar9;
  FUN_10046997c(&ppuStack_250);
  FUN_10060f2c0(&uStack_160);
  return;
}



/* Entry: 1005d9508; end: 1005d950f;  */

void FUN_1005d9508(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ef3fa0;
  FUN_1000285a8(0x112ef3fa0,&UNK_10db22b18);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10025a71c(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1005d9510; end: 1005d959b;  */

void FUN_1005d9510(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ef3fa0;
  FUN_1000285a8(0x112ef3fa0,&UNK_10db22b18);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10025a71c(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a7288;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1005d959c; end: 1005d965f;  */

void FUN_1005d959c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0xf770758;
  FUN_1003ba264(&DAT_10f770758,0x1f,0);
  uRam000000011383d658 = uVar2;
  uVar1 = 0x78;
  FUN_10011bfd4(&DAT_10f770778,0x13,0);
  uRam000000011383d65c = uVar1;
  uVar2 = 0xf77078c;
  FUN_1003ba264(&DAT_10f77078c,0x16,1000);
  uRam000000011383d660 = uVar2;
  uVar2 = 0xf7707a3;
  FUN_1003ba264(&DAT_10f7707a3,0x18,10);
  uRam000000011383d664 = uVar2;
  uVar2 = 0x3ecccccd;
  FUN_1005e7160(&DAT_10f7707bc,0x12);
  uVar3 = 0x3f800000;
  uRam000000011383d668 = uVar2;
  FUN_1005e7160(&DAT_10f7707cf,0x14);
  uRam000000011383d66c = uVar3;
  func_0x0001005e7638(&PTR_DAT_110ced868);
  uRam000000011383d670 = uVar3;
  return;
}



/* Entry: 1005d9660; end: 1005d9663;  */

void FUN_1005d9660(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1005d9664; end: 1005d9697;  */

void FUN_1005d9664(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1005d9698; end: 1005d96af;  */

void FUN_1005d9698(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8(0x112d9e968,&UNK_10d95d330);
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d96b0; end: 1005d96eb;  */

void FUN_1005d96b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000285a8();
  func_0x000107c613fc();
  uVar1 = 1;
  FUN_10008747c();
  *param_1 = uVar1;
  return;
}



/* Entry: 1005d96ec; end: 1005d970b;  */

void FUN_1005d96ec(void)

{
  func_0x000107c61168(&PTR_PTR_11296b160);
  return;
}



/* Entry: 1005d970c; end: 1005d9737;  */

void FUN_1005d970c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1005c3218();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 1005d9738; end: 1005d97f7; -[_TtC20SCCameraFeatureScope23SCCameraFeatureServices init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1005d9738(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c43bf4();
  func_0x000107c61180();
  *(undefined **)(param_1 + _DAT_1130354a0) = puVar3;
  *(undefined **)(param_1 + _DAT_1130354a8) = puVar2;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174(puVar2);
  func_0x000107c453e4();
  *(undefined **)(param_1 + _DAT_1130354b0) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  func_0x000107c61170(puVar2);
  return (undefined1 *)plVar4;
}



/* Entry: 1005d97f8; end: 1005d9827;  */

void FUN_1005d97f8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126abfb8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 1005d9828; end: 1005d98c3; -[SCCameraPrivateFeatureContainerImpl init] */

undefined1 * FUN_1005d9828(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3780;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b81f0;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1005d98c4; end: 1005d9917;  */

void FUN_1005d98c4(void)

{
  func_0x000107c61168(&PTR_PTR_112ef3f30);
  return;
}



/* Entry: 1005d9918; end: 1005d991f;  */

void FUN_1005d9918(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001005dae8c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11059e5d0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005d9920; end: 1005d9983;  */

void FUN_1005d9920(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  func_0x0001005dae8c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11059e5d0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005d9984; end: 1005d9b8b;  */

void FUN_1005d9984(void)

{
  long unaff_x20;
  
  FUN_1005d9b8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1005d9b8c; end: 1005da673;  */

/* WARNING: Possible PIC construction at 0x0001005da26c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da27c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da28c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da29c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da2bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da2fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da30c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da32c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da33c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da34c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da36c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da37c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da39c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da3dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da3ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da3fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da40c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da41c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da43c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da44c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da46c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da4bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da4cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da4dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da4fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da50c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da51c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da54c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da55c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da56c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da57c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da5bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da5cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da5ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da5fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da60c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da61c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da63c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005da64c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005da640) */
/* WARNING: Removing unreachable block (ram,0x0001005da630) */
/* WARNING: Removing unreachable block (ram,0x0001005da620) */
/* WARNING: Removing unreachable block (ram,0x0001005da610) */
/* WARNING: Removing unreachable block (ram,0x0001005da600) */
/* WARNING: Removing unreachable block (ram,0x0001005da5f0) */
/* WARNING: Removing unreachable block (ram,0x0001005da5e0) */
/* WARNING: Removing unreachable block (ram,0x0001005da5d0) */
/* WARNING: Removing unreachable block (ram,0x0001005da5c0) */
/* WARNING: Removing unreachable block (ram,0x0001005da5b0) */
/* WARNING: Removing unreachable block (ram,0x0001005da5a0) */
/* WARNING: Removing unreachable block (ram,0x0001005da590) */
/* WARNING: Removing unreachable block (ram,0x0001005da580) */
/* WARNING: Removing unreachable block (ram,0x0001005da570) */
/* WARNING: Removing unreachable block (ram,0x0001005da560) */
/* WARNING: Removing unreachable block (ram,0x0001005da550) */
/* WARNING: Removing unreachable block (ram,0x0001005da540) */
/* WARNING: Removing unreachable block (ram,0x0001005da530) */
/* WARNING: Removing unreachable block (ram,0x0001005da520) */
/* WARNING: Removing unreachable block (ram,0x0001005da510) */
/* WARNING: Removing unreachable block (ram,0x0001005da500) */
/* WARNING: Removing unreachable block (ram,0x0001005da4f0) */
/* WARNING: Removing unreachable block (ram,0x0001005da4e0) */
/* WARNING: Removing unreachable block (ram,0x0001005da4d0) */
/* WARNING: Removing unreachable block (ram,0x0001005da4c0) */
/* WARNING: Removing unreachable block (ram,0x0001005da4b0) */
/* WARNING: Removing unreachable block (ram,0x0001005da4a0) */
/* WARNING: Removing unreachable block (ram,0x0001005da490) */
/* WARNING: Removing unreachable block (ram,0x0001005da480) */
/* WARNING: Removing unreachable block (ram,0x0001005da470) */
/* WARNING: Removing unreachable block (ram,0x0001005da460) */
/* WARNING: Removing unreachable block (ram,0x0001005da450) */
/* WARNING: Removing unreachable block (ram,0x0001005da440) */
/* WARNING: Removing unreachable block (ram,0x0001005da430) */
/* WARNING: Removing unreachable block (ram,0x0001005da420) */
/* WARNING: Removing unreachable block (ram,0x0001005da410) */
/* WARNING: Removing unreachable block (ram,0x0001005da400) */
/* WARNING: Removing unreachable block (ram,0x0001005da3f0) */
/* WARNING: Removing unreachable block (ram,0x0001005da3e0) */
/* WARNING: Removing unreachable block (ram,0x0001005da3d0) */
/* WARNING: Removing unreachable block (ram,0x0001005da3c0) */
/* WARNING: Removing unreachable block (ram,0x0001005da3b0) */
/* WARNING: Removing unreachable block (ram,0x0001005da3a0) */
/* WARNING: Removing unreachable block (ram,0x0001005da390) */
/* WARNING: Removing unreachable block (ram,0x0001005da380) */
/* WARNING: Removing unreachable block (ram,0x0001005da370) */
/* WARNING: Removing unreachable block (ram,0x0001005da360) */
/* WARNING: Removing unreachable block (ram,0x0001005da350) */
/* WARNING: Removing unreachable block (ram,0x0001005da340) */
/* WARNING: Removing unreachable block (ram,0x0001005da330) */
/* WARNING: Removing unreachable block (ram,0x0001005da320) */
/* WARNING: Removing unreachable block (ram,0x0001005da310) */
/* WARNING: Removing unreachable block (ram,0x0001005da300) */
/* WARNING: Removing unreachable block (ram,0x0001005da2f0) */
/* WARNING: Removing unreachable block (ram,0x0001005da2e0) */
/* WARNING: Removing unreachable block (ram,0x0001005da2d0) */
/* WARNING: Removing unreachable block (ram,0x0001005da2c0) */
/* WARNING: Removing unreachable block (ram,0x0001005da2b0) */
/* WARNING: Removing unreachable block (ram,0x0001005da2a0) */
/* WARNING: Removing unreachable block (ram,0x0001005da290) */
/* WARNING: Removing unreachable block (ram,0x0001005da280) */
/* WARNING: Removing unreachable block (ram,0x0001005da270) */
/* WARNING: Removing unreachable block (ram,0x0001005da650) */

void FUN_1005d9b8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  
  puVar1 = &UNK_110585fc8;
  func_0x000107c613fc(&UNK_110585fc8,0x400,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  uVar2 = 0x112edb390;
  FUN_1000285a8(0x112edb390,&UNK_10db09148);
  func_0x000107c613fc();
  pcVar3 = FUN_100757d24;
  FUN_1000841f8(FUN_100757d24,puVar1,uVar2);
  FUN_100084214("SCCameraFeatureProviderPluginRegistryServiceProvider",0x34,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1005da674; end: 1005daeab;  */

void FUN_1005da674(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005daeac; end: 1005dafe3;  */

void FUN_1005daeac(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  func_0x0001005dbfdc();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x48) = uStack_80;
  *(undefined8 *)(lVar1 + 0x50) = uStack_78;
  *(undefined8 *)(lVar1 + 0x38) = uStack_a0;
  *(undefined8 *)(lVar1 + 0x40) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_88;
  *(undefined8 *)(lVar1 + 0x10) = uStack_90;
  *(undefined8 *)(lVar1 + 0x18) = uStack_98;
  *(undefined8 *)(lVar1 + 0x30) = uStack_a8;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11059e750;
  *param_1 = lVar1;
  return;
}



/* Entry: 1005dafe4; end: 1005db017;  */

void FUN_1005dafe4(void)

{
  long unaff_x20;
  
  FUN_1005daeac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1005db018; end: 1005db01f;  */

void FUN_1005db018(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1005db144();
  func_0x000107c610f8();
  FUN_1000cad14();
  uVar2 = 0x112ee2a70;
  FUN_1000285a8(0x112ee2a70,&UNK_10db0dc28);
  pcVar3 = FUN_100847168;
  FUN_1000cb480(FUN_100847168,0,uVar2);
  func_0x000107c61574(uVar1);
  FUN_1000285a8(0x112ee2a78,&UNK_10db0dc30);
  puVar4 = &UNK_110588eb8;
  func_0x000107c613fc(&UNK_110588eb8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uStack_48;
  *(code **)(puVar4 + 0x18) = pcVar3;
  uVar2 = uStack_48;
  func_0x000107c61174(uStack_48);
  pcVar3 = FUN_10084629c;
  FUN_1000823a8(FUN_10084629c,puVar4);
  pcVar5 = pcVar3;
  func_0x0001000ad7c4();
  pcVar6 = pcVar5;
  FUN_1000cad14();
  func_0x0001005db164(pcVar5,pcVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61574(pcVar3);
  *param_1 = pcVar5;
  return;
}



/* Entry: 1005db020; end: 1005db143;  */

void FUN_1005db020(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_1005db144();
  func_0x000107c610f8();
  FUN_1000cad14();
  uVar1 = 0x112ee2a70;
  FUN_1000285a8(0x112ee2a70,&UNK_10db0dc28);
  pcVar2 = FUN_100847168;
  FUN_1000cb480(FUN_100847168,0,uVar1);
  func_0x000107c61574(param_2);
  FUN_1000285a8(0x112ee2a78,&UNK_10db0dc30);
  puVar3 = &UNK_110588eb8;
  func_0x000107c613fc(&UNK_110588eb8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uStack_48;
  *(code **)(puVar3 + 0x18) = pcVar2;
  uVar1 = uStack_48;
  func_0x000107c61174(uStack_48);
  pcVar2 = FUN_10084629c;
  FUN_1000823a8(FUN_10084629c,puVar3);
  pcVar4 = pcVar2;
  func_0x0001000ad7c4();
  pcVar5 = pcVar4;
  FUN_1000cad14();
  func_0x0001005db164(pcVar4,pcVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(pcVar2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1005db144; end: 1005db1d7;  */

void FUN_1005db144(void)

{
  func_0x000107c61168(&PTR_PTR_1128817f8);
  return;
}



/* Entry: 1005db1d8; end: 1005db1df;  */

void FUN_1005db1d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ef40a8;
  FUN_1000285a8(0x112ef40a8,&UNK_10db22c40);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1005db1e0; end: 1005db26b;  */

void FUN_1005db1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = 0x112ef40a8;
  FUN_1000285a8(0x112ef40a8,&UNK_10db22c40);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  FUN_10017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1005db26c; end: 1005db287;  */

void FUN_1005db26c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1005db288; end: 1005dbb0f;  */

/* WARNING: Possible PIC construction at 0x0001005db7d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db7e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db8c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db8e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db980: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db9a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db9b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db9e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005db9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dba90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dbaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dbab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dbac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dbad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005dbae0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001005dbad4) */
/* WARNING: Removing unreachable block (ram,0x0001005dbac4) */
/* WARNING: Removing unreachable block (ram,0x0001005dbab4) */
/* WARNING: Removing unreachable block (ram,0x0001005dbaa4) */
/* WARNING: Removing unreachable block (ram,0x0001005dba94) */
/* WARNING: Removing unreachable block (ram,0x0001005dba84) */
/* WARNING: Removing unreachable block (ram,0x0001005dba74) */
/* WARNING: Removing unreachable block (ram,0x0001005dba64) */
/* WARNING: Removing unreachable block (ram,0x0001005dba54) */
/* WARNING: Removing unreachable block (ram,0x0001005dba44) */
/* WARNING: Removing unreachable block (ram,0x0001005dba34) */
/* WARNING: Removing unreachable block (ram,0x0001005dba24) */
/* WARNING: Removing unreachable block (ram,0x0001005dba14) */
/* WARNING: Removing unreachable block (ram,0x0001005dba04) */
/* WARNING: Removing unreachable block (ram,0x0001005db9f4) */
/* WARNING: Removing unreachable block (ram,0x0001005db9e4) */
/* WARNING: Removing unreachable block (ram,0x0001005db9d4) */
/* WARNING: Removing unreachable block (ram,0x0001005db9c4) */
/* WARNING: Removing unreachable block (ram,0x0001005db9b4) */
/* WARNING: Removing unreachable block (ram,0x0001005db9a4) */
/* WARNING: Removing unreachable block (ram,0x0001005db994) */
/* WARNING: Removing unreachable block (ram,0x0001005db984) */
/* WARNING: Removing unreachable block (ram,0x0001005db974) */
/* WARNING: Removing unreachable block (ram,0x0001005db964) */
/* WARNING: Removing unreachable block (ram,0x0001005db954) */
/* WARNING: Removing unreachable block (ram,0x0001005db944) */
/* WARNING: Removing unreachable block (ram,0x0001005db934) */
/* WARNING: Removing unreachable block (ram,0x0001005db924) */
/* WARNING: Removing unreachable block (ram,0x0001005db914) */
/* WARNING: Removing unreachable block (ram,0x0001005db904) */
/* WARNING: Removing unreachable block (ram,0x0001005db8f4) */
/* WARNING: Removing unreachable block (ram,0x0001005db8e4) */
/* WARNING: Removing unreachable block (ram,0x0001005db8d4) */
/* WARNING: Removing unreachable block (ram,0x0001005db8c4) */
/* WARNING: Removing unreachable block (ram,0x0001005db8b4) */
/* WARNING: Removing unreachable block (ram,0x0001005db8a4) */
/* WARNING: Removing unreachable block (ram,0x0001005db894) */
/* WARNING: Removing unreachable block (ram,0x0001005db884) */
/* WARNING: Removing unreachable block (ram,0x0001005db874) */
/* WARNING: Removing unreachable block (ram,0x0001005db864) */
/* WARNING: Removing unreachable block (ram,0x0001005db854) */
/* WARNING: Removing unreachable block (ram,0x0001005db844) */
/* WARNING: Removing unreachable block (ram,0x0001005db834) */
/* WARNING: Removing unreachable block (ram,0x0001005db824) */
/* WARNING: Removing unreachable block (ram,0x0001005db814) */
/* WARNING: Removing unreachable block (ram,0x0001005db804) */
/* WARNING: Removing unreachable block (ram,0x0001005db7f4) */
/* WARNING: Removing unreachable block (ram,0x0001005db7e4) */
/* WARNING: Removing unreachable block (ram,0x0001005db7d4) */
/* WARNING: Removing unreachable block (ram,0x0001005dbae4) */

void FUN_1005db288(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  
  puVar1 = &UNK_1105946a0;
  func_0x000107c613fc(&UNK_1105946a0,0x338,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  uVar2 = 0x112ee93c8;
  FUN_1000285a8(0x112ee93c8,&UNK_10db16860);
  func_0x000107c613fc();
  pcVar3 = FUN_1007d41b0;
  FUN_1000841f8(FUN_1007d41b0,puVar1,uVar2);
  FUN_100084214(&UNK_10db16830,0x2b,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1005dbb10; end: 1005dbb13;  */

void FUN_1005dbb10(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dbb14; end: 1005dbc93;  */

void FUN_1005dbb14(void)

{
  long unaff_x20;
  
  FUN_1005db288(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1005dbc94; end: 1005dbc97;  */

void FUN_1005dbc94(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dbc98; end: 1005dc07f;  */

void FUN_1005dbc98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dc080; end: 1005dc0c3;  */

long FUN_1005dc080(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1005dc0c4; end: 1005dc47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005dc0c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  *(long *)(unaff_x20 + 0x10) = param_1;
  FUN_1005dc080(param_2,unaff_x20 + 0x18);
  FUN_1005dc080(param_3,unaff_x20 + 0x40);
  FUN_1005dc080(param_4,unaff_x20 + 0x68);
  iVar1 = *(int *)(param_1 + _DAT_113082430);
  func_0x000107c61174();
  if (iVar1 == 3) {
    func_0x000107c61170();
    func_0x0001000834e4(param_4);
    func_0x0001000834e4(param_2);
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    lVar11 = *(long *)(param_3 + 0x20);
    FUN_1000a8868(param_3,uVar2);
    (**(code **)(lVar11 + 8))(uVar2,lVar11);
    puVar3 = &UNK_11059e470;
    func_0x000107c613fc(&UNK_11059e470,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    FUN_1005dc080(param_2,auStack_90);
    FUN_1005dc080(auStack_90,auStack_b8);
    puVar4 = &UNK_11059e498;
    func_0x000107c613fc(&UNK_11059e498,0x48,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    func_0x000102b2b0a0(auStack_90,puVar4 + 0x18);
    *(undefined8 *)(puVar4 + 0x40) = uVar2;
    lVar11 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113082408);
    if (lVar11 == 0) {
      func_0x000107c61428(puVar3 + 0x10,&puStack_e8,0,0);
      puVar7 = puVar3 + 0x10;
      func_0x000107c61648();
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61434(uVar2);
        func_0x000107c6157c(puVar3);
        func_0x000107c6142c(uVar2);
      }
      else {
        FUN_1000a8868();
        puVar8 = &UNK_11059e470;
        func_0x000107c613fc(&UNK_11059e470,0x18,7);
        func_0x000107c61644(puVar8 + 0x10,puVar7);
        puVar9 = &UNK_11059e4c0;
        func_0x000107c613fc(&UNK_11059e4c0,0x28,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(undefined8 *)(puVar9 + 0x18) = uVar2;
        *(undefined **)(puVar9 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
        pcVar10 = *(code **)(lStack_98 + 8);
        func_0x000107c61438(uVar2,2);
        func_0x000107c6157c(puVar3);
        func_0x000107c6157c(puVar8);
        (*pcVar10)(&UNK_102b2b1ac,puVar9,uStack_a0,lStack_98);
        func_0x000107c6142c(uVar2);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar8);
        puVar4 = puVar9;
      }
      func_0x000107c61574(puVar4);
    }
    else {
      puVar7 = &UNK_11059e470;
      func_0x000107c613fc(&UNK_11059e470,0x18,7);
      func_0x000107c61644(puVar7 + 0x10);
      puVar8 = &UNK_11059e4e8;
      func_0x000107c613fc(&UNK_11059e4e8,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar7;
      *(undefined **)(puVar8 + 0x18) = &UNK_102b2b0b8;
      *(undefined **)(puVar8 + 0x20) = puVar4;
      puStack_c8 = &UNK_102b2b408;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0x42000000;
      pcStack_d8 = FUN_100bcda3c;
      puStack_d0 = &UNK_11059e500;
      ppuVar5 = &puStack_e8;
      puStack_c0 = puVar8;
      func_0x000107c60bc4(ppuVar5);
      puVar7 = puStack_c0;
      func_0x000107c61434(uVar2);
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(lVar11);
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar7);
      pcVar6 = "createScopedSaberPlugins(completion:)";
      func_0x0001000c10c0("createScopedSaberPlugins(completion:)");
      func_0x000107c61180();
      func_0x000107c5dc68(lVar11);
      func_0x000107c615e8(pcVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_1);
      func_0x000107c6142c(uVar2);
      func_0x000107c61574(puVar4);
      param_1 = lVar11;
    }
    func_0x000107c61170(param_1);
    func_0x0001000834e4(param_4);
    func_0x0001000834e4(param_2);
    func_0x0001000834e4(auStack_b8);
    func_0x000107c61574(puVar3);
  }
  func_0x0001000834e4(param_3);
  return;
}



/* Entry: 1005dc480; end: 1005dc503;  */

void FUN_1005dc480(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dc504; end: 1005dc50b;  */

void FUN_1005dc504(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dc50c; end: 1005dc547;  */

void FUN_1005dc50c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dc548; end: 1005dc553;  */

undefined ** FUN_1005dc548(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005dc554; end: 1005dc57f;  */

void FUN_1005dc554(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005dc580; end: 1005dc587;  */

void FUN_1005dc580(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5cfc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005dc588; end: 1005dc60b;  */

void FUN_1005dc588(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5cfc,param_2,&UNK_1029f5d00,param_2,&UNK_1029f5d28,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005dc60c; end: 1005dc617;  */

undefined ** FUN_1005dc60c(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005dc618; end: 1005dc643;  */

void FUN_1005dc618(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005dc644; end: 1005dc64b;  */

void FUN_1005dc644(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5e80);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005dc64c; end: 1005dc6cf;  */

void FUN_1005dc64c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5e80,param_2,&UNK_1029f5e84,param_2,&UNK_1029f5eac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005dc6d0; end: 1005dc6f3;  */

undefined ** FUN_1005dc6d0(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005dc6f4; end: 1005dc78b;  */

void FUN_1005dc6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105893d0;
  func_0x000107c613fc(&UNK_1105893d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1005dc78c,puVar1);
  return;
}



/* Entry: 1005dc78c; end: 1005dc797;  */

void FUN_1005dc78c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_1005dc830();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  FUN_1005dc850(uStack_48,uStack_50,uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110589420;
  return;
}



/* Entry: 1005dc798; end: 1005dc82f;  */

void FUN_1005dc798(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_1005dc830();
  func_0x000107c613fc();
  func_0x000107c6157c(param_4);
  FUN_1005dc850(uStack_48,uStack_50,param_4);
  *param_1 = param_2;
  param_1[1] = &PTR_DAT_110589420;
  return;
}



/* Entry: 1005dc830; end: 1005dc84f;  */

void FUN_1005dc830(void)

{
  func_0x000107c61168(&PTR_PTR_112ee2f58);
  return;
}



/* Entry: 1005dc850; end: 1005dca43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005dc850(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  ppuVar5 = &puStack_80;
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  lVar2 = *(long *)(param_1 + _DAT_113082430);
  func_0x0001005d3b6c();
  if (lVar2 == 1) {
    lVar2 = *(long *)(param_2 + _DAT_113074f68);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4c238();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c4c940();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar4 != 0) {
          lVar2 = lVar4;
          func_0x000107c5d58c();
          func_0x000107c61180();
          func_0x000107c615e8(lVar4);
          if (lVar2 != 0) {
            puStack_60 = &UNK_102a33348;
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0x42000000;
            puStack_70 = &UNK_102a332cc;
            puStack_68 = &UNK_1105893e8;
            uStack_58 = param_3;
            func_0x000107c60bc4(&puStack_80);
            uVar6 = uStack_58;
            func_0x000107c6157c(param_3);
            func_0x000107c61574(uVar6);
            lVar4 = lVar2;
            func_0x000107c5c320(lVar2);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar5);
            uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
            func_0x000107c61174(uVar6);
            func_0x000107c3e924(lVar4);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar4);
            func_0x000107c61170(uVar6);
            goto LAB_1005dc9e8;
          }
        }
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61574(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
  }
  else {
LAB_1005dc9e8:
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1005dca44; end: 1005dca77;  */

void FUN_1005dca44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dca78; end: 1005dca9b;  */

undefined ** FUN_1005dca78(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005dca9c; end: 1005dcb1b;  */

void FUN_1005dca9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110587398;
  func_0x000107c613fc(&UNK_110587398,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1005dcb1c,puVar1);
  return;
}



/* Entry: 1005dcb1c; end: 1005dcb23;  */

void FUN_1005dcb1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112edec00,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112edec00,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110587870;
  func_0x000107c613fc(&UNK_110587870,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102a11cd0;
  FUN_10058fa64(&UNK_102a11cd0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1005dcb24; end: 1005dcc1b;  */

void FUN_1005dcb24(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  FUN_100083b20(auStack_50);
  FUN_100083b20(&uStack_38);
  func_0x000107c61428(0x112edec00,auStack_50,0x20,0);
  uVar2 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112edec00,uVar2,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_110587870;
  func_0x000107c613fc(&UNK_110587870,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = auStack_50[0];
  uVar2 = 0;
  FUN_10058fa44(0);
  func_0x000107c613fc();
  puVar3 = &UNK_102a11cd0;
  FUN_10058fa64(&UNK_102a11cd0,puVar1,uVar2);
  *param_1 = puVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1005dcc1c; end: 1005dcc3f;  */

void FUN_1005dcc1c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005dcc40; end: 1005dd7ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005dcc40(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  long lStack_78;
  long lStack_70;
  
  lVar2 = param_2;
  FUN_1005c8ed0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112edec10) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112edec18) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112edec20) = param_4;
  *(undefined8 *)(lVar3 + _DAT_112edec28) = param_5;
  *(undefined8 *)(lVar3 + _DAT_112edec30) = param_6;
  *(undefined8 *)(lVar3 + _DAT_112edec38) = param_7;
  *(undefined8 *)(lVar3 + _DAT_112edec40) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112edec48) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112edec50) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112edec58) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112edec60) = param_12;
  *(undefined8 *)(lVar3 + _DAT_112edec68) = param_13;
  *(undefined8 *)(lVar3 + _DAT_112edec70) = param_14;
  *(undefined8 *)(lVar3 + _DAT_112edec78) = param_15;
  *(undefined8 *)(lVar3 + _DAT_112edec80) = param_16;
  *(undefined8 *)(lVar3 + _DAT_112edec88) = param_17;
  *(undefined8 *)(lVar3 + _DAT_112edec90) = param_18;
  *(undefined8 *)(lVar3 + _DAT_112edec98) = param_19;
  *(undefined8 *)(lVar3 + _DAT_112edeca0) = param_20;
  *(undefined8 *)(lVar3 + _DAT_112edeca8) = param_21;
  *(undefined8 *)(lVar3 + _DAT_112edecb0) = param_22;
  *(undefined8 *)(lVar3 + _DAT_112edecb8) = param_23;
  *(undefined8 *)(lVar3 + _DAT_112edecc0) = param_24;
  *(undefined8 *)(lVar3 + _DAT_112edecc8) = param_25;
  *(undefined8 *)(lVar3 + _DAT_112edecd0) = param_26;
  *(undefined8 *)(lVar3 + _DAT_112edecd8) = param_27;
  *(undefined8 *)(lVar3 + _DAT_112edece0) = param_28;
  *(undefined8 *)(lVar3 + _DAT_112edece8) = param_29;
  *(undefined8 *)(lVar3 + _DAT_112edecf0) = param_30;
  *(undefined8 *)(lVar3 + _DAT_112edecf8) = param_31;
  *(undefined8 *)(lVar3 + _DAT_112eded00) = param_32;
  *(undefined8 *)(lVar3 + _DAT_112eded08) = param_33;
  *(undefined8 *)(lVar3 + _DAT_112eded10) = param_34;
  *(undefined8 *)(lVar3 + _DAT_112eded18) = param_35;
  *(undefined8 *)(lVar3 + _DAT_112eded20) = param_36;
  *(undefined8 *)(lVar3 + _DAT_112eded28) = param_37;
  *(undefined8 *)(lVar3 + _DAT_112eded30) = param_38;
  *(undefined8 *)(lVar3 + _DAT_112eded38) = param_39;
  *(undefined8 *)(lVar3 + _DAT_112eded40) = param_40;
  *(undefined8 *)(lVar3 + _DAT_112eded48) = param_41;
  *(undefined8 *)(lVar3 + _DAT_112eded50) = param_42;
  *(undefined8 *)(lVar3 + _DAT_112eded58) = param_43;
  *(undefined8 *)(lVar3 + _DAT_112eded60) = param_44;
  *(undefined8 *)(lVar3 + _DAT_112eded68) = param_45;
  *(undefined8 *)(lVar3 + _DAT_112eded70) = param_46;
  *(undefined8 *)(lVar3 + _DAT_112eded78) = param_47;
  *(undefined8 *)(lVar3 + _DAT_112eded80) = param_48;
  *(undefined8 *)(lVar3 + _DAT_112eded88) = param_49;
  *(undefined8 *)(lVar3 + _DAT_112eded90) = param_50;
  *(undefined8 *)(lVar3 + _DAT_112eded98) = param_51;
  *(undefined8 *)(lVar3 + _DAT_112ededa0) = param_52;
  *(undefined8 *)(lVar3 + _DAT_112ededa8) = param_53;
  *(undefined8 *)(lVar3 + _DAT_112ededb0) = param_54;
  *(undefined8 *)(lVar3 + _DAT_112ededb8) = param_55;
  *(undefined8 *)(lVar3 + _DAT_112ededc0) = param_56;
  *(undefined8 *)(lVar3 + _DAT_112ededc8) = param_57;
  *(undefined8 *)(lVar3 + _DAT_112ededd0) = param_58;
  *(undefined8 *)(lVar3 + _DAT_112ededd8) = param_59;
  *(undefined8 *)(lVar3 + _DAT_112edede0) = param_60;
  *(undefined8 *)(lVar3 + _DAT_112edede8) = param_61;
  *(undefined8 *)(lVar3 + _DAT_112ededf0) = param_62;
  *(undefined8 *)(lVar3 + _DAT_112ededf8) = param_63;
  *(undefined8 *)(lVar3 + _DAT_112edee00) = param_64;
  *(undefined8 *)(lVar3 + _DAT_112edee08) = param_65;
  *(undefined8 *)(lVar3 + _DAT_112edee10) = param_66;
  *(undefined8 *)(lVar3 + _DAT_112edee18) = param_67;
  *(undefined8 *)(lVar3 + _DAT_112edee20) = param_68;
  *(undefined8 *)(lVar3 + _DAT_112edee28) = param_69;
  *(undefined8 *)(lVar3 + _DAT_112edee30) = param_70;
  *(undefined8 *)(lVar3 + _DAT_112edee38) = param_71;
  *(undefined8 *)(lVar3 + _DAT_112edee40) = in_stack_000001f0;
  *(undefined8 *)(lVar3 + _DAT_112edee48) = in_stack_000001f8;
  *(undefined8 *)(lVar3 + _DAT_112edee50) = in_stack_00000200;
  *(undefined8 *)(lVar3 + _DAT_112edee58) = in_stack_00000208;
  *(undefined8 *)(lVar3 + _DAT_112edee60) = in_stack_00000210;
  *(undefined8 *)(lVar3 + _DAT_112edee68) = in_stack_00000218;
  *(undefined8 *)(lVar3 + _DAT_112edee70) = in_stack_00000220;
  *(undefined8 *)(lVar3 + _DAT_112edee78) = in_stack_00000228;
  *(undefined8 *)(lVar3 + _DAT_112edee80) = in_stack_00000230;
  *(undefined8 *)(lVar3 + _DAT_112edee88) = in_stack_00000238;
  *(undefined8 *)(lVar3 + _DAT_112edee90) = in_stack_00000240;
  *(undefined8 *)(lVar3 + _DAT_112edee98) = in_stack_00000248;
  *(undefined8 *)(lVar3 + _DAT_112edeea0) = in_stack_00000250;
  *(undefined8 *)(lVar3 + _DAT_112edeea8) = in_stack_00000258;
  *(undefined8 *)(lVar3 + _DAT_112edeeb0) = in_stack_00000260;
  *(undefined8 *)(lVar3 + _DAT_112edeeb8) = in_stack_00000268;
  *(undefined8 *)(lVar3 + _DAT_112edeec0) = in_stack_00000270;
  *(undefined8 *)(lVar3 + _DAT_112edeec8) = in_stack_00000278;
  *(undefined8 *)(lVar3 + _DAT_112edeed0) = in_stack_00000280;
  *(undefined8 *)(lVar3 + _DAT_112edeed8) = in_stack_00000288;
  *(undefined8 *)(lVar3 + _DAT_112edeee0) = in_stack_00000290;
  *(undefined8 *)(lVar3 + _DAT_112edeee8) = in_stack_00000298;
  *(undefined8 *)(lVar3 + _DAT_112edeef0) = in_stack_000002a0;
  *(undefined8 *)(lVar3 + _DAT_112edeef8) = in_stack_000002a8;
  *(undefined8 *)(lVar3 + _DAT_112edef00) = in_stack_000002b0;
  *(undefined8 *)(lVar3 + _DAT_112edef08) = in_stack_000002b8;
  *(undefined8 *)(lVar3 + _DAT_112edef10) = in_stack_000002c0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar3;
  lStack_70 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(param_71);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  func_0x000107c6157c(in_stack_00000268);
  func_0x000107c6157c(in_stack_00000270);
  func_0x000107c6157c(in_stack_00000278);
  func_0x000107c6157c(in_stack_00000280);
  func_0x000107c6157c(in_stack_00000288);
  func_0x000107c6157c(in_stack_00000290);
  func_0x000107c6157c(in_stack_00000298);
  func_0x000107c6157c(in_stack_000002a0);
  func_0x000107c6157c(in_stack_000002a8);
  func_0x000107c6157c(in_stack_000002b0);
  func_0x000107c6157c(in_stack_000002b8);
  func_0x000107c6157c(in_stack_000002c0);
  plVar4 = &lStack_78;
  func_0x000107c61154(plVar4,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1005dd7ac; end: 1005dd91b;  */

void FUN_1005dd7ac(void)

{
  long unaff_x20;
  
  FUN_1005dcc40(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1005dd91c; end: 1005ddc6b;  */

void FUN_1005dd91c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005ddc6c; end: 1005ddc77;  */

undefined ** FUN_1005ddc6c(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005ddc78; end: 1005ddca3;  */

void FUN_1005ddc78(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005ddca4; end: 1005ddcab;  */

void FUN_1005ddca4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5fa8);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005ddcac; end: 1005ddd2f;  */

void FUN_1005ddcac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f5fa8,param_2,&UNK_1029f5fac,param_2,&UNK_1029f5fd4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1005ddd30; end: 1005ddd3b;  */

undefined ** FUN_1005ddd30(void)

{
  return &PTR_DAT_113066880;
}



/* Entry: 1005ddd3c; end: 1005ddd67;  */

void FUN_1005ddd3c(void)

{
  FUN_1005d85e8();
  return;
}



/* Entry: 1005ddd68; end: 1005ddd6f;  */

void FUN_1005ddd68(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 1;
  FUN_1005d8744(1,&UNK_1029f612c);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}


