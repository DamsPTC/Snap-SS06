/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100080ea0; end: 100080eab; -[UNISCMLCLocationContext .cxx_destruct] */

void FUN_100080ea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 8,0);
  return;
}



/* Entry: 100080eac; end: 100080f13; +[SCMLCGetLocationContextRequest descriptor] */

void FUN_100080eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cb8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c2ee0,
                        &PTR____CFConstantStringClassReference_1000b75a0,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,
                        &PTR_s_friendIdsArray_1000c8430,2,0x10,0x1c);
    puRam00000001000d0cb8 = puVar1;
  }
  return;
}



/* Entry: 100080f14; end: 100080f7b; +[SCMLCGetLocationContextResponse descriptor] */

void FUN_100080f14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cc0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c2f30,
                        &PTR____CFConstantStringClassReference_1000b75c0,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,
                        &PTR_s_friendLocationContextsArray_1000c8470,2,0x10,0x1c);
    puRam00000001000d0cc0 = puVar1;
  }
  return;
}



/* Entry: 100080f7c; end: 100080fe3; +[SCMLCFriendLocationContext descriptor] */

void FUN_100080f7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cc8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c2f80,
                        &PTR____CFConstantStringClassReference_1000b75e0,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_friendId_1000c8590,5,
                        0x28,0x1c);
    puRam00000001000d0cc8 = puVar1;
  }
  return;
}



/* Entry: 100080fe4; end: 10008106f; +[SCMLCLocationContextCaption descriptor] */

undefined * FUN_100080fe4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cd0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c2fd0,
                        &PTR____CFConstantStringClassReference_1000b7600,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_type_1000c88b0,10,0x50,
                        0x1c);
    func_0x000100087520();
    puRam00000001000d0cd0 = puVar1;
  }
  return puRam00000001000d0cd0;
}



/* Entry: 100081070; end: 1000810d7; +[SCMLCGradient descriptor] */

void FUN_100081070(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cd8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3020,
                        &PTR____CFConstantStringClassReference_1000b7620,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_startRgba_1000c8530,3,
                        0x18,0x1c);
    puRam00000001000d0cd8 = puVar1;
  }
  return;
}



/* Entry: 1000810d8; end: 10008113f; +[SCMLCTimeZoneInfo descriptor] */

void FUN_1000810d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0ce0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3070,
                        &PTR____CFConstantStringClassReference_1000b7640,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_utcOffsetSecs_1000c8390
                        ,1,8,0x1c);
    puRam00000001000d0ce0 = puVar1;
  }
  return;
}



/* Entry: 100081140; end: 1000811a7; +[SCMLCNearbyFriendInfo descriptor] */

void FUN_100081140(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0ce8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c30c0,
                        &PTR____CFConstantStringClassReference_1000b7660,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,
                        &PTR_s_nearbyFriendId_1000c83b0,1,0x10,0x1c);
    puRam00000001000d0ce8 = puVar1;
  }
  return;
}



/* Entry: 1000811a8; end: 10008120f; +[SCMLCWidgetContext descriptor] */

void FUN_1000811a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cf0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3110,
                        &PTR____CFConstantStringClassReference_1000b7680,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_lat_1000c8630,5,0x20,
                        0x1c);
    puRam00000001000d0cf0 = puVar1;
  }
  return;
}



/* Entry: 100081210; end: 100081277; +[SCMLCGetFriendsIconsRequest descriptor] */

void FUN_100081210(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0cf8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3160,
                        &PTR____CFConstantStringClassReference_1000b76a0,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,
                        &PTR_s_friendIdsArray_1000c83d0,1,0x10,0x1c);
    puRam00000001000d0cf8 = puVar1;
  }
  return;
}



/* Entry: 100081278; end: 1000812df; +[SCMLCGetFriendsIconsResponse descriptor] */

