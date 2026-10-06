/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b81824; end: 107b8184b; -[SCOperaRemoteVideoController _playerDidResumeFromStall] */

void FUN_107b81824(long param_1)

{
  func_0x00010c07f760(*(undefined8 *)(param_1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bf7bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_didStartPlaying_1125bc8f8);
  return;
}



/* Entry: 107b8184c; end: 107b81977; -[SCOperaRemoteVideoController _addVideoOutput:] */

void FUN_107b8184c(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0xcf) & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    puVar3 = puVar1;
    func_0x00010c071ae0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = *(undefined **)(param_1 + 0x10);
      if (puVar3 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___AVPlayerItemVideoOutput_1126d13c8;
        _objc_alloc();
        uStack_48 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
        ppuStack_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb920;
        puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0361e0(puVar3,param_2,puVar1);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        *(undefined **)(param_1 + 0x10) = puVar3;
        _objc_release(uVar4);
        _objc_release(puVar1);
        puVar3 = *(undefined **)(param_1 + 0x10);
      }
      func_0x00010befa4c0(param_3,param_2,puVar3);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_3 + 0x10) != 0) {
    func_0x00010c12d760(puVar3,param_2,*(long *)(param_3 + 0x10));
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 107b81978; end: 107b819b3; -[SCOperaRemoteVideoController _removeVideoOutput:] */

void FUN_107b81978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x00010c12d760(param_3,param_2,*(long *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 107b819b4; end: 107b81a7f; -[SCOperaRemoteVideoController _addCaptionsOutput:] */

void FUN_107b819b4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  if ((*(char *)(param_1 + 0xcc) == '\x01') && ((*(byte *)(param_1 + 0xcf) & 1) == 0)) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c071ae0(param_3,param_2,puVar1);
    _objc_release(puVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = *(long *)(param_1 + 0x18);
      if (lVar3 == 0) {
        puVar1 = PTR__OBJC_CLASS___AVPlayerItemLegibleOutput_1126c9e88;
        _objc_opt_new();
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        *(undefined **)(param_1 + 0x18) = puVar1;
        _objc_release(uVar4);
        func_0x00010c2102a0(*(undefined8 *)(param_1 + 0x18),param_2,1);
        func_0x00010c18b640(*(undefined8 *)(param_1 + 0x18),param_2,param_1,
                            PTR___dispatch_main_q_11034be20);
        lVar3 = *(long *)(param_1 + 0x18);
      }
      func_0x00010befa4c0(param_3,param_2,lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b81a80; end: 107b81ad3; -[SCOperaRemoteVideoController _removeCaptionsOutput:] */

void FUN_107b81a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if ((*(long *)(param_1 + 0x18) != 0) && (*(char *)(param_1 + 0xcc) == '\x01')) {
    func_0x00010c12d760(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b81ad4; end: 107b81b37; -[SCOperaRemoteVideoController legibleOutput:didOutputAttributedStrings:nativeSampleBuffers:forItemTime:] */

void FUN_107b81ad4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  _objc_retain(param_4);
  func_0x00010c299ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117720();
  func_0x00010bee38e0(param_1,param_2,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b81b38; end: 107b81fef; -[SCOperaRemoteVideoController state:didChangeTag:] */

void FUN_107b81b38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c299ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c117720();
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010bf0dfa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee38e0(param_1,param_2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_5 < 8) {
    if (param_5 - 1U < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bde56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__configureRemoteVideo_112556f50);
      return;
    }
    if (param_5 - 5U < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bebf910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__startBufferingVideo_11258d7e8);
      return;
    }
  }
  else if (param_5 < 10) {
    if (param_5 == 8) {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      if (*(char *)(param_2 + 0xc9) == '\x01') {
        puVar4 = PTR_PTR_1126c7d68;
        func_0x00010c0fffc0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_2;
        func_0x00010c29a860(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar1);
        _objc_release(lVar3);
        _objc_release(puVar4);
      }
      else {
        puVar4 = PTR_PTR_1126c7d68;
        func_0x00010c100360(PTR_PTR_1126c7d68);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_2;
        func_0x00010c29a860(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0eb7c0(uVar1);
        _objc_release(lVar3);
        _objc_release(puVar4);
        *(undefined1 *)(param_2 + 0xc9) = 1;
      }
      func_0x00010c24d960(*(undefined8 *)(param_2 + 0xa0));
      uVar5 = *(ulong *)(param_2 + 0xa8);
      func_0x00010c07f760();
      if ((uVar5 & 1) == 0) {
        lVar3 = param_2 + 0x70;
        _objc_loadWeakRetained(lVar3);
        uVar1 = *(undefined8 *)(param_2 + 0x48);
        func_0x00010be36bc0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf79420(lVar3);
        _objc_release(uVar1);
        _objc_release(lVar3);
      }
      lVar3 = param_2 + 0x70;
      _objc_loadWeakRetained(lVar3);
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010be36bc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a460(lVar3);
      _objc_release(uVar1);
      _objc_release(lVar3);
      uVar1 = *(undefined8 *)(param_2 + 0x58);
      func_0x00010c100720(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0fe360();
      _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be75050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__playerDidResumeFromStall_11257adb0);
      return;
    }
    if (param_5 == 9) {
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
      lVar3 = *(long *)(param_2 + 0x58);
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_68,lVar3);
      }
      _CMTimeGetSeconds(&uStack_68);
      func_0x00010bf7ba20(uVar1);
      _objc_release(lVar3);
      lVar3 = param_2 + 0x70;
      _objc_loadWeakRetained(lVar3);
      uVar1 = *(undefined8 *)(param_2 + 0x48);
      func_0x00010be36bc0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c07a460(lVar3);
      _objc_release(uVar1);
      _objc_release(lVar3);
    }
  }
  else if (param_5 == 10) {
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    puVar4 = PTR_PTR_1126c7d68;
    func_0x00010c0ffd20(PTR_PTR_1126c7d68);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c29a860(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0(uVar1);
    _objc_release(lVar3);
    _objc_release(puVar4);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f5b20();
    _objc_release(uVar1);
    func_0x00010c0f5b20(*(undefined8 *)(param_2 + 0xa0));
    lVar3 = param_2 + 0x70;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf79300(lVar3);
    _objc_release(uVar1);
    _objc_release(lVar3);
    lVar3 = param_2 + 0x70;
    _objc_loadWeakRetained(lVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    func_0x00010be36bc0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07a460(lVar3);
    _objc_release(uVar1);
    _objc_release(lVar3);
    *(undefined1 *)(param_2 + 200) = 0;
  }
  else if (param_5 == 0xc) {
    if (*(char *)(param_2 + 0xc9) == '\x01') {
      uVar1 = *(undefined8 *)(param_2 + 0x38);
      puVar4 = PTR_PTR_1126c7d68;
      func_0x00010c1003e0(PTR_PTR_1126c7d68);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_2;
      func_0x00010c29a860(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar1);
      _objc_release(lVar3);
      _objc_release(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010becb290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__terminateVideo_112590648);
    return;
  }
  return;
}



/* Entry: 107b81ff0; end: 107b81ff7; -[SCOperaRemoteVideoController updateWithAction:] */

void FUN_107b81ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_updateWithAction__112680b20);
  return;
}



/* Entry: 107b81ff8; end: 107b82167; -[SCOperaRemoteVideoController _updateViewModelForProgress:captions:] */

void FUN_107b81ff8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = *(undefined8 *)(param_2 + 0x98);
  _objc_retain(param_4);
  func_0x00010c233e20(uVar9);
  puVar2 = PTR_PTR_1126d6c68;
  _objc_alloc(PTR_PTR_1126d6c68);
  func_0x00010bfefd60();
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010c299ba0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d6c78;
  _objc_alloc(PTR_PTR_1126d6c78);
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c233e00(uVar5);
  uVar1 = *(undefined1 *)(param_2 + 0xcb);
  uVar8 = uVar3;
  func_0x00010c235f40(uVar3);
  uVar6 = uVar3;
  func_0x00010c239ae0(uVar3);
  func_0x00010c046480(param_1,puVar4,param_3,uVar5,uVar1,uVar8,uVar6);
  puVar7 = PTR_PTR_1126d6c70;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c2331e0(uVar8);
  func_0x00010c01a6c0(puVar7,param_3,uVar9,uVar8,param_4,puVar4,puVar2);
  _objc_release(param_4);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  *(undefined **)(param_2 + 0x90) = puVar7;
  _objc_retain(puVar7);
  _objc_release(uVar8);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0xe0),param_3,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b82168; end: 107b8247b; -[SCOperaRemoteVideoController _toggleCaption:] */

void FUN_107b82168(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  if (*(char *)(param_2 + 0xcc) == '\x01') {
    lVar1 = *(long *)(param_2 + 0x58);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0c6600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar6);
    _objc_release(lVar1);
    if (param_4 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x58);
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c158de0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      param_4 = 0;
    }
    else {
      param_1 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      plStack_130 = (long *)0x0;
      lVar6 = lVar3;
      func_0x00010c0ec860();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar6;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar1 = *plStack_130;
        do {
          lVar7 = 0;
          do {
            if (*plStack_130 != lVar1) {
              _objc_enumerationMutation(lVar6);
            }
            uVar8 = *(undefined8 *)(lStack_138 + lVar7 * 8);
            uVar5 = uVar8;
            func_0x00010c0c6c20();
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar5;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) {
              func_0x00010c0c6c20();
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar8;
              func_0x00010c0720c0();
              _objc_release(uVar8);
              _objc_release(uVar5);
              if ((int)uVar4 != 0) goto LAB_107b82310;
            }
            else {
              _objc_release(uVar5);
LAB_107b82310:
              uVar4 = *(undefined8 *)(param_2 + 0x58);
              func_0x00010c100720();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              func_0x00010bf5f0a0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c158de0();
              _objc_release(uVar5);
              _objc_release(uVar4);
            }
            lVar7 = lVar7 + 1;
          } while (lVar2 != lVar7);
          lVar2 = lVar6;
          func_0x00010bf52a60(lVar6,param_3,&uStack_140,auStack_100,0x10);
        } while (lVar2 != 0);
      }
      _objc_release(lVar6);
    }
    uVar5 = *(undefined8 *)(param_2 + 0x90);
    func_0x00010c299ba0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c117720();
    if ((param_4 & 1) == 0) {
      func_0x00010bee38e0(param_1,param_2,param_3,PTR____NSArray0__struct_11034ab48);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x90);
      func_0x00010bf0dfa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee38e0(param_1,param_2,param_3,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uVar5);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(lVar3 + 0xcc) == '\x01') {
    lVar6 = *(long *)(lVar3 + 0x28);
    func_0x00010c12a620();
    if (lVar6 != 0) {
      if (lVar6 == 2) {
        *(undefined1 *)(lVar3 + 0xcb) = 0;
      }
      else {
        if (lVar6 != 1) {
          return;
        }
        *(undefined1 *)(lVar3 + 0xcb) = 1;
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x90);
      func_0x00010c299ba0(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c117720();
      uVar4 = *(undefined8 *)(lVar3 + 0x90);
      func_0x00010bf0dfa0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee38e0(param_1,lVar3,param_3,uVar4);
      _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    func_0x00010bf0fb00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    uStack_1b8 = 0x107b825c0;
    puStack_1b0 = &UNK_110853ba0;
    lStack_1a8 = lVar3;
    func_0x00010bf385a0(uVar4,param_3,uVar5,&puStack_1c8);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 107b8247c; end: 107b8267f; -[SCOperaRemoteVideoController _updateCaptionBasedOnCurrentDisplayStrategy] */

void FUN_107b8247c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (*(char *)(param_2 + 0xcc) == '\x01') {
    lVar1 = *(long *)(param_2 + 0x28);
    func_0x00010c12a620();
    if (lVar1 != 0) {
      if (lVar1 == 2) {
        *(undefined1 *)(param_2 + 0xcb) = 0;
      }
      else {
        if (lVar1 != 1) {
          return;
        }
        *(undefined1 *)(param_2 + 0xcb) = 1;
      }
      uVar2 = *(undefined8 *)(param_2 + 0x90);
      func_0x00010c299ba0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c117720();
      uVar3 = *(undefined8 *)(param_2 + 0x90);
      func_0x00010bf0dfa0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bee38e0(param_1,param_2,param_3,uVar3);
      _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar2);
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010bf0fb00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x107b825c0;
    puStack_50 = &UNK_110853ba0;
    lStack_48 = param_2;
    func_0x00010bf385a0(uVar3,param_3,uVar2,&puStack_68);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  return;
}



/* Entry: 107b82680; end: 107b8285f; -[SCOperaRemoteVideoController _configureRemoteVideo] */

void FUN_107b82680(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x48);
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar5 = *(undefined **)(param_1 + 0x30);
    func_0x00010c12a6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c118ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    if (((uVar4 & 1) == 0) && (puVar6 != (undefined *)0x0)) {
      func_0x00010bea6600(param_1,param_2,puVar6);
      puVar5 = *(undefined **)(param_1 + 0x98);
      func_0x00010c28c3e0(puVar5,param_2,0);
    }
    else {
      puVar5 = *(undefined **)(param_1 + 0x30);
      func_0x00010c12a6a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa97e0();
      _objc_release();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) goto code_r0x00010bdbf3e4;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 != (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_48 = puVar5;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_40 = puVar6;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_40,&puStack_48,1
                         );
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bea6600(param_1,param_2,puVar1);
      _objc_release(puVar1);
      _objc_release(puVar6);
      func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,0);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
  }
  ___stack_chk_fail();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar1 = puVar5;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(puVar5 + 0xd8);
  *(undefined **)(puVar5 + 0xd8) = puVar6;
  _objc_release(uVar7);
  _objc_release(puVar1);
  puVar6 = PTR_PTR_1126d6c80;
  _objc_alloc(PTR_PTR_1126d6c80);
  func_0x00010c02f040();
  uVar7 = *(undefined8 *)(puVar5 + 0x30);
  func_0x00010bf17600(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(puVar5 + 0xd8);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bcc0(uVar7,param_2,uVar8,puVar1,&PTR____CFConstantStringClassReference_110eb0df8,
                      puVar6);
  _objc_release(puVar1);
  _objc_release(uVar7);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_107b829b0;
  puStack_a0 = &UNK_1109fe6a0;
  puStack_98 = puVar5;
  func_0x00010bf97e80(*(undefined8 *)(puVar5 + 0x20),param_2,&puStack_b8);
code_r0x00010bdbf3e4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 107b82860; end: 107b829af; -[SCOperaRemoteVideoController _startBufferingVideo] */

void FUN_107b82860(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_1;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110dc4098);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined **)(param_1 + 0xd8) = puVar2;
  _objc_release(uVar4);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d6c80;
  _objc_alloc(PTR_PTR_1126d6c80);
  func_0x00010c02f040();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf17600(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7bcc0(uVar4,param_2,uVar5,puVar3,&PTR____CFConstantStringClassReference_110eb0df8,
                      puVar2);
  _objc_release(puVar3);
  _objc_release(uVar4);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_107b829b0;
  puStack_50 = &UNK_1109fe6a0;
  lStack_48 = param_1;
  func_0x00010bf97e80(*(undefined8 *)(param_1 + 0x20),param_2,&puStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b829b0; end: 107b829bf;  */

void FUN_107b829b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c066990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58),PTR_s_insertItem__1125f7470,param_2);
  return;
}



/* Entry: 107b829c0; end: 107b82aaf; -[SCOperaRemoteVideoController _terminateVideo] */

void FUN_107b829c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x00010c12aa40(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0xa0));
  puVar1 = PTR_PTR_1126d6c80;
  _objc_alloc(PTR_PTR_1126d6c80);
  func_0x00010c02f040();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf17600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0xd8);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7c0a0(uVar2,param_2,uVar4,puVar3,&PTR____CFConstantStringClassReference_110eb0df8,
                      puVar1,1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,0xd);
  func_0x00010bf3a660(*(undefined8 *)(param_1 + 0x98));
  *(undefined2 *)(param_1 + 0xc9) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b82ab0; end: 107b82b67; -[SCOperaRemoteVideoController setProgress:forIndex:] */

