/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1071231dc; end: 1071233ab; -[PreviewViewController _showSendToSharedStoryWithBlockedUsersPromptWithPublicationId:accept:cancel:] */

void FUN_1071231dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c22c120(uVar3);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071233ac; end: 10712359b;  */

void FUN_1071233ac(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  puVar1 = PTR_PTR_1126c24a8;
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    }
  }
  else {
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_10712359c;
    puStack_98 = &UNK_110857fd0;
    _objc_copyWeak(auStack_78,param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uStack_90 = uVar4;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    lStack_88 = param_2;
    _objc_retain(uVar4);
    uStack_80 = uVar4;
    _objc_copyWeak(auStack_b8,param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x0001070c5ca4();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1cf00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c239ec0(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uStack_80);
    _objc_release(lStack_88);
    _objc_release(uStack_90);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10712359c; end: 10712363b;  */

void FUN_10712359c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdc6140();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001071235dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10712363c; end: 1071237d7; -[PreviewViewController _addBlockedUsersExceptionForShareStoryWithPublicationId:blockedSnapchatters:] */

void FUN_10712363c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11098f5b8);
  _objc_initWeak(auStack_68,param_1);
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x0001070c5cc8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf62080();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010befb420(uVar4);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071237d8; end: 1071237df;  */

void FUN_1071237d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1071237e0; end: 10712380b;  */

void FUN_1071237e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10712380c; end: 1071238f3; -[PreviewViewController webBrowserDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10712380c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar1 + _DAT_1127641c8);
  }
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar4);
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + _DAT_1127641c8);
    }
    _objc_retain(uVar3);
    func_0x00010c12e1c0(uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1071238f4; end: 1071239fb; -[PreviewViewController _getCurrentSharedStorySelection] */

void FUN_1071238f4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010c0fdf40();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    func_0x00010c15b960();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bfcf340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(param_1);
    puVar3 = puVar2;
    func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_11098f5f8);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1071239fc; end: 107123c6b; -[PreviewViewController _hasAnySendingDestinations] */