void FUN_100081278(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d00 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c31b0,
                        &PTR____CFConstantStringClassReference_1000b76c0,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,
                        &PTR_s_friendIconsArray_1000c83f0,1,0x10,0x1c);
    puRam00000001000d0d00 = puVar1;
  }
  return;
}



/* Entry: 1000812e0; end: 100081347; +[SCMLCFriendIcons descriptor] */

void FUN_1000812e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d08 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3200,
                        &PTR____CFConstantStringClassReference_1000b76e0,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_friendId_1000c86d0,5,
                        0x20,0x1c);
    puRam00000001000d0d08 = puVar1;
  }
  return;
}



/* Entry: 100081348; end: 1000813af; +[SCMLCFriendsFeedLocationContext descriptor] */

void FUN_100081348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d10 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3250,
                        &PTR____CFConstantStringClassReference_1000b7700,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_type_1000c8770,5,0x20,
                        0x1c);
    puRam00000001000d0d10 = puVar1;
  }
  return;
}



/* Entry: 1000813b0; end: 10008142b; +[SCMLCIcon descriptor] */

undefined * FUN_1000813b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d18 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c32a0,
                        &PTR____CFConstantStringClassReference_1000b7720,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_type_1000c84b0,2,0x18,
                        0x1c);
    func_0x000100087500();
    puRam00000001000d0d18 = puVar1;
  }
  return puRam00000001000d0d18;
}



/* Entry: 10008142c; end: 100081493; +[SCMLCGetGroupLocationContextRequest descriptor] */

void FUN_10008142c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d20 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c32f0,
                        &PTR____CFConstantStringClassReference_1000b7740,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_userIdsArray_1000c8410,
                        1,0x10,0x1c);
    puRam00000001000d0d20 = puVar1;
  }
  return;
}



/* Entry: 100081494; end: 1000814fb; +[SCMLCGetGroupLocationContextResponse descriptor] */

void FUN_100081494(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d28 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3340,
                        &PTR____CFConstantStringClassReference_1000b7760,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,
                        &PTR_s_groupLocationContextCaptionsArra_1000c84f0,2,0x10,0x1c);
    puRam00000001000d0d28 = puVar1;
  }
  return;
}



/* Entry: 1000814fc; end: 100081563; +[SCMLCGroupLocationContextCaption descriptor] */

void FUN_1000814fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3390,
                        &PTR____CFConstantStringClassReference_1000b7780,
                        &PTR_s_snapchat_map_locationcontext_1000c8378,&PTR_s_userIdsArray_1000c8810,
                        5,0x28,0x1c);
    puRam00000001000d0d30 = puVar1;
  }
  return;
}



/* Entry: 100081564; end: 1000815eb; -[SCNGrpcUnaryEventHandlerImpl initWithHandler:responseClass:] */

undefined1 *
FUN_100081564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000c2258;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000815ec; end: 100081753; -[SCNGrpcUnaryEventHandlerImpl onEvent:status:] */

void FUN_1000815ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000b0c78;
  _objc_retain(param_4);
  puVar4 = PTR__OBJC_CLASS___NSError_1000c2200;
  if (param_4 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100087120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    _objc_retain(0);
  }
  else {
    func_0x0001000876e0(param_4);
    lVar1 = param_4;
    func_0x000100086900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1000c2208;
    func_0x000100086820(PTR__OBJC_CLASS___NSDictionary_1000c2208);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100086920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),uVar5,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_4 + 8,0);
  return;
}



/* Entry: 100081754; end: 10008175f; -[SCNGrpcUnaryEventHandlerImpl .cxx_destruct] */

void FUN_100081754(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 8,0);
  return;
}



/* Entry: 100081760; end: 1000817e7; -[SCNGrpcServerStreamingEventHandlerImpl initWithHandler:responseClass:] */

undefined1 *
FUN_100081760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000c2260;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000817e8; end: 10008195f; -[SCNGrpcServerStreamingEventHandlerImpl onEvent:response:status:] */