void FUN_107b82ab0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_3,puVar1,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  func_0x00010bf0dfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee38e0(param_1,param_2,param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 107b82b68; end: 107b82d8f; -[SCOperaRemoteVideoController _setPlayerItemsFromProperties:] */

void FUN_107b82b68(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_3);
        }
        uVar9 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        puVar3 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        func_0x00010bf0b9e0(PTR__OBJC_CLASS___AVURLAsset_1126b0d68,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
        func_0x00010c100be0(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0,param_2,puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1,param_2,puVar4);
        lVar5 = param_3;
        func_0x00010c0e00e0(param_3,param_2,uVar9);
        _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          lVar6 = lVar5;
          func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110f0ca18);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar6 != 0) {
            lVar6 = lVar5;
            func_0x00010c0e00e0(lVar5,param_2,&PTR____CFConstantStringClassReference_110f0ca18);
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            func_0x00010bf1f3c0();
            *(char *)(param_1 + 0xcc) = (char)lVar7;
            _objc_release(lVar6);
          }
        }
        _objc_release(lVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _CACurrentMediaTime();
  *(ulong *)(param_1 + 0xb0) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  *(undefined8 *)(param_1 + 0xb8) = 0;
  puVar3 = puVar1;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar9);
  func_0x00010bed4d20(param_1);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar10 = *(long *)(param_3 + 0x30);
    func_0x00010c12a6a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar10;
    func_0x00010c118ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    if (lVar2 != 0) {
      func_0x00010bea6600(param_3,param_2,lVar2);
    }
    func_0x00010c28c3e0(*(undefined8 *)(param_3 + 0x98),param_2,lVar2 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 107b82d90; end: 107b82e0b; -[SCOperaRemoteVideoController didFetchVideoPropertiesWithSuccess:] */

void FUN_107b82d90(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c12a6a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c118ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010bea6600(param_1,param_2,lVar2);
  }
  func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,lVar2 == 0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b82e0c; end: 107b82e47; -[SCOperaRemoteVideoController _seekToTime:completionHandler:] */

void FUN_107b82e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 8);
  uStack_30 = *(undefined8 *)PTR__kCMTimePositiveInfinity_110348658;
  uStack_20 = *(undefined8 *)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
  func_0x00010be9d360(param_1,param_2,&uStack_30,param_3);
  return;
}



