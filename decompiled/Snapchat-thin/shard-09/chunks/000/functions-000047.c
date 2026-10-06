/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10689e2c8; end: 10689e2cf; -[SCSpotlightAttributionFetchState setCreatorBitmojiAvatarId:] */

void FUN_10689e2c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10689e2d0; end: 10689e2d7; -[SCSpotlightAttributionFetchState creatorBitmojiSelfieId] */

undefined8 FUN_10689e2d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10689e2d8; end: 10689e2df; -[SCSpotlightAttributionFetchState setCreatorBitmojiSelfieId:] */

void FUN_10689e2d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10689e2e0; end: 10689e327; -[SCSpotlightAttributionFetchState .cxx_destruct] */

void FUN_10689e2e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10689e328; end: 10689e32f; -[SCSpotlightMediaFetchState mediaReady] */

undefined1 FUN_10689e328(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10689e330; end: 10689e337; -[SCSpotlightMediaFetchState setMediaReady:] */

void FUN_10689e330(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10689e338; end: 10689e33f; -[SCSpotlightMediaFetchState contentResult] */

undefined8 FUN_10689e338(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10689e340; end: 10689e36f; -[SCSpotlightMediaFetchState setContentResult:] */

void FUN_10689e340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10689e370; end: 10689e377; -[SCSpotlightMediaFetchState mediaError] */

undefined8 FUN_10689e370(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10689e378; end: 10689e3a7; -[SCSpotlightMediaFetchState setMediaError:] */

void FUN_10689e378(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10689e3a8; end: 10689e3d7; -[SCSpotlightMediaFetchState .cxx_destruct] */

void FUN_10689e3a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10689e3d8; end: 10689e763; -[SCSpotlightShareSender initWithTextSender:userSession:ephemeralMediaFactory:galleryStorySaver:legacyEphemeralMediaFactory:previewSnapSenderFactory:spotlightConfigProvider:contentProductSnapRenderer:snapDocManagerServices:snapDocEditorFactory:lensMetadataBuilder:messagingExperimentService:storiesMediaCoordinator:snapUploaderServices:] */

undefined8 *
FUN_10689e3d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_70 = PTR_PTR_1126f3a70;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[7];
    puVar1[7] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
  }
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10689e764; end: 10689e8df; -[SCSpotlightShareSender _fetchAttributionFromObservable:group:state:logContext:] */

void FUN_10689e764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_3);
  _dispatch_group_enter(param_4);
  uVar1 = param_3;
  func_0x00010c270520(0x3fe0000000000000,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c268560(uVar1,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10689e8e0;
  puStack_70 = &UNK_110898518;
  uStack_68 = param_5;
  uStack_60 = param_6;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 10689e8e0; end: 10689ea8f;  */

void FUN_10689e8e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  func_0x00010c0c0800(param_2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10689ea90; end: 10689f113;  */

void FUN_10689ea90(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  uVar7 = param_2;
  func_0x00010bf0eac0();
  uVar1 = param_2;
  if ((int)uVar7 == 6) {
    func_0x00010bf0ea60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c08fa60();
    if (uVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar1;
      func_0x00010c2711a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      _objc_release();
    }
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010bfdd480();
    if ((int)uVar7 == 0) {
LAB_10689ec80:
      uVar6 = 0;
    }
    else {
      uVar7 = uVar1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c26e140();
      _objc_release(uVar7);
      if ((int)uVar8 != 1) goto LAB_10689ec80;
      uVar7 = uVar1;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c12a1a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c08fa60();
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar3 = uVar1;
        func_0x00010c26d760(uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        func_0x00010c12a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        _objc_release();
        _objc_release(uVar2);
        _objc_release(uVar3);
      }
      _objc_release(uVar5);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    uVar7 = uVar1;
    func_0x00010bf15520();
    if ((int)uVar7 == 1) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      func_0x00010bf15520(uVar1);
      uVar7 = 0;
      uVar8 = 0;
    }
  }
  else {
    uVar7 = param_2;
    func_0x00010bf0eac0();
    if ((int)uVar7 != 4) {
      uVar4 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      goto LAB_10689f04c;
    }
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar8;
    func_0x00010c08fa60();
    uVar5 = uVar1;
    func_0x00010c290fa0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    if (uVar6 == 0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retainAutorelease();
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar8);
    _objc_release(uVar7);
    uVar7 = uVar1;
    func_0x00010bfeddc0();
    if ((int)uVar7 == 2) {
      uVar7 = uVar1;
      func_0x00010c291400();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
LAB_10689ed1c:
      func_0x00010c078f60(uVar5);
      if (uVar5 == 0) goto LAB_10689ef88;
      uVar7 = uVar5;
      func_0x00010bfdc440();
      uStack_78 = uVar5;
      if ((int)uVar7 == 0) {
LAB_10689ee14:
        uVar7 = uVar5;
        func_0x00010bfd4a60();
        if ((int)uVar7 != 0) {
          uVar8 = uVar5;
          func_0x00010bf1a980();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          func_0x00010bf12ea0();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          func_0x00010c08fa60();
          if (uVar7 == 0) {
            uVar7 = 0;
          }
          else {
            uVar3 = uVar5;
            func_0x00010bf1a980(uVar5);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar3;
            func_0x00010bf12ea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_retainAutorelease();
            _objc_release();
            _objc_release(uVar3);
          }
          _objc_release(uVar6);
          _objc_release(uVar8);
          func_0x00010bf1a980();
          _objc_retainAutoreleasedReturnValue();
          uStack_68 = uStack_78;
          func_0x00010c15ade0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uStack_68;
          func_0x00010c08fa60();
          if (uVar8 != 0) {
            uStack_70 = uVar5;
            func_0x00010bf1a980();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = uStack_70;
            func_0x00010c15ade0();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar3;
            _objc_retainAutorelease();
            uVar6 = 0;
            goto LAB_10689f00c;
          }
          uVar6 = 0;
          uVar8 = 0;
          goto LAB_10689f02c;
        }
        uVar7 = uVar5;
        func_0x00010bfdc440();
        if ((int)uVar7 == 0) goto LAB_10689ef88;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uStack_78;
        func_0x00010bfd8b80();
        if ((int)uVar7 != 0) {
          uVar7 = uVar5;
          func_0x00010c2427c0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar7;
          func_0x00010c0b4520();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          func_0x00010c070480();
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uStack_78);
          if ((int)uVar6 != 0) goto LAB_10689eef8;
          goto LAB_10689ef88;
        }
        uVar6 = 0;
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        uVar7 = uVar5;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bfd8b80();
        if ((uVar8 & 1) == 0) {
          _objc_release(uVar7);
          goto LAB_10689ee14;
        }
        uVar8 = uVar5;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar8;
        func_0x00010c0b4520();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar6;
        func_0x00010c070480();
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar7);
        if ((uVar3 & 1) != 0) goto LAB_10689ee14;
LAB_10689eef8:
        uStack_78 = uVar5;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = uStack_78;
        func_0x00010c0b4520();
        _objc_retainAutoreleasedReturnValue();
        uStack_70 = uStack_68;
        func_0x00010c0b4680();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uStack_70;
        func_0x00010c08fa60();
        if (uVar7 == 0) {
          uVar6 = 0;
          uVar7 = 0;
          uVar8 = 0;
        }
        else {
          uVar3 = uVar5;
          func_0x00010c2427c0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar3;
          func_0x00010c0b4520();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar7;
          func_0x00010c0b4680();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          _objc_release();
          _objc_release(uVar7);
          uVar7 = 0;
          uVar8 = 0;
LAB_10689f00c:
          _objc_release(uVar3);
        }
        _objc_release(uStack_70);
LAB_10689f02c:
        _objc_release(uStack_68);
      }
      _objc_release(uStack_78);
    }
    else {
      uVar7 = uVar1;
      func_0x00010bfeddc0();
      if ((int)uVar7 == 1) {
        uVar5 = uVar1;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
        goto LAB_10689ed1c;
      }
      func_0x00010c078f60(0);
      uVar5 = 0;
LAB_10689ef88:
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
LAB_10689f04c:
  _objc_release(param_2);
  _objc_retain(uVar4);
  _objc_retain(uVar6);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  func_0x00010c185d00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c185ce0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c201140(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c185b60(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c185ba0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10689f114; end: 10689f11b;  */

void FUN_10689f114(void)

{
  return;
}



/* Entry: 10689f11c; end: 10689f227; -[SCSpotlightShareSender _fetchMediaDataForMediaInfo:contexts:group:state:] */

void FUN_10689f11c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _dispatch_group_enter(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10689f228;
  puStack_58 = &UNK_1109466e8;
  uStack_50 = param_6;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c11d620(uVar1,param_2,param_3,param_4,&puStack_70);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_6);
  return;
}



/* Entry: 10689f228; end: 10689f2f3;  */

void FUN_10689f228(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    _objc_retain(param_4);
    _objc_retain(param_3);
    uVar1 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c1c50a0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c1c50a0(uVar1);
  }
  func_0x00010c182640(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  func_0x00010c1c46c0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  func_0x00010c0c6100(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10689f2f4; end: 10689f7e7; -[SCSpotlightShareSender sendSpotlightWithPlaybackMetadata:spotlightObservable:businessIds:additionalText:storiesConfig:completionQueue:completionHandler:] */

void FUN_10689f2f4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  lVar2 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_10689f7e8;
    puStack_78 = &UNK_110849530;
    _objc_retain(param_9);
    lStack_70 = param_9;
    func_0x00010007380c(param_8,&puStack_90);
    lVar8 = lStack_70;
  }
  else {
    uVar3 = param_7;
    func_0x00010846b590();
    if (((int)uVar3 != 0) && (lVar8 = lVar2, func_0x00010c27dd80(), lVar8 != 0)) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
      func_0x00010c07f560();
      if (iVar1 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010c07f540();
        if (((iVar1 != 0) && (lVar8 = param_6, func_0x00010c08fa60(), lVar8 == 0)) &&
           (*(long *)(param_1 + 0x90) != 0)) {
          iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
          lVar8 = param_3;
          func_0x00010c15f2e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          _objc_release(lVar8);
          if (iVar1 != 0) {
            lVar8 = *(long *)(param_1 + 0x90);
            _objc_retain(lVar8);
            uVar3 = *(undefined8 *)(param_1 + 0x90);
            *(undefined8 *)(param_1 + 0x90) = 0;
            _objc_release(uVar3);
            uVar3 = *(undefined8 *)(param_1 + 0x88);
            *(undefined8 *)(param_1 + 0x88) = 0;
            _objc_release(uVar3);
            _objc_initWeak(auStack_98,param_1);
            puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d8 = 0xc2000000;
            pcStack_d0 = FUN_10689f7f8;
            puStack_c8 = &UNK_110946718;
            _objc_copyWeak(auStack_a0,auStack_98);
            _objc_retain(param_8);
            uStack_c0 = param_8;
            _objc_retain(param_9);
            lStack_a8 = param_9;
            _objc_retain(param_7);
            uStack_b8 = param_7;
            _objc_retain(param_5);
            uStack_b0 = param_5;
            func_0x00010c297260(lVar8);
            _objc_release(uStack_b0);
            _objc_release(uStack_b8);
            _objc_release(lStack_a8);
            _objc_release(uStack_c0);
            _objc_destroyWeak(auStack_a0);
            _objc_destroyWeak(auStack_98);
            goto LAB_10689f640;
          }
        }
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_3;
    func_0x00010853acb4(param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar4 = lVar2;
    func_0x00010bf267e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar8;
    func_0x00010b26c050(lVar8,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _dispatch_group_create();
    puVar6 = PTR_PTR_1126cea38;
    _objc_opt_new();
    puVar7 = PTR_PTR_1126cea40;
    _objc_opt_new();
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c07f540();
    if ((param_4 != 0) && (iVar1 != 0)) {
      func_0x00010be0fc40(param_1);
    }
    func_0x00010be125a0(param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_140 = 0xc2000000;
    pcStack_138 = FUN_10689fab0;
    puStack_130 = &UNK_11086e848;
    puStack_128 = puVar7;
    _objc_retain(param_8);
    uStack_120 = param_8;
    _objc_retain(param_9);
    lStack_e8 = param_9;
    lStack_118 = param_1;
    _objc_retain(param_3);
    lStack_110 = param_3;
    _objc_retain(param_7);
    uStack_108 = param_7;
    _objc_retain(param_5);
    uStack_100 = param_5;
    _objc_retain(param_6);
    lStack_f8 = param_6;
    puStack_f0 = puVar6;
    _objc_retain(puVar6);
    _objc_retain(puVar7);
    func_0x000100bc0718(lVar4,uVar3,&puStack_148);
    _objc_release(uVar3);
    _objc_release(puStack_f0);
    _objc_release(lStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(lStack_110);
    _objc_release(lStack_e8);
    _objc_release(uStack_120);
    _objc_release(puStack_128);
    _objc_release(puVar6);
    _objc_release(puVar7);
    _objc_release(lVar4);
    _objc_release(lVar5);
  }
LAB_10689f640:
  _objc_release(lVar8);
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10689f7e8; end: 10689f7f7;  */

void FUN_10689f7e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010689f7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 10689f7f8; end: 10689f9b7;  */

void FUN_10689f7f8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10689f9b8;
    puStack_40 = &UNK_110849530;
    lVar2 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    func_0x00010007380c(uVar3,&puStack_58);
    lVar2 = lStack_38;
  }
  else if ((param_2 == 0) || (param_3 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x10689f9c8;
    puStack_68 = &UNK_110849530;
    lVar2 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar2);
    lStack_60 = lVar2;
    func_0x00010007380c(uVar3,&puStack_80);
    lVar2 = lStack_60;
  }
  else {
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_10689f9d8;
    puStack_b8 = &UNK_110866740;
    lStack_b0 = lVar1;
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    lStack_a8 = param_2;
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uStack_a0 = uVar3;
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uStack_98 = uVar4;
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = uVar5;
    _objc_retain(uVar3);
    uStack_88 = uVar3;
    func_0x000100162d98("APPSTORE",&puStack_d0);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    lVar2 = lStack_a8;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 10689f9b8; end: 10689f9d7;  */

void FUN_10689f9b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010689f9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 10689f9d8; end: 10689fa9f;  */

void FUN_10689f9d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf982c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c24c2e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be9f000(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10689faa0;
  puStack_40 = &UNK_110849530;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010007380c(uVar1,&puStack_58);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10689faa0; end: 10689faaf;  */

void FUN_10689faa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010689faac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10689fab0; end: 10689fcbb;  */

void FUN_10689fab0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0c6100();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf4d380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4d380(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010c0ef700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010c08fa60(uVar10);
      uVar9 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf4d380(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c23fc80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf5b580();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf5b540();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf5b120();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x58);
      func_0x00010bf5b180();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2335a0();
      func_0x00010c15cc00(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar10);
      return;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10689fcbc;
  puStack_70 = &UNK_110849530;
  uVar10 = *(undefined8 *)(param_1 + 0x60);
  _objc_retain(uVar10);
  uStack_68 = uVar10;
  func_0x00010007380c(uVar3,&puStack_88);
  _objc_release(uStack_68);
  return;
}



/* Entry: 10689fcbc; end: 10689fccb;  */

void FUN_10689fcbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010689fcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 10689fccc; end: 1068a018b; -[SCSpotlightShareSender sendSpotlightShareMediaData:overlayData:playbackMetadata:storiesConfig:businessIds:additionalText:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:completionQueue:completionHandler:] */

void FUN_10689fccc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
                  undefined4 param_14,undefined8 param_15,undefined8 param_16)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_16);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1068a018c;
    puStack_78 = &UNK_110849530;
    _objc_retain(param_16);
    uStack_70 = param_16;
    func_0x00010007380c(param_15,&puStack_90);
    _objc_release(uStack_70);
  }
  else {
    uVar3 = param_6;
    func_0x00010846b590();
    if ((int)uVar3 != 0) {
      lVar2 = param_5;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c27dd80();
      _objc_release(lVar2);
      if (lVar4 != 0) {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
        func_0x00010c07f540();
        if (iVar1 != 0) {
          _objc_initWeak(auStack_98,param_1);
          puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_d8 = 0xc2000000;
          pcStack_d0 = FUN_1068a019c;
          puStack_c8 = &UNK_110946748;
          _objc_copyWeak(auStack_a0,auStack_98);
          _objc_retain(param_15);
          uStack_c0 = param_15;
          _objc_retain(param_16);
          uStack_a8 = param_16;
          _objc_retain(param_6);
          uStack_b8 = param_6;
          _objc_retain(param_7);
          uStack_b0 = param_7;
          func_0x00010bdd5ca0(param_1);
          _objc_release(uStack_b0);
          _objc_release(uStack_b8);
          _objc_release(uStack_a8);
          _objc_release(uStack_c0);
          _objc_destroyWeak(auStack_a0);
          _objc_destroyWeak(auStack_98);
          goto LAB_1068a00f0;
        }
      }
    }
    lVar2 = param_5;
    func_0x000108534ba4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bdf26c0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010be3bfc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1;
    func_0x00010bdd6100();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,param_1);
    puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_130 = 0xc2000000;
    pcStack_128 = FUN_1068a04ac;
    puStack_120 = &UNK_1108b53e8;
    _objc_copyWeak(auStack_e8,auStack_98);
    _objc_retain(param_16);
    uStack_f0 = param_16;
    _objc_retain(lVar6);
    lStack_118 = lVar6;
    _objc_retain(lVar2);
    lStack_110 = lVar2;
    _objc_retain(param_6);
    uStack_108 = param_6;
    _objc_retain(param_7);
    uStack_100 = param_7;
    _objc_retain(param_15);
    uStack_f8 = param_15;
    func_0x000100162d98("APPSTORE",&puStack_138);
    _objc_release(uStack_f8);
    _objc_release(uStack_100);
    _objc_release(uStack_108);
    _objc_release(lStack_110);
    _objc_release(lStack_118);
    _objc_release(uStack_f0);
    _objc_destroyWeak(auStack_e8);
    _objc_destroyWeak(auStack_98);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
LAB_1068a00f0:
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a018c; end: 1068a019b;  */

void FUN_1068a018c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068a0198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 1068a019c; end: 1068a03bb;  */

void FUN_1068a019c(long param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1068a03bc;
    puStack_60 = &UNK_110849530;
    puVar2 = *(undefined **)(param_1 + 0x38);
    _objc_retain(puVar2);
    puStack_58 = puVar2;
    func_0x00010007380c(uVar3,&puStack_78);
    puVar2 = puStack_58;
  }
  else {
    if ((param_2 != 0) && (param_4 == 0)) {
      _objc_initWeak(auStack_80,lVar1);
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0xc2000000;
      pcStack_c8 = FUN_1068a03cc;
      puStack_c0 = &UNK_1108b53e8;
      _objc_copyWeak(auStack_88,auStack_80);
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      _objc_retain(uVar3);
      uStack_90 = uVar3;
      _objc_retain(param_2);
      lStack_b8 = param_2;
      _objc_retain(param_3);
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      uStack_b0 = param_3;
      _objc_retain(uVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uStack_a8 = uVar3;
      _objc_retain(uVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      uStack_a0 = uVar4;
      _objc_retain(uVar3);
      uStack_98 = uVar3;
      func_0x000100162d98("APPSTORE",&puStack_d8);
      _objc_release(uStack_98);
      _objc_release(uStack_a0);
      _objc_release(uStack_a8);
      _objc_release(uStack_b0);
      _objc_release(lStack_b8);
      _objc_release(uStack_90);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_80);
      goto LAB_1068a0380;
    }
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be30ba0(lVar1);
  }
  _objc_release(puVar2);
LAB_1068a0380:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1068a03bc; end: 1068a03cb;  */

void FUN_1068a03bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068a03c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 1068a03cc; end: 1068a049b;  */

void FUN_1068a03cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be9f000();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1068a049c;
    puStack_40 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010007380c(uVar1,&puStack_58);
    _objc_release(uStack_38);
    _objc_release(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001068a0498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0xc);
  return;
}



/* Entry: 1068a049c; end: 1068a04ab;  */

void FUN_1068a049c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068a04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1068a04ac; end: 1068a056f;  */

void FUN_1068a04ac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  lVar3 = param_1 + 0x50;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    func_0x00010be9f000();
    _objc_release(lVar3);
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_1068a0570;
    puStack_30 = &UNK_110849530;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    _objc_retain(uVar2);
    uStack_28 = uVar2;
    func_0x00010007380c(uVar1,&puStack_48);
    _objc_release(uStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001068a056c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),0xc);
  return;
}



/* Entry: 1068a0570; end: 1068a057f;  */

void FUN_1068a0570(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068a057c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1068a0580; end: 1068a0587; -[SCSpotlightShareSender isSpotlightShareToStoriesV2OptimizationEnabled] */

void FUN_1068a0580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_isSpotlightShareToStoriesV2Optim_1125fd768);
  return;
}



/* Entry: 1068a0588; end: 1068a0adb; -[SCSpotlightShareSender prefetchForSpotlightShare:spotlightObservable:] */

void FUN_1068a0588(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) goto LAB_1068a0840;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010c07f560();
  if (iVar1 == 0) goto LAB_1068a0840;
  lVar2 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) && (lVar3 = lVar2, func_0x00010c27dd80(), lVar3 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c07f540();
    if (iVar1 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x88);
      lVar3 = param_3;
      func_0x00010c15f2e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      if (iVar1 == 0) {
        _objc_release(lVar3);
      }
      else {
        lVar9 = *(long *)(param_1 + 0x90);
        _objc_release(lVar3);
        if (lVar9 != 0) goto LAB_1068a0838;
      }
      lVar3 = param_3;
      func_0x00010c15f2e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x88);
      *(long *)(param_1 + 0x88) = lVar3;
      _objc_release(uVar8);
      puVar4 = PTR_PTR_1126ae560;
      _objc_opt_new();
      puVar5 = puVar4;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x90);
      *(undefined **)(param_1 + 0x90) = puVar5;
      _objc_release(uVar8);
      uVar8 = *(undefined8 *)(param_1 + 0x80);
      func_0x00010c2923e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010853acb4(param_3,uVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      lVar9 = lVar2;
      func_0x00010bf267e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010b26c050(lVar3,lVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _dispatch_group_create();
      puVar5 = PTR_PTR_1126cea38;
      _objc_opt_new();
      puVar7 = PTR_PTR_1126cea40;
      _objc_opt_new();
      if (param_4 != 0) {
        func_0x00010be0fc40(param_1);
      }
      func_0x00010be125a0(param_1);
      uVar8 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c11de00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x1068a0870;
      puStack_90 = &UNK_1108475b0;
      puStack_88 = puVar7;
      puStack_80 = puVar4;
      lStack_78 = param_1;
      _objc_retain(param_3);
      lStack_70 = param_3;
      puStack_68 = puVar5;
      _objc_retain(puVar5);
      _objc_retain(puVar4);
      _objc_retain(puVar7);
      func_0x000100bc0718(lVar9,uVar8,&puStack_a8);
      _objc_release(uVar8);
      _objc_release(puStack_68);
      _objc_release(lStack_70);
      _objc_release(puStack_80);
      _objc_release(puStack_88);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar7);
      _objc_release(lVar9);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
  }
LAB_1068a0838:
  _objc_release(lVar2);
LAB_1068a0840:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a0adc; end: 1068a0bcf;  */

void FUN_1068a0adc(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_2 == 0) || (param_4 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    if (param_4 != 0) {
      func_0x00010bf43ca0(uVar2);
      goto LAB_1068a0ba8;
    }
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43ca0(uVar2);
  }
  else {
    puVar1 = PTR_PTR_1126cea48;
    _objc_opt_new(PTR_PTR_1126cea48);
    func_0x00010c196cc0();
    func_0x00010c208c80(puVar1);
    func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(puVar1);
LAB_1068a0ba8:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068a0bd0; end: 1068a11e3; -[SCSpotlightShareSender _buildAndStartUploadForV2ShareWithMediaData:overlayData:playbackMetadata:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalCaptionText:completion:] */

void FUN_1068a0bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_12);
  _objc_retain(param_13);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c07f580();
  uVar3 = 0x3946006ce7fb1;
  if (iVar2 == 0) {
    uVar3 = 0x409a006c59b97;
  }
  lVar1 = param_1;
  func_0x00010bdd6c00(param_1,param_2,param_5,param_3,param_4,uVar3,param_6,param_7,param_8,param_9,
                      param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x1068a0dc4;
  puStack_88 = &UNK_1109467e8;
  uStack_70 = param_12;
  uStack_68 = param_13;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  lStack_80 = param_1;
  uStack_78 = param_5;
  _objc_retain(param_12);
  _objc_retain(param_5);
  _objc_retain(param_13);
  func_0x00010c297260(lVar1,param_2,&puStack_a0,uVar3);
  _objc_release(lVar1);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_68);
  _objc_release(param_12);
  _objc_release(param_5);
  _objc_release(param_13);
  return;
}



/* Entry: 1068a11e4; end: 1068a11e7;  */

void FUN_1068a11e4(void)

{
  return;
}



/* Entry: 1068a11e8; end: 1068a18af; -[SCSpotlightShareSender sendSpotlightShare:conversationIds:additionalText:platformAnalytics:completionQueue:completionHandler:] */

void FUN_1068a11e8(long param_1,undefined8 param_2,undefined *param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  lVar2 = param_4;
  lVar8 = param_5;
  lVar17 = param_6;
  uVar19 = param_7;
  uVar18 = param_8;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 == (undefined *)0x0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0))
  goto LAB_1068a1848;
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010bf37880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_6);
  puVar4 = PTR_PTR_1126cea28;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar20 = param_3;
  func_0x00010bf454e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar20;
  func_0x000108f520ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1805c0(puVar4,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar20);
  puVar20 = param_3;
  func_0x00010c247520();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  puVar5 = PTR_PTR_1126b5bd8;
  func_0x00010c24b300(PTR_PTR_1126b5bd8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar20;
  func_0x00010c0720c0(puVar20,param_2,puVar5);
  _objc_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    puVar5 = PTR_PTR_1126b5bd8;
    func_0x00010c2753a0(PTR_PTR_1126b5bd8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar20;
    func_0x00010c0720c0(puVar20,param_2,puVar5);
    _objc_release(puVar5);
    if (((ulong)puVar6 & 1) == 0) {
      puVar5 = PTR_PTR_1126b5bd8;
      func_0x00010c25a340(PTR_PTR_1126b5bd8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar20;
      func_0x00010c0720c0(puVar20,param_2,puVar5);
      _objc_release(puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = PTR_PTR_1126b5bd8;
        func_0x00010c25a320(PTR_PTR_1126b5bd8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar20;
        func_0x00010c0720c0(puVar20,param_2,puVar5);
        _objc_release(puVar5);
        if (((ulong)puVar6 & 1) == 0) {
          puVar5 = PTR_PTR_1126b5bd8;
          func_0x00010c24b380(PTR_PTR_1126b5bd8);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar20;
          func_0x00010c0720c0(puVar20,param_2,puVar5);
          if ((int)puVar6 == 0) {
            puVar6 = PTR_PTR_1126b5bd8;
            func_0x00010bf36640(PTR_PTR_1126b5bd8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar20;
            func_0x00010c0720c0(puVar20,param_2,puVar6);
            _objc_release(puVar6);
            _objc_release(puVar5);
            if ((int)puVar7 == 0) {
              uVar19 = 0;
              goto LAB_1068a149c;
            }
          }
          else {
            _objc_release(puVar5);
          }
          uVar19 = 5;
        }
        else {
          uVar19 = 4;
        }
      }
      else {
        uVar19 = 3;
      }
    }
    else {
      uVar19 = 2;
    }
  }
  else {
    uVar19 = 1;
  }
LAB_1068a149c:
  _objc_release(puVar20);
  func_0x00010c206c40(puVar4,param_2,uVar19);
  _objc_release(puVar20);
  _objc_retain(param_3);
  puVar20 = puVar4;
  func_0x00010c247520();
  if ((int)puVar20 == 5) {
    puVar20 = param_3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar20;
    func_0x00010c08fa60();
    _objc_release(puVar20);
    if (puVar5 == (undefined *)0x0) goto LAB_1068a1558;
    puVar5 = PTR_PTR_1126b00c0;
    _objc_opt_new(PTR_PTR_1126b00c0);
    puVar20 = param_3;
    func_0x00010c094540(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar20;
    func_0x00010c0b4ca0();
    func_0x00010c1a99c0(puVar5,param_2,puVar6);
    _objc_release(puVar20);
    puVar20 = PTR_PTR_1126b25c0;
    _objc_opt_new(PTR_PTR_1126b25c0);
    func_0x00010c1ba8a0();
    _objc_release(puVar5);
  }
  else {
LAB_1068a1558:
    puVar20 = (undefined *)0x0;
  }
  _objc_release(param_3);
  _objc_release(param_3);
  func_0x00010c206100(puVar4,param_2,puVar20);
  _objc_release(puVar20);
  puVar5 = PTR_PTR_1126be930;
  _objc_alloc_init();
  func_0x00010c208d20();
  lVar2 = param_6;
  func_0x00010bf4d560();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar8;
  func_0x00010c08fa60();
  _objc_release(lVar8);
  _objc_release(lVar2);
  puVar20 = PTR_PTR_1126b0cd8;
  if (lVar17 != 0) {
    lVar2 = param_6;
    func_0x00010bf4d560(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar2;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar20,param_2,lVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    _objc_release(lVar2);
    puVar6 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    func_0x00010c1feca0(puVar5,param_2,puVar6);
    _objc_release(puVar6);
    puVar6 = puVar20;
    func_0x00010bfe5d80(puVar20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010c22ab40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar20);
  }
  puVar20 = PTR_PTR_1126ba668;
  _objc_alloc_init(PTR_PTR_1126ba668);
  func_0x00010c1fea60();
  puVar6 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar7 = puVar6;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126c1418;
  func_0x00010bf57480(PTR_PTR_1126c1418,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if (puVar6 != (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_70,1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar10 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar11 = puVar20;
  func_0x00010bf63640(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar7;
  func_0x00010bf21f60(puVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002be0(puVar10,param_2,puVar11,4,puVar12,1,puVar9);
  puVar13 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(param_6);
  lVar17 = 0;
  puVar4 = puVar13;
  lVar2 = lVar1;
  lVar8 = param_4;
  uVar19 = param_7;
  uVar18 = param_8;
  func_0x00010c15c260(uVar3);
  _objc_release(puVar13);
  _objc_release(uVar3);
  _objc_release(lVar1);
LAB_1068a1848:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    param_3 = puVar4;
    ___stack_chk_fail();
    _objc_retain(param_3);
    _objc_retain(lVar2);
    _objc_retain(lVar8);
    _objc_retain(lVar17);
    _objc_retain(uVar19);
    _objc_retain(uVar18);
    if ((param_3 != (undefined *)0x0) && (lVar1 = lVar2, func_0x00010bf529e0(), lVar1 != 0)) {
      uVar14 = *(undefined8 *)(param_4 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar14;
      func_0x00010bf37880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar14);
      uVar14 = *(undefined8 *)(param_4 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(lVar17);
      puVar20 = PTR_PTR_1126cea30;
      _objc_retain(param_3);
      _objc_alloc_init();
      puVar4 = param_3;
      func_0x00010bf454e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000108f520ec();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1805c0(puVar20,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010c241220(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c204680(puVar20,param_2,puVar4);
      _objc_release(puVar4);
      puVar4 = param_3;
      func_0x00010bf41ee0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      puVar5 = puVar4;
      func_0x000100576e9c(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17ee20(puVar20,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      puVar5 = PTR_PTR_1126be930;
      _objc_alloc_init(PTR_PTR_1126be930);
      func_0x00010c208620();
      lVar1 = lVar17;
      func_0x00010bf4d560();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar1;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010c08fa60();
      _objc_release(lVar15);
      _objc_release(lVar1);
      puVar4 = PTR_PTR_1126b0cd8;
      if (lVar16 != 0) {
        lVar1 = lVar17;
        func_0x00010bf4d560(lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar1;
        func_0x00010c22ab40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc35c0(puVar4,param_2,lVar15);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar15);
        _objc_release(lVar1);
        puVar6 = PTR_PTR_1126bc778;
        _objc_opt_new(PTR_PTR_1126bc778);
        func_0x00010c1feca0(puVar5,param_2,puVar6);
        _objc_release(puVar6);
        puVar6 = puVar4;
        func_0x00010bfe5d80(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar5;
        func_0x00010c22ab40(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0();
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar4);
      }
      puVar4 = PTR_PTR_1126ba668;
      _objc_alloc_init(PTR_PTR_1126ba668);
      func_0x00010c1fea60();
      puVar6 = PTR_PTR_1126b28f8;
      _objc_alloc(PTR_PTR_1126b28f8);
      func_0x00010c02b8e0();
      puVar7 = puVar6;
      func_0x00010c2a82e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = PTR_PTR_1126be6d0;
      _objc_alloc(PTR_PTR_1126be6d0);
      puVar9 = puVar4;
      func_0x00010bf63640(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar7;
      func_0x00010bf21f60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c002bc0(puVar6,param_2,puVar9,4,puVar10,1);
      puVar11 = puVar6;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar4);
      _objc_release(puVar5);
      _objc_release(puVar20);
      _objc_release(lVar17);
      func_0x00010c15c260(uVar14,param_2,puVar11,uVar3,lVar2,0,uVar19,uVar18);
      _objc_release(puVar11);
      _objc_release(uVar14);
      _objc_release(uVar3);
    }
    _objc_release(uVar18);
    _objc_release(uVar19);
    _objc_release(lVar17);
    _objc_release(lVar8);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a18b0; end: 1068a1cf7; -[SCSpotlightShareSender sendSpotlightReplyShareModel:conversationIds:additionalText:platformAnalytics:completionQueue:completionHandler:] */

void FUN_1068a18b0(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf37880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    puVar4 = PTR_PTR_1126cea30;
    _objc_retain(param_3);
    _objc_alloc_init();
    lVar1 = param_3;
    func_0x00010bf454e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x000108f520ec();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1805c0(puVar4,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010c241220(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204680(puVar4,param_2,lVar1);
    _objc_release(lVar1);
    lVar1 = param_3;
    func_0x00010bf41ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar5 = lVar1;
    func_0x000100576e9c(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ee20(puVar4,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126be930;
    _objc_alloc_init(PTR_PTR_1126be930);
    func_0x00010c208620();
    lVar1 = param_6;
    func_0x00010bf4d560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar1;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar1);
    puVar8 = PTR_PTR_1126b0cd8;
    if (lVar7 != 0) {
      lVar1 = param_6;
      func_0x00010bf4d560(param_6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c22ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc35c0(puVar8,param_2,lVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar1);
      puVar9 = PTR_PTR_1126bc778;
      _objc_opt_new(PTR_PTR_1126bc778);
      func_0x00010c1feca0(puVar6,param_2,puVar9);
      _objc_release(puVar9);
      puVar9 = puVar8;
      func_0x00010bfe5d80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar6;
      func_0x00010c22ab40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0();
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
    }
    puVar8 = PTR_PTR_1126ba668;
    _objc_alloc_init(PTR_PTR_1126ba668);
    func_0x00010c1fea60();
    puVar9 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar10 = puVar9;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126be6d0;
    _objc_alloc(PTR_PTR_1126be6d0);
    puVar11 = puVar8;
    func_0x00010bf63640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar10;
    func_0x00010bf21f60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c002bc0(puVar9,param_2,puVar11,4,puVar12,1);
    puVar13 = puVar9;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(param_6);
    func_0x00010c15c260(uVar2,param_2,puVar13,uVar3,param_4,0,param_7,param_8);
    _objc_release(puVar13);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a1cf8; end: 1068a1d7b; -[SCSpotlightShareSender _handleSpotlightShareError:completionQueue:completionHandler:] */

void FUN_1068a1cf8(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(in_x4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1068a1d7c;
  puStack_30 = &UNK_110849530;
  uStack_28 = in_x4;
  _objc_retain(in_x4);
  func_0x00010007380c(in_x3,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(in_x4);
  return;
}



/* Entry: 1068a1d7c; end: 1068a1d8b;  */

void FUN_1068a1d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001068a1d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0xc);
  return;
}



/* Entry: 1068a1d8c; end: 1068a2117; -[SCSpotlightShareSender _setupLayerCompositionForSnapDoc:] */

void FUN_1068a1d8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126becb8;
    _objc_opt_new(PTR_PTR_1126becb8);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c4660();
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar4 == 0) {
    puVar3 = PTR_PTR_1126becc0;
    _objc_opt_new(PTR_PTR_1126becc0);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b98c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar3);
  }
  lVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08c260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = lVar4;
  func_0x00010c2791c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12adc0();
  _objc_release(lVar1);
  puVar3 = PTR_PTR_1126bce80;
  _objc_opt_new(PTR_PTR_1126bce80);
  func_0x00010c1b1880();
  func_0x00010c2191c0(puVar3,param_2,1);
  func_0x00010c218fc0(puVar3,param_2,1);
  puVar5 = PTR_PTR_1126bce88;
  _objc_opt_new(PTR_PTR_1126bce88);
  func_0x00010c2190e0();
  puVar6 = puVar5;
  func_0x00010c0ff660(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc800();
  _objc_release(puVar6);
  puVar6 = puVar3;
  func_0x00010c2787a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar6);
  lVar1 = lVar4;
  func_0x00010c2791c0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(lVar1);
  func_0x00010c218fe0(lVar4,param_2,1);
  func_0x00010c219100(lVar4,param_2,1);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar7 == 0) {
    puVar6 = PTR_PTR_1126bcea8;
    _objc_opt_new(PTR_PTR_1126bcea8);
    lVar1 = param_3;
    func_0x00010c0fee00(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ea760();
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(puVar6);
  }
  lVar1 = param_3;
  func_0x00010c0fee00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar2;
  func_0x00010c12fae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea720();
  _objc_release(lVar7);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a2118; end: 1068a241b; -[SCSpotlightShareSender _applySpotlightTimelineToSnapDoc:] */

void FUN_1068a2118(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 == 0) goto LAB_1068a2400;
    lVar2 = param_3;
    func_0x00010c0fee00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c4c40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010c08c260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010c2791c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c2787a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010c0fee00();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0ff660();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
      if (lVar6 != 0) {
        func_0x00010c1dd680(lVar6,param_2,1);
        lVar2 = lVar6;
        func_0x00010c0c3fe0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 != 0) {
          lVar2 = lVar6;
          func_0x00010c0c3fe0(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c45e0();
          _objc_release(lVar2);
        }
      }
      lVar2 = lVar4;
      func_0x00010c27c540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126afff0;
        _objc_opt_new(PTR_PTR_1126afff0);
        func_0x00010c21a4e0(lVar4,param_2,puVar7);
        _objc_release(puVar7);
      }
      lVar2 = lVar4;
      func_0x00010c27c540(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209a20();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c27c540(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c192d40();
      _objc_release(lVar2);
      lVar2 = lVar4;
      func_0x00010c2667a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar2 == 0) {
        puVar7 = PTR_PTR_1126becc8;
        _objc_opt_new(PTR_PTR_1126becc8);
        func_0x00010c210d60(lVar4,param_2,puVar7);
        _objc_release(puVar7);
      }
      lVar2 = lVar4;
      func_0x00010c2667a0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214ca0();
      _objc_release(lVar2);
      _objc_release(lVar6);
    }
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
LAB_1068a2400:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a241c; end: 1068a2dff; -[SCSpotlightShareSender _buildSnapDocFromPlaybackMetadata:mediaData:overlayData:lensId:creatorDisplayName:creatorProfileLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:additionalCaptionText:] */

void FUN_1068a241c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_13);
  puVar1 = PTR_PTR_1126ae560;
  _objc_retain(param_4);
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bf8cb40(uVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b25e0;
  _objc_opt_new(PTR_PTR_1126b25e0);
  uVar5 = uVar3;
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3e0();
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b3068;
  _objc_opt_new(PTR_PTR_1126b3068);
  uVar5 = uVar3;
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd500();
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126b25e8;
  _objc_opt_new(PTR_PTR_1126b25e8);
  uVar5 = uVar3;
  func_0x00010c23fe00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c0fee00();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c0fef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd220();
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126affc0;
  func_0x00010c299cc0(PTR_PTR_1126affc0,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = uVar3;
  func_0x00010bef7100(uVar3,param_2,puVar4,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  uStack_d0 = 0x1068a279c;
  puStack_c8 = &UNK_110946848;
  uStack_90 = param_9;
  uStack_88 = param_10;
  uStack_70 = param_11;
  uStack_80 = param_13;
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  puStack_c0 = puVar1;
  uStack_b8 = uVar3;
  lStack_b0 = param_1;
  uStack_a8 = param_5;
  uStack_a0 = param_7;
  uStack_98 = param_8;
  uStack_78 = param_6;
  _objc_retain();
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(uVar3);
  _objc_retain(puVar1);
  func_0x00010c297260(uVar5,param_2,&puStack_e0,uVar7);
  _objc_release(uVar5);
  _objc_release(puVar4);
  puVar4 = puVar1;
  func_0x00010bfbc3e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b8);
  _objc_release(puStack_c0);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1068a2e00; end: 1068a2f4f;  */

void FUN_1068a2e00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_2);
    func_0x00010bf5cc00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0();
    _objc_release(param_2);
    _objc_release(uVar5);
  }
  puVar2 = PTR_PTR_1126bcd38;
  _objc_opt_new(PTR_PTR_1126bcd38);
  func_0x00010c218fc0();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c066480(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(uVar5);
  func_0x00010befae60(*(undefined8 *)(param_1 + 0x28));
  puVar3 = PTR_PTR_1126bcf30;
  _objc_opt_new(PTR_PTR_1126bcf30);
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c203d40(puVar3);
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c23fe00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216040();
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c23fe00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(uVar1);
  _objc_release(uVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1068a2f50; end: 1068a31a3; -[SCSpotlightShareSender _buildEphemeralFromMedia:overlayData:playbackMetadata:contextHintInfo:] */

void FUN_1068a2f50(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010bf56080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  func_0x00010c196d20(uVar1,param_2,0xfffffffffffffffa);
  lVar2 = param_5;
  func_0x00010c0c5340(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  func_0x00010c21acc0(uVar1,param_2,lVar3 != 0);
  func_0x00010c1d6440(uVar1,param_2,0);
  func_0x00010c1ac2c0(uVar1,param_2,1);
  func_0x00010c1c4480(uVar1,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c183080(uVar1,param_2,param_6);
  _objc_release(param_6);
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010c1c4e00(uVar1,param_2,param_4);
    func_0x00010c1c4e20(uVar1,param_2,1);
  }
  uVar4 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3b00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aaf20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010bf42a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_5;
  func_0x00010c15f2e0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7280(uVar4,param_2,lVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar4);
  if (param_3 != 0) {
    func_0x00010c0c5280(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068a31a4; end: 1068a331b; -[SCSpotlightShareSender _sendEphemeralMedia:spotlightSnapDoc:storiesConfig:businessIds:] */

void FUN_1068a31a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c08ef20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010bebd220();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = lVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1068a331c;
  puStack_60 = &UNK_110946878;
  uStack_58 = param_4;
  _objc_retain(param_4);
  func_0x00010c105300(lVar2,param_2,uVar1,param_5,0,0,uVar4,param_6,lVar3,0x100,0,&puStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(uStack_58);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 1068a331c; end: 1068a337b;  */

void FUN_1068a331c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c0fee00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dd3e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  func_0x00010c16b8e0(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1068a337c; end: 1068a341f; -[SCSpotlightShareSender _snapSender] */

void FUN_1068a337c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b4468;
  _objc_alloc(PTR_PTR_1126b4468);
  func_0x00010c05ce40();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c243220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1068a3420; end: 1068a3557; -[SCSpotlightShareSender _injectRepostMetadata:snapDoc:] */

void FUN_1068a3420(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf0d7e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010bf0d800();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb2040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_4);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x00010bf4e080(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c27f9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar1);
    func_0x00010c1eb840(lVar4,param_2,param_3);
    func_0x00010c1863e0(lVar4,param_2,0);
    func_0x00010c212080(lVar4,param_2,0);
    _objc_release(lVar4);
  }
  lVar1 = lVar2;
  func_0x00010bf4e080(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf4e840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1068a3558; end: 1068a3577;  */

bool FUN_1068a3558(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf0d0a0(param_2);
  return (int)param_2 == 1;
}



/* Entry: 1068a3578; end: 1068a368f; -[SCSpotlightShareSender _createRepostInfoWithPlaybackMetadata:additionalText:version:] */

void FUN_1068a3578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cea60;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  uVar2 = param_3;
  func_0x00010c15f2e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010bf5b080(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bf5b440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e620(puVar1,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x00010c17b8c0(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c220e20(puVar1,param_2,param_5);
  func_0x00010c2056c0(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068a3690; end: 1068a377f; -[SCSpotlightShareSender .cxx_destruct] */

void FUN_1068a3690(long param_1)

{
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068a3780; end: 1068a37f3; -[SCSpotlightShareUIHelper initWithLazyFeatureSettingsService:] */

undefined1 * FUN_1068a3780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3a78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1068a37f4; end: 1068a3a7f; -[SCSpotlightShareUIHelper presentDialogInContainer:completion:] */

void FUN_1068a37f4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar1;
    func_0x00010c24c540();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126aed70;
    if ((int)uVar7 == 0) {
      FUN_1068ab2a8();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126aed70;
      func_0x0001068ab2c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(param_3);
      func_0x00010beff4c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      puVar4 = PTR_PTR_1126aed78;
      _objc_alloc(PTR_PTR_1126aed78);
      puVar5 = puVar4;
      func_0x0001068ab2d8();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00c4e0(puVar4);
      _objc_release(puVar6);
      _objc_release(puVar5);
      uVar7 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c208d40();
      _objc_release(uVar7);
      func_0x00010bf0c980(param_3);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(param_3);
      _objc_release(param_4);
      _objc_release(puVar2);
      _objc_release(param_3);
      _objc_release(param_4);
      goto LAB_1068a3a34;
    }
  }
  (**(code **)(param_4 + 0x10))(param_4,1);
LAB_1068a3a34:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),0);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1068a3a80; end: 1068a3ae7;  */

void FUN_1068a3a80(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1068a3ae8; end: 1068a3af3; -[SCSpotlightShareUIHelper .cxx_destruct] */

void FUN_1068a3ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068a3af4; end: 1068a40f7; -[SCSpotlightToStoriesPoster initWithUserSession:ephemeralMediaFactory:galleryStorySaver:legacyEphemeralMediaFactory:snapSender:snapVideoFilterCoordinator:mediaDataIngestor:storiesThumbnailCoordinator:networkConnectivityMonitor:circumstanceEngine:spotlightConfigProvider:contentProductSnapRenderer:snapDocManagerServices:snapDocEditorFactory:lensMetadataBuilder:storiesMediaCoordinator:myStoriesDataCoordinating:storiesGrapheneMetricsEmitter:storyPrivacySettingManager:snapVideoFilterFactory:userInfoServices:snapUploaderServices:notificationManager:] */

undefined8 *
FUN_1068a3af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126f3a80;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[0x16];
    puVar1[0x16] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126cea68;
    _objc_alloc();
    func_0x00010c05d900();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x11];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068a40f8; end: 1068a4337; -[SCSpotlightToStoriesPoster postSpotlightWithPlaybackMetadata:spotlightObservable:storiesConfig:delayInSecond:showUndoToast:] */

void FUN_1068a40f8(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,int param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288b40();
    _objc_release(uVar2);
    _objc_initWeak(auStack_68,param_2);
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_1068a4338;
    puStack_80 = &UNK_110841fb0;
    _objc_retain(param_4);
    lStack_78 = param_4;
    _objc_copyWeak(auStack_70,auStack_68);
    ppuVar3 = &puStack_98;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_2 + 200);
    *(undefined ***)(param_2 + 200) = ppuVar3;
    _objc_release(uVar2);
    if (param_7 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0xc0);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c064e40();
      _objc_release(uVar2);
    }
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    _objc_copyWeak(auStack_a8,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_6);
    uStack_a0 = param_1;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_70);
    _objc_release(lStack_78);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1068a4338; end: 1068a436b;  */

void FUN_1068a4338(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6ca00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068a436c; end: 1068a436f;  */

void FUN_1068a436c(void)

{
  return;
}



/* Entry: 1068a4370; end: 1068a43ab;  */

void FUN_1068a4370(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bec11c0(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068a43ac; end: 1068a44c7; -[SCSpotlightToStoriesPoster deleteSpotlightPostingWithPlaybackMetadata:] */

void FUN_1068a43ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c288b40();
    _objc_release(uVar2);
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a44c8; end: 1068a44fb;  */

void FUN_1068a44c8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068a44fc; end: 1068a4573; -[SCSpotlightToStoriesPoster _getOrCreateStateForSpotlightStoryId:] */

void FUN_1068a44fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0xd0);
  func_0x00010c0e00e0(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126cea70;
    _objc_alloc_init(PTR_PTR_1126cea70);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0xd0),param_2,puVar1,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068a4574; end: 1068a457b; -[SCSpotlightToStoriesPoster _getStateForSpotlightStoryId:] */

void FUN_1068a4574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xd0),PTR_s_objectForKeyedSubscript__112615a50);
  return;
}



/* Entry: 1068a457c; end: 1068a48b7; -[SCSpotlightToStoriesPoster _startPostingWithPlaybackMetadata:spotlightObservable:storiesConfig:delayInSecond:] */

void FUN_1068a457c(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined **param_6)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_1f8 [8];
  undefined8 uStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  code *pcStack_1b8;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  uStack_1a0 = param_5;
  _objc_retain(param_5);
  ppuStack_198 = param_6;
  _objc_retain(param_6);
  lStack_1a8 = param_4;
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010be21280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c1343e0();
  if (lVar3 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar3 = lVar2;
    func_0x00010bf3d0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf52a60();
    if (lVar4 != 0) {
      lVar10 = *plStack_130;
      param_6 = &PTR_PTR_1126ce000;
      do {
        lVar9 = 0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(lVar3);
          }
          puVar5 = PTR_PTR_1126cea78;
          _objc_alloc(PTR_PTR_1126cea78);
          func_0x00010bfff080();
          func_0x00010c1d0640(*(undefined8 *)(param_2 + 0xd8));
          _objc_release(puVar5);
          lVar9 = lVar9 + 1;
        } while (lVar4 != lVar9);
        lVar4 = lVar3;
        func_0x00010bf52a60();
      } while (lVar4 != 0);
    }
    _objc_release(lVar3);
  }
  func_0x00010bf2dd80(lVar2);
  func_0x00010c1eb800(lVar2);
  _objc_initWeak(auStack_148,param_2);
  uVar11 = *(undefined8 *)(param_2 + 0xb8);
  _objc_retain(uVar11);
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_1068a48b8;
  puStack_178 = &UNK_11085ae98;
  _objc_retain(uVar11);
  lVar3 = lStack_1a8;
  uStack_170 = uVar11;
  _objc_retain(lStack_1a8);
  uVar6 = uStack_1a0;
  lStack_168 = lVar3;
  _objc_retain(uStack_1a0);
  ppuVar1 = ppuStack_198;
  uStack_160 = uVar6;
  _objc_retain(ppuStack_198);
  ppuStack_158 = ppuVar1;
  _objc_copyWeak(auStack_150,auStack_148);
  uVar6 = 0;
  func_0x0001008553e8(0,&puStack_190);
  func_0x00010c227280(lVar2);
  uVar7 = 0;
  _dispatch_time(0,(long)(param_1 * 1000000000.0));
  uVar8 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010058c530(uVar7,uVar8,uVar6);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_150);
  _objc_release(ppuStack_158);
  _objc_release(uStack_160);
  _objc_release(lStack_168);
  _objc_release(uStack_170);
  _objc_release(uVar11);
  _objc_destroyWeak(auStack_148);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(ppuStack_198);
  _objc_release(uStack_1a0);
  lVar3 = lStack_1a8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_150);
  _objc_destroyWeak(auStack_148);
  lVar4 = lVar3;
  __Unwind_Resume();
  pcStack_1b8 = FUN_1068a48b8;
  uVar6 = *(undefined8 *)(lVar4 + 0x20);
  uStack_1f0 = uVar8;
  lStack_1e8 = lVar2;
  lStack_1e0 = param_4;
  ppuStack_1d8 = param_6;
  ppuStack_1d0 = &puStack_190;
  lStack_1c8 = lVar3;
  puStack_1c0 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_1f8,lVar4 + 0x40);
  uVar7 = *(undefined8 *)(lVar4 + 0x28);
  _objc_retain(uVar7);
  func_0x00010bf49780(uVar6);
  _objc_release(uVar7);
  _objc_destroyWeak(auStack_1f8);
  return;
}



/* Entry: 1068a48b8; end: 1068a497b;  */

void FUN_1068a48b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  func_0x00010bf49780(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1068a497c; end: 1068a49ef;  */

void FUN_1068a497c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15f2e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be76880(lVar1);
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1068a49f0; end: 1068a4aef; -[SCSpotlightToStoriesPoster _postSpotlightWithParams:spotlightStoryId:] */

void FUN_1068a49f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xb0);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a4af0; end: 1068a4b23;  */

void FUN_1068a4af0(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068a4b24; end: 1068a4be7; -[SCSpotlightToStoriesPoster _postSpotlightOnPerformerWithParams:spotlightStoryId:] */

void FUN_1068a4b24(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c240200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      uVar3 = param_1;
      func_0x00010be21280(param_1,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7720();
      func_0x00010be729e0(param_1,param_2,param_3,param_4);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a4be8; end: 1068a4edf; -[SCSpotlightToStoriesPoster _performSpotlightPostWithParams:spotlightStoryId:] */

void FUN_1068a4be8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be22f40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c1343e0();
    if (lVar2 == 3) {
      lVar2 = param_3;
      func_0x00010c240200(param_3);
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = lVar2;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x00010bdfa860(param_1);
    }
    else {
      lVar2 = param_3;
      func_0x00010c258040();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_78 = 0;
      }
      else {
        lVar3 = param_3;
        func_0x00010c258040();
        _objc_retainAutoreleasedReturnValue();
        uStack_78 = lVar3;
        func_0x00010bd869d0();
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010c240200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0c60c0();
      lVar5 = param_3;
      func_0x00010bf50b20();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c0bc3c0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_3;
      func_0x00010c0fb120();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_3;
      func_0x00010bfeba20();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_3;
      func_0x00010c243080();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_3;
      func_0x00010c0cbde0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = param_3;
      func_0x00010bf9df20();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = param_3;
      func_0x00010c09dc60();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3;
      func_0x00010c09dd60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15ca40(uVar4);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(uVar4);
    }
    _objc_release(uStack_78);
    func_0x00010c227280(lVar1);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a4ee0; end: 1068a4f2f;  */

void FUN_1068a4ee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c3310;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02bae0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1068a4f30; end: 1068a50e7; -[SCSpotlightToStoriesPoster _deleteSpotlightPostingOnPerformerWithSpotlightStoryId:] */

void FUN_1068a4f30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be22f40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1eb800(lVar1);
    func_0x00010bf2dd80(lVar1);
    lVar2 = lVar1;
    func_0x00010bf3d0a0();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) && (lVar3 = lVar2, func_0x00010bf529e0(), lVar3 != 0)) {
      lVar3 = lVar2;
      func_0x00010bf51e00();
      _objc_initWeak(auStack_58,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x88);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(lVar3);
      _objc_retain(param_3);
      func_0x00010c11d860(uVar4);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_release(lVar3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a50e8; end: 1068a53cf;  */

void FUN_1068a50e8(long param_1,long param_2,undefined8 *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lStack_1f8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    lVar10 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar10);
    param_3 = &uStack_1b0;
    param_4 = auStack_f0;
    param_5 = 0x10;
    lStack_1f8 = lVar10;
    func_0x00010bf52a60();
    if (lStack_1f8 != 0) {
      lVar8 = *plStack_1a0;
      do {
        lVar11 = 0;
        do {
          if (*plStack_1a0 != lVar8) {
            _objc_enumerationMutation(lVar10);
          }
          lVar2 = *(long *)(lVar1 + 0x88);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar2;
          func_0x00010c105a00();
          _objc_release(lVar2);
          if (lVar3 + 6U < 7 && (1L << (lVar3 + 6U & 0x3f) & 0x45U) != 0) {
            puVar4 = PTR_PTR_1126cea78;
            _objc_alloc(PTR_PTR_1126cea78);
            func_0x00010bfff080();
            func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0xd8));
            _objc_release(puVar4);
          }
          lVar3 = param_2;
          func_0x00010bf529e0();
          if (lVar3 == 0) {
            uVar12 = 0;
          }
          else {
            _objc_retain(param_2);
            lVar2 = param_2;
            func_0x00010bf52a60();
            lVar3 = lRam0000000000000000;
            uVar12 = 0;
            if (lVar2 != 0) {
              do {
                lVar9 = 0;
                do {
                  if (lRam0000000000000000 != lVar3) {
                    _objc_enumerationMutation(param_2);
                  }
                  uVar12 = *(undefined8 *)(lVar9 * 8);
                  uVar6 = uVar12;
                  func_0x00010bf3cf60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar7 = uVar6;
                  func_0x000108ea5f00();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar7;
                  func_0x00010c0720c0();
                  _objc_release(uVar7);
                  _objc_release(uVar6);
                  if ((int)uVar5 != 0) {
                    func_0x00010c15f2e0();
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1068a5314;
                  }
                  lVar9 = lVar9 + 1;
                } while (lVar2 != lVar9);
                lVar2 = param_2;
                func_0x00010bf52a60();
              } while (lVar2 != 0);
              uVar12 = 0;
            }
LAB_1068a5314:
            _objc_release(param_2);
          }
          lVar3 = param_1 + 0x30;
          _objc_loadWeakRetained();
          func_0x00010bdfa860();
          _objc_release(lVar3);
          _objc_release(uVar12);
          lVar11 = lVar11 + 1;
        } while (lVar11 != lStack_1f8);
        param_3 = &uStack_1b0;
        param_4 = auStack_f0;
        param_5 = 0x10;
        lStack_1f8 = lVar10;
        func_0x00010bf52a60();
      } while (lStack_1f8 != 0);
    }
    _objc_release(lVar10);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == (undefined1 *)0x0) {
    uVar12 = *(undefined8 *)(param_2 + 0x88);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_2 + 8);
    func_0x00010c2923e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b6c0(uVar12);
    _objc_release(uVar6);
    _objc_release(uVar12);
  }
  uVar12 = *(undefined8 *)(param_2 + 0x88);
  func_0x00010c269d40(uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c2923e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0xb0);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6cb40(uVar12);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar12);
  func_0x00010be22f40();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    func_0x00010c12b7e0(param_2);
  }
  _objc_release(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a53d0; end: 1068a553f; -[SCSpotlightToStoriesPoster _deleteSpotlightPostingWithClientId:serverId:spotlightStoryId:] */

void FUN_1068a53d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b6c0(uVar1,param_2,param_3,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6cb40(uVar1,param_2,param_3,param_4,0,uVar2,1,1,uVar3,
                      &PTR___NSConcreteGlobalBlock_110946988);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010be22f40(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c12b7e0(param_1,param_2,param_3);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a5540; end: 1068a5543;  */

void FUN_1068a5540(void)

{
  return;
}



/* Entry: 1068a5544; end: 1068a561b; -[SCSpotlightToStoriesPoster didUpdateMyStoriesDataRequest:] */

void FUN_1068a5544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0be260(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a561c; end: 1068a561f;  */

void FUN_1068a561c(void)

{
  return;
}



/* Entry: 1068a5620; end: 1068a570b;  */

void FUN_1068a5620(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  if (param_3 - 1U < 2) {
    lVar1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xb0);
      _objc_copyWeak(auStack_48,param_1 + 0x20);
      _objc_retain(param_2);
      func_0x00010c0f7fc0(uVar2);
      _objc_release(param_2);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1068a570c; end: 1068a573f;  */

void FUN_1068a570c(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc3e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1068a5740; end: 1068a589f; -[SCSpotlightToStoriesPoster _announcePostedClientIds:] */

void FUN_1068a5740(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar3 = *(undefined8 *)(lVar7 * 8);
      lVar6 = *(long *)(param_1 + 0xd8);
      func_0x000108ea5f00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (lVar6 != 0) {
        lVar4 = lVar6;
        func_0x00010c24c4e0(lVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdfa840(param_1);
        _objc_release(lVar4);
      }
      _objc_release(lVar6);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0xd8,0);
  _objc_storeStrong(param_3 + 0xd0,0);
  _objc_storeStrong(param_3 + 200,0);
  _objc_storeStrong(param_3 + 0xc0,0);
  _objc_storeStrong(param_3 + 0xb8,0);
  _objc_storeStrong(param_3 + 0xb0,0);
  _objc_storeStrong(param_3 + 0xa8,0);
  _objc_storeStrong(param_3 + 0xa0,0);
  _objc_storeStrong(param_3 + 0x98,0);
  _objc_storeStrong(param_3 + 0x90,0);
  _objc_storeStrong(param_3 + 0x88,0);
  _objc_storeStrong(param_3 + 0x80,0);
  _objc_storeStrong(param_3 + 0x78,0);
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 1068a58a0; end: 1068a59fb; -[SCSpotlightToStoriesPoster .cxx_destruct] */

void FUN_1068a58a0(long param_1)

{
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068a59fc; end: 1068a5ec7; -[SCSpotlightToStoriesPostingConstructor initWithUserSession:ephemeralMediaFactory:galleryStorySaver:legacyEphemeralMediaFactory:snapVideoFilterCoordinator:mediaDataIngestor:storiesThumbnailCoordinator:networkConnectivityMonitor:circumstanceEngine:spotlightConfigProvider:contentProductSnapRenderer:snapDocManagerServices:snapDocEditorFactory:lensMetadataBuilder:storiesMediaCoordinator:myStoriesDataCoordinating:storiesGrapheneMetricsEmitter:storyPrivacySettingManager:snapVideoFilterFactory:userInfoServices:snapUploaderServices:performer:] */

undefined8 *
FUN_1068a59fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  puStack_70 = PTR_PTR_1126f3a88;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar2);
    _objc_retain(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010bf1f440();
    *(char *)(puVar1 + 0x18) = (char)uVar2;
  }
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1068a5ec8; end: 1068a643b; -[SCSpotlightToStoriesPostingConstructor constructPostParamsWithPlaybackMetadata:spotlightObservable:storiesConfig:completion:] */

void FUN_1068a5ec8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010c0c5340();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010853acb4(param_3,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar5 = lVar2;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010b26c050(lVar4,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _dispatch_group_create();
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_1068a643c;
    uStack_88 = 0x1068a644c;
    uStack_80 = 0;
    puStack_d0 = &uStack_d8;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_1068a643c;
    uStack_b8 = 0x1068a644c;
    uStack_b0 = 0;
    puStack_f0 = &uStack_f8;
    uStack_f8 = 0;
    uStack_e8 = 0x2020000000;
    uStack_e0 = 0;
    puStack_120 = &uStack_128;
    uStack_128 = 0;
    uStack_118 = 0x3032000000;
    pcStack_110 = FUN_1068a643c;
    uStack_108 = 0x1068a644c;
    uStack_100 = 0;
    puStack_150 = &uStack_158;
    uStack_158 = 0;
    uStack_148 = 0x3032000000;
    pcStack_140 = FUN_1068a643c;
    uStack_138 = 0x1068a644c;
    uStack_130 = 0;
    puStack_180 = &uStack_188;
    uStack_188 = 0;
    uStack_178 = 0x3032000000;
    pcStack_170 = FUN_1068a643c;
    uStack_168 = 0x1068a644c;
    uStack_160 = 0;
    puStack_1b0 = &uStack_1b8;
    uStack_1b8 = 0;
    uStack_1a8 = 0x3032000000;
    pcStack_1a0 = FUN_1068a643c;
    uStack_198 = 0x1068a644c;
    uStack_190 = 0;
    puStack_1d0 = &uStack_1d8;
    uStack_1d8 = 0;
    uStack_1c8 = 0x2020000000;
    uStack_1c0 = 0;
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      uVar1 = (uint)*(undefined8 *)(param_1 + 0x50);
      func_0x00010c07f540();
      uVar1 = uVar1 ^ 1;
      if (param_4 == 0) {
        uVar1 = 1;
      }
      if ((uVar1 & 1) == 0) {
        _dispatch_group_enter(lVar5);
        lVar7 = param_4;
        func_0x00010c270520(0x3fe0000000000000);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c268560(lVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar8;
        func_0x00010c0e0ea0();
        _objc_retainAutoreleasedReturnValue();
        puStack_228 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_220 = 0xc2000000;
        pcStack_218 = FUN_1068a6454;
        puStack_210 = &UNK_110946ab8;
        puStack_200 = &uStack_128;
        puStack_1f8 = &uStack_158;
        puStack_1f0 = &uStack_1d8;
        puStack_1e8 = &uStack_188;
        puStack_1e0 = &uStack_1b8;
        _objc_retain(lVar5);
        lVar10 = lVar9;
        lStack_208 = lVar5;
        func_0x00010c25ff60(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1a3e0();
        _objc_release(lVar10);
        _objc_release(lVar9);
        _objc_release(lVar8);
        _objc_release(lVar7);
        _objc_release(lStack_208);
      }
    }
    _dispatch_group_enter(lVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_260 = 0xc2000000;
    pcStack_258 = FUN_1068a6b94;
    puStack_250 = &UNK_110946ae8;
    puStack_240 = &uStack_f8;
    puStack_238 = &uStack_a8;
    puStack_230 = &uStack_d8;
    _objc_retain(lVar5);
    lStack_248 = lVar5;
    func_0x00010c11d620(uVar3);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010c11de00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puStack_2e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_2e0 = 0xc2000000;
    pcStack_2d8 = FUN_1068a6c74;
    puStack_2d0 = &UNK_110946b18;
    puStack_2a8 = &uStack_f8;
    puStack_2a0 = &uStack_a8;
    puStack_298 = &uStack_d8;
    _objc_retain(param_6);
    lStack_2c8 = param_1;
    lStack_2b0 = param_6;
    _objc_retain(param_3);
    lStack_2c0 = param_3;
    _objc_retain(param_5);
    puStack_290 = &uStack_128;
    puStack_288 = &uStack_158;
    puStack_280 = &uStack_188;
    puStack_278 = &uStack_1b8;
    puStack_270 = &uStack_1d8;
    uStack_2b8 = param_5;
    func_0x000100bc0718(lVar5,uVar3,&puStack_2e8);
    _objc_release(uVar3);
    _objc_release(uStack_2b8);
    _objc_release(lStack_2c0);
    _objc_release(lStack_2b0);
    _objc_release(lStack_248);
    __Block_object_dispose(&uStack_1d8,8);
    __Block_object_dispose(&uStack_1b8,8);
    _objc_release(uStack_190);
    __Block_object_dispose(&uStack_188,8);
    _objc_release(uStack_160);
    __Block_object_dispose(&uStack_158,8);
    _objc_release(uStack_130);
    __Block_object_dispose(&uStack_128,8);
    _objc_release(uStack_100);
    __Block_object_dispose(&uStack_f8,8);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(lVar5);
    _objc_release(lVar6);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a643c; end: 1068a6453;  */

void FUN_1068a643c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1068a6454; end: 1068a64d3;  */

void FUN_1068a6454(long param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1068a64d4;
  puStack_50 = &UNK_110946a68;
  uStack_40 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0c0800(param_2,param_2,&puStack_68,&PTR___NSConcreteGlobalBlock_110946a98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068a64d4; end: 1068a653f;  */

void FUN_1068a64d4(long param_1,undefined8 param_2)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1068a6540;
  puStack_40 = &UNK_110946a18;
  uStack_30 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_20 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  uStack_18 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0c0800(param_2,param_2,&puStack_58,&PTR___NSConcreteGlobalBlock_110946a48);
  return;
}



/* Entry: 1068a6540; end: 1068a6b8b;  */

void FUN_1068a6540(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong unaff_x27;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_68;
  
  _objc_retain(param_2);
  uVar7 = param_2;
  func_0x00010bf0eac0();
  uVar2 = param_2;
  if ((int)uVar7 == 6) {
    func_0x00010bf0ea60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c08fa60();
    if (uVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar2;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(uVar8);
    uVar5 = *(undefined8 *)(lVar9 + 0x28);
    *(ulong *)(lVar9 + 0x28) = uVar8;
    _objc_release(uVar5);
    if (uVar3 != 0) {
      _objc_release(uVar8);
    }
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010bfdd480();
    if ((int)uVar7 != 0) {
      uVar7 = uVar2;
      func_0x00010c26d760();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c26e140();
      _objc_release(uVar7);
      if ((int)uVar3 == 1) {
        uVar7 = uVar2;
        func_0x00010c26d760();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar7;
        func_0x00010c12a1a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010bdc2b80();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        func_0x00010c08fa60();
        if (uVar4 == 0) {
          uVar10 = 0;
        }
        else {
          uStack_68 = uVar2;
          func_0x00010c26d760();
          _objc_retainAutoreleasedReturnValue();
          unaff_x27 = uStack_68;
          func_0x00010c12a1a0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = unaff_x27;
          func_0x00010bdc2b80();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        _objc_retain(uVar10);
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        *(ulong *)(lVar9 + 0x28) = uVar10;
        _objc_release(uVar5);
        if (uVar4 != 0) {
          _objc_release(uVar10);
          _objc_release(unaff_x27);
          _objc_release(uStack_68);
        }
        _objc_release(uVar8);
        _objc_release(uVar3);
        _objc_release(uVar7);
      }
    }
    uVar7 = uVar2;
    func_0x00010bf15520();
    if ((int)uVar7 == 1) {
      bVar1 = true;
    }
    else {
      uVar7 = uVar2;
      func_0x00010bf15520();
      bVar1 = (int)uVar7 == 2;
    }
    *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = bVar1;
  }
  else {
    uVar7 = param_2;
    func_0x00010bf0eac0();
    if ((int)uVar7 != 4) goto LAB_1068a6b68;
    func_0x00010bf0ea40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c08fa60();
    uVar4 = uVar2;
    func_0x00010c290fa0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    if (uVar8 == 0) {
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = *(ulong *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain();
    uVar5 = *(undefined8 *)(uVar8 + 0x28);
    *(ulong *)(uVar8 + 0x28) = uVar10;
    _objc_release(uVar5);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
    uVar7 = uVar2;
    func_0x00010bfeddc0();
    if ((int)uVar7 == 2) {
      uVar3 = uVar2;
      func_0x00010c291400();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c290fa0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    else {
      uVar7 = uVar2;
      func_0x00010bfeddc0();
      if ((int)uVar7 == 1) {
        uVar7 = uVar2;
        func_0x00010c290fa0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar7 = 0;
      }
    }
    uVar3 = uVar7;
    func_0x00010c078f60();
    *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar3;
    if (uVar7 == 0) goto LAB_1068a6b58;
    uVar3 = uVar7;
    func_0x00010bfdc440();
    uVar4 = uVar7;
    if ((int)uVar3 == 0) {
LAB_1068a68f4:
      uVar3 = uVar7;
      func_0x00010bfd4a60();
      if ((int)uVar3 != 0) {
        uVar3 = uVar7;
        func_0x00010bf1a980();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010bf12ea0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar10;
        func_0x00010c08fa60();
        if (uVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar8 = uVar7;
          func_0x00010bf1a980();
          _objc_retainAutoreleasedReturnValue();
          uVar11 = uVar8;
          func_0x00010bf12ea0();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x38) + 8);
        _objc_retain(uVar11);
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        *(ulong *)(lVar9 + 0x28) = uVar11;
        _objc_release(uVar5);
        if (uVar6 != 0) {
          _objc_release(uVar11);
          _objc_release(uVar8);
        }
        _objc_release(uVar10);
        _objc_release(uVar3);
        func_0x00010bf1a980();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010c15ade0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar3;
        func_0x00010c08fa60();
        if (uVar10 == 0) {
          uVar8 = 0;
        }
        else {
          uVar6 = uVar7;
          func_0x00010bf1a980();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          func_0x00010c15ade0();
          _objc_retainAutoreleasedReturnValue();
        }
        lVar9 = *(long *)(*(long *)(param_1 + 0x40) + 8);
        _objc_retain(uVar8);
        uVar5 = *(undefined8 *)(lVar9 + 0x28);
        *(ulong *)(lVar9 + 0x28) = uVar8;
        _objc_release(uVar5);
        if (uVar10 != 0) goto LAB_1068a6b38;
        goto LAB_1068a6b48;
      }
      uVar3 = uVar7;
      func_0x00010bfdc440();
      if ((int)uVar3 != 0) {
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar4;
        func_0x00010bfd8b80();
        if ((int)uVar3 != 0) {
          uVar3 = uVar7;
          func_0x00010c2427c0();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar3;
          func_0x00010c0b4520();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar10;
          func_0x00010c070480();
          _objc_release(uVar10);
          _objc_release(uVar3);
          _objc_release(uVar4);
          if ((int)uVar8 != 0) goto LAB_1068a69c8;
          goto LAB_1068a6b58;
        }
        goto LAB_1068a6b50;
      }
    }
    else {
      uVar3 = uVar7;
      func_0x00010c2427c0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar3;
      func_0x00010bfd8b80();
      if ((uVar10 & 1) == 0) {
        _objc_release(uVar3);
        goto LAB_1068a68f4;
      }
      uVar10 = uVar7;
      func_0x00010c2427c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010c0b4520();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010c070480();
      _objc_release(uVar6);
      _objc_release(uVar10);
      _objc_release(uVar3);
      if ((uVar8 & 1) != 0) goto LAB_1068a68f4;
LAB_1068a69c8:
      uVar4 = uVar7;
      func_0x00010c2427c0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar4;
      func_0x00010c0b4520();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0b4680();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar6;
      func_0x00010c08fa60();
      if (uVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar8 = uVar7;
        func_0x00010c2427c0();
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = uVar8;
        func_0x00010c0b4520();
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uStack_68;
        func_0x00010c0b4680();
        _objc_retainAutoreleasedReturnValue();
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      _objc_retain(uVar11);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      *(ulong *)(lVar9 + 0x28) = uVar11;
      _objc_release(uVar5);
      if (uVar10 != 0) {
        _objc_release(uVar11);
        _objc_release(uStack_68);
LAB_1068a6b38:
        _objc_release(uVar8);
      }
      _objc_release(uVar6);
LAB_1068a6b48:
      _objc_release(uVar3);
LAB_1068a6b50:
      _objc_release(uVar4);
    }
LAB_1068a6b58:
    _objc_release(uVar7);
  }
  _objc_release(uVar2);
LAB_1068a6b68:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068a6b8c; end: 1068a6b93;  */

void FUN_1068a6b8c(void)

{
  return;
}



/* Entry: 1068a6b94; end: 1068a6c73;  */

void FUN_1068a6b94(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 == 2) {
    lVar2 = param_3;
    func_0x00010c23fc80();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c08fa60();
    *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lVar1 != 0;
    _objc_release(lVar2);
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(long *)(lVar2 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1068a6c74; end: 1068a6d0f;  */

void FUN_1068a6c74(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18) == '\x01') {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
    if (lVar1 != 0) {
      func_0x00010bf49760(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,
                          *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x28),
                          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28),
                          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x68) + 8) + 0x28),
                          *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 8) + 0x28),
                          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x78) + 8) + 0x18));
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001068a6d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),0);
  return;
}



/* Entry: 1068a6d10; end: 1068a6e6b;  */

void FUN_1068a6d10(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),7);
  __Block_object_assign(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  __Block_object_assign(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  __Block_object_assign(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
  __Block_object_assign(param_1 + 0x58,*(undefined8 *)(param_2 + 0x58),8);
  __Block_object_assign(param_1 + 0x60,*(undefined8 *)(param_2 + 0x60),8);
  __Block_object_assign(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),8);
  __Block_object_assign(param_1 + 0x70,*(undefined8 *)(param_2 + 0x70),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x78,*(undefined8 *)(param_2 + 0x78),8);
  return;
}



/* Entry: 1068a6e6c; end: 1068a71cb; -[SCSpotlightToStoriesPostingConstructor constructPostParamsWithContentResult:playbackMetadata:storiesConfig:creatorName:creatorLogoUrl:creatorBitmojiAvatarId:creatorBitmojiSelfieId:shouldShowCreatorBadge:completion:] */

void FUN_1068a6e6c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined4 param_10,undefined4 param_11,long param_12)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  lVar2 = param_3;
  func_0x00010c23fc80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010c0ef700(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c08fa60();
  if (lVar4 == 0) {
    (**(code **)(param_12 + 0x10))(param_12,0);
  }
  else {
    if (*(char *)(param_1 + 0xc0) == '\x01') {
      lVar4 = param_4;
      func_0x00010c0c5340();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c27dd80();
      if (lVar5 == 0) {
        _objc_release(lVar4);
      }
      else {
        iVar1 = (int)*(undefined8 *)(param_1 + 0x50);
        func_0x00010c07f540();
        _objc_release(lVar4);
        if (iVar1 != 0) {
          _objc_initWeak(auStack_68,param_1);
          func_0x00010c07f580();
          func_0x00010bdd6be0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_70,auStack_68);
          _objc_retain(param_12);
          _objc_retain(param_4);
          _objc_retain(param_5);
          func_0x00010c297260(param_1);
          _objc_release(param_1);
          _objc_release(param_5);
          _objc_release(param_4);
          _objc_release(param_12);
          _objc_destroyWeak(auStack_70);
          _objc_destroyWeak(auStack_68);
          goto LAB_1068a7134;
        }
      }
    }
    lVar4 = param_4;
    func_0x000108534ba4(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bdf26e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3bfc0(param_1);
    func_0x00010be76540(param_1);
    _objc_release(lVar5);
    _objc_release(lVar4);
  }
LAB_1068a7134:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068a71cc; end: 1068a7883;  */

void FUN_1068a71cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (((lVar1 == 0) || (param_2 == 0)) || (param_3 != 0)) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  }
  else {
    func_0x00010bdceb60(lVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000108534ba4();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010bdf26e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be3bfc0(lVar1);
    puVar4 = PTR_PTR_1126cea50;
    _objc_opt_new(PTR_PTR_1126cea50);
    func_0x00010c1937e0(uVar2);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126cea58;
    _objc_opt_new(PTR_PTR_1126cea58);
    uVar6 = uVar2;
    func_0x00010bf8c3a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c204260();
    _objc_release(uVar6);
    _objc_release(puVar4);
    puVar5 = *(undefined **)(lVar1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010bf56080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    func_0x00010c196d20(puVar4);
    func_0x00010c21acc0(puVar4);
    func_0x00010c1d6440(puVar4);
    func_0x00010c1ac2c0(puVar4);
    puVar5 = puVar4;
    func_0x00010bf42a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9ee0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf42a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3b00();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf42a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9b80();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf42a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aaf20();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    puVar5 = puVar4;
    func_0x00010bf42a00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c15f2e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b7280(puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar5);
    if (lVar3 != 0) {
      puVar5 = puVar4;
      func_0x00010bf4e840();
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 == (undefined *)0x0) {
        puVar7 = PTR_PTR_1126b2378;
        _objc_opt_new(PTR_PTR_1126b2378);
      }
      else {
        _objc_retain(puVar5);
        puVar7 = puVar5;
      }
      _objc_release(puVar5);
      puVar5 = puVar7;
      func_0x00010c27f9c0(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1eb840();
      _objc_release(puVar5);
      func_0x00010c183080(puVar4);
      _objc_release(puVar7);
    }
    puVar5 = puVar4;
    func_0x00010bf3cf60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c182ac0(param_2);
    _objc_release(puVar7);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126bcf68;
    _objc_alloc();
    lVar8 = param_2;
    func_0x00010bf63640(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffa140();
    _objc_release(lVar8);
    puVar7 = PTR_PTR_1126becd8;
    _objc_alloc();
    puVar9 = puVar4;
    func_0x00010bf3cf60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf63640(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dac0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126bece0;
    _objc_alloc();
    puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0059a0();
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126bece8;
    _objc_alloc(PTR_PTR_1126bece8);
    func_0x00010c00bbe0();
    puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010c156d80(PTR__OBJC_CLASS___NSData_1126ae778);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ce0(puVar4);
    func_0x00010c195ce0(puVar10);
    func_0x00010c195cc0(puVar10);
    puVar13 = PTR_PTR_1126becf0;
    _objc_alloc();
    func_0x00010c046e80();
    uVar14 = *(undefined8 *)(lVar1 + 0xa8);
    func_0x00010c28ec40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar14;
    func_0x00010c28eb00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    func_0x00010c0e3040(uVar6);
    puVar15 = puVar4;
    func_0x00010bf3cf60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = *(undefined8 *)(lVar1 + 0x30);
    func_0x00010c269d40(uVar14);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = *(undefined8 *)(lVar1 + 0x80);
    func_0x00010c269d40(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010846b3d4(puVar15,uVar14,uVar16);
    _objc_release(uVar16);
    _objc_release(uVar14);
    _objc_release(puVar15);
    uVar14 = *(undefined8 *)(lVar1 + 0xb0);
    uVar18 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar18);
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar16);
    _objc_retain(uVar2);
    _objc_retain(puVar4);
    func_0x00010c0f7fc0(uVar14);
    _objc_release(uVar16);
    _objc_release(uVar18);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_release(uVar6);
    _objc_release(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1068a7884; end: 1068a789b;  */

void FUN_1068a7884(void)

{
  return;
}



/* Entry: 1068a789c; end: 1068a7ca3; -[SCSpotlightToStoriesPostingConstructor _postEphemeralMediaParams:overlayData:spotlightSnapDoc:playbackMetadata:storiesConfig:repostInfo:completion:] */

void FUN_1068a789c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = *(undefined **)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf56080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c196d20(puVar2);
  func_0x00010c21acc0(puVar2);
  func_0x00010c1d6440(puVar2);
  func_0x00010c1ac2c0(puVar2);
  func_0x00010c1c4480(puVar2);
  lVar3 = param_4;
  func_0x00010c08fa60();
  if (lVar3 != 0) {
    func_0x00010c1c4e00(puVar2);
    func_0x00010c1c4e20(puVar2);
  }
  puVar1 = puVar2;
  func_0x00010bf42a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a9ee0();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf42a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b3b00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf42a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf42a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2aaf20();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf42a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_6;
  func_0x00010c15f2e0(param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7280(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(puVar1);
  func_0x00010c0c5280(puVar2);
  puVar1 = puVar2;
  func_0x00010bf3cf60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010846b3d4(puVar1,uVar4,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar1);
  if (param_8 != 0) {
    puVar1 = puVar2;
    func_0x00010bf4e840();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar6 = PTR_PTR_1126b2378;
      _objc_opt_new(PTR_PTR_1126b2378);
    }
    else {
      _objc_retain(puVar1);
      puVar6 = puVar1;
    }
    _objc_release(puVar1);
    puVar1 = puVar6;
    func_0x00010c27f9c0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eb840();
    _objc_release(puVar1);
    func_0x00010c183080(puVar2);
    _objc_release(puVar6);
  }
  _objc_initWeak(auStack_68,param_1);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_1068a7ca4;
  puStack_98 = &UNK_11084cbf0;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar2);
  puStack_90 = puVar2;
  _objc_retain(param_5);
  uStack_88 = param_5;
  _objc_retain(param_7);
  uStack_80 = param_7;
  _objc_retain(param_9);
  uStack_78 = param_9;
  func_0x000100162d98("APPSTORE",&puStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(puStack_90);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