void FUN_1000817e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000b0c78;
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSError_1000c2200;
  if (param_5 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100087120(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined *)0x0;
    _objc_retain(0);
  }
  else {
    func_0x0001000876e0(param_5);
    lVar1 = param_5;
    func_0x000100086900();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1000c2208;
    func_0x000100086820(PTR__OBJC_CLASS___NSDictionary_1000c2208);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100086920(puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(lVar1);
    uVar5 = 0;
  }
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,uVar5,puVar4);
  _objc_release(uVar5);
  _objc_release(puVar4);
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_1000b0c78 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 100081960; end: 100081963; -[SCNGrpcServerStreamingEventHandlerImpl onRetry:] */

void FUN_100081960(void)

{
  return;
}



/* Entry: 100081964; end: 10008196f; -[SCNGrpcServerStreamingEventHandlerImpl .cxx_destruct] */

void FUN_100081964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 8,0);
  return;
}



/* Entry: 100081970; end: 1000819e3; -[SCNGrpcProtoMsgStreamSendHandler initWithHandler:] */

undefined1 * FUN_100081970(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000c2268;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000819e4; end: 100081a47; -[SCNGrpcProtoMsgStreamSendHandler send:callback:] */

void FUN_1000819e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x000100086700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100087240(uVar1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x000100085f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000b10c0)(param_3);
  return;
}



/* Entry: 100081a48; end: 100081a4f; -[SCNGrpcProtoMsgStreamSendHandler closeStream] */

void FUN_100081a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000865d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000b1090)(*(undefined8 *)(param_1 + 8),PTR_s_closeStream_1000c1a70);
  return;
}



/* Entry: 100081a50; end: 100081a5b; -[SCNGrpcProtoMsgStreamSendHandler .cxx_destruct] */

void FUN_100081a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 8,0);
  return;
}



/* Entry: 100081a5c; end: 100081a73; +[SCNGrpcCallOptionsBuilder builder] */

void FUN_100081a5c(void)

{
  _objc_alloc();
  func_0x000100086c00();
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)();
  return;
}



/* Entry: 100081a74; end: 100081adf; -[SCNGrpcCallOptionsBuilder initPrivate] */