/* Entry: 107b82e48; end: 107b82fb7; -[SCOperaRemoteVideoController _seekToTime:tolerance:completionHandler:] */

void FUN_107b82e48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  *(undefined1 *)(param_2 + 0xcd) = 1;
  if (*(char *)(param_2 + 0xce) == '\x01') {
    _objc_initWeak(auStack_48,param_2);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    func_0x00010c100720(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _CMTimeMakeWithSeconds(auStack_60,param_1,600);
    _objc_copyWeak(auStack_70,auStack_48);
    uStack_68 = param_1;
    _objc_retain(param_5);
    func_0x00010c157300(uVar1);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_48);
  }
  else {
    func_0x00010c1e46e0(param_1,param_2);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 107b82fb8; end: 107b83043;  */

void FUN_107b82fb8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xcd) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(lVar1 + 0x90);
    func_0x00010bf0dfa0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee38e0(uVar4,lVar1);
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b83044; end: 107b8304b; -[SCOperaRemoteVideoController seekToTime:] */

void FUN_107b83044(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__seekToTime_completionHandler__112584e70,0);
  return;
}



/* Entry: 107b8304c; end: 107b8304f; -[SCOperaRemoteVideoController remoteVideoProxyDidAttemptStartup] */

void FUN_107b8304c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde56d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__configureRemoteVideo_112556f50);
  return;
}



/* Entry: 107b83050; end: 107b830e3; -[SCOperaRemoteVideoController _totalVideoDurationSeconds] */

void FUN_107b83050(long param_1)

{
  long lVar1;
  long lVar2;
  double dStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  double dStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    dStack_38 = 0.0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010bf8b160(&dStack_38,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  uStack_48 = uStack_30;
  dStack_50 = dStack_38;
  uStack_40 = uStack_28;
  _CMTimeGetSeconds(&dStack_50);
  return;
}



/* Entry: 107b830e4; end: 107b83277; -[SCOperaRemoteVideoController _numberOfBytesTransferred] */

undefined * FUN_107b830e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 unaff_x22;
  long lVar7;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar3 = lVar1;
  _objc_release();
  puVar6 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = lVar2;
    func_0x00010beecca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar3);
    lVar1 = param_1;
    func_0x00010bf9a520();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = (undefined *)0x0;
      lVar3 = *plStack_110;
      do {
        lVar7 = 0;
        do {
          if (*plStack_110 != lVar3) {
            _objc_enumerationMutation(lVar1);
          }
          lVar4 = *(long *)(lStack_118 + lVar7 * 8);
          func_0x00010c0deb40();
          puVar6 = puVar6 + lVar4;
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
      unaff_x22 = 0;
    }
    _objc_release(lVar1);
    lVar3 = param_1;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_128 = FUN_107b83278;
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = *(long *)(lVar3 + 0x58);
  uStack_150 = unaff_x22;
  puStack_148 = puVar6;
  lStack_140 = lVar1;
  lStack_138 = param_1;
  puStack_130 = &stack0xfffffffffffffff0;
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_168,lVar2);
  }
  func_0x00010bf52140(uVar5,param_2,&uStack_168,0);
  _objc_release(lVar2);
  _objc_release(lVar3);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe7b60(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  _CVPixelBufferRelease(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return puVar6;
}



/* Entry: 107b83278; end: 107b8332f; -[SCOperaRemoteVideoController imageSnapshotFromPlayer] */

void FUN_107b83278(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_48,lVar2);
  }
  func_0x00010bf52140(uVar4,param_2,&uStack_48,0);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe7b60(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _CVPixelBufferRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 107b83330; end: 107b835a7; -[SCOperaRemoteVideoController toggleVolume:] */

void FUN_107b83330(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 0;
  if (param_3 == 0) {
    uVar9 = 0x3f800000;
  }
  func_0x00010c2241a0(uVar9);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = PTR_PTR_1126c7d68;
  func_0x00010c0ffc40(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c29aa60();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c299ba0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d6c78;
  _objc_alloc(PTR_PTR_1126d6c78);
  func_0x00010c233e00(*(undefined8 *)(param_1 + 0x98));
  func_0x00010c236780(uVar1);
  func_0x00010c239ae0(uVar1);
  func_0x00010c117720(uVar1);
  func_0x00010c046480(puVar2);
  puVar3 = PTR_PTR_1126d6c70;
  _objc_alloc();
  func_0x00010bfe1ee0(*(undefined8 *)(param_1 + 0x90));
  func_0x00010c2331e0(*(undefined8 *)(param_1 + 0x98));
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010bf0dfa0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c101040(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01a6c0();
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = *(undefined8 *)(param_1 + 0x90);
  *(undefined **)(param_1 + 0x90) = puVar3;
  _objc_retain(puVar3);
  _objc_release(uVar6);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xe0));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c236770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107b835a8; end: 107b835af; -[SCOperaRemoteVideoController showCaption:] */

void FUN_107b835a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c236770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showCaption_saveState__11266b400,param_3,0);
  return;
}



/* Entry: 107b835b0; end: 107b835bb; -[SCOperaRemoteVideoController showCaption:saveState:] */

void FUN_107b835b0(long param_1,undefined8 param_2,undefined1 param_3,int param_4)

{
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0xcb) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010becca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__toggleCaption__112590c48);
  return;
}



/* Entry: 107b835bc; end: 107b835c7; -[SCOperaRemoteVideoController startBuffering] */

void FUN_107b835bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_updateWithAction__112680b20,4);
  return;
}



/* Entry: 107b835c8; end: 107b836ef; -[SCOperaRemoteVideoController playVideo:] */

