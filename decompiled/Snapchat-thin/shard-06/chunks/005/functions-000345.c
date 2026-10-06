/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1049b62d0; end: 1049b632f;  */

void FUN_1049b62d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_allocWithZone();
  FUN_1049b6330(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* Entry: 1049b6330; end: 1049b64b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1049b6330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = &stack0xffffffffffffff80;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130a33b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33d8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33e0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33c8) = 0;
  lVar2 = _DAT_1130a33d0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  _objc_msgSend(0,0,0,0);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33c0);
  uVar7 = 0x656d;
  uVar6 = 0xe200000000000000;
  *puVar1 = 0x656d;
  puVar1[1] = 0xe200000000000000;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  if (param_5 != 0) {
    uVar7 = *(undefined8 *)(param_5 + _DAT_1130a3940);
    uVar6 = ((undefined8 *)(param_5 + _DAT_1130a3940))[1];
    _swift_bridgeObjectRetain(uVar6);
  }
  puVar1 = (undefined8 *)(puVar4 + _DAT_1130a33c0);
  uVar5 = puVar1[1];
  *puVar1 = uVar7;
  puVar1[1] = uVar6;
  _objc_retain();
  _swift_bridgeObjectRelease(uVar5);
  FUN_1049b4be8();
  _objc_release(puVar4);
  _objc_release(param_5);
  return puVar4;
}



/* Entry: 1049b64b4; end: 1049b6513; -[FBSDKProfilePictureView initWith:profile:] */

void FUN_1049b64b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  FUN_1049b6330(param_1,param_2,param_3,param_4,param_7);
  return;
}



/* Entry: 1049b6514; end: 1049b65b7;  */

undefined8 FUN_1049b6514(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _objc_allocWithZone();
  _objc_msgSend(0,0,0,0);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 1049b65b8; end: 1049b65d3; -[FBSDKProfilePictureView initWithProfile:] */

void FUN_1049b65b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(0,0,0,0,param_1,PTR_s_initWith_profile__112525488);
  return;
}



/* Entry: 1049b65d4; end: 1049b6623;  */

void FUN_1049b65d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d290)(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1049b6624; end: 1049b674b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1049b6624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130a33b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33d8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33e0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33c8) = 0;
  lVar2 = _DAT_1130a33d0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  _objc_msgSend(0,0,0,0);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33c0);
  *puVar1 = 0x656d;
  puVar1[1] = 0xe200000000000000;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  _objc_retainAutoreleasedReturnValue();
  FUN_1049b674c();
  _objc_release(puVar4);
  return puVar4;
}



/* Entry: 1049b674c; end: 1049b6983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b674c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_bounds_1125a5ca8);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  _objc_msgSend(param_1,param_2,param_3,param_4);
  lVar1 = _DAT_1130a33d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a33d0,auStack_88,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  _objc_retain(puVar2);
  _objc_release(uVar5);
  _objc_msgSend(puVar2,PTR_s_setAutoresizingMask__112638f48,0x12);
  _objc_release(puVar2);
  _objc_msgSend();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar2);
  lVar3 = *(long *)(unaff_x20 + lVar1);
  _objc_msgSend(lVar3,PTR_s_contentMode_1125b0ca0);
  if (lVar3 != 1) {
    _objc_msgSend(*(undefined8 *)(unaff_x20 + lVar1),PTR_s_setContentMode__11263e2a8,1);
    _objc_msgSendSuper2(&stack0xffffffffffffff68,PTR_s_setContentMode__11263e2a8,1);
    FUN_1049b4be8();
  }
  _objc_msgSend();
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  puVar4 = puVar2;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar4);
  _objc_msgSend(puVar2,PTR_s_defaultCenter_1125b7d90);
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar2);
  return;
}



/* Entry: 1049b6984; end: 1049b69e7; -[FBSDKProfilePictureView initWithFrame:] */

void FUN_1049b6984(void)

{
  FUN_1049b6624();
  return;
}



/* Entry: 1049b69e8; end: 1049b6afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1049b69e8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffc0;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _DAT_1130a33b8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33d8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33e0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_1130a33c8) = 0;
  lVar2 = _DAT_1130a33d0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_allocWithZone();
  _objc_msgSend(0,0,0,0);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33c0);
  *puVar1 = 0x656d;
  puVar1[1] = 0xe200000000000000;
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
    _objc_retain(puVar4);
    FUN_1049b674c();
    _objc_release(puVar5);
  }
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 1049b6afc; end: 1049b6b23; -[FBSDKProfilePictureView initWithCoder:] */

void FUN_1049b6afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1049b69e8();
  return;
}



/* Entry: 1049b6b24; end: 1049b6c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b6b24(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = _DAT_1130a33d0;
  _swift_beginAccess(param_1 + _DAT_1130a33d0,auStack_48,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  _objc_msgSend(lVar2,PTR_s_superview_112676550);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_release();
    plVar3 = &lStack_58;
    lStack_58 = param_1;
    lStack_50 = lVar1;
    _objc_msgSendSuper2(plVar3,PTR_s_bounds_1125a5ca8);
    _CGRectIsEmpty();
    lVar2 = _DAT_1130a33c8;
    if (((ulong)plVar3 & 1) == 0) {
      _swift_beginAccess(param_1 + _DAT_1130a33c8,auStack_70,0,0);
      lVar1 = _DAT_1130a33d8;
      if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
        _swift_beginAccess(param_1 + _DAT_1130a33d8,auStack_88,0,0);
        if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
          FUN_1049b6c8c();
        }
      }
      lVar2 = _DAT_1130a33e8;
      _swift_beginAccess(param_1 + _DAT_1130a33e8,auStack_a0,1,0);
      if ((*(byte *)(param_1 + lVar2) & 1) == 0) {
        *(undefined1 *)(param_1 + lVar2) = 1;
        FUN_1049b6f10();
      }
    }
  }
  return;
}



/* Entry: 1049b6c2c; end: 1049b6c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b6c2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar4;
  _swift_getObjectType();
  lVar2 = _DAT_1130a33d0;
  _swift_beginAccess(lVar4 + _DAT_1130a33d0,auStack_48,0,0);
  lVar2 = *(long *)(lVar4 + lVar2);
  _objc_msgSend(lVar2,PTR_s_superview_112676550);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_release();
    plVar3 = &lStack_58;
    lStack_58 = lVar4;
    lStack_50 = lVar1;
    _objc_msgSendSuper2(plVar3,PTR_s_bounds_1125a5ca8);
    _CGRectIsEmpty();
    lVar2 = _DAT_1130a33c8;
    if (((ulong)plVar3 & 1) == 0) {
      _swift_beginAccess(lVar4 + _DAT_1130a33c8,auStack_70,0,0);
      lVar1 = _DAT_1130a33d8;
      if ((*(byte *)(lVar4 + lVar2) & 1) == 0) {
        _swift_beginAccess(lVar4 + _DAT_1130a33d8,auStack_88,0,0);
        if ((*(byte *)(lVar4 + lVar1) & 1) == 0) {
          FUN_1049b6c8c();
        }
      }
      lVar2 = _DAT_1130a33e8;
      _swift_beginAccess(lVar4 + _DAT_1130a33e8,auStack_a0,1,0);
      if ((*(byte *)(lVar4 + lVar2) & 1) == 0) {
        *(undefined1 *)(lVar4 + lVar2) = 1;
        FUN_1049b6f10();
      }
    }
  }
  return;
}



/* Entry: 1049b6c34; end: 1049b6c8b;  */

void FUN_1049b6c34(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049b6c8c; end: 1049b6f0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b6c8c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_c8 = *(long *)(lVar2 + -8);
  lVar11 = (long)&lStack_d0 - (*(long *)(lStack_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = *(long *)(lVar3 + -8);
  lVar13 = lVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  lStack_d0 = lVar3;
  _objc_allocWithZone();
  _objc_msgSend(0x3fe3b3b3b3b3b3b4,0x3fe6363636363636,0x3fe999999999999a,0x3ff0000000000000);
  lVar3 = _DAT_1130a33c8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a33c8,auStack_78,1,0);
  *(undefined1 *)(unaff_x20 + lVar3) = 1;
  lVar3 = _DAT_1130a33d8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a33d8,auStack_90,1,0);
  *(undefined1 *)(unaff_x20 + lVar3) = 0;
  uVar5 = 0;
  func_0x0001000295c4(0);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar6 = &UNK_1107bade0;
  _swift_allocObject(&UNK_1107bade0,0x20,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  uStack_a0 = 0x1049b8988;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1107badf8;
  ppuVar7 = &puStack_c0;
  puStack_98 = puVar6;
  __Block_copy(ppuVar7);
  puVar6 = puStack_98;
  _objc_retain();
  _objc_retain(puVar4);
  _swift_release(puVar6);
  __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_c0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = 0x112d4af88;
  func_0x0001049b6c4c(0x112d4af88,puVar1,
                      PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  _swift_retain(puVar6);
  uVar9 = 0x11309c6f0;
  func_0x0001048db364(0x11309c6f0);
  uVar10 = 0x112d4af98;
  func_0x0001049b6c4c(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lVar11,&puStack_c0,uVar9,uVar10,lVar2,uVar8);
  __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
            (0,lVar13,lVar11,ppuVar7);
  __Block_release(ppuVar7);
  _objc_release(puVar4);
  _objc_release(uVar5);
  (**(code **)(lStack_c8 + 8))(lVar11,lVar2);
  (**(code **)(lVar12 + 8))(lVar13,lStack_d0);
  return;
}



/* Entry: 1049b6f10; end: 1049b708b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b6f10(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  undefined *puVar5;
  
  lVar6 = 0x11309c5e0;
  func_0x0001048db364();
  lVar2 = _DAT_1130a33e8;
  puVar8 = auStack_60 + -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _DAT_1130a33e8,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = 0;
  uVar4 = *(ulong *)(unaff_x20 + _DAT_1130a33c0);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_1130a33c0))[1];
  if ((uVar4 == 0x656d && uVar1 == 0xe200000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,uVar1,0x656d,0xe200000000000000,0), (uVar4 & 1) != 0)) {
    puVar5 = PTR_PTR_1126add30;
    _swift_getInitializedObjCClass();
    iVar3 = (int)puVar5;
    _objc_msgSend();
    if (iVar3 == 0) {
      _swift_beginAccess(0x1138158c0,auStack_60,0,0);
      if (lRam00000001138158c0 == 0) {
        lVar6 = 0;
        __s10Foundation3URLVMa();
        (**(code **)(*(long *)(lVar6 + -8) + 0x38))(puVar8,1,1,lVar6);
      }
      else {
        func_0x000100029394(lRam00000001138158c0 + _DAT_1130a3978,puVar8);
        lVar6 = 0;
        __s10Foundation3URLVMa();
        puVar7 = puVar8;
        (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar8,1,lVar6);
        if ((int)puVar7 != 1) {
          FUN_1049b8990(puVar8,0x11309c5e0);
          FUN_1049b77e4();
          return;
        }
      }
      FUN_1049b8990(puVar8,0x11309c5e0);
      return;
    }
  }
  FUN_1049b7280();
  return;
}



/* Entry: 1049b708c; end: 1049b70b3; -[FBSDKProfilePictureView setNeedsImageUpdate] */

void FUN_1049b708c(undefined8 param_1)

{
  _objc_retain();
  FUN_1049b4be8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049b70b4; end: 1049b727f; -[FBSDKProfilePictureView performInitialConfiguration] */

void FUN_1049b70b4(undefined8 param_1)

{
  _objc_retain();
  FUN_1049b674c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049b7280; end: 1049b76bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b7280(void)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_160 [12];
  uint uStack_154;
  ulong uStack_150;
  uint uStack_144;
  ulong uStack_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  ulong uStack_a8;
  byte bStack_a0;
  
  lVar9 = 0x11309c5e0;
  func_0x0001048db364();
  puVar16 = auStack_160 + -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar9 + -8);
  lVar17 = (long)puVar16 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049b8794(&uStack_d0);
  dVar7 = dStack_b8;
  dVar6 = dStack_c0;
  uVar5 = uStack_c8;
  uVar4 = uStack_d0;
  uStack_140 = uStack_a8;
  uStack_144 = (uint)bStack_a0;
  puVar1 = (ulong *)(unaff_x20 + _DAT_1130a33e0);
  _swift_beginAccess(puVar1,auStack_e8,1,0);
  uVar14 = puVar1[1];
  if (uVar14 == 0) {
    if (uVar5 == 0) {
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      _swift_bridgeObjectRelease(0);
      goto LAB_1049b7478;
    }
LAB_1049b73e0:
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    uVar14 = uVar5;
LAB_1049b746c:
    _swift_bridgeObjectRelease(uVar14);
  }
  else {
    if (uVar5 == 0) goto LAB_1049b73e0;
    uVar10 = *puVar1;
    dVar20 = (double)puVar1[2];
    dVar21 = (double)puVar1[3];
    dVar19 = (double)puVar1[4];
    uStack_150 = puVar1[5];
    uStack_154 = (uint)(byte)puVar1[6];
    if (uVar10 != uVar4 || uVar14 != uVar5) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar10,uVar14,uVar4,uVar5,0);
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRelease(uVar5);
      if ((uVar10 & 1) != 0) goto LAB_1049b7440;
      goto LAB_1049b746c;
    }
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRelease(uVar5);
LAB_1049b7440:
    bVar8 = false;
    if ((dVar20 == dVar6) && (bVar8 = false, !NAN(dVar21) && !NAN(dVar7))) {
      bVar8 = dVar21 == dVar7;
    }
    if ((!bVar8) || (dVar19 != dStack_b0 || uStack_150 != uStack_140)) goto LAB_1049b746c;
    uVar2 = uStack_144 ^ uStack_154;
    _swift_bridgeObjectRelease(uVar14);
    if ((uVar2 & 1) == 0) goto LAB_1049b7478;
  }
  FUN_1049b6c8c();
LAB_1049b7478:
  if (((uStack_d0 == 0x656d) && (uStack_c8 == 0xe200000000000000)) ||
     (uVar14 = uStack_d0,
     __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
               (uStack_d0,uStack_c8,0x656d,0xe200000000000000,0), (uVar14 & 1) != 0)) {
    puVar11 = PTR_PTR_1126add30;
    _swift_getInitializedObjCClass();
    _objc_msgSend();
    if (((ulong)puVar11 & 1) == 0) {
      func_0x0001049b89cc(&uStack_d0);
      func_0x0001049b89cc(&uStack_d0);
      return;
    }
  }
  uVar14 = puVar1[1];
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = (ulong)dVar6;
  puVar1[3] = (ulong)dVar7;
  puVar1[4] = (ulong)dStack_b0;
  puVar1[5] = uStack_140;
  *(char *)(puVar1 + 6) = (char)uStack_144;
  _swift_bridgeObjectRelease(uVar14);
  _swift_beginAccess(0x1138158c0,auStack_120,0,0);
  lVar12 = lRam00000001138158c0;
  lVar3 = _DAT_1130a33b8;
  if (lRam00000001138158c0 == 0) {
    FUN_1049db25c(0);
    lVar3 = _DAT_1130a33b8;
    _swift_beginAccess(unaff_x20 + _DAT_1130a33b8,auStack_138,0,0);
    FUN_1049cece0(puVar16,dStack_c0,dStack_b8,uStack_d0,uStack_c8,*(undefined8 *)(unaff_x20 + lVar3)
                 );
  }
  else {
    _swift_beginAccess(unaff_x20 + _DAT_1130a33b8,auStack_138,0,0);
    uVar15 = *(undefined8 *)(unaff_x20 + lVar3);
    _objc_retain(lVar12);
    FUN_1049cec70(puVar16,dStack_c0,dStack_b8,uVar15);
    _objc_release(lVar12);
  }
  puVar13 = puVar16;
  (**(code **)(lVar18 + 0x30))(puVar16,1,lVar9);
  if ((int)puVar13 == 1) {
    func_0x0001049b89cc(&uStack_d0);
    func_0x0001049b8990(puVar16,0x11309c5e0);
  }
  else {
    (**(code **)(lVar18 + 0x20))(lVar17,puVar16,lVar9);
    FUN_1049b7dcc(lVar17,&uStack_d0);
    func_0x0001049b89cc(&uStack_d0);
    (**(code **)(lVar18 + 8))(lVar17,lVar9);
  }
  return;
}



/* Entry: 1049b76bc; end: 1049b774f; -[FBSDKProfilePictureView accessTokenDidChange:] */

void FUN_1049b76bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  __s10Foundation12NotificationVMa();
  lVar3 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffc0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (puVar2,param_3);
  _objc_retain(param_1);
  func_0x0001049b70dc(puVar2);
  _objc_release(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 1049b7750; end: 1049b77e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b7750(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_1130a33c0);
  uVar2 = ((ulong *)(unaff_x20 + _DAT_1130a33c0))[1];
  if ((uVar3 == 0x656d && uVar2 == 0xe200000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar2,0x656d,0xe200000000000000,0), (uVar3 & 1) != 0)) {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130a33e0);
    _swift_beginAccess(puVar1,auStack_38,1,0);
    uVar4 = puVar1[1];
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    _swift_bridgeObjectRelease(uVar4);
    FUN_1049b77e4();
  }
  return;
}