undefined1 * FUN_100081a74(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1000c2270;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1000c2210;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100081ae0; end: 100081b23; -[SCNGrpcCallOptionsBuilder setRpcTimeoutInMs:] */

long FUN_100081ae0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000c2218;
  func_0x0001000870c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 100081b24; end: 100081b4b; -[SCNGrpcCallOptionsBuilder addHeaders:] */

long FUN_100081b24(long param_1)

{
  func_0x000100086320(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Entry: 100081b4c; end: 100081b53; -[SCNGrpcCallOptionsBuilder setAuth:] */

void FUN_100081b4c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 100081b54; end: 100081b8b; -[SCNGrpcCallOptionsBuilder setClientSwitchboardConfig:] */

long FUN_100081b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000100086680();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100081b8c; end: 100081bc3; -[SCNGrpcCallOptionsBuilder setAttestation:] */

long FUN_100081b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100081bc4; end: 100081c5b; -[SCNGrpcCallOptionsBuilder build] */

void FUN_100081bc4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___SCNGrpcCallOptions_1000c2220;
  _objc_alloc(PTR__OBJC_CLASS___SCNGrpcCallOptions_1000c2220);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1000c2218;
  func_0x0001000870a0(PTR__OBJC_CLASS___NSNumber_1000c2218,param_2,*(undefined1 *)(param_1 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  func_0x000100086dc0(puVar3,param_2,uVar1,uVar2,puVar4,*(undefined8 *)(param_1 + 0x20),0,
                      *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(puVar3);
  return;
}



/* Entry: 100081c5c; end: 100081d43; -[SCNGrpcCallOptionsBuilder addPreferredLocale:] */

long FUN_100081c5c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1000c2228;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  if (param_3 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSBundle_1000c2230;
    func_0x000100086fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x000100087140();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100086960();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100087220(puVar4,param_2,&PTR____CFConstantStringClassReference_1000b7800);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100087420(uVar5,param_2,puVar4,&PTR____CFConstantStringClassReference_1000b77e0);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  else {
    func_0x000100087420(uVar5,param_2,param_3,&PTR____CFConstantStringClassReference_1000b77e0);
  }
  return param_1;
}



/* Entry: 100081d44; end: 100081d4b; -[SCNGrpcCallOptionsBuilder addPreferredLocale] */

void FUN_100081d44(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100086370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000b1090)(param_1,PTR_s_addPreferredLocale__1000c19d8,0);
  return;
}



/* Entry: 100081d4c; end: 100081d83; -[SCNGrpcCallOptionsBuilder setConsistentTrackingId:] */

long FUN_100081d4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100081d84; end: 100081fa3; +[SCNGrpcCallOptionsBuilder toBuilder:] */

void FUN_100081d84(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x000100086580(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x0001000871e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0001000871e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100086e60();
    func_0x000100087460(param_1,param_2,(long)(int)lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x000100086380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100086380(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100086340(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x0001000865a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0001000865a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100087320(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x0001000871a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x0001000871a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100086560();
    func_0x0001000872a0(param_1,param_2,lVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x000100086440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100086440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100087280(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = param_3;
  func_0x000100086660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x000100086660(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100087340(param_1,param_2,lVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)(param_1);
  return;
}



/* Entry: 100081fa4; end: 100081ff7; -[SCNGrpcCallOptionsBuilder .cxx_destruct] */

void FUN_100081fa4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 8,0);
  return;
}



/* Entry: 100081ff8; end: 10008200f; +[SCNGrpcParamsBuilder builder] */

void FUN_100081ff8(void)

{
  _objc_alloc();
  func_0x000100086c00();
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)();
  return;
}



/* Entry: 100082010; end: 1000820b3; -[SCNGrpcParamsBuilder initPrivate] */

undefined1 * FUN_100082010(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1000c2278;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000c1bf0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    puVar2 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_1000c2238;
    func_0x0001000878e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 2;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x50) = 0;
    uVar3 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = 0;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1000820b4; end: 100082167; -[SCNGrpcParamsBuilder build] */

void FUN_1000820b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  
  puVar7 = PTR__OBJC_CLASS___SCNGrpcGrpcParameters_1000c2240;
  _objc_alloc(PTR__OBJC_CLASS___SCNGrpcGrpcParameters_1000c2240);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  lVar8 = *(long *)(param_1 + 0x38);
  func_0x000100086fc0();
  if (lVar8 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x38);
  }
  func_0x000100086cc0(puVar7,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar9,
                      *(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100085ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000b1088)();
  return;
}



/* Entry: 100082168; end: 10008219f; -[SCNGrpcParamsBuilder setEndpointAddress:] */

long FUN_100082168(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1000821a0; end: 1000821e3; -[SCNGrpcParamsBuilder setRpcTimeoutInMs:] */

long FUN_1000821a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000c2218;
  func_0x0001000870c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 1000821e4; end: 1000821eb; -[SCNGrpcParamsBuilder setChannelType:] */

void FUN_1000821e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1000821ec; end: 100082223; -[SCNGrpcParamsBuilder setUserAgentPrefix:] */

long FUN_1000821ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100082224; end: 10008222b; -[SCNGrpcParamsBuilder setTimeAliveInBackgroundMs:] */

void FUN_100082224(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10008222c; end: 100082263; -[SCNGrpcParamsBuilder setRequestPathPrefix:] */

long FUN_10008222c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 100082264; end: 10008229b; -[SCNGrpcParamsBuilder setCronetStreamEnginePtr:] */

long FUN_100082264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10008229c; end: 1000822a3; -[SCNGrpcParamsBuilder setClientAttestation:] */

void FUN_10008229c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 1000822a4; end: 1000822db; -[SCNGrpcParamsBuilder setServiceClientSBConfigKey:] */

long FUN_1000822a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1000822dc; end: 1000822e3; -[SCNGrpcParamsBuilder setShouldUseRetryFallback:] */

void FUN_1000822dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1000822e4; end: 10008231b; -[SCNGrpcParamsBuilder setMaxInboundMessageSize:] */

long FUN_1000822e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10008231c; end: 100082387; -[SCNGrpcParamsBuilder .cxx_destruct] */

void FUN_10008231c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x000100085f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000b10e0)(param_1 + 8,0);
  return;
}



/* Entry: 100082388; end: 1000824a3;  */

void FUN_100082388(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7)

{
  double dVar1;
  
  param_1 = param_1 * 0.017453292519943295;
  dVar1 = param_1;
  _tan(param_1);
  _cos(param_1);
  dVar1 = dVar1 + 1.0 / param_1;
  _log(dVar1);
  _exp2(param_3);
  param_3 = param_3 * 512.0;
  dVar1 = ((ABS(param_6) / param_3 +
           ((1.0 - dVar1 / 3.141592653589793) * 0.5 - ABS(param_4) / param_3)) * -2.0 + 1.0) *
          3.141592653589793;
  _sinh(dVar1);
  _atan();
                    /* WARNING: Could not recover jumptable at 0x000100085cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CLLocationCoordinate2DMake_1000b0c48)
            ((dVar1 * 180.0) / 3.141592653589793,
             (ABS(param_7) / param_3 + ((param_2 + 180.0) / 360.0 - ABS(param_5) / param_3)) * 360.0
             + -180.0);
  return;
}



/* Entry: 1000824a4; end: 100082533;  */

undefined * FUN_1000824a4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d38 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863e0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b7820,&UNK_10008eed0,
                        &UNK_10008effc,0x26,FUN_100082534,0,&UNK_10008f094);
    do {
      if (puRam00000001000d0d38 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d38;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d38,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d38 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d38;
}



/* Entry: 100082534; end: 10008253f;  */

bool FUN_100082534(uint param_1)

{
  return param_1 < 0x26;
}



/* Entry: 100082540; end: 1000825bb;  */

undefined * FUN_100082540(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d40 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863c0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b7840,&UNK_10008f108,
                        &UNK_10008f144,4,FUN_1000825bc,0);
    do {
      if (puRam00000001000d0d40 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d40;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d40,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d40 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d40;
}



/* Entry: 1000825bc; end: 1000825c7;  */

bool FUN_1000825bc(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 1000825c8; end: 100082643;  */

undefined * FUN_1000825c8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d48 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863c0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b7860,&UNK_10008f154,
                        &UNK_10008f17c,4,FUN_100082644,0);
    do {
      if (puRam00000001000d0d48 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d48;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d48,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d48 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d48;
}



/* Entry: 100082644; end: 10008264f;  */

bool FUN_100082644(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 100082650; end: 1000826cb;  */

undefined * FUN_100082650(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d50 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863c0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b7880,&UNK_10008f18c,
                        &UNK_10008f1a0,2,FUN_1000826cc,0);
    do {
      if (puRam00000001000d0d50 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d50;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d50,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d50 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d50;
}



/* Entry: 1000826cc; end: 1000826d7;  */

bool FUN_1000826cc(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 1000826d8; end: 100082753;  */

undefined * FUN_1000826d8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d58 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863c0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b78a0,&UNK_10008f1a8,
                        &UNK_10008f1bc,2,FUN_100082754,0);
    do {
      if (puRam00000001000d0d58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d58;
}



/* Entry: 100082754; end: 10008275f;  */

bool FUN_100082754(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 100082760; end: 1000827db;  */

undefined * FUN_100082760(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d60 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863c0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b78c0,&UNK_10008f1c4,
                        &UNK_10008f208,6,FUN_1000827dc,0);
    do {
      if (puRam00000001000d0d60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d60;
}



/* Entry: 1000827dc; end: 1000827e7;  */

bool FUN_1000827dc(uint param_1)

{
  return param_1 < 6;
}



/* Entry: 1000827e8; end: 100082863;  */

undefined * FUN_1000827e8(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001000d0d68 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248;
    func_0x0001000863c0(PTR__OBJC_CLASS___GPBEnumDescriptor_1000c2248,param_2,
                        &PTR____CFConstantStringClassReference_1000b78e0,&UNK_10008f220,
                        &UNK_10008f22c,1,FUN_100082864,0);
    do {
      if (puRam00000001000d0d68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001000d0d68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1000d0d68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001000d0d68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001000d0d68;
}



/* Entry: 100082864; end: 10008286f;  */

bool FUN_100082864(int param_1)

{
  return param_1 == 0;
}



/* Entry: 100082870; end: 1000828d7; +[SCMT1ActionTypeID descriptor] */

void FUN_100082870(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d70 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c35c0,
                        &PTR____CFConstantStringClassReference_1000b7900,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_id_p_1000c8c90,2,0x18,0x1c);
    puRam00000001000d0d70 = puVar1;
  }
  return;
}



/* Entry: 1000828d8; end: 10008293f; +[SCMT1ActionTiming descriptor] */

void FUN_1000828d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d78 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3610,
                        &PTR____CFConstantStringClassReference_1000b7920,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_effective_1000c8e10,3,0x20,0x1c);
    puRam00000001000d0d78 = puVar1;
  }
  return;
}



/* Entry: 100082940; end: 1000829a7; +[SCMT1StickerID descriptor] */

void FUN_100082940(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d80 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3660,
                        &PTR____CFConstantStringClassReference_1000b7940,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_nonClusterableId_1000c9350,7,0x28,
                        0x1c);
    puRam00000001000d0d80 = puVar1;
  }
  return;
}



/* Entry: 1000829a8; end: 100082a0f; +[SCMT1Constrain descriptor] */

void FUN_1000829a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d88 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c36b0,
                        &PTR____CFConstantStringClassReference_1000b7960,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_isSpaceConstrained_1000c91d0,6,
                        0x10,0x1c);
    puRam00000001000d0d88 = puVar1;
  }
  return;
}



/* Entry: 100082a10; end: 100082a8f; +[SCMT1Action descriptor] */

undefined * FUN_100082a10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d90 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3700,
                        &PTR____CFConstantStringClassReference_1000b7980,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_actionId_1000c9db0,0x12,0x78,0x1c)
    ;
    func_0x000100087500();
    puRam00000001000d0d90 = puVar1;
  }
  return puRam00000001000d0d90;
}



/* Entry: 100082a90; end: 100082af7; +[SCMT1NonClusterableStickerDefinition descriptor] */

void FUN_100082a90(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0d98 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3750,
                        &PTR____CFConstantStringClassReference_1000b79a0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_stickerId_1000c8f30,4,0x20,0x1c);
    puRam00000001000d0d98 = puVar1;
  }
  return;
}



/* Entry: 100082af8; end: 100082b5f; +[SCMT1ClusterableStickerDefinition descriptor] */

void FUN_100082af8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0da0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c37a0,
                        &PTR____CFConstantStringClassReference_1000b79c0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_leftId_1000c8fb0,4,0x28,0x1c);
    puRam00000001000d0da0 = puVar1;
  }
  return;
}



