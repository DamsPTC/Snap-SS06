/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005e1bd0; end: 005e1c23; +[SIGSpecOverride sharedInstanceWithBottomSpacing] */

void FUN_005e1bd0(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b62ee0 != -1) {
    _dispatch_once(0xb62ee0,&PTR___NSConcreteGlobalBlock_00a0a7a8);
  }
  uVar1 = uRam0000000000b62ee8;
  _objc_retain(uRam0000000000b62ee8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005e1c24; end: 005e1c57;  */

void FUN_005e1c24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac32b8;
  _objc_alloc();
  func_0x00785020(0x4010000000000000);
  uVar1 = puRam0000000000b62ee8;
  puRam0000000000b62ee8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005e1c58; end: 005e1cab; +[SIGSpecOverride sharedInstanceWithNoShadowSpacing] */

void FUN_005e1c58(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b62ef0 != -1) {
    _dispatch_once(0xb62ef0,&PTR___NSConcreteGlobalBlock_00a0a7c8);
  }
  uVar1 = uRam0000000000b62ef8;
  _objc_retain(uRam0000000000b62ef8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 005e1cac; end: 005e1cdb;  */

void FUN_005e1cac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac32b8;
  _objc_alloc();
  func_0x00785da0();
  uVar1 = puRam0000000000b62ef8;
  puRam0000000000b62ef8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005e1cdc; end: 005e1dbf; -[SIGSpecOverride init] */

undefined1 * FUN_005e1cdc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4150;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    *(undefined8 *)((long)puVar1 + 8) = 0x4010000000000000;
    *(undefined8 *)((long)puVar1 + 0x20) = 0xc000000000000000;
    *(undefined8 *)((long)puVar1 + 0x18) = 0x3ff8000000000000;
    *(undefined8 *)((long)puVar1 + 0x30) = 0x403e000000000000;
    *(undefined8 *)((long)puVar1 + 0x28) = 0x4037000000000000;
    *(undefined8 *)((long)puVar1 + 0x40) = 0x4038000000000000;
    *(undefined8 *)((long)puVar1 + 0x38) = 0x4047000000000000;
    *(undefined8 *)((long)puVar1 + 0x48) = 0x4010000000000000;
    puVar2 = PTR__OBJC_CLASS___UIFont_00ac3290;
    func_0x0077fb20(0x4028000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIFont_00ac3290;
    func_0x00789160(0x4024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005e1dc0; end: 005e1de7; -[SIGSpecOverride initWithContainerBottomSpacing:] */

void FUN_005e1dc0(undefined8 param_1,long param_2)

{
  func_0x007849a0();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x10) = param_1;
  }
  return;
}



/* Entry: 005e1de8; end: 005e1e03; -[SIGSpecOverride initWithNoShadowSpacing] */

void FUN_005e1de8(long param_1)

{
  func_0x007849a0();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 005e1e04; end: 005e1e0b; -[SIGSpecOverride SIGContainerShadowSpacing] */

undefined8 FUN_005e1e04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 005e1e0c; end: 005e1e13; -[SIGSpecOverride SIGContainerBottomSpacing] */

undefined8 FUN_005e1e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 005e1e14; end: 005e1e1b; -[SIGSpecOverride SIGContainerLeftAndRightTwoColumnInset] */

undefined8 FUN_005e1e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 005e1e1c; end: 005e1e23; -[SIGSpecOverride SIGContainerTopAndBottomTwoColumnLayoutShadowOffset] */

undefined8 FUN_005e1e1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 005e1e24; end: 005e1e2b; -[SIGSpecOverride SIGSectionHeaderDefaultHeight] */

undefined8 FUN_005e1e24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 005e1e2c; end: 005e1e33; -[SIGSpecOverride SIGSectionHeaderHeightWithSubtitle] */

undefined8 FUN_005e1e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 005e1e34; end: 005e1e3b; -[SIGSpecOverride SIGSectionHeaderHeightWithMultilineSubtitle] */

undefined8 FUN_005e1e34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 005e1e3c; end: 005e1e43; -[SIGSpecOverride SIGSectionHeaderButtonHeight] */

undefined8 FUN_005e1e3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 005e1e44; end: 005e1e4b; -[SIGSpecOverride SIGSectionHeaderTrailingViewBottomInset] */

undefined8 FUN_005e1e44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 005e1e4c; end: 005e1e53; -[SIGSpecOverride SIGSectionHeaderTitleFont] */

undefined8 FUN_005e1e4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 005e1e54; end: 005e1e5b; -[SIGSpecOverride SIGSectionHeaderNewTitleFont] */

undefined8 FUN_005e1e54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 005e1e5c; end: 005e1e8b; -[SIGSpecOverride setSIGSectionHeaderNewTitleFont:] */

void FUN_005e1e5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005e1e8c; end: 005e1e93; -[SIGSpecOverride SIGSectionHeaderSubtitleFont] */

undefined8 FUN_005e1e8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 005e1e94; end: 005e1f23; -[SIGSpecOverride .cxx_destruct] */

void FUN_005e1e94(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x50,0);
  return;
}



/* Entry: 005e1f24; end: 005e1f4f;  */

void FUN_005e1f24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_00ac32c0;
  _objc_alloc_init();
  uVar1 = puRam0000000000b62f08;
  puRam0000000000b62f08 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 005e1f50; end: 005e1fdf; -[SIGStylesBase init] */

undefined1 * FUN_005e1f50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4158;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    func_0x00781fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 005e1fe0; end: 005e21a7; -[SIGStylesBase fontForStyle:] */

void FUN_005e1fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  switch(param_3) {
  case 0:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a3eac0);
  case 1:
    uVar1 = 0x4041000000000000;
    break;
  case 2:
    uVar1 = 0x403c000000000000;
    break;
  case 3:
    uVar1 = 0x4036000000000000;
    break;
  case 4:
    uVar1 = 0x4034000000000000;
    break;
  case 5:
  case 0xc:
    uVar1 = 0x4032000000000000;
    break;
  case 6:
  case 0x15:
    uVar1 = 0x402c000000000000;
    goto code_r0x005e2190;
  case 7:
  case 0xf:
  case 0x12:
    uVar1 = 0x402c000000000000;
    break;
  case 8:
    uVar1 = 0x4033000000000000;
    goto code_r0x005e2158;
  case 9:
    uVar1 = 0x4030000000000000;
    goto code_r0x005e2158;
  case 10:
    uVar1 = 0x402a000000000000;
    goto code_r0x005e2158;
  case 0xb:
  case 0x10:
    uVar1 = 0x4028000000000000;
    goto code_r0x005e2158;
  case 0xd:
  case 0x14:
    uVar1 = 0x4030000000000000;
    goto code_r0x005e2190;
  case 0xe:
  case 0x16:
  case 0x1a:
  case 0x1b:
    uVar1 = 0x4030000000000000;
    break;
  case 0x11:
  case 0x18:
  case 0x1d:
    uVar1 = 0x4028000000000000;
    break;
  case 0x13:
  case 0x22:
    uVar1 = 0x4024000000000000;
    break;
  case 0x17:
    uVar1 = 0x4028000000000000;
    goto code_r0x005e2190;
  case 0x19:
  case 0x21:
    uVar1 = 0x4024000000000000;
code_r0x005e2190:
    func_0x00789140(uVar1,PTR__OBJC_CLASS___UIFont_00ac3290);
    _objc_retainAutoreleasedReturnValue();
    goto _objc_autoreleaseReturnValue;
  case 0x1c:
    uVar1 = 0x402a000000000000;
    break;
  case 0x1e:
    uVar1 = 0x4022000000000000;
    goto code_r0x005e2158;
  case 0x1f:
    uVar1 = 0x4031000000000000;
    break;
  case 0x20:
    uVar1 = 0x402e000000000000;
code_r0x005e2158:
    func_0x0077fb00(uVar1,PTR__OBJC_CLASS___UIFont_00ac3290);
    _objc_retainAutoreleasedReturnValue();
  default:
    goto _objc_autoreleaseReturnValue;
  }
  func_0x00781dc0(uVar1,PTR__OBJC_CLASS___UIFont_00ac3290);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 005e21a8; end: 005e21af; -[SIGStylesBase fontForStyle:scaleForAccessibility:] */

void FUN_005e21a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00783950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(0,param_1,PTR_s_fontForStyle_scaleForAccessibili_00abbb50);
  return;
}



/* Entry: 005e21b0; end: 005e21b7; -[SIGStylesBase fontForStyle:scaleForAccessibility:maximumFontSize:] */

void FUN_005e21b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00783970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_fontForStyle_scaleForAccessibili_00abbb58,param_3,param_4,0);
  return;
}



/* Entry: 005e21b8; end: 005e242b; -[SIGStylesBase fontForStyle:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:] */