/* Entry: 1049b77e4; end: 1049b7bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b77e4(void)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_140 [4];
  uint uStack_13c;
  ulong uStack_138;
  uint uStack_12c;
  ulong uStack_128;
  undefined1 auStack_120 [56];
  undefined1 auStack_e8 [24];
  ulong uStack_d0;
  ulong uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  ulong uStack_a8;
  byte bStack_a0;
  
  lVar6 = 0x11309c5e0;
  func_0x0001048db364();
  puVar10 = auStack_140 + -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar6 + -8);
  lVar11 = (long)puVar10 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1049b8794(&uStack_d0);
  uVar4 = uStack_c8;
  uVar3 = uStack_d0;
  uStack_128 = uStack_a8;
  uStack_12c = (uint)bStack_a0;
  puVar1 = (ulong *)(unaff_x20 + _DAT_1130a33e0);
  _swift_beginAccess(puVar1,auStack_e8,1,0);
  uVar12 = puVar1[1];
  if (uVar12 == 0) {
    if (uVar4 == 0) {
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      _swift_bridgeObjectRelease(0);
      goto LAB_1049b79d4;
    }
LAB_1049b7940:
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    uVar12 = uVar4;
LAB_1049b79cc:
    _swift_bridgeObjectRelease(uVar12);
  }
  else {
    if (uVar4 == 0) goto LAB_1049b7940;
    uVar7 = *puVar1;
    dVar15 = (double)puVar1[2];
    dVar16 = (double)puVar1[3];
    dVar14 = (double)puVar1[4];
    uStack_138 = puVar1[5];
    uStack_13c = (uint)(byte)puVar1[6];
    if (uVar7 != uVar3 || uVar12 != uVar4) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar7,uVar12,uVar3,uVar4,0);
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      FUN_1049b893c(&uStack_d0,auStack_120);
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRelease(uVar4);
      if ((uVar7 & 1) != 0) goto LAB_1049b79a0;
      goto LAB_1049b79cc;
    }
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    FUN_1049b893c(&uStack_d0,auStack_120);
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRelease(uVar4);
LAB_1049b79a0:
    bVar5 = false;
    if ((dVar15 == dStack_c0) && (bVar5 = false, !NAN(dVar16) && !NAN(dStack_b8))) {
      bVar5 = dVar16 == dStack_b8;
    }
    if ((!bVar5) || (dVar14 != dStack_b0 || uStack_138 != uStack_128)) goto LAB_1049b79cc;
    uVar2 = uStack_12c ^ uStack_13c;
    _swift_bridgeObjectRelease(uVar12);
    if ((uVar2 & 1) == 0) goto LAB_1049b79d4;
  }
  FUN_1049b6c8c();
LAB_1049b79d4:
  _swift_beginAccess(0x1138158c0,auStack_120,0,0);
  lVar9 = lRam00000001138158c0;
  if (((uStack_d0 == 0x656d) && (uStack_c8 == 0xe200000000000000)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uStack_d0,uStack_c8,0x656d,0xe200000000000000,0), (uStack_d0 & 1) != 0)) {
    if (lVar9 == 0) {
      func_0x0001049b89cc(&uStack_d0);
      func_0x0001049b89cc(&uStack_d0);
      (**(code **)(lVar13 + 0x38))(puVar10,1,1,lVar6);
    }
    else {
      func_0x000100029394(lVar9 + _DAT_1130a3978,puVar10);
      puVar8 = puVar10;
      (**(code **)(lVar13 + 0x30))(puVar10,1,lVar6);
      if ((int)puVar8 != 1) {
        (**(code **)(lVar13 + 0x20))(lVar11,puVar10,lVar6);
        uVar12 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1[2] = (ulong)dStack_c0;
        puVar1[3] = (ulong)dStack_b8;
        puVar1[4] = (ulong)dStack_b0;
        puVar1[5] = uStack_128;
        *(char *)(puVar1 + 6) = (char)uStack_12c;
        _objc_retain(lVar9);
        _swift_bridgeObjectRelease(uVar12);
        FUN_1049b7dcc(lVar11,&uStack_d0);
        _objc_release(lVar9);
        func_0x0001049b89cc(&uStack_d0);
        (**(code **)(lVar13 + 8))(lVar11,lVar6);
        return;
      }
      func_0x0001049b89cc(&uStack_d0);
      func_0x0001049b89cc(&uStack_d0);
    }
    func_0x0001049b8990(puVar10,0x11309c5e0);
  }
  else {
    func_0x0001049b89cc(&uStack_d0);
    func_0x0001049b89cc(&uStack_d0);
  }
  return;
}



/* Entry: 1049b7bbc; end: 1049b7cc3; -[FBSDKProfilePictureView profileDidChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b7bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar3 = 0;
  __s10Foundation12NotificationVMa();
  lVar7 = *(long *)(lVar3 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  __s10Foundation12NotificationV36_unconditionallyBridgeFromObjectiveCyACSo14NSNotificationCSgFZ
            (auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_3);
  uVar4 = *(ulong *)(param_1 + _DAT_1130a33c0);
  uVar2 = ((ulong *)(param_1 + _DAT_1130a33c0))[1];
  if ((uVar4 == 0x656d && uVar2 == 0xe200000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,uVar2,0x656d,0xe200000000000000,0), (uVar4 & 1) != 0)) {
    puVar1 = (undefined8 *)(param_1 + _DAT_1130a33e0);
    _swift_beginAccess(puVar1,auStack_58,1,0);
    uVar6 = puVar1[1];
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    _objc_retain(param_1);
    _swift_bridgeObjectRelease(uVar6);
    FUN_1049b77e4();
    _objc_release(param_1);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),lVar3);
  return;
}



/* Entry: 1049b7cc4; end: 1049b7dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b7cc4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(0x1138158c0,auStack_78,0,0);
  lVar2 = lRam00000001138158c0;
  lVar1 = _DAT_1130a33b8;
  if (lRam00000001138158c0 == 0) {
    FUN_1049db25c(0);
    lVar1 = _DAT_1130a33b8;
    uVar3 = *param_2;
    uVar4 = param_2[1];
    _swift_beginAccess(unaff_x20 + _DAT_1130a33b8,auStack_90,0,0);
    FUN_1049cece0(param_1,param_2[2],param_2[3],uVar3,uVar4,*(undefined8 *)(unaff_x20 + lVar1));
  }
  else {
    _swift_beginAccess(unaff_x20 + _DAT_1130a33b8,auStack_90,0,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    _objc_retain(lVar2);
    FUN_1049cec70(param_1,uVar4,uVar5,uVar3);
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1049b7dcc; end: 1049b7fd7;  */

void FUN_1049b7dcc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [56];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar1 + -8);
  puVar9 = auStack_d0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar8 = (long)puVar9 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(puVar9,param_1,lVar1);
  __s10Foundation10URLRequestV3url11cachePolicy15timeoutIntervalAcA3URLV_So017NSURLRequestCacheE0VSdtcfC
            (lVar8,0x404e000000000000,puVar9,0);
  puVar3 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  __s10Foundation10URLRequestV19_bridgeToObjectiveCSo12NSURLRequestCyF();
  puVar5 = &UNK_1107bae30;
  _swift_allocObject(&UNK_1107bae30,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar6 = &UNK_1107bae58;
  _swift_allocObject(&UNK_1107bae58,0x49,7);
  uVar12 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  *(undefined8 *)(puVar6 + 0x20) = param_2[1];
  *(undefined8 *)(puVar6 + 0x18) = uVar12;
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x30) = uVar14;
  *(undefined8 *)(puVar6 + 0x28) = uVar13;
  uVar12 = param_2[4];
  *(undefined8 *)(puVar6 + 0x40) = param_2[5];
  *(undefined8 *)(puVar6 + 0x38) = uVar12;
  puVar6[0x48] = *(undefined1 *)(param_2 + 6);
  pcStack_70 = FUN_1049b8a00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1012d0a0c;
  puStack_78 = &UNK_1107bae70;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  __Block_copy(ppuVar7);
  puVar5 = puStack_68;
  FUN_1049b893c(param_2,auStack_c8);
  _swift_release(puVar5);
  puVar5 = puVar3;
  _objc_msgSend(puVar3,PTR_s_dataTaskWithRequest_completionHa_1125b6ba0,puVar4,ppuVar7);
  _objc_retainAutoreleasedReturnValue();
  __Block_release(ppuVar7);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_msgSend(puVar5,PTR_s_resume_11262ce90);
  _objc_release(puVar5);
  (**(code **)(lVar10 + 8))(lVar8,lVar2);
  return;
}



/* Entry: 1049b7fd8; end: 1049b7fff; -[FBSDKProfilePictureView updateImageWithAccessToken] */

void FUN_1049b7fd8(undefined8 param_1)

{
  _objc_retain();
  FUN_1049b7280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049b8000; end: 1049b8027; -[FBSDKProfilePictureView updateImageWithProfile] */

void FUN_1049b8000(undefined8 param_1)

{
  _objc_retain();
  FUN_1049b77e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049b8028; end: 1049b80c7;  */

void FUN_1049b8028(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined1 auStack_48 [24];
  
  if ((param_4 == 0) && (param_2 >> 0x3c < 0xf)) {
    _swift_beginAccess(param_5 + 0x10,auStack_48,0,0);
    param_5 = param_5 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (param_5 != 0) {
      func_0x00010006c00c(param_1,param_2);
      FUN_1049b80c8(param_1,param_2,param_6);
      func_0x0001000b44c0(param_1,param_2);
      _objc_release(param_5);
    }
  }
  return;
}



/* Entry: 1049b80c8; end: 1049b84d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b80c8(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined1 *puVar17;
  long lVar18;
  ulong uVar19;
  double dVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_140 [12];
  uint uStack_134;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [24];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined1 auStack_b0 [32];
  
  uVar21 = *param_3;
  uVar3 = param_3[1];
  dVar22 = (double)param_3[2];
  dVar23 = (double)param_3[3];
  dVar20 = (double)param_3[4];
  uVar19 = param_3[5];
  uVar4 = param_3[6];
  lVar6 = 0;
  uStack_110 = param_1;
  uStack_108 = param_2;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_118 = *(long *)(lVar6 + -8);
  puVar17 = auStack_140 + -(*(long *)(lStack_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  __s8Dispatch0A3QoSVMa();
  lStack_128 = *(long *)(lVar7 + -8);
  lVar18 = (long)puVar17 - (*(long *)(lStack_128 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (ulong *)(unaff_x20 + _DAT_1130a33e0);
  lStack_120 = lVar7;
  _swift_beginAccess(puVar1,auStack_b0,0,0);
  uVar15 = puVar1[1];
  if (uVar3 == 0) {
    if (uVar15 != 0) goto LAB_1049b81fc;
    lStack_130 = lVar6;
    FUN_1049b893c(param_3,&puStack_e8);
    _swift_bridgeObjectRelease(0);
LAB_1049b829c:
    uVar21 = param_3[4];
    puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
    _objc_allocWithZone();
    uVar9 = uStack_110;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uStack_110,uStack_108);
    _objc_msgSend(uVar21,puVar8,PTR_s_initWithData_scale__1125dfb10,uVar9);
    _objc_release(uVar9);
    lVar6 = _DAT_1130a33d8;
    if (puVar8 == (undefined *)0x0) {
      _swift_beginAccess(unaff_x20 + _DAT_1130a33d8,&puStack_e8,1,0);
      *(undefined1 *)(unaff_x20 + lVar6) = 0;
      lVar6 = _DAT_1130a33c8;
      _swift_beginAccess(unaff_x20 + _DAT_1130a33c8,auStack_100,1,0);
      *(undefined1 *)(unaff_x20 + lVar6) = 0;
      FUN_1049b4be8();
    }
    else {
      _swift_beginAccess(unaff_x20 + _DAT_1130a33d8,auStack_100,1,0);
      *(undefined1 *)(unaff_x20 + lVar6) = 1;
      uVar10 = 0;
      func_0x0001000295c4(0);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      puVar11 = &UNK_1107baea8;
      _swift_allocObject(&UNK_1107baea8,0x20,7);
      *(long *)(puVar11 + 0x10) = unaff_x20;
      *(undefined **)(puVar11 + 0x18) = puVar8;
      pcStack_c8 = FUN_1049b8a0c;
      puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e0 = 0x42000000;
      puStack_d8 = &UNK_1000f6b44;
      puStack_d0 = &UNK_1107baec0;
      ppuVar12 = &puStack_e8;
      puStack_c0 = puVar11;
      __Block_copy(ppuVar12);
      puVar11 = puStack_c0;
      _objc_retain();
      _objc_retain(puVar8);
      _swift_release(puVar11);
      __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar18);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      uVar9 = 0x112d4af88;
      func_0x0001049b6c4c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                          PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
      _swift_retain(puVar11);
      uVar13 = 0x11309c6f0;
      func_0x0001048db364(0x11309c6f0);
      uVar14 = 0x112d4af98;
      func_0x0001049b6c4c(0x112d4af98,0x1048e76ec,PTR___sSayxGSTsMc_11034dd08);
      lVar6 = lStack_130;
      __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
                (puVar17,&puStack_e8,uVar13,uVar14,lStack_130,uVar9);
      __sSo17OS_dispatch_queueC8DispatchE5async5group3qos5flags7executeySo0a1_b1_F0CSg_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
                (0,lVar18,puVar17,ppuVar12);
      __Block_release(ppuVar12);
      _objc_release(puVar8);
      _objc_release(uVar10);
      (**(code **)(lStack_118 + 8))(puVar17,lVar6);
      (**(code **)(lStack_128 + 8))(lVar18,lStack_120);
    }
  }
  else {
    if (uVar15 == 0) {
LAB_1049b81fc:
      FUN_1049b893c(param_3,&puStack_e8);
    }
    else {
      dVar25 = (double)puVar1[2];
      dVar26 = (double)puVar1[3];
      dVar24 = (double)puVar1[4];
      uVar16 = puVar1[5];
      uStack_134 = (uint)(byte)puVar1[6];
      if (uVar21 == *puVar1 && uVar15 == uVar3) {
        lStack_130 = lVar6;
        FUN_1049b893c(param_3,&puStack_e8);
      }
      else {
        lStack_130 = lVar6;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar21,uVar3,*puVar1,uVar15,0);
        FUN_1049b893c(param_3,&puStack_e8);
        if ((uVar21 & 1) == 0) goto LAB_1049b8230;
      }
      bVar5 = false;
      if ((dVar22 == dVar25) && (bVar5 = false, !NAN(dVar23) && !NAN(dVar26))) {
        bVar5 = dVar23 == dVar26;
      }
      if ((bVar5) && (dVar20 == dVar24 && uVar19 == uVar16)) {
        uVar2 = (byte)uVar4 ^ uStack_134;
        _swift_bridgeObjectRelease(uVar3);
        if ((uVar2 & 1) != 0) {
          return;
        }
        goto LAB_1049b829c;
      }
    }
LAB_1049b8230:
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Entry: 1049b84d4; end: 1049b8537; -[FBSDKProfilePictureView shouldImageFit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1049b84d4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130a33d0;
  _swift_beginAccess(param_1 + _DAT_1130a33d0,auStack_38,0,0);
  uVar2 = *(ulong *)(param_1 + lVar1);
  _objc_msgSend(uVar2,PTR_s_contentMode_1125b0ca0);
  return (uint)(uVar2 < 0xd) & 0x1ffaU >> (ulong)((uint)uVar2 & 0x1f);
}



/* Entry: 1049b8538; end: 1049b858b; -[FBSDKProfilePictureView getImageSizeWithImageShouldFit:scale:] */

undefined1  [16]
FUN_1049b8538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  
  _objc_retain();
  FUN_1049b5398(param_1,param_5);
  _objc_release(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1049b858c; end: 1049b86bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b858c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_1130a33d0;
  _swift_beginAccess(param_5 + _DAT_1130a33d0,auStack_78,0,0);
  uVar4 = *(undefined8 *)(param_5 + lVar1);
  uVar2 = 0;
  FUN_104a01088(0);
  _objc_allocWithZone();
  _objc_retain(uVar4);
  _objc_msgSend(uVar2,PTR_s_init_1125d9248);
  _objc_msgSend(*(undefined8 *)(param_5 + lVar1),PTR_s_bounds_1125a5ca8);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  _objc_msgSend();
  _objc_release(puVar3);
  FUN_1049b46a8(param_3,param_4,param_1,param_6);
  _objc_release(uVar2);
  _objc_msgSend(uVar4,PTR_s_setImage__1126481e8,param_6);
  _objc_release(uVar4);
  _objc_release(param_6);
  return;
}



/* Entry: 1049b86c0; end: 1049b86e7; -[FBSDKProfilePictureView setPlaceholderImage] */

void FUN_1049b86c0(undefined8 param_1)

{
  _objc_retain();
  FUN_1049b6c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049b86e8; end: 1049b870f; -[FBSDKProfilePictureView updateImage] */

void FUN_1049b86e8(undefined8 param_1)

{
  _objc_retain();
  FUN_1049b6f10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1049b8710; end: 1049b8743;  */

void FUN_1049b8710(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1049b8744; end: 1049b8793; -[FBSDKProfilePictureView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b8744(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130a33e0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130a33d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130a33c0 + 8))
  ;
  return;
}



/* Entry: 1049b8794; end: 1049b893b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b8794(undefined8 *param_1,double param_2,undefined8 param_3,double param_4,
                  double param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *unaff_x20;
  double dVar7;
  undefined1 auStack_b0 [24];
  undefined1 auStack_88 [24];
  
  _swift_getObjectType();
  lVar6 = _DAT_1130a33d0;
  _swift_beginAccess(unaff_x20 + _DAT_1130a33d0,auStack_88,0,0);
  uVar3 = *(ulong *)(unaff_x20 + lVar6);
  _objc_msgSend(uVar3,PTR_s_contentMode_1125b0ca0);
  puVar4 = unaff_x20;
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    _objc_msgSend();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar5 != (undefined *)0x0) goto LAB_1049b8870;
  }
  puVar5 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _swift_getInitializedObjCClass(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_msgSend();
  _objc_retainAutoreleasedReturnValue();
LAB_1049b8870:
  uVar1 = (uint)(uVar3 < 0xd) & 0x1ffaU >> (ulong)((uint)uVar3 & 0x1f);
  _objc_msgSend(puVar5,PTR_s_scale_112631268);
  _objc_msgSendSuper2(&stack0xffffffffffffff68,PTR_s_bounds_1125a5ca8);
  _objc_release(puVar5);
  lVar6 = _DAT_1130a33b8;
  _swift_beginAccess(unaff_x20 + _DAT_1130a33b8,auStack_b0,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar6);
  dVar7 = param_4;
  if (lVar6 == 0) {
    dVar7 = param_5;
    if (uVar1 == 0) {
      if (param_5 < param_4) {
        param_5 = param_4;
        dVar7 = param_4;
      }
    }
    else if (param_4 <= param_5) {
      param_5 = param_4;
      dVar7 = param_4;
    }
  }
  uVar2 = *(undefined8 *)((long)(unaff_x20 + _DAT_1130a33c0) + 8);
  *param_1 = *(undefined8 *)(unaff_x20 + _DAT_1130a33c0);
  param_1[1] = uVar2;
  param_1[2] = param_2 * dVar7;
  param_1[3] = param_2 * param_5;
  param_1[4] = param_2;
  param_1[5] = lVar6;
  *(char *)(param_1 + 6) = (char)uVar1;
  return;
}



/* Entry: 1049b893c; end: 1049b8977;  */

undefined8 FUN_1049b893c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x1049db8c4)(param_2,param_1);
  return param_2;
}



/* Entry: 1049b8978; end: 1049b898f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b8978(void)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  dVar11 = *(double *)(unaff_x20 + 0x20);
  dVar14 = *(double *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar2 = lVar4;
  uVar5 = uVar6;
  uVar7 = uVar8;
  dVar9 = dVar11;
  dVar12 = dVar14;
  _swift_getObjectType();
  plVar3 = &lStack_60;
  lStack_60 = lVar4;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(plVar3,PTR_s_bounds_1125a5ca8);
  dVar10 = dVar11;
  dVar13 = dVar14;
  _CGRectEqualToRect(uVar6,uVar8,dVar11,dVar14,uVar5,uVar7,dVar9,dVar12);
  if (((ulong)plVar3 & 1) == 0) {
    lStack_70 = lVar4;
    lStack_68 = lVar2;
    _objc_msgSendSuper2(&lStack_70,PTR_s_bounds_1125a5ca8);
    lStack_80 = lVar4;
    lStack_78 = lVar2;
    _objc_msgSendSuper2(&lStack_80,PTR_s_setBounds__11263a898);
    lStack_90 = lVar4;
    lStack_88 = lVar2;
    _objc_msgSendSuper2(&lStack_90,PTR_s_bounds_1125a5ca8);
    lVar2 = _DAT_1130a33c8;
    bVar1 = false;
    if ((dVar10 == dVar11) && (bVar1 = false, !NAN(dVar13) && !NAN(dVar14))) {
      bVar1 = dVar13 == dVar14;
    }
    if (!bVar1) {
      _swift_beginAccess(lVar4 + _DAT_1130a33c8,auStack_a8,1,0);
      *(undefined1 *)(lVar4 + lVar2) = 0;
      FUN_1049b4be8();
    }
  }
  return;
}



/* Entry: 1049b8990; end: 1049b89ff;  */

undefined8 FUN_1049b8990(undefined8 param_1,long param_2)

{
  func_0x0001048db364();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1049b8a00; end: 1049b8a0b;  */

void FUN_1049b8a00(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if ((param_4 == 0) && (param_2 >> 0x3c < 0xf)) {
    _swift_beginAccess(lVar1 + 0x10,auStack_48,0,0);
    lVar1 = lVar1 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar1 != 0) {
      func_0x00010006c00c(param_1,param_2);
      FUN_1049b80c8(param_1,param_2,unaff_x20 + 0x18);
      func_0x0001000b44c0(param_1,param_2);
      _objc_release(lVar1);
    }
  }
  return;
}



/* Entry: 1049b8a0c; end: 1049b8a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1049b8a0c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = _DAT_1130a33d0;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar1 + _DAT_1130a33d0,auStack_48,0,0);
  _objc_msgSend(*(undefined8 *)(lVar1 + lVar3),PTR_s_setImage__1126481e8,uVar2);
  return;
}



/* Entry: 1049b8a68; end: 1049b8a93;  */

void FUN_1049b8a68(void)

{
  _swift_getInitializedObjCClass(&PTR_PTR_1129e82d0);
  return;
}



/* Entry: 1049b8a94; end: 1049b8a9b;  */

void FUN_1049b8a94(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001049b8a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x88))();
  return;
}