/* Entry: 100082b60; end: 100082bc7; +[SCMT1ActionDefinition descriptor] */

void FUN_100082b60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0da8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c37f0,
                        &PTR____CFConstantStringClassReference_1000b79e0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_actionId_1000c9890,0xd,0x50,0x1c);
    puRam00000001000d0da8 = puVar1;
  }
  return;
}



/* Entry: 100082bc8; end: 100082c2f; +[SCMT1ActionsDefinition descriptor] */

void FUN_100082bc8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0db0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3840,
                        &PTR____CFConstantStringClassReference_1000b7a00,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_actionDefinitionArray_1000c8bf0,1,
                        0x10,0x1c);
    puRam00000001000d0db0 = puVar1;
  }
  return;
}



/* Entry: 100082c30; end: 100082c97; +[SCMT1StickerPair descriptor] */

void FUN_100082c30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0db8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3890,
                        &PTR____CFConstantStringClassReference_1000b7a20,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_headingEastStickerId_1000c8e70,3,
                        0x18,0x1c);
    puRam00000001000d0db8 = puVar1;
  }
  return;
}



/* Entry: 100082c98; end: 100082d03; +[SCMT1MotionActionDefinition descriptor] */

void FUN_100082c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0dc0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c38e0,
                        &PTR____CFConstantStringClassReference_1000b7a40,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_actionId_1000c9a30,0xd,0x50,0x1c);
    puRam00000001000d0dc0 = puVar1;
  }
  return;
}