void FUN_107b835c8(double param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_4 != 0) {
    lVar1 = *(long *)(param_2 + 0x58);
    func_0x00010c100720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = *(long *)(param_2 + 0x58);
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
      }
      else {
        func_0x00010bf60480(&uStack_68,lVar2);
      }
      _CMTimeGetSeconds(&uStack_68);
      dVar5 = param_1 + 2.0;
      lVar3 = *(long *)(param_2 + 0x58);
      func_0x00010c100720();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf5f0a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uStack_68 = 0;
        uStack_60 = 0;
        uStack_58 = 0;
      }
      else {
        func_0x00010bf8b160(&uStack_68,lVar4);
      }
      _CMTimeGetSeconds(&uStack_68);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (param_1 <= dVar5) {
        func_0x00010be9d320(0,param_2,param_3,0);
      }
    }
  }
  func_0x00010c28c3e0(*(undefined8 *)(param_2 + 0x98),param_3,8);
  return;
}



/* Entry: 107b836f0; end: 107b83743; -[SCOperaRemoteVideoController isPaused] */

bool FUN_107b836f0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c252820();
  if (lVar1 != 10) {
    lVar1 = *(long *)(param_1 + 0x98);
    func_0x00010c252820();
    if (lVar1 != 0xb) {
      lVar1 = *(long *)(param_1 + 0x98);
      func_0x00010c252820(lVar1);
      return lVar1 == 7;
    }
  }
  return true;
}



/* Entry: 107b83744; end: 107b8376f; -[SCOperaRemoteVideoController pauseVideo] */

void FUN_107b83744(long param_1,undefined8 param_2)

{
  func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,9);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 107b83770; end: 107b8378f; -[SCOperaRemoteVideoController isShowingVideoFrame] */

bool FUN_107b83770(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  func_0x00010c252820(lVar1);
  return 6 < lVar1;
}



/* Entry: 107b83790; end: 107b8393b; -[SCOperaRemoteVideoController viewDidFullyAppear] */

void FUN_107b83790(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((*(char *)(param_2 + 0xcf) == '\x01') && (*(char *)(param_2 + 0xcb) == '\x01')) {
    func_0x00010becca80(param_2,param_3,0);
    func_0x00010becca80(param_2,param_3,*(undefined1 *)(param_2 + 0xcb));
  }
  func_0x00010c137fe0(*(undefined8 *)(param_2 + 0xa0));
  func_0x00010bed4d20(param_2);
  lVar1 = *(long *)(param_2 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
  }
  else {
    func_0x00010bf60480(&uStack_68,lVar1);
  }
  _CMTimeGetSeconds(&uStack_68);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126d2b60;
  _objc_alloc();
  puVar3 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  uVar5 = *(undefined8 *)(param_2 + 0xf0);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf461c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c036da0(param_1,puVar2,param_3,0,puVar3,uVar5,uVar6,uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined **)(param_2 + 0xa8) = puVar2;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  puVar2 = PTR_PTR_1126c7d68;
  func_0x00010c0fffa0(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  lVar1 = param_2;
  func_0x00010c29a860(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar4,param_3,puVar2,uVar5,lVar1);
  _objc_release(lVar1);
  _objc_release(puVar2);
  func_0x00010c28c3e0(*(undefined8 *)(param_2 + 0x98),param_3,6);
  func_0x00010c0fea20(param_2,param_3,1);
  return;
}



/* Entry: 107b8393c; end: 107b83947; -[SCOperaRemoteVideoController viewDidFullyDisappear] */

void FUN_107b8393c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x98),PTR_s_updateWithAction__112680b20,7);
  return;
}



/* Entry: 107b83948; end: 107b839bf; -[SCOperaRemoteVideoController sendEventDidChangeConfiguration] */

void FUN_107b83948(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR_PTR_1126c7d68;
  func_0x00010c0ff040(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c29a860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar2,param_2,puVar1,uVar3,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b839c0; end: 107b83ab3; -[SCOperaRemoteVideoController _sendMediaStartsToDisplayIfNecessary] */

void FUN_107b839c0(long param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *(long *)(param_1 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf5f0a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c252d60();
  if (lVar4 == 1) {
    bVar1 = *(byte *)(param_1 + 0xd1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((bVar1 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      puVar5 = PTR_PTR_1126b2338;
      func_0x00010c0c6900(PTR_PTR_1126b2338);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      lVar3 = param_1;
      func_0x00010c29a860(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eb7c0(uVar6,param_2,puVar5,uVar7,lVar3);
      _objc_release(lVar3);
      _objc_release(puVar5);
      *(undefined1 *)(param_1 + 0xd1) = 1;
    }
    return;
  }
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 107b83ab4; end: 107b83ef3; -[SCOperaRemoteVideoController videoParameters] */

void FUN_107b83ab4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined *puVar23;
  double dVar24;
  double dStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  double dStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_2 + 0x58);
  func_0x00010c100720();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    dStack_128 = 0.0;
    uStack_120 = 0;
    uStack_118 = 0;
  }
  else {
    func_0x00010bf60480(&dStack_128,lVar1);
  }
  _objc_release(lVar1);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
  if ((uStack_120 & 0x100000000) == 0) {
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cb938;
  }
  else {
    uStack_138 = uStack_120;
    dStack_140 = dStack_128;
    uStack_130 = uStack_118;
    param_1 = dStack_128;
    _CMTimeGetSeconds(&dStack_140);
    param_1 = param_1 * 1000.0;
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = PTR_PTR_1126b2348;
  func_0x00010c075940();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_110 = puVar3;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined1 *)(param_2 + 0xcf));
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b2348;
  puStack_c8 = puVar4;
  func_0x00010bf30920();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_108 = puVar5;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,*(undefined1 *)(param_2 + 0xcb));
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126b2348;
  puStack_c0 = puVar6;
  func_0x00010bf8b340();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_100 = puVar7;
  func_0x00010becda40(param_2);
  func_0x00010c0df720(param_1 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b2348;
  puStack_b8 = puVar23;
  func_0x00010c29ad40();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f8 = puVar8;
  func_0x00010c0df720(*(double *)(param_2 + 0xb8) * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2348;
  puStack_b0 = puVar9;
  func_0x00010c29b4e0();
  _objc_retainAutoreleasedReturnValue();
  dVar24 = *(double *)(param_2 + 0xb0) * 1000.0;
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar10;
  func_0x00010c0df720(dVar24);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR_PTR_1126b2348;
  puStack_a8 = puVar11;
  func_0x00010c0c4a80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_e8 = puVar12;
  func_0x00010beed820(*(undefined8 *)(param_2 + 0xa0));
  func_0x00010c0df720(dVar24 * 1000.0);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126b2348;
  puStack_a0 = puVar13;
  func_0x00010bf5fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126b2348;
  puStack_e0 = puVar14;
  ppuStack_98 = ppuVar2;
  func_0x00010bf25f20();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  puStack_d8 = puVar15;
  func_0x00010be65500(param_2);
  func_0x00010c0df7c0(puVar16,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR_PTR_1126b2348;
  puStack_90 = puVar16;
  func_0x00010bf27580();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar18 = *(undefined8 *)(param_2 + 8);
  puStack_d0 = puVar17;
  func_0x00010bf27580(uVar18);
  func_0x00010c0df780(puVar19,param_3,uVar18);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_88 = puVar19;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_c8,&puStack_110,9);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar20;
  func_0x00010c0d3c80();
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar23);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  lVar1 = param_2 + 0x50;
  _objc_loadWeakRetained();
  lVar22 = lVar1;
  func_0x00010befd500();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar21,param_3,lVar22);
  _objc_release(lVar22);
  _objc_release(lVar1);
  uVar18 = *(undefined8 *)(param_2 + 0xa8);
  func_0x00010bf60c40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar21,param_3,uVar18);
  _objc_release(uVar18);
  puVar23 = puVar21;
  func_0x00010bf51e00();
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
    return;
  }
  ___stack_chk_fail();
  puVar23 = ppuVar2[0x15];
  ppuVar2[0x15] = (undefined *)0x0;
  _objc_release(puVar23);
  func_0x00010c12aa40(ppuVar2[0xb]);
  func_0x00010c281b20(ppuVar2[0xd]);
  func_0x00010bf86d80(ppuVar2[0x1d]);
  func_0x00010c28c3e0(ppuVar2[0x13],param_3,5);
  *(undefined1 *)(ppuVar2 + 0x19) = 0;
  return;
}