/* Entry: 1049b8a9c; end: 1049b8acb;  */

void FUN_1049b8a9c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1049b8acc; end: 1049b8b73;  */

void FUN_1049b8acc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    func_0x0001049c057c(param_1,0x11309c428);
    FUN_10499b524(auStack_50,param_2);
    _objc_release(param_2);
    func_0x0001049c057c(auStack_50,0x11309c428);
  }
  else {
    func_0x000100102924(param_1,auStack_50);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_10499ba0c(auStack_50,param_2,uVar1);
    _objc_release(param_2);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1049b8b74; end: 1049b8bf7;  */

void FUN_1049b8b74(long param_1,undefined8 param_2)

{
  long unaff_x21;
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar1 = *puVar3;
      uStack_38 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      FUN_1049bcc5c(&uStack_38,param_2);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(uVar1);
        return;
      }
      _swift_bridgeObjectRelease(uVar1);
      puVar3 = puVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



/* Entry: 1049b8bf8; end: 1049b8c13;  */

void FUN_1049b8bf8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049beee8(param_1,param_2,0x1130a05c8);
  return;
}



/* Entry: 1049b8c14; end: 1049b8de7;  */

undefined1  [16] FUN_1049b8c14(ulong param_1,undefined8 param_2,code *param_3,code *param_4)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  ulong *unaff_x19;
  byte *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_68 [56];
  
  uVar4 = 0xee00657461725f65;
  pcVar2 = (char *)0x6c69626f6d5f6266;
  pcVar6 = (char *)(param_1 & 0xff);
  puVar7 = &UNK_10dd4a1a0;
  switch(pcVar6) {
  default:
    pcVar6 = "urrentSession";
  case (char *)0x74:
  case (char *)0x82:
  case (char *)0xc2:
  case (char *)0xfa:
    pcVar6 = (char *)((long)pcVar6 + 0x960);
  case (char *)0x67:
  case (char *)0x7b:
  case (char *)0x8f:
  case (char *)0xa3:
  case (char *)0xab:
  case (char *)0xb3:
  case (char *)0xbb:
  case (char *)0xcf:
  case (char *)0xe3:
  case (char *)0xeb:
  case (char *)0xf3:
    pcVar6 = (char *)((long)pcVar6 + -0x20);
  case (char *)0x72:
  case (char *)0x9a:
  case (char *)0xda:
  case (char *)0xdc:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
  case (char *)0x9c:
    pcVar6 = (char *)0x16;
  case (char *)0x41:
  case (char *)0x8b:
  case (char *)0xcb:
    pcVar2 = (char *)((ulong)pcVar6 | 0xd000000000000008);
  case (char *)0x1e:
    auVar10._8_8_ = uVar4;
    auVar10._0_8_ = pcVar2;
    return auVar10;
  case (char *)0x1:
  case (char *)0x38:
    pcVar2 = (char *)0x16;
  case (char *)0x11:
  case (char *)0x45:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
    pcVar6 = "urrentSession";
  case (char *)0x61:
    pcVar6 = (char *)((long)pcVar6 + 0x980);
  case (char *)0x36:
    break;
  case (char *)0x2:
  case (char *)0x3a:
    pcVar6 = "fb_mobile_activate_app";
  case (char *)0x17:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
  case (char *)0x28:
  case (char *)0x4b:
    pcVar6 = (char *)0x16;
  case (char *)0x57:
    pcVar2 = (char *)(((ulong)pcVar6 | 0xd000000000000000) + 4);
  case (char *)0x33:
    auVar15._8_8_ = uVar4;
    auVar15._0_8_ = pcVar2;
    return auVar15;
  case (char *)0x3:
    pcVar6 = "fb_mobile_add_payment_info";
  case (char *)0x10:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
  case (char *)0x21:
  case (char *)0x44:
  case (char *)0x5b:
    pcVar6 = (char *)0xd000000000000016;
  case (char *)0x40:
    auVar16._0_8_ = (char *)((long)pcVar6 + -1);
    auVar16._8_8_ = uVar4;
    return auVar16;
  case (char *)0x4:
  case (char *)0x2d:
  case (char *)0x50:
  case (char *)0xd0:
    pcVar6 = "urrentSession";
  case (char *)0x3c:
    uVar4 = (ulong)((long)pcVar6 + 0x9c0) | 0x8000000000000000;
  case (char *)0x65:
  case (char *)0x79:
  case (char *)0x8d:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xcd:
  case (char *)0xe1:
  case (char *)0xe9:
  case (char *)0xf1:
    pcVar6 = (char *)0xd000000000000016;
  case (char *)0x60:
    pcVar2 = (char *)((long)pcVar6 + 3);
  case (char *)0x19:
    auVar12._8_8_ = uVar4;
    auVar12._0_8_ = pcVar2;
    return auVar12;
  case (char *)0x5:
  case (char *)0x22:
    pcVar6 = "urrentSession";
  case (char *)0x49:
    uVar4 = (ulong)((long)pcVar6 + 0x9e0) | 0x8000000000000000;
  case (char *)0x15:
    pcVar6 = (char *)0x9;
  case (char *)0x26:
  case (char *)0x55:
    puVar7 = (undefined *)0x16;
  case (char *)0x5a:
    puVar7 = (undefined *)((ulong)puVar7 | 0xd000000000000000);
  case (char *)0x3e:
    auVar18._0_8_ = (ulong)puVar7 | (ulong)pcVar6;
    auVar18._8_8_ = uVar4;
    return auVar18;
  case (char *)0x6:
  case (char *)0x47:
    pcVar2 = (char *)0x16;
  case (char *)0x1b:
  case (char *)0x5c:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffffffffffff | 0xd000000000000000);
    pcVar6 = "urrentSession";
  case (char *)0x1f:
  case (char *)0x4f:
    pcVar6 = (char *)((long)pcVar6 + 0xa20);
    break;
  case (char *)0x7:
    pcVar6 = "urrentSession";
  case (char *)0x51:
    pcVar6 = (char *)((long)pcVar6 + 0xa20);
  case (char *)0x1d:
  case (char *)0x59:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
  case (char *)0x34:
    pcVar6 = (char *)0x16;
  case (char *)0x2e:
  case (char *)0x89:
  case (char *)0xc9:
    auVar17._8_8_ = uVar4;
    auVar17._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 6;
    return auVar17;
  case (char *)0x8:
  case (char *)0x2c:
    pcVar6 = "fb_mobile_level_achieved";
  case (char *)0x14:
    uVar4 = (ulong)((long)pcVar6 + -0x20) | 0x8000000000000000;
  case (char *)0x48:
    pcVar6 = (char *)0x16;
  case (char *)0x39:
    auVar21._8_8_ = uVar4;
    auVar21._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 2;
    return auVar21;
  case (char *)0x9:
    pcVar6 = "urrentSession";
  case (char *)0xe4:
    uVar4 = (ulong)((long)pcVar6 + 0xa60) | 0x8000000000000000;
  case (char *)0x1a:
  case (char *)0x56:
    pcVar6 = (char *)0x16;
  case (char *)0x2b:
  case (char *)0x4e:
    auVar14._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) - 4;
    auVar14._8_8_ = uVar4;
    return auVar14;
  case (char *)0xb:
  case (char *)0x2f:
  case (char *)0x52:
  case (char *)0x5f:
    pcVar6 = "fb_mobile_search";
  case (char *)0x31:
    pcVar6 = (char *)((long)pcVar6 + -0x20);
  case (char *)0x3f:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
    pcVar6 = (char *)0x16;
  case (char *)0x58:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
  case (char *)0xe:
    pcVar2 = (char *)((long)pcVar6 + -6);
  case (char *)0x1c:
    auVar11._8_8_ = uVar4;
    auVar11._0_8_ = pcVar2;
    return auVar11;
  case (char *)0xc:
  case (char *)0x2a:
  case (char *)0x4d:
    pcVar6 = "urrentSession";
  case (char *)0x35:
    uVar4 = (ulong)((long)pcVar6 + 0xaa0) | 0x8000000000000000;
    pcVar6 = (char *)0x16;
  case (char *)0x23:
  case (char *)0x46:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
  case (char *)0x5d:
    pcVar2 = (char *)((ulong)pcVar6 | 1);
  case (char *)0x12:
  case (char *)0x3d:
    auVar13._8_8_ = uVar4;
    auVar13._0_8_ = pcVar2;
    return auVar13;
  case (char *)0xd:
  case (char *)0x13:
  case (char *)0x53:
    pcVar6 = "fb_mobile_tutorial_completion";
  case (char *)0x90:
    uVar4 = (ulong)((long)pcVar6 + -0x20) | 0x8000000000000000;
  case (char *)0x30:
  case (char *)0x37:
    pcVar6 = (char *)0x16;
  case (char *)0x5e:
    pcVar2 = (char *)(((ulong)pcVar6 | 0xd000000000000000) + 7);
  case (char *)0xa:
  case (char *)0x42:
    auVar19._8_8_ = uVar4;
    auVar19._0_8_ = pcVar2;
    return auVar19;
  case (char *)0x16:
  case (char *)0x27:
    unaff_x19 = (ulong *)pcVar6;
  case (char *)0xcc:
    pcVar6 = (char *)CONCAT71(uRam6c69626f6d5f6267,bRam6c69626f6d5f6266);
    param_3 = (code *)0x1130a05c8;
    uVar4 = uRam6c69626f6d5f626e;
  case (char *)0x68:
    func_0x0001049beee8(pcVar6,uVar4,param_3);
    *(char *)unaff_x19 = (char)pcVar6;
    auVar22._8_8_ = uVar4;
    auVar22._0_8_ = pcVar6;
    return auVar22;
  case (char *)0x18:
    param_3 = FUN_1049b8000;
  case (char *)0xe0:
  case (char *)0xe8:
  case (char *)0xf0:
    param_3 = param_3 + 0xc14;
  case (char *)0x4c:
    uVar8 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
    (*param_3)(uVar8);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar8,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    __ss6HasherV9_finalizeSiyF();
    auVar35._8_8_ = uVar8;
    auVar35._0_8_ = uVar4;
    return auVar35;
  case (char *)0x24:
  case (char *)0x3b:
    break;
  case (char *)0x25:
    uVar3 = (ulong)bRam6c69626f6d5f6266;
    uVar9 = (ulong)bRamee00657461725f65;
    FUN_1049b8c14();
    uVar8 = uVar4;
    FUN_1049b8c14();
    if (uVar3 == uVar9 && uVar4 == uVar8) {
      uVar1 = 1;
      uVar5 = uVar8;
    }
    else {
      uVar5 = uVar4;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar4,uVar9,uVar8,0);
      uVar1 = (uint)uVar3;
    }
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar8);
    auVar34._4_4_ = 0;
    auVar34._0_4_ = uVar1 & 1;
    auVar34._8_8_ = uVar5;
    return auVar34;
  case (char *)0x29:
    param_4 = FUN_1049b8000;
  case (char *)0x4a:
    uVar8 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68);
    (*(param_4 + 0xc14))(uVar8);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar8,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    __ss6HasherV9_finalizeSiyF();
    auVar36._8_8_ = uVar8;
    auVar36._0_8_ = uVar4;
    return auVar36;
  case (char *)0x64:
    uVar4 = 0x79636e;
  case (char *)0x66:
  case (char *)0x7a:
  case (char *)0x8e:
  case (char *)0xa2:
  case (char *)0xaa:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xce:
  case (char *)0xe2:
  case (char *)0xea:
  case (char *)0xf2:
    uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
  case (char *)0xac:
    pcVar2 = (char *)0x65727275635f6266;
  case (char *)0xb4:
    auVar26._8_8_ = uVar4;
    auVar26._0_8_ = pcVar2;
    return auVar26;
  case (char *)0x6a:
  case (char *)0x92:
  case (char *)0xd2:
    uVar4 = 0xeb0000000064695f;
  case (char *)0xbc:
    pcVar2 = (char *)0x6266;
  case (char *)0xa5:
    pcVar2 = (char *)((ulong)pcVar2 & 0xffff00000000ffff | 0x64726f5f0000);
  case (char *)0xa4:
    auVar27._0_8_ = (ulong)pcVar2 & 0xffffffffffff | 0x7265000000000000;
    auVar27._8_8_ = uVar4;
    return auVar27;
  case (char *)0x7c:
  case (char *)0xa6:
    auVar30._8_8_ = 0xee00657461725f65;
    auVar30._0_8_ = 0x695f6d756e5f6266;
    return auVar30;
  case (char *)0x7d:
  case (char *)0xad:
  case (char *)0xb5:
  case (char *)0xbd:
  case (char *)0xed:
  case (char *)0xf5:
    auVar31._8_8_ = 0xee00657461725f65;
    auVar31._0_8_ = 0x6c69626f6d5f6266;
    return auVar31;
  case (char *)0x7e:
  case (char *)0xae:
  case (char *)0xb6:
  case (char *)0xbe:
  case (char *)0xee:
  case (char *)0xf6:
    pcVar6 = (char *)((long)pcVar6 + -0x20);
  case (char *)0x69:
  case (char *)0x91:
  case (char *)0xd1:
  case (char *)0xe6:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
  case (char *)0xc8:
    auVar29._8_8_ = uVar4;
    auVar29._0_8_ = 0x6c69626f6d5f6266;
    return auVar29;
  case (char *)0x7f:
  case (char *)0xaf:
  case (char *)0xb7:
  case (char *)0xbf:
  case (char *)0xef:
  case (char *)0xf7:
    auVar33._8_8_ = ((ulong)pcVar6 | 0xea00000000000000) + 0xe06;
    auVar33._0_8_ = 0x65636375735f6266;
    return auVar33;
  case (char *)0x88:
    param_3 = (code *)0x1130a0398;
  case (char *)0xec:
    param_4 = (code *)0x1130a0000;
  case (char *)0x8c:
    func_0x0001049bedf0(0x6c69626f6d5f6266,0xee00657461725f65,param_3,param_4 + 0x550);
    auVar24._8_8_ = uVar4;
    auVar24._0_8_ = pcVar2;
    return auVar24;
  case (char *)0x8a:
  case (char *)0xca:
    pcVar2 = (char *)0x656d69546d5f6266;
    puVar7 = &UNK_10dd4a000;
  case (char *)0x78:
                    /* WARNING: Could not recover jumptable at 0x0001049b8ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(puVar7 + 0x1ae)[(long)pcVar6] * 4 + 0x1049b8ecc))(pcVar2);
    auVar25._8_8_ = uVar4;
    auVar25._0_8_ = pcVar2;
    return auVar25;
  case (char *)0xa0:
  case (char *)0xa8:
  case (char *)0xb0:
  case (char *)0xb8:
    uVar8 = (ulong)*unaff_x20;
    FUN_1049b8c14();
    *(ulong *)pcVar6 = uVar8;
    *(ulong *)((long)pcVar6 + 8) = uVar4;
    auVar23._8_8_ = uVar4;
    auVar23._0_8_ = uVar8;
    return auVar23;
  case (char *)0xe5:
    auVar32._8_8_ = 0xef65707961725f65;
    auVar32._0_8_ = 0x65746e6f635f6266;
    return auVar32;
  case (char *)0xf4:
    auVar28._8_8_ = (ulong)pcVar6 | 0x8000000000000000;
    auVar28._0_8_ = 0xd000000000000016;
    return auVar28;
  }
  auVar20._8_8_ = (ulong)((long)pcVar6 + -0x20) | 0x8000000000000000;
  auVar20._0_8_ = pcVar2;
  return auVar20;
}



/* Entry: 1049b8de8; end: 1049b8e17;  */

