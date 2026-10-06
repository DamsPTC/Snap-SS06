/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084bf810; end: 1084bf847;  */

void FUN_1084bf810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf848; end: 1084bf853;  */

void FUN_1084bf848(void)

{
  return;
}



/* Entry: 1084bf854; end: 1084bf967; -[SCAdTrackEvent adReport] */

void FUN_1084bf854(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bf984;
  puStack_60 = &UNK_110887690;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4e978,
                      &PTR___NSConcreteGlobalBlock_110a4e998,&PTR___NSConcreteGlobalBlock_110a4e9b8,
                      &PTR___NSConcreteGlobalBlock_110a4e9d8,&PTR___NSConcreteGlobalBlock_110a4e9f8,
                      &PTR___NSConcreteGlobalBlock_110a4ea18,&PTR___NSConcreteGlobalBlock_110a4ea38,
                      &puStack_78,&PTR___NSConcreteGlobalBlock_110a4ea58,
                      &PTR___NSConcreteGlobalBlock_110a4ea78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bf968; end: 1084bf983;  */

void FUN_1084bf968(void)

{
  return;
}



/* Entry: 1084bf984; end: 1084bf9bb;  */

void FUN_1084bf984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bf9bc; end: 1084bf9c3;  */

void FUN_1084bf9bc(void)

{
  return;
}



/* Entry: 1084bf9c4; end: 1084bfad7; -[SCAdTrackEvent reminder] */

void FUN_1084bf9c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bfaf8;
  puStack_60 = &UNK_1108876c0;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4ea98,
                      &PTR___NSConcreteGlobalBlock_110a4eab8,&PTR___NSConcreteGlobalBlock_110a4ead8,
                      &PTR___NSConcreteGlobalBlock_110a4eaf8,&PTR___NSConcreteGlobalBlock_110a4eb18,
                      &PTR___NSConcreteGlobalBlock_110a4eb38,&PTR___NSConcreteGlobalBlock_110a4eb58,
                      &PTR___NSConcreteGlobalBlock_110a4eb78,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_110a4eb98);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bfad8; end: 1084bfaf7;  */

void FUN_1084bfad8(void)

{
  return;
}



/* Entry: 1084bfaf8; end: 1084bfb2f;  */

void FUN_1084bfaf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bfb30; end: 1084bfb33;  */

void FUN_1084bfb30(void)

{
  return;
}



/* Entry: 1084bfb34; end: 1084bfc47; -[SCAdTrackEvent stickers] */

void FUN_1084bfb34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bfc6c;
  puStack_60 = &UNK_110a4e148;
  puStack_48 = puStack_58;
  func_0x00010c0be9e0(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4ebb8,
                      &PTR___NSConcreteGlobalBlock_110a4ebd8,&PTR___NSConcreteGlobalBlock_110a4ebf8,
                      &PTR___NSConcreteGlobalBlock_110a4ec18,&PTR___NSConcreteGlobalBlock_110a4ec38,
                      &PTR___NSConcreteGlobalBlock_110a4ec58,&PTR___NSConcreteGlobalBlock_110a4ec78,
                      &PTR___NSConcreteGlobalBlock_110a4ec98,&PTR___NSConcreteGlobalBlock_110a4ecb8,
                      &puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084bfc48; end: 1084bfc6b;  */

void FUN_1084bfc48(void)

{
  return;
}



/* Entry: 1084bfc6c; end: 1084bfca3;  */

void FUN_1084bfc6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084bfca4; end: 1084bfd87; -[SCAdTouchPoint startPoint] */

undefined1  [16] FUN_1084bfca4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_90 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3010000000;
  pcStack_48 = "";
  uStack_38 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  uStack_40 = *(undefined8 *)PTR__CGPointZero_110347540;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1084bfd88;
  puStack_70 = &UNK_110a4ecd8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x1084bfd98;
  puStack_98 = &UNK_110a4ed08;
  puStack_68 = puStack_90;
  puStack_58 = puStack_90;
  func_0x00010c0c0b40(param_1,param_2,&puStack_88,&puStack_b0);
  auVar1 = *(undefined1 (*) [16])(puStack_58 + 4);
  __Block_object_dispose(&uStack_60,8);
  return auVar1;
}



/* Entry: 1084bfd88; end: 1084bfda7;  */

void FUN_1084bfd88(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 8);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  return;
}



/* Entry: 1084bfda8; end: 1084bfe6f; -[SCAdTouchPoint startLocationXToScreenWidthRatio] */

undefined8 FUN_1084bfda8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bfe70;
  puStack_60 = &UNK_110a4ecd8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1084bfe80;
  puStack_88 = &UNK_110a4ed08;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0c0b40(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bfe70; end: 1084bfe8f;  */

void FUN_1084bfe70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 8) + 0x18) = param_3;
  return;
}



/* Entry: 1084bfe90; end: 1084bff57; -[SCAdTouchPoint startLocationYToScreenHeightRatio] */