/* Entry: 107b83ef4; end: 107b83f43; -[SCOperaRemoteVideoController tearDown] */

void FUN_107b83ef4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  _objc_release(uVar1);
  func_0x00010c12aa40(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c281b20(*(undefined8 *)(param_1 + 0x68));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0xe8));
  func_0x00010c28c3e0(*(undefined8 *)(param_1 + 0x98),param_2,5);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



/* Entry: 107b83f44; end: 107b83f4b; -[SCOperaRemoteVideoController videoViewModelObserver] */

undefined8 FUN_107b83f44(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 107b83f4c; end: 107b83f53; -[SCOperaRemoteVideoController shouldShowCaption] */

undefined1 FUN_107b83f4c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcb);
}



/* Entry: 107b83f54; end: 107b8409b; -[SCOperaRemoteVideoController .cxx_destruct] */

void FUN_107b83f54(long param_1)

{
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 107b8409c; end: 107b840c7; -[SCOperaRemoteVideoState shouldShowActivityIndicator] */

uint FUN_107b8409c(ulong param_1)

{
  func_0x00010c252820();
  return (uint)(0xc < param_1) | 0xa6eU >> (ulong)((uint)param_1 & 0x1f) & 1;
}



/* Entry: 107b840c8; end: 107b840ef; -[SCOperaRemoteVideoState shouldShowPlayButton] */

uint FUN_107b840c8(ulong param_1)

{
  func_0x00010c252820();
  return (uint)(param_1 < 0xd) & 0x1cb7U >> (ulong)((uint)param_1 & 0x1f);
}



/* Entry: 107b840f0; end: 107b8411b; -[SCOperaRemoteVideoState shouldShowPlayerView] */

uint FUN_107b840f0(ulong param_1)

{
  func_0x00010c252820();
  return (uint)(0xc < param_1) | 0xf80U >> (ulong)((uint)param_1 & 0x1f) & 1;
}



/* Entry: 107b8411c; end: 107b841b7; -[SCOperaRemoteVideoState initWithDelegate:preloadHelper:] */

undefined1 *
FUN_107b8411c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fa0d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_4);
    func_0x00010bf3a660(puVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107b841b8; end: 107b8426b; -[SCOperaRemoteVideoState setStateTag:] */

void FUN_107b841b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x00010c252840();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bf6e4a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(lVar2,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = param_3;
  if (param_3 == lVar2) {
    return;
  }
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b8426c; end: 107b842af; -[SCOperaRemoteVideoState clear] */

void FUN_107b8426c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)(param_1 + 0x28) = puVar1;
  _objc_release(uVar2);
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 107b842b0; end: 107b84917; -[SCOperaRemoteVideoState updateWithAction:] */

void FUN_107b842b0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar4 = param_1;
  switch(param_3) {
  case 0:
    func_0x00010c252820();
    if (uVar4 == 1) goto code_r0x000107b84608;
    uVar4 = param_1;
    func_0x00010c252820();
    if (uVar4 == 2) {
code_r0x000107b84424:
      uVar4 = 5;
      goto code_r0x000107b848a4;
    }
    uVar4 = param_1;
    func_0x00010c252820();
    if (uVar4 != 3) goto LAB_107b84758;
    goto code_r0x000107b848a0;
  case 1:
    func_0x00010c252820();
    if (((uVar4 != 1) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 2)) &&
       (uVar4 = param_1, func_0x00010c252820(), uVar4 != 3)) goto LAB_107b84758;
    goto code_r0x000107b845f0;
  case 2:
    func_0x00010c252820();
    if (uVar4 != 5) {
      uVar4 = param_1;
      func_0x00010c252820();
      if (uVar4 == 6) goto code_r0x000107b846a0;
      uVar4 = param_1;
      func_0x00010c252820();
      if (((uVar4 != 7) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 8)) &&
         ((uVar4 = param_1, func_0x00010c252820(), uVar4 != 9 &&
          ((uVar4 = param_1, func_0x00010c252820(), uVar4 != 10 &&
           (uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xb)))))) {
code_r0x000107b84710:
        uVar4 = param_1;
        func_0x00010c252820();
        if (uVar4 != 0xc) goto LAB_107b84758;
      }
      goto code_r0x000107b84744;
    }
    goto code_r0x000107b844d4;
  case 3:
    func_0x00010c252820();
    if ((uVar4 != 5) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 6)) {
code_r0x000107b844fc:
      uVar4 = param_1;
      func_0x00010c252820();
      if ((uVar4 != 7) &&
         ((((uVar4 = param_1, func_0x00010c252820(), uVar4 != 8 &&
            (uVar4 = param_1, func_0x00010c252820(), uVar4 != 9)) &&
           (uVar4 = param_1, func_0x00010c252820(), uVar4 != 10)) &&
          ((uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xb &&
           (uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xc)))))) goto LAB_107b84758;
code_r0x000107b84868:
      uVar4 = 0xc;
      goto code_r0x000107b848a4;
    }
    goto code_r0x000107b84608;
  case 4:
    uVar1 = param_1;
    func_0x00010c108720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c231e80();
    _objc_release(uVar1);
    func_0x00010c252820();
    if ((int)uVar2 != 0) {
      if ((uVar4 == 0) || (uVar4 = param_1, func_0x00010c252820(), uVar4 == 1)) {
code_r0x000107b844bc:
        uVar4 = 2;
        goto code_r0x000107b848a4;
      }
      uVar4 = param_1;
      func_0x00010c252820();
      if (uVar4 == 4) goto code_r0x000107b84424;
      goto code_r0x000107b84744;
    }
    break;
  case 5:
    uVar1 = param_1;
    func_0x00010c252820();
    if (uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010c252820();
      if (((uVar1 == 1) || (uVar1 = param_1, func_0x00010c252820(), uVar1 == 2)) ||
         (uVar1 = param_1, func_0x00010c252820(), uVar1 == 3)) {
        uVar4 = 1;
        goto code_r0x000107b848a4;
      }
      uVar1 = param_1;
      func_0x00010c252820();
      func_0x00010c252820();
      if (uVar1 != 4) {
        if ((uVar4 != 5) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 6))
        goto code_r0x000107b844fc;
        goto code_r0x000107b84868;
      }
      break;
    }
code_r0x000107b845f0:
    uVar4 = 0;
    goto code_r0x000107b848a4;
  case 6:
    func_0x00010c1b5a20(param_1,param_2,1);
    uVar3 = 8;
    goto code_r0x000107b84624;
  case 7:
    func_0x00010c1b5a20(param_1,param_2,0);
    uVar3 = 9;