uint FUN_1049b8de8(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049b8c14();
  pbVar3 = param_2;
  FUN_1049b8c14();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049b8e18; end: 1049b8e73;  */

void FUN_1049b8e18(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049beee8(uVar1,param_2[1],0x1130a05c8);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049b8e74; end: 1049b8e97;  */

void FUN_1049b8e74(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049bedf0(param_1,param_2,0x1130a0398,0x1130a0550);
  return;
}



/* Entry: 1049b8e98; end: 1049b90af;  */

undefined1  [16] FUN_1049b8e98(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  char *in_x12;
  char *in_x13;
  char *in_x14;
  char *in_x15;
  ulong uVar13;
  char *unaff_x19;
  byte *unaff_x20;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  pcVar6 = (char *)0xe800000000000000;
  pcVar3 = (char *)0x656d6954676f6c5f;
  pcVar8 = (char *)(param_1 & 0xff);
  pcVar10 = "\x0e";
  uVar12 = (ulong)(byte)pcVar8[0x10dd4a1ae];
  pcVar11 = (char *)(uVar12 * 4 + 0x1049b8ecc);
  pcVar4 = pcVar8;
  switch(pcVar8) {
  default:
    pcVar3 = (char *)0x655f;
  case (char *)0x66:
  case (char *)0x74:
  case (char *)0xb4:
  case (char *)0xec:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffff0000ffff | 0x65760000);
  case (char *)0x59:
  case (char *)0x6d:
  case (char *)0x81:
  case (char *)0x95:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xc1:
  case (char *)0xd5:
  case (char *)0xdd:
  case (char *)0xe5:
  case (char *)0xf9:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffff0000ffffffff | 0x746e00000000);
  case (char *)0x64:
  case (char *)0x8c:
  case (char *)0xcc:
  case (char *)0xce:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffffffff | 0x614e000000000000);
  case (char *)0x8e:
    pcVar6 = (char *)0x656d;
  case (char *)0x33:
  case (char *)0x7d:
  case (char *)0xbd:
  case (char *)0xf5:
  case (char *)0xf6:
    auVar15._8_8_ = (ulong)pcVar6 & 0xffffffffffff | 0xea00000000000000;
    auVar15._0_8_ = pcVar3;
    return auVar15;
  case (char *)0x2:
    pcVar6 = (char *)0x7553;
  case (char *)0x13:
  case (char *)0x36:
  case (char *)0x4d:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xeb000000006d0000);
  case (char *)0x32:
    pcVar3 = (char *)0x65756c61765f;
  case (char *)0x43:
    auVar21._0_8_ = (ulong)pcVar3 & 0xffffffffffff | 0x6f54000000000000;
    auVar21._8_8_ = pcVar6;
    return auVar21;
  case (char *)0x3:
  case (char *)0x37:
    pcVar6 = (char *)0x736469;
  case (char *)0x53:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xeb00000000000000);
  case (char *)0x28:
    pcVar3 = (char *)0x6f63;
  case (char *)0x14:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffff0000ffff | 0x746e0000);
  case (char *)0x3b:
    auVar23._0_8_ = (ulong)pcVar3 & 0xffffffff | 0x5f746e6500000000;
    auVar23._8_8_ = pcVar6;
    return auVar23;
  case (char *)0x4:
  case (char *)0x2f:
    pcVar6 = (char *)0x695f746e;
  case (char *)0xd6:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xed00006400000000);
    break;
  case (char *)0x5:
  case (char *)0x45:
    pcVar6 = (char *)0x745f746e;
  case (char *)0x82:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xef65707900000000);
    break;
  case (char *)0x6:
    pcVar6 = (char *)0x69747069;
  case (char *)0x3a:
    pcVar6 = (char *)((ulong)pcVar6 | 0x6e6f00000000);
  case (char *)0x2b:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xee00000000000000);
    pcVar3 = (char *)0x645f6266;
  case (char *)0x17:
    auVar27._0_8_ = (ulong)pcVar3 & 0xffffffff | 0x7263736500000000;
    auVar27._8_8_ = pcVar6;
    return auVar27;
  case (char *)0x7:
    pcVar3 = (char *)0x6266;
  case (char *)0x18:
  case (char *)0x47:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffff0000ffff | 0x6c5f0000);
  case (char *)0x4c:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffff0000ffffffff | 0x766500000000);
  case (char *)0x30:
    auVar24._0_8_ = (ulong)pcVar3 & 0xffffffffffff | 0x6c65000000000000;
    auVar24._8_8_ = 0xe800000000000000;
    return auVar24;
  case (char *)0x8:
    pcVar8 = "fb_max_rating_value";
  case (char *)0x19:
    pcVar6 = (char *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
  case (char *)0xbe:
    pcVar3 = (char *)0xd000000000000013;
  case (char *)0x5a:
    auVar29._8_8_ = pcVar6;
    auVar29._0_8_ = pcVar3;
    return auVar29;
  case (char *)0x9:
    pcVar6 = (char *)0x6574;
  case (char *)0x1a:
  case (char *)0x3d:
    pcVar6 = (char *)((ulong)pcVar6 | 0x736d0000);
  case (char *)0x49:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xec00000000000000);
    pcVar3 = (char *)0x6266;
  case (char *)0x25:
    auVar20._0_8_ = (ulong)pcVar3 & 0xffff | 0x695f6d756e5f0000;
    auVar20._8_8_ = pcVar6;
    return auVar20;
  case (char *)0xa:
    pcVar8 = "urrentSession";
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
    pcVar8 = pcVar8 + 0x8e0;
  case (char *)0x3e:
    pcVar6 = (char *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
    pcVar8 = (char *)0x9;
    pcVar10 = (char *)0x10;
  case (char *)0x1b:
    pcVar10 = (char *)((ulong)pcVar10 | 0xd000000000000000);
  case (char *)0x3c:
    auVar28._0_8_ = (ulong)pcVar10 | (ulong)pcVar8;
    auVar28._8_8_ = pcVar6;
    return auVar28;
  case (char *)0xb:
    pcVar8 = "urrentSession";
  case (char *)0x1c:
  case (char *)0x3f:
    pcVar8 = pcVar8 + 0x900;
  case (char *)0x27:
    pcVar6 = (char *)((ulong)(pcVar8 + -0x20) | 0x8000000000000000);
    pcVar8 = (char *)0xd000000000000010;
  case (char *)0x15:
  case (char *)0x38:
    pcVar3 = (char *)((ulong)pcVar8 | 6);
  case (char *)0x4f:
    auVar18._8_8_ = pcVar6;
    auVar18._0_8_ = pcVar3;
    return auVar18;
  case (char *)0xc:
  case (char *)0x48:
    pcVar3 = (char *)0x10;
  case (char *)0x1d:
  case (char *)0x40:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffffffff | 0xd000000000000000);
    pcVar8 = "fb_search_string";
  case (char *)0x2c:
    auVar19._8_8_ = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
    auVar19._0_8_ = pcVar3;
    return auVar19;
  case (char *)0xd:
  case (char *)0x4e:
    pcVar8 = (char *)0xea0000000000656d;
  case (char *)0x11:
  case (char *)0x41:
    pcVar6 = pcVar8 + 0xe06;
  case (char *)0x16:
  case (char *)0x2d:
    pcVar3 = (char *)0x6375735f6266;
  case (char *)0x1e:
    auVar26._0_8_ = (ulong)pcVar3 & 0xffffffffffff | 0x6563000000000000;
    auVar26._8_8_ = pcVar6;
    return auVar26;
  case (char *)0xe:
    pcVar6 = (char *)0x695f;
  case (char *)0x1f:
  case (char *)0x42:
  case (char *)0xc2:
  case (char *)0xf2:
    pcVar6 = (char *)((ulong)pcVar6 | 0x640000);
  case (char *)0x2e:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xeb00000000000000);
    pcVar3 = (char *)0x6f5f6266;
  case (char *)0x57:
  case (char *)0x6b:
  case (char *)0x7f:
  case (char *)0x93:
  case (char *)0x9b:
  case (char *)0xa3:
  case (char *)0xab:
  case (char *)0xbf:
  case (char *)0xd3:
  case (char *)0xdb:
  case (char *)0xe3:
  case (char *)0xf7:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffff | 0x7265647200000000);
  case (char *)0x52:
    auVar17._8_8_ = pcVar6;
    auVar17._0_8_ = pcVar3;
    return auVar17;
  case (char *)0xf:
  case (char *)0x4b:
    pcVar6 = (char *)0xe700000000000000;
  case (char *)0x26:
    pcVar3 = (char *)0x6461;
  case (char *)0x20:
  case (char *)0x7b:
  case (char *)0xbb:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffff0000ffff | 0x745f0000);
  case (char *)0xf3:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffff | 0x65707900000000);
  case (char *)0x2a:
    auVar22._8_8_ = pcVar6;
    auVar22._0_8_ = pcVar3;
    return auVar22;
  case (char *)0x10:
    pcVar6 = (char *)0x636e;
  case (char *)0x21:
  case (char *)0x44:
  case (char *)0x51:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffffffff | 0xeb00000000790000);
  case (char *)0x23:
    pcVar3 = (char *)0x6266;
  case (char *)0x31:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffff00000000ffff | 0x7275635f0000);
  case (char *)0x4a:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffffffff | 0x6572000000000000);
  case (char *)0x0:
    auVar16._8_8_ = pcVar6;
    auVar16._0_8_ = pcVar3;
    return auVar16;
  case (char *)0x22:
  case (char *)0x29:
    break;
  case (char *)0x34:
code_r0x0001049b9020:
    pcVar3 = (char *)((ulong)pcVar3 & 0xffffffffffff | 0x6574000000000000);
  case (char *)0x39:
    auVar25._8_8_ = pcVar6;
    auVar25._0_8_ = pcVar3;
    return auVar25;
  case (char *)0x50:
    goto code_r0x0001049b9018;
  case (char *)0x56:
    in_ZR = (int)pcVar8 == 1;
    pcVar8 = (char *)0xe500000000000000;
  case (char *)0x58:
  case (char *)0x6c:
  case (char *)0x80:
  case (char *)0x94:
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
  case (char *)0xc0:
  case (char *)0xd4:
  case (char *)0xdc:
  case (char *)0xe4:
  case (char *)0xf8:
    uVar12 = 0x746f;
  case (char *)0x9e:
    pcVar3 = pcVar11;
    pcVar6 = pcVar10;
    if (!(bool)in_ZR) {
      pcVar3 = (char *)(uVar12 | 0x7265680000);
      pcVar6 = pcVar8;
    }
  case (char *)0xa6:
    auVar32._8_8_ = pcVar6;
    auVar32._0_8_ = pcVar3;
    return auVar32;
  case (char *)0x5c:
  case (char *)0x84:
  case (char *)0xc4:
  case (char *)0xfc:
    pcVar8 = "},N";
  case (char *)0xae:
    pcVar6 = (char *)((ulong)pcVar8 | 0x8000000000000000);
  case (char *)0x97:
    pcVar3 = (char *)0xd000000000000010;
  case (char *)0x96:
    auVar33._8_8_ = pcVar6;
    auVar33._0_8_ = pcVar3;
    return auVar33;
  case (char *)0x7a:
    pcVar4 = (char *)CONCAT71(uRam656d6954676f6c60,bRam656d6954676f6c5f);
    param_3 = 0x1130a0398;
    pcVar6 = pcRam656d6954676f6c67;
    unaff_x19 = pcVar8;
  case (char *)0xde:
    param_4 = (code *)0x1130a0000;
  case (char *)0x7e:
    func_0x0001049bedf0(pcVar4,pcVar6,param_3,param_4 + 0x550);
    *unaff_x19 = (char)pcVar4;
    auVar30._8_8_ = pcVar6;
    auVar30._0_8_ = pcVar4;
    return auVar30;
  case (char *)0x7c:
  case (char *)0xbc:
  case (char *)0xf4:
    pcVar3 = (char *)(ulong)*unaff_x20;
    unaff_x19 = pcVar8;
  case (char *)0x6a:
    FUN_1049b8e98();
    *(char **)unaff_x19 = pcVar3;
    *(char **)(unaff_x19 + 8) = pcVar6;
    auVar31._8_8_ = pcVar6;
    auVar31._0_8_ = pcVar3;
    return auVar31;
  case (char *)0x92:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xaa:
    uVar12 = (ulong)*unaff_x20;
    (*param_4)(uVar12);
    __sSS4hash4intoys6HasherVz_tF(0x656d6954676f6c5f,uVar12,pcVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pcVar6);
    auVar36._8_8_ = uVar12;
    auVar36._0_8_ = pcVar6;
    return auVar36;
  case (char *)0xe6:
    pcVar8 = (char *)0x6d6f74737563;
    uVar12 = (ulong)bRam656d6954676f6c5f;
    pcVar10 = (char *)(ulong)bRame800000000000000;
    in_x12 = (char *)0xe600000000000000;
    in_x13 = (char *)0xd000000000000010;
    pcVar11 = (char *)0x800000010f227430;
    in_ZR = bRam656d6954676f6c5f == 1;
    in_x14 = (char *)0xe500000000000000;
  case (char *)0x70:
  case (char *)0xa0:
  case (char *)0xa8:
  case (char *)0xb0:
  case (char *)0xe0:
  case (char *)0xe8:
  case (char *)0xfb:
    in_x15 = (char *)0x746f;
  case (char *)0x5b:
  case (char *)0x83:
  case (char *)0xc3:
  case (char *)0xd8:
    in_x15 = (char *)((ulong)in_x15 & 0xffffffff0000ffff | 0x65680000);
  case (char *)0xba:
    uVar13 = (ulong)in_x15 & 0xffff0000ffffffff;
    in_x15 = pcVar8;
    if (!(bool)in_ZR) {
      in_x12 = in_x14;
      in_x15 = (char *)(uVar13 | 0x7200000000);
    }
    in_ZR = (int)uVar12 == 0;
  case (char *)0x6e:
  case (char *)0x98:
    pcVar4 = pcVar11;
    if (!(bool)in_ZR) {
      pcVar4 = in_x12;
      in_x13 = in_x15;
    }
    iVar9 = (int)pcVar10;
    if (iVar9 != 1) {
      pcVar8 = (char *)0x726568746f;
    }
    pcVar10 = (char *)0xe600000000000000;
    if (iVar9 != 1) {
      pcVar10 = (char *)0xe500000000000000;
    }
    pcVar3 = (char *)0xd000000000000010;
    if (iVar9 != 0) {
      pcVar11 = pcVar10;
      pcVar3 = pcVar8;
    }
    if ((in_x13 == pcVar3) && (pcVar4 == pcVar11)) {
      uVar14 = 1;
    }
    else {
      pcVar6 = pcVar4;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (in_x13,pcVar4,pcVar3,pcVar11,0);
      uVar14 = (uint)in_x13;
    }
    _swift_bridgeObjectRelease(pcVar4);
    _swift_bridgeObjectRelease(pcVar11);
    pcVar3 = (char *)(ulong)(uVar14 & 1);
  case (char *)0x6f:
  case (char *)0x9f:
  case (char *)0xa7:
  case (char *)0xaf:
  case (char *)0xdf:
  case (char *)0xe7:
  case (char *)0xd7:
    auVar34._8_8_ = pcVar6;
    auVar34._0_8_ = pcVar3;
    return auVar34;
  case (char *)0xfa:
    pcVar8 = &stack0x00000008;
    pcVar3 = (char *)0x0;
  case (char *)0x71:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xe1:
  case (char *)0xe9:
    __ss6HasherV5_seedABSi_tcfC(pcVar8,pcVar3);
    iVar9 = (int)unaff_x19;
    uVar1 = 0x6d6f74737563;
    if (iVar9 != 1) {
      uVar1 = 0x726568746f;
    }
    uVar2 = 0xe600000000000000;
    if (iVar9 != 1) {
      uVar2 = 0xe500000000000000;
    }
    uVar5 = 0x800000010f227430;
    uVar7 = 0xd000000000000010;
    if (iVar9 != 0) {
      uVar5 = uVar2;
      uVar7 = uVar1;
    }
    __sSS4hash4intoys6HasherVz_tF(&stack0x00000008,uVar7,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    __ss6HasherV9_finalizeSiyF();
    auVar35._8_8_ = uVar7;
    auVar35._0_8_ = uVar5;
    return auVar35;
  }
  pcVar3 = (char *)0x6266;
code_r0x0001049b9018:
  pcVar3 = (char *)((ulong)pcVar3 & 0xffff00000000ffff | 0x6e6f635f0000);
  goto code_r0x0001049b9020;
}



/* Entry: 1049b90b0; end: 1049b90df;  */

uint FUN_1049b90b0(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049b8e98();
  pbVar3 = param_2;
  FUN_1049b8e98();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049b90e0; end: 1049b9143;  */

void FUN_1049b90e0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049bedf0(uVar1,param_2[1],0x1130a0398,0x1130a0550);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049b9144; end: 1049b9147;  */

undefined4 FUN_1049b9144(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == -0x2fffffffffffffee && param_2 == -0x7ffffffef0dd8bb0) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000012,0x800000010f227450,param_1,param_2,0), (uVar1 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 0;
  }
  else if ((param_1 == -0x2fffffffffffffef) && (param_2 == -0x7ffffffef0dd8b90)) {
    _swift_bridgeObjectRelease(0x800000010f227470);
    uVar2 = 1;
  }
  else {
    uVar1 = 0xd000000000000011;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000011,0x800000010f227470,param_1,param_2,0);
    _swift_bridgeObjectRelease(param_2);
    uVar2 = 1;
    if ((uVar1 & 1) == 0) {
      uVar2 = 2;
    }
  }
  return uVar2;
}



/* Entry: 1049b9148; end: 1049b919b;  */

undefined1  [16] FUN_1049b9148(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x6d6f74737563;
    if (param_1 != '\x01') {
      uVar1 = 0x726568746f;
    }
    uVar2 = 0xe600000000000000;
    if (param_1 != '\x01') {
      uVar2 = 0xe500000000000000;
    }
    auVar3._8_8_ = uVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = 0x800000010f227430;
  auVar4._0_8_ = 0xd000000000000010;
  return auVar4;
}



/* Entry: 1049b919c; end: 1049b9287;  */

uint FUN_1049b919c(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  cVar5 = *param_1;
  cVar6 = *param_2;
  lVar3 = 0x6d6f74737563;
  if (cVar5 != '\x01') {
    lVar3 = 0x726568746f;
  }
  lVar1 = -0x1a00000000000000;
  if (cVar5 != '\x01') {
    lVar1 = -0x1b00000000000000;
  }
  lVar2 = -0x7ffffffef0dd8bd0;
  lVar8 = -0x2ffffffffffffff0;
  if (cVar5 != '\0') {
    lVar2 = lVar1;
    lVar8 = lVar3;
  }
  lVar3 = 0x6d6f74737563;
  if (cVar6 != '\x01') {
    lVar3 = 0x726568746f;
  }
  lVar1 = -0x1a00000000000000;
  if (cVar6 != '\x01') {
    lVar1 = -0x1b00000000000000;
  }
  lVar4 = -0x7ffffffef0dd8bd0;
  lVar7 = -0x2ffffffffffffff0;
  if (cVar6 != '\0') {
    lVar4 = lVar1;
    lVar7 = lVar3;
  }
  if ((lVar8 == lVar7) && (lVar2 == lVar4)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar8,lVar2,lVar7,lVar4,0);
    uVar9 = (uint)lVar8;
  }
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar4);
  return uVar9 & 1;
}



/* Entry: 1049b9288; end: 1049b945f;  */

void FUN_1049b9288(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0x6d6f74737563;
  if (cVar4 != '\x01') {
    uVar1 = 0x726568746f;
  }
  uVar2 = 0xe600000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0x800000010f227430;
  uVar5 = 0xd000000000000010;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049b9460; end: 1049b94bb;  */

void FUN_1049b9460(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x6d6f74737563;
  if (cVar4 != '\x01') {
    uVar1 = 0x726568746f;
  }
  uVar2 = 0xe600000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe500000000000000;
  }
  uVar3 = 0x800000010f227430;
  uVar5 = 0xd000000000000010;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 1049b94bc; end: 1049b94df;  */

void FUN_1049b94bc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049bee6c(param_1,param_2,0x1130a0788,0x1130a0958);
  return;
}



/* Entry: 1049b94e0; end: 1049b9703;  */