/* Entry: 100082d04; end: 100082d6b; +[SCMT1MotionActionsDefinition descriptor] */

void FUN_100082d04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0dc8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3930,
                        &PTR____CFConstantStringClassReference_1000b7a60,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_actionDefinitionArray_1000c8c10,1,
                        0x10,0x1c);
    puRam00000001000d0dc8 = puVar1;
  }
  return;
}



/* Entry: 100082d6c; end: 100082de7; +[SCMT1Type descriptor] */

undefined * FUN_100082d6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0dd0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3980,
                        &PTR____CFConstantStringClassReference_1000b7a80,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_id_p_1000c9510,9,0x50,0x1c);
    func_0x000100087500();
    puRam00000001000d0dd0 = puVar1;
  }
  return puRam00000001000d0dd0;
}



/* Entry: 100082de8; end: 100082e4f; +[SCMT1Sticker descriptor] */

void FUN_100082de8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0dd8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c39d0,
                        &PTR____CFConstantStringClassReference_1000b7aa0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_stickerId_1000c9750,10,0x50,0x1c);
    puRam00000001000d0dd8 = puVar1;
  }
  return;
}



/* Entry: 100082e50; end: 100082eb7; +[SCMT1GroupSticker descriptor] */

void FUN_100082e50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0de0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3a20,
                        &PTR____CFConstantStringClassReference_1000b7ac0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_id_p_1000c8c30,1,0x10,0x1c);
    puRam00000001000d0de0 = puVar1;
  }
  return;
}