code_r0x000107b84624:
                    /* WARNING: Could not recover jumptable at 0x00010c28c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateWithAction__112680b20,uVar3);
    return;
  case 8:
    func_0x00010c252820();
    if ((((uVar4 == 0) || (uVar4 = param_1, func_0x00010c252820(), uVar4 == 1)) ||
        (uVar4 = param_1, func_0x00010c252820(), uVar4 == 2)) ||
       (uVar4 = param_1, func_0x00010c252820(), uVar4 == 3)) {
      uVar4 = 3;
      goto code_r0x000107b848a4;
    }
    uVar4 = param_1;
    func_0x00010c252820();
    if (((uVar4 != 4) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 5)) &&
       (uVar4 = param_1, func_0x00010c252820(), uVar4 != 6)) {
      uVar4 = param_1;
      func_0x00010c252820();
      if (((uVar4 != 7) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 8)) &&
         (uVar4 = param_1, func_0x00010c252820(), uVar4 != 10)) {
        uVar4 = param_1;
        func_0x00010c252820();
        if ((uVar4 != 9) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xb))
        goto code_r0x000107b84710;
        goto code_r0x000107b84644;
      }
      goto code_r0x000107b846a0;
    }
code_r0x000107b848a0:
    uVar4 = 6;
    goto code_r0x000107b848a4;
  case 9:
    uVar1 = param_1;
    func_0x00010c252820();
    if ((uVar1 == 0) ||
       ((uVar1 = param_1, func_0x00010c252820(), uVar1 == 4 ||
        (uVar1 = param_1, func_0x00010c252820(), uVar1 == 2)))) goto code_r0x000107b84744;
    uVar1 = param_1;
    func_0x00010c252820();
    if (uVar1 == 3) goto code_r0x000107b844bc;
    uVar1 = param_1;
    func_0x00010c252820();
    func_0x00010c252820();
    if (uVar1 != 4) {
      if (uVar4 == 5) goto code_r0x000107b848a4;
      uVar4 = param_1;
      func_0x00010c252820();
      if (uVar4 == 6) goto code_r0x000107b84424;
      uVar1 = param_1;
      func_0x00010c252820();
      uVar4 = param_1;
      func_0x00010c252820();
      if (uVar1 != 7) {
        if ((uVar4 == 8) || (uVar4 = param_1, func_0x00010c252820(), uVar4 == 10))
        goto code_r0x000107b843c4;
        uVar4 = param_1;
        func_0x00010c252820();
        if ((uVar4 != 9) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xb))
        goto code_r0x000107b84710;
        goto code_r0x000107b846b8;
      }
    }
    break;
  case 10:
    func_0x00010c252820();
    if (uVar4 == 8) {
code_r0x000107b84644:
      uVar4 = 9;
      goto code_r0x000107b848a4;
    }
    uVar4 = param_1;
    func_0x00010c252820();
    if (uVar4 == 10) {
code_r0x000107b846b8:
      uVar4 = 0xb;
      goto code_r0x000107b848a4;
    }
    uVar4 = param_1;
    func_0x00010c252820();
    if ((uVar4 != 9) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xb)) goto LAB_107b84758;
    goto code_r0x000107b84744;
  case 0xb:
    uVar1 = param_1;
    func_0x00010c252820();
    if ((((uVar1 == 5) ||
         ((uVar1 = param_1, func_0x00010c252820(), uVar1 == 6 ||
          (uVar1 = param_1, func_0x00010c252820(), uVar1 == 7)))) ||
        (uVar1 = param_1, func_0x00010c252820(), uVar1 == 8)) ||
       ((uVar1 = param_1, func_0x00010c252820(), uVar1 == 10 ||
        (uVar1 = param_1, func_0x00010c252820(), uVar1 == 0xc)))) {
      func_0x00010c252820();
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
    uVar1 = param_1;
    func_0x00010c252820();
    if (uVar1 == 9) {
code_r0x000107b846a0:
      uVar4 = 8;
      goto code_r0x000107b848a4;
    }
    uVar1 = param_1;
    func_0x00010c252820();
    if (uVar1 == 0xb) {
code_r0x000107b843c4:
      uVar4 = 10;
      goto code_r0x000107b848a4;
    }
    break;
  case 0xc:
    func_0x00010c252820();
    if ((((uVar4 != 7) && (uVar4 = param_1, func_0x00010c252820(), uVar4 != 8)) &&
        (uVar4 = param_1, func_0x00010c252820(), uVar4 != 9)) &&
       ((uVar4 = param_1, func_0x00010c252820(), uVar4 != 10 &&
        (uVar4 = param_1, func_0x00010c252820(), uVar4 != 0xb)))) goto LAB_107b84758;
code_r0x000107b844d4:
    uVar4 = 7;
    goto code_r0x000107b848a4;
  case 0xd:
    func_0x00010c252820();
    if (uVar4 != 0xc) goto LAB_107b84758;
code_r0x000107b84608:
    uVar4 = 4;
    goto code_r0x000107b848a4;
  case 0xe:
    func_0x00010c083500();
    if (((uVar4 & 1) == 0) && (uVar4 = param_1, func_0x00010c252820(), 5 < (long)uVar4))
    goto code_r0x000107b84868;
code_r0x000107b84744:
    uVar4 = param_1;
    func_0x00010c252820();
    break;
  default:
    goto LAB_107b84758;
  }
  if (uVar4 == 0xffffffffffffffff) {
LAB_107b84758:
    uVar4 = 0xffffffffffffffff;
    do {
      uVar1 = param_1;
      func_0x00010c252840();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bf529e0();
      _objc_release(uVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    return;
  }
code_r0x000107b848a4:
                    /* WARNING: Could not recover jumptable at 0x00010c20a150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStateTag__112660278,uVar4);
  return;
}



/* Entry: 107b84918; end: 107b8493b; +[SCOperaRemoteVideoState descriptionForStateTag:] */

undefined * FUN_107b84918(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 + 1U < 0xe) {
    return (&PTR_PTR_1109fe6d0)[param_3 + 1U];
  }
  return (undefined *)0x0;
}



/* Entry: 107b8493c; end: 107b8495b; +[SCOperaRemoteVideoState descriptionForAction:] */

undefined * FUN_107b8493c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0xf) {
    return (&PTR_PTR_1109fe740)[param_3];
  }
  return (undefined *)0x0;
}



/* Entry: 107b8495c; end: 107b84973; -[SCOperaRemoteVideoState delegate] */

void FUN_107b8495c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b84974; end: 107b8497f; -[SCOperaRemoteVideoState setDelegate:] */

void FUN_107b84974(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 107b84980; end: 107b84997; -[SCOperaRemoteVideoState preloadHelper] */

void FUN_107b84980(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b84998; end: 107b849a3; -[SCOperaRemoteVideoState setPreloadHelper:] */

void FUN_107b84998(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 107b849a4; end: 107b849ab; -[SCOperaRemoteVideoState stateTag] */

undefined8 FUN_107b849a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 107b849ac; end: 107b849b3; -[SCOperaRemoteVideoState isViewVisible] */

undefined1 FUN_107b849ac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 107b849b4; end: 107b849bb; -[SCOperaRemoteVideoState setIsViewVisible:] */

void FUN_107b849b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 107b849bc; end: 107b849c3; -[SCOperaRemoteVideoState stateTagHistory] */

undefined8 FUN_107b849bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107b849c4; end: 107b849f3; -[SCOperaRemoteVideoState setStateTagHistory:] */

void FUN_107b849c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b849f4; end: 107b84a27; -[SCOperaRemoteVideoState .cxx_destruct] */

void FUN_107b849f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 107b84a28; end: 107b84bc3; +[SCOperaLongFormVideoViewController remoteVideoViewControllerWithConfiguration:operaDependencies:eventAnnouncer:isInline:bandwidthEstimator:] */

void FUN_107b84a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010bf70ba0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    _objc_release();
  }
  puVar2 = PTR_PTR_1126ae720;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_107b84bc4;
  puStack_70 = &UNK_11097e680;
  lStack_68 = param_4;
  _objc_retain(param_4);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c48c0;
  _objc_alloc();
  func_0x00010c00c300();
  puVar4 = PTR_PTR_1126d6a80;
  _objc_alloc(PTR_PTR_1126d6a80);
  puVar5 = PTR_PTR_1126b44c8;
  _objc_alloc();
  func_0x00010c030dc0();
  func_0x00010c060e40(puVar4,param_2,0,param_3,param_4,param_5,0,param_6,0,0,puVar5,0,puVar3,param_7
                     );
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_68);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b84bc4; end: 107b84bcb;  */

void FUN_107b84bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf70bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_deviceMotionManager_1125b9c90);
  return;
}