undefined1  [16] FUN_1049b94e0(ulong param_1,undefined8 param_2,code *param_3)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puVar4;
  char *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong *puVar9;
  ulong *in_x12;
  ulong *in_x13;
  ulong *in_x14;
  ulong *puVar10;
  ulong *in_x15;
  ulong *puVar11;
  ulong *unaff_x19;
  byte *unaff_x20;
  ulong uVar12;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_68 [56];
  
  puVar2 = (ulong *)0xe700000000000000;
  puVar1 = (ulong *)0x64695f6e6f6e61;
  puVar4 = (ulong *)(param_1 & 0xff);
  puVar6 = (ulong *)&UNK_10dd4a1bf;
  puVar9 = (ulong *)(ulong)*(byte *)((long)puVar4 + 0x10dd4a1bf);
  puVar7 = (ulong *)((long)puVar9 * 4 + 0x1049b9514);
  uVar3 = (uint)puVar4;
  puVar10 = in_x14;
  puVar11 = in_x15;
  switch(puVar4) {
  default:
    puVar2 = (ulong *)0x695f;
  case (ulong *)0x55:
  case (ulong *)0x63:
  case (ulong *)0xa3:
  case (ulong *)0xdb:
  case (ulong *)0xf5:
    puVar2 = (ulong *)((ulong)puVar2 | 0x640000);
  case (ulong *)0x48:
  case (ulong *)0x5c:
  case (ulong *)0x70:
  case (ulong *)0x84:
  case (ulong *)0x8c:
  case (ulong *)0x94:
  case (ulong *)0x9c:
  case (ulong *)0xb0:
  case (ulong *)0xc4:
  case (ulong *)0xcc:
  case (ulong *)0xd4:
  case (ulong *)0xe8:
  case (ulong *)0xfc:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xeb00000000000000);
  case (ulong *)0x53:
  case (ulong *)0x7b:
  case (ulong *)0xbb:
  case (ulong *)0xbd:
  case (ulong *)0xf3:
    puVar1 = (ulong *)0x7061;
  case (ulong *)0x7d:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffffffff0000ffff | 0x5f700000);
  case (ulong *)0x22:
  case (ulong *)0x6c:
  case (ulong *)0xac:
  case (ulong *)0xe4:
  case (ulong *)0xe5:
    auVar13._0_8_ = (ulong)puVar1 & 0xffffffff | 0x7265737500000000;
    auVar13._8_8_ = puVar2;
    return auVar13;
  case (ulong *)0x2:
  case (ulong *)0x25:
  case (ulong *)0x3c:
    puVar2 = (ulong *)0x695f7265;
  case (ulong *)0x21:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xed00006400000000);
    puVar1 = (ulong *)0x6461;
  case (ulong *)0x32:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffff00000000ffff | 0x747265760000);
  case (ulong *)0x3a:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffffffffffff | 0x7369000000000000);
  case (ulong *)0x15:
    auVar19._8_8_ = puVar2;
    auVar19._0_8_ = puVar1;
    return auVar19;
  case (ulong *)0x3:
    puVar1 = (ulong *)0x6170;
  case (ulong *)0x2a:
    auVar21._0_8_ = (ulong)puVar1 & 0xffff | 0x64695f65670000;
    auVar21._8_8_ = 0xe700000000000000;
    return auVar21;
  case (ulong *)0x4:
  case (ulong *)0x27:
    puVar4 = (ulong *)0x10f222000;
  case (ulong *)0x3e:
    puVar4 = puVar4 + 0x166;
  case (ulong *)0x1e:
    puVar2 = (ulong *)((ulong)(puVar4 + -4) | 0x8000000000000000);
  case (ulong *)0xc5:
    puVar1 = (ulong *)0xd000000000000013;
  case (ulong *)0x37:
    auVar16._8_8_ = puVar2;
    auVar16._0_8_ = puVar1;
    return auVar16;
  case (ulong *)0x5:
  case (ulong *)0x1c:
    auVar24._8_8_ = 0xe200000000000000;
    auVar24._0_8_ = 0x6475;
    return auVar24;
  case (ulong *)0x6:
    puVar2 = (ulong *)0x800000010f222b30;
  case (ulong *)0xc1:
  case (ulong *)0xc9:
  case (ulong *)0xd1:
    puVar4 = (ulong *)0x9;
  case (ulong *)0x2d:
    auVar26._0_8_ = (ulong)puVar4 | 0xd000000000000012;
    auVar26._8_8_ = puVar2;
    return auVar26;
  case (ulong *)0x7:
  case (ulong *)0x36:
    puVar4 = (ulong *)0x10f222000;
  case (ulong *)0x3b:
    puVar4 = puVar4 + 0x16e;
  case (ulong *)0x1f:
    puVar2 = (ulong *)((ulong)(puVar4 + -4) | 0x8000000000000000);
  case (ulong *)0x34:
    puVar4 = (ulong *)0xd000000000000012;
  case (ulong *)0x71:
    auVar22._8_8_ = puVar2;
    auVar22._0_8_ = (char *)((long)puVar4 + 10);
    return auVar22;
  case (ulong *)0x8:
    puVar2 = (ulong *)0x6569765f;
  case (ulong *)0xad:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xee00737700000000);
    puVar1 = (ulong *)0x6f63;
  case (ulong *)0x49:
    auVar28._0_8_ = (ulong)puVar1 & 0xffff | 0x72656469736e0000;
    auVar28._8_8_ = puVar2;
    return auVar28;
  case (ulong *)0x9:
  case (ulong *)0x2c:
    puVar2 = (ulong *)0x6b6f;
  case (ulong *)0x38:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xec0000006e650000);
  case (ulong *)0x14:
    auVar18._8_8_ = puVar2;
    auVar18._0_8_ = 0x745f656369766564;
    return auVar18;
  case (ulong *)0xa:
    puVar1 = (ulong *)0x7865;
  case (ulong *)0x2b:
    auVar27._0_8_ = (ulong)puVar1 & 0xffff | 0x6f666e69740000;
    auVar27._8_8_ = 0xe700000000000000;
    return auVar27;
  case (ulong *)0xb:
  case (ulong *)0x2e:
    puVar1 = (ulong *)0x12;
  case (ulong *)0x16:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffffffffffff | 0xd000000000000000);
    pcVar5 = "include_dwell_data";
    break;
  case (ulong *)0xc:
  case (ulong *)0x2f:
    puVar1 = (ulong *)0xd000000000000012;
    puVar4 = (ulong *)0x10f222000;
  case (ulong *)0x1b:
    pcVar5 = (char *)(puVar4 + 0x17a);
    break;
  case (ulong *)0xd:
    puVar2 = (ulong *)0x800000010f222bd0;
  case (ulong *)0x29:
    puVar4 = (ulong *)0x12;
  case (ulong *)0x1a:
    auVar25._0_8_ = ((ulong)puVar4 | 0xd000000000000000) - 2;
    auVar25._8_8_ = puVar2;
    return auVar25;
  case (ulong *)0xe:
  case (ulong *)0x31:
  case (ulong *)0xb1:
  case (ulong *)0xe1:
    puVar4 = (ulong *)0x10f222000;
  case (ulong *)0x1d:
    puVar4 = puVar4 + 0x17e;
  case (ulong *)0xfa:
    puVar2 = (ulong *)((ulong)puVar4 | 0x8000000000000000);
  case (ulong *)0x46:
  case (ulong *)0x5a:
  case (ulong *)0x6e:
  case (ulong *)0x82:
  case (ulong *)0x8a:
  case (ulong *)0x92:
  case (ulong *)0x9a:
  case (ulong *)0xae:
  case (ulong *)0xc2:
  case (ulong *)0xca:
  case (ulong *)0xd2:
  case (ulong *)0xe6:
    puVar4 = (ulong *)0xd000000000000012;
  case (ulong *)0x41:
    auVar15._0_8_ = (char *)((long)puVar4 + -1);
    auVar15._8_8_ = puVar2;
    return auVar15;
  case (ulong *)0xf:
  case (ulong *)0x6a:
  case (ulong *)0xaa:
    puVar2 = (ulong *)0x6164;
  case (ulong *)0xe2:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xec00000061740000);
  case (ulong *)0x19:
    puVar1 = (ulong *)0x6572;
  case (ulong *)0x26:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffff00000000ffff | 0x706965630000);
  case (ulong *)0x42:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffffffffffff | 0x5f74000000000000);
  case (ulong *)0x17:
    auVar20._8_8_ = puVar2;
    auVar20._0_8_ = puVar1;
    return auVar20;
  case (ulong *)0x10:
  case (ulong *)0x33:
  case (ulong *)0x40:
    puVar2 = (ulong *)0x73656d;
  case (ulong *)0x12:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xeb00000000000000);
  case (ulong *)0x20:
    puVar1 = (ulong *)0x5f6c7275;
  case (ulong *)0x39:
    auVar14._0_8_ = (ulong)puVar1 & 0xffffffff | 0x6568637300000000;
    auVar14._8_8_ = puVar2;
    return auVar14;
  case (ulong *)0x11:
  case (ulong *)0x18:
    puVar2 = (ulong *)0x695f;
  case (ulong *)0x3f:
    puVar2 = (ulong *)((ulong)puVar2 & 0xffffffffffff | 0xec00000073640000);
  case (ulong *)0x23:
    puVar1 = (ulong *)0x6163;
  case (ulong *)0x28:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffffffff0000ffff | 0x706d0000);
  case (ulong *)0x3d:
    puVar1 = (ulong *)((ulong)puVar1 & 0xffffffff | 0x6e67696100000000);
  case (ulong *)0x0:
  case (ulong *)0x30:
    auVar23._8_8_ = puVar2;
    auVar23._0_8_ = puVar1;
    return auVar23;
  case (ulong *)0x45:
    puVar7 = (ulong *)0x72657375;
  case (ulong *)0x47:
  case (ulong *)0x5b:
  case (ulong *)0x6f:
  case (ulong *)0x83:
  case (ulong *)0x8b:
  case (ulong *)0x93:
  case (ulong *)0x9b:
  case (ulong *)0xaf:
  case (ulong *)0xc3:
  case (ulong *)0xcb:
  case (ulong *)0xd3:
  case (ulong *)0xe7:
  case (ulong *)0xfb:
    puVar7 = (ulong *)((ulong)puVar7 & 0xffff0000ffffffff | 0x645f00000000);
  case (ulong *)0x8d:
    puVar7 = (ulong *)((ulong)puVar7 | 0x7461000000000000);
    in_ZR = uVar3 == 2;
    puVar9 = (ulong *)0x617461;
  case (ulong *)0x95:
    puVar9 = (ulong *)((ulong)puVar9 | 0xeb00000000000000);
  case (ulong *)0x4b:
  case (ulong *)0x73:
  case (ulong *)0xb3:
  case (ulong *)0xeb:
    in_x12 = (ulong *)0x6d6f74737563;
  case (ulong *)0x9d:
    in_x12 = (ulong *)((ulong)in_x12 & 0xffffffffffff | 0x645f000000000000);
  case (ulong *)0x86:
    in_x13 = (ulong *)0x746e6576;
  case (ulong *)0x85:
    in_x13 = (ulong *)((ulong)in_x13 & 0xffffffff | 0xed00007300000000);
    in_x14 = (ulong *)0x6d6f74737563;
  case (ulong *)0xd5:
    if (!(bool)in_ZR) {
      puVar9 = in_x13;
      in_x12 = (ulong *)((ulong)in_x14 & 0xffffffffffff | 0x655f000000000000);
    }
    if (uVar3 != 0) {
      puVar6 = (ulong *)0xe800000000000000;
      puVar7 = (ulong *)0x617461645f707061;
    }
    puVar1 = in_x12;
    puVar2 = puVar9;
    if (uVar3 < 2) {
      puVar1 = puVar7;
      puVar2 = puVar6;
    }
  case (ulong *)0x5f:
  case (ulong *)0x8f:
  case (ulong *)0x97:
  case (ulong *)0x9f:
  case (ulong *)0xcf:
  case (ulong *)0xd7:
  case (ulong *)0xea:
  case (ulong *)0xff:
    auVar31._8_8_ = puVar2;
    auVar31._0_8_ = puVar1;
    return auVar31;
  case (ulong *)0x4a:
  case (ulong *)0x72:
  case (ulong *)0xb2:
  case (ulong *)0xc7:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  case (ulong *)0xa9:
    *(byte **)((long)register0x00000008 + 0x10) = unaff_x20;
    *(ulong **)((long)register0x00000008 + 0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x20) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x28) = unaff_x30;
    puVar4 = (ulong *)0x61;
  case (ulong *)0x5d:
  case (ulong *)0x87:
    puVar4 = (ulong *)((ulong)puVar4 | 0xe900000000000000);
    puVar6 = (ulong *)0x7461645f72657375;
    puVar9 = (ulong *)(ulong)bRam0064695f6e6f6e61;
    puVar7 = (ulong *)(ulong)bRame700000000000000;
    in_x13 = (ulong *)0xeb00000000617461;
    in_x12 = (ulong *)0x645f6d6f74737563;
    if (bRam0064695f6e6f6e61 != 2) {
      in_x13 = (ulong *)0xed000073746e6576;
      in_x12 = (ulong *)0x655f6d6f74737563;
    }
    in_x14 = (ulong *)0xe800000000000000;
    in_x15 = (ulong *)0x617461645f707061;
    in_ZR = bRam0064695f6e6f6e61 == 0;
  case (ulong *)0x5e:
  case (ulong *)0x8e:
  case (ulong *)0x96:
  case (ulong *)0x9e:
  case (ulong *)0xce:
  case (ulong *)0xd6:
    puVar10 = puVar4;
    puVar11 = puVar6;
    if (!(bool)in_ZR) {
      puVar10 = in_x14;
      puVar11 = in_x15;
    }
  case (ulong *)0xfe:
    iVar8 = (int)puVar9;
    in_OV = SBORROW4(iVar8,1);
    in_NG = iVar8 + -1 < 0;
    in_ZR = iVar8 == 1;
  case (ulong *)0xc6:
    unaff_x19 = in_x13;
    puVar1 = in_x12;
    if ((bool)in_ZR || in_NG != in_OV) {
      unaff_x19 = puVar10;
      puVar1 = puVar11;
    }
    in_ZR = (int)puVar7 == 2;
    puVar9 = (ulong *)0x6d6f74737563;
  case (ulong *)0xe9:
  case (ulong *)0xfd:
    puVar9 = (ulong *)((ulong)puVar9 | 0x645f000000000000);
    in_x12 = (ulong *)0x7461;
  case (ulong *)0x60:
  case (ulong *)0x90:
  case (ulong *)0x98:
  case (ulong *)0xa0:
  case (ulong *)0xd0:
  case (ulong *)0xd8:
    in_x12 = (ulong *)((ulong)in_x12 & 0xffff0000ffff | 0xeb00000000610000);
    in_x13 = (ulong *)0x7563;
  case (ulong *)0xf9:
    if (!(bool)in_ZR) {
      in_x12 = (ulong *)0xed000073746e6576;
      puVar9 = (ulong *)((ulong)in_x13 & 0xffff | 0x655f6d6f74730000);
    }
    if ((uint)puVar7 != 0) {
      puVar4 = (ulong *)0xe800000000000000;
      puVar6 = (ulong *)0x617461645f707061;
    }
    if ((uint)puVar7 < 2) {
      in_x12 = puVar4;
      puVar9 = puVar6;
    }
    if ((puVar1 == puVar9) && (unaff_x19 == in_x12)) {
      uVar3 = 1;
    }
    else {
      puVar2 = unaff_x19;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar1,unaff_x19,puVar9,in_x12,0);
      uVar3 = (uint)puVar1;
    }
    _swift_bridgeObjectRelease(unaff_x19);
    _swift_bridgeObjectRelease(in_x12);
    auVar32._4_4_ = 0;
    auVar32._0_4_ = uVar3 & 1;
    auVar32._8_8_ = puVar2;
    return auVar32;
  case (ulong *)0x59:
    uVar12 = (ulong)*unaff_x20;
    FUN_1049b94e0();
    *puVar4 = uVar12;
    puVar4[1] = (ulong)puVar2;
    auVar30._8_8_ = puVar2;
    auVar30._0_8_ = uVar12;
    return auVar30;
  case (ulong *)0x69:
    unaff_x19 = puVar4;
  case (ulong *)0xcd:
    puVar2 = puRam0064695f6e6f6e69;
    puVar4 = (ulong *)CONCAT71(uRam0064695f6e6f6e62,bRam0064695f6e6f6e61);
  case (ulong *)0x6d:
    puVar1 = puVar4;
    func_0x0001049bee6c(puVar1,puVar2,0x1130a0788,0x1130a0958);
    *(char *)unaff_x19 = (char)puVar1;
  case (ulong *)0x6b:
  case (ulong *)0xab:
  case (ulong *)0xe3:
    auVar29._8_8_ = puVar2;
    auVar29._0_8_ = puVar1;
    return auVar29;
  case (ulong *)0x81:
  case (ulong *)0x89:
  case (ulong *)0x91:
  case (ulong *)0x99:
    uVar12 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
    (*param_3)(uVar12);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar12,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    __ss6HasherV9_finalizeSiyF();
    auVar33._8_8_ = uVar12;
    auVar33._0_8_ = puVar2;
    return auVar33;
  }
  auVar17._8_8_ = (ulong)((long)pcVar5 + -0x20) | 0x8000000000000000;
  auVar17._0_8_ = puVar1;
  return auVar17;
}



/* Entry: 1049b9704; end: 1049b9733;  */

uint FUN_1049b9704(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049b94e0();
  pbVar3 = param_2;
  FUN_1049b94e0();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049b9734; end: 1049b9797;  */

void FUN_1049b9734(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049bee6c(uVar1,param_2[1],0x1130a0788,0x1130a0958);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049b9798; end: 1049b979b;  */

ulong FUN_1049b9798(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar2) {
    uVar2 = 4;
  }
  return uVar2;
}



/* Entry: 1049b979c; end: 1049b982f;  */

undefined1  [16] FUN_1049b979c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0xe900000000000061;
  uVar1 = 0xeb00000000617461;
  uVar2 = 0x645f6d6f74737563;
  if (param_1 != 2) {
    uVar1 = 0xed000073746e6576;
    uVar2 = 0x655f6d6f74737563;
  }
  uVar3 = 0x7461645f72657375;
  if (param_1 != 0) {
    uVar4 = 0xe800000000000000;
    uVar3 = 0x617461645f707061;
  }
  if (param_1 < 2) {
    uVar1 = uVar4;
    uVar2 = uVar3;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 1049b9830; end: 1049b9997;  */

uint FUN_1049b9830(byte *param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = -0x16ffffffffffff9f;
  bVar3 = *param_1;
  bVar4 = *param_2;
  lVar2 = -0x14ffffffff9e8b9f;
  lVar7 = 0x645f6d6f74737563;
  if (bVar3 != 2) {
    lVar2 = -0x12ffff8c8b919a8a;
    lVar7 = 0x655f6d6f74737563;
  }
  lVar1 = lVar8;
  lVar5 = 0x7461645f72657375;
  if (bVar3 != 0) {
    lVar1 = -0x1800000000000000;
    lVar5 = 0x617461645f707061;
  }
  if (bVar3 < 2) {
    lVar2 = lVar1;
    lVar7 = lVar5;
  }
  lVar1 = -0x14ffffffff9e8b9f;
  lVar5 = 0x645f6d6f74737563;
  if (bVar4 != 2) {
    lVar1 = -0x12ffff8c8b919a8a;
    lVar5 = 0x655f6d6f74737563;
  }
  lVar6 = 0x7461645f72657375;
  if (bVar4 != 0) {
    lVar8 = -0x1800000000000000;
    lVar6 = 0x617461645f707061;
  }
  if (bVar4 < 2) {
    lVar1 = lVar8;
    lVar5 = lVar6;
  }
  if ((lVar7 == lVar5) && (lVar2 == lVar1)) {
    uVar9 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar7,lVar2,lVar5,lVar1,0);
    uVar9 = (uint)lVar7;
  }
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(lVar1);
  return uVar9 & 1;
}



/* Entry: 1049b9998; end: 1049b9c23;  */

void FUN_1049b9998(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xe900000000000061;
  uVar1 = 0xeb00000000617461;
  uVar3 = 0x645f6d6f74737563;
  if (bVar2 != 2) {
    uVar1 = 0xed000073746e6576;
    uVar3 = 0x655f6d6f74737563;
  }
  uVar4 = 0x7461645f72657375;
  if (bVar2 != 0) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x617461645f707061;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar3,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049b9c24; end: 1049b9cbb;  */

void FUN_1049b9c24(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar5 = 0xe900000000000061;
  uVar1 = 0xeb00000000617461;
  uVar3 = 0x645f6d6f74737563;
  if (bVar2 != 2) {
    uVar1 = 0xed000073746e6576;
    uVar3 = 0x655f6d6f74737563;
  }
  uVar4 = 0x7461645f72657375;
  if (bVar2 != 0) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x617461645f707061;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1049b9cbc; end: 1049b9cdf;  */

void FUN_1049b9cbc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049bedf0(param_1,param_2,0x1130a09f8,0x1130a0bb0);
  return;
}



/* Entry: 1049b9ce0; end: 1049b9eb3;  */

undefined1  [16]
FUN_1049b9ce0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  char *unaff_x19;
  byte *unaff_x20;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_68 [56];
  
  uVar4 = 0xe500000000000000;
  pbVar2 = (byte *)0x65756c6176;
  pcVar7 = (char *)(param_1 & 0xff);
  switch(pcVar7) {
  case (char *)0x0:
    goto code_r0x0001049b9d38;
  default:
    pbVar2 = (byte *)0x7665;
  case (char *)0x43:
  case (char *)0x51:
  case (char *)0x91:
  case (char *)0xc9:
  case (char *)0xe3:
  case (char *)0xf1:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x6e650000);
    goto code_r0x0001049b9d18;
  case (char *)0x2:
    pbVar2 = (byte *)0x616e5f746e657665;
    goto code_r0x0001049b9ddc;
  case (char *)0x3:
    uVar4 = 0x6469;
  case (char *)0x58:
  case (char *)0x98:
    uVar4 = uVar4 | 0x730000;
    goto code_r0x0001049b9e08;
  case (char *)0x4:
    uVar4 = 0xe800000000000000;
    pbVar2 = (byte *)0x6e65746e6f63;
  case (char *)0x15:
    pbVar2 = (byte *)((ulong)pbVar2 | 0x7374000000000000);
code_r0x0001049b9d88:
    auVar15._8_8_ = uVar4;
    auVar15._0_8_ = pbVar2;
    return auVar15;
  case (char *)0x5:
    uVar4 = 0x65707974;
  case (char *)0x18:
    uVar4 = uVar4 & 0xffffffffffff | 0xec00000000000000;
    break;
  case (char *)0x6:
    uVar4 = 0x6f69;
  case (char *)0x2d:
    uVar4 = uVar4 & 0xffffffffffff | 0xeb000000006e0000;
    goto code_r0x0001049b9e64;
  case (char *)0x7:
    pbVar2 = (byte *)0x656c;
  case (char *)0x14:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff00000000ffff | 0x6c65760000);
code_r0x0001049b9e1c:
    auVar20._8_8_ = 0xe500000000000000;
    auVar20._0_8_ = pbVar2;
    return auVar20;
  case (char *)0x8:
    pbVar2 = (byte *)0xd000000000000010;
    uVar4 = 0x800000010f222c70;
  case (char *)0xf7:
    auVar25._8_8_ = uVar4;
    auVar25._0_8_ = pbVar2;
    return auVar25;
  case (char *)0x9:
    uVar4 = 0xe900000000000073;
    pbVar2 = (byte *)0x5f6d756e;
  case (char *)0x1a:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x746900000000);