bool FUN_1071239fc(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  uVar2 = param_1;
  func_0x00010befc200();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf25220();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    if (uVar3 == 0) {
      uVar3 = param_1;
      func_0x00010c0ee420();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar4 = param_1;
        func_0x00010bf620e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010bf529e0();
        if (uVar5 == 0) {
          uVar5 = param_1;
          func_0x00010bfa0920();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c08fa60();
          if (uVar6 == 0) {
            uVar6 = param_1;
            func_0x00010bf46560();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010c131e40();
            _objc_retainAutoreleasedReturnValue();
            uVar8 = uVar7;
            func_0x00010bf25140();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar8;
            func_0x00010c08fa60();
            if (uVar9 == 0) {
              uVar9 = param_1;
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar9;
              func_0x00010c131e40();
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar10;
              func_0x00010c1322e0();
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar11;
              func_0x00010c08fa60();
              if (uVar12 == 0) {
                uVar12 = param_1;
                func_0x00010bf46560();
                _objc_retainAutoreleasedReturnValue();
                uVar13 = uVar12;
                func_0x00010c131e40();
                _objc_retainAutoreleasedReturnValue();
                uVar14 = uVar13;
                func_0x00010c292720();
                _objc_retainAutoreleasedReturnValue();
                uVar15 = uVar14;
                func_0x00010bf529e0();
                if (uVar15 == 0) {
                  func_0x00010bf46560();
                  _objc_retainAutoreleasedReturnValue();
                  uVar15 = param_1;
                  func_0x00010c131e40();
                  _objc_retainAutoreleasedReturnValue();
                  uVar16 = uVar15;
                  func_0x00010bfceb60();
                  _objc_retainAutoreleasedReturnValue();
                  uVar17 = uVar16;
                  func_0x00010bf529e0();
                  bVar1 = uVar17 != 0;
                  _objc_release(uVar16);
                  _objc_release(uVar15);
                  _objc_release(param_1);
                }
                else {
                  bVar1 = true;
                }
                _objc_release(uVar14);
                _objc_release(uVar13);
                _objc_release(uVar12);
              }
              else {
                bVar1 = true;
              }
              _objc_release(uVar11);
              _objc_release(uVar10);
              _objc_release(uVar9);
            }
            else {
              bVar1 = true;
            }
            _objc_release(uVar8);
            _objc_release(uVar7);
            _objc_release(uVar6);
          }
          else {
            bVar1 = true;
          }
          _objc_release(uVar5);
        }
        else {
          bVar1 = true;
        }
        _objc_release(uVar4);
      }
      else {
        bVar1 = true;
      }
      _objc_release(uVar3);
    }
    else {
      bVar1 = true;
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 107123c6c; end: 107123dc7; -[PreviewViewController _sendingToSpotlightOnly] */

ulong FUN_107123c6c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  func_0x00010befc200();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010bf25220();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf529e0();
    _objc_release(uVar1);
    if (uVar2 == 0) {
      uVar1 = param_1;
      func_0x00010bf620e0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
      if (uVar2 == 0) {
        uVar1 = param_1;
        func_0x00010bf620e0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010bf529e0();
        _objc_release(uVar1);
        if (uVar2 == 0) {
          uVar1 = param_1;
          func_0x00010bf46560();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c131e40();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar1);
          if (uVar2 == 0) {
            uVar1 = param_1;
            func_0x00010c0ee420();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (uVar1 == 0) {
              return 0;
            }
            func_0x00010c0ee420();
            _objc_retainAutoreleasedReturnValue();
            uVar1 = param_1;
            func_0x00010c0ee300();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            if ((uVar1 == 0) || (uVar2 = uVar1, func_0x00010bf529e0(), uVar2 != 1)) {
              uVar2 = 0;
            }
            else {
              uVar2 = uVar1;
              func_0x000108f41ba8(uVar1);
            }
            _objc_release(uVar1);
            return uVar2;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 107123dc8; end: 107123dcb; -[PreviewViewController _sendToMentionsEnabled] */

undefined1 FUN_107123dc8(void)

{
  if (lRam00000001137fc0a8 != -1) {
    func_0x000107c27d9c(0x1137fc0a8,&PTR___NSConcreteGlobalBlock_110d66418);
  }
  return uRam00000001137fc008;
}



/* Entry: 107123dcc; end: 107123e27;  */

void FUN_107123dcc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010c23fe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,0,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107123e28; end: 107123e2f;  */

void FUN_107123e28(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 107123e30; end: 107123f9f; -[SCPreviewSnapDocSendParameters initWithSendSessionId:commonMetricLoggingParams:planStickerRestrictsDestinations:] */

undefined1 *
FUN_107123e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar2 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f8a48;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined8 *)((long)puVar2 + 0x10) = uVar4;
    _objc_release(uVar6);
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    puVar3 = param_4;
    func_0x00010bf51e00();
    puVar1 = PTR____NSArray0__struct_11034ab48;
    puVar5 = PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined *)0x0) {
      puVar5 = puVar3;
    }
    _objc_retain(puVar5);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar5;
    _objc_release(uVar4);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined **)((long)puVar2 + 0x20) = puVar1;
    _objc_release(uVar4);
    *(undefined2 *)((long)puVar2 + 8) = 0;
    uVar4 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined **)((long)puVar2 + 0x28) = puVar1;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined8 *)((long)puVar2 + 0x30) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = 0;
    _objc_release(uVar4);
    *(undefined2 *)((long)puVar2 + 10) = 0;
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar2 + 0x40);
    *(undefined **)((long)puVar2 + 0x40) = puVar5;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x48);
    *(undefined8 *)((long)puVar2 + 0x48) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x50);
    *(undefined8 *)((long)puVar2 + 0x50) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar2 + 0x58);
    *(undefined **)((long)puVar2 + 0x58) = PTR____kCFBooleanTrue_11034ab68;
    _objc_release(uVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 107123fa0; end: 107123fa7; -[SCPreviewSnapDocSendParameters sendSessionId] */

undefined8 FUN_107123fa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 107123fa8; end: 107123faf; -[SCPreviewSnapDocSendParameters setSendSessionId:] */

void FUN_107123fa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107123fb0; end: 107123fb7; -[SCPreviewSnapDocSendParameters sendToType] */

undefined4 FUN_107123fb0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 107123fb8; end: 107123fbf; -[SCPreviewSnapDocSendParameters setSendToType:] */

void FUN_107123fb8(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 107123fc0; end: 107123fc7; -[SCPreviewSnapDocSendParameters commonMetricLoggingParams] */

undefined8 FUN_107123fc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 107123fc8; end: 107123fcf; -[SCPreviewSnapDocSendParameters setCommonMetricLoggingParams:] */

void FUN_107123fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107123fd0; end: 107123fd7; -[SCPreviewSnapDocSendParameters saveReplaceIds] */

undefined8 FUN_107123fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107123fd8; end: 107123fdf; -[SCPreviewSnapDocSendParameters setSaveReplaceIds:] */

void FUN_107123fd8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107123fe0; end: 107123fe7; -[SCPreviewSnapDocSendParameters isLinkShareAvailable] */

undefined1 FUN_107123fe0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107123fe8; end: 107123fef; -[SCPreviewSnapDocSendParameters setIsLinkShareAvailable:] */

void FUN_107123fe8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107123ff0; end: 107123ff7; -[SCPreviewSnapDocSendParameters isLinkShareGenerated] */

undefined1 FUN_107123ff0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 107123ff8; end: 107123fff; -[SCPreviewSnapDocSendParameters setIsLinkShareGenerated:] */

void FUN_107123ff8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 107124000; end: 107124007; -[SCPreviewSnapDocSendParameters selectedItems] */

undefined8 FUN_107124000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107124008; end: 10712400f; -[SCPreviewSnapDocSendParameters setSelectedItems:] */

void FUN_107124008(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107124010; end: 107124017; -[SCPreviewSnapDocSendParameters preSelectedMemberProfile] */

undefined8 FUN_107124010(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 107124018; end: 107124047; -[SCPreviewSnapDocSendParameters setPreSelectedMemberProfile:] */

void FUN_107124018(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107124048; end: 10712404f; -[SCPreviewSnapDocSendParameters preselectedDestinations] */

undefined8 FUN_107124048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 107124050; end: 107124057; -[SCPreviewSnapDocSendParameters setPreselectedDestinations:] */

void FUN_107124050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 107124058; end: 10712405f; -[SCPreviewSnapDocSendParameters forceDirectSend] */

undefined1 FUN_107124058(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 107124060; end: 107124067; -[SCPreviewSnapDocSendParameters setForceDirectSend:] */

void FUN_107124060(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 107124068; end: 10712406f; -[SCPreviewSnapDocSendParameters isPromptLensWithRestrictedDestinations] */

undefined1 FUN_107124068(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 107124070; end: 107124077; -[SCPreviewSnapDocSendParameters setIsPromptLensWithRestrictedDestinations:] */

void FUN_107124070(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 107124078; end: 10712407f; -[SCPreviewSnapDocSendParameters isPlanStickerWithRestrictedDestinations] */

undefined8 FUN_107124078(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 107124080; end: 1071240af; -[SCPreviewSnapDocSendParameters setIsPlanStickerWithRestrictedDestinations:] */

void FUN_107124080(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1071240b0; end: 1071240b7; -[SCPreviewSnapDocSendParameters externalContentData] */

undefined8 FUN_1071240b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1071240b8; end: 1071240bf; -[SCPreviewSnapDocSendParameters setExternalContentData:] */

void FUN_1071240b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1071240c0; end: 1071240c7; -[SCPreviewSnapDocSendParameters originalPostCompositeStoryId] */

undefined8 FUN_1071240c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1071240c8; end: 1071240cf; -[SCPreviewSnapDocSendParameters setOriginalPostCompositeStoryId:] */

void FUN_1071240c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1071240d0; end: 1071240d7; -[SCPreviewSnapDocSendParameters hasEditsChanged] */

undefined8 FUN_1071240d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1071240d8; end: 107124107; -[SCPreviewSnapDocSendParameters setHasEditsChanged:] */

void FUN_1071240d8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 107124108; end: 107124197; -[SCPreviewSnapDocSendParameters .cxx_destruct] */

void FUN_107124108(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 107124198; end: 10712431f; -[PreviewViewController isSnapDocSendServiceIntegrationEnabled] */

ulong FUN_107124198(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c07e8e0();
  if ((int)uVar4 != 0) {
    uVar4 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c07ba00();
    _objc_release(uVar4);
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    uVar4 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x0001070c4790();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf926c0();
    if ((int)uVar4 != 0) {
      uVar4 = uVar1;
      func_0x00010c23fe00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      func_0x00010bf63640();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c08fa60();
      _objc_release(uVar2);
      _objc_release(uVar4);
      if (uVar3 != 0) {
        func_0x00010c13b540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x0001070c5188();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar4;
        func_0x00010bf398e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(param_1);
        uVar4 = uVar2;
        func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110ea08d8,0,0);
        _objc_release(uVar2);
        goto LAB_107124300;
      }
    }
  }
  uVar4 = 0;
LAB_107124300:
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 107124320; end: 1071243fb; -[PreviewViewController preloadLegacyPreviewSendToWithSnapDocData:prepareDidFail:] */

void FUN_107124320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010be78840(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071243fc; end: 10712450f;  */

void FUN_1071243fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107124510;
  puStack_68 = &UNK_110850cf8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_2);
  uStack_58 = param_2;
  _objc_retain(param_3);
  uStack_50 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107124510; end: 107124557;  */

void FUN_107124510(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    func_0x00010c108a80(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107124558; end: 107124687; -[PreviewViewController startLegacyPreviewSnapDocSendWithSnapDocData:prepareDidFail:] */

void FUN_107124558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126d4c60;
  func_0x00010c15cea0(PTR_PTR_1126d4c60);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf38560(param_1);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107124688; end: 10712476b;  */

void FUN_107124688(long param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 & 1) == 0) {
      func_0x00010c224580(lVar1);
      if (*(long *)(param_1 + 0x28) != 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
      }
    }
    else {
      _objc_copyWeak(auStack_48,param_1 + 0x30);
      func_0x00010be78840(lVar1);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10712476c; end: 10712487f;  */

void FUN_10712476c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_107124880;
  puStack_68 = &UNK_110850cf8;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_2);
  uStack_58 = param_2;
  _objc_retain(param_3);
  uStack_50 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107124880; end: 1071248d3;  */

void FUN_107124880(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c18b5e0(*(undefined8 *)(param_1 + 0x20),param_2,lVar1);
    func_0x00010c15da60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30),0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1071248d4; end: 107124c53; -[PreviewViewController _prepareLegacyPreviewSnapDocWithData:prepareDidFail:completion:] */

void FUN_1071248d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c2ef8();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c52f0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c15f680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((lVar4 == 0) || (lVar5 == 0)) {
    func_0x00010be3dd40(param_1,param_2,param_4);
  }
  else {
    lVar1 = param_1;
    func_0x00010c0fdf40();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x107124ad0;
    puStack_98 = &UNK_11098f668;
    lStack_90 = param_1;
    _objc_retain(param_4);
    uStack_78 = param_4;
    _objc_retain(param_3);
    uStack_68 = (undefined1)lVar1;
    uStack_88 = param_3;
    _objc_retain(param_5);
    uStack_70 = param_5;
    _objc_retain(lVar5);
    lStack_80 = lVar5;
    func_0x00010bfc69a0(lVar4,param_2,&puStack_b0);
    _objc_release(lStack_80);
    _objc_release(uStack_70);
    _objc_release(uStack_88);
    _objc_release(uStack_78);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107124c54; end: 107124cdb; -[PreviewViewController _invokePrepareDidFailOnMainIfNeeded:] */

void FUN_107124c54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_107124cdc;
    puStack_30 = &UNK_110849530;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107124cdc; end: 107124ce7;  */

void FUN_107124cdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000107124ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 107124ce8; end: 107124db3; -[PreviewViewController sendDidReturnPromise:] */

void FUN_107124ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  func_0x00010c224580(param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0e3040(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 107124db4; end: 107124e97;  */

void FUN_107124db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107124e98;
  puStack_50 = &UNK_110848218;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_3);
  uStack_48 = param_3;
  _objc_retain(param_2);
  uStack_40 = param_2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 107124e98; end: 107124f03;  */

void FUN_107124e98(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (*(long *)(param_1 + 0x20) == 0)) {
    uVar3 = *(ulong *)(param_1 + 0x28);
    puVar2 = PTR_PTR_1126d4cd0;
    _objc_opt_class(PTR_PTR_1126d4cd0);
    _objc_opt_isKindOfClass(uVar3,puVar2);
    if ((uVar3 & 1) != 0) {
      func_0x00010be30680(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107124f04; end: 107124f83; -[PreviewViewController _handleSnapDocSendServiceResult:] */

void FUN_107124f04(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  func_0x00010c27dd80();
  if (param_3 == 2) {
    func_0x00010bf7b400(param_1);
    uVar1 = 1;
  }
  else {
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf78550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_didPostStoryWithStoryTypes__1125bbaf8,0);
      return;
    }
    if (param_3 != 0) {
      return;
    }
    func_0x00010bf7b400(param_1);
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf7b530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_didSendSnapsAndPostToStory_story_1125bc6f0,uVar1,0);
  return;
}



/* Entry: 107124f84; end: 107124f87; -[PreviewViewController captionTopics] */

void FUN_107124f84(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf00c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_allTopicsFromCaptions_11259dcc0);
  return;
}



/* Entry: 107124f88; end: 107124fbb; -[PreviewViewController uiContainer] */

void FUN_107124f88(void)

{
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107124fbc; end: 107124fbf; -[PreviewViewController uiViewController] */

void FUN_107124fbc(void)

{
  return;
}



/* Entry: 107124fc0; end: 107124fc7; -[PreviewViewController commonLoggingParams] */

undefined8 FUN_107124fc0(void)

{
  return 0;
}



/* Entry: 107124fc8; end: 10712500b; -[PreviewViewController lensAssetUploadInfo] */

void FUN_107124fc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c090020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10712500c; end: 107125013; -[PreviewViewController mediaSource] */

undefined8 FUN_10712500c(void)

{
  return 0;
}



/* Entry: 107125014; end: 10712501b; -[PreviewViewController shouldSendAsExternalMedia] */

undefined8 FUN_107125014(void)

{
  return 0;
}



/* Entry: 10712501c; end: 107125257; -[PreviewViewController updateSnapHasSponsoredContentState] */

void FUN_10712501c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09a760();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar3;
  func_0x00010c07f200();
  if ((uVar13 & 1) == 0) {
    uVar13 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar13;
    func_0x0001070c4598();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0b3920();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0f3940();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010bf21f60();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfdc8c0();
    if ((uVar9 & 1) != 0) {
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar13);
      goto LAB_107125114;
    }
    uVar9 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010c1115c0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c07f200();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar13);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar12 & 1) != 0) {
      uVar13 = 1;
      goto LAB_107125130;
    }
    uVar1 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfaeca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c1597e0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar3;
    func_0x00010bf04920();
  }
  else {
LAB_107125114:
    uVar13 = 1;
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_107125130:
                    /* WARNING: Could not recover jumptable at 0x00010c204650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSnapHasSponsoredContent__11265ebb8,uVar13)
  ;
  return;
}



/* Entry: 107125258; end: 10712525f;  */

void FUN_107125258(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isSponsored_1125fd690);
  return;
}



/* Entry: 107125260; end: 107125287;  */

bool FUN_107125260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bab40;
  func_0x00010bfee100(PTR_PTR_1126bab40,param_2,param_1);
  return puVar1 == (undefined *)0x5;
}



/* Entry: 107125288; end: 1071257f3; -[PreviewViewController _setupStickerDataProviderWithPresentationModelProvider:] */

void FUN_107125288(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c253da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c230ba0();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfede80(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c13b420(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfedea0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf46560(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c2485a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2868c0(lVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c073e40();
    if ((int)lVar2 != 0) {
      lVar2 = param_1;
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf30e80();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar6 = PTR_PTR_1126d4cd8;
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c45e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bfede80();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar5;
    func_0x0001070c5188();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar9;
    func_0x0001070c5848();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c085260();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x0001070c523c();
    _objc_retainAutoreleasedReturnValue();
    lVar14 = lVar13;
    func_0x00010c253aa0();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lVar15;
    func_0x0001070c58b4();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010bfb97e0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar17;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010c2542a0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar21 = lVar20;
    FUN_1070c2ed4();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = lVar21;
    func_0x00010bf5aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    lVar24 = lVar23;
    func_0x0001070c5f50();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = lVar24;
    func_0x00010bf05100();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeeac0(puVar6);
    func_0x00010c20ada0(param_1);
    _objc_release(puVar6);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010bebfee0(param_1);
    puVar26 = auStack_70;
    _objc_initWeak(puVar26,param_1);
    func_0x000108e07010();
    _objc_retainAutoreleasedReturnValue();
    puVar27 = puVar26;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar26);
    puVar26 = puVar27;
    func_0x00010bf12ee0(puVar27);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_78,auStack_70);
    puVar28 = puVar26;
    func_0x00010c25ff60(puVar26);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da20(param_1);
    _objc_release(puVar28);
    _objc_release(puVar26);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar27);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1071257f4; end: 107125a5f;  */

void FUN_1071257f4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar8 = param_1;
    func_0x00010c254bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar8;
    func_0x00010c0fbbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c159420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_release(lVar8);
    if (lVar2 == 0) {
      lVar8 = 3;
    }
    else {
      lVar1 = param_1;
      func_0x00010c253da0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar1;
      func_0x00010c262b60();
      _objc_release(lVar1);
    }
    lVar1 = param_1;
    func_0x00010c253da0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c283d00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c128c20();
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126ba808;
    _objc_alloc(PTR_PTR_1126ba808);
    puVar5 = puVar4;
    func_0x000108e07010();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x0001070c51f4();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf1c460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7e20(puVar4);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(puVar5);
    func_0x00010c1713c0(param_1);
    lVar1 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c084980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e12a0();
    _objc_release(lVar6);
    _objc_release(lVar1);
    func_0x00010be29700(param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_107125a60;
    puStack_78 = &UNK_110848c48;
    lStack_70 = param_1;
    lStack_68 = lVar8;
    func_0x000100162d98("APPSTORE",&puStack_90);
    _objc_release(puVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  return;
}



/* Entry: 107125a60; end: 107125abb;  */

void FUN_107125a60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c254bc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9940();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107125abc; end: 1071265e3; -[PreviewViewController _setupStickerPicker] */

void FUN_107125abc(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  undefined *puVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  
  uVar1 = param_5;
  func_0x00010c253da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR_PTR_1126bb1d8;
  _objc_alloc_init();
  puVar3 = PTR_PTR_1126ba8d0;
  _objc_alloc();
  uVar4 = param_5;
  func_0x00010bfede80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03e2e0(puVar3,param_6,0,uVar4);
  _objc_release(uVar4);
  func_0x00010c1e12a0(puVar2,param_6,puVar3,4);
  puVar5 = PTR_PTR_1126bb1e0;
  _objc_alloc();
  func_0x00010c01ce40();
  func_0x00010c1e12a0(puVar2,param_6,puVar5,10);
  puVar6 = PTR_PTR_1126bb1e8;
  _objc_alloc();
  func_0x00010c01ce40();
  func_0x00010c1e12a0(puVar2,param_6,puVar6,6);
  puVar7 = PTR_PTR_1126bb1e8;
  _objc_alloc();
  func_0x00010c01ce40();
  puVar54 = puVar2;
  func_0x00010c1e12a0();
  func_0x000108e07010();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar54;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfd46e0();
  _objc_release(puVar8);
  _objc_release(puVar54);
  puVar54 = (undefined *)0x0;
  if ((int)puVar9 != 0) {
    puVar54 = PTR_PTR_1126ba808;
    _objc_alloc();
    puVar8 = puVar54;
    func_0x000108e07010();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c13b540(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x0001070c51f4();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf1c460();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff7e20(puVar54,param_6,puVar8,0,0xd,0,uVar11);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
    _objc_release(puVar8);
    uVar4 = param_5;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x0001070c58b4();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bfb97e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar11;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar4);
    uVar4 = uVar12;
    func_0x00010c088c60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar4;
    func_0x00010bf1bae0();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf1acc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar10);
    _objc_release(uVar4);
    if (uVar11 != 0) {
      uVar4 = uVar12;
      func_0x00010c088c60(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c286080(puVar54,param_6,uVar11);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar4);
    }
    _objc_release(uVar12);
  }
  func_0x00010c1713c0(param_5,param_6,puVar54);
  func_0x00010c1e12a0(puVar2,param_6,puVar54,2);
  if (uVar1 == 0) {
    func_0x00010beafee0(param_5,param_6,puVar2);
  }
  func_0x00010c14d9e0(PTR__OBJC_CLASS___UIScreen_1126aea10);
  uVar4 = param_5;
  dVar55 = param_1;
  dVar56 = param_2;
  dVar57 = param_3;
  dVar58 = param_4;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(uVar4);
  puVar8 = PTR_PTR_1126d4ce0;
  _objc_alloc();
  uVar4 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_5;
  func_0x00010c13b540(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x0001070c58d8();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bf1dfe0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_5;
  func_0x00010c13b540(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar18;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04ac60(puVar8,param_6,0,uVar13,uVar16,uVar19,0,0);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar4);
  uVar4 = param_5;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c230ba0();
  _objc_release(uVar4);
  puVar9 = PTR_PTR_1126d4ce8;
  _objc_alloc();
  uVar4 = param_5;
  func_0x00010c11e820();
  uVar11 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x0001070c4598();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010c0b3920();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c0f3940();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = uVar19;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar20;
  func_0x00010c068880();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = param_5;
  func_0x00010c253da0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar23;
  func_0x0001070c58b4();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar24;
  func_0x00010bfb97e0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = uVar25;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = uVar27;
  func_0x0001070c4700();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = uVar28;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar30;
  func_0x0001070c5c80();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = uVar31;
  func_0x00010c153220();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = param_5;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar35 = uVar34;
  func_0x0001070c57dc();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar35;
  func_0x00010bf61e80();
  _objc_retainAutoreleasedReturnValue();
  uVar37 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar38 = uVar37;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  uVar39 = uVar38;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar40 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar41 = uVar40;
  func_0x0001070c2ef8();
  _objc_retainAutoreleasedReturnValue();
  uVar42 = uVar41;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  uVar43 = uVar42;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar44 = uVar43;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar45 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar46 = uVar45;
  func_0x0001070c5800();
  _objc_retainAutoreleasedReturnValue();
  uVar47 = uVar46;
  func_0x00010bf4c500();
  _objc_retainAutoreleasedReturnValue();
  uVar48 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar49 = uVar48;
  func_0x0001070c4604();
  _objc_retainAutoreleasedReturnValue();
  uVar50 = uVar49;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar51 = param_5;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar52 = uVar51;
  func_0x0001070c58b4();
  _objc_retainAutoreleasedReturnValue();
  uVar53 = uVar52;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061ba0(param_2 + dVar55,param_1 + dVar56,dVar57 - (param_2 + param_4),
                      dVar58 - (param_1 + param_3),0,puVar9,param_6,uVar4 & 0xffffffff,
                      uVar10 & 0xffffffff,uVar15,uVar18,puVar8,uVar21,param_5,uVar22,puVar54,uVar26,
                      puVar2,uVar29,uVar32,uVar33,uVar36,uVar39,uVar44,uVar47,uVar50,uVar53);
  func_0x00010c20b580(param_5,param_6,puVar9);
  _objc_release(puVar9);
  _objc_release(uVar53);
  _objc_release(uVar52);
  _objc_release(uVar51);
  _objc_release(uVar50);
  _objc_release(uVar49);
  _objc_release(uVar48);
  _objc_release(uVar47);
  _objc_release(uVar46);
  _objc_release(uVar45);
  _objc_release(uVar44);
  _objc_release(uVar43);
  _objc_release(uVar42);
  _objc_release(uVar41);
  _objc_release(uVar40);
  _objc_release(uVar39);
  _objc_release(uVar38);
  _objc_release(uVar37);
  _objc_release(uVar36);
  _objc_release(uVar35);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar29);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  uVar4 = param_5;
  func_0x00010c13b420(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010bfedea0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_5;
  func_0x00010c254bc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0fbbc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220aa0();
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar4);
  func_0x00010bec7a20(param_5);
  if (uVar1 != 0) {
    uVar1 = param_5;
    func_0x00010bfa42e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar1 != 0) {
      uVar1 = param_5;
      func_0x00010bf38dc0(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedcfe0(param_5,param_6,uVar4);
      _objc_release(uVar4);
      _objc_release(uVar1);
    }
  }
  _objc_release(puVar8);
  _objc_release(puVar54);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1071265e4; end: 10712674b; -[PreviewViewController launchCreateBitmojiFlowWithPageType] */

void FUN_1071265e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c5f08();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1b1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  uVar1 = param_1;
  func_0x00010c254bc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar5,param_2,uVar1,1);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126af678;
  _objc_alloc(PTR_PTR_1126af678);
  func_0x00010c04a940();
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5f08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1b1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f020();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10712674c; end: 1071267cb; -[PreviewViewController bitmojiCreateFlowDidCompleteWithAvatarId:] */

void FUN_10712674c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001070c5f08();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1b1a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83b00();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071267cc; end: 107126bd3; -[PreviewViewController updateForStickerItem:withCategory:] */

void FUN_1071267cc(undefined *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = param_1;
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_1;
  func_0x00010bf62000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f9e0(puVar3,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001070c57dc();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf61e80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27c2c0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if ((param_3 & 1) == 0) {
    puVar1 = param_1;
    func_0x00010c254b40();
    if ((int)puVar1 != 0) {
      puVar1 = param_1;
      func_0x00010bfa3600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c0d2940();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165580();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010c20b500(param_1,param_2,0);
    }
    puVar1 = param_1;
    func_0x00010c254bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c0791a0();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      return;
    }
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
  }
  else {
    puVar1 = param_1;
    func_0x00010c13b540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c293a40();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    puVar1 = param_1;
    func_0x00010c254bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 == (undefined *)0x0) {
      func_0x00010beaff00(param_1);
    }
    puVar1 = param_1;
    func_0x00010c254bc0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    if (puVar2 != (undefined *)0x0) {
      return;
    }
    puVar1 = param_1;
    func_0x00010bf334e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    if (param_4 != 3) {
      puVar2 = param_1;
      func_0x00010c253da0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfaf4e0();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
      func_0x00010bfed060(PTR__OBJC_CLASS___NSIndexPath_1126b0990,param_2,0,puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010c20b4e0(param_1,param_2,3);
    }
    puVar1 = param_1;
    func_0x00010c253be0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a160(param_1,param_2,puVar2);
    puVar3 = PTR_PTR_1126d4cf0;
    _objc_alloc(PTR_PTR_1126d4cf0);
    func_0x00010bfee3c0();
    func_0x00010c20b4a0(param_1,param_2,puVar3);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8b80();
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c254600(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20();
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0(param_1,param_2,puVar3,1,0);
    _objc_release(puVar3);
    _objc_release(puVar1);
    param_1 = puVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107126bd4; end: 107126d2f; -[PreviewViewController warmUpFeeds] */

void FUN_107126bd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5848();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa4700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa4760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = lVar5;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b000(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar5);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 107126d30; end: 107126d77;  */

void FUN_107126d30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c19b1e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107126d78; end: 107126eeb; -[PreviewViewController _startFetchingFeedTree] */

void FUN_107126d78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c5848();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfa4700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfa4760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar5 != 0) {
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    lVar1 = lVar5;
    func_0x00010c25ff60(lVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19b000(param_1);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  puVar6 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init(PTR__OBJC_CLASS___NSCache_1126b3388);
  func_0x00010c17c380(param_1);
  _objc_release(puVar6);
  _objc_release(lVar5);
  return;
}



/* Entry: 107126eec; end: 107126f3b;  */

void FUN_107126eec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c19b1e0();
  _objc_release(param_2);
  func_0x00010be29700(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107126f3c; end: 1071270fb; -[PreviewViewController openedStickerPickerMenuAtCategory:] */

void FUN_107126f3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_1;
  func_0x00010bf61d00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0791a0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bf61d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3d9e0();
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf88120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c28d160(param_1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c070080();
  func_0x00010c287d60(uVar3,param_2,uVar4,uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1a20();
  _objc_release(uVar1);
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2dc0();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1071270fc; end: 10712755f; -[PreviewViewController closedStickerPickerMenuAtCategory:sticker:enterSearchCount:pretypeStickerTagSelectCount:prefixMatchStickerTagSelectCount:] */

void FUN_1071270fc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c254b40();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010bfa3600(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0d2940();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c165580();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c20b500(param_1);
  }
  func_0x00010c1cd500(param_1);
  func_0x00010c17a160(param_1);
  _objc_release(param_3);
  func_0x00010c20ab60(param_1);
  _objc_release(param_4);
  uVar1 = param_1;
  func_0x00010c2547e0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292040();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  func_0x00010c20b4c0(param_1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf88120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c1122a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1a20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c070a20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bfa3600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf7f1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c26e700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c159f00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c1122a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c110940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c273f60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf62000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9f9e0(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c111180(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28d140();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010bfa3600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c141a80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf606c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf61d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c070080();
  func_0x00010c287d60(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c13b540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c45bc();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c254980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3e020();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c20b4a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be93dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetStickerIcon_112582910);
  return;
}



/* Entry: 107127560; end: 107127613; -[PreviewViewController closeStickerPickerMenuOpenSnapCutFromSource:] */

void FUN_107127560(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c2335c0();
  if ((int)uVar1 != 0) {
    func_0x00010c20b4c0(param_1);
    func_0x00010c1888a0(param_1);
    uVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c068880();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c292040();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0e9ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_openToolbarItemType__1126180c8,4);
    return;
  }
  return;
}



/* Entry: 107127614; end: 107127617; -[PreviewViewController closeStickerPickerMenu] */

void FUN_107127614(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3de50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_closeToolbarSelectedItem_1125ad138);
  return;
}



/* Entry: 107127618; end: 107127683; -[PreviewViewController _resetStickerIcon] */

void FUN_107127618(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bfa3600();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c253b20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b300();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107127684; end: 10712776f; -[PreviewViewController didUpdateStickerPickerDismissalAlpha:translation:] */

void FUN_107127684(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [48];
  
  uVar1 = param_3;
  func_0x00010c1122a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf88120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(1.0 - param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _CGAffineTransformMakeTranslation(auStack_70,0,param_2);
  func_0x00010c1122a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2737a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 107127770; end: 1071288a7; -[PreviewViewController stickerPickerMenu:didSelectSticker:center:thumbnail:stickerIndex:categoryIndex:isFromRecents:searchTag:searchSource:] */

void FUN_107127770(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined **param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined1 uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1a8;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [8];
  undefined *puStack_170;
  undefined1 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined1 uStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  byte bStack_af;
  undefined1 uStack_ae;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_9);
  _objc_initWeak(auStack_80,param_1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1071288a8;
  puStack_90 = &UNK_1108434b0;
  _objc_copyWeak(auStack_88,auStack_80);
  ppuVar2 = &puStack_a8;
  _objc_retainBlock();
  ppuVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x0001070c4700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  ppuVar3 = param_1;
  func_0x00010c0d9ec0();
  func_0x00010c1cd500(param_1);
  ppuVar4 = param_1;
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_107128958;
  puStack_d8 = &UNK_11098f6b8;
  _objc_retain();
  ppuStack_d0 = ppuVar4;
  _objc_retain(ppuVar6);
  uVar1 = SUB81(ppuVar3,0);
  ppuStack_c8 = ppuVar6;
  ppuStack_c0 = param_1;
  uStack_b0 = param_8;
  bStack_af = (byte)puVar7 ^ 1;
  uStack_ae = uVar1;
  _objc_retain(param_5);
  ppuVar8 = &puStack_f0;
  uStack_b8 = param_5;
  _objc_retainBlock();
  ppuVar3 = param_4;
  func_0x00010c271a80();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar9 = ppuVar5;
  func_0x00010c07faa0();
  _objc_release(ppuVar5);
  ppuStack_1d0 = param_4;
  ppuVar5 = ppuVar6;
  if ((int)ppuVar9 == 0) {
    (*(code *)ppuVar2[2])();
    ppuVar9 = param_4;
    func_0x00010c27dd80();
    if (ppuVar9 == (undefined **)0x6) {
      _objc_retain(param_4);
      ppuVar9 = param_4;
      func_0x00010010fab4(param_4,PTR_DAT_1126a5210);
      if ((int)ppuVar9 == 0) {
        ppuStack_1d0 = (undefined **)0x0;
      }
      _objc_retain(ppuStack_1d0);
      _objc_release(param_4);
      puVar10 = PTR_PTR_1126bab40;
      func_0x00010bfee100();
      if (puVar10 == (undefined *)0xe) {
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_1;
        func_0x00010c103780(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c10d9c0();
        ppuStack_1a8 = param_1;
        goto LAB_107128474;
      }
      if (puVar10 == (undefined *)0x9) {
        ppuVar5 = param_1;
        func_0x00010c234300();
        if ((int)ppuVar5 != 0) {
          ppuVar5 = param_1;
          func_0x00010bfa3600(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar5;
          func_0x00010c273f60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar13;
          func_0x000108edef78();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23a8a0(0xc05b800000000000,ppuVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
LAB_107128048:
          _objc_release(ppuVar14);
          _objc_release(ppuVar13);
          _objc_release(ppuVar9);
LAB_107128060:
          _objc_release(ppuVar5);
        }
      }
      else {
        if (puVar10 == (undefined *)0x5) {
          puVar11 = PTR_PTR_1126bb2f0;
          _objc_opt_class(PTR_PTR_1126bb2f0);
          ppuVar9 = ppuStack_1d0;
          _objc_opt_isKindOfClass(ppuStack_1d0,puVar11);
          if (((ulong)ppuVar9 & 1) != 0) {
            ppuVar5 = param_1;
            func_0x00010bfa3600(param_1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar5;
            func_0x00010c253b20();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar9;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c12ad20();
            _objc_release(ppuVar13);
            _objc_release(ppuVar9);
            _objc_release(ppuVar5);
            _objc_retain(ppuStack_1d0);
            ppuVar5 = param_1;
            func_0x00010bfa3600(param_1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar5;
            func_0x00010bfede40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar9;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220ac0();
            _objc_release(ppuVar13);
            _objc_release(ppuVar9);
            _objc_release(ppuVar5);
            ppuVar5 = param_1;
            func_0x00010c13b540();
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar5;
            func_0x0001070c5530();
            _objc_retainAutoreleasedReturnValue();
            ppuVar13 = ppuVar9;
            func_0x00010c274120();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar13;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar14;
            func_0x00010c22fe80();
            _objc_release(ppuVar14);
            _objc_release(ppuVar13);
            _objc_release(ppuVar9);
            _objc_release(ppuVar5);
            ppuVar5 = ppuStack_1d0;
            if ((int)ppuVar12 != 0) {
              func_0x00010c1ae060(ppuStack_1d0);
              ppuVar9 = param_1;
              func_0x00010becd260(param_1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c220ae0(param_1);
              _objc_release(ppuVar9);
              ppuVar9 = param_1;
              func_0x00010c13b540(param_1);
              _objc_retainAutoreleasedReturnValue();
              ppuVar13 = ppuVar9;
              func_0x0001070c5530();
              _objc_retainAutoreleasedReturnValue();
              ppuVar14 = ppuVar13;
              func_0x00010c274120();
              _objc_retainAutoreleasedReturnValue();
              ppuVar12 = ppuVar14;
              func_0x00010c269d40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c190900();
              _objc_release(ppuVar12);
              goto LAB_107128048;
            }
            goto LAB_107128060;
          }
        }
        ppuVar9 = ppuVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuStack_1d0;
        func_0x00010c271a60(ppuStack_1d0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar14 = ppuVar9;
        func_0x00010c22fe40();
        _objc_release(ppuVar13);
        _objc_release(ppuVar9);
        if ((int)ppuVar14 != 0) {
          func_0x00010bfa3600();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = param_1;
          func_0x00010bfede40(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuStack_1d0;
          func_0x00010c271a60(ppuStack_1d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c066940(ppuVar9);
          ppuStack_1a8 = param_1;
          goto LAB_107127fbc;
        }
        if ((puVar10 < (undefined *)0x11) && ((1L << ((ulong)puVar10 & 0x3f) & 0x10500U) != 0)) {
          ppuStack_1a8 = (undefined **)PTR_PTR_1126bc960;
          func_0x00010c290480();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuStack_1d0;
          func_0x00010c271a60(ppuStack_1d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c29ce00(ppuVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar9);
          _objc_initWeak(auStack_f8,param_1);
          ppuVar9 = ppuVar5;
          func_0x00010c0e0460(ppuVar5);
          _objc_retainAutoreleasedReturnValue();
          puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_190 = 0xc2000000;
          pcStack_188 = FUN_107128d64;
          puStack_180 = &UNK_11098f738;
          _objc_copyWeak(auStack_178,auStack_f8);
          ppuVar13 = ppuVar9;
          puStack_170 = puVar10;
          uStack_168 = uVar1;
          func_0x00010c25ff60(ppuVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf86d00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf1a3e0(ppuVar13);
          _objc_release(param_1);
          _objc_release(ppuVar13);
          _objc_release(ppuVar9);
          ppuVar9 = &puStack_198;
          goto LAB_107128750;
        }
      }
      _objc_release(ppuStack_1d0);
    }
    if (((ulong)puVar7 & 1) == 0) {
      ppuVar5 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x0001070c56bc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar9;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar5);
      ppuVar5 = ppuVar13;
      func_0x00010c269d40(ppuVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befad40();
      _objc_release(ppuVar5);
      _objc_release(ppuVar13);
    }
    ppuVar5 = ppuVar3;
    func_0x00010914ead4();
    if ((int)ppuVar5 != 0) {
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x0001070c586c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x00010c2918c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = ppuVar9;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283fc0();
      _objc_release(ppuVar13);
      _objc_release(ppuVar9);
      _objc_release(ppuVar5);
      _objc_release(param_1);
    }
    (*(code *)ppuVar8[2])(ppuVar8,param_4);
    goto LAB_107128778;
  }
  ppuVar9 = ppuVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = ppuVar9;
  func_0x00010c231ea0();
  _objc_release(ppuVar9);
  if (((ulong)ppuVar13 & 1) == 0) {
    (*(code *)ppuVar2[2])();
  }
  ppuVar9 = param_4;
  func_0x00010c27dd80();
  if (ppuVar9 == (undefined **)0x6) {
    _objc_retain(param_4);
    ppuVar9 = param_4;
    func_0x00010010fab4(param_4,PTR_DAT_1126a5210);
    if ((int)ppuVar9 == 0) {
      ppuStack_1d0 = (undefined **)0x0;
    }
    _objc_retain(ppuStack_1d0);
    _objc_release(param_4);
    puVar10 = PTR_PTR_1126bab40;
    func_0x00010bfee100();
    if (puVar10 == (undefined *)0xe) {
      func_0x00010bfa3600();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = param_1;
      func_0x00010c103780(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10d9c0();
      ppuStack_1a8 = param_1;
LAB_107128474:
      _objc_release(ppuVar9);
    }
    else {
      if (puVar10 == (undefined *)0x9) {
        ppuVar5 = param_1;
        func_0x00010c234300();
        if ((int)ppuVar5 != 0) {
          ppuVar5 = param_1;
          func_0x00010bfa3600(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar5;
          func_0x00010c273f60();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar14;
          func_0x000108edef78();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c23a8a0(0xc05b800000000000,ppuVar14);
          _objc_unsafeClaimAutoreleasedReturnValue();
LAB_107128248:
          _objc_release(ppuVar12);
          _objc_release(ppuVar14);
          _objc_release(ppuVar9);
LAB_107128260:
          _objc_release(ppuVar5);
        }
        goto LAB_107128268;
      }
      if (puVar10 == (undefined *)0x5) {
        puVar11 = PTR_PTR_1126bb2f0;
        _objc_opt_class(PTR_PTR_1126bb2f0);
        ppuVar9 = ppuStack_1d0;
        _objc_opt_isKindOfClass(ppuStack_1d0,puVar11);
        if (((ulong)ppuVar9 & 1) != 0) {
          ppuVar5 = param_1;
          func_0x00010bfa3600(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar5;
          func_0x00010c253b20();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12ad20();
          _objc_release(ppuVar14);
          _objc_release(ppuVar9);
          _objc_release(ppuVar5);
          _objc_retain(ppuStack_1d0);
          ppuVar5 = param_1;
          func_0x00010bfa3600(param_1);
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar5;
          func_0x00010bfede40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220ac0();
          _objc_release(ppuVar14);
          _objc_release(ppuVar9);
          _objc_release(ppuVar5);
          ppuVar5 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar9 = ppuVar5;
          func_0x0001070c5530();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar9;
          func_0x00010c274120();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar12;
          func_0x00010c22fe80();
          _objc_release(ppuVar12);
          _objc_release(ppuVar14);
          _objc_release(ppuVar9);
          _objc_release(ppuVar5);
          ppuVar5 = ppuStack_1d0;
          if ((int)ppuVar15 != 0) {
            func_0x00010c1ae060(ppuStack_1d0);
            ppuVar9 = param_1;
            func_0x00010becd260(param_1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c220ae0(param_1);
            _objc_release(ppuVar9);
            ppuVar9 = param_1;
            func_0x00010c13b540(param_1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar9;
            func_0x0001070c5530();
            _objc_retainAutoreleasedReturnValue();
            ppuVar12 = ppuVar14;
            func_0x00010c274120();
            _objc_retainAutoreleasedReturnValue();
            ppuVar15 = ppuVar12;
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c190900();
            _objc_release(ppuVar15);
            goto LAB_107128248;
          }
          goto LAB_107128260;
        }
      }
      ppuVar9 = ppuVar4;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuStack_1d0;
      func_0x00010c271a60(ppuStack_1d0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar9;
      func_0x00010c22fe40();
      _objc_release(ppuVar14);
      _objc_release(ppuVar9);
      if ((int)ppuVar12 != 0) {
        func_0x00010bfa3600();
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = param_1;
        func_0x00010bfede40(param_1);
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar13 = ppuStack_1d0;
        func_0x00010c271a60(ppuStack_1d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066940(ppuVar9);
        ppuStack_1a8 = param_1;
LAB_107127fbc:
        _objc_release(ppuVar13);
        goto LAB_107128474;
      }
      if ((long)puVar10 < 0x10) {
        if ((puVar10 != (undefined *)0x8) && (puVar10 != (undefined *)0xa)) goto LAB_107128268;
      }
      else if (puVar10 != (undefined *)0x10) {
        if (puVar10 == (undefined *)0x15) {
          ppuVar9 = param_1;
          func_0x00010c13b540();
          _objc_retainAutoreleasedReturnValue();
          ppuVar14 = ppuVar9;
          FUN_1070c2ed4();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar14;
          func_0x00010bf5aea0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = ppuVar12;
          func_0x00010c071200();
          _objc_release(ppuVar12);
          _objc_release(ppuVar14);
          _objc_release(ppuVar9);
          if ((int)ppuVar15 != 0) goto LAB_107128644;
        }
LAB_107128268:
        _objc_release(ppuStack_1d0);
        goto LAB_107128270;
      }
LAB_107128644:
      ppuStack_1a8 = (undefined **)PTR_PTR_1126bc960;
      func_0x00010c290480();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuStack_1d0;
      func_0x00010c271a60(ppuStack_1d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c29ce00(ppuVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_initWeak(auStack_f8,param_1);
      ppuVar9 = ppuVar5;
      func_0x00010c0e0460(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
      puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_128 = 0xc2000000;
      pcStack_120 = FUN_107128b9c;
      puStack_118 = &UNK_11098f738;
      _objc_copyWeak(auStack_110,auStack_f8);
      ppuVar13 = ppuVar9;
      puStack_108 = puVar10;
      uStack_100 = uVar1;
      func_0x00010c25ff60(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf86d00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0(ppuVar13);
      _objc_release(param_1);
      _objc_release(ppuVar13);
      _objc_release(ppuVar9);
      ppuVar9 = &puStack_130;
LAB_107128750:
      _objc_destroyWeak(ppuVar9 + 4);
      _objc_destroyWeak(auStack_f8);
    }
    _objc_release(ppuVar5);
    _objc_release(ppuStack_1a8);
  }
  else {
LAB_107128270:
    if (((ulong)puVar7 & 1) == 0) {
      ppuVar5 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x0001070c56bc();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar9);
      _objc_release(ppuVar5);
      ppuVar5 = ppuVar14;
      func_0x00010c269d40(ppuVar14);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befad40();
      _objc_release(ppuVar5);
      _objc_release(ppuVar14);
    }
    ppuVar5 = ppuVar3;
    func_0x00010914ead4();
    if ((int)ppuVar5 != 0) {
      ppuVar5 = param_1;
      func_0x00010c13b540(param_1);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar5;
      func_0x0001070c586c();
      _objc_retainAutoreleasedReturnValue();
      ppuVar14 = ppuVar9;
      func_0x00010c2918c0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar12 = ppuVar14;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c283fc0();
      _objc_release(ppuVar12);
      _objc_release(ppuVar14);
      _objc_release(ppuVar9);
      _objc_release(ppuVar5);
    }
    if ((int)ppuVar13 == 0) {
      (*(code *)ppuVar8[2])(ppuVar8,param_4);
      goto LAB_107128778;
    }
    ppuVar5 = ppuVar4;
    func_0x00010c269d40(ppuVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_158 = 0xc2000000;
    pcStack_150 = FUN_107128d18;
    puStack_148 = &UNK_11098f768;
    _objc_retain(ppuVar2);
    ppuStack_140 = ppuVar2;
    _objc_retain(ppuVar8);
    ppuStack_138 = ppuVar8;
    func_0x00010c109040(ppuVar5);
    _objc_release(param_1);
    _objc_release(ppuVar5);
    _objc_release(ppuStack_138);
    ppuStack_1d0 = ppuStack_140;
  }
  _objc_release(ppuStack_1d0);
LAB_107128778:
  _objc_release(ppuVar3);
  _objc_release(ppuVar8);
  _objc_release(uStack_b8);
  _objc_release(ppuStack_c8);
  _objc_release(ppuStack_d0);
  _objc_release(ppuVar4);
  _objc_release(ppuVar6);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071288a8; end: 107128957;  */

void FUN_1071288a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c13b540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001070c45bc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c254980();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3dfe0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107128958; end: 107128b9b;  */

void FUN_107128958(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c271a60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000108eb84f4();
  if ((int)uVar3 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06c020();
    _objc_release(uVar3);
  }
  else {
    func_0x000108eb8554(uVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
  func_0x00010bf2d360();
  if (iVar1 == 0) {
    puVar4 = PTR_PTR_1126c3d58;
    _objc_opt_new(PTR_PTR_1126c3d58);
    func_0x00010c2aa4a0(*(undefined8 *)PTR__CGPointZero_110347540,
                        *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2baf40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0940(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b0960(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b1340(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b01a0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c2b08c0(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010bfa3600(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar5;
    func_0x00010c253b20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf21f60(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066e60(uVar6);
    _objc_release(puVar7);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
  else {
    uVar3 = uVar2;
    func_0x00010c0840e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96ee0();
    _objc_release(uVar6);
    _objc_release(uVar3);
    func_0x00010be3c540(*(undefined8 *)(param_1 + 0x30));
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107128b9c; end: 107128c3f;  */

void FUN_107128b9c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107128c40; end: 107128d13;  */

void FUN_107128c40(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066960();
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107128d14; end: 107128d17;  */

void FUN_107128d14(void)

{
  return;
}



/* Entry: 107128d18; end: 107128d63;  */

void FUN_107128d18(long param_1,long param_2)

{
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  if (param_2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107128d64; end: 107128e07;  */

void FUN_107128d64(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107128e08; end: 107128edb;  */

void FUN_107128e08(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c49b8;
  _objc_opt_class(PTR_PTR_1126c49b8);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa3600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfede40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066960();
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 107128edc; end: 107128edf;  */

void FUN_107128edc(void)

{
  return;
}



/* Entry: 107128ee0; end: 1071291e3; -[PreviewViewController stickerPickerMenu:presentStickerMenuForItem:presentationModelProvider:itemViewService:indexPath:superCategoryType:] */

void FUN_107128ee0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c58b4();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb97e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x0001070c45e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar11 = PTR_PTR_1126d4cf8;
  lVar1 = lVar4;
  func_0x00010c088c80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c088c60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x0001070c57dc();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf61e80();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  FUN_1070c2ed4();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fcc0(puVar11,param_2,param_4,param_5,param_6,lVar1,lVar2,lVar5,param_1,param_7,
                      param_8,lVar7,0,lVar10,2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010c20a820(param_1,param_2,puVar11);
  _objc_release(puVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c2538a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c2538a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c254bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c380(lVar1,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
  _objc_release(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1071291e4; end: 1071294a7; -[PreviewViewController _insertItemInstance:withSticker:initiallyLoadLowResolution:isFromRecents:isFromSearch:isAnimated:isFromCaption:] */

void FUN_1071291e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [8];
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c13b540();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001070c4700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c084e20();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126bc960;
  func_0x00010c290480();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126bc960;
  func_0x00010c290480();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c29ce00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c254300();
  uVar1 = 0;
  if ((int)uVar3 == 0) {
    uVar1 = param_1;
  }
  _objc_retain(uVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = uVar2;
  func_0x00010c0e0460(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_4);
  uStack_6d = param_9;
  uStack_70 = param_6;
  uStack_6f = param_7;
  uStack_6e = param_8;
  uStack_6c = param_5;
  _objc_retain(uVar4);
  _objc_retain(param_3);
  _objc_retain(puVar5);
  uVar7 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86d00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0(uVar7);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar3);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1071294a8; end: 1071295b7;  */

void FUN_1071294a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar3);
    func_0x00010c0c0800(param_2);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