undefined8 FUN_1084bfe90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084bff58;
  puStack_60 = &UNK_110a4ecd8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1084bff68;
  puStack_88 = &UNK_110a4ed08;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0c0b40(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084bff58; end: 1084bff77;  */

void FUN_1084bff58(long param_1)

{
  undefined8 in_d3;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_d3;
  return;
}



/* Entry: 1084bff78; end: 1084c0043; -[SCAdTouchPoint endPoint] */

void FUN_1084bff78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084c0048;
  puStack_60 = &UNK_110a4ed08;
  puStack_48 = puStack_58;
  func_0x00010c0c0b40(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4ed58,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c0044; end: 1084c0047;  */

void FUN_1084c0044(void)

{
  return;
}



/* Entry: 1084c0048; end: 1084c0093;  */

void FUN_1084c0048(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_d4;
  undefined8 in_d5;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297180(in_d4,in_d5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084c0094; end: 1084c015f; -[SCAdTouchPoint endLocationXToScreenWidthRatio] */

void FUN_1084c0094(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084c0164;
  puStack_60 = &UNK_110a4ed08;
  puStack_48 = puStack_58;
  func_0x00010c0c0b40(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4ed78,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c0160; end: 1084c0163;  */

void FUN_1084c0160(void)

{
  return;
}



/* Entry: 1084c0164; end: 1084c01ab;  */

void FUN_1084c0164(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_d6;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(in_d6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084c01ac; end: 1084c0277; -[SCAdTouchPoint endLocationYToScreenHeightRatio] */

void FUN_1084c01ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084c027c;
  puStack_60 = &UNK_110a4ed08;
  puStack_48 = puStack_58;
  func_0x00010c0c0b40(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4ed98,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c0278; end: 1084c027b;  */

void FUN_1084c0278(void)

{
  return;
}



/* Entry: 1084c027c; end: 1084c02c3;  */

void FUN_1084c027c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 in_d7;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(in_d7);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1084c02c4; end: 1084c0383; -[SCAdTouchPoint tapSource] */

undefined8 FUN_1084c02c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_70 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1084c0384;
  puStack_50 = &UNK_110a4ecd8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1084c0394;
  puStack_78 = &UNK_110a4ed08;
  puStack_48 = puStack_70;
  puStack_38 = puStack_70;
  func_0x00010c0c0b40(param_1,param_2,&puStack_68,&puStack_90);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084c0384; end: 1084c03a7;  */

void FUN_1084c0384(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 1084c03a8; end: 1084c0457; -[SCAdTouchPoint swipeDuration] */

undefined8 FUN_1084c03a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  uStack_68 = 0x1084c045c;
  puStack_60 = &UNK_110a4ed08;
  puStack_48 = puStack_58;
  func_0x00010c0c0b40(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4edb8,&puStack_78);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084c0458; end: 1084c046f;  */

void FUN_1084c0458(void)

{
  return;
}



/* Entry: 1084c0470; end: 1084c0537; -[SCAdTouchPoint tapSwipeStartTime] */

undefined8 FUN_1084c0470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1084c0538;
  puStack_60 = &UNK_110a4ecd8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1084c0548;
  puStack_88 = &UNK_110a4ed08;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0c0b40(param_1,param_2,&puStack_78,&puStack_a0);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084c0538; end: 1084c055b;  */

void FUN_1084c0538(long param_1)

{
  undefined8 in_d4;
  
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = in_d4;
  return;
}



/* Entry: 1084c055c; end: 1084c0603; -[SCAdTouchPoint swipeSource] */

undefined8 FUN_1084c055c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1084c0608;
  puStack_50 = &UNK_110a4ed08;
  puStack_38 = puStack_48;
  func_0x00010c0c0b40(param_1,param_2,&PTR___NSConcreteGlobalBlock_110a4edd8,&puStack_68);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084c0604; end: 1084c0617;  */

void FUN_1084c0604(void)

{
  return;
}



/* Entry: 1084c0618; end: 1084c070b; -[SCAdSubscribeEvent parserSymbol] */

void FUN_1084c0618(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1084bb2fc;
  uStack_30 = 0x1084bb30c;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c06e0();
  _objc_release(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084c070c; end: 1084c0743;  */

void FUN_1084c070c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110ede9b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1084c0744; end: 1084c0813; -[SCAdSubscribeEvent subType] */

undefined8 FUN_1084c0744(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c06e0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084c0814; end: 1084c0837;  */

void FUN_1084c0814(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1084c0838; end: 1084c09cf; -[SCAdReportEvent subType] */

undefined8 FUN_1084c0838(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0xffffffffffffffff;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf980();
  _objc_release(param_1);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  return uVar1;
}



/* Entry: 1084c09d0; end: 1084c0a7f;  */

void FUN_1084c09d0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1084c0a80; end: 1084c0b7b; -[SCAdReportEvent adHidden] */

undefined1 FUN_1084c0a80(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf980();
  _objc_release(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084c0b7c; end: 1084c0bab;  */

void FUN_1084c0b7c(void)

{
  return;
}



/* Entry: 1084c0bac; end: 1084c0c7f; -[SCAdReminderEvent subType] */

undefined8 FUN_1084c0bac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf8c0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084c0c80; end: 1084c0ca3;  */

void FUN_1084c0c80(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1084c0ca4; end: 1084c0d5f; -[SCAdStickersEvent subType] */

undefined8 FUN_1084c0ca4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c04a0();
  _objc_release(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1084c0d60; end: 1084c0d8f;  */

void FUN_1084c0d60(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 1084c0d90; end: 1084c0f8b;  */

undefined * FUN_1084c0d90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x00010bf1f480(param_2,param_2,&PTR____CFConstantStringClassReference_110ddd098);
  if ((int)param_2 != 0) {
    puVar1 = PTR_PTR_1126d9d48;
                    /* WARNING: Could not recover jumptable at 0x00010bef62d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126d9d48,PTR_s_adViewSourceFrom__11259b258,param_1);
    return puVar1;
  }
  if (param_1 < 0x1e) {
    if (param_1 < 0x10) {
      if (param_1 == 5) {
        return (undefined *)0x3;
      }
      if (param_1 == 8) {
        return (undefined *)0x19;
      }
      if (param_1 == 0xb) {
        return (undefined *)0x17;
      }
    }
    else if (param_1 < 0x17) {
      if (param_1 == 0x10) {
        return (undefined *)0x11;
      }
      if (param_1 == 0x15) {
        return (undefined *)0x22;
      }
    }
    else {
      if (param_1 == 0x17) {
        return (undefined *)0x13;
      }
      if (param_1 == 0x1d) {
        return (undefined *)0x18;
      }
    }
    goto LAB_1084c0eb0;
  }
  switch(param_1) {
  case 0x2b:
    puVar1 = (undefined *)0x6;
    break;
  case 0x2c:
  case 0x53:
    puVar1 = (undefined *)0x1;
    break;
  case 0x2d:
    puVar1 = (undefined *)0x2;
    break;
  case 0x30:
    puVar1 = (undefined *)0x8;
    break;
  case 0x31:
    puVar1 = (undefined *)0x10;
    break;
  case 0x32:
    puVar1 = (undefined *)0xf;
    break;
  case 0x35:
    puVar1 = (undefined *)0xe;
    break;
  case 0x39:
  case 0x56:
    puVar1 = (undefined *)0x1e;
    break;
  case 0x3b:
    puVar1 = (undefined *)0x9;
    break;
  case 0x3c:
    puVar1 = (undefined *)0xb;
    break;
  case 0x3d:
    puVar1 = (undefined *)0xa;
    break;
  case 0x3e:
    puVar1 = (undefined *)0xd;
    break;
  case 0x3f:
    puVar1 = (undefined *)0xc;
    break;
  case 0x45:
    puVar1 = (undefined *)0x14;
    break;
  case 0x48:
    puVar1 = (undefined *)0x1d;
    break;
  case 0x49:
  case 0x57:
  case 0x5f:
    puVar1 = (undefined *)0x16;
    break;
  case 0x50:
    puVar1 = (undefined *)0x1c;
    break;
  case 0x5b:
    puVar1 = (undefined *)0x20;
    break;
  case 0x62:
  case 0x65:
    puVar1 = (undefined *)0x1f;
    break;
  default:
    if (param_1 == 0x22) {
      return (undefined *)0x12;
    }
    if (param_1 == 0x1e) {
      return (undefined *)0x4;
    }
  case 0x2e:
  case 0x2f:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x3a:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x46:
  case 0x47:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x51:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x60:
  case 0x61:
  case 99:
  case 100:
LAB_1084c0eb0:
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 1084c0f8c; end: 1084c0f9b; +[SCLensAdTrackHelpers adTrackSponsoredInfoFromLensSponsoredType:] */

int FUN_1084c0f8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 - 2U < 10) {
    iVar1 = (int)(param_3 - 2U) + 1;
  }
  return iVar1;
}



/* Entry: 1084c0f9c; end: 1084c109b; +[SCLensSponsoredHelpers adIdFromLens:] */

void FUN_1084c0f9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2813a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0x10) {
    puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
    lVar1 = param_3;
    func_0x00010c2813a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    func_0x00010c057e80(puVar4,param_2,lVar3);
    puVar5 = puVar4;
    func_0x00010bdc3580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1084c109c; end: 1084c112b;  */

undefined * FUN_1084c109c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372bb40 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e20(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ede9f8,
                        &UNK_10df30fe0,&UNK_10df30ffc,2,FUN_1084c112c,0,&UNK_10df31004);
    do {
      if (puRam000000011372bb40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372bb40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372bb40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372bb40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372bb40;
}



/* Entry: 1084c112c; end: 1084c1137;  */

bool FUN_1084c112c(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1084c1138; end: 1084c119f; +[SCAdsInitToTargetingFields descriptor] */

void FUN_1084c1138(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba03f0,
                        &PTR____CFConstantStringClassReference_110edea18,
                        &PTR_s_snapchat_ads_request_schema_11325d920,&PTR_s_application_11325d938,2,
                        0x18,0x1c);
    puRam000000011372bb48 = puVar1;
  }
  return;
}



/* Entry: 1084c11a0; end: 1084c1207; +[SCAdsClientToTargetingFields descriptor] */

void FUN_1084c11a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb50 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0440,
                        &PTR____CFConstantStringClassReference_110edea38,
                        &PTR_s_snapchat_ads_request_schema_11325d920,&PTR_DAT_11325d978,2,0x18,0x1c)
    ;
    puRam000000011372bb50 = puVar1;
  }
  return;
}



/* Entry: 1084c1208; end: 1084c126f; +[SCAdsOnDeviceRequest descriptor] */

void FUN_1084c1208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba0490,
                        &PTR____CFConstantStringClassReference_110edea58,
                        &PTR_s_snapchat_ads_request_schema_11325d920,&PTR_DAT_11325d9b8,3,0x20,0x1c)
    ;
    puRam000000011372bb58 = puVar1;
  }
  return;
}



/* Entry: 1084c1270; end: 1084c135f; +[SCAdsOnDevicePublicKey descriptor] */

void FUN_1084c1270(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372bb60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ba04e0,
                        &PTR____CFConstantStringClassReference_110edea78,
                        &PTR_s_snapchat_ads_request_schema_11325d920,&PTR_DAT_11325da18,3,0x18,0x1c)
    ;
    puRam000000011372bb60 = puVar1;
  }
  return;
}



/* Entry: 1084c1360; end: 1084c1687;  */

void FUN_1084c1360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_80;
  undefined8 uStack_68;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_2);
    lVar1 = param_1;
    func_0x00010c23d880();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uStack_80 = (undefined *)0x0;
    }
    else {
      uStack_80 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010c23d880(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c057e80();
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c23d9a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08fa60();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      uStack_68 = (undefined *)0x0;
    }
    else {
      uStack_68 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      _objc_alloc();
      lVar1 = param_1;
      func_0x00010c23d9a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      func_0x00010c057e80();
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c23d800();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c23c2e0(param_1);
    lVar3 = lVar1;
    func_0x0001084c12d8(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c23d960();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c23c2e0(param_1);
    lVar4 = lVar1;
    func_0x0001084c12d8(lVar1,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar9 = PTR_PTR_1126d6238;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c23d820();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    lVar2 = param_1;
    func_0x00010c23d900();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    lVar5 = param_1;
    func_0x00010c23d920(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c296d80();
    lVar6 = param_1;
    func_0x00010c23d940(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010c23d9c0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010bef1fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff1980(puVar9);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(uStack_68);
    _objc_release(uStack_80);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1084c1688; end: 1084c180f;  */

void FUN_1084c1688(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 == 0) {
    ppuVar7 = (undefined **)0x0;
    goto LAB_1084c17c4;
  }
  puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649e0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
LAB_1084c17b0:
    ppuVar7 = (undefined **)0x0;
  }
  else {
    ppuVar3 = (undefined **)PTR_PTR_1126d9d50;
    func_0x00010c0f40e0();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar3 == (undefined **)0x0) goto LAB_1084c17b0;
    ppuVar7 = ppuVar3;
    FUN_1084c1360();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    ppuVar4 = ppuVar7;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0da520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
  }
  _objc_release(puVar2);
LAB_1084c17c4:
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    iVar1 = 2;
    func_0x000107c31924(2,0x10,6,0);
    ppuVar3 = (undefined **)0x0;
    if (iVar1 != 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e4ecb8;
    }
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    ppuVar7 = &PTR____CFConstantStringClassReference_110edea98;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar7 = ppuVar3;
    }
    _objc_retain(ppuVar7);
    iVar1 = 2;
    func_0x000107c31924(2,0x10,6,0);
    if ((iVar1 != 0) && (ppuVar3 = ppuVar7, func_0x00010c08fa60(), ppuVar3 == (undefined **)0x0)) {
      _objc_release(ppuVar7);
      ppuVar7 = &PTR____CFConstantStringClassReference_110e4ecb8;
    }
    ppuVar3 = ppuVar7;
    func_0x00010c08fa60();
    if (ppuVar3 == (undefined **)0x0) {
      _objc_release(ppuVar7);
      ppuVar7 = &PTR____CFConstantStringClassReference_110edeab8;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1084c1810; end: 1084c1997;  */

void FUN_1084c1810(void)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  iVar1 = 2;
  func_0x000107c31924(2,0x10,6,0);
  ppuVar3 = (undefined **)0x0;
  if (iVar1 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e4ecb8;
  }
  ppuVar2 = ppuVar3;
  func_0x00010c08fa60();
  ppuVar4 = &PTR____CFConstantStringClassReference_110edea98;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar4 = ppuVar3;
  }
  _objc_retain(ppuVar4);
  iVar1 = 2;
  func_0x000107c31924(2,0x10,6,0);
  if ((iVar1 != 0) && (ppuVar3 = ppuVar4, func_0x00010c08fa60(), ppuVar3 == (undefined **)0x0)) {
    _objc_release(ppuVar4);
    ppuVar4 = &PTR____CFConstantStringClassReference_110e4ecb8;
  }
  ppuVar3 = ppuVar4;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    _objc_release(ppuVar4);
    ppuVar4 = &PTR____CFConstantStringClassReference_110edeab8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 1084c1998; end: 1084c1c3b;  */

void FUN_1084c1998(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = &puStack_130;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar14 = *plStack_120;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lVar14) {
          _objc_enumerationMutation(param_1);
        }
        ppuVar12 = *(undefined ***)(lStack_128 + lVar15 * 8);
        _objc_retain(ppuVar12);
        ppuVar2 = ppuVar12;
        func_0x00010bef60a0();
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        ppuVar3 = ppuVar12;
        if (ppuVar2 == (undefined **)0xa) {
          func_0x00010bf20500();
          _objc_retainAutoreleasedReturnValue();
          ppuVar2 = ppuVar3;
          func_0x00010bf3fc80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar2;
          func_0x00010bf68c60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010bf054e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar6 = ppuVar5;
          func_0x00010bf05300();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar5);
          _objc_release(ppuVar4);
          _objc_release(ppuVar2);
LAB_1084c1b68:
          _objc_release(ppuVar3);
          ppuVar2 = ppuVar6;
          func_0x00010c08fa60();
          puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          if (ppuVar2 == (undefined **)0x0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            ppuVar7 = ppuVar6;
            func_0x00010c067fc0();
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
          }
        }
        else {
          if (ppuVar2 == (undefined **)0x6) {
            func_0x00010bf67c00();
            _objc_retainAutoreleasedReturnValue();
            ppuVar6 = ppuVar3;
            func_0x00010bf05300();
            _objc_retainAutoreleasedReturnValue();
            goto LAB_1084c1b68;
          }
          ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar2 == (undefined **)0x1) {
            ppuVar2 = ppuVar12;
            func_0x00010bf054e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar2;
            func_0x00010bf05300();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = ppuVar3;
            func_0x00010c067fc0();
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar3);
            _objc_release(ppuVar2);
          }
          else {
            puVar13 = (undefined *)0x0;
          }
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar12);
        if (puVar13 != (undefined *)0x0) goto LAB_1084c1bf4;
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar15);
      ppuVar7 = &puStack_130;
      lVar1 = param_1;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  puVar13 = (undefined *)0x0;
LAB_1084c1bf4:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(param_2);
    _objc_retain(ppuVar7);
    lVar1 = param_1;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      func_0x00010bf649e0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar8;
      func_0x00010c08fa60();
      if (puVar13 == (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        puVar9 = PTR_PTR_1126d9d50;
        func_0x00010c0f40e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 == (undefined *)0x0) {
          puVar13 = (undefined *)0x0;
        }
        else {
          puVar13 = PTR_PTR_1126d9d58;
          _objc_alloc_init(PTR_PTR_1126d9d58);
          func_0x00010c202d60();
          func_0x00010c1aede0(puVar13);
          ppuVar2 = ppuVar7;
          _objc_retainAutorelease();
          func_0x00010bf25f00();
          if ((ppuVar2 != (undefined **)0x0) &&
             (ppuVar2 = ppuVar7, func_0x00010c08fa60(), ppuVar2 == (undefined **)0x10)) {
            puVar10 = PTR__OBJC_CLASS___NSUUID_1126b0270;
            _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
            _objc_retainAutorelease(ppuVar7);
            func_0x00010bf25f00();
            func_0x00010c057e80(puVar10);
            puVar11 = puVar10;
            func_0x00010bdc3580();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c163720(puVar13);
            _objc_release(puVar11);
            _objc_release(puVar10);
          }
        }
        _objc_release(puVar9);
      }
      _objc_release(puVar8);
    }
    _objc_release(ppuVar7);
    _objc_release(param_2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1084c1c3c; end: 1084c1dbf;  */

void FUN_1084c1c3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649e0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    func_0x00010c08fa60();
    if (puVar6 == (undefined *)0x0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126d9d50;
      func_0x00010c0f40e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar6 = PTR_PTR_1126d9d58;
        _objc_alloc_init(PTR_PTR_1126d9d58);
        func_0x00010c202d60();
        func_0x00010c1aede0(puVar6);
        lVar1 = param_3;
        _objc_retainAutorelease();
        func_0x00010bf25f00();
        if ((lVar1 != 0) && (lVar1 = param_3, func_0x00010c08fa60(), lVar1 == 0x10)) {
          puVar4 = PTR__OBJC_CLASS___NSUUID_1126b0270;
          _objc_alloc(PTR__OBJC_CLASS___NSUUID_1126b0270);
          _objc_retainAutorelease(param_3);
          func_0x00010bf25f00();
          func_0x00010c057e80(puVar4);
          puVar5 = puVar4;
          func_0x00010bdc3580();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c163720(puVar6);
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
      }
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1084c1dc0; end: 1084c225f;  */

void FUN_1084c1dc0(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  double dVar24;
  undefined *puStack_268;
  undefined *puStack_260;
  
  lVar20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lVar3 = param_1;
  func_0x0001084c63d4();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf529e0();
  lVar4 = lVar4 + -1;
  if (-1 < lVar4) {
    do {
      lVar5 = param_1;
      func_0x00010bef52c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      lVar5 = param_1;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf5ac40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar5);
      lVar7 = lVar6;
      func_0x00010bf5ac40();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar7;
      lVar5 = param_1;
      func_0x0001084c6210();
      _objc_retainAutoreleasedReturnValue();
      if (lVar9 == 0) {
        puVar22 = (undefined *)0x0;
      }
      else {
        puVar10 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
        _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
        lVar11 = lVar9;
        func_0x00010c096c80();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar11;
        func_0x00010bf52a60();
        lVar15 = lRam0000000000000000;
        while (lVar12 != 0) {
          lVar23 = 0;
          do {
            if (lRam0000000000000000 != lVar15) {
              _objc_enumerationMutation(lVar11);
            }
            uVar21 = *(undefined8 *)(lVar23 * 8);
            puVar22 = PTR_PTR_1126d9d60;
            _objc_alloc(PTR_PTR_1126d9d60);
            uVar13 = uVar21;
            func_0x00010c14f6c0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c14f6e0(uVar21);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c041980(puVar22);
            _objc_release(uVar21);
            _objc_release(uVar13);
            func_0x00010befa120(puVar10);
            _objc_release(puVar22);
            lVar23 = lVar23 + 1;
          } while (lVar12 != lVar23);
          lVar12 = lVar11;
          func_0x00010bf52a60();
        }
        _objc_release(lVar11);
        puVar22 = PTR_PTR_1126d9d68;
        _objc_alloc();
        func_0x00010c024c80();
        _objc_release(puVar10);
      }
      puVar14 = PTR_PTR_1126d9d70;
      _objc_alloc();
      lVar12 = lVar3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar6;
      func_0x00010bf20ee0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar6;
      func_0x00010bf20f80();
      _objc_retainAutoreleasedReturnValue();
      lVar23 = param_1;
      func_0x00010bef2c20();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = param_1;
      func_0x00010c099300();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126afec0;
      lVar17 = lVar6;
      func_0x00010c242040();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar17;
      func_0x00010c274c60();
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010c0c4bc0();
      dVar24 = (double)lVar19;
      func_0x00010c0cd480(dVar24,puVar10);
      lVar19 = lVar6;
      func_0x00010c0f6400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c047da0(dVar24);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar23);
      _objc_release(lVar11);
      _objc_release(lVar15);
      _objc_release(lVar12);
      func_0x00010befa120(puVar2);
      _objc_release(puVar14);
      _objc_release(puVar22);
      _objc_release(lVar9);
      _objc_release(lVar7);
      _objc_release(puVar8);
      _objc_release(lVar6);
      bVar1 = 0 < lVar4;
      lVar4 = lVar4 + -1;
    } while (bVar1);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar20) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(lVar5);
    lVar4 = param_1;
    func_0x00010c15ed20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    FUN_1084c1dc0(param_1,&PTR____CFConstantStringClassReference_110daafd8,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c258fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar4;
    func_0x00010c26ec00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar20;
    func_0x00010c08fa60();
    puStack_260 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar6 == 0) {
      puStack_260 = (undefined *)0x0;
    }
    else {
      lVar6 = param_1;
      func_0x00010c258fc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c26ec00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar20);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010c258fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar4;
    func_0x00010c26ece0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar20;
    func_0x00010c08fa60();
    puStack_268 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar6 == 0) {
      puStack_268 = (undefined *)0x0;
    }
    else {
      lVar6 = param_1;
      func_0x00010c258fc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c26ece0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
    }
    _objc_release(lVar20);
    _objc_release(lVar4);
    lVar4 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    lVar4 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    func_0x00010bef60a0(lVar20);
    func_0x00010bef4240(lVar20);
    lVar5 = param_1;
    func_0x00010c258fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c26eae0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar4;
    func_0x00010c118220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126d9810;
    _objc_alloc(PTR_PTR_1126d9810);
    lVar4 = param_1;
    func_0x00010c258fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26ebc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010c15ed20(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar9;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar12;
    func_0x00010bf20f80();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = param_1;
    func_0x00010bef2c20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01a340(puVar8);
    _objc_release(lVar11);
    _objc_release(lVar15);
    _objc_release(lVar12);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar22 = PTR_PTR_1126c6d78;
    _objc_opt_new(PTR_PTR_1126c6d78);
    func_0x00010c2ba700();
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c6d88;
    func_0x00010c118280(PTR_PTR_1126c6d88);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ba3c0(puVar22);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar2);
    func_0x00010c2b7a80(0x3f800000,puVar22);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = puVar22;
    func_0x00010bf21f60(puVar22);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar22);
    _objc_release(puVar8);
    _objc_release(lVar7);
    _objc_release(lVar20);
    _objc_release(puStack_268);
    _objc_release(puStack_260);
    _objc_release(lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c2260; end: 1084c26af;  */

void FUN_1084c2260(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  func_0x00010c15ed20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_1084c1dc0(param_1,&PTR____CFConstantStringClassReference_110daafd8,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c258fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26ec00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  puStack_70 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar4 == 0) {
    puStack_70 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c258fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26ec00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c258fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c26ece0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c08fa60();
  puStack_78 = PTR__OBJC_CLASS___NSURL_1126ae598;
  if (lVar4 == 0) {
    puStack_78 = (undefined *)0x0;
  }
  else {
    lVar4 = param_1;
    func_0x00010c258fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c26ece0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar6 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bef60a0(lVar3);
  func_0x00010bef4240(lVar3);
  lVar1 = param_1;
  func_0x00010c258fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c26eae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c118220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(uVar6);
  puVar8 = PTR_PTR_1126d9810;
  _objc_alloc(PTR_PTR_1126d9810);
  lVar1 = param_1;
  func_0x00010c258fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010c26ebc0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c15ed20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar10;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1;
  func_0x00010bef2c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a340(puVar8);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  puVar13 = PTR_PTR_1126c6d78;
  _objc_opt_new(PTR_PTR_1126c6d78);
  func_0x00010c2ba700();
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126c6d88;
  func_0x00010c118280(PTR_PTR_1126c6d88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ba3c0(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar14);
  func_0x00010c2b7a80(puVar13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf21f60(puVar13);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar8);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release(puStack_78);
  _objc_release(puStack_70);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1084c26b0; end: 1084c2797; -[SCAdMediaWebviewAttachment url] */

void FUN_1084c26b0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b8cf0;
  func_0x00010c0f0460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010c2a4740(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  else {
    puVar3 = PTR_PTR_1126c7d48;
    func_0x00010c082440(PTR_PTR_1126c7d48,param_2,puVar1);
    puVar2 = puVar1;
    if ((int)puVar3 != 0) {
      puVar2 = PTR_PTR_1126c7d48;
      func_0x00010bf93280(PTR_PTR_1126c7d48,param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
    _objc_retain(puVar2);
    puVar1 = puVar2;
  }
  puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084c2798; end: 1084c283f; -[SCAdMediaReminderItemAttachment iconUrl] */

void FUN_1084c2798(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf67c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c2a4760(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c116a00();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf67c00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfe59a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1084c2840; end: 1084c295f;  */

void FUN_1084c2840(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5ed8);
  return;
}



/* Entry: 1084c2960; end: 1084c296b;  */

void FUN_1084c2960(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfda7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_hasPrefix__1125d43b0,&PTR____CFConstantStringClassReference_110edeb38);
  return;
}



/* Entry: 1084c296c; end: 1084c2a43;  */

void FUN_1084c296c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dc5ed8);
  return;
}



/* Entry: 1084c2a44; end: 1084c2bf3;  */

void FUN_1084c2a44(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain();
  func_0x00010c0df780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c2bf4; end: 1084c2c03;  */

void FUN_1084c2bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001084c2c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1084c2c04; end: 1084c2ccb;  */

void FUN_1084c2c04(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain();
  func_0x00010c0c5800();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    lVar3 = lVar1;
    func_0x00010c0c5340(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(lVar3);
    puVar4 = puVar2;
    func_0x00010c08fa60();
    if (puVar4 != (undefined *)0x0) {
      func_0x00010befa120(param_1);
    }
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084c2ccc; end: 1084c3323;  */

void FUN_1084c2ccc(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  code *pcStack_2d0;
  undefined *puStack_2c8;
  long lStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined8 uStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_238 = &uStack_240;
  uStack_240 = 0;
  uStack_230 = 0x3032000000;
  pcStack_228 = FUN_1084c3324;
  uStack_220 = 0x1084c3334;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = &uStack_270;
  uStack_270 = 0;
  uStack_260 = 0x3032000000;
  pcStack_258 = FUN_1084c3324;
  uStack_250 = 0x1084c3334;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_218 = puVar1;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_298 = &uStack_2a0;
  uStack_2a0 = 0;
  uStack_290 = 0x3032000000;
  pcStack_288 = FUN_1084c3324;
  uStack_280 = 0x1084c3334;
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  puStack_248 = puVar2;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = puVar1;
  FUN_1084c333c(param_1,param_2,param_3,puStack_238[5],puStack_268[5],puStack_298[5]);
  lVar11 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010c0c6c20();
  _objc_release(lVar11);
  if (lVar3 != 3) {
    lVar11 = puStack_238[5];
    func_0x00010bf51e00(lVar11);
    uVar4 = puStack_298[5];
    func_0x00010bf51e00(uVar4);
    uVar13 = puStack_268[5];
    func_0x00010bf51e00(uVar13);
    (**(code **)(param_6 + 0x10))(param_6,lVar11,uVar4,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar4);
    goto LAB_1084c3214;
  }
  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d8 = 0xc2000000;
  pcStack_2d0 = FUN_1084c404c;
  puStack_2c8 = &UNK_110a4efb0;
  puStack_2b8 = &uStack_240;
  puStack_2b0 = &uStack_270;
  _objc_retain(param_6);
  puStack_2a8 = &uStack_2a0;
  lStack_2c0 = param_6;
  _objc_retain(param_4);
  _objc_retain(&puStack_2e0);
  puVar1 = PTR_PTR_1126bdd18;
  lVar11 = param_1;
  func_0x00010c274c60(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar11;
  func_0x00010bf451a0();
  _objc_retainAutoreleasedReturnValue();
  uStack_188 = 0;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uStack_188;
  _objc_retain();
  _objc_release(lVar3);
  _objc_release(lVar11);
  if (puVar1 == (undefined *)0x0) {
    func_0x0001084c2ae8(PTR____NSArray0__struct_11034ab48,0,&puStack_2e0);
  }
  else {
    func_0x00010c26b160();
    puVar2 = param_4;
    func_0x00010c067f60();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    puVar6 = puVar1;
    func_0x00010c084fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf52a60();
    if (puVar7 != (undefined *)0x0) {
      lVar11 = *plStack_1c0;
      do {
        puVar12 = (undefined *)0x0;
        do {
          if (*plStack_1c0 != lVar11) {
            _objc_enumerationMutation(puVar6);
          }
          lVar8 = *(long *)(lStack_1c8 + (long)puVar12 * 8);
          lStack_208 = 0;
          uStack_210 = 0;
          uStack_1f8 = 0;
          plStack_200 = (long *)0x0;
          uStack_1e8 = 0;
          uStack_1f0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = 0;
          func_0x00010c0c4040();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar8;
          func_0x00010bf52a60();
          if (lVar3 != 0) {
            lVar15 = *plStack_200;
            do {
              lVar14 = 0;
              do {
                if (*plStack_200 != lVar15) {
                  _objc_enumerationMutation(lVar8);
                }
                uVar13 = *(undefined8 *)(lStack_208 + lVar14 * 8);
                puVar9 = puVar5;
                func_0x00010bf529e0();
                if (puVar2 <= puVar9) goto LAB_1084c3104;
                func_0x00010bfe6ac0(uVar13);
                _objc_retainAutoreleasedReturnValue();
                uVar10 = uVar13;
                func_0x00010c12fc80();
                _objc_retainAutoreleasedReturnValue();
                FUN_1084c2c04(puVar5,uVar10);
                _objc_release(uVar10);
                _objc_release(uVar13);
                lVar14 = lVar14 + 1;
              } while (lVar3 != lVar14);
              lVar3 = lVar8;
              func_0x00010bf52a60();
            } while (lVar3 != 0);
          }
LAB_1084c3104:
          _objc_release(lVar8);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar7);
        puVar7 = puVar6;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined *)0x0);
    }
    _objc_release(puVar6);
    puVar6 = puVar1;
    func_0x00010c0c41e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar7 = puVar1;
      func_0x00010c0c41e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar7;
      func_0x00010bfd9020();
      if ((int)puVar12 != 0) {
        puVar12 = puVar5;
        func_0x00010bf529e0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        if (puVar2 <= puVar12) goto LAB_1084c31d8;
        puVar6 = puVar1;
        func_0x00010c0c41e0(puVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0c62c0();
        _objc_retainAutoreleasedReturnValue();
        FUN_1084c2c04(puVar5,puVar7);
      }
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
LAB_1084c31d8:
    func_0x0001084c2ae8(puVar5,puVar2,&puStack_2e0);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  _objc_release(uVar4);
  _objc_release(&puStack_2e0);
  _objc_release(param_4);
  lVar11 = lStack_2c0;
LAB_1084c3214:
  _objc_release(lVar11);
  __Block_object_dispose(&uStack_2a0,8);
  _objc_release(puStack_278);
  __Block_object_dispose(&uStack_270,8);
  _objc_release(puStack_248);
  __Block_object_dispose(&uStack_240,8);
  _objc_release(puStack_218);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_2a0,8);
  __Block_object_dispose(&uStack_270,8);
  lVar11 = 8;
  __Block_object_dispose(&uStack_240);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(lVar11 + 0x28) = 0;
  return;
}



/* Entry: 1084c3324; end: 1084c333b;  */

void FUN_1084c3324(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1084c333c; end: 1084c404b;  */

void FUN_1084c333c(undefined *param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_b8;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010c274c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    puVar3 = puVar2;
    func_0x00010c0c6c20();
    if (puVar3 == (undefined *)0x4) {
      puVar3 = puVar2;
      func_0x00010c0feac0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      func_0x00010c0fed40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar5 != (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c0feac0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c0fed40();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010beec820();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        goto LAB_1084c3768;
      }
    }
    else {
      puVar5 = puVar2;
      if (puVar3 == (undefined *)0x2) {
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_6);
        puVar3 = puVar5;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        if (puVar6 != (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c299160(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4);
          _objc_release(puVar7);
          _objc_release(puVar6);
          func_0x00010befa120(param_6);
          _objc_release(puVar3);
        }
        puVar3 = puVar5;
        func_0x00010bfb1260();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        if (puVar6 != (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010bfb1260(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar6;
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4);
          _objc_release(puVar7);
          _objc_release(puVar6);
          func_0x00010befa120(param_5);
          _objc_release(puVar3);
        }
        _objc_release(param_6);
        _objc_release(param_5);
        puVar7 = param_4;
        puVar6 = param_3;
        puVar3 = puVar5;
LAB_1084c3768:
        _objc_release(puVar7);
      }
      else {
        if (puVar3 != (undefined *)0x1) goto LAB_1084c378c;
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        puVar7 = puVar5;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar6 = param_4;
        puVar3 = param_3;
        if (puVar7 != (undefined *)0x0) {
          puVar7 = puVar5;
          func_0x00010c28f340(puVar5);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4);
          _objc_release(puVar4);
          goto LAB_1084c3768;
        }
      }
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar5);
    }
LAB_1084c378c:
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  puVar2 = param_1;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010bf20540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    puVar3 = puVar2;
    func_0x00010bef60a0();
    puVar4 = puVar2;
    puVar5 = param_4;
    puVar6 = param_5;
    puVar7 = param_3;
    if ((long)puVar3 < 10) {
      if (puVar3 == (undefined *)0x1) {
        func_0x00010bf054e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        puVar3 = puVar4;
        func_0x00010bfe5400();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        if (puVar21 != (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar4;
          func_0x00010bfe5400(puVar4);
          _objc_retainAutoreleasedReturnValue();
LAB_1084c3a98:
          puVar11 = puVar21;
          func_0x00010c28f340();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(param_4);
          _objc_release(puVar11);
          _objc_release(puVar21);
          func_0x00010befa120(param_5);
          _objc_release(puVar3);
        }
LAB_1084c3ae0:
        puVar3 = puVar4;
        func_0x00010c151b00(puVar4);
        _objc_retainAutoreleasedReturnValue();
        FUN_1084c4540();
LAB_1084c3b10:
        _objc_release(puVar3);
        goto LAB_1084c3b18;
      }
      if (puVar3 == (undefined *)0x6) {
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        puVar3 = puVar4;
        func_0x00010bfe59a0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar3;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar3);
        if (puVar21 != (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          puVar21 = puVar4;
          func_0x00010bfe59a0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1084c3a98;
        }
        goto LAB_1084c3ae0;
      }
    }
    else {
      if (puVar3 == (undefined *)0xa) {
        func_0x00010bf3fc80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        puVar3 = puVar4;
        func_0x00010c084fc0();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar3;
        func_0x00010bf529e0();
        _objc_release(puVar3);
        puVar3 = param_5;
        puVar5 = param_3;
        puVar6 = param_4;
        puVar7 = puVar4;
        if (puVar21 != (undefined *)0x0) {
          puVar21 = puVar4;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = puVar21;
          func_0x00010bf529e0();
          _objc_release(puVar21);
          if (puVar11 != (undefined *)0x0) {
            puVar21 = (undefined *)0x0;
            do {
              puVar11 = puVar4;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010c0dfd40();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              puVar11 = puVar12;
              func_0x00010c0844c0();
              _objc_retainAutoreleasedReturnValue();
              puVar13 = puVar11;
              func_0x00010c28f340();
              _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(puVar11);
              if (puVar13 != (undefined *)0x0) {
                puVar11 = param_3;
                FUN_1084c2a44(param_3,puVar21);
                _objc_retainAutoreleasedReturnValue();
                puVar13 = puVar12;
                func_0x00010c0844c0();
                _objc_retainAutoreleasedReturnValue();
                puVar14 = puVar13;
                func_0x00010c28f340();
                _objc_retainAutoreleasedReturnValue();
                puVar15 = puVar12;
                func_0x00010bf89540();
                if (puVar15 == (undefined *)0x0) {
                  puStack_b8 = PTR_PTR_1126b8c98;
                  func_0x00010c0f0400();
                  _objc_retainAutoreleasedReturnValue();
                  puVar16 = puStack_b8;
                  func_0x00010bf529e0();
                  bVar1 = puVar16 != (undefined *)0x0;
                }
                else {
                  bVar1 = true;
                }
                puVar16 = puVar4;
                func_0x00010c084fc0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf529e0();
                puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
                func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c14e120();
                _objc_release(puVar17);
                _objc_retain(puVar14);
                puVar17 = puVar14;
                func_0x00010c08fa60();
                puVar20 = puVar14;
                if ((puVar17 == (undefined *)0x0) || (!bVar1)) {
                  _objc_retain(puVar14);
                }
                else {
                  puVar17 = puVar14;
                  func_0x00010bf64920();
                  _objc_retainAutoreleasedReturnValue();
                  puVar18 = puVar17;
                  func_0x00010c08fa60();
                  if (puVar18 == (undefined *)0x0) {
                    _objc_retain(puVar14);
                  }
                  else {
                    puVar18 = puVar17;
                    func_0x00010bf15da0();
                    _objc_retainAutoreleasedReturnValue();
                    puVar19 = puVar18;
                    func_0x00010c08fa60();
                    if (puVar19 == (undefined *)0x0) {
                      _objc_retain(puVar14);
                    }
                    else {
                      puVar19 = puVar18;
                      func_0x00010c25cfc0();
                      _objc_retainAutoreleasedReturnValue();
                      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar19);
                    }
                    _objc_release(puVar18);
                  }
                  _objc_release(puVar17);
                }
                _objc_release(puVar14);
                func_0x00010c1d0640(param_4);
                _objc_release(puVar20);
                _objc_release(puVar16);
                if (puVar15 == (undefined *)0x0) {
                  _objc_release(puStack_b8);
                }
                _objc_release(puVar14);
                _objc_release(puVar13);
                func_0x00010befa120(param_5);
                _objc_release(puVar11);
              }
              _objc_release(puVar12);
              puVar21 = puVar21 + 1;
              puVar11 = puVar4;
              func_0x00010c084fc0();
              _objc_retainAutoreleasedReturnValue();
              puVar12 = puVar11;
              func_0x00010bf529e0();
              _objc_release(puVar11);
            } while (puVar21 < puVar12);
          }
        }
        goto LAB_1084c3b10;
      }
      if (puVar3 != (undefined *)0x14) goto LAB_1084c3b40;
      func_0x00010c1293e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      puVar3 = puVar4;
      func_0x00010c084160();
      _objc_retainAutoreleasedReturnValue();
      puVar21 = puVar3;
      func_0x00010bfe5be0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar3);
      if (puVar21 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar4;
        func_0x00010c084160(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar11 = puVar21;
        func_0x00010bfe5be0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_4);
        _objc_release(puVar11);
        _objc_release(puVar21);
        func_0x00010befa120(param_5);
        goto LAB_1084c3b10;
      }
LAB_1084c3b18:
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar7);
      _objc_release(puVar4);
    }
LAB_1084c3b40:
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  lVar8 = param_2;
  func_0x00010c116960();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 != 0) {
    lVar10 = param_2;
    func_0x00010c116a20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar9);
    _objc_release(lVar8);
    if (lVar10 == 0) goto LAB_1084c3c48;
    lVar8 = param_2;
    func_0x00010c116960(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_2;
    func_0x00010c116a20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(param_4);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    lVar8 = param_2;
    func_0x00010c116a20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_5);
  }
  _objc_release(lVar8);
LAB_1084c3c48:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084c404c; end: 1084c41db;  */

void FUN_1084c404c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar11 = 0x10;
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar13 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      func_0x00010befa120(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
      lVar13 = lVar13 + 1;
    } while (lVar2 != lVar13);
    uVar11 = 0x10;
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf51e00();
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
  func_0x00010bf51e00();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00();
  uVar8 = uVar3;
  uVar9 = uVar4;
  uVar10 = uVar5;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(uVar11);
  _objc_retain(uVar10);
  _objc_retain(uVar9);
  _objc_retain(uVar8);
  _objc_retain(param_2);
  func_0x00010bf71e20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084c333c(param_2,uVar8,uVar9,puVar6,uVar11,0);
  _objc_release(uVar11);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(param_2);
  puVar7 = puVar6;
  func_0x00010bf002e0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(uVar10);
  _objc_release(uVar10);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1084c41dc; end: 1084c42cb;  */

void FUN_1084c41dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084c333c(param_1,param_2,param_3,puVar1,param_5,0);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf002e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160(param_4);
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1084c42cc; end: 1084c437f;  */

void FUN_1084c42cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_1084c333c(param_1,param_2,param_3,puVar1,0,0);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar2 = puVar1;
  func_0x00010bf002e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c4380; end: 1084c44f3;  */

void FUN_1084c4380(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
LAB_1084c442c:
    lVar4 = 0;
    goto LAB_1084c44d4;
  }
  lVar1 = param_1;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c6c20();
  _objc_release(lVar1);
  lVar1 = param_1;
  if (lVar2 == 4) {
    func_0x00010c274c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0feac0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fed40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beec820();
    _objc_retainAutoreleasedReturnValue();
LAB_1084c44b8:
    _objc_release(lVar3);
  }
  else {
    if (lVar2 == 2) {
      func_0x00010c274c60(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1084c44b8;
    }
    if (lVar2 != 1) goto LAB_1084c442c;
    func_0x00010c274c60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
LAB_1084c44d4:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1084c44f4; end: 1084c453f;  */

void FUN_1084c44f4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b08b8;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c0295e0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084c4540; end: 1084c46e7;  */

void FUN_1084c4540(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar5 = param_1;
  func_0x00010bf529e0();
  if (uVar5 != 0) {
    iVar6 = 0;
    uVar5 = 0;
    do {
      uVar1 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (uVar2 != 0) {
        _objc_retain(param_2);
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        _objc_release(puVar3);
        uVar2 = uVar1;
        func_0x00010c28f340(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(param_3);
        _objc_release(uVar2);
        func_0x00010befa120(param_4);
        iVar6 = iVar6 + 1;
        _objc_release(puVar4);
      }
      _objc_release(uVar1);
      uVar5 = uVar5 + 1;
      uVar1 = param_1;
      func_0x00010bf529e0();
    } while ((uVar5 < uVar1) && (iVar6 < 2));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084c46e8; end: 1084c47bb;  */

void FUN_1084c46e8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c0844c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (puVar2 == (undefined *)0x0) {
    func_0x00010bf89540(param_2);
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (puVar2 == (undefined *)0x0) {
      func_0x00010c0aa100(*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    _objc_release(puVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084c47bc; end: 1084c4f8f;  */

void FUN_1084c47bc(undefined **param_1,undefined **param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar16 = param_1;
  func_0x00010c077840();
  ppuVar3 = param_1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef60a0(param_1);
  _objc_retain(ppuVar4);
  _objc_retain(param_2);
  if (ppuVar4 == (undefined **)0x0) {
LAB_1084c494c:
    ppuVar18 = (undefined **)0x0;
  }
  else {
    ppuVar18 = ppuVar4;
    func_0x00010c0c6c20();
    ppuVar5 = ppuVar4;
    if ((long)ppuVar18 < 3) {
      if (ppuVar18 == (undefined **)0x1) {
        func_0x00010bfe6ac0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar5;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (ppuVar18 != (undefined **)0x2) goto LAB_1084c4938;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar5;
        func_0x00010c299160();
        _objc_retainAutoreleasedReturnValue();
        ppuVar18 = ppuVar14;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
LAB_1084c48f4:
        _objc_release(ppuVar14);
      }
      _objc_release(ppuVar5);
      if (ppuVar18 == (undefined **)0x0) {
LAB_1084c4938:
        func_0x00010c0aa100(param_2);
        goto LAB_1084c494c;
      }
    }
    else {
      if (ppuVar18 != (undefined **)0x3) {
        if (ppuVar18 == (undefined **)0x4) {
          func_0x00010c0feac0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar5;
          func_0x00010c0fed40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar18 = ppuVar14;
          func_0x00010beec820();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1084c48f4;
        }
        goto LAB_1084c4938;
      }
      ppuVar18 = &PTR____CFConstantStringClassReference_110daafd8;
    }
  }
  _objc_release(param_2);
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar3 = ppuVar18;
  func_0x00010c08fa60();
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010befa120(ppuVar2);
  }
  ppuVar3 = param_1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010bf20540();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_2);
  if (ppuVar4 == (undefined **)0x0) {
LAB_1084c4bac:
    ppuVar14 = (undefined **)0x0;
  }
  else {
    ppuVar5 = ppuVar4;
    func_0x00010bef60a0();
    ppuVar14 = (undefined **)0x0;
    ppuVar6 = ppuVar4;
    if ((long)ppuVar5 < 6) {
      if ((3 < (long)ppuVar5 - 2U) && (ppuVar5 != (undefined **)0x0)) {
        if (ppuVar5 == (undefined **)0x1) {
          func_0x00010bf054e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar6;
          func_0x00010bfe5400();
          _objc_retainAutoreleasedReturnValue();
          goto LAB_1084c4aa4;
        }
        goto LAB_1084c4b90;
      }
    }
    else {
      if (ppuVar5 < (undefined **)0x18) {
        if ((1L << ((ulong)ppuVar5 & 0x3f) & 0xeffb80U) != 0) goto LAB_1084c4bb0;
        if (ppuVar5 == (undefined **)0xa) {
          func_0x00010bf3fc80();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(param_2);
          ppuVar5 = ppuVar6;
          func_0x00010c084fc0();
          _objc_retainAutoreleasedReturnValue();
          puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_e8 = 0xc2000000;
          pcStack_e0 = FUN_1084c46e8;
          puStack_d8 = &UNK_110a4f050;
          uStack_c8 = 10;
          uStack_c0 = SUB81(ppuVar16,0);
          ppuStack_d0 = param_2;
          _objc_retain(param_2);
          ppuVar13 = &puStack_f0;
          ppuVar16 = ppuVar5;
          func_0x000100504554(ppuVar5,ppuVar13);
          ppuVar14 = ppuVar16;
          func_0x00010bf446e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar16);
          _objc_release(ppuVar5);
          _objc_release(ppuStack_d0);
          ppuVar16 = param_2;
        }
        else {
          if (ppuVar5 != (undefined **)0x14) goto LAB_1084c4a7c;
          func_0x00010c1293e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar6;
          func_0x00010c084160();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar16;
          func_0x00010bfe5be0();
          _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
LAB_1084c4a7c:
        if (ppuVar5 != (undefined **)0x6) goto LAB_1084c4b90;
        func_0x00010bf67c00();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar6;
        func_0x00010bfe59a0();
        _objc_retainAutoreleasedReturnValue();
LAB_1084c4aa4:
        ppuVar14 = ppuVar16;
        func_0x00010c28f340();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar16);
      _objc_release(ppuVar6);
      if (ppuVar14 == (undefined **)0x0) {
LAB_1084c4b90:
        func_0x00010bef60a0(ppuVar4);
        func_0x00010c0aa100(param_2);
        goto LAB_1084c4bac;
      }
    }
  }
LAB_1084c4bb0:
  _objc_release(param_2);
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  ppuVar16 = ppuVar14;
  func_0x00010c08fa60();
  if (ppuVar16 != (undefined **)0x0) {
    func_0x00010befa120(ppuVar2);
  }
  ppuVar16 = param_1;
  func_0x00010c130960();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar16;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0c6e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (ppuVar4 == (undefined **)0x0) {
    puVar15 = (undefined *)0x0;
    goto LAB_1084c4eac;
  }
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar8;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
  puVar9 = puVar15;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar15);
  puVar10 = puVar8;
  func_0x00010c11d4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  ppuVar6 = ppuVar5;
  while (puVar15 != (undefined *)0x0) {
    puVar17 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar10);
      }
      ppuVar19 = *(undefined ***)((long)puVar17 * 8);
      ppuVar11 = ppuVar19;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar11;
      func_0x00010c0720c0();
      _objc_release(ppuVar11);
      if ((int)ppuVar12 == 0) {
        ppuVar11 = ppuVar19;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        ppuVar12 = ppuVar11;
        func_0x00010c0720c0();
        _objc_release(ppuVar11);
        if ((int)ppuVar12 != 0) {
          func_0x00010c296d80();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar5;
          ppuVar5 = ppuVar19;
          goto LAB_1084c4dbc;
        }
      }
      else {
        func_0x00010c296d80();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuVar6;
        ppuVar6 = ppuVar19;
LAB_1084c4dbc:
        _objc_release(ppuVar13);
        ppuVar13 = ppuVar19;
      }
      puVar17 = puVar17 + 1;
    } while (puVar15 != puVar17);
    puVar15 = puVar10;
    func_0x00010bf52a60();
  }
  puVar17 = puVar9;
  func_0x00010c08fa60();
  puVar15 = (undefined *)0x0;
  if ((puVar17 == (undefined *)0x0) ||
     (puVar15 = puVar9, func_0x00010bf4bb00(), ((ulong)puVar15 & 1) != 0)) {
LAB_1084c4e5c:
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar11 = ppuVar6;
    func_0x00010c08fa60();
    puVar15 = (undefined *)0x0;
    if (ppuVar11 == (undefined **)0x0) goto LAB_1084c4e5c;
    ppuVar11 = ppuVar5;
    func_0x00010c08fa60();
    puVar15 = (undefined *)0x0;
    if (ppuVar11 == (undefined **)0x0) goto LAB_1084c4e5c;
    puVar15 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar10);
  _objc_release(ppuVar5);
  _objc_release(ppuVar6);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
LAB_1084c4eac:
  _objc_release(ppuVar4);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  _objc_release(ppuVar16);
  ppuVar16 = ppuVar2;
  func_0x00010bf529e0();
  if ((ppuVar16 == (undefined **)0x0) &&
     (puVar7 = puVar15, func_0x00010c08fa60(), puVar7 != (undefined *)0x0)) {
    func_0x00010befa120(ppuVar2);
  }
  ppuVar16 = ppuVar2;
  func_0x00010bf529e0();
  if (ppuVar16 == (undefined **)0x0) {
    ppuVar16 = (undefined **)0x0;
  }
  else {
    ppuVar16 = ppuVar2;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar15);
  _objc_release(ppuVar14);
  _objc_release(ppuVar18);
  _objc_release(ppuVar2);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    _objc_retain(ppuVar13);
    ppuVar2 = param_1;
    FUN_1084c47bc(param_1,ppuVar13);
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = ppuVar2;
    func_0x00010bdc1b20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuVar16 == (undefined **)0x0) {
      ppuVar16 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
    }
    ppuVar2 = param_1;
    func_0x00010bef60a0();
    if (((ppuVar2 != (undefined **)0x7) &&
        (ppuVar2 = param_1, func_0x00010bef60a0(), ppuVar2 != (undefined **)0x17)) &&
       (ppuVar16 == (undefined **)0x0)) {
      func_0x00010bef60a0(param_1);
      func_0x00010c077840(param_1);
      func_0x00010c0aa100(ppuVar13);
    }
    _objc_release(ppuVar13);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar16);
  return;
}



/* Entry: 1084c4f90; end: 1084c506b;  */

void FUN_1084c4f90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  FUN_1084c47bc(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bdc1b20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_1;
  func_0x00010bef60a0();
  if (((lVar1 != 7) && (lVar1 = param_1, func_0x00010bef60a0(), lVar1 != 0x17)) && (lVar2 == 0)) {
    func_0x00010bef60a0(param_1);
    func_0x00010c077840(param_1);
    func_0x00010c0aa100(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084c506c; end: 1084c51cb;  */

void FUN_1084c506c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar3 = param_2;
  if (param_1 == 0) {
    _objc_retain(param_2);
    goto LAB_1084c51a4;
  }
  lVar4 = param_1;
  func_0x00010c0c6c20();
  lVar2 = param_1;
  if (lVar4 == 1) {
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
LAB_1084c5160:
    _objc_release(lVar2);
  }
  else {
    if (lVar4 == 4) {
      func_0x00010c0feac0();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c0fed40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
LAB_1084c512c:
      _objc_release(lVar1);
      goto LAB_1084c5160;
    }
    if (lVar4 == 2) {
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar2;
      func_0x00010c299160();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1084c512c;
    }
    lVar4 = 0;
  }
  lVar2 = lVar4;
  func_0x00010bdc1b20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
  }
  _objc_retain(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
LAB_1084c51a4:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1084c51cc; end: 1084c51f3;  */

undefined ** FUN_1084c51cc(long param_1)

{
  if (param_1 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110a4f080)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1084c51f4; end: 1084c55bb;  */

void FUN_1084c51f4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar8 = param_1;
  func_0x00010c242040();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar8;
  func_0x00010c274c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = puVar1;
  func_0x00010c0c6c20();
  if (puVar8 == (undefined *)0x1) {
    puVar8 = puVar1;
    func_0x00010bfe6ac0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar8;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = (undefined *)0x0;
LAB_1084c5298:
    _objc_release(puVar8);
  }
  else {
    puVar8 = puVar1;
    func_0x00010c0c6c20();
    if (puVar8 != (undefined *)0x2) {
      puVar8 = (undefined *)0x0;
      goto LAB_1084c5574;
    }
    puVar8 = puVar1;
    func_0x00010c299160(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    func_0x00010bfb1260();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar9;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0c57e0();
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b2c80;
    if (puVar7 == (undefined *)0x4) {
      puVar9 = puVar1;
      func_0x00010c299160(puVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010bfb1260();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c28fba0(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar9);
      puVar9 = PTR_PTR_1126b2c88;
      _objc_alloc(PTR_PTR_1126b2c88);
      func_0x00010c029840();
      goto LAB_1084c5298;
    }
    puVar9 = (undefined *)0x0;
  }
  puVar6 = PTR_PTR_1126b2c80;
  func_0x00010c28fba0(PTR_PTR_1126b2c80);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2c88;
  _objc_alloc(PTR_PTR_1126b2c88);
  func_0x00010c029840();
  puVar8 = param_1;
  FUN_1084c4f90(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar8;
  func_0x00010c25ce40(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar8);
  puVar2 = PTR_PTR_1126b2c90;
  _objc_alloc(PTR_PTR_1126b2c90);
  puVar8 = PTR_PTR_1126afec0;
  puVar4 = puVar1;
  func_0x00010c0c4bc0(puVar1);
  func_0x00010c0cd480((double)(long)puVar4,puVar8);
  func_0x00010c011180(puVar2);
  puVar4 = PTR_PTR_1126b2c98;
  _objc_alloc();
  func_0x00010c061c60();
  puVar8 = PTR_PTR_1126b2ca0;
  _objc_alloc(PTR_PTR_1126b2ca0);
  func_0x00010c029020();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar9);
  _objc_release(puVar5);
LAB_1084c5574:
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1084c55bc; end: 1084c5617; -[SCAdResponse adMediaDurationMs] */

undefined8 FUN_1084c55bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef35e0();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 1084c5618; end: 1084c567b; -[SCAdResponse adSourceType] */

undefined8 FUN_1084c5618(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x00010c15ed60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c06db60();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    uVar3 = 3;
  }
  else {
    func_0x00010bf26d80();
    uVar3 = 1;
    if (param_1 == 1) {
      uVar3 = 2;
    }
  }
  return uVar3;
}



/* Entry: 1084c567c; end: 1084c5927; -[SCAdResponse adNetworkAttribution] */

void FUN_1084c567c(float param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  
  uVar1 = param_2;
  func_0x00010c23d7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf3ca00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb2c80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (1.0 <= param_1) {
    func_0x00010c23d7c0();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126d9d78;
    _objc_alloc();
    uVar1 = param_2;
    func_0x00010bef38a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = param_2;
    func_0x00010bf2bfa0(param_2);
    func_0x00010c0df780(puVar3,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar2 = param_2;
    func_0x00010c270a60(param_2);
    func_0x00010c0df780(puVar4,param_3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf3c980();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bf3c9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar6 = param_2;
    func_0x00010c2475c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar8,param_3,uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_2;
    func_0x00010bf3ca00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    uVar9 = param_2;
    func_0x00010c247820(param_2);
    func_0x00010c0df780(puVar10,param_3,uVar9);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_2;
    func_0x00010c29e460();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = param_2;
    func_0x00010c29e3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010c29e400();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_2;
    func_0x00010beec120();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01b500(puVar14,param_3,uVar1,puVar3,puVar4,uVar2,uVar5,puVar8,uVar7,puVar10,uVar9,
                        uVar11,uVar12,uVar13);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(puVar10);
    _objc_release(uVar7);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar1);
    _objc_release(param_2);
  }
  else {
    puVar14 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1084c5928; end: 1084c59b7; -[SCAdResponse adSnapAtIndex:] */

void FUN_1084c5928(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (-1 < (long)param_3) {
    uVar2 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (param_3 < uVar1) {
      func_0x00010bef52c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      goto LAB_1084c59a4;
    }
  }
  uVar2 = 0;
LAB_1084c59a4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084c59b8; end: 1084c5adb; -[SCAdResponse instantPageEnabled] */

ulong FUN_1084c59b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010bef60a0();
  if (((uVar1 != 3) && (uVar1 = param_1, func_0x00010bef60a0(), uVar1 != 10)) &&
     (uVar1 = param_1, func_0x00010bef60a0(), uVar1 != 0x16)) {
    return 0;
  }
  uVar1 = param_1;
  func_0x00010bef60a0();
  if ((uVar1 == 3) || (uVar1 = param_1, func_0x00010bef60a0(), uVar1 == 10)) {
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = param_1;
    func_0x00010bef60a0();
    if (uVar1 != 0x16) {
      return 0;
    }
    uVar1 = param_1;
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 < 2) {
      return 0;
    }
    func_0x00010bef52c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = uVar1;
  func_0x00010c075ae0(uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1084c5adc; end: 1084c5b3f; -[SCAdResponse oneTapAttachmentOpenEligible] */

long FUN_1084c5adc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0e8380(lVar1);
  }
  _objc_release(lVar1);
  return lVar2;
}



/* Entry: 1084c5b40; end: 1084c5bab; -[SCAdResponse oneTapAttachmentOpenTimeThresholdMs] */

void FUN_1084c5b40(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0e83a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1084c5bac; end: 1084c5c0f; -[SCAdResponse brandName] */

void FUN_1084c5bac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bef52c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf20f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1084c5c10; end: 1084c5c77; -[SCAdResponse displayName] */

void FUN_1084c5c10(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bf20f80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf5b580(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1084c5c78; end: 1084c5d03; -[SCAdResponse profileInfo] */

void FUN_1084c5c78(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    lVar2 = param_1;
    func_0x00010bf5b640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      func_0x00010bf5b640(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1084c5cf4;
    }
  }
  func_0x00010bf20fa0(param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_1084c5cf4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1084c5d04; end: 1084c5da7; -[SCAdResponse profileLogoUrl] */

void FUN_1084c5d04(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bf20fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c116960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
  else {
    func_0x00010bf5b660(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1084c5da8; end: 1084c5e47; -[SCAdResponse darkProfileLogoUrl] */

void FUN_1084c5da8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x00010bf5b580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    func_0x00010bf20fa0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf5b640(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = param_1;
  func_0x00010bf63580();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c28f340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1084c5e48; end: 1084c5e83; -[SCAdResponse isGenericProfile] */

undefined8 FUN_1084c5e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf20fa0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0745c0();
  _objc_release(param_1);
  return uVar1;
}