code_r0x0001049b9dc4:
    auVar17._0_8_ = (ulong)pbVar2 | 0x6d65000000000000;
    auVar17._8_8_ = uVar4;
    return auVar17;
  case (char *)0xa:
    uVar4 = 0x800000010f222c90;
    pbVar2 = (byte *)0xd000000000000016;
  case (char *)0x17:
    auVar24._8_8_ = uVar4;
    auVar24._0_8_ = pbVar2;
    return auVar24;
  case (char *)0xb:
    pcVar7 = "registration_method";
  case (char *)0xe8:
  case (char *)0xfc:
    pcVar7 = pcVar7 + -0x20;
    goto code_r0x0001049b9d60;
  case (char *)0xc:
    uVar4 = 0x6e697274;
  case (char *)0xb3:
    uVar4 = uVar4 & 0xffffffffffff | 0xed00006700000000;
    pbVar2 = (byte *)0x6573;
    goto code_r0x0001049b9da0;
  case (char *)0xd:
    uVar4 = 0xe700000000000000;
    pbVar2 = (byte *)0x7573;
  case (char *)0x22:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff00000000ffff | 0x736563630000);
code_r0x0001049b9e50:
    auVar22._0_8_ = (ulong)pbVar2 | 0x73000000000000;
    auVar22._8_8_ = uVar4;
    return auVar22;
  case (char *)0xe:
    uVar4 = 0xe800000000000000;
    pbVar2 = (byte *)0x726f;
  case (char *)0x27:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff00000000ffff | 0x64695f7265640000);
code_r0x0001049b9d50:
    auVar13._8_8_ = uVar4;
    auVar13._0_8_ = pbVar2;
    return auVar13;
  case (char *)0xf:
    uVar4 = 0xe700000000000000;
    pbVar2 = (byte *)0x745f6461;
  case (char *)0x20:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x65707900000000);
code_r0x0001049b9dfc:
    auVar19._8_8_ = uVar4;
    auVar19._0_8_ = pbVar2;
    return auVar19;
  case (char *)0x10:
  case (char *)0x5a:
  case (char *)0x9a:
  case (char *)0xd2:
  case (char *)0xd3:
  case (char *)0xfa:
    uVar4 = 0xe800000000000000;
    pbVar2 = (byte *)0x72727563;
  case (char *)0x21:
  case (char *)0x2e:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x79636e6500000000);
code_r0x0001049b9d38:
    auVar12._8_8_ = uVar4;
    auVar12._0_8_ = pbVar2;
    return auVar12;
  case (char *)0x11:
    goto code_r0x0001049b9e64;
  case (char *)0x13:
  case (char *)0x2a:
    goto code_r0x0001049b9de0;
  case (char *)0x16:
    goto code_r0x0001049b9e68;
  case (char *)0x19:
    uVar10 = (ulong)*unaff_x20;
    FUN_1049b9ce0(uVar10);
    __sSS4hash4intoys6HasherVz_tF(0x65756c6176,uVar10,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    auVar57._8_8_ = uVar10;
    auVar57._0_8_ = uVar4;
    return auVar57;
  case (char *)0x1c:
    goto code_r0x0001049b9d70;
  case (char *)0x1d:
    goto code_r0x0001049b9da4;
  case (char *)0x1e:
    goto code_r0x0001049b9e74;
  case (char *)0x1f:
  case (char *)0x9f:
  case (char *)0xcf:
    goto code_r0x0001049b9d50;
  case (char *)0x24:
    goto code_r0x0001049b9e38;
  case (char *)0x25:
    goto code_r0x0001049b9da0;
  case (char *)0x26:
    goto code_r0x0001049b9dc4;
  case (char *)0x28:
    goto code_r0x0001049b9dfc;
  case (char *)0x29:
    goto code_r0x0001049b9e3c;
  case (char *)0x2b:
    goto code_r0x0001049b9e6c;
  case (char *)0x2c:
    goto code_r0x0001049b9d88;
  case (char *)0x2f:
    goto code_r0x0001049b9d68;
  case (char *)0x30:
    goto code_r0x0001049b9e1c;
  case (char *)0x33:
    goto code_r0x0001049b9fa4;
  case (char *)0x34:
  case (char *)0x48:
  case (char *)0x5c:
  case (char *)0x70:
  case (char *)0x78:
  case (char *)0x80:
  case (char *)0x88:
  case (char *)0x9c:
  case (char *)0xb0:
  case (char *)0xb8:
  case (char *)0xc0:
  case (char *)0xd4:
    goto code_r0x0001049b9d60;
  case (char *)0x35:
  case (char *)0x49:
  case (char *)0x5d:
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0x81:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xc1:
  case (char *)0xd5:
  case (char *)0xe9:
  case (char *)0xfd:
    goto code_r0x0001049b9fac;
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x5e:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x82:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    goto code_r0x0001049b9d18;
  case (char *)0x38:
  case (char *)0x60:
  case (char *)0xa0:
  case (char *)0xb5:
    goto code_r0x0001049ba02c;
  case (char *)0x41:
  case (char *)0x69:
  case (char *)0xa9:
  case (char *)0xab:
  case (char *)0xe1:
    goto code_r0x0001049b9d1c;
  case (char *)0x47:
    pbVar2 = (byte *)0x64695f6e6f6e61;
    puVar8 = &UNK_10dd4a1e2;
    uVar10 = (ulong)(byte)pcVar7[0x10dd4a1e2];
    lVar9 = uVar10 * 4 + 0x1049b9fa0;
    switch(pcVar7) {
    case (char *)0x0:
      goto code_r0x0001049ba0f4;
    default:
      uVar4 = 0x695f;
    case (char *)0x32:
    case (char *)0x40:
    case (char *)0x80:
    case (char *)0xb8:
    case (char *)0xd2:
    case (char *)0xe0:
code_r0x0001049b9fa4:
      uVar4 = uVar4 | 0x640000;
      goto code_r0x0001049b9fa8;
    case (char *)0x2:
    case (char *)0x19:
      auVar35._8_8_ = 0xe500000000000000;
      auVar35._0_8_ = 0x646964616d;
      return auVar35;
    case (char *)0x3:
      pbVar2 = (byte *)0x65676170;
    case (char *)0x1f:
      auVar37._0_8_ = (ulong)pbVar2 & 0xffffffff | 0x64695f00000000;
      auVar37._8_8_ = 0xe500000000000000;
      return auVar37;
    case (char *)0x4:
      pcVar7 = "urrentSession";
    case (char *)0x1b:
      uVar4 = (ulong)(pcVar7 + 0xb10) | 0x8000000000000000;
      goto code_r0x0001049ba024;
    case (char *)0x5:
      uVar4 = 0xe200000000000000;
    case (char *)0x1a:
      auVar40._8_8_ = uVar4;
      auVar40._0_8_ = 0x6475;
      return auVar40;
    case (char *)0x6:
      uVar4 = 0x800000010f222b30;
      pcVar7 = (char *)0x9;
      puVar8 = (undefined *)0xd000000000000012;
    case (char *)0xe6:
      pbVar2 = (byte *)((ulong)puVar8 | (ulong)pcVar7);
code_r0x0001049ba144:
      auVar42._8_8_ = uVar4;
      auVar42._0_8_ = pbVar2;
      return auVar42;
    case (char *)0x7:
      pcVar7 = "urrentSession";
      goto code_r0x0001049ba0bc;
    case (char *)0x8:
      uVar4 = 0xee0073776569765f;
      pbVar2 = (byte *)0x736e6f63;
    case (char *)0x8a:
      auVar44._0_8_ = (ulong)pbVar2 & 0xffffffff | 0x7265646900000000;
      auVar44._8_8_ = uVar4;
      return auVar44;
    case (char *)0x9:
      uVar4 = 0x6b6f;
    case (char *)0x15:
      auVar34._8_8_ = uVar4 & 0xffffffffffff | 0xec0000006e650000;
      auVar34._0_8_ = 0x745f656369766564;
      return auVar34;
    case (char *)0xa:
      auVar43._8_8_ = 0xe500000000000000;
      auVar43._0_8_ = 0x6f666e69747865;
      return auVar43;
    case (char *)0xb:
      pbVar2 = (byte *)0xd000000000000012;
      pcVar7 = "include_dwell_data";
      goto code_r0x0001049ba044;
    case (char *)0xc:
      pbVar2 = (byte *)0xd000000000000012;
      pcVar7 = "urrentSession";
      goto code_r0x0001049ba040;
    case (char *)0xd:
      auVar41._8_8_ = 0x800000010f222bd0;
      auVar41._0_8_ = 0xd000000000000010;
      return auVar41;
    case (char *)0xe:
    case (char *)0x8e:
    case (char *)0xbe:
      pcVar7 = "install_referrer";
    case (char *)0xd7:
    case (char *)0xeb:
    case (char *)0xff:
      uVar4 = (ulong)pcVar7 | 0x8000000000000000;
      break;
    case (char *)0xf:
      uVar4 = 0x61746164;
    case (char *)0x17:
      uVar4 = uVar4 & 0xffffffffffff | 0xec00000000000000;
      pbVar2 = (byte *)0x6572;
      goto code_r0x0001049ba094;
    case (char *)0x10:
    case (char *)0x1d:
      goto code_r0x0001049b9fc0;
    case (char *)0x11:
      uVar4 = 0x7364695f;
    case (char *)0x4e:
code_r0x0001049ba0e0:
      uVar4 = uVar4 & 0xffffffffffff | 0xec00000000000000;
      pbVar2 = (byte *)0x6163;
code_r0x0001049ba0e8:
      pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x706d0000);
code_r0x0001049ba0ec:
      pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff | 0x6e67696100000000);
code_r0x0001049ba0f4:
      auVar39._8_8_ = uVar4;
      auVar39._0_8_ = pbVar2;
      return auVar39;
    case (char *)0x13:
      goto code_r0x0001049ba0c8;
    case (char *)0x14:
      goto code_r0x0001049ba030;
    case (char *)0x16:
      goto code_r0x0001049b9fd4;
    case (char *)0x18:
      goto code_r0x0001049ba0cc;
    case (char *)0x1c:
      goto code_r0x0001049ba0ec;
    case (char *)0x1e:
      goto code_r0x0001049b9ff8;
    case (char *)0x22:
      uVar4 = 0x707041;
    case (char *)0x24:
    case (char *)0x38:
    case (char *)0x4c:
    case (char *)0x60:
    case (char *)0x68:
    case (char *)0x70:
    case (char *)0x78:
    case (char *)0x8c:
    case (char *)0xa0:
    case (char *)0xa8:
    case (char *)0xb0:
    case (char *)0xc4:
    case (char *)0xd8:
    case (char *)0xec:
      uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
      goto code_r0x0001049ba240;
    case (char *)0x23:
    case (char *)0x37:
    case (char *)0x4b:
    case (char *)0x5f:
    case (char *)0x67:
    case (char *)0x6f:
    case (char *)0x77:
    case (char *)0x8b:
    case (char *)0x9f:
    case (char *)0xa7:
    case (char *)0xaf:
    case (char *)0xc3:
      break;
    case (char *)0x25:
    case (char *)0x39:
    case (char *)0x4d:
    case (char *)0x61:
    case (char *)0x69:
    case (char *)0x71:
    case (char *)0x79:
    case (char *)0x8d:
    case (char *)0xa1:
    case (char *)0xa9:
    case (char *)0xb1:
    case (char *)0xc5:
    case (char *)0xd9:
    case (char *)0xed:
      goto code_r0x0001049b9fa8;
    case (char *)0x26:
      pcVar6 = FUN_1049b9f6c;
      goto FUN_1049ba864;
    case (char *)0x28:
    case (char *)0x50:
    case (char *)0x90:
    case (char *)0xc8:
    case (char *)0xf0:
      goto code_r0x0001049ba254;
    case (char *)0x30:
    case (char *)0x58:
    case (char *)0x98:
    case (char *)0x9a:
    case (char *)0xd0:
    case (char *)0xf8:
      goto code_r0x0001049b9fac;
    case (char *)0x3a:
    case (char *)0x64:
    case (char *)0xee:
      auVar50._8_8_ = 0xe500000000000000;
      auVar50._0_8_ = 0x657243746e657053;
      return auVar50;
    case (char *)0x3b:
    case (char *)0x6b:
    case (char *)0x73:
    case (char *)0x7b:
    case (char *)0xab:
    case (char *)0xb3:
      uVar4 = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    case (char *)0xdb:
    case (char *)0xea:
      auVar52._8_8_ = uVar4;
      auVar52._0_8_ = 0x64695f6e6f6e61;
      return auVar52;
    case (char *)0x3c:
    case (char *)0x6c:
    case (char *)0x74:
    case (char *)0x7c:
    case (char *)0xac:
    case (char *)0xb4:
    case (char *)0xc7:
    case (char *)0xdc:
    case (char *)0xef:
      pbVar2 = (byte *)0x64576f6e6f6e61;
    case (char *)0x27:
    case (char *)0x4f:
    case (char *)0x8f:
    case (char *)0xa4:
      pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffffffff | 0x7369000000000000);
code_r0x0001049ba2c0:
      auVar49._8_8_ = 0xe500000000000000;
      auVar49._0_8_ = pbVar2;
      return auVar49;
    case (char *)0x3d:
    case (char *)0x6d:
    case (char *)0x75:
    case (char *)0x7d:
    case (char *)0xad:
    case (char *)0xb5:
    case (char *)0xdd:
      pcVar7 = "";
    case (char *)0xd6:
      auVar54._8_8_ = (ulong)pcVar7 | 0x8000000000000000;
      auVar54._0_8_ = 0xd000000000000012;
      return auVar54;
    case (char *)0x46:
      param_3 = 0x1130a0bc8;
      param_4 = 0x1130a0000;
      uVar4 = uRam0064695f6e6f6e69;
      pcVar7 = pcRam0064695f6e6f6e61;
    case (char *)0xaa:
      param_4 = param_4 + 0xd98;
code_r0x0001049ba1d4:
      func_0x0001049bee6c(pcVar7,uVar4,param_3,param_4);
      *unaff_x19 = (char)pcVar7;
      auVar45._8_8_ = uVar4;
      auVar45._0_8_ = pcVar7;
      return auVar45;
    case (char *)0x47:
    case (char *)0x87:
      goto code_r0x0001049ba094;
    case (char *)0x48:
    case (char *)0x88:
    case (char *)0xc0:
    case (char *)0xe8:
      pbVar2 = (byte *)(ulong)*unaff_x20;
      FUN_1049b9f6c();
      unaff_x19 = pcVar7;
    case (char *)0x36:
      *(byte **)unaff_x19 = pbVar2;
      *(ulong *)(unaff_x19 + 8) = uVar4;
      auVar46._8_8_ = uVar4;
      auVar46._0_8_ = pbVar2;
      return auVar46;
    case (char *)0x49:
    case (char *)0x89:
    case (char *)0xc1:
    case (char *)0xc2:
    case (char *)0xe9:
      goto code_r0x0001049b9fb4;
    case (char *)0x4a:
      goto code_r0x0001049ba1d4;
    case (char *)0x5a:
    case (char *)0xfa:
      goto code_r0x0001049b9fb0;
    case (char *)0x5e:
    case (char *)0x66:
    case (char *)0x6e:
    case (char *)0x76:
      uVar10 = (ulong)*unaff_x20;
      __ss6HasherV5_seedABSi_tcfC(auStack_68);
      FUN_1049b9f6c(uVar10);
      __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar10,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      __ss6HasherV9_finalizeSiyF();
      auVar56._8_8_ = uVar10;
      auVar56._0_8_ = uVar4;
      return auVar56;
    case (char *)0x62:
      uVar4 = 0x800000010f222d00;
      pcVar7 = (char *)0x10;
    case (char *)0xb2:
      auVar48._0_8_ = (ulong)pcVar7 | 0xd000000000000003;
      auVar48._8_8_ = uVar4;
      return auVar48;
    case (char *)0x63:
      goto code_r0x0001049ba264;
    case (char *)0x6a:
      goto code_r0x0001049ba240;
    case (char *)0x72:
      goto code_r0x0001049ba250;
    case (char *)0x7a:
      goto code_r0x0001049ba260;
    case (char *)0x86:
      goto code_r0x0001049ba2c0;
    case (char *)0x9e:
    case (char *)0xa6:
    case (char *)0xae:
      goto code_r0x0001049ba144;
    case (char *)0xa2:
      goto code_r0x0001049ba024;
    case (char *)0xa3:
      uVar4 = 0x800000010f222d50;
      pcVar7 = (char *)0xd000000000000010;
    case (char *)0xc6:
    case (char *)0xda:
      auVar53._0_8_ = (ulong)pcVar7 | 4;
      auVar53._8_8_ = uVar4;
      return auVar53;
    case (char *)0xbf:
    case (char *)0xe7:
      goto code_r0x0001049ba098;
    case (char *)0xfe:
      auVar51._8_8_ = 0xe900000000000000;
      auVar51._0_8_ = 0x7261436f54646441;
      return auVar51;
    }
    goto code_r0x0001049b9ff0;
  case (char *)0x4b:
  case (char *)0x75:
  case (char *)0xff:
code_r0x0001049ba040:
    pcVar7 = pcVar7 + 0xbd0;
code_r0x0001049ba044:
    auVar33._8_8_ = (ulong)(pcVar7 + -0x20) | 0x8000000000000000;
    auVar33._0_8_ = pbVar2;
    return auVar33;
  case (char *)0x4c:
  case (char *)0x7c:
  case (char *)0x84:
  case (char *)0x8c:
  case (char *)0xbc:
  case (char *)0xc4:
code_r0x0001049ba0bc:
    pcVar7 = pcVar7 + 0xb50;
  case (char *)0xec:
  case (char *)0xfb:
    uVar4 = (ulong)pcVar7 | 0x8000000000000000;
    goto code_r0x0001049ba0c8;
  case (char *)0x4d:
  case (char *)0x7d:
  case (char *)0x85:
  case (char *)0x8d:
  case (char *)0xbd:
  case (char *)0xc5:
  case (char *)0xd8:
  case (char *)0xed:
    goto code_r0x0001049ba028;
  case (char *)0x4e:
  case (char *)0x7e:
  case (char *)0x86:
  case (char *)0x8e:
  case (char *)0xbe:
  case (char *)0xc6:
  case (char *)0xee:
    goto code_r0x0001049ba0e8;
  case (char *)0x57:
    pbVar2 = (byte *)(ulong)*unaff_x20;
    FUN_1049b9ce0();
    *(byte **)unaff_x19 = pbVar2;
    *(ulong *)(unaff_x19 + 8) = uVar4;
  case (char *)0xbb:
code_r0x0001049b9f44:
    auVar27._8_8_ = uVar4;
    auVar27._0_8_ = pbVar2;
    return auVar27;
  case (char *)0x59:
  case (char *)0x99:
  case (char *)0xd1:
  case (char *)0xf9:
    auVar28._8_8_ = 0xe500000000000000;
    auVar28._0_8_ = 0x65756c6176;
    return auVar28;
  case (char *)0x5b:
    goto code_r0x0001049b9f44;
  case (char *)0x5f:
    goto code_r0x0001049b9e50;
  case (char *)0x6b:
    goto code_r0x0001049b9d20;
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0x7f:
  case (char *)0x87:
    goto code_r0x0001049b9f14;
  case (char *)0x73:
    goto code_r0x0001049b9fdc;
  case (char *)0x74:
    goto code_r0x0001049b9fd4;
  case (char *)0x7b:
    goto code_r0x0001049b9fb0;
  case (char *)0x83:
code_r0x0001049b9fc0:
    uVar4 = 0x656d;
  case (char *)0x39:
  case (char *)0x61:
  case (char *)0xa1:
  case (char *)0xd9:
    uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000730000;
    pbVar2 = (byte *)0x7275;
  case (char *)0x8b:
    goto code_r0x0001049b9fd0;
  case (char *)0x97:
    goto code_r0x0001049ba030;
  case (char *)0x9b:
  case (char *)0x37:
    pbVar2 = pbRam00000065756c6176;
    uVar4 = uRam00000065756c617e;
    func_0x0001049bedf0(pbRam00000065756c6176,uRam00000065756c617e,0x1130a09f8,0x1130a0bb0);
    *pcVar7 = (char)pbVar2;
code_r0x0001049b9f14:
    auVar26._8_8_ = uVar4;
    auVar26._0_8_ = pbVar2;
    return auVar26;
  case (char *)0xaf:
  case (char *)0xb7:
  case (char *)0xbf:
    param_5 = 0x1049b9000;
  case (char *)0x1b:
    pcVar6 = (code *)(param_5 + 0xce0);
FUN_1049ba864:
    uVar3 = (ulong)*pbVar2;
    uVar11 = (ulong)bRame500000000000000;
    (*pcVar6)();
    uVar10 = uVar4;
    (*pcVar6)();
    if (uVar3 == uVar11 && uVar4 == uVar10) {
      uVar1 = 1;
      uVar5 = uVar10;
    }
    else {
      uVar5 = uVar4;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar4,uVar11,uVar10,0);
      uVar1 = (uint)uVar3;
    }
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar10);
    auVar55._4_4_ = 0;
    auVar55._0_4_ = uVar1 & 1;
    auVar55._8_8_ = uVar5;
    return auVar55;
  case (char *)0xb4:
    goto code_r0x0001049ba0c8;
  case (char *)0xc3:
    goto code_r0x0001049b9ff0;
  case (char *)0xd0:
  case (char *)0xf8:
    goto code_r0x0001049b9e08;
  case (char *)0xd7:
  case (char *)0xeb:
    goto code_r0x0001049ba0e0;
  case (char *)0xe7:
    goto code_r0x0001049ba0f4;
  }
  goto code_r0x0001049b9e2c;
code_r0x0001049ba240:
  pbVar2 = (byte *)0x6574617669746341;
code_r0x0001049ba250:
code_r0x0001049ba254:
  puVar8 = &UNK_10dd4a1f4;
  lVar9 = 0x1049ba26c;
  goto code_r0x0001049ba260;
code_r0x0001049ba024:
  pcVar7 = (char *)0x12;
code_r0x0001049ba028:
  pcVar7 = (char *)((ulong)pcVar7 | 0xd000000000000000);
  goto code_r0x0001049ba02c;
code_r0x0001049b9fd0:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x5f6c0000);
  goto code_r0x0001049b9fd4;
code_r0x0001049b9fa8:
  uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
code_r0x0001049b9fac:
  pbVar2 = (byte *)0x6266;
  goto code_r0x0001049b9fb0;
code_r0x0001049b9d60:
  uVar4 = (ulong)pcVar7 | 0x8000000000000000;
  pcVar7 = (char *)0x10;
  goto code_r0x0001049b9d68;
code_r0x0001049b9e64:
  pbVar2 = (byte *)0x6564;
code_r0x0001049b9e68:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x63730000);
  goto code_r0x0001049b9e6c;
code_r0x0001049b9d18:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x5f7400000000);
code_r0x0001049b9d1c:
  pbVar2 = (byte *)((ulong)pbVar2 | 0x6974000000000000);
  goto code_r0x0001049b9d20;
code_r0x0001049b9e08:
  uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
code_r0x0001049b9e2c:
  pbVar2 = (byte *)0x6e65746e6f63;
code_r0x0001049b9e38:
  pbVar2 = (byte *)((ulong)pbVar2 | 0x5f74000000000000);
code_r0x0001049b9e3c:
  auVar21._8_8_ = uVar4;
  auVar21._0_8_ = pbVar2;
  return auVar21;
code_r0x0001049ba260:
  uVar10 = (ulong)(byte)puVar8[(long)pcVar7];
code_r0x0001049ba264:
                    /* WARNING: Could not recover jumptable at 0x0001049ba268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(lVar9 + uVar10 * 4))(pbVar2);
  auVar47._8_8_ = uVar4;
  auVar47._0_8_ = pbVar2;
  return auVar47;
code_r0x0001049b9d20:
code_r0x0001049b9ddc:
  uVar4 = 0x656d;
code_r0x0001049b9de0:
  auVar18._8_8_ = uVar4 & 0xffffffffffff | 0xea00000000000000;
  auVar18._0_8_ = pbVar2;
  return auVar18;
code_r0x0001049b9e6c:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x7470697200000000);
code_r0x0001049b9e74:
  auVar23._8_8_ = uVar4;
  auVar23._0_8_ = pbVar2;
  return auVar23;
code_r0x0001049b9d68:
  pbVar2 = (byte *)((ulong)pcVar7 | 0xd000000000000003);
code_r0x0001049b9d70:
  auVar14._8_8_ = uVar4;
  auVar14._0_8_ = pbVar2;
  return auVar14;
code_r0x0001049b9da0:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x72610000);
code_r0x0001049b9da4:
  auVar16._0_8_ = (ulong)pbVar2 & 0xffff0000ffffffff | 0x735f686300000000;
  auVar16._8_8_ = uVar4;
  return auVar16;
code_r0x0001049ba02c:
  pbVar2 = (byte *)((ulong)pcVar7 | 1);
code_r0x0001049ba030:
  auVar32._8_8_ = uVar4;
  auVar32._0_8_ = pbVar2;
  return auVar32;
code_r0x0001049b9fd4:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff | 0x6568637300000000);
code_r0x0001049b9fdc:
  auVar30._8_8_ = uVar4;
  auVar30._0_8_ = pbVar2;
  return auVar30;
code_r0x0001049b9fb0:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x6c5f0000);
code_r0x0001049b9fb4:
  auVar29._0_8_ = (ulong)pbVar2 & 0xffffffff | 0x6e69676f00000000;
  auVar29._8_8_ = uVar4;
  return auVar29;
code_r0x0001049ba0c8:
  pcVar7 = (char *)0x12;
code_r0x0001049ba0cc:
  auVar38._8_8_ = uVar4;
  auVar38._0_8_ = ((ulong)pcVar7 | 0xd000000000000000) + 10;
  return auVar38;
code_r0x0001049b9ff0:
  pcVar7 = (char *)0xd000000000000012;
code_r0x0001049b9ff8:
  auVar31._0_8_ = pcVar7 + -1;
  auVar31._8_8_ = uVar4;
  return auVar31;
code_r0x0001049ba094:
  pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x65630000);
code_r0x0001049ba098:
  auVar36._0_8_ = (ulong)pbVar2 & 0xffffffff | 0x5f74706900000000;
  auVar36._8_8_ = uVar4;
  return auVar36;
}



/* Entry: 1049b9eb4; end: 1049b9ee3;  */