/* Entry: 107b84bcc; end: 107b84ea3; -[SCOperaLongFormVideoViewController initWithVideoId:configuration:operaDependencies:eventAnnouncer:operaPage:isInline:firstFrameImageKey:primaryColor:kvoController:imageProvider:motionManager:bandwidthEstimator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_107b84bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(in_stack_00000010);
  _objc_retain(in_stack_00000020);
  _objc_retain(in_stack_00000028);
  puStack_68 = PTR_PTR_1126fa0d8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b318);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276b318) = uVar2;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_11276b31c;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar7 = (long)_DAT_11276b320;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_5;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11276b324;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_6;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11276b328;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276b32c) = param_8;
    lVar6 = (long)_DAT_11276b330;
    _objc_retain(in_stack_00000010);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = in_stack_00000010;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11276b334;
    _objc_retain(in_stack_00000020);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = in_stack_00000020;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11276b338) = 1;
    puVar3 = PTR_PTR_1126d6c88;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010bf461c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0209e0();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b33c);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b33c) = puVar3;
    _objc_release(uVar5);
    _objc_release(puVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11276b340);
    *(undefined **)((long)puVar1 + (long)_DAT_11276b340) = puVar3;
    _objc_release(uVar2);
    func_0x00010be668e0(puVar1);
    lVar6 = (long)_DAT_11276b344;
    _objc_retain(in_stack_00000028);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = in_stack_00000028;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000028);
  _objc_release(in_stack_00000020);
  _objc_release(in_stack_00000010);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 107b84ea4; end: 107b853ab; -[SCOperaLongFormVideoViewController updateWithVideoId:videoURL:operaPage:firstFrameImageKey:primaryColor:videoRotationEnabled:showActionMenuButtonEnabled:imageProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b84ea4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
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
  _objc_retain(param_11);
  *(undefined1 *)(param_1 + _DAT_11276b348) = param_9;
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276b318);
  *(undefined8 *)(param_1 + _DAT_11276b318) = uVar1;
  _objc_release(uVar9);
  uVar1 = param_4;
  func_0x00010bf51e00();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276b34c);
  *(undefined8 *)(param_1 + _DAT_11276b34c) = uVar1;
  _objc_release(uVar9);
  lVar12 = (long)_DAT_11276b328;
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = param_5;
  _objc_release(uVar1);
  lVar12 = (long)_DAT_11276b350;
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + lVar12);
  *(undefined8 *)(param_1 + lVar12) = param_6;
  _objc_release(uVar1);
  lVar11 = (long)_DAT_11276b354;
  _objc_retain(param_11);
  uVar1 = *(undefined8 *)(param_1 + lVar11);
  *(undefined8 *)(param_1 + lVar11) = param_11;
  _objc_release(uVar1);
  lVar13 = (long)_DAT_11276b358;
  _objc_retain(param_7);
  uVar1 = *(undefined8 *)(param_1 + lVar13);
  *(undefined8 *)(param_1 + lVar13) = param_7;
  _objc_release(uVar1);
  lVar13 = (long)_DAT_11276b35c;
  func_0x00010c28cba0(*(undefined8 *)(param_1 + lVar13));
  if (*(long *)(param_1 + lVar12) != 0) {
    lVar2 = *(long *)(param_1 + lVar13);
    func_0x00010bfb12e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar2;
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    if (lVar12 == 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_107b853ac;
      puStack_78 = &UNK_11084d858;
      lStack_70 = param_1;
      func_0x00010bfe78a0(*(undefined8 *)(param_1 + lVar11));
    }
  }
  lVar11 = (long)_DAT_11276b360;
  *(undefined1 *)(param_1 + lVar11) = param_8;
  func_0x00010c1ee720(*(undefined8 *)(param_1 + lVar13));
  uVar1 = *(undefined8 *)(param_1 + lVar13);
  func_0x00010c100fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + _DAT_11276b33c);
  func_0x00010c100720(uVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1dda40(uVar1);
  _objc_release(uVar9);
  _objc_release(uVar1);
  lVar12 = (long)_DAT_11276b364;
  if (*(char *)(param_1 + lVar11) == '\x01') {
    if (*(long *)(param_1 + lVar12) == 0) {
      _objc_initWeak(auStack_98,param_1);
      lVar13 = (long)_DAT_11276b334;
      func_0x00010bf18460(*(undefined8 *)(param_1 + lVar13));
      uVar9 = *(undefined8 *)(param_1 + lVar13);
      func_0x00010c297080();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a0,auStack_98);
      uVar1 = uVar9;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + lVar12);
      *(undefined8 *)(param_1 + lVar12) = uVar1;
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_98);
    }
  }
  else if (*(long *)(param_1 + lVar12) != 0) {
    func_0x00010bf94da0(*(undefined8 *)(param_1 + _DAT_11276b334));
    func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar12));
    uVar1 = *(undefined8 *)(param_1 + lVar12);
    *(undefined8 *)(param_1 + lVar12) = 0;
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126d6c68;
  _objc_alloc();
  func_0x00010bfefd60();
  puVar4 = PTR_PTR_1126d6c78;
  _objc_alloc();
  func_0x00010c046480(0);
  puVar5 = PTR_PTR_1126d6c70;
  _objc_alloc();
  func_0x00010c01a6c0();
  puVar6 = PTR_PTR_1126d6c90;
  _objc_alloc();
  puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126c9cb8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060e20();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b368);
  *(undefined **)(param_1 + _DAT_11276b368) = puVar6;
  _objc_release(uVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  func_0x00010be67100(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_11);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107b853ac; end: 107b853c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b853ac(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276b35c),
             PTR_s_setupFirstFrameView__112667cb0,param_2);
  return;
}



/* Entry: 107b853c4; end: 107b85443;  */

void FUN_107b853c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  param_3 = param_3 + 0x20;
  _objc_loadWeakRetained(param_3);
  func_0x00010c141a80(param_4);
  uVar1 = param_1;
  func_0x00010c27ada0(param_4);
  _objc_release(param_4);
  func_0x00010c0d1280(param_1,uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b85444; end: 107b854a3; -[SCOperaLongFormVideoViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85444(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c281b20(*(undefined8 *)(param_1 + _DAT_11276b330));
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_11276b340));
  puStack_28 = PTR_PTR_1126fa0d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 107b854a4; end: 107b854f3; -[SCOperaLongFormVideoViewController didReceiveMemoryWarning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b854a4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didReceiveMemoryWarning_1125bbe28);
  func_0x00010bf79200(*(undefined8 *)(param_1 + _DAT_11276b368));
  return;
}



/* Entry: 107b854f4; end: 107b854fb; -[SCOperaLongFormVideoViewController prefersStatusBarHidden] */

undefined8 FUN_107b854f4(void)

{
  return 1;
}



/* Entry: 107b854fc; end: 107b85503; -[SCOperaLongFormVideoViewController canHandleRoundCorner] */

undefined8 FUN_107b854fc(void)

{
  return 1;
}



/* Entry: 107b85504; end: 107b85507; -[SCOperaLongFormVideoViewController didUpdateBottomPageViewProperties:] */

void FUN_107b85504(void)

{
  return;
}



/* Entry: 107b85508; end: 107b8550f; -[SCOperaLongFormVideoViewController isPausedForAttachment] */

undefined8 FUN_107b85508(void)

{
  return 0;
}



/* Entry: 107b85510; end: 107b85517; -[SCOperaLongFormVideoViewController mediaIsBeingPreparedForDisplay] */

undefined8 FUN_107b85510(void)

{
  return 0;
}



/* Entry: 107b85518; end: 107b8552f; -[SCOperaLongFormVideoViewController setupPlaybackAnalyticsTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85518(long param_1)

{
  if (*(long *)(param_1 + _DAT_11276b368) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c229110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_11276b368),PTR_s_setupPlaybackAnalyticsTracker__112667e68);
    return;
  }
  return;
}



/* Entry: 107b85530; end: 107b85537; -[SCOperaLongFormVideoViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b85530(void)

{
  return 0;
}



/* Entry: 107b85538; end: 107b85573; -[SCOperaLongFormVideoViewController pause] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85538(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11276b36c) = 1;
  func_0x00010bf9f7a0();
                    /* WARNING: Could not recover jumptable at 0x00010c0f6170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_pauseVideo_11261b278);
  return;
}



/* Entry: 107b85574; end: 107b85583; -[SCOperaLongFormVideoViewController isPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c079bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_isPaused_1125fc0f8);
  return;
}



/* Entry: 107b85584; end: 107b855eb; -[SCOperaLongFormVideoViewController resume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85584(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c0fea20(*(undefined8 *)(param_1 + _DAT_11276b368),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b33c);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 107b855ec; end: 107b855ef; -[SCOperaLongFormVideoViewController setPausedForAttachment:] */

void FUN_107b855ec(void)

{
  return;
}



/* Entry: 107b855f0; end: 107b8563b; -[SCOperaLongFormVideoViewController setVolume:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b855f0(double param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11276b33c);
  func_0x00010c100720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2241a0((float)param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b8563c; end: 107b8564b; -[SCOperaLongFormVideoViewController loadVideo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b8563c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24e030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_startBuffering_112671230);
  return;
}



/* Entry: 107b8564c; end: 107b8565b; -[SCOperaLongFormVideoViewController playVideo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b8564c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276b368),PTR_s_playVideo__11261d4a8);
  return;
}



/* Entry: 107b8565c; end: 107b8565f; -[SCOperaLongFormVideoViewController start] */