/* Entry: 100082eb8; end: 100082f1f; +[SCMT1HomeWorkInfo descriptor] */

void FUN_100082eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0de8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3a70,
                        &PTR____CFConstantStringClassReference_1000b7ae0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_atHome_1000c9130,5,0x18,0x1c);
    puRam00000001000d0de8 = puVar1;
  }
  return;
}



/* Entry: 100082f20; end: 100082f87; +[SCMT1Constraints descriptor] */

void FUN_100082f20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0df0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3ed0,
                        &PTR____CFConstantStringClassReference_1000b7b00,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_spaceConstraint_1000c8cd0,2,0x18,
                        0x1c);
    puRam00000001000d0df0 = puVar1;
  }
  return;
}



/* Entry: 100082f88; end: 10008300b; +[SCMT1Constraints_SpaceConstraint descriptor] */

undefined * FUN_100082f88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0df8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3ef8,
                        &PTR____CFConstantStringClassReference_1000b7b20,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_userLat_1000c8ed0,3,0x10,0x1c);
    func_0x0001000874e0();
    puRam00000001000d0df8 = puVar1;
  }
  return puRam00000001000d0df8;
}



/* Entry: 10008300c; end: 10008308f; +[SCMT1Constraints_TimeConstraint descriptor] */

undefined * FUN_10008300c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e00 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3f20,
                        &PTR____CFConstantStringClassReference_1000b7b40,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_startMs_1000c8d10,2,0x18,0x1c);
    func_0x0001000874e0();
    puRam00000001000d0e00 = puVar1;
  }
  return puRam00000001000d0e00;
}