uint FUN_1049b9eb4(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049b9ce0();
  pbVar3 = param_2;
  FUN_1049b9ce0();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049b9ee4; end: 1049b9f47;  */

void FUN_1049b9ee4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049bedf0(uVar1,param_2[1],0x1130a09f8,0x1130a0bb0);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049b9f48; end: 1049b9f6b;  */

void FUN_1049b9f48(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049bee6c(param_1,param_2,0x1130a0bc8,0x1130a0d98);
  return;
}



/* Entry: 1049b9f6c; end: 1049ba17f;  */

undefined1  [16] FUN_1049b9f6c(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *unaff_x19;
  byte *unaff_x20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_68 [56];
  
  uVar4 = 0xe700000000000000;
  uVar2 = 0x64695f6e6f6e61;
  pcVar6 = (char *)(param_1 & 0xff);
  puVar7 = &UNK_10dd4a1e2;
  uVar9 = (ulong)*(byte *)((long)pcVar6 + 0x10dd4a1e2);
  lVar8 = uVar9 * 4 + 0x1049b9fa0;
  switch(pcVar6) {
  default:
    uVar4 = 0x695f;
  case (char *)0x32:
  case (char *)0x40:
  case (char *)0x80:
  case (char *)0xb8:
  case (char *)0xd2:
  case (char *)0xe0:
    uVar4 = uVar4 | 0x640000;
  case (char *)0x25:
  case (char *)0x39:
  case (char *)0x4d:
  case (char *)0x61:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0x79:
  case (char *)0x8d:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xc5:
  case (char *)0xd9:
  case (char *)0xed:
    uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
  case (char *)0x30:
  case (char *)0x58:
  case (char *)0x98:
  case (char *)0x9a:
  case (char *)0xd0:
  case (char *)0xf8:
    uVar2 = 0x6266;
  case (char *)0x5a:
  case (char *)0xfa:
    uVar2 = uVar2 & 0xffffffff0000ffff | 0x6c5f0000;
  case (char *)0x49:
  case (char *)0x89:
  case (char *)0xc1:
  case (char *)0xc2:
  case (char *)0xe9:
    auVar10._0_8_ = uVar2 & 0xffffffff | 0x6e69676f00000000;
    auVar10._8_8_ = uVar4;
    return auVar10;
  case (char *)0x2:
  case (char *)0x19:
    auVar16._8_8_ = 0xe500000000000000;
    auVar16._0_8_ = 0x646964616d;
    return auVar16;
  case (char *)0x3:
    uVar2 = 0x65676170;
  case (char *)0x1f:
    auVar18._0_8_ = uVar2 & 0xffffffff | 0x64695f00000000;
    auVar18._8_8_ = 0xe700000000000000;
    return auVar18;
  case (char *)0x4:
    pcVar6 = "urrentSession";
  case (char *)0x1b:
    uVar4 = (ulong)((long)pcVar6 + 0xb10) | 0x8000000000000000;
  case (char *)0xa2:
    uVar2 = 0xd000000000000013;
  case (char *)0x14:
    auVar13._8_8_ = uVar4;
    auVar13._0_8_ = uVar2;
    return auVar13;
  case (char *)0x5:
    uVar4 = 0xe200000000000000;
  case (char *)0x1a:
    auVar21._8_8_ = uVar4;
    auVar21._0_8_ = 0x6475;
    return auVar21;
  case (char *)0x6:
    uVar4 = 0x800000010f222b30;
    pcVar6 = (char *)0x9;
    puVar7 = (undefined *)0xd000000000000012;
  case (char *)0xe6:
    uVar2 = (ulong)puVar7 | (ulong)pcVar6;
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
    auVar23._8_8_ = uVar4;
    auVar23._0_8_ = uVar2;
    return auVar23;
  case (char *)0x7:
    uVar4 = 0x800000010f222b50;
  case (char *)0x13:
    pcVar6 = (char *)0x12;
  case (char *)0x18:
    auVar19._8_8_ = uVar4;
    auVar19._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 10;
    return auVar19;
  case (char *)0x8:
    uVar4 = 0xee0073776569765f;
    uVar2 = 0x736e6f63;
  case (char *)0x8a:
    auVar25._0_8_ = uVar2 & 0xffffffff | 0x7265646900000000;
    auVar25._8_8_ = uVar4;
    return auVar25;
  case (char *)0x9:
    uVar4 = 0x6b6f;
  case (char *)0x15:
    auVar15._8_8_ = uVar4 & 0xffffffffffff | 0xec0000006e650000;
    auVar15._0_8_ = 0x745f656369766564;
    return auVar15;
  case (char *)0xa:
    auVar24._8_8_ = 0xe700000000000000;
    auVar24._0_8_ = 0x6f666e69747865;
    return auVar24;
  case (char *)0xb:
    pcVar6 = "include_dwell_data";
    break;
  case (char *)0xc:
    pcVar6 = "include_video_data";
    break;
  case (char *)0xd:
    auVar22._8_8_ = 0x800000010f222bd0;
    auVar22._0_8_ = 0xd000000000000010;
    return auVar22;
  case (char *)0xe:
  case (char *)0x8e:
  case (char *)0xbe:
    pcVar6 = "install_referrer";
  case (char *)0xd7:
  case (char *)0xeb:
  case (char *)0xff:
    uVar4 = (ulong)pcVar6 | 0x8000000000000000;
  case (char *)0x23:
  case (char *)0x37:
  case (char *)0x4b:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0x8b:
  case (char *)0x9f:
  case (char *)0xa7:
  case (char *)0xaf:
  case (char *)0xc3:
    pcVar6 = (char *)0xd000000000000012;
  case (char *)0x1e:
    auVar12._0_8_ = (char *)((long)pcVar6 + -1);
    auVar12._8_8_ = uVar4;
    return auVar12;
  case (char *)0xf:
    uVar4 = 0x61746164;
  case (char *)0x17:
    uVar4 = uVar4 & 0xffffffffffff | 0xec00000000000000;
    uVar2 = 0x6572;
  case (char *)0x47:
  case (char *)0x87:
    uVar2 = uVar2 & 0xffffffff0000ffff | 0x65630000;
  case (char *)0xbf:
  case (char *)0xe7:
    auVar17._0_8_ = uVar2 & 0xffffffff | 0x5f74706900000000;
    auVar17._8_8_ = uVar4;
    return auVar17;
  case (char *)0x10:
  case (char *)0x1d:
    uVar4 = 0xeb0000000073656d;
    uVar2 = 0x5f6c7275;
  case (char *)0x16:
    auVar11._0_8_ = uVar2 & 0xffffffff | 0x6568637300000000;
    auVar11._8_8_ = uVar4;
    return auVar11;
  case (char *)0x11:
    uVar4 = 0x7364695f;
  case (char *)0x4e:
    uVar4 = uVar4 & 0xffffffffffff | 0xec00000000000000;
    uVar2 = 0x706d6163;
  case (char *)0x1c:
    uVar2 = uVar2 & 0xffffffff | 0x6e67696100000000;
  case (char *)0x0:
    auVar20._8_8_ = uVar4;
    auVar20._0_8_ = uVar2;
    return auVar20;
  case (char *)0x22:
    uVar4 = 0x707041;
  case (char *)0x24:
  case (char *)0x38:
  case (char *)0x4c:
  case (char *)0x60:
  case (char *)0x68:
  case (char *)0x70:
  case (char *)0x78:
  case (char *)0x8c:
  case (char *)0xa0:
  case (char *)0xa8:
  case (char *)0xb0:
  case (char *)0xc4:
  case (char *)0xd8:
  case (char *)0xec:
    uVar4 = uVar4 & 0xffffffffffff | 0xeb00000000000000;
  case (char *)0x6a:
    uVar2 = 0x6574617669746341;
  case (char *)0x72:
  case (char *)0x28:
  case (char *)0x50:
  case (char *)0x90:
  case (char *)0xc8:
  case (char *)0xf0:
    puVar7 = &UNK_10dd4a1f4;
    lVar8 = 0x1049ba26c;
  case (char *)0x7a:
    uVar9 = (ulong)(byte)puVar7[(long)pcVar6];
  case (char *)0x63:
                    /* WARNING: Could not recover jumptable at 0x0001049ba268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar8 + uVar9 * 4))(uVar2);
    auVar28._8_8_ = uVar4;
    auVar28._0_8_ = uVar2;
    return auVar28;
  case (char *)0x26:
    uVar3 = (ulong)bRam0064695f6e6f6e61;
    uVar9 = (ulong)bRame700000000000000;
    FUN_1049b9f6c();
    uVar2 = uVar4;
    FUN_1049b9f6c();
    if (uVar3 == uVar9 && uVar4 == uVar2) {
      uVar1 = 1;
      uVar5 = uVar2;
    }
    else {
      uVar5 = uVar4;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar3,uVar4,uVar9,uVar2,0);
      uVar1 = (uint)uVar3;
    }
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar2);
    auVar36._4_4_ = 0;
    auVar36._0_4_ = uVar1 & 1;
    auVar36._8_8_ = uVar5;
    return auVar36;
  case (char *)0x3a:
  case (char *)0x64:
  case (char *)0xee:
    auVar31._8_8_ = 0xe700000000000000;
    auVar31._0_8_ = 0x657243746e657053;
    return auVar31;
  case (char *)0x3b:
  case (char *)0x6b:
  case (char *)0x73:
  case (char *)0x7b:
  case (char *)0xab:
  case (char *)0xb3:
    uVar4 = (ulong)((long)pcVar6 + -0x20) | 0x8000000000000000;
  case (char *)0xdb:
  case (char *)0xea:
    auVar33._8_8_ = uVar4;
    auVar33._0_8_ = 0x64695f6e6f6e61;
    return auVar33;
  case (char *)0x3c:
  case (char *)0x6c:
  case (char *)0x74:
  case (char *)0x7c:
  case (char *)0xac:
  case (char *)0xb4:
  case (char *)0xc7:
  case (char *)0xdc:
  case (char *)0xef:
    uVar2 = 0x64576f6e6f6e61;
  case (char *)0x27:
  case (char *)0x4f:
  case (char *)0x8f:
  case (char *)0xa4:
    uVar2 = uVar2 & 0xffffffffffff | 0x7369000000000000;
  case (char *)0x86:
    auVar30._8_8_ = 0xe700000000000000;
    auVar30._0_8_ = uVar2;
    return auVar30;
  case (char *)0x3d:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x7d:
  case (char *)0xad:
  case (char *)0xb5:
  case (char *)0xdd:
    pcVar6 = "";
  case (char *)0xd6:
    auVar35._8_8_ = (ulong)pcVar6 | 0x8000000000000000;
    auVar35._0_8_ = 0xd000000000000012;
    return auVar35;
  case (char *)0x46:
    pcVar6 = (char *)CONCAT71(uRam0064695f6e6f6e62,bRam0064695f6e6f6e61);
    param_3 = 0x1130a0bc8;
    param_4 = 0x1130a0000;
    uVar4 = uRam0064695f6e6f6e69;
  case (char *)0xaa:
    param_4 = param_4 + 0xd98;
  case (char *)0x4a:
    func_0x0001049bee6c(pcVar6,uVar4,param_3,param_4);
    *(char *)unaff_x19 = (char)pcVar6;
    auVar26._8_8_ = uVar4;
    auVar26._0_8_ = pcVar6;
    return auVar26;
  case (char *)0x48:
  case (char *)0x88:
  case (char *)0xc0:
  case (char *)0xe8:
    uVar2 = (ulong)*unaff_x20;
    FUN_1049b9f6c();
    unaff_x19 = (ulong *)pcVar6;
  case (char *)0x36:
    *unaff_x19 = uVar2;
    unaff_x19[1] = uVar4;
    auVar27._8_8_ = uVar4;
    auVar27._0_8_ = uVar2;
    return auVar27;
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
    uVar2 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68);
    FUN_1049b9f6c(uVar2);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    __ss6HasherV9_finalizeSiyF();
    auVar37._8_8_ = uVar2;
    auVar37._0_8_ = uVar4;
    return auVar37;
  case (char *)0x62:
    uVar4 = 0x800000010f222d00;
    pcVar6 = (char *)0x10;
  case (char *)0xb2:
    auVar29._0_8_ = (ulong)pcVar6 | 0xd000000000000003;
    auVar29._8_8_ = uVar4;
    return auVar29;
  case (char *)0xa3:
    uVar4 = 0x800000010f222d50;
    pcVar6 = (char *)0xd000000000000010;
  case (char *)0xc6:
  case (char *)0xda:
    auVar34._0_8_ = (ulong)pcVar6 | 4;
    auVar34._8_8_ = uVar4;
    return auVar34;
  case (char *)0xfe:
    auVar32._8_8_ = 0xe900000000000000;
    auVar32._0_8_ = 0x7261436f54646441;
    return auVar32;
  }
  auVar14._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
  auVar14._0_8_ = 0xd000000000000012;
  return auVar14;
}



/* Entry: 1049ba180; end: 1049ba1af;  */

uint FUN_1049ba180(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049b9f6c();
  pbVar3 = param_2;
  FUN_1049b9f6c();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049ba1b0; end: 1049ba213;  */

void FUN_1049ba1b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049bee6c(uVar1,param_2[1],0x1130a0bc8,0x1130a0d98);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049ba214; end: 1049ba22f;  */

void FUN_1049ba214(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049beee8(param_1,param_2,0x1130a0db0);
  return;
}



/* Entry: 1049ba230; end: 1049ba3eb;  */

undefined1  [16]
FUN_1049ba230(ulong param_1,undefined8 param_2,code *param_3,code *param_4,undefined *param_5)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *in_x12;
  char *in_x13;
  char *in_x14;
  char *in_x15;
  ulong *unaff_x19;
  byte *unaff_x20;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStack_68 [56];
  undefined8 *puVar8;
  
  puVar5 = (undefined *)0xeb00000000707041;
  plVar1 = (long *)0x6574617669746341;
  pcVar10 = (char *)(param_1 & 0xff);
  pcVar13 = (char *)(ulong)*(byte *)((long)pcVar10 + 0x10dd4a1f4);
  pcVar12 = (char *)((long)pcVar13 * 4 + 0x1049ba26c);
  uVar9 = (uint)pcVar10;
  pcVar11 = "";
  switch(pcVar10) {
  default:
    pcVar10 = "urrentSession";
  case (char *)0x20:
  case (char *)0x2e:
  case (char *)0x6e:
  case (char *)0xa6:
  case (char *)0xc0:
  case (char *)0xce:
    pcVar10 = (char *)((long)pcVar10 + 0xd20);
  case (char *)0x13:
  case (char *)0x27:
  case (char *)0x3b:
  case (char *)0x4f:
  case (char *)0x57:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x7b:
  case (char *)0x8f:
  case (char *)0x97:
  case (char *)0x9f:
  case (char *)0xb3:
  case (char *)0xc7:
  case (char *)0xdb:
  case (char *)0xef:
  case (char *)0xf7:
  case (char *)0xff:
    pcVar10 = (char *)((long)pcVar10 + -0x20);
  case (char *)0x1e:
  case (char *)0x46:
  case (char *)0x86:
  case (char *)0x88:
  case (char *)0xbe:
  case (char *)0xe6:
    puVar5 = (undefined *)((ulong)pcVar10 | 0x8000000000000000);
  case (char *)0x48:
  case (char *)0xe8:
    pcVar10 = (char *)0x10;
  case (char *)0x37:
  case (char *)0x77:
  case (char *)0xaf:
  case (char *)0xb0:
  case (char *)0xd7:
    auVar15._0_8_ = (ulong)pcVar10 | 0xd000000000000003;
    auVar15._8_8_ = puVar5;
    return auVar15;
  case (char *)0x2:
    auVar20._8_8_ = 0xee006f666e49746e;
    auVar20._0_8_ = 0x656d796150646441;
    return auVar20;
  case (char *)0x3:
    auVar21._8_8_ = 0xe900000000000074;
    auVar21._0_8_ = 0x7261436f54646441;
    return auVar21;
  case (char *)0x4:
    puVar5 = (undefined *)0x7473696c68;
  case (char *)0x7c:
  case (char *)0xac:
    puVar5 = (undefined *)((ulong)puVar5 & 0xffffffffffff | 0xed00000000000000);
    plVar1 = (long *)0x54646441;
  case (char *)0xc5:
  case (char *)0xd9:
  case (char *)0xed:
  case (char *)0xf5:
  case (char *)0xfd:
    plVar1 = (long *)((ulong)plVar1 & 0xffff0000ffffffff | 0x576f00000000);
  case (char *)0x11:
  case (char *)0x25:
  case (char *)0x39:
  case (char *)0x4d:
  case (char *)0x55:
  case (char *)0x5d:
  case (char *)0x65:
  case (char *)0x79:
  case (char *)0x8d:
  case (char *)0x95:
  case (char *)0x9d:
  case (char *)0xb1:
    auVar17._0_8_ = (ulong)plVar1 & 0xffffffffffff | 0x7369000000000000;
    auVar17._8_8_ = puVar5;
    return auVar17;
  case (char *)0x5:
    pcVar10 = "CompleteRegistration";
  case (char *)0x35:
  case (char *)0x75:
    pcVar10 = (char *)((long)pcVar10 + -0x20);
  case (char *)0xad:
  case (char *)0xd5:
    auVar23._8_8_ = (ulong)pcVar10 | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000014;
    return auVar23;
  case (char *)0x6:
    puVar5 = (undefined *)0xeb00000000746e65;
    plVar1 = (long *)0x77656956;
  case (char *)0x3c:
    auVar25._0_8_ = (ulong)plVar1 & 0xffffffff | 0x746e6f4300000000;
    auVar25._8_8_ = puVar5;
    return auVar25;
  case (char *)0x7:
    auVar22._8_8_ = 0x800000010f222d80;
    auVar22._0_8_ = 0xd000000000000010;
    return auVar22;
  case (char *)0x8:
    auVar27._8_8_ = 0xed00006465766569;
    auVar27._0_8_ = 0x6863416c6576654c;
    return auVar27;
  case (char *)0x9:
    puVar5 = (undefined *)0xe800000000000000;
    plVar1 = (long *)0x63727550;
  case (char *)0x90:
  case (char *)0xf0:
    auVar19._0_8_ = (ulong)plVar1 & 0xffffffff | 0x6573616800000000;
    auVar19._8_8_ = puVar5;
    return auVar19;
  case (char *)0xa:
    auVar26._8_8_ = 0xe400000000000000;
    auVar26._0_8_ = 0x65746152;
    return auVar26;
  case (char *)0xb:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x686372616553;
    return auVar16;
  case (char *)0xc:
    auVar18._8_8_ = 0xec00000073746964;
    auVar18._0_8_ = 0x657243746e657053;
    return auVar18;
  case (char *)0xd:
    puVar5 = (undefined *)0x800000010f222dd0;
    plVar1 = (long *)0xd000000000000012;
  case (char *)0x1:
    auVar24._8_8_ = puVar5;
    auVar24._0_8_ = plVar1;
    return auVar24;
  case (char *)0x29:
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x69:
  case (char *)0x99:
  case (char *)0xa1:
    plVar1 = (long *)0x11309fee0;
  case (char *)0xc9:
  case (char *)0xd8:
  case (char *)0xf9:
    puVar5 = &DAT_113815000;
  case (char *)0x91:
    puVar8 = (undefined8 *)(puVar5 + 0x8a8);
    if (*plVar1 == -1) {
      uVar2 = *puVar8;
    }
    else {
      _swift_once(plVar1,FUN_1049ba5b4);
      uVar2 = *puVar8;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
    auVar40._8_8_ = puVar8;
    auVar40._0_8_ = uVar2;
    return auVar40;
  case (char *)0x2a:
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xb5:
  case (char *)0xca:
  case (char *)0xdd:
  case (char *)0xfa:
    unaff_x19 = (ulong *)pcVar10;
  case (char *)0x15:
  case (char *)0x3d:
  case (char *)0x7d:
  case (char *)0x92:
    plVar1 = (long *)(ulong)*unaff_x20;
  case (char *)0x74:
    FUN_1049ba47c();
    *unaff_x19 = (ulong)plVar1;
    unaff_x19[1] = (ulong)puVar5;
  case (char *)0x28:
  case (char *)0x52:
  case (char *)0xdc:
  case (char *)0xf2:
    auVar32._8_8_ = puVar5;
    auVar32._0_8_ = plVar1;
    return auVar32;
  case (char *)0x34:
    pcVar12 = (char *)((ulong)pcVar12 & 0xffff0000ffffffff | 0x7400000000);
    pcVar13 = (char *)0xe300000000000000;
    in_x12 = (char *)0x707061;
  case (char *)0x98:
    in_x13 = (char *)0x10;
  case (char *)0x38:
    in_x13 = (char *)((ulong)in_x13 & 0xffffffffffff | 0xd000000000000000);
    in_x14 = (char *)0x800000010f222df0;
    in_x15 = "MobileAppInstall";
  case (char *)0x36:
  case (char *)0x76:
  case (char *)0xae:
  case (char *)0xd6:
    in_x15 = (char *)((ulong)in_x15 | 0x8000000000000000);
    in_ZR = uVar9 == 3;
    if (!(bool)in_ZR) {
      in_x13 = (char *)((ulong)in_x13 | 1);
    }
  case (char *)0x24:
    if (!(bool)in_ZR) {
      in_x14 = in_x15;
    }
    if (uVar9 != 2) {
      pcVar13 = in_x14;
      in_x12 = in_x13;
    }
    in_x13 = (char *)0xed0000656372756f;
    in_x14 = (char *)0x735f6e6f69746361;
  case (char *)0x10:
    in_ZR = uVar9 == 0;
    if (!(bool)in_ZR) {
      pcVar12 = in_x14;
    }
  case (char *)0x12:
  case (char *)0x26:
  case (char *)0x3a:
  case (char *)0x4e:
  case (char *)0x56:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x7a:
  case (char *)0x8e:
  case (char *)0x96:
  case (char *)0x9e:
  case (char *)0xb2:
  case (char *)0xc6:
  case (char *)0xda:
  case (char *)0xee:
  case (char *)0xf6:
  case (char *)0xfe:
    if (!(bool)in_ZR) {
      pcVar11 = in_x13;
    }
  case (char *)0x58:
    if (uVar9 < 2) {
      pcVar13 = pcVar11;
      in_x12 = pcVar12;
    }
    auVar30._8_8_ = pcVar13;
    auVar30._0_8_ = in_x12;
    return auVar30;
  case (char *)0x4c:
  case (char *)0x54:
  case (char *)0x5c:
  case (char *)0x64:
    auVar29._8_8_ = 0xeb00000000707041;
    auVar29._0_8_ = 0x6574617669746341;
    return auVar29;
  case (char *)0x50:
    param_4 = param_4 + 0x47c;
    break;
  case (char *)0x60:
    param_5 = (undefined *)0x1049ba000;
  case (char *)0x16:
  case (char *)0x3e:
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xde:
    uVar4 = (ulong)bRam6574617669746341;
    uVar14 = (ulong)bRameb00000000707041;
    (*(code *)(param_5 + 0x47c))();
    puVar3 = puVar5;
    (*(code *)(param_5 + 0x47c))();
    if (uVar4 == uVar14 && puVar5 == puVar3) {
      uVar9 = 1;
      puVar7 = puVar3;
    }
    else {
      puVar7 = puVar5;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar4,puVar5,uVar14,puVar3,0);
      uVar9 = (uint)uVar4;
    }
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(puVar3);
    auVar36._4_4_ = 0;
    auVar36._0_4_ = uVar9 & 1;
    auVar36._8_8_ = puVar7;
    return auVar36;
  case (char *)0x68:
    param_3 = param_3 + 0x47c;
  case (char *)0x51:
  case (char *)0xf1:
    uVar14 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
    (*param_3)(uVar14);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar14,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    __ss6HasherV9_finalizeSiyF();
    auVar37._8_8_ = uVar14;
    auVar37._0_8_ = puVar5;
    return auVar37;
  case (char *)0x78:
    *(char *)unaff_x19 = 'A';
  case (char *)0x14:
    auVar28._8_8_ = 0xeb00000000707041;
    auVar28._0_8_ = 0x6574617669746341;
    return auVar28;
  case (char *)0x8c:
  case (char *)0x94:
  case (char *)0x9c:
    uVar14 = (ulong)*unaff_x20;
    __ss6HasherV5_seedABSi_tcfC(auStack_68);
    FUN_1049ba230(uVar14);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar14,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    __ss6HasherV9_finalizeSiyF();
    auVar38._8_8_ = uVar14;
    auVar38._0_8_ = puVar5;
    return auVar38;
  case (char *)0xa0:
    uVar2 = CONCAT71(uRam6574617669746342,bRam6574617669746341);
    uVar6 = uRam6574617669746349;
    func_0x0001049bef5c(uVar2,uRam6574617669746349);
    *pcVar10 = (char)uVar2;
    auVar31._8_8_ = uVar6;
    auVar31._0_8_ = uVar2;
    return auVar31;
  case (char *)0xb4:
  case (char *)0xc8:
    param_3 = (code *)0x1130a0568;
  case (char *)0x2b:
  case (char *)0x5b:
  case (char *)0x63:
  case (char *)0x6b:
  case (char *)0x9b:
  case (char *)0xa3:
  case (char *)0xcb:
  case (char *)0xfb:
    param_4 = (code *)0x10499c4bc;
    param_5 = &DAT_113815000;
  case (char *)0xc4:
    func_0x0001048db364();
    _swift_initStaticObject();
    puVar3 = puVar5;
    _swift_retain();
    (*param_4)();
    _swift_release(puVar5);
    *(undefined **)(param_5 + 0x8b0) = puVar3;
    auVar35._8_8_ = param_3;
    auVar35._0_8_ = puVar5;
    return auVar35;
  case (char *)0xd4:
    break;
  case (char *)0xec:
  case (char *)0xf4:
  case (char *)0xfc:
    auVar34._8_8_ = 0xeb00000000707041;
    auVar34._0_8_ = 0x6574617669746341;
    return auVar34;
  case (char *)0xf8:
    auVar33._8_8_ = 0xeb00000000707041;
    auVar33._0_8_ = 0x70704141;
    return auVar33;
  }
  uVar14 = (ulong)*unaff_x20;
  (*param_4)(uVar14);
  __sSS4hash4intoys6HasherVz_tF(0x6574617669746341,uVar14,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar5);
  auVar39._8_8_ = uVar14;
  auVar39._0_8_ = puVar5;
  return auVar39;
}



/* Entry: 1049ba3ec; end: 1049ba41b;  */

uint FUN_1049ba3ec(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049ba230();
  pbVar3 = param_2;
  FUN_1049ba230();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049ba41c; end: 1049ba477;  */

void FUN_1049ba41c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049beee8(uVar1,param_2[1],0x1130a0db0);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049ba478; end: 1049ba47b;  */

ulong FUN_1049ba478(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x11309d4f0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar2) {
    uVar2 = 5;
  }
  return uVar2;
}



/* Entry: 1049ba47c; end: 1049ba51b;  */

undefined1  [16] FUN_1049ba47c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  
  pcVar5 = "TutorialCompletion";
  uVar2 = 0xd000000000000010;
  if (param_1 != 3) {
    pcVar5 = "MobileAppInstall";
    uVar2 = 0xd000000000000011;
  }
  uVar1 = 0x707061;
  if (param_1 != 2) {
    uVar1 = uVar2;
  }
  uVar4 = 0xe300000000000000;
  if (param_1 != 2) {
    uVar4 = (ulong)pcVar5 | 0x8000000000000000;
  }
  uVar2 = 0x746e657665;
  if (param_1 != 0) {
    uVar2 = 0x735f6e6f69746361;
  }
  uVar3 = 0xe500000000000000;
  if (param_1 != 0) {
    uVar3 = 0xed0000656372756f;
  }
  if (param_1 < 2) {
    uVar4 = uVar3;
    uVar1 = uVar2;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Entry: 1049ba51c; end: 1049ba54b;  */

uint FUN_1049ba51c(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  FUN_1049ba47c();
  pbVar3 = param_2;
  FUN_1049ba47c();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049ba54c; end: 1049ba59f;  */

void FUN_1049ba54c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x0001049bef5c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1049ba5a0; end: 1049ba5b3;  */

void FUN_1049ba5a0(void)

{
  return;
}



/* Entry: 1049ba5b4; end: 1049ba5d7;  */

void FUN_1049ba5b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x1130a34b0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  FUN_10499c3a8();
  _swift_release(uVar1);
  uRam00000001138158a8 = uVar2;
  return;
}



/* Entry: 1049ba5d8; end: 1049ba633;  */

undefined8 FUN_1049ba5d8(void)

{
  if (lRam000000011309fee0 != -1) {
    _swift_once(0x11309fee0,FUN_1049ba5b4);
  }
  return 0x1138158a8;
}



/* Entry: 1049ba634; end: 1049ba657;  */

void FUN_1049ba634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x1130a34a8;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  (*(code *)0x10499c4bc)();
  _swift_release(uVar1);
  uRam00000001138158b0 = uVar2;
  return;
}



/* Entry: 1049ba658; end: 1049ba6f3;  */

undefined8 FUN_1049ba658(void)

{
  if (lRam000000011309fee8 != -1) {
    _swift_once(0x11309fee8,FUN_1049ba634);
  }
  return 0x1138158b0;
}



/* Entry: 1049ba6f4; end: 1049ba717;  */

void FUN_1049ba6f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x1130a34a0;
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar2 = uVar1;
  _swift_retain();
  (*(code *)0x10499c5d0)();
  _swift_release(uVar1);
  uRam00000001138158b8 = uVar2;
  return;
}



/* Entry: 1049ba718; end: 1049ba76f;  */

void FUN_1049ba718(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  func_0x0001048db364();
  _swift_initStaticObject();
  uVar1 = param_2;
  _swift_retain();
  (*param_4)();
  _swift_release(param_2);
  *param_5 = uVar1;
  return;
}



/* Entry: 1049ba770; end: 1049ba7cb;  */

undefined8 FUN_1049ba770(void)

{
  if (lRam000000011309fef0 != -1) {
    _swift_once(0x11309fef0,FUN_1049ba6f4);
  }
  return 0x1138158b8;
}



/* Entry: 1049ba7cc; end: 1049ba7e7;  */

void FUN_1049ba7cc(undefined8 param_1,undefined8 param_2)

{
  func_0x0001049befd0(param_1,param_2,0x1130a1028);
  return;
}



/* Entry: 1049ba7e8; end: 1049ba857;  */

void FUN_1049ba7e8(void)

{
  func_0x0001048db364(0x1130a3418);
  _swift_initStaticObject();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1049ba858; end: 1049ba863;  */

uint FUN_1049ba858(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  (*(code *)0x1049ba7fc)();
  pbVar3 = param_2;
  (*(code *)0x1049ba7fc)();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049ba864; end: 1049ba8eb;  */

uint FUN_1049ba864(byte *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = (ulong)*param_1;
  uVar4 = (ulong)*param_2;
  (*param_5)();
  pbVar3 = param_2;
  (*param_5)();
  if (uVar2 == uVar4 && param_2 == pbVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar2,param_2,uVar4,pbVar3,0);
    uVar1 = (uint)uVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(pbVar3);
  return uVar1 & 1;
}



/* Entry: 1049ba8ec; end: 1049ba8f7;  */

void FUN_1049ba8ec(undefined8 param_1,undefined8 param_2)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (*(code *)0x1049ba7fc)(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049ba8f8; end: 1049ba95b;  */

void FUN_1049ba8f8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  byte *unaff_x20;
  ulong uVar1;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  (*param_3)(uVar1);
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1049ba95c; end: 1049ba967;  */

void FUN_1049ba95c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  (*(code *)0x1049ba7fc)(uVar1);
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