void FUN_107b8565c(void)

{
  return;
}



/* Entry: 107b85660; end: 107b85663; -[SCOperaLongFormVideoViewController stop] */

void FUN_107b85660(void)

{
  return;
}



/* Entry: 107b85664; end: 107b85703; -[SCOperaLongFormVideoViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c26ab80(*(undefined8 *)(param_1 + _DAT_11276b368));
  lVar2 = (long)_DAT_11276b35c;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf39f80();
  _objc_release(uVar1);
  func_0x00010c228a20(*(undefined8 *)(param_1 + lVar2),param_2,0);
  *(undefined1 *)(param_1 + _DAT_11276b36c) = 0;
  func_0x00010c28d080(param_1,param_2,0,0,0,0,0,0,0);
  return;
}



/* Entry: 107b85704; end: 107b8588b; -[SCOperaLongFormVideoViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126d6c98;
  uVar3 = *(undefined8 *)(param_1 + _DAT_11276b358);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b31c);
  func_0x00010bf80700(uVar1);
  func_0x00010c29e9e0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar2,param_2,param_1,uVar3
                      ,uVar1,*(undefined1 *)(param_1 + _DAT_11276b32c),
                      *(undefined1 *)(param_1 + _DAT_11276b348));
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276b35c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar2;
  _objc_release(uVar1);
  func_0x00010c222380(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221440();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf50040(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c189840();
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11276b350) != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107b8588c;
    puStack_40 = &UNK_11084d858;
    lStack_38 = param_1;
    func_0x00010bfe78a0(*(undefined8 *)(param_1 + _DAT_11276b354),param_2,
                        *(long *)(param_1 + _DAT_11276b350),&puStack_58);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar2);
  return;
}



/* Entry: 107b8588c; end: 107b858a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b8588c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c228a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276b35c),
             PTR_s_setupFirstFrameView__112667cb0,param_2);
  return;
}



/* Entry: 107b858a4; end: 107b859c7; -[SCOperaLongFormVideoViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b858a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126fa0d8;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidAppear__112684bd0);
  if (*(char *)(param_1 + _DAT_11276b32c) == '\x01') {
    if (*(char *)(param_1 + _DAT_11276b370) == '\x01') {
      lVar2 = (long)_DAT_11276b35c;
      func_0x00010c21e900(*(undefined8 *)(param_1 + lVar2));
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      func_0x00010bf50040(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar1);
      if ((*(byte *)(param_1 + _DAT_11276b374) & 1) == 0) {
        *(undefined1 *)(param_1 + _DAT_11276b374) = 1;
        uVar1 = *(undefined8 *)(param_1 + lVar2);
        func_0x00010bf50040(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1677c0(0);
        _objc_release(uVar1);
        func_0x00010bf9f5e0(param_1);
      }
      param_1 = param_1 + _DAT_11276b378;
      _objc_loadWeakRetained(param_1);
      func_0x00010c12a7a0();
      _objc_release(param_1);
    }
    else {
      *(undefined1 *)(param_1 + _DAT_11276b374) = 0;
    }
  }
  return;
}



/* Entry: 107b859c8; end: 107b85b8b; -[SCOperaLongFormVideoViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b859c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = *(undefined8 *)(param_5 + _DAT_11276b324);
  puVar1 = PTR_PTR_1126b2338;
  func_0x00010c12a660(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_5 + _DAT_11276b328);
  lVar2 = param_5;
  func_0x00010c29a860(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar5,param_6,puVar1,uVar6,lVar2);
  _objc_release(lVar2);
  _objc_release(puVar1);
  func_0x00010c29c980(*(undefined8 *)(param_5 + _DAT_11276b368));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11276b35c));
  dVar7 = param_1;
  _CGRectGetHeight();
  dVar8 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  dVar9 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  if (param_1 <= dVar9) {
    dVar9 = param_1;
  }
  *(double *)(param_5 + _DAT_11276b37c) = SQRT(dVar8 * dVar8 + dVar7 * dVar7) / dVar9;
  if ((*(byte *)(param_5 + _DAT_11276b32c) & 1) == 0) {
    uVar3 = *(ulong *)(param_5 + _DAT_11276b31c);
    func_0x00010c141b60();
    if ((uVar3 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_5 + _DAT_11276b320);
      func_0x00010bf70ba0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar6;
      func_0x00010c24e8e0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_5 + _DAT_11276b380);
      *(undefined8 *)(param_5 + _DAT_11276b380) = uVar5;
      _objc_release(uVar4);
      _objc_release(uVar6);
      func_0x00010c1419e0(param_5);
    }
  }
  *(undefined8 *)(param_5 + _DAT_11276b384) = 0;
  *(undefined8 *)(param_5 + _DAT_11276b388) = 0;
  return;
}



/* Entry: 107b85b8c; end: 107b85b8f; -[SCOperaLongFormVideoViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:] */

void FUN_107b85b8c(void)

{
  return;
}



/* Entry: 107b85b90; end: 107b85b93; -[SCOperaLongFormVideoViewController viewWillFullyAppear] */

void FUN_107b85b90(void)

{
  return;
}



/* Entry: 107b85b94; end: 107b85c37; -[SCOperaLongFormVideoViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85b94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0d8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  if (*(char *)(param_1 + _DAT_11276b32c) == '\x01') {
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21e900();
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276b35c);
    func_0x00010bf50040(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107b85c38; end: 107b85d23; -[SCOperaLongFormVideoViewController viewDidDisappear:] */

void FUN_107b85c38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fa0d8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)uVar1 != 0) {
    uVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219960();
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d1a0(param_1);
  func_0x00010c12a720(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220220();
  _objc_release(puVar2);
  return;
}



/* Entry: 107b85d24; end: 107b85e4f; -[SCOperaLongFormVideoViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85d24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + _DAT_11276b32c) == '\x01') {
    lVar4 = (long)_DAT_11276b368;
    func_0x00010c236740(*(undefined8 *)(param_1 + lVar4),param_2,0);
    lVar3 = (long)_DAT_11276b35c;
    func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,0);
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bf50040(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276b320);
    func_0x00010bf70ba0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c255e00();
    _objc_release(uVar1);
    lVar4 = (long)_DAT_11276b368;
  }
  func_0x00010c29ca00(*(undefined8 *)(param_1 + lVar4));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11276b324);
  puVar2 = PTR_PTR_1126b2338;
  func_0x00010c12a640(PTR_PTR_1126b2338);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + _DAT_11276b328);
  func_0x00010c29a860(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb7c0(uVar1,param_2,puVar2,uVar5,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 107b85e50; end: 107b85eb3; -[SCOperaLongFormVideoViewController didTapRemoteVideoView:] */

void FUN_107b85e50(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf50040(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf01b40();
  _objc_release(param_4);
  if (param_1 == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_fadeInControls_1125c5720);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_fadeOutControls_1125c5790);
  return;
}



/* Entry: 107b85eb4; end: 107b85f1b; -[SCOperaLongFormVideoViewController fadeInControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85eb4(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_107b85f1c;
  puStack_20 = &UNK_110841f20;
  lStack_18 = param_1;
  func_0x00010bf9f600(0x3fc999999999999a,*(undefined8 *)(param_1 + _DAT_11276b35c),param_2,
                      &puStack_38);
  return;
}



/* Entry: 107b85f1c; end: 107b85f23;  */

void FUN_107b85f1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beabd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setupControlsFadeTimer_1125888e8);
  return;
}



/* Entry: 107b85f24; end: 107b85f77; -[SCOperaLongFormVideoViewController fadeOutControls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b85f24(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11276b368);
  func_0x00010c07e000();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9f7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x3fc999999999999a,*(undefined8 *)(param_1 + _DAT_11276b35c),
               PTR_s_fadeOutControlsWithDuration_comp_1125c57a0,0);
    return;
  }
  return;
}