/* Entry: 100083090; end: 1000830f7; +[SCMT1TypeDefinition descriptor] */

void FUN_100083090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e08 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3b38,
                        &PTR____CFConstantStringClassReference_1000b7b60,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_id_p_1000c9630,9,0x40,0x1c);
    puRam00000001000d0e08 = puVar1;
  }
  return;
}



/* Entry: 1000830f8; end: 10008315f; +[SCMT1AssetIdWithProbability descriptor] */

void FUN_1000830f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e10 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3b88,
                        &PTR____CFConstantStringClassReference_1000b7b80,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_assetId_1000c8d50,2,0x10,0x1c);
    puRam00000001000d0e10 = puVar1;
  }
  return;
}



/* Entry: 100083160; end: 1000831c7; +[SCMT1AssetWithProbability descriptor] */

void FUN_100083160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e18 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3bd8,
                        &PTR____CFConstantStringClassReference_1000b7ba0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_asset_1000c8d90,2,0x18,0x1c);
    puRam00000001000d0e18 = puVar1;
  }
  return;
}



/* Entry: 1000831c8; end: 100083247; +[SCMT1TypeDef descriptor] */

undefined * FUN_1000831c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e20 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3c28,
                        &PTR____CFConstantStringClassReference_1000b7bc0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_id_p_1000c9ff0,0x16,0x80,0x1c);
    func_0x000100087500();
    puRam00000001000d0e20 = puVar1;
  }
  return puRam00000001000d0e20;
}



/* Entry: 100083248; end: 1000832af; +[SCMT1ResolvedTypeDef descriptor] */

void FUN_100083248(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e28 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3c78,
                        &PTR____CFConstantStringClassReference_1000b7be0,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_typeDef_1000c8dd0,2,0x18,0x1c);
    puRam00000001000d0e28 = puVar1;
  }
  return;
}



/* Entry: 1000832b0; end: 100083317; +[SCMT1LocalTime descriptor] */

void FUN_1000832b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e30 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3cc8,
                        &PTR____CFConstantStringClassReference_1000b7c00,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_year_1000c9430,7,0x20,0x1c);
    puRam00000001000d0e30 = puVar1;
  }
  return;
}



/* Entry: 100083318; end: 100083397; +[SCMT1Asset descriptor] */

undefined * FUN_100083318(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e38 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3d18,
                        &PTR____CFConstantStringClassReference_1000b7c20,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_id_p_1000c9bd0,0xf,0x40,0x1c);
    func_0x000100087500();
    puRam00000001000d0e38 = puVar1;
  }
  return puRam00000001000d0e38;
}



/* Entry: 100083398; end: 1000833ff; +[SCMT1Poi descriptor] */

void FUN_100083398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e40 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3d68,
                        &PTR____CFConstantStringClassReference_1000b7c40,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_name_1000c9030,4,0x28,0x1c);
    puRam00000001000d0e40 = puVar1;
  }
  return;
}



/* Entry: 100083400; end: 100083467; +[SCMT1PoiCollection descriptor] */

void FUN_100083400(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e48 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3db8,
                        &PTR____CFConstantStringClassReference_1000b7c60,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_poisArray_1000c8c50,1,0x10,0x1c);
    puRam00000001000d0e48 = puVar1;
  }
  return;
}



/* Entry: 100083468; end: 1000834f3; +[SCMT1StickerDynamicElement descriptor] */

undefined * FUN_100083468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000d0e50 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000c21f0;
    func_0x0001000863a0(PTR__OBJC_CLASS___GPBDescriptor_1000c21f0,param_2,&PTR_PTR_1000c3e08,
                        &PTR____CFConstantStringClassReference_1000b7c80,
                        &PTR_s_actionmoji_action_1000c8bd8,&PTR_s_originX_1000c9290,6,0x20,0x1c);
    func_0x000100087520();
    puRam00000001000d0e50 = puVar1;
  }
  return puRam00000001000d0e50;
}