void FUN_005e21b8(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined *param_4,
                 ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  if ((param_5 & 1) == 0) {
    func_0x00783920(param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_005e2408;
  }
  puVar1 = PTR_PTR_00ac32c8;
  func_0x007922c0(PTR_PTR_00ac32c8,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  switch(param_4) {
  case (undefined *)0x0:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_3,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a3eac0);
  case (undefined *)0x1:
    uVar2 = 0x4041000000000000;
    break;
  case (undefined *)0x2:
    uVar2 = 0x403c000000000000;
    break;
  case (undefined *)0x3:
    uVar2 = 0x4036000000000000;
    break;
  case (undefined *)0x4:
    uVar2 = 0x4034000000000000;
    break;
  case (undefined *)0x5:
  case (undefined *)0xc:
    uVar2 = 0x4032000000000000;
    break;
  case (undefined *)0x6:
  case (undefined *)0x15:
    uVar2 = 0x402c000000000000;
    goto code_r0x005e23e4;
  case (undefined *)0x7:
  case (undefined *)0xf:
  case (undefined *)0x12:
    uVar2 = 0x402c000000000000;
    break;
  case (undefined *)0x8:
    uVar2 = 0x4033000000000000;
    goto code_r0x005e23bc;
  case (undefined *)0x9:
  case (undefined *)0x1b:
    uVar2 = 0x4030000000000000;
    goto code_r0x005e23bc;
  case (undefined *)0xa:
  case (undefined *)0x1c:
    uVar2 = 0x402a000000000000;
    goto code_r0x005e23bc;
  case (undefined *)0xb:
  case (undefined *)0x10:
  case (undefined *)0x1d:
    uVar2 = 0x4028000000000000;
    goto code_r0x005e23bc;
  case (undefined *)0xd:
  case (undefined *)0x14:
    uVar2 = 0x4030000000000000;
    goto code_r0x005e23e4;
  case (undefined *)0xe:
  case (undefined *)0x16:
    uVar2 = 0x4030000000000000;
    break;
  case (undefined *)0x11:
  case (undefined *)0x18:
    uVar2 = 0x4028000000000000;
    break;
  case (undefined *)0x13:
  case (undefined *)0x22:
    uVar2 = 0x4024000000000000;
    break;
  case (undefined *)0x17:
    uVar2 = 0x4028000000000000;
    goto code_r0x005e23e4;
  case (undefined *)0x19:
  case (undefined *)0x21:
    uVar2 = 0x4024000000000000;
code_r0x005e23e4:
    param_4 = PTR__OBJC_CLASS___UIFont_00ac3290;
    func_0x00789180(uVar2,param_1,PTR__OBJC_CLASS___UIFont_00ac3290,param_3,puVar1,param_6);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_005e2400;
  case (undefined *)0x1a:
    uVar2 = 0x4031000000000000;
    goto code_r0x005e23bc;
  case (undefined *)0x1e:
    uVar2 = 0x4022000000000000;
    goto code_r0x005e23bc;
  case (undefined *)0x1f:
    uVar2 = 0x4031000000000000;
    break;
  case (undefined *)0x20:
    uVar2 = 0x402e000000000000;
code_r0x005e23bc:
    param_4 = PTR__OBJC_CLASS___UIFont_00ac3290;
    func_0x0077fb40(uVar2,param_1,PTR__OBJC_CLASS___UIFont_00ac3290,param_3,puVar1,param_6);
    _objc_retainAutoreleasedReturnValue();
  default:
    goto LAB_005e2400;
  }
  param_4 = PTR__OBJC_CLASS___UIFont_00ac3290;
  func_0x00781de0(uVar2,param_1,PTR__OBJC_CLASS___UIFont_00ac3290,param_3,puVar1,param_6);
  _objc_retainAutoreleasedReturnValue();
LAB_005e2400:
  _objc_release(puVar1);
  param_2 = param_4;
LAB_005e2408:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 005e242c; end: 005e2547; -[SIGStylesBase colorForStyle:] */

void FUN_005e242c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  lVar1 = param_1;
  func_0x0077cfa0();
  lVar3 = 0x10;
  if ((int)lVar1 == 0) {
    lVar3 = 8;
  }
  lVar4 = *(long *)(param_1 + lVar3);
  _objc_retain(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00789f00(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    lVar3 = param_1;
    func_0x0077c3a0(param_1,param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078f4e0(lVar4,param_2,lVar3,puVar2);
    _objc_release(lVar3);
  }
  lVar3 = lVar4;
  func_0x00789f00(lVar4,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar4);
  _os_unfair_lock_unlock(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar3);
  return;
}



/* Entry: 005e2548; end: 005e2617; -[SIGStylesBase _colorForStyle:isCustomTheme:] */

void FUN_005e2548(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  bVar2 = param_3 >> 0x1f == 0;
  uVar1 = 0;
  if (!bVar2) {
    uVar1 = 2;
  }
  if ((param_3 & 0x40000000) != 0) {
    uVar1 = bVar2;
  }
  func_0x0077c9a0(param_1,param_2,param_3 & 0x3fffffff);
  uVar3 = param_1;
  func_0x00780540(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077cbe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_1;
  func_0x005e1490(param_1,param_3 & 0x3fffffff,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  FUN_005e0888(param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar3);
  return;
}



/* Entry: 005e2618; end: 005e261f; -[SIGStylesBase _isCustomTheme] */

undefined8 FUN_005e2618(void)

{
  return 0;
}



/* Entry: 005e2620; end: 005e262b; -[SIGStylesBase _experimentOverrideForColor:isCustomTheme:] */

ulong FUN_005e2620(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar4;
  
  uVar4 = param_3;
  func_0x006074e8();
  iVar1 = (int)uVar4;
  func_0x00607550();
  iVar2 = iVar1;
  func_0x006075b8();
  iVar3 = iVar2;
  func_0x00607620();
  uVar6 = 0x10000;
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  uVar5 = 0x100;
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  uVar6 = uVar4 & 0xffffffff | uVar5 | uVar6;
  if (param_4 == 0) {
    uVar5 = param_3;
    if ((uVar4 & 1) != 0) {
      puVar7 = (ulong *)&UNK_0081abe8;
      do {
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar8 != param_3 && uVar8 != 0);
      uVar5 = 0x2f;
      if (uVar8 == 0) {
        uVar5 = param_3;
      }
    }
    param_3 = uVar5;
    if (((uint)uVar6 >> 8 & 1) != 0) {
      puVar7 = (ulong *)&UNK_0081ac48;
      do {
        uVar8 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar8 != uVar5 && uVar8 != 0);
      param_3 = 0xd1;
      if (uVar8 == 0) {
        param_3 = uVar5;
      }
    }
    uVar5 = 0xd2;
    if (param_3 != 0x50) {
      uVar5 = param_3;
    }
    if ((uVar6 & 0x10000) != 0) {
      param_3 = uVar5;
    }
    uVar6 = 0x30;
    if (param_3 != 0x39) {
      uVar6 = param_3;
    }
    if ((uVar4 & 0x1000000) != 0 || iVar3 != 0) {
      param_3 = uVar6;
    }
  }
  return param_3;
}



/* Entry: 005e262c; end: 005e263b; -[SIGStylesBase _grayRampExperimentOverrideForColor:resolvedColor:isCustomTheme:] */

void FUN_005e262c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  _objc_retain(param_4);
  func_0x00607688();
  func_0x005e1308(param_3,param_4,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_3);
  return;
}



/* Entry: 005e263c; end: 005e2643; -[SIGStylesBase colorForStyle:resolveMode:] */

undefined8 FUN_005e263c(void)

{
  return 0;
}



/* Entry: 005e2644; end: 005e2673; -[SIGStylesBase .cxx_destruct] */

void FUN_005e2644(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 005e2674; end: 005e462b; -[SIGStylesDefault colorForStyle:resolveMode:] */

void FUN_005e2674(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  switch(param_3) {
  case 1:
  case 0x43:
    uVar5 = 0x3faa1a1a20000000;
    goto code_r0x005e2e44;
  case 2:
    uVar5 = 0x3feefeff00000000;
    goto code_r0x005e4028;
  case 3:
    func_0x00780600(0x3fda1a1a20000000,0x3fda1a1a20000000,0x3fda1a1a20000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe39393a0000000;
    goto code_r0x005e45cc;
  case 4:
  case 0x47:
    func_0x00780600(0x3fe39393a0000000,0x3fe39393a0000000,0x3fe39393a0000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fda1a1a20000000;
    goto code_r0x005e45cc;
  case 5:
  case 0x11:
  case 0x14:
    uVar6 = 0x3fedbdbdc0000000;
    uVar4 = 0x3fc19191a0000000;
    goto code_r0x005e3c10;
  case 6:
    uVar5 = 0x3fe8181820000000;
    uVar4 = 0x3f90101020000000;
    goto code_r0x005e3e60;
  case 7:
  case 0x3e:
  case 0x53:
  case 0x55:
  case 0x58:
  case 0x69:
  case 0xba:
  case 0xbc:
  case 0xc4:
  case 0xd5:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    goto code_r0x005e26dc;
  case 8:
    uVar7 = 0x3fe70a3d70a3d70a;
    goto code_r0x005e42e8;
  case 9:
  case 0x1a:
    uVar6 = 0x3faa1a1a20000000;
    uVar7 = 0x3fd3333333333333;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x005e41a8;
  case 10:
    uVar6 = 0x3faa1a1a20000000;
    uVar7 = 0x3fc999999999999a;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x005e41a8;
  case 0xb:
    uVar7 = 0x3fd3333333333333;
    goto code_r0x005e42e8;
  case 0xc:
    uVar5 = 0x3ff0000000000000;
code_r0x005e4028:
    func_0x00780600(uVar5,uVar5,uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3faa1a1a20000000;
    goto code_r0x005e45cc;
  case 0xd:
  case 0x2e:
  case 0x33:
  case 0x34:
  case 0x62:
  case 0xa1:
  case 0xef:
    uVar5 = 0x3fef9f9fa0000000;
    goto code_r0x005e26f4;
  case 0xe:
    uVar5 = 0x3fba1a1a20000000;
    goto code_r0x005e2e44;
  case 0xf:
  case 0x16:
    func_0x00780600(0x3fee1e1e20000000,0x3fee1e1e20000000,0x3fee1e1e20000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc39393a0000000;
    goto code_r0x005e45cc;
  case 0x10:
  case 0x15:
  case 0x17:
  case 0x1b:
    func_0x00780600(0x3feefeff00000000,0x3feefeff00000000,0x3feefeff00000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fba1a1a20000000;
    goto code_r0x005e45cc;
  case 0x12:
    func_0x00780600(0x3fee1e1e20000000,0x3fee1e1e20000000,0x3fee1e1e20000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fca1a1a20000000;
    goto code_r0x005e45cc;
  case 0x13:
    uVar5 = 0x3fc39393a0000000;
code_r0x005e2e44:
    func_0x00780600(uVar5,uVar5,uVar5,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3feefeff00000000;
    goto code_r0x005e45cc;
  case 0x18:
    uVar6 = 0x3fba1a1a20000000;
    goto code_r0x005e31fc;
  case 0x19:
    uVar6 = 0x3faa1a1a20000000;
    uVar7 = 0x3fe70a3d70a3d70a;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x005e41a8;
  case 0x1c:
    func_0x00780600(0x3fed3d3d40000000,0x3fed3d3d40000000,0x3fed3d3d40000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc09090a0000000;
    goto code_r0x005e45cc;
  case 0x1d:
    func_0x00780600(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc49494a0000000;
    goto code_r0x005e45cc;
  case 0x1e:
    func_0x00780600(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd0d0d0e0000000;
    uVar5 = 0x3fd29292a0000000;
    uVar6 = 0x3fd5151520000000;
    goto code_r0x005e4548;
  case 0x1f:
    uVar6 = 0x3fed5d5d60000000;
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3fedfdfe00000000;
    uVar7 = 0x3ff0000000000000;
    goto code_r0x005e44cc;
  case 0x20:
    func_0x00780600(0,0,0,0x3fb999999999999a,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fc999999999999a;
    goto code_r0x005e44e8;
  case 0x21:
  case 0x2d:
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x005e4334;
  case 0x22:
    uVar5 = 0x3fef3f3f40000000;
    uVar4 = 0x3fef5f5f60000000;
    goto code_r0x005e2ce4;
  case 0x23:
    func_0x00780600(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc0101020000000;
    uVar5 = 0x3fc09090a0000000;
    uVar6 = 0x3fc1111120000000;
    goto code_r0x005e4548;
  case 0x24:
    func_0x00780600(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe8000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0x3fe8000000000000;
    goto code_r0x005e45d8;
  case 0x25:
    uVar7 = 0x3fd999999999999a;
    goto code_r0x005e2d6c;
  case 0x26:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
    goto code_r0x005e4518;
  case 0x27:
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3feddddde0000000;
    uVar6 = 0x3fedfdfe00000000;
    goto code_r0x005e34a0;
  case 0x28:
    uVar5 = 0x3feefeff00000000;
    uVar4 = 0x3fef1f1f20000000;
    uVar6 = 0x3fef3f3f40000000;
code_r0x005e4334:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fb2121220000000;
    goto code_r0x005e45cc;
  case 0x29:
  case 0x2a:
  case 0xbd:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x005e2b0c;
  case 0x2b:
    uVar7 = 0x3feb333333333333;
    func_0x00780600(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3feb333333333333,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fbe1e1e20000000;
    uVar5 = uVar4;
    uVar6 = uVar4;
    goto code_r0x005e45d8;
  case 0x2c:
  case 0x5e:
    uVar7 = 0x3fa999999999999a;
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x005e44cc;
  case 0x2f:
  case 0x3f:
  case 0xb9:
  case 0x117:
    uVar6 = 0x3fefbfbfc0000000;
    uVar5 = 0x3fc3131320000000;
    uVar4 = 0x3fd19191a0000000;
    break;
  case 0x30:
  case 0x40:
  case 0xdc:
  case 0xdd:
  case 0x119:
    uVar6 = 0x3fe69696a0000000;
    uVar5 = 0x3fc4141420000000;
    uVar4 = 0x3fef7f7f80000000;
    break;
  case 0x31:
  case 0x35:
  case 0x3a:
  case 0x41:
  case 0x6a:
  case 0x88:
  case 0xc1:
  case 0xc3:
  case 0xcf:
  case 0xee:
  case 0xf1:
  case 0x118:
  case 0x11a:
    uVar6 = 0x3fae1e1e20000000;
    uVar5 = 0x3fe5b5b5c0000000;
    goto code_r0x005e26dc;
  case 0x32:
  case 0x71:
    uVar6 = 0x3fc7171720000000;
    uVar5 = 0x3fe99999a0000000;
    uVar4 = 0x3fd39393a0000000;
    break;
  case 0x36:
  case 0x3b:
  case 0x9f:
  case 0xec:
    uVar6 = 0x3fcc9c9ca0000000;
    uVar5 = 0x3fe9595960000000;
    uVar4 = 0x3fe1d1d1e0000000;
    break;
  case 0x37:
  case 0x38:
  case 0x90:
  case 0xa9:
  case 0xc2:
  case 0xd0:
    uVar6 = 0x3fee5e5e60000000;
    uVar5 = 0x3fce1e1e20000000;
    goto code_r0x005e2714;
  case 0x39:
  case 0x3c:
  case 0x75:
  case 0x8c:
    uVar6 = 0x3fe4141420000000;
    uVar5 = 0x3fd7575760000000;
    uVar4 = 0x3fe9b9b9c0000000;
    break;
  case 0x3d:
  case 0x51:
  case 0x54:
  case 0x57:
  case 0xc5:
  case 0xd4:
    uVar6 = 0;
    uVar5 = 0;
    goto code_r0x005e2730;
  case 0x42:
    uVar6 = 0x3fe1b1b1c0000000;
    goto code_r0x005e31fc;
  case 0x44:
    func_0x00780600(0x3fd6d6d6e0000000,0x3fd6d6d6e0000000,0x3fd6d6d6e0000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe1b1b1c0000000;
    goto code_r0x005e45cc;
  case 0x45:
  case 0x46:
    uVar6 = 0x3faa1a1a20000000;
code_r0x005e31fc:
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x005e41a8;
  case 0x48:
  case 99:
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    goto code_r0x005e3bd0;
  case 0x49:
    uVar5 = 0x3fd9191920000000;
    uVar4 = 0x3fd9595960000000;
    uVar6 = 0x3fd9d9d9e0000000;
    goto code_r0x005e4154;
  case 0x4a:
  case 0x4b:
    uVar5 = 0x3fe3535360000000;
    uVar4 = 0x3fe3737380000000;
    uVar6 = 0x3fe3b3b3c0000000;
    goto code_r0x005e35a8;
  case 0x4c:
    func_0x00780600(0x3fe8585860000000,0x3fc2121220000000,0x3fcf1f1f20000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fedbdbdc0000000;
    uVar5 = 0x3fd2525260000000;
    uVar6 = 0x3fd9191920000000;
    goto code_r0x005e4548;
  case 0x4d:
    func_0x00780600(0x3fae1e1e20000000,0x3fe5b5b5c0000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fa0101020000000;
    uVar5 = 0x3fe29292a0000000;
    uVar6 = 0x3fef5f5f60000000;
    goto code_r0x005e4548;
  case 0x4e:
  case 0x74:
  case 0x77:
  case 0xda:
  case 0xf3:
    uVar5 = 0x3fae1e1e20000000;
    uVar4 = 0x3fe5b5b5c0000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x005e2778;
  case 0x4f:
  case 0xa3:
    uVar6 = 0x3f70101020000000;
    uVar5 = 0x3fe1111120000000;
    uVar4 = 0x3fd4141420000000;
    break;
  case 0x50:
    uVar6 = 0x3fea1a1a20000000;
    uVar5 = 0x3fce1e1e20000000;
    uVar4 = 0x3f70101020000000;
    break;
  case 0x52:
  case 0xe8:
  case 0xed:
  case 0x114:
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x005e27b4;
  case 0x56:
    uVar7 = 0x3fe428f5c28f5c29;
    goto code_r0x005e42e8;
  case 0x59:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x005e430c;
  case 0x5a:
    uVar7 = 0x3fe3d70a3d70a3d7;
    goto code_r0x005e42e8;
  case 0x5b:
    uVar6 = 0x3fedbdbdc0000000;
    uVar5 = 0x3fd2525260000000;
    uVar4 = 0x3fd9191920000000;
    break;
  case 0x5c:
    uVar5 = 0x3fed3d3d40000000;
    uVar4 = 0x3fed5d5d60000000;
    uVar6 = 0x3fed7d7d80000000;
    uVar7 = 0x3ff0000000000000;
    goto code_r0x005e4258;
  case 0x5d:
    uVar6 = 0x3fee5e5e60000000;
    uVar5 = uVar6;
    uVar4 = uVar6;
    goto code_r0x005e2b0c;
  case 0x5f:
    uVar7 = 0x3faeb851eb851eb8;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
code_r0x005e4258:
    func_0x00780600(uVar5,uVar4,uVar6,uVar7,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fc3333333333333;
    goto code_r0x005e44e8;
  case 0x60:
    func_0x00780600(0x3fb6161620000000,0x3fb9191920000000,0x3fbc1c1c20000000,0x3fa47ae147ae147b,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar6 = 0;
    goto code_r0x005e45d8;
  case 0x61:
    func_0x00780600(0,0,0,0,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3f9eb851eb851eb8;
    goto code_r0x005e44e8;
  case 100:
  case 0xe5:
  case 0xf2:
    uVar6 = 0x3feb9b9ba0000000;
    uVar5 = 0x3fc7171720000000;
    uVar4 = 0x3fd2d2d2e0000000;
    break;
  case 0x65:
    uVar5 = 0x3fe6161620000000;
    uVar4 = 0x3fe6363640000000;
    uVar6 = 0x3fe6565660000000;
    goto code_r0x005e4518;
  case 0x66:
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3feddddde0000000;
    uVar6 = 0x3fedfdfe00000000;
    goto code_r0x005e3c64;
  case 0x67:
  case 0xa7:
    uVar6 = 0;
    uVar7 = 0x3fd0000000000000;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x005e41a8;
  case 0x68:
    uVar7 = 0x3fc0a3d70a3d70a4;
code_r0x005e42e8:
    uVar6 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x005e41a8;
  case 0x6b:
    func_0x00780600(0x3fed9d9da0000000,0x3fedfdfe00000000,0x3fee3e3e40000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc59595a0000000;
    goto code_r0x005e45cc;
  case 0x6c:
  case 0x7d:
    uVar6 = 0x3fd39393a0000000;
    uVar5 = 0x3fd59595a0000000;
    uVar4 = 0x3fd7d7d7e0000000;
    break;
  case 0x6d:
    uVar5 = 0x3fd39393a0000000;
    uVar4 = 0x3fd59595a0000000;
    uVar6 = 0x3fd7d7d7e0000000;
    goto code_r0x005e3bd0;
  case 0x6e:
  case 0x6f:
    uVar6 = 0x3fe7373740000000;
    uVar5 = 0x3fe8181820000000;
    uVar4 = 0x3fe8f8f900000000;
    goto code_r0x005e2b0c;
  case 0x70:
  case 0x8f:
    uVar6 = 0x3fec3c3c40000000;
    uVar5 = 0x3fb4141420000000;
    uVar4 = 0x3fce9e9ea0000000;
    break;
  case 0x72:
    func_0x00780600(0x3febfbfc00000000,0x3fec7c7c80000000,0x3fecfcfd00000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd4545460000000;
    goto code_r0x005e45cc;
  case 0x73:
    func_0x00780600(0x3fd2525260000000,0x3fe8585860000000,0x3fe1f1f200000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd49494a0000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = 0x3fe8585860000000;
    uVar6 = 0x3fe2727280000000;
    goto code_r0x005e45d8;
  case 0x76:
    uVar5 = 0x3fc7171720000000;
    uVar4 = 0x3fe5b5b5c0000000;
    uVar6 = 0x3fde1e1e20000000;
    goto code_r0x005e2778;
  case 0x78:
    func_0x00780600(0x3fedfdfe00000000,0x3fd4141420000000,0x3f70101020000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3fe2d2d2e0000000;
    uVar6 = 0x3fd8585860000000;
    uVar4 = 0x3ff0000000000000;
    goto code_r0x005e4548;
  case 0x79:
    func_0x00780600(0x3feababac0000000,0x3fd7575760000000,0x3fe3b3b3c0000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fecbcbcc0000000;
    uVar5 = 0x3fe3535360000000;
    uVar6 = 0x3fe8585860000000;
    goto code_r0x005e4548;
  case 0x7a:
    uVar6 = 0x3fb6161620000000;
    uVar5 = 0x3fb9191920000000;
    uVar4 = 0x3fbc1c1c20000000;
    break;
  case 0x7b:
    uVar6 = 0x3fc6161620000000;
    uVar5 = 0x3fc89898a0000000;
    goto code_r0x005e3d80;
  case 0x7c:
    uVar6 = 0x3fd0d0d0e0000000;
    uVar5 = 0x3fd29292a0000000;
    uVar4 = 0x3fd5151520000000;
    break;
  case 0x7e:
    uVar6 = 0x3fd9595960000000;
    uVar5 = 0x3fdb5b5b60000000;
    uVar4 = 0x3fde1e1e20000000;
    break;
  case 0x7f:
    uVar6 = 0x3fe3535360000000;
    uVar5 = 0x3fe3f3f400000000;
    uVar4 = 0x3fe4f4f500000000;
    break;
  case 0x80:
    uVar6 = 0x3fe5d5d5e0000000;
    uVar5 = 0x3fe6d6d6e0000000;
    uVar4 = 0x3fe7b7b7c0000000;
    break;
  case 0x81:
  case 0x11b:
    uVar6 = 0x3fe7373740000000;
    uVar5 = 0x3fe8181820000000;
    uVar4 = 0x3fe8f8f900000000;
    break;
  case 0x82:
    uVar6 = 0x3fe9d9d9e0000000;
    uVar5 = 0x3fea9a9aa0000000;
    uVar4 = 0x3feb5b5b60000000;
    break;
  case 0x83:
    uVar6 = 0x3febfbfc00000000;
    uVar5 = 0x3fec7c7c80000000;
    uVar4 = 0x3fecfcfd00000000;
    break;
  case 0x84:
    uVar6 = 0x3fed5d5d60000000;
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3fedfdfe00000000;
    break;
  case 0x85:
  case 0xac:
    uVar6 = 0x3feefeff00000000;
    uVar5 = 0x3fef1f1f20000000;
    uVar4 = 0x3fef3f3f40000000;
    break;
  case 0x86:
    uVar5 = 0x3fe2d2d2e0000000;
    uVar4 = 0x3fecbcbcc0000000;
    goto code_r0x005e3e60;
  case 0x87:
    uVar6 = 0x3f90101020000000;
    uVar5 = 0x3fe3d3d3e0000000;
    uVar4 = 0x3feddddde0000000;
    break;
  case 0x89:
    uVar6 = 0x3fd8585860000000;
    uVar5 = 0x3fe9393940000000;
code_r0x005e26dc:
    uVar4 = 0x3ff0000000000000;
    break;
  case 0x8a:
    uVar6 = 0x3fe1313140000000;
    uVar5 = 0x3fcb1b1b20000000;
    goto code_r0x005e4060;
  case 0x8b:
    uVar6 = 0x3fe2121220000000;
    uVar5 = 0x3fd0d0d0e0000000;
    uVar4 = 0x3fe7d7d7e0000000;
    break;
  case 0x8d:
    uVar6 = 0x3fe8383840000000;
    uVar5 = 0x3fe2b2b2c0000000;
    uVar4 = 0x3febdbdbe0000000;
    break;
  case 0x8e:
    uVar6 = 0x3feb1b1b20000000;
    uVar4 = 0x3fc8181820000000;
code_r0x005e3c10:
    uVar5 = 0;
    break;
  case 0x91:
    uVar6 = 0x3feefeff00000000;
    uVar5 = 0x3fdfdfdfe0000000;
    uVar4 = 0x3fe2323240000000;
    break;
  case 0x92:
    uVar5 = 0x3fe4343440000000;
    uVar4 = 0x3fde5e5e60000000;
    goto code_r0x005e3e60;
  case 0x93:
    uVar5 = 0x3fe5151520000000;
    uVar4 = 0x3fe0303040000000;
code_r0x005e3e60:
    uVar6 = 0;
    break;
  case 0x94:
    uVar6 = 0x3f80101020000000;
    uVar5 = 0x3fe6f6f700000000;
    goto code_r0x005e36f8;
  case 0x95:
    uVar6 = 0x3fd6565660000000;
    uVar5 = 0x3fea1a1a20000000;
code_r0x005e4060:
    uVar4 = 0x3fe6d6d6e0000000;
    break;
  case 0x96:
    uVar6 = 0x3fecbcbcc0000000;
    uVar5 = 0x3fdc9c9ca0000000;
    goto code_r0x005e2730;
  case 0x97:
    uVar6 = 0x3feddddde0000000;
    uVar5 = 0x3fde9e9ea0000000;
    goto code_r0x005e2730;
  case 0x98:
    uVar5 = 0x3fe1515160000000;
    goto code_r0x005e26f4;
  case 0x99:
    uVar5 = 0x3fe6565660000000;
    uVar4 = 0x3fd5d5d5e0000000;
    goto code_r0x005e41a0;
  case 0x9a:
    uVar6 = 0x3fecbcbcc0000000;
    uVar5 = 0x3fe8383840000000;
    goto code_r0x005e2730;
  case 0x9b:
    uVar6 = 0x3feddddde0000000;
    uVar5 = 0x3fe9191920000000;
    uVar4 = 0x3fb3131320000000;
    break;
  case 0x9c:
    uVar5 = 0x3feb1b1b20000000;
    uVar4 = 0x3fcc1c1c20000000;
    goto code_r0x005e41a0;
  case 0x9d:
    uVar5 = 0x3fecdcdce0000000;
    uVar4 = 0x3fdf1f1f20000000;
    goto code_r0x005e41a0;
  case 0x9e:
  case 0xd1:
    uVar6 = 0x3fc49494a0000000;
    uVar5 = 0x3fe7b7b7c0000000;
    uVar4 = 0x3fd2525260000000;
    break;
  case 0xa0:
    uVar5 = 0x3fec7c7c80000000;
code_r0x005e26f4:
    uVar6 = 0x3ff0000000000000;
    goto code_r0x005e2730;
  case 0xa2:
    uVar6 = 0x3fe7575760000000;
    uVar5 = 0x3fedbdbdc0000000;
    uVar4 = 0x3feb1b1b20000000;
    break;
  case 0xa4:
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
code_r0x005e430c:
    uVar7 = 0x3fe8000000000000;
    goto code_r0x005e41a8;
  case 0xa5:
    uVar6 = 0x3fb6161620000000;
    uVar7 = 0x3fe3333333333333;
    uVar5 = 0x3fb9191920000000;
    uVar4 = 0x3fbc1c1c20000000;
    goto code_r0x005e41a8;
  case 0xa6:
    uVar6 = 0;
    uVar7 = 0x3fe0000000000000;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x005e41a8;
  case 0xa8:
    uVar5 = 0x3fed5d5d60000000;
    uVar4 = 0x3fedbdbdc0000000;
    uVar6 = 0x3fedfdfe00000000;
    goto code_r0x005e3f70;
  case 0xaa:
    uVar5 = 0x3fd39393a0000000;
    uVar4 = 0x3fd59595a0000000;
    uVar6 = 0x3fd7d7d7e0000000;
code_r0x005e27b4:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
    uVar5 = 0;
    goto code_r0x005e27d4;
  case 0xab:
  case 0xb1:
    uVar6 = 0x3fee3e3e40000000;
    uVar5 = 0x3fee5e5e60000000;
    uVar4 = 0x3fee9e9ea0000000;
code_r0x005e2b0c:
    func_0x00780600(uVar6,uVar5,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fbe1e1e20000000;
    goto code_r0x005e45cc;
  case 0xad:
  case 0xb0:
  case 200:
    uVar6 = 0x3feddddde0000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar6;
    uVar4 = uVar6;
code_r0x005e44cc:
    func_0x00780600(uVar6,uVar5,uVar4,uVar7,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fb999999999999a;
    goto code_r0x005e44e8;
  case 0xae:
    func_0x00780600(0x3fe7373740000000,0x3fe8181820000000,0x3fe8f8f900000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc1111120000000;
    goto code_r0x005e45cc;
  case 0xaf:
  case 0xcd:
    uVar5 = 0x3fd39393a0000000;
    uVar4 = 0x3fd59595a0000000;
    uVar6 = 0x3fd7d7d7e0000000;
    goto code_r0x005e3b0c;
  case 0xb2:
    uVar6 = 0x3fe89898a0000000;
    uVar5 = 0x3fe0303040000000;
code_r0x005e2730:
    uVar4 = 0;
    break;
  case 0xb3:
    uVar5 = 0x3fefbfbfc0000000;
    uVar4 = 0x3fe5555560000000;
    goto code_r0x005e41a0;
  case 0xb4:
    uVar5 = 0x3fefbfbfc0000000;
    uVar4 = 0x3feafafb00000000;
    goto code_r0x005e41a0;
  case 0xb5:
    uVar5 = 0x3fed3d3d40000000;
    uVar4 = 0x3fe3333340000000;
    goto code_r0x005e41a0;
  case 0xb6:
    uVar6 = 0x3fe89898a0000000;
    uVar5 = 0x3fdb1b1b20000000;
    uVar4 = 0x3f90101020000000;
    break;
  case 0xb7:
    uVar6 = 0x3fe9797980000000;
    uVar5 = 0x3fe0101020000000;
    uVar4 = 0x3fce1e1e20000000;
    break;
  case 0xb8:
    uVar6 = 0x3fee3e3e40000000;
    uVar5 = 0x3fe9797980000000;
    uVar4 = 0x3fdd5d5d60000000;
    break;
  case 0xbb:
    uVar5 = 0x3fc6161620000000;
    uVar4 = 0x3fc89898a0000000;
    uVar6 = 0x3fcb9b9ba0000000;
    goto code_r0x005e3bd0;
  case 0xbe:
    func_0x00780600(0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = 0x3fd3333333333333;
code_r0x005e44e8:
    uVar4 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
    uVar6 = 0x3ff0000000000000;
    goto code_r0x005e45d8;
  case 0xbf:
    uVar5 = 0x3fd9595960000000;
    uVar4 = 0x3fdb5b5b60000000;
    uVar6 = 0x3fde1e1e20000000;
code_r0x005e3b0c:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe3333340000000;
    goto code_r0x005e45cc;
  case 0xc0:
    uVar5 = 0x3fe3535360000000;
    uVar4 = 0x3fe3f3f400000000;
    uVar6 = 0x3fe4f4f500000000;
    goto code_r0x005e3f70;
  case 0xc6:
    uVar5 = 0x3fb6161620000000;
    uVar4 = 0x3fb9191920000000;
    uVar6 = 0x3fbc1c1c20000000;
    goto code_r0x005e3e88;
  case 199:
  case 0xca:
  case 0xcb:
    uVar7 = 0x3fb999999999999a;
code_r0x005e2d6c:
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x005e41a8;
  case 0xc9:
  case 0xcc:
    uVar5 = 0x3fc6161620000000;
    uVar4 = 0x3fc89898a0000000;
    uVar6 = 0x3fcb9b9ba0000000;
code_r0x005e3e88:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3febdbdbe0000000;
    goto code_r0x005e45cc;
  case 0xce:
    uVar5 = 0x3fe7373740000000;
    uVar4 = 0x3fe8181820000000;
    uVar6 = 0x3fe8f8f900000000;
code_r0x005e3f70:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd8585860000000;
code_r0x005e45cc:
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar4;
    uVar6 = uVar4;
code_r0x005e45d8:
    puVar2 = PTR__OBJC_CLASS___UIColor_00ac2de0;
    func_0x00780600(uVar4,uVar5,uVar6,uVar7,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    FUN_005e0c90(puVar1,puVar2,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    goto LAB_005e4614;
  case 0xd2:
    uVar6 = 0x3fee9e9ea0000000;
    uVar5 = 0x3fd8d8d8e0000000;
    uVar4 = 0x3fc3131320000000;
    break;
  case 0xd3:
    uVar5 = 0x3fe7373740000000;
    uVar4 = 0x3fe8181820000000;
    uVar6 = 0x3fe8f8f900000000;
code_r0x005e3bd0:
    uVar7 = 0x3ff0000000000000;
code_r0x005e3bd4:
    func_0x00780600(uVar5,uVar4,uVar6,uVar7,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3ff0000000000000;
    uVar5 = 0x3ff0000000000000;
code_r0x005e3bf0:
    uVar6 = 0x3ff0000000000000;
    goto code_r0x005e4548;
  case 0xd6:
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    uVar4 = 0;
    goto code_r0x005e41a8;
  case 0xd7:
    func_0x00780600(0x3fe7373740000000,0x3fe8181820000000,0x3fe8f8f900000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fdd1d1d20000000;
    uVar5 = 0x3fdd9d9da0000000;
    uVar6 = 0x3fdddddde0000000;
    goto code_r0x005e4548;
  case 0xd8:
    uVar5 = 0x3fea5a5a60000000;
    uVar4 = 0x3f70101020000000;
    goto code_r0x005e41a0;
  case 0xd9:
    uVar5 = 0x3fe4141420000000;
    uVar4 = 0x3fd7575760000000;
    uVar6 = 0x3fe9b9b9c0000000;
    goto code_r0x005e2778;
  case 0xdb:
    uVar6 = 0x3fcb1b1b20000000;
    uVar5 = 0x3fcb9b9ba0000000;
    goto code_r0x005e3b80;
  case 0xde:
  case 0xe9:
    func_0x00780600(0x3fae1e1e20000000,0x3fe5b5b5c0000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe3333340000000;
    uVar5 = 0x3febbbbbc0000000;
    goto code_r0x005e3bf0;
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe7:
    uVar5 = 0x3ff0000000000000;
    uVar4 = 0x3ff0000000000000;
code_r0x005e2ce4:
    func_0x00780600(uVar5,uVar5,uVar4,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fb3131320000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = 0x3fb4141420000000;
    uVar6 = 0x3fb4141420000000;
    goto code_r0x005e45d8;
  case 0xe2:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
code_r0x005e35a8:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd9191920000000;
    uVar5 = 0x3fd9595960000000;
    uVar6 = 0x3fd9d9d9e0000000;
    goto code_r0x005e4548;
  case 0xe3:
    uVar5 = 0x3fe3535360000000;
    uVar4 = 0x3fe3737380000000;
    uVar6 = 0x3fe3b3b3c0000000;
code_r0x005e4154:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fe6161620000000;
    uVar5 = 0x3fe6363640000000;
    uVar6 = 0x3fe6565660000000;
    goto code_r0x005e4548;
  case 0xe4:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
code_r0x005e34a0:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fc5151520000000;
    uVar7 = 0x3ff0000000000000;
    uVar5 = uVar4;
    uVar6 = 0x3fc59595a0000000;
    goto code_r0x005e45d8;
  case 0xe6:
    uVar5 = 0x3fe8787880000000;
    uVar4 = 0x3fe8b8b8c0000000;
    uVar6 = 0x3fe8f8f900000000;
code_r0x005e4518:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd1111120000000;
    uVar5 = 0x3fd1515160000000;
    uVar6 = 0x3fd19191a0000000;
    goto code_r0x005e4548;
  case 0xea:
    func_0x00780600(0x3fe3535360000000,0x3fe3737380000000,0x3fe3b3b3c0000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fd5151520000000;
    uVar5 = 0x3fd5555560000000;
    uVar6 = 0x3fd5d5d5e0000000;
    goto code_r0x005e4548;
  case 0xeb:
    uVar5 = 0x3fec3c3c40000000;
    uVar4 = 0x3fec7c7c80000000;
    uVar6 = 0x3fecbcbcc0000000;
code_r0x005e3c64:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3fcb1b1b20000000;
    uVar5 = 0x3fcb9b9ba0000000;
    uVar6 = 0x3fcc1c1c20000000;
    goto code_r0x005e4548;
  case 0xf0:
    uVar6 = 0x3fd5151520000000;
    uVar5 = 0x3fd5555560000000;
code_r0x005e2714:
    uVar4 = 0x3fd5d5d5e0000000;
    break;
  case 0xf4:
    uVar6 = 0x3fc99999a0000000;
    uVar5 = 0x3fdadadae0000000;
    uVar4 = 0x3fc09090a0000000;
    break;
  case 0xf5:
    uVar6 = 0x3fd5151520000000;
    uVar5 = 0x3fe39393a0000000;
    uVar4 = 0x3fcf1f1f20000000;
    break;
  case 0xf6:
    uVar6 = 0x3fdb1b1b20000000;
    uVar5 = 0x3fe8d8d8e0000000;
    uVar4 = 0x3fd4545460000000;
    break;
  case 0xf7:
    uVar6 = 0x3fe6767680000000;
    uVar5 = 0x3feb7b7b80000000;
    uVar4 = 0x3fd29292a0000000;
    break;
  case 0xf8:
    uVar6 = 0x3fe7d7d7e0000000;
    uVar5 = 0x3fd4545460000000;
    uVar4 = 0x3fc1111120000000;
    break;
  case 0xf9:
    uVar6 = 0x3fec9c9ca0000000;
    uVar5 = 0x3fd9191920000000;
    goto code_r0x005e3a94;
  case 0xfa:
    uVar6 = 0x3fef9f9fa0000000;
    uVar5 = 0x3fe0b0b0c0000000;
    uVar4 = 0x3fd3d3d3e0000000;
    break;
  case 0xfb:
    uVar6 = 0x3fee9e9ea0000000;
    uVar5 = 0x3fe6f6f700000000;
    uVar4 = 0x3fdb5b5b60000000;
    break;
  case 0xfc:
    uVar6 = 0x3fe4747480000000;
    uVar5 = 0x3fc0101020000000;
    uVar4 = 0x3fb8181820000000;
    break;
  case 0xfd:
    uVar6 = 0x3fe8d8d8e0000000;
    uVar5 = 0x3fc49494a0000000;
code_r0x005e3d80:
    uVar4 = 0x3fcb9b9ba0000000;
    break;
  case 0xfe:
    uVar6 = 0x3febfbfc00000000;
    uVar5 = 0x3fd3131320000000;
    goto code_r0x005e39cc;
  case 0xff:
    uVar5 = 0x3fd9d9d9e0000000;
    uVar4 = 0x3fdddddde0000000;
    goto code_r0x005e41a0;
  case 0x100:
    uVar6 = 0x3fc5151520000000;
    uVar5 = 0x3fcf1f1f20000000;
code_r0x005e36f8:
    uVar4 = 0x3fe2121220000000;
    break;
  case 0x101:
    uVar6 = 0x3fc59595a0000000;
    uVar5 = 0x3fd3535360000000;
    uVar4 = 0x3feadadae0000000;
    break;
  case 0x102:
    uVar6 = 0x3fd4545460000000;
    uVar5 = 0x3fdc9c9ca0000000;
    uVar4 = 0x3fee7e7e80000000;
    break;
  case 0x103:
    uVar6 = 0x3fd3d3d3e0000000;
    uVar5 = 0x3fe5555560000000;
    uVar4 = 0x3fef1f1f20000000;
    break;
  case 0x104:
    uVar6 = 0x3fd7171720000000;
    uVar5 = 0x3fc5151520000000;
    uVar4 = 0x3fe0101020000000;
    break;
  case 0x105:
    uVar6 = 0x3fdfdfdfe0000000;
    uVar5 = 0x3fcd9d9da0000000;
    uVar4 = 0x3fe6161620000000;
    break;
  case 0x106:
    uVar6 = 0x3fe5f5f600000000;
    uVar5 = 0x3fd7171720000000;
    uVar4 = 0x3fed7d7d80000000;
    break;
  case 0x107:
    uVar6 = 0x3fe9191920000000;
    uVar5 = 0x3fe2121220000000;
    uVar4 = 0x3fee3e3e40000000;
    break;
  case 0x108:
    uVar6 = 0x3fe1d1d1e0000000;
    uVar5 = 0x3fbd1d1d20000000;
    uVar4 = 0x3fd6565660000000;
    break;
  case 0x109:
    uVar6 = 0x3fe5f5f600000000;
    uVar5 = 0x3fc2121220000000;
    uVar4 = 0x3fdb9b9ba0000000;
    break;
  case 0x10a:
    uVar6 = 0x3fea5a5a60000000;
    uVar5 = 0x3fcb1b1b20000000;
    uVar4 = 0x3fe1313140000000;
    break;
  case 0x10b:
    uVar6 = 0x3fef5f5f60000000;
    uVar5 = 0x3fdb9b9ba0000000;
    uVar4 = 0x3fe7171720000000;
    break;
  case 0x10c:
    uVar6 = 0x3fc49494a0000000;
    uVar5 = 0x3fdb1b1b20000000;
code_r0x005e39cc:
    uVar4 = 0x3fd6d6d6e0000000;
    break;
  case 0x10d:
    uVar6 = 0x3fcb1b1b20000000;
    uVar5 = 0x3fe1b1b1c0000000;
    uVar4 = 0x3fdddddde0000000;
    break;
  case 0x10e:
    uVar6 = 0x3fc6161620000000;
    uVar5 = 0x3fe6f6f700000000;
    uVar4 = 0x3fe29292a0000000;
    break;
  case 0x10f:
    uVar6 = 0x3fe0b0b0c0000000;
    uVar5 = 0x3fe99999a0000000;
    uVar4 = 0x3fe7575760000000;
    break;
  case 0x110:
    uVar6 = 0x3fdb1b1b20000000;
    uVar5 = 0x3fd0505060000000;
code_r0x005e3a94:
    uVar4 = 0x3fc49494a0000000;
    break;
  case 0x111:
    uVar6 = 0x3fe3131320000000;
    uVar5 = 0x3fd6d6d6e0000000;
code_r0x005e3b80:
    uVar4 = 0x3fcc1c1c20000000;
    break;
  case 0x112:
    uVar6 = 0x3fe9f9fa00000000;
    uVar5 = 0x3fdededee0000000;
    uVar4 = 0x3fd3131320000000;
    break;
  case 0x113:
    uVar5 = 0x3fe5b5b5c0000000;
    uVar4 = 0x3fe0101020000000;
code_r0x005e41a0:
    uVar6 = 0x3ff0000000000000;
    break;
  case 0x115:
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0x3fe8000000000000;
    goto code_r0x005e3bd4;
  case 0x116:
    uVar6 = 0x3fd9191920000000;
    uVar5 = 0x3fd9595960000000;
    uVar4 = 0x3fd9d9d9e0000000;
    break;
  case 0x11c:
    func_0x00780600(0x3feafafb00000000,0x3fee5e5e60000000,0x3ff0000000000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3f70101020000000;
    uVar5 = 0x3fcb1b1b20000000;
    uVar6 = 0x3fda9a9aa0000000;
    goto code_r0x005e4548;
  case 0x11d:
    func_0x00780600(0x3f70101020000000,0x3fcb1b1b20000000,0x3fda9a9aa0000000,0x3ff0000000000000,
                    PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x3feafafb00000000;
    uVar5 = 0x3fee5e5e60000000;
    goto code_r0x005e3bf0;
  case 0x11e:
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
code_r0x005e2778:
    func_0x00780600(uVar5,uVar4,uVar6,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 0x3fef9f9fa0000000;
    uVar4 = 0x3ff0000000000000;
code_r0x005e27d4:
    uVar6 = 0;
code_r0x005e4548:
    uVar7 = 0x3ff0000000000000;
    goto code_r0x005e45d8;
  default:
    puVar3 = (undefined *)0x0;
    goto LAB_005e4614;
  }
  uVar7 = 0x3ff0000000000000;
code_r0x005e41a8:
  puVar3 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  func_0x00780600(uVar6,uVar5,uVar4,uVar7,PTR__OBJC_CLASS___UIColor_00ac2de0);
  _objc_retainAutoreleasedReturnValue();
LAB_005e4614:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
  return;
}



/* Entry: 005e462c; end: 005e47d3; -[SIGStylesThemed colorForStyle:resolveMode:] */

void FUN_005e462c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x3;
  
  if (lRam0000000000b62f18 != -1) {
    _dispatch_once(0xb62f18,&PTR___NSConcreteGlobalBlock_00a0a808);
  }
  puVar2 = puRam0000000000b62f10;
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  puVar1 = puRam0000000000b62f10;
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_00ac2de0;
    func_0x007802e0(PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    _objc_release(puVar2);
    puVar1 = puRam0000000000b62f10;
    puVar4 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
    func_0x00789c80(PTR__OBJC_CLASS___NSNumber_00ac29d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00789f00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (puVar3 == (undefined *)0x0) {
      FUN_005e0de4(puVar1,in_x3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00789f00(puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00602594; end: 006025a3; +[SIGTypography attributesWithStyle:alignment:lineBreakMode:] */

void FUN_00602594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0077f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_attributesWithStyle_modifiers_al_00abaa20,param_3,0,param_4,param_5);
  return;
}



/* Entry: 006025a4; end: 006025ab; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:] */

void FUN_006025a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077f4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_attributesWithStyle_modifiers_al_00abaa28);
  return;
}



/* Entry: 006025ac; end: 006025b7; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:scaleForAccessibility:] */

void FUN_006025ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077f4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(0,param_1,PTR_s_attributesWithStyle_modifiers_al_00abaa30);
  return;
}



/* Entry: 006025b8; end: 00602763; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:] */

void FUN_006025b8(undefined *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  ulong in_x3;
  undefined *in_x7;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  long lStack_1a8;
  long lStack_178;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  uint uStack_149;
  undefined1 uStack_145;
  uint uStack_144;
  undefined8 uStack_140;
  undefined *puStack_138;
  long lStack_130;
  long lStack_90;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  double dVar28;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar2 = in_x7;
  puVar13 = in_x7;
  _objc_retain();
  func_0x005e1ed0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00783960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x7);
  puVar22 = PTR__OBJC_CLASS___NSParagraphStyle_00ac32d0;
  func_0x00781c60();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar22;
  func_0x00789700();
  _objc_release(puVar22);
  func_0x0078cb00(puVar29);
  func_0x0078ebc0(puVar29);
  lVar14 = *(long *)PTR__NSFontAttributeName_00998fd0;
  lVar18 = *(long *)PTR__NSParagraphStyleAttributeName_00998fe8;
  ppuVar20 = &puStack_78;
  puVar22 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
  puStack_78 = puVar3;
  puStack_70 = puVar29;
  func_0x00782080();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar22;
  func_0x00789700();
  _objc_release(puVar22);
  if ((in_x3 & 1) != 0) {
    ppuVar20 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_00a55510;
    func_0x0078f4e0(puVar4);
  }
  puVar22 = puVar4;
  func_0x00780e20();
  _objc_release(puVar4);
  _objc_release(puVar29);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) goto _objc_autoreleaseReturnValue;
  ___stack_chk_fail();
  puVar22 = puStack_70;
  puVar3 = puStack_78;
  lStack_130 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar13);
  _objc_retain(lStack_90);
  _objc_retain(lVar14);
  _objc_retain(lVar18);
  _objc_retain(puVar3);
  _objc_retain(puVar22);
  func_0x0077f4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lStack_90;
  func_0x007882e0();
  if (lVar5 == 0) {
    _objc_retain(puVar2);
  }
  else {
    ppuVar20 = *(undefined ***)PTR__NSFontAttributeName_00998fd0;
    puVar4 = puVar2;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a6e0();
    lVar5 = lStack_90;
    puVar27 = param_1;
    _CTFontCreateWithName(lStack_90,0);
    puVar29 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if (lVar5 == 0) {
joined_r0x006028f4:
      PTR__OBJC_CLASS___NSError_00ac2b00 = puVar29;
      if (puVar22 != (undefined *)0x0) {
        ppuVar20 = &PTR____CFConstantStringClassReference_00a3eee0;
        func_0x00782e40(puVar29);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(puVar22 + 0x10))(puVar22,puVar29);
        _objc_release(puVar29);
      }
LAB_00602970:
      _objc_retain(puVar2);
    }
    else {
      lVar6 = lVar5;
      _CTFontCopyVariationAxes();
      if (lVar6 == 0) {
LAB_00602918:
        _CFRelease(lVar5);
        puVar29 = PTR__OBJC_CLASS___NSError_00ac2b00;
        if (lVar14 != 0 || lVar18 != 0) goto joined_r0x006028f4;
        goto LAB_00602970;
      }
      lVar7 = lVar6;
      _CFArrayGetCount();
      if (lVar7 == 0) {
        _CFRelease(lVar6);
        goto LAB_00602918;
      }
      ppuVar21 = &PTR____CFConstantStringClassReference_00a3ef00;
      func_0x007882e0();
      if (ppuVar21 < (undefined **)0x4) {
        uVar25 = 0;
      }
      else {
        ppuVar21 = (undefined **)0x0;
        uVar25 = 0;
        do {
          ppuVar20 = ppuVar21;
          uVar24 = 0;
          func_0x00780140();
          uVar25 = uVar24 & 0xff | uVar25 << 8;
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        } while (ppuVar21 != (undefined **)&MACH_HEADER.cputype);
      }
      ppuVar21 = &PTR____CFConstantStringClassReference_00a3ef20;
      func_0x007882e0();
      if (ppuVar21 < (undefined **)0x4) {
        uVar24 = 0;
      }
      else {
        ppuVar21 = (undefined **)0x0;
        uVar24 = 0;
        do {
          ppuVar20 = ppuVar21;
          uVar1 = 0xa3ef20;
          func_0x00780140();
          uVar24 = uVar1 & 0xff | uVar24 << 8;
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        } while (ppuVar21 != (undefined **)&MACH_HEADER.cputype);
      }
      lVar7 = lVar6;
      _CFArrayGetCount();
      if (lVar7 < 1) {
        lStack_1a8 = 0;
        lStack_178 = 0;
        puVar30 = (undefined *)0x0;
        puVar29 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        puVar31 = (undefined *)0x0;
      }
      else {
        lStack_178 = 0;
        lStack_1a8 = 0;
        lVar23 = 0;
        uVar19 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_0099a970;
        uVar15 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_0099a968;
        uVar16 = *(undefined8 *)PTR__kCTFontVariationAxisDefaultValueKey_0099a958;
        puVar31 = (undefined *)0x0;
        puVar32 = (undefined *)0x0;
        puVar29 = (undefined *)0x0;
        puVar30 = (undefined *)0x0;
        do {
          lVar11 = lVar6;
          _CFArrayGetValueAtIndex(lVar6,lVar23);
          if ((lVar11 != 0) && (lVar8 = lVar11, _CFDictionaryGetValue(), lVar8 != 0)) {
            uStack_144 = 0;
            _CFNumberGetValue();
            uStack_145 = 0;
            uVar1 = (uStack_144 & 0xff00ff00) >> 8 | (uStack_144 & 0xff00ff) << 8;
            uStack_149 = uVar1 >> 0x10 | uVar1 << 0x10;
            ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
            _objc_alloc();
            ppuVar20 = (undefined **)&uStack_149;
            func_0x00784e20();
            puStack_160 = (undefined *)0x0;
            puStack_158 = (undefined *)0x0;
            ppuVar21 = &PTR____CFConstantStringClassReference_00a3ef40;
            if (ppuVar9 != (undefined **)0x0) {
              ppuVar21 = ppuVar9;
            }
            puStack_168 = (undefined *)0x0;
            lVar8 = lVar11;
            _CFDictionaryGetValue(lVar11,uVar19);
            lVar10 = lVar11;
            _CFDictionaryGetValue(lVar11,uVar15);
            _CFDictionaryGetValue(lVar11,uVar16);
            if (lVar8 != 0) {
              ppuVar20 = &puStack_158;
              _CFNumberGetValue(lVar8,0x10);
            }
            if (lVar10 != 0) {
              ppuVar20 = &puStack_160;
              _CFNumberGetValue(lVar10,0x10);
            }
            if (lVar11 != 0) {
              ppuVar20 = &puStack_168;
              _CFNumberGetValue(lVar11,0x10);
            }
            if (uStack_144 == uVar25) {
              ppuVar20 = (undefined **)&uStack_144;
              lVar11 = 0;
              _CFNumberCreate(0,3);
              _objc_release(lStack_178);
              puVar31 = puStack_158;
              puVar32 = puStack_160;
              lStack_178 = lVar11;
            }
            else if (uStack_144 == uVar24) {
              ppuVar20 = (undefined **)&uStack_144;
              lVar11 = 0;
              _CFNumberCreate(0,3);
              _objc_release(lStack_1a8);
              puVar29 = puStack_158;
              puVar30 = puStack_160;
              lStack_1a8 = lVar11;
            }
            _objc_release(ppuVar21);
          }
          lVar23 = lVar23 + 1;
        } while (lVar7 != lVar23);
      }
      _CFRelease(lVar6);
      _CFRelease(lVar5);
      puVar12 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
      func_0x00781fe0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar14 == 0 || lStack_178 == 0) {
        if (((puVar22 != (undefined *)0x0) && (lVar14 != 0)) && (lStack_178 == 0)) {
          ppuVar20 = &PTR____CFConstantStringClassReference_00a3eee0;
          ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSError_00ac2b00;
          func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(puVar22 + 0x10))(puVar22,ppuVar21);
          goto LAB_00602cf0;
        }
      }
      else {
        func_0x00782440(lVar14);
        puVar26 = (undefined *)0x4059000000000000;
        if ((double)puVar27 <= 100.0) {
          puVar26 = puVar27;
        }
        dVar28 = 0.0;
        if (0.0 <= (double)puVar27) {
          dVar28 = (double)puVar26 / 100.0;
        }
        puVar26 = (undefined *)((double)puVar31 + dVar28 * ((double)puVar32 - (double)puVar31));
        if ((double)puVar26 <= (double)puVar32) {
          puVar32 = puVar26;
        }
        puVar27 = puVar31;
        if ((double)puVar31 <= (double)puVar26) {
          puVar27 = puVar32;
        }
        ppuVar21 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x00789c20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar20 = ppuVar21;
        func_0x0078f4e0(puVar12);
LAB_00602cf0:
        _objc_release(ppuVar21);
      }
      if ((lVar18 == 0) || (lStack_1a8 == 0)) {
        if ((puVar22 != (undefined *)0x0) && ((lVar18 != 0 && (lStack_1a8 == 0)))) {
          ppuVar20 = &PTR____CFConstantStringClassReference_00a3eee0;
          puVar29 = PTR__OBJC_CLASS___NSError_00ac2b00;
          func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(puVar22 + 0x10))(puVar22,puVar29);
          _objc_release(puVar29);
        }
        if (lVar14 != 0 && lStack_178 != 0) goto LAB_00602dc4;
        _objc_retain(puVar2);
      }
      else {
        func_0x00782440(lVar18);
        puVar32 = (undefined *)0x4059000000000000;
        if ((double)puVar27 <= 100.0) {
          puVar32 = puVar27;
        }
        dVar28 = 0.0;
        if (0.0 <= (double)puVar27) {
          dVar28 = (double)puVar32 / 100.0;
        }
        puVar27 = (undefined *)((double)puVar29 + dVar28 * ((double)puVar30 - (double)puVar29));
        if ((double)puVar27 <= (double)puVar30) {
          puVar30 = puVar27;
        }
        if ((double)puVar29 <= (double)puVar27) {
          puVar29 = puVar30;
        }
        puVar27 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x00789c20(puVar29,PTR__OBJC_CLASS___NSNumber_00ac29d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(puVar12);
        _objc_release(puVar27);
LAB_00602dc4:
        ppuVar20 = (undefined **)PTR__OBJC_CLASS___UIFontDescriptor_00ac32d8;
        func_0x00783900(param_1);
        _objc_retainAutoreleasedReturnValue();
        uStack_140 = *(undefined8 *)PTR__kCTFontVariationAttribute_0099a950;
        puVar29 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
        puStack_138 = puVar12;
        func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar21 = ppuVar20;
        func_0x007838e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar20);
        _objc_release(puVar29);
        puVar29 = PTR__OBJC_CLASS___UIFont_00ac3290;
        ppuVar20 = ppuVar21;
        func_0x00783980(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (puVar29 == (undefined *)0x0) {
          if (puVar22 != (undefined *)0x0) {
            ppuVar20 = &PTR____CFConstantStringClassReference_00a3eee0;
            puVar27 = PTR__OBJC_CLASS___NSError_00ac2b00;
            func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(puVar22 + 0x10))(puVar22,puVar27);
            _objc_release(puVar27);
          }
          _objc_retain(puVar2);
        }
        else {
          ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSParagraphStyle_00ac32d0;
          func_0x00781c60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar20;
          func_0x00789700();
          _objc_release(ppuVar20);
          func_0x0078cb00(ppuVar9);
          func_0x0078ebc0(ppuVar9);
          puVar27 = puVar2;
          func_0x00789700(puVar2);
          func_0x0078f4e0();
          ppuVar20 = ppuVar9;
          func_0x0078f4e0(puVar27);
          if (puVar3 != (undefined *)0x0) {
            puVar30 = puVar27;
            func_0x00780e20(puVar27);
            (**(code **)(puVar3 + 0x10))(puVar3,puVar30);
            _objc_release(puVar30);
          }
          _objc_retain(puVar2);
          _objc_release(puVar27);
          _objc_release(ppuVar9);
        }
        _objc_release(puVar29);
        _objc_release(ppuVar21);
      }
      _objc_release(puVar12);
      _objc_release(lStack_1a8);
      _objc_release(lStack_178);
    }
    _objc_release(puVar4);
  }
  _objc_release(puVar2);
  _objc_release(puVar22);
  _objc_release(puVar3);
  _objc_release(lVar18);
  _objc_release(lVar14);
  _objc_release(lStack_90);
  _objc_release(puVar13);
  puVar22 = puVar2;
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_130) {
    ___stack_chk_fail();
    puVar22 = puVar3;
    puVar17 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_00999088;
    switch(ppuVar20) {
    case (undefined **)0x0:
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      puVar17 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_00999088;
      break;
    case (undefined **)0x1:
      break;
    case (undefined **)0x2:
    case (undefined **)0x5:
    case (undefined **)0x6:
    case (undefined **)0x7:
    case (undefined **)0x8:
    case (undefined **)0x9:
    case (undefined **)0xa:
    case (undefined **)0xb:
    case (undefined **)0xc:
    case (undefined **)0x1a:
      puVar17 = (undefined8 *)PTR__UIFontTextStyleTitle1_00999090;
      break;
    case (undefined **)0x3:
    case (undefined **)0xd:
    case (undefined **)0xe:
    case (undefined **)0xf:
      puVar17 = (undefined8 *)PTR__UIFontTextStyleTitle2_00999098;
      break;
    case (undefined **)0x4:
    case (undefined **)0x10:
    case (undefined **)0x11:
    case (undefined **)0x12:
    case (undefined **)0x13:
      puVar17 = (undefined8 *)PTR__UIFontTextStyleTitle3_009990a0;
      break;
    case (undefined **)0x14:
    case (undefined **)0x15:
    case (undefined **)0x16:
    case (undefined **)0x1b:
    case (undefined **)0x1c:
    case (undefined **)0x1d:
    case (undefined **)0x1e:
    case (undefined **)0x1f:
    case (undefined **)0x20:
      puVar17 = (undefined8 *)PTR__UIFontTextStyleBody_00999070;
      break;
    case (undefined **)0x17:
    case (undefined **)0x18:
      puVar17 = (undefined8 *)PTR__UIFontTextStyleCaption1_00999078;
      break;
    case (undefined **)0x19:
    case (undefined **)0x21:
    case (undefined **)0x22:
      puVar17 = (undefined8 *)PTR__UIFontTextStyleCaption2_00999080;
      break;
    default:
      goto _objc_autoreleaseReturnValue;
    }
    puVar22 = (undefined *)*puVar17;
    _objc_retain(puVar22);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar22);
  return;
}



/* Entry: 00602764; end: 00603063; +[SIGTypography attributesWithStyle:modifiers:alignment:lineBreakMode:scaleForAccessibility:maximumFontSize:compatibleWithTraitCollection:preferredVariableFontName:weightPercent:widthPercent:onReady:onFailure:] */

void FUN_00602764(undefined *param_1,long param_2,undefined8 param_3,undefined **param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 in_x7;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long lStack_118;
  long lStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  uint uStack_b9;
  undefined1 uStack_b5;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  double dVar22;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  _objc_retain(in_stack_00000008);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000018);
  _objc_retain(in_stack_00000020);
  func_0x0077f4e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = in_stack_00000000;
  func_0x007882e0();
  if (lVar2 == 0) {
    _objc_retain(param_2);
  }
  else {
    param_4 = *(undefined ***)PTR__NSFontAttributeName_00998fd0;
    lVar2 = param_2;
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0078a6e0();
    lVar3 = in_stack_00000000;
    puVar21 = param_1;
    _CTFontCreateWithName(in_stack_00000000,0);
    puVar23 = PTR__OBJC_CLASS___NSError_00ac2b00;
    if (lVar3 == 0) {
joined_r0x006028f4:
      PTR__OBJC_CLASS___NSError_00ac2b00 = puVar23;
      if (in_stack_00000020 != 0) {
        param_4 = &PTR____CFConstantStringClassReference_00a3eee0;
        func_0x00782e40(puVar23);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar23);
        _objc_release(puVar23);
      }
LAB_00602970:
      _objc_retain(param_2);
    }
    else {
      lVar4 = lVar3;
      _CTFontCopyVariationAxes();
      if (lVar4 == 0) {
LAB_00602918:
        _CFRelease(lVar3);
        puVar23 = PTR__OBJC_CLASS___NSError_00ac2b00;
        if (in_stack_00000008 != 0 || in_stack_00000010 != 0) goto joined_r0x006028f4;
        goto LAB_00602970;
      }
      lVar5 = lVar4;
      _CFArrayGetCount();
      if (lVar5 == 0) {
        _CFRelease(lVar4);
        goto LAB_00602918;
      }
      ppuVar16 = &PTR____CFConstantStringClassReference_00a3ef00;
      func_0x007882e0();
      if (ppuVar16 < (undefined **)0x4) {
        uVar19 = 0;
      }
      else {
        ppuVar16 = (undefined **)0x0;
        uVar19 = 0;
        do {
          param_4 = ppuVar16;
          uVar18 = 0;
          func_0x00780140();
          uVar19 = uVar18 & 0xff | uVar19 << 8;
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar16 != (undefined **)&MACH_HEADER.cputype);
      }
      ppuVar16 = &PTR____CFConstantStringClassReference_00a3ef20;
      func_0x007882e0();
      if (ppuVar16 < (undefined **)0x4) {
        uVar18 = 0;
      }
      else {
        ppuVar16 = (undefined **)0x0;
        uVar18 = 0;
        do {
          param_4 = ppuVar16;
          uVar1 = 0xa3ef20;
          func_0x00780140();
          uVar18 = uVar1 & 0xff | uVar18 << 8;
          ppuVar16 = (undefined **)((long)ppuVar16 + 1);
        } while (ppuVar16 != (undefined **)&MACH_HEADER.cputype);
      }
      lVar5 = lVar4;
      _CFArrayGetCount();
      if (lVar5 < 1) {
        lStack_118 = 0;
        lStack_e8 = 0;
        puVar24 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
        puVar26 = (undefined *)0x0;
        puVar25 = (undefined *)0x0;
      }
      else {
        lStack_e8 = 0;
        lStack_118 = 0;
        lVar17 = 0;
        uVar15 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_0099a970;
        uVar12 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_0099a968;
        uVar13 = *(undefined8 *)PTR__kCTFontVariationAxisDefaultValueKey_0099a958;
        puVar25 = (undefined *)0x0;
        puVar26 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
        puVar24 = (undefined *)0x0;
        do {
          lVar9 = lVar4;
          _CFArrayGetValueAtIndex(lVar4,lVar17);
          if ((lVar9 != 0) && (lVar6 = lVar9, _CFDictionaryGetValue(), lVar6 != 0)) {
            uStack_b4 = 0;
            _CFNumberGetValue();
            uStack_b5 = 0;
            uVar1 = (uStack_b4 & 0xff00ff00) >> 8 | (uStack_b4 & 0xff00ff) << 8;
            uStack_b9 = uVar1 >> 0x10 | uVar1 << 0x10;
            ppuVar7 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
            _objc_alloc();
            param_4 = (undefined **)&uStack_b9;
            func_0x00784e20();
            puStack_d0 = (undefined *)0x0;
            puStack_c8 = (undefined *)0x0;
            ppuVar16 = &PTR____CFConstantStringClassReference_00a3ef40;
            if (ppuVar7 != (undefined **)0x0) {
              ppuVar16 = ppuVar7;
            }
            puStack_d8 = (undefined *)0x0;
            lVar6 = lVar9;
            _CFDictionaryGetValue(lVar9,uVar15);
            lVar8 = lVar9;
            _CFDictionaryGetValue(lVar9,uVar12);
            _CFDictionaryGetValue(lVar9,uVar13);
            if (lVar6 != 0) {
              param_4 = &puStack_c8;
              _CFNumberGetValue(lVar6,0x10);
            }
            if (lVar8 != 0) {
              param_4 = &puStack_d0;
              _CFNumberGetValue(lVar8,0x10);
            }
            if (lVar9 != 0) {
              param_4 = &puStack_d8;
              _CFNumberGetValue(lVar9,0x10);
            }
            if (uStack_b4 == uVar19) {
              param_4 = (undefined **)&uStack_b4;
              lVar9 = 0;
              _CFNumberCreate(0,3);
              _objc_release(lStack_e8);
              puVar25 = puStack_c8;
              puVar26 = puStack_d0;
              lStack_e8 = lVar9;
            }
            else if (uStack_b4 == uVar18) {
              param_4 = (undefined **)&uStack_b4;
              lVar9 = 0;
              _CFNumberCreate(0,3);
              _objc_release(lStack_118);
              puVar23 = puStack_c8;
              puVar24 = puStack_d0;
              lStack_118 = lVar9;
            }
            _objc_release(ppuVar16);
          }
          lVar17 = lVar17 + 1;
        } while (lVar5 != lVar17);
      }
      _CFRelease(lVar4);
      _CFRelease(lVar3);
      puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
      func_0x00781fe0();
      _objc_retainAutoreleasedReturnValue();
      if (in_stack_00000008 == 0 || lStack_e8 == 0) {
        if (((in_stack_00000020 != 0) && (in_stack_00000008 != 0)) && (lStack_e8 == 0)) {
          param_4 = &PTR____CFConstantStringClassReference_00a3eee0;
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSError_00ac2b00;
          func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,ppuVar16);
          goto LAB_00602cf0;
        }
      }
      else {
        func_0x00782440(in_stack_00000008);
        puVar20 = (undefined *)0x4059000000000000;
        if ((double)puVar21 <= 100.0) {
          puVar20 = puVar21;
        }
        dVar22 = 0.0;
        if (0.0 <= (double)puVar21) {
          dVar22 = (double)puVar20 / 100.0;
        }
        puVar20 = (undefined *)((double)puVar25 + dVar22 * ((double)puVar26 - (double)puVar25));
        if ((double)puVar20 <= (double)puVar26) {
          puVar26 = puVar20;
        }
        puVar21 = puVar25;
        if ((double)puVar25 <= (double)puVar20) {
          puVar21 = puVar26;
        }
        ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x00789c20();
        _objc_retainAutoreleasedReturnValue();
        param_4 = ppuVar16;
        func_0x0078f4e0(puVar10);
LAB_00602cf0:
        _objc_release(ppuVar16);
      }
      if ((in_stack_00000010 == 0) || (lStack_118 == 0)) {
        if ((in_stack_00000020 != 0) && ((in_stack_00000010 != 0 && (lStack_118 == 0)))) {
          param_4 = &PTR____CFConstantStringClassReference_00a3eee0;
          puVar23 = PTR__OBJC_CLASS___NSError_00ac2b00;
          func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
          _objc_retainAutoreleasedReturnValue();
          (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar23);
          _objc_release(puVar23);
        }
        if (in_stack_00000008 != 0 && lStack_e8 != 0) goto LAB_00602dc4;
        _objc_retain(param_2);
      }
      else {
        func_0x00782440(in_stack_00000010);
        puVar26 = (undefined *)0x4059000000000000;
        if ((double)puVar21 <= 100.0) {
          puVar26 = puVar21;
        }
        dVar22 = 0.0;
        if (0.0 <= (double)puVar21) {
          dVar22 = (double)puVar26 / 100.0;
        }
        puVar21 = (undefined *)((double)puVar23 + dVar22 * ((double)puVar24 - (double)puVar23));
        if ((double)puVar21 <= (double)puVar24) {
          puVar24 = puVar21;
        }
        if ((double)puVar23 <= (double)puVar21) {
          puVar23 = puVar24;
        }
        puVar21 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x00789c20(puVar23,PTR__OBJC_CLASS___NSNumber_00ac29d8);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(puVar10);
        _objc_release(puVar21);
LAB_00602dc4:
        ppuVar16 = (undefined **)PTR__OBJC_CLASS___UIFontDescriptor_00ac32d8;
        func_0x00783900(param_1);
        _objc_retainAutoreleasedReturnValue();
        uStack_b0 = *(undefined8 *)PTR__kCTFontVariationAttribute_0099a950;
        puVar23 = PTR__OBJC_CLASS___NSDictionary_00ac29e8;
        puStack_a8 = puVar10;
        func_0x00782080(PTR__OBJC_CLASS___NSDictionary_00ac29e8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar7 = ppuVar16;
        func_0x007838e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        _objc_release(puVar23);
        puVar23 = PTR__OBJC_CLASS___UIFont_00ac3290;
        param_4 = ppuVar7;
        func_0x00783980(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (puVar23 == (undefined *)0x0) {
          if (in_stack_00000020 != 0) {
            param_4 = &PTR____CFConstantStringClassReference_00a3eee0;
            puVar21 = PTR__OBJC_CLASS___NSError_00ac2b00;
            func_0x00782e40(PTR__OBJC_CLASS___NSError_00ac2b00);
            _objc_retainAutoreleasedReturnValue();
            (**(code **)(in_stack_00000020 + 0x10))(in_stack_00000020,puVar21);
            _objc_release(puVar21);
          }
          _objc_retain(param_2);
        }
        else {
          ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSParagraphStyle_00ac32d0;
          func_0x00781c60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar11 = ppuVar16;
          func_0x00789700();
          _objc_release(ppuVar16);
          func_0x0078cb00(ppuVar11);
          func_0x0078ebc0(ppuVar11);
          lVar3 = param_2;
          func_0x00789700(param_2);
          func_0x0078f4e0();
          param_4 = ppuVar11;
          func_0x0078f4e0(lVar3);
          if (in_stack_00000018 != 0) {
            lVar4 = lVar3;
            func_0x00780e20(lVar3);
            (**(code **)(in_stack_00000018 + 0x10))(in_stack_00000018,lVar4);
            _objc_release(lVar4);
          }
          _objc_retain(param_2);
          _objc_release(lVar3);
          _objc_release(ppuVar11);
        }
        _objc_release(puVar23);
        _objc_release(ppuVar7);
      }
      _objc_release(puVar10);
      _objc_release(lStack_118);
      _objc_release(lStack_e8);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_2);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000018);
  _objc_release(in_stack_00000010);
  _objc_release(in_stack_00000008);
  _objc_release(in_stack_00000000);
  _objc_release(in_x7);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_a0) {
    ___stack_chk_fail();
    param_2 = in_stack_00000018;
    plVar14 = (long *)PTR__UIFontTextStyleLargeTitle_00999088;
    switch(param_4) {
    case (undefined **)0x0:
      func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30);
      plVar14 = (long *)PTR__UIFontTextStyleLargeTitle_00999088;
      break;
    case (undefined **)0x1:
      break;
    case (undefined **)0x2:
    case (undefined **)0x5:
    case (undefined **)0x6:
    case (undefined **)0x7:
    case (undefined **)0x8:
    case (undefined **)0x9:
    case (undefined **)0xa:
    case (undefined **)0xb:
    case (undefined **)0xc:
    case (undefined **)0x1a:
      plVar14 = (long *)PTR__UIFontTextStyleTitle1_00999090;
      break;
    case (undefined **)0x3:
    case (undefined **)0xd:
    case (undefined **)0xe:
    case (undefined **)0xf:
      plVar14 = (long *)PTR__UIFontTextStyleTitle2_00999098;
      break;
    case (undefined **)0x4:
    case (undefined **)0x10:
    case (undefined **)0x11:
    case (undefined **)0x12:
    case (undefined **)0x13:
      plVar14 = (long *)PTR__UIFontTextStyleTitle3_009990a0;
      break;
    case (undefined **)0x14:
    case (undefined **)0x15:
    case (undefined **)0x16:
    case (undefined **)0x1b:
    case (undefined **)0x1c:
    case (undefined **)0x1d:
    case (undefined **)0x1e:
    case (undefined **)0x1f:
    case (undefined **)0x20:
      plVar14 = (long *)PTR__UIFontTextStyleBody_00999070;
      break;
    case (undefined **)0x17:
    case (undefined **)0x18:
      plVar14 = (long *)PTR__UIFontTextStyleCaption1_00999078;
      break;
    case (undefined **)0x19:
    case (undefined **)0x21:
    case (undefined **)0x22:
      plVar14 = (long *)PTR__UIFontTextStyleCaption2_00999080;
      break;
    default:
      goto _objc_autoreleaseReturnValue;
    }
    param_2 = *plVar14;
    _objc_retain(param_2);
  }
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 00603064; end: 00603127; +[SIGTypography styleForTypography:] */

void FUN_00603064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  
  puVar1 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_00999088;
  switch(param_3) {
  case 0:
    func_0x0078ad40(PTR__OBJC_CLASS___NSException_00ac2f30,param_2,
                    *(undefined8 *)PTR__NSInvalidArgumentException_00999c90,
                    &PTR____CFConstantStringClassReference_00a3eac0);
    puVar1 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_00999088;
    break;
  case 1:
    break;
  case 2:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x1a:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle1_00999090;
    break;
  case 3:
  case 0xd:
  case 0xe:
  case 0xf:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle2_00999098;
    break;
  case 4:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleTitle3_009990a0;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleBody_00999070;
    break;
  case 0x17:
  case 0x18:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleCaption1_00999078;
    break;
  case 0x19:
  case 0x21:
  case 0x22:
    puVar1 = (undefined8 *)PTR__UIFontTextStyleCaption2_00999080;
    break;
  default:
    goto LAB_00603114;
  }
  unaff_x19 = *puVar1;
  _objc_retain(unaff_x19);
LAB_00603114:
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(unaff_x19);
  return;
}



/* Entry: 00603128; end: 0060315f;  */

void FUN_00603128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00791750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_sig_attributedStringWithStyle_al_00abf2e0,param_3,4);
  return;
}



/* Entry: 00603160; end: 006031bb;  */

void FUN_00603160(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac32c8;
  func_0x0077f4e0(PTR_PTR_00ac32c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_00ac32e0;
  _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_00ac32e0);
  func_0x00786960();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 006031bc; end: 006031df;  */

void FUN_006031bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00791790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,PTR_s_sig_attributedStringWithStyle_mo_00abf2f0,param_3,0,param_4,param_5);
  return;
}



/* Entry: 006031e0; end: 006032c3;  */

void FUN_006031e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_9);
  func_0x00789700(param_2);
  puVar1 = PTR_PTR_00ac32c8;
  func_0x0077f4e0(param_1,PTR_PTR_00ac32c8,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  uVar2 = param_2;
  func_0x007882e0(param_2);
  func_0x0077e420(param_2,param_3,puVar1,0,uVar2);
  uVar2 = param_2;
  func_0x00780e20(param_2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar2);
  return;
}



/* Entry: 006032c4; end: 0060344b;  */

void FUN_006032c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x007882e0();
  if (lVar1 == 0) {
    _objc_retain(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00789700();
    func_0x0077f900();
    uVar3 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_00998fe8;
    lVar2 = param_1;
    func_0x007882e0(param_1);
    puStack_70 = PTR___NSConcreteStackBlock_00999f30;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x6033b4;
    puStack_58 = &UNK_00a0a828;
    lStack_50 = lVar1;
    uStack_48 = param_3;
    _objc_retain(lVar1);
    func_0x00782a80(param_1,param_2,uVar3,0,lVar2,0,&puStack_70);
    func_0x007828c0(lVar1);
    param_1 = lVar1;
    func_0x00780e20(lVar1);
    _objc_release(lStack_50);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 0060344c; end: 006034a7;  */

void FUN_0060344c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  func_0x00784020(param_1,param_2,&dStack_18,&dStack_20,&dStack_28,&uStack_30);
  func_0x00780600(1.0 - dStack_18,1.0 - dStack_20,1.0 - dStack_28,uStack_30,
                  PTR__OBJC_CLASS___UIColor_00ac2de0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006034a8; end: 00603577;  */

void FUN_006034a8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  puVar1 = param_1;
  func_0x00783f40(param_1,param_2,&uStack_40,&uStack_48,&dStack_38,&uStack_50);
  if ((int)puVar1 == 0) {
    puVar1 = param_1;
    func_0x00784020(param_1,param_2,&dStack_28,&dStack_30,&dStack_38,&uStack_50);
    if ((int)puVar1 == 0) {
      _objc_retain(param_1);
    }
    else {
      param_1 = PTR__OBJC_CLASS___UIColor_00ac2de0;
      func_0x00780600(dStack_28 * 0.9,dStack_30 * 0.9,dStack_38 * 0.9,uStack_50,
                      PTR__OBJC_CLASS___UIColor_00ac2de0);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    param_1 = PTR__OBJC_CLASS___UIColor_00ac2de0;
    func_0x007805e0(uStack_40,uStack_48,dStack_38 * 0.9,uStack_50,PTR__OBJC_CLASS___UIColor_00ac2de0
                   );
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00603578; end: 00603587;  */

void FUN_00603578(void)

{
                    /* WARNING: Could not recover jumptable at 0x007805b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0,
             PTR_s_colorWithHexCode_alpha__00abae60);
  return;
}



/* Entry: 00603588; end: 006035d3;  */

void FUN_00603588(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 >> 0x20 == 0) {
    func_0x007805a0((double)(param_3 >> 0x18) / 255.0,PTR__OBJC_CLASS___UIColor_00ac2de0,param_2,
                    param_3 & 0xffffff);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 006035d4; end: 0060360f;  */

void FUN_006035d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00780610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            ((double)(param_4 >> 0x10 & 0xff) / 255.0,(double)(param_4 >> 8 & 0xff) / 255.0,
             (double)(param_4 & 0xff) / 255.0,param_1,PTR__OBJC_CLASS___UIColor_00ac2de0,
             PTR_s_colorWithRed_green_blue_alpha__00abae78);
  return;
}



/* Entry: 00603610; end: 00603727;  */

void FUN_00603610(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uStack_34;
  
  _objc_retain(param_3);
  puVar4 = PTR__OBJC_CLASS___UIColor_00ac2de0;
  func_0x00787f20(PTR__OBJC_CLASS___UIColor_00ac2de0,param_2,param_3);
  if ((int)puVar4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = param_3;
    func_0x00780140(param_3,param_2,0);
    uVar2 = param_3;
    if ((int)uVar1 == 0x23) {
      func_0x00792440(param_3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
    }
    uStack_34 = 0;
    puVar3 = PTR__OBJC_CLASS___NSScanner_00ac32e8;
    func_0x0078c2e0(PTR__OBJC_CLASS___NSScanner_00ac32e8,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00790240();
    func_0x0078c2a0(puVar3,param_2,&uStack_34);
    puVar4 = PTR__OBJC_CLASS___UIColor_00ac2de0;
    func_0x00780600((double)(uStack_34 >> 0x10 & 0xff) / 255.0,
                    (double)(uStack_34 >> 8 & 0xff) / 255.0,(double)(uStack_34 & 0xff) / 255.0,
                    0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_00ac2de0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_3 = uVar2;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
  return;
}



/* Entry: 00603728; end: 006038af;  */

void FUN_00603728(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x00791f80(param_4,param_3,&PTR____CFConstantStringClassReference_00a3ef60,
                  &PTR____CFConstantStringClassReference_00a212a0);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00793260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar2 = lVar1;
  func_0x007882e0();
  lVar3 = lVar1;
  if ((lVar2 != 0) && (lVar2 = lVar1, func_0x00780140(lVar1,param_3,0), (int)lVar2 == 0x23)) {
    func_0x00792440(lVar1,param_3,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = lVar3;
  func_0x007882e0();
  if (lVar1 == 6) {
    func_0x007805c0(param_2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar1 = lVar3;
    func_0x007882e0();
    if (lVar1 == 8) {
      func_0x00780500(param_2,param_3,lVar3,0,2);
      uVar4 = param_1;
      func_0x00780500(param_2,param_3,lVar3,2,2);
      uVar5 = uVar4;
      func_0x00780500(param_2,param_3,lVar3,4,2);
      uVar6 = uVar5;
      func_0x00780500(param_2,param_3,lVar3,6,2);
      param_2 = PTR__OBJC_CLASS___UIColor_00ac2de0;
      func_0x00780600(uVar4,uVar5,uVar6,param_1,PTR__OBJC_CLASS___UIColor_00ac2de0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_2 = (undefined *)0x0;
    }
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 006038b0; end: 0060399b;  */

double FUN_006038b0(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  double dVar4;
  uint uStack_44;
  
  func_0x007924a0(param_3,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_5 == 2) {
    _objc_retain();
    ppuVar3 = param_3;
  }
  else {
    ppuVar1 = param_3;
    func_0x00791ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_00a212a0;
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar3 = ppuVar1;
    }
    _objc_retain(ppuVar3);
    _objc_release(ppuVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSScanner_00ac32e8;
  func_0x0078c2e0(PTR__OBJC_CLASS___NSScanner_00ac32e8,param_2,ppuVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078c2a0();
  _objc_release(puVar2);
  dVar4 = (double)NEON_ucvtf((ulong)uStack_44);
  _objc_release(ppuVar3);
  _objc_release(param_3);
  return dVar4 / 255.0;
}



/* Entry: 0060399c; end: 00603a33;  */

undefined * FUN_0060399c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x007882e0();
  if (uVar1 < 6) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSPredicate_00ac2d08;
    func_0x0078a7c0(PTR__OBJC_CLASS___NSPredicate_00ac2d08,param_2,
                    &PTR____CFConstantStringClassReference_00a25040);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00782ec0();
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 00603a34; end: 00603c17;  */

void FUN_00603a34(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  long alStack_c0 [5];
  long lStack_98;
  long lStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  func_0x00784020(param_1,param_2,auStack_48,auStack_40,auStack_38,auStack_30);
  if ((int)param_1 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a3efa0;
  }
  else {
    _asprintf(&lStack_50,&UNK_0090350e);
    ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
    func_0x00792140();
    _objc_retainAutoreleasedReturnValue();
    _free();
    param_1 = lStack_50;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    lStack_98 = *(long *)PTR____stack_chk_guard_00999f88;
    func_0x00784020();
    if ((int)param_1 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_00a3efc0;
    }
    else {
      _asprintf(alStack_c0,&UNK_00903527);
      ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792140(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      _free();
      param_1 = alStack_c0[0];
    }
    if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_98) {
      ___stack_chk_fail();
      if (param_1 != 0) {
        func_0x00784020();
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar1);
  return;
}



/* Entry: 00603c18; end: 00603cf7;  */

uint FUN_00603c18(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_30 [8];
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x00784020(param_1,param_2,&dStack_18,&dStack_20,&dStack_28,auStack_30);
    uVar1 = (int)(dStack_20 * 255.0) << 8 ^ (int)(dStack_18 * 255.0) << 0x10 ^
            (int)(dStack_28 * 255.0);
  }
  return uVar1;
}



/* Entry: 00603cf8; end: 00603f37;  */

void FUN_00603cf8(void)

{
                    /* WARNING: Could not recover jumptable at 0x007917f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (PTR__OBJC_CLASS___UIColor_00ac2de0,PTR_s_sig_color__00abf308,0x94);
  return;
}



/* Entry: 00603f38; end: 00603fa3; +[SCFontCacheKey keyForUnscaledFontWithName:pointSize:] */

void FUN_00603f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac32f0;
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00785ce0(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00603fa4; end: 00604023; +[SCFontCacheKey keyForScaledFontWithName:pointSize:style:] */

void FUN_00603fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac32f0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00785ce0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00604024; end: 006040e3; -[SCFontCacheKey initWithName:pointSize:scalable:style:] */

undefined1 *
FUN_00604024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined1 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_00ac4160;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined1 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 006040e4; end: 006041bf; -[SCFontCacheKey isEqual:] */

bool FUN_006040e4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_00ac32f0;
  _objc_opt_class(PTR_PTR_00ac32f0);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    iVar3 = (int)*(undefined8 *)(param_3 + 8);
    func_0x007878e0();
    if (iVar3 != 0) {
      dVar7 = ABS(*(double *)(param_3 + 0x10) - *(double *)(param_1 + 0x10));
      dVar6 = ABS(*(double *)(param_3 + 0x10) + *(double *)(param_1 + 0x10)) * 2.220446049250313e-16
      ;
      bVar2 = true;
      if ((2.2250738585072014e-308 <= dVar7) && (bVar2 = false, !NAN(dVar7) && !NAN(dVar6))) {
        bVar2 = dVar7 < dVar6;
      }
      if ((bVar2) && (*(char *)(param_3 + 0x18) == *(char *)(param_1 + 0x18))) {
        bVar2 = *(long *)(param_3 + 0x20) == *(long *)(param_1 + 0x20);
        goto LAB_0060419c;
      }
    }
  }
  bVar2 = false;
LAB_0060419c:
  _objc_release(uVar1);
  _objc_release(param_3);
  return bVar2;
}



/* Entry: 006041c0; end: 00604227; -[SCFontCacheKey hash] */

ulong FUN_006041c0(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x007843a0(uVar1);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x007843a0(lVar2);
    uVar1 = (long)(*(double *)(param_1 + 0x10) + (double)((lVar2 + uVar1 * 0x25) * 0x25)) |
            0x8000000000000000;
  }
  return uVar1;
}



/* Entry: 00604228; end: 0060424b; -[SCFontCacheKey copyWithZone:] */

undefined8 FUN_00604228(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 0060424c; end: 00604253; -[SCFontCacheKey scalable] */

undefined1 FUN_0060424c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 00604254; end: 0060425b; -[SCFontCacheKey style] */

undefined8 FUN_00604254(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0060425c; end: 0060428b; -[SCFontCacheKey .cxx_destruct] */

void FUN_0060425c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 0060428c; end: 0060453f;  */

void FUN_0060428c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uVar3;
  
  ppuVar8 = &puStack_a0;
  _objc_retain();
  _objc_retain(param_5);
  uVar3 = param_6;
  _objc_retain();
  iVar2 = (int)uVar3;
  _UIAccessibilityIsBoldTextEnabled();
  if (iVar2 != 0) {
    _objc_retain(param_3);
    _objc_retain(param_6);
    _objc_retain(param_3);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_release(param_3);
  }
  puVar4 = PTR_PTR_00ac32f0;
  if (param_4 == 0) {
    func_0x007880c0(param_1,PTR_PTR_00ac32f0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x007880a0();
    _objc_retainAutoreleasedReturnValue();
  }
  puStack_a0 = PTR___NSConcreteStackBlock_00999f30;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_00604540;
  puStack_88 = &UNK_00a0a858;
  _objc_retain(param_3);
  uStack_80 = param_3;
  uStack_78 = param_1;
  _objc_retain(puVar4);
  _objc_retain(param_6);
  _objc_retain(&puStack_a0);
  if (lRam0000000000b62f28 != -1) {
    _dispatch_once(0xb62f28,&PTR___NSConcreteGlobalBlock_00a0a888);
  }
  puVar5 = puVar4;
  func_0x0078c1e0(puVar4);
  puVar6 = puVar4;
  func_0x007922a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puRam0000000000b62f20;
  _objc_retain(puRam0000000000b62f20);
  _objc_sync_enter(puVar1);
  puVar7 = puRam0000000000b62f20;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (puVar7 == (undefined1 *)0x0) {
    (*pcStack_90)();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar8 != (undefined **)0x0) {
      func_0x0078f4e0(puRam0000000000b62f20);
    }
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
    puVar9 = (undefined1 *)ppuVar8;
    FUN_00604d14(param_2,ppuVar8,puVar5,puVar6,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar9 = puVar7;
    FUN_00604d14(param_2,puVar7,puVar5,puVar6,param_6);
    _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(puVar1);
    _objc_release(puVar1);
    ppuVar8 = (undefined **)puVar7;
  }
  _objc_release(puVar6);
  _objc_release(ppuVar8);
  _objc_release(&puStack_a0);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(uStack_80);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar9);
  return;
}



/* Entry: 00604540; end: 00604a33;  */

/* WARNING: Removing unreachable block (ram,0x00604744) */
/* WARNING: Removing unreachable block (ram,0x006045ec) */
/* WARNING: Removing unreachable block (ram,0x00604868) */

void FUN_00604540(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  lVar10 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar12);
  puVar2 = PTR__OBJC_CLASS___NSLocale_00ac2990;
  func_0x0078a840();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar3 = puVar2;
  func_0x00780ea0();
  do {
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar2);
      puVar3 = PTR__OBJC_CLASS___UIFont_00ac3290;
      func_0x007839a0(uVar16,PTR__OBJC_CLASS___UIFont_00ac3290);
      _objc_retainAutoreleasedReturnValue();
LAB_006049e0:
      _objc_release(puVar2);
      _objc_release(uVar12);
      if (*(long *)PTR____stack_chk_guard_00999f88 != lVar10) {
        ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0078b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_0099ad68)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar3);
      return;
    }
    puVar11 = (undefined *)0x0;
    do {
      iVar1 = (int)*(undefined8 *)((long)puVar11 * 8);
      func_0x00784340();
      if (iVar1 != 0) {
        puVar11 = PTR__OBJC_CLASS___UIFont_00ac3290;
        func_0x007839a0(uVar16);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_00ac3300;
        _objc_alloc_init();
        puVar5 = puVar11;
        func_0x007838c0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
        func_0x007838a0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00789f00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        _objc_retain(puVar6);
        puVar3 = puVar6;
        func_0x00780ea0();
        while (puVar3 != (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
          do {
            uVar14 = *(ulong *)((long)puVar13 * 8);
            func_0x007838a0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar14;
            func_0x00789f00();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00780c40();
            _objc_release(uVar7);
            _objc_release(uVar14);
            if ((uVar8 & 1) == 0) {
              func_0x0077e720(puVar4);
            }
            puVar13 = puVar13 + 1;
          } while (puVar3 != puVar13);
          puVar3 = puVar6;
          func_0x00780ea0();
        }
        _objc_release(puVar6);
        puVar3 = PTR__OBJC_CLASS___NSLocale_00ac2990;
        func_0x0078a840(PTR__OBJC_CLASS___NSLocale_00ac2990);
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar11;
        _CTFontCopyDefaultCascadeListForLanguages(puVar11,puVar3);
        _objc_release(puVar3);
        _objc_retain(puVar13);
        puVar3 = puVar13;
        func_0x00780ea0();
        while (puVar3 != (undefined *)0x0) {
          puVar15 = (undefined *)0x0;
          do {
            uVar14 = *(ulong *)((long)puVar15 * 8);
            func_0x007838a0();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar14;
            func_0x00789f00();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00780c40();
            _objc_release(uVar7);
            _objc_release(uVar14);
            if ((uVar8 & 1) == 0) {
              func_0x0077e720(puVar4);
            }
            puVar15 = puVar15 + 1;
          } while (puVar3 != puVar15);
          puVar3 = puVar13;
          func_0x00780ea0();
        }
        _objc_release(puVar13);
        puVar3 = puVar5;
        func_0x007838a0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar15 = puVar3;
        func_0x00789700();
        _objc_release(puVar3);
        puVar3 = puVar4;
        func_0x0077f120(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(puVar15);
        _objc_release(puVar3);
        puVar9 = PTR__OBJC_CLASS___UIFontDescriptor_00ac32d8;
        _objc_alloc(PTR__OBJC_CLASS___UIFontDescriptor_00ac32d8);
        func_0x007856c0();
        puVar3 = PTR__OBJC_CLASS___UIFont_00ac3290;
        func_0x0078a6e0(puVar11);
        func_0x00783980(puVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(puVar15);
        _objc_release(puVar13);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar11);
        _objc_release(puVar2);
        goto LAB_006049e0;
      }
      puVar11 = puVar11 + 1;
    } while (puVar3 != puVar11);
    puVar3 = puVar2;
    func_0x00780ea0();
  } while( true );
}



/* Entry: 00604a34; end: 00604cdf;  */

void FUN_00604a34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0078b1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_1,0,param_2,PTR_s_regularAvenirNextFontOfSize_forT_00abd980,
             *(undefined8 *)PTR__UIFontTextStyleBody_00999070,0,0);
  return;
}



/* Entry: 00604ce0; end: 00604d13;  */

void FUN_00604ce0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  func_0x00781fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000000b62f20;
  puRam0000000000b62f20 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00604d14; end: 00604dfb;  */

void FUN_00604d14(double param_1,undefined *param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_5);
  puVar2 = param_2;
  if (param_3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIFontMetrics_00ac32f8;
    func_0x007893e0(PTR__OBJC_CLASS___UIFontMetrics_00ac32f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (param_1 <= 0.0) {
      if (param_5 == 0) {
        func_0x0078c220();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x0078c240();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else if (param_5 == 0) {
      func_0x0078c260(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0078c280();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_2);
    _objc_release(puVar1);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00604dfc; end: 00605007;  */

void FUN_00604dfc(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  iVar3 = 2;
  uVar5 = 0x11;
  FUN_0040c9a8(2,0x11,0,0);
  bVar2 = param_3 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  if (iVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___UITraitCollection_00ac3298;
    if (bVar2) {
      func_0x00792d40();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_3 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        _objc_retain(param_1);
        goto LAB_00604fb4;
      }
      func_0x00792d40();
      _objc_retainAutoreleasedReturnValue();
    }
    param_1 = PTR__OBJC_CLASS___UITraitCollection_00ac3298;
    param_3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
    func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
    _objc_retainAutoreleasedReturnValue();
    func_0x00792d20();
    _objc_retainAutoreleasedReturnValue();
LAB_00604fa8:
    _objc_release(param_3);
    param_3 = puVar4;
  }
  else {
    if (((bVar2) || (param_3 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) ||
       (param_3 == (undefined1 *)0x0)) {
      func_0x00792ca0();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_00604fb4;
    }
    func_0x006050f8();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != (undefined1 *)0x0) {
      _objc_retain(param_3);
      func_0x00792ca0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_3;
      goto LAB_00604fa8;
    }
    func_0x00792ca0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
LAB_00604fb4:
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_00ac3308;
    _objc_retain(uVar5);
    _objc_opt_class(puVar1);
    func_0x0078f140(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(uVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00605008; end: 00605183;  */

void FUN_00605008(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3308;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x0078f140(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00605184; end: 006051f7;  */

void FUN_00605184(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x0077ed20(uVar1);
  _objc_opt_class(PTR_PTR_00ac3308);
  func_0x0078f140(param_2);
  func_0x00793440(*(undefined8 *)(param_1 + 0x20));
  func_0x00791100(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 006051f8; end: 0060523f;  */

void FUN_006051f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3308;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x0078f140(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_2);
  return;
}



/* Entry: 00605240; end: 006052d3;  */

void FUN_00605240(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  (*pcRam0000000000b62f40)(param_1,PTR_s_traitCollection_00abf830);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00792ce0();
  _objc_retainAutoreleasedReturnValue();
  FUN_006052d4(param_1,&UNK_009043ee,&UNK_00904416,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 006052d4; end: 006055b7;  */

/* WARNING: Removing unreachable block (ram,0x00605478) */

void FUN_006052d4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  _objc_retain(param_4);
  puVar9 = param_1;
  _objc_getAssociatedObject(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if ((puVar9 == (undefined *)0x0) ||
     ((puVar9 != param_4 && (puVar1 = puVar9, func_0x007877e0(), (int)puVar1 == 0)))) {
    _os_unfair_lock_lock(0xb62f38);
    puVar1 = param_1;
    _objc_getAssociatedObject(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    if ((puVar1 == (undefined *)0x0) ||
       ((puVar1 != param_4 && (puVar9 = puVar1, func_0x007877e0(), (int)puVar9 == 0)))) {
      puVar2 = param_1;
      _objc_getAssociatedObject(param_1,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        if (puVar2 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
          func_0x0077f120();
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(param_1,param_3,puVar2,0x301);
        }
        puVar9 = puVar2;
        func_0x007848e0();
        if (puVar9 == (undefined *)0x7fffffffffffffff) {
          func_0x0077e720(puVar2);
        }
      }
      _objc_retain(puVar2);
      puVar3 = puVar2;
      func_0x00780ea0();
      while (puVar3 != (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
        do {
          puVar9 = *(undefined **)((long)puVar10 * 8);
          if ((puVar9 == param_4) || (puVar4 = puVar9, func_0x007877e0(), (int)puVar4 != 0)) {
            _objc_setAssociatedObject(param_1,param_2,puVar9,0x301);
            _objc_retain(puVar9);
            _objc_release(puVar2);
            goto LAB_00605518;
          }
          puVar10 = puVar10 + 1;
        } while (puVar3 != puVar10);
        puVar3 = puVar2;
        func_0x00780ea0();
      }
      _objc_release(puVar2);
      _objc_setAssociatedObject(param_1,param_2,param_4,0x301);
      _objc_retain(param_4);
      puVar9 = param_4;
LAB_00605518:
      _objc_release(puVar2);
    }
    else {
      _objc_retain(puVar1);
      puVar9 = puVar1;
    }
    _os_unfair_lock_unlock(0xb62f38);
  }
  else {
    _objc_retain(puVar9);
    puVar1 = puVar9;
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar8) {
    ___stack_chk_fail();
    _os_unfair_lock_unlock(0xb62f38);
    __Unwind_Resume(param_1);
    uRam0000000000b62f38 = 0;
    ppuVar5 = &PTR____CFConstantStringClassReference_00a3f140;
    _NSClassFromString();
    puVar9 = PTR_s_sig_traitCollection_00ab8780;
    ppuVar6 = ppuVar5;
    _class_getInstanceMethod();
    _class_getInstanceMethod(ppuVar5,puVar9);
    ppuVar7 = ppuVar6;
    _method_getImplementation();
    ppuRam0000000000b62f40 = ppuVar7;
                    /* WARNING: Could not recover jumptable at 0x0077a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__method_exchangeImplementations_0099ac98)(ppuVar6,ppuVar5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar9);
  return;
}



/* Entry: 006055b8; end: 0060562f;  */

void FUN_006055b8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  uRam0000000000b62f38 = 0;
  ppuVar2 = &PTR____CFConstantStringClassReference_00a3f140;
  _NSClassFromString();
  puVar1 = PTR_s_sig_traitCollection_00ab8780;
  ppuVar3 = ppuVar2;
  _class_getInstanceMethod();
  _class_getInstanceMethod(ppuVar2,puVar1);
  ppuVar4 = ppuVar3;
  _method_getImplementation();
  ppuRam0000000000b62f40 = ppuVar4;
                    /* WARNING: Could not recover jumptable at 0x0077a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_0099ac98)(ppuVar3,ppuVar2);
  return;
}



/* Entry: 00605630; end: 006056d3;  */

void FUN_00605630(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  func_0x00789be0(PTR__OBJC_CLASS___NSNumber_00ac29d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&UNK_00904440,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 006056d4; end: 006057fb;  */

void FUN_006056d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  (*pcRam0000000000b62f30)(param_1,PTR_s_traitCollection_00abf830);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00784340();
  if ((int)uVar3 == 0) {
    uVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00784340();
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar4 == 0) {
      func_0x00787600(param_1);
      uVar2 = uVar1;
      func_0x00792ce0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      FUN_006052d4(param_1,&UNK_00904468,&UNK_00904498,uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      goto LAB_006057dc;
    }
  }
  else {
    _objc_release(uVar2);
  }
  _objc_retain(uVar1);
  param_1 = uVar1;
LAB_006057dc:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 006057fc; end: 0060586b;  */

void FUN_006057fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_00ac3310;
  _objc_opt_class();
  puVar3 = PTR_s_sig_traitCollection_00ab8780;
  puVar2 = puVar1;
  _class_getInstanceMethod();
  _class_getInstanceMethod(puVar1,puVar3);
  puVar3 = puVar2;
  _method_getImplementation();
  puRam0000000000b62f30 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__method_exchangeImplementations_0099ac98)(puVar2,puVar1);
  return;
}



/* Entry: 0060586c; end: 00605877; +[AppThemeTrait identifier] */

undefined ** FUN_0060586c(void)

{
  return &PTR____CFConstantStringClassReference_00a3f1a0;
}



/* Entry: 00605878; end: 0060587f; +[AppThemeTrait defaultValue] */

undefined8 FUN_00605878(void)

{
  return 0;
}



/* Entry: 00605880; end: 00605887; +[AppThemeTrait affectsColorAppearance] */

undefined8 FUN_00605880(void)

{
  return 1;
}



/* Entry: 00605888; end: 006059ef; -[AppTheme initWithAppAppearance:themeId:intefaceStyle:baseThemeId:backgroundImageURL:pullToRefreshThemeGhostImageName:pullToRefreshThemeGhostWinkImageName:pullToRefreshThemeBackgroundImageName:] */

undefined1 *
FUN_00605888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_00ac4168;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
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
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 006059f0; end: 006059f7; -[AppTheme appAppearancePreference] */

undefined8 FUN_006059f0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 006059f8; end: 006059ff; -[AppTheme themeId] */

undefined8 FUN_006059f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00605a00; end: 00605a07; -[AppTheme userInterfaceStyle] */

undefined8 FUN_00605a00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00605a08; end: 00605a0f; -[AppTheme baseThemeId] */

undefined8 FUN_00605a08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 00605a10; end: 00605a17; -[AppTheme backgroundImageURL] */

undefined8 FUN_00605a10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00605a18; end: 00605a1f; -[AppTheme pullToRefreshThemeGhostImageName] */

undefined8 FUN_00605a18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00605a20; end: 00605a27; -[AppTheme pullToRefreshThemeGhostWinkImageName] */

undefined8 FUN_00605a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00605a28; end: 00605a2f; -[AppTheme pullToRefreshThemeBackgroundImageName] */

undefined8 FUN_00605a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 00605a30; end: 00605a8f; -[AppTheme .cxx_destruct] */

void FUN_00605a30(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 00605a90; end: 006065c3;  */

void FUN_00605a90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc_init();
  uVar1 = puRam0000000000b62f48;
  puRam0000000000b62f48 = puVar2;
  _objc_release(uVar1);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc(PTR_PTR_00ac3318);
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar2 = puRam0000000000b62f48;
  puVar3 = PTR_PTR_00ac3318;
  _objc_alloc();
  func_0x00784b80();
  func_0x0077e720(puVar2,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar3);
  return;
}



/* Entry: 006065c4; end: 00606753;  */

void FUN_006065c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
  _objc_opt_new();
  uVar1 = puRam0000000000b62f58;
  puRam0000000000b62f58 = puVar4;
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  if (lRam0000000000b62f50 != -1) {
    _dispatch_once(0xb62f50,&PTR___NSConcreteGlobalBlock_00a0a978);
  }
  puVar4 = puRam0000000000b62f48;
  _objc_retain(puRam0000000000b62f48);
  puVar5 = puVar4;
  func_0x00780ea0();
  if (puVar5 != (undefined *)0x0) {
    lVar8 = *plStack_120;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(puVar4);
        }
        puVar2 = puRam0000000000b62f58;
        puVar6 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
        func_0x0077ed20(*(undefined8 *)(lStack_128 + (long)puVar9 * 8));
        func_0x00789c80();
        _objc_retainAutoreleasedReturnValue();
        func_0x0078f4e0(puVar2);
        _objc_release(puVar6);
        puVar9 = puVar9 + 1;
      } while (puVar5 != puVar9);
      puVar5 = puVar4;
      puVar7 = &uStack_130;
      func_0x00780ea0();
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(puVar7);
  puVar5 = puVar4;
  func_0x0078a820();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  puVar6 = (undefined *)puVar7;
  _UIContentSizeCategoryCompareToCategory();
  _objc_release(puVar5);
  if (puVar9 == (undefined *)0x0) {
    _objc_retain(puVar4);
  }
  else {
    iVar3 = 2;
    puVar6 = (undefined *)((long)&MACH_HEADER.ncmds + 1);
    FUN_0040c9a8(2,0x11,0,0);
    if (iVar3 == 0) {
      puVar5 = PTR__OBJC_CLASS___UITraitCollection_00ac3298;
      func_0x00792d00();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UITraitCollection_00ac3298;
      puVar9 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00792d20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
    }
    else {
      _objc_retain(puVar7);
      func_0x00792ca0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = (undefined *)puVar7;
    }
    _objc_release(puVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar4);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0078f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (puVar6,PTR_s_setPreferredContentSizeCategory__00abeaf0,
             *(undefined8 *)((long)puVar7 + 0x20));
  return;
}



/* Entry: 00606754; end: 006068df;  */

void FUN_00606754(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x0078a820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  puVar4 = param_3;
  _UIContentSizeCategoryCompareToCategory();
  _objc_release(puVar2);
  if (puVar3 == (undefined *)0x0) {
    _objc_retain(param_1);
  }
  else {
    iVar1 = 2;
    puVar4 = (undefined *)((long)&MACH_HEADER.ncmds + 1);
    FUN_0040c9a8(2,0x11,0,0);
    if (iVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___UITraitCollection_00ac3298;
      func_0x00792d00();
      _objc_retainAutoreleasedReturnValue();
      param_1 = PTR__OBJC_CLASS___UITraitCollection_00ac3298;
      puVar3 = PTR__OBJC_CLASS___NSArray_00ac2c28;
      func_0x0077f200(PTR__OBJC_CLASS___NSArray_00ac2c28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00792d20(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    else {
      _objc_retain(param_3);
      func_0x00792ca0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = param_3;
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0078f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (puVar4,PTR_s_setPreferredContentSizeCategory__00abeaf0,*(undefined8 *)(param_3 + 0x20))
  ;
  return;
}



/* Entry: 006068e0; end: 006068eb;  */

void FUN_006068e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0078f790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_2,PTR_s_setPreferredContentSizeCategory__00abeaf0,*(undefined8 *)(param_1 + 0x20)
            );
  return;
}


