/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b635d0; end: 108b635d7; -[RTCVideoEncoderSettings_v141 setHeight:] */

void FUN_108b635d0(long param_1,undefined8 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 108b635d8; end: 108b635df; -[RTCVideoEncoderSettings_v141 startBitrate] */

undefined4 FUN_108b635d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 108b635e0; end: 108b635e7; -[RTCVideoEncoderSettings_v141 setStartBitrate:] */

void FUN_108b635e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 108b635e8; end: 108b635ef; -[RTCVideoEncoderSettings_v141 maxBitrate] */

undefined4 FUN_108b635e8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 108b635f0; end: 108b635f7; -[RTCVideoEncoderSettings_v141 setMaxBitrate:] */

void FUN_108b635f0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108b635f8; end: 108b635ff; -[RTCVideoEncoderSettings_v141 minBitrate] */

undefined4 FUN_108b635f8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 108b63600; end: 108b63607; -[RTCVideoEncoderSettings_v141 setMinBitrate:] */

void FUN_108b63600(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 108b63608; end: 108b6360f; -[RTCVideoEncoderSettings_v141 maxFramerate] */

undefined4 FUN_108b63608(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108b63610; end: 108b63617; -[RTCVideoEncoderSettings_v141 setMaxFramerate:] */

void FUN_108b63610(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108b63618; end: 108b6361f; -[RTCVideoEncoderSettings_v141 qpMax] */

undefined4 FUN_108b63618(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 108b63620; end: 108b63627; -[RTCVideoEncoderSettings_v141 setQpMax:] */

void FUN_108b63620(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 108b63628; end: 108b6362f; -[RTCVideoEncoderSettings_v141 mode] */

undefined8 FUN_108b63628(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108b63630; end: 108b63637; -[RTCVideoEncoderSettings_v141 setMode:] */

void FUN_108b63630(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 108b63638; end: 108b63643; -[RTCVideoEncoderSettings_v141 .cxx_destruct] */

void FUN_108b63638(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108b63644; end: 108b6364b; -[RTCVideoFrame_v141 width] */

void FUN_108b63644(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2a5050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_width_112686e38);
  return;
}



/* Entry: 108b6364c; end: 108b63653; -[RTCVideoFrame_v141 height] */

void FUN_108b6364c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_height_1125d5b50);
  return;
}



/* Entry: 108b63654; end: 108b6365b; -[RTCVideoFrame_v141 rotation] */

undefined8 FUN_108b63654(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b6365c; end: 108b63663; -[RTCVideoFrame_v141 timeStampNs] */

undefined8 FUN_108b6365c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108b63664; end: 108b636cf; -[RTCVideoFrame_v141 newI420VideoFrame] */

long FUN_108b63664(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126dae18;
  _objc_alloc(PTR_PTR_1126dae18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c271de0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff9860(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
  func_0x000108b63788();
  return param_1;
}



/* Entry: 108b636d0; end: 108b63763; -[RTCVideoFrame_v141 initWithBuffer:rotation:timeStampNs:] */

undefined1 *
FUN_108b636d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fd4b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b63764; end: 108b6376b; -[RTCVideoFrame_v141 buffer] */

undefined8 FUN_108b63764(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108b6376c; end: 108b63773; -[RTCVideoFrame_v141 timeStamp] */

undefined4 FUN_108b6376c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 108b63774; end: 108b6377b; -[RTCVideoFrame_v141 setTimeStamp:] */

void FUN_108b63774(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 108b6377c; end: 108b63793; -[RTCVideoFrame_v141 .cxx_destruct] */

void FUN_108b6377c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 108b63794; end: 108b637a3; -[RTCAudioSession_v141 setConfiguration:error:] */

void FUN_108b63794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setConfiguration_active_shouldSe_11263dcb8,param_3,0,0,param_4);
  return;
}



/* Entry: 108b637a4; end: 108b637af; -[RTCAudioSession_v141 setConfiguration:active:error:] */

void FUN_108b637a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c180a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setConfiguration_active_shouldSe_11263dcb8,param_3,param_4,1,param_5);
  return;
}



/* Entry: 108b637b0; end: 108b6414b; -[RTCAudioSession_v141 setConfiguration:active:shouldSetActive:error:] */

undefined1
FUN_108b637b0(double param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             int param_6,undefined8 *param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  if (param_7 != (undefined8 *)0x0) {
    *param_7 = 0;
  }
  uVar2 = param_2;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010bf33240();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == uVar3) {
    uVar2 = param_2;
    func_0x00010c0cfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010c0cfd40();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 != uVar3) {
      func_0x000108b64154();
      func_0x000108b6414c();
      goto LAB_108b63864;
    }
    uVar3 = param_2;
    func_0x00010bf33580();
    uVar4 = param_4;
    func_0x00010bf33580();
    func_0x000108b64154();
    func_0x000108b6414c();
    func_0x000108b64180();
    func_0x000108b6416c();
    if (uVar3 != uVar4) goto LAB_108b6386c;
  }
  else {
LAB_108b63864:
    func_0x000108b64180();
    func_0x000108b6416c();
LAB_108b6386c:
    func_0x00010bf33240(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_4;
    func_0x00010c0cfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf33580(param_4);
    uVar3 = param_2;
    func_0x00010c17a0a0();
    func_0x000108b64194();
    func_0x000108b6414c();
    func_0x000108b64180();
    func_0x000108b64224();
    if ((uVar3 & 1) == 0) {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e4e0(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6415c();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64154();
      func_0x000108b64180();
      func_0x000108b64188();
      func_0x000108b6414c();
      func_0x000108b64194();
    }
    else {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf33240();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64218();
      func_0x00010c25d9e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b641a4();
      func_0x000108b64154();
      func_0x000108b64180();
      func_0x000108b6419c(1);
      func_0x000108b6414c();
    }
    func_0x000108b6416c();
  }
  uVar3 = 0;
  func_0x00010c106e00(param_2);
  dVar7 = param_1;
  func_0x000108b641fc();
  if (param_1 != dVar7) {
    func_0x000108b641fc();
    uVar4 = param_2;
    func_0x00010c1e02a0();
    func_0x000108b64194();
    func_0x000108b64224();
    if ((uVar4 & 1) == 0) {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e4e0(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6415c();
      uVar4 = uVar2;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b641a4();
      func_0x000108b64154();
      func_0x000108b64188();
      func_0x000108b6414c();
      func_0x000108b641c8();
      if ((uVar4 & 1) == 0) {
        func_0x000108b64194();
        goto LAB_108b63ad8;
      }
    }
    else {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b641fc();
      func_0x000108b64218();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64154();
      func_0x000108b6419c(1);
      uVar3 = uVar2;
LAB_108b63ad8:
      func_0x000108b6414c();
      uVar2 = uVar3;
    }
    func_0x000108b6416c();
  }
  uVar3 = 0;
  func_0x00010c106be0(param_2);
  dVar8 = dVar7;
  func_0x000108b641f4();
  if (dVar7 != dVar8) {
    func_0x000108b641f4();
    uVar4 = param_2;
    func_0x00010c1e0020();
    func_0x000108b64194();
    func_0x000108b64224();
    if ((uVar4 & 1) == 0) {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e4e0(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6415c();
      uVar4 = uVar2;
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b641a4();
      func_0x000108b64154();
      func_0x000108b64188();
      func_0x000108b6414c();
      func_0x000108b641c8();
      if ((uVar4 & 1) == 0) {
        func_0x000108b64194();
        goto LAB_108b63bf0;
      }
    }
    else {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b641f4();
      func_0x000108b64218();
      func_0x00010c25d9e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64154();
      func_0x000108b6419c(1);
      uVar3 = uVar2;
LAB_108b63bf0:
      func_0x000108b6414c();
      uVar2 = uVar3;
    }
    func_0x000108b6416c();
  }
  if (param_6 != 0) {
    uVar3 = param_2;
    func_0x00010c1624c0();
    _objc_retain();
    if ((uVar3 & 1) == 0) {
      func_0x000108b64224();
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e4e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64218();
      func_0x00010c25d9e0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64154();
      func_0x000108b6416c();
      FUN_108b62ed0(3,uVar2);
      func_0x000108b641b8();
      _objc_retain(0);
      func_0x000108b64180();
    }
    func_0x000108b641c0();
  }
  uVar2 = param_2;
  func_0x00010c06b700();
  if ((int)uVar2 == 0) goto LAB_108b63f50;
  uVar2 = param_2;
  func_0x00010c0cfd40();
  iVar1 = (int)uVar2;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x000108b641b8();
  if (iVar1 == 0) goto LAB_108b63f50;
  uVar2 = param_4;
  func_0x00010c065d00();
  uVar3 = param_2;
  func_0x00010c065d00();
  if (uVar3 != uVar2) {
    uVar2 = param_2;
    func_0x00010c1e00a0();
    func_0x000108b641b0();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((uVar2 & 1) == 0) {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c09e4e0(0);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6415c();
      func_0x00010c25d9e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6414c();
      func_0x000108b641c0();
      func_0x000108b641dc();
      func_0x000108b6416c();
      func_0x000108b641c8();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000108b641b0();
        goto LAB_108b63e30;
      }
    }
    else {
      func_0x000108b64174();
      FUN_108b62f20();
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b64204();
      func_0x00010c25d9e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108b6414c();
      FUN_108b62ed0(1,puVar5);
LAB_108b63e30:
      func_0x000108b641c0();
    }
    func_0x000108b641b8();
  }
  puVar5 = (undefined *)0x0;
  uVar2 = param_4;
  func_0x00010c0eef60();
  uVar3 = param_2;
  func_0x00010c0eef60();
  if (uVar3 == uVar2) goto LAB_108b63f50;
  func_0x00010c1e01c0();
  func_0x000108b641b0();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((param_2 & 1) == 0) {
    func_0x000108b64174();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09e4e0(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b6415c();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b6414c();
    func_0x000108b641c0();
    func_0x000108b641dc();
    func_0x000108b6416c();
    func_0x000108b641c8();
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000108b641b0();
      goto LAB_108b63f44;
    }
  }
  else {
    func_0x000108b64174();
    FUN_108b62f20();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b64204();
    func_0x00010c25d9e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x000108b6414c();
    FUN_108b62ed0(1,puVar6);
    puVar5 = puVar6;
LAB_108b63f44:
    _objc_release(puVar5);
  }
  func_0x000108b641b8();
LAB_108b63f50:
  if (param_7 != (undefined8 *)0x0) {
    _objc_retainAutorelease(0);
    *param_7 = 0;
  }
  func_0x000108b64180();
  _objc_release(param_4);
  return 1;
}



/* Entry: 108b6414c; end: 108b6422f;  */

void FUN_108b6414c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108b64230; end: 108b642cb; -[RTCAudioSessionConfiguration_v141 init] */

undefined1 * FUN_108b64230(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd4c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)PTR__AVAudioSessionCategoryPlayAndRecord_11034ce30;
    func_0x000108b64558();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = 4;
    uVar3 = *(undefined8 *)PTR__AVAudioSessionModeVoiceChat_11034ce88;
    func_0x000108b64558();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = 0x3f947ae147ae147b;
    *(undefined8 *)((long)puVar1 + 0x20) = 0x40e7700000000000;
    *(undefined8 *)((long)puVar1 + 0x38) = 1;
    *(undefined8 *)((long)puVar1 + 0x30) = 1;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 108b642cc; end: 108b642ef; +[RTCAudioSessionConfiguration_v141 initialize] */

void FUN_108b642cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_alloc_init();
  uVar1 = uRam000000011372d598;
  uRam000000011372d598 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b642f0; end: 108b643ef; +[RTCAudioSessionConfiguration_v141 currentConfiguration] */

void FUN_108b642f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126da390;
  func_0x00010c22ba80(PTR_PTR_1126da390);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126da808;
  _objc_alloc_init(PTR_PTR_1126da808);
  puVar3 = puVar1;
  func_0x00010bf33240(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a060(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010bf33580(puVar1);
  func_0x00010c17a1c0(puVar2,param_2,puVar3);
  puVar3 = puVar1;
  func_0x00010c0cfd40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8c60(puVar2,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c149840(puVar1);
  func_0x00010c1f53c0(puVar2);
  func_0x00010bdc1740(puVar1);
  func_0x00010c1aedc0(puVar2);
  puVar3 = puVar1;
  func_0x00010c065d00(puVar1);
  func_0x00010c1ad560(puVar2,param_2,puVar3);
  puVar3 = puVar1;
  func_0x00010c0eef60(puVar1);
  func_0x00010c1d70c0(puVar2,param_2,puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108b643f0; end: 108b64437; +[RTCAudioSessionConfiguration_v141 webRTCConfiguration] */

void FUN_108b643f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = uRam000000011372d598;
  func_0x000108b64558();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b64438; end: 108b64477; +[RTCAudioSessionConfiguration_v141 setWebRTCConfiguration:] */

void FUN_108b64438(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  
  FUN_108b64548();
  func_0x000108b64558();
  _objc_sync_enter();
  uVar1 = unaff_x19;
  _objc_release(uRam000000011372d598);
  uRam000000011372d598 = uVar1;
  _objc_sync_exit();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 108b64478; end: 108b6447f; -[RTCAudioSessionConfiguration_v141 category] */

undefined8 FUN_108b64478(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108b64480; end: 108b6449f; -[RTCAudioSessionConfiguration_v141 setCategory:] */

void FUN_108b64480(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_108b64548();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b644a0; end: 108b644a7; -[RTCAudioSessionConfiguration_v141 categoryOptions] */

undefined8 FUN_108b644a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108b644a8; end: 108b644af; -[RTCAudioSessionConfiguration_v141 setCategoryOptions:] */

void FUN_108b644a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 108b644b0; end: 108b644b7; -[RTCAudioSessionConfiguration_v141 mode] */

undefined8 FUN_108b644b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108b644b8; end: 108b644d7; -[RTCAudioSessionConfiguration_v141 setMode:] */

void FUN_108b644b8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_108b64548();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b644d8; end: 108b644df; -[RTCAudioSessionConfiguration_v141 sampleRate] */

undefined8 FUN_108b644d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108b644e0; end: 108b644e7; -[RTCAudioSessionConfiguration_v141 setSampleRate:] */

void FUN_108b644e0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 108b644e8; end: 108b644ef; -[RTCAudioSessionConfiguration_v141 ioBufferDuration] */

undefined8 FUN_108b644e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108b644f0; end: 108b644f7; -[RTCAudioSessionConfiguration_v141 setIoBufferDuration:] */

void FUN_108b644f0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 108b644f8; end: 108b644ff; -[RTCAudioSessionConfiguration_v141 inputNumberOfChannels] */

undefined8 FUN_108b644f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108b64500; end: 108b64507; -[RTCAudioSessionConfiguration_v141 setInputNumberOfChannels:] */

void FUN_108b64500(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 108b64508; end: 108b6450f; -[RTCAudioSessionConfiguration_v141 outputNumberOfChannels] */

undefined8 FUN_108b64508(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108b64510; end: 108b64517; -[RTCAudioSessionConfiguration_v141 setOutputNumberOfChannels:] */

void FUN_108b64510(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 108b64518; end: 108b64547; -[RTCAudioSessionConfiguration_v141 .cxx_destruct] */

void FUN_108b64518(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b64548; end: 108b64567;  */

void FUN_108b64548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 108b64568; end: 108b645af; -[RTCNativeAudioSessionDelegateAdapter_v141 initWithObserver:] */

void FUN_108b64568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fd4c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 108b645b0; end: 108b645bf; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidBeginInterruption:] */

void FUN_108b645b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b645bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 8))();
  return;
}



/* Entry: 108b645c0; end: 108b645cf; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidEndInterruption:shouldResumeSession:] */

void FUN_108b645c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b645cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 8))();
  return;
}



/* Entry: 108b645d0; end: 108b64707; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidChangeRoute:reason:previousRoute:] */

void FUN_108b645d0(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_4 < 9) {
    if ((1L << (param_4 & 0x3f) & 0xdfU) == 0) {
      if (param_4 == 8) {
        puVar1 = &UNK_10f4ffea5;
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        FUN_108b62ed0(1,puVar2);
        _objc_release(puVar2);
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x10))();
    }
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b64708; end: 108b6470b; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionMediaServerTerminated:] */

void FUN_108b64708(void)

{
  return;
}



/* Entry: 108b6470c; end: 108b6470f; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionMediaServerReset:] */

void FUN_108b6470c(void)

{
  return;
}



/* Entry: 108b64710; end: 108b64723; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSession:didChangeCanPlayOrRecord:] */

void FUN_108b64710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000108b64720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),param_4);
  return;
}



/* Entry: 108b64724; end: 108b64727; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidStartPlayOrRecord:] */

void FUN_108b64724(void)

{
  return;
}



/* Entry: 108b64728; end: 108b6472b; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidStopPlayOrRecord:] */

void FUN_108b64728(void)

{
  return;
}



/* Entry: 108b6472c; end: 108b6473b; -[RTCNativeAudioSessionDelegateAdapter_v141 audioSession:didChangeOutputVolume:] */

void FUN_108b6472c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108b64738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}



/* Entry: 108b6473c; end: 108b64923;  */

bool FUN_108b6473c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _CFStringGetLength();
  _CFStringFindWithOptions(param_1,param_2,0,uVar1,1,0);
  return (int)param_1 != 0;
}



/* Entry: 108b64924; end: 108b64933;  */

void FUN_108b64924(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c253670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSString_1126ae4d0,PTR_s_stdStringForString__1126727c0,param_1);
  return;
}



/* Entry: 108b64934; end: 108b649ab;  */

void FUN_108b64934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf64920(param_4,param_3,4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  _objc_retainAutorelease();
  func_0x00010bf25f00();
  uVar2 = param_4;
  func_0x00010c08fa60(param_4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6__initEPKcm(param_1,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108b649ac; end: 108b64a1f;  */

void FUN_108b649ac(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  FUN_108b64a20();
  uVar1 = param_3[1];
  puVar2 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar2 = param_3;
  }
  func_0x00010bffa180(param_1,param_2,puVar2,uVar1,4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108b64a20; end: 108b64a2b;  */

void FUN_108b64a20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_alloc_11034d1a8)(PTR__OBJC_CLASS___NSString_1126ae4d0);
  return;
}



/* Entry: 108b64a2c; end: 108b64a37; +[RTCCameraPreviewView_v141 layerClass] */

void FUN_108b64a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___AVCaptureVideoPreviewLayer_1126dae20);
  return;
}



/* Entry: 108b64a38; end: 108b64a77; -[RTCCameraPreviewView_v141 initWithFrame:] */

undefined1 * FUN_108b64a38(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x000108b64ff4();
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010befa440(puVar1);
  }
  return puVar1;
}



/* Entry: 108b64a78; end: 108b64ab7; -[RTCCameraPreviewView_v141 initWithCoder:] */

undefined1 * FUN_108b64a78(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x000108b64ff4();
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010befa440(puVar1);
  }
  return puVar1;
}



/* Entry: 108b64ab8; end: 108b64af3; -[RTCCameraPreviewView_v141 dealloc] */

void FUN_108b64ab8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010c12d720();
  puStack_28 = PTR_PTR_1126fd4d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 108b64af4; end: 108b64c6f; -[RTCCameraPreviewView_v141 setCaptureSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b64af4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112777c88;
  if (*(long *)(param_1 + lVar3) != param_3) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126dae28;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x108b64bb8;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bf85100(puVar1,param_2,0,&puStack_60);
    _objc_release(lStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108b64c70; end: 108b64ce3;  */

void FUN_108b64c70(long param_1,undefined8 param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010c1fd860(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108b64ce4;
  puStack_30 = &UNK_110842e18;
  uStack_28 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf85100(PTR_PTR_1126dae28,param_2,0,&puStack_48);
  return;
}



/* Entry: 108b64ce4; end: 108b64ceb;  */

void FUN_108b64ce4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1843f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setCorrectVideoOrientation_11263eb18);
  return;
}



/* Entry: 108b64cec; end: 108b64d23; -[RTCCameraPreviewView_v141 layoutSubviews] */

void FUN_108b64cec(undefined8 param_1)

{
  undefined1 auStack_30 [16];
  
  func_0x000108b64ff4();
  _objc_msgSendSuper2(auStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010c1843e0(param_1);
  return;
}



/* Entry: 108b64d24; end: 108b64d27; -[RTCCameraPreviewView_v141 orientationChanged:] */

void FUN_108b64d24(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1843f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setCorrectVideoOrientation_11263eb18);
  return;
}



/* Entry: 108b64d28; end: 108b64d6f; -[RTCCameraPreviewView_v141 setCorrectVideoOrientation] */

void FUN_108b64d28(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 2;
  func_0x000107c31924(2,0x11,0,0);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_modifyVideoAngle_112611b98);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0d0630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_modifyVideoOrientation_112611ba0);
  return;
}



/* Entry: 108b64d70; end: 108b64dc7; -[RTCCameraPreviewView_v141 addOrientationObserver] */

void FUN_108b64d70(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b64dc8; end: 108b64e17; -[RTCCameraPreviewView_v141 removeOrientationObserver] */

void FUN_108b64dc8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b64e18; end: 108b64e1b; -[RTCCameraPreviewView_v141 previewLayer] */

void FUN_108b64e18(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 108b64e1c; end: 108b64f0f; -[RTCCameraPreviewView_v141 modifyVideoAngle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b64e1c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_112777c88);
  func_0x00010c066460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108b6501c();
  func_0x00010bf6fd20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c111520();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf48b00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___AVCaptureDeviceRotationCoordinator_1126dae30;
  _objc_alloc(PTR__OBJC_CLASS___AVCaptureDeviceRotationCoordinator_1126dae30);
  func_0x00010c00c060();
  func_0x00010c29b120();
  lVar3 = param_2;
  func_0x00010c083300();
  if ((int)lVar3 != 0) {
    func_0x00010c221e60(param_1,param_2);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  func_0x000108b64fec();
  func_0x000108b6501c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b64f10; end: 108b64fc7; -[RTCCameraPreviewView_v141 modifyVideoOrientation] */

void FUN_108b64f10(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ed100();
  func_0x000108b64fec();
  func_0x00010c111520();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf48b00();
  iVar1 = (int)uVar3;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0832c0();
  func_0x000108b64fec();
  if ((iVar1 != 0) && (puVar2 + -1 < (undefined *)0x4)) {
    func_0x00010bf48b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221b40();
    func_0x000108b64fec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b64fc8; end: 108b64fd7; -[RTCCameraPreviewView_v141 captureSession] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b64fc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777c88);
}



/* Entry: 108b64fd8; end: 108b65023; -[RTCCameraPreviewView_v141 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b64fd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777c88,0);
  return;
}



/* Entry: 108b65024; end: 108b6504b; +[RTCDispatcher_v141 initialize] */

/* WARNING: Possible PIC construction at 0x00010002a358: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010002a35c) */

void FUN_108b65024(void)

{
  int iVar1;
  undefined **ppuVar2;
  code *pcVar3;
  
  if (lRam000000011372d5a0 == -1) {
    return;
  }
  ppuVar2 = &PTR___NSConcreteGlobalBlock_110ab3598;
  func_0x000107c61174(&PTR___NSConcreteGlobalBlock_110ab3598);
  if ((bRam0000000113817d58 & 1) == 0) {
    iVar1 = 0x13817d58;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_once");
      pcRam0000000113817d50 = pcVar3;
      func_0x000107c60e4c(0x113817d58);
    }
  }
  pcVar3 = pcRam0000000113817d50;
  func_0x00010002a3a8(&PTR___NSConcreteGlobalBlock_110ab3598);
  func_0x000107c61180();
  (*pcVar3)(0x11372d5a0,ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 108b6504c; end: 108b650bb;  */

void FUN_108b6504c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_10f4fff92;
  FUN_108b651e8();
  uVar1 = puRam000000011372d5a8;
  puRam000000011372d5a8 = puVar2;
  _objc_release(uVar1);
  puVar2 = &UNK_10f4fffb7;
  FUN_108b651e8();
  uVar1 = puRam000000011372d5b0;
  puRam000000011372d5b0 = puVar2;
  _objc_release(uVar1);
  puVar2 = &UNK_10f4fffde;
  FUN_108b651e8();
  uVar1 = puRam000000011372d5b8;
  puRam000000011372d5b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b650bc; end: 108b6511b; +[RTCDispatcher_v141 dispatchAsyncOnType:block:] */

void FUN_108b650bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bf85200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d8c();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b6511c; end: 108b65173; +[RTCDispatcher_v141 isOnQueueForType:] */

bool FUN_108b6511c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf85200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  _dispatch_queue_get_label();
  uVar2 = 0;
  _dispatch_queue_get_label(0);
  _strcmp(uVar1,uVar2);
  _objc_release(param_1);
  return (int)uVar1 == 0;
}



/* Entry: 108b65174; end: 108b651e7; +[RTCDispatcher_v141 dispatchQueueForType:] */

void FUN_108b65174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *unaff_x19;
  
  switch(param_3) {
  case 0:
    unaff_x19 = PTR___dispatch_main_q_11034be20;
    break;
  case 1:
    unaff_x19 = puRam000000011372d5b0;
    break;
  case 2:
    unaff_x19 = puRam000000011372d5a8;
    break;
  case 3:
    unaff_x19 = puRam000000011372d5b8;
    break;
  default:
    goto LAB_108b651d4;
  }
  _objc_retain(unaff_x19);
LAB_108b651d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x19);
  return;
}



/* Entry: 108b651e8; end: 108b651ef;  */

void FUN_108b651e8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_queue_create_11034c0d8)(param_1,0);
  return;
}



/* Entry: 108b651f0; end: 108b6525f;  */

undefined8 *
FUN_108b651f0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int extraout_w10;
  long lVar8;
  long lVar9;
  undefined1 auStack_528 [1024];
  undefined1 auStack_128 [256];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _uname(auStack_528);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  puVar5 = auStack_128;
  uVar6 = 4;
  func_0x00010bffa3c0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    uVar4 = SUB81(puVar5,0);
    puVar1[1] = &PTR_FUN_110ab3810;
    *puVar1 = &PTR_FUN_110ab35c8;
    puVar1[2] = &PTR_FUN_110ab3858;
    lVar7 = *param_2;
    puVar1[3] = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x000108b68150();
        uVar4 = SUB81(puVar5,0);
      } while (extraout_w10 != 0);
    }
    lVar7 = param_2[1];
    lVar9 = param_2[4];
    lVar8 = param_2[3];
    puVar1[5] = param_2[2];
    puVar1[4] = lVar7;
    puVar1[7] = lVar9;
    puVar1[6] = lVar8;
    *(undefined1 *)(puVar1 + 8) = uVar4;
    _objc_retain(param_5);
    _objc_retainBlock();
    puVar1[9] = uVar6;
    _objc_retainBlock();
    func_0x000108b68198();
    puVar1[10] = param_5;
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0xf] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar2 = puVar1 + 0x17;
    func_0x000108a04dac();
    puVar1[0x20] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x28] = 0;
    *(undefined1 *)(puVar1 + 0x29) = 0;
    puVar1[0x22] = 0;
    puVar1[0x21] = 0;
    puVar1[0x24] = 0;
    puVar1[0x23] = 0;
    puVar1[0x26] = 0;
    puVar1[0x25] = 0;
    *(undefined4 *)((long)puVar1 + 0x137) = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2e] = 0;
    func_0x0001089fa790(puVar1 + 0x2f);
    *(undefined4 *)(puVar1 + 0x34) = 0;
    puVar1[0x33] = 0;
    puVar1[0x32] = 0;
    puVar1[0x31] = 0;
    puVar1[0x30] = 0;
    func_0x000108afb164();
    puVar1[0xc] = puVar2;
    puVar3 = PTR_PTR_1126dae38;
    _objc_alloc();
    func_0x00010c030dc0();
    uVar6 = puVar1[0x28];
    puVar1[0x28] = puVar3;
    _objc_release(uVar6);
    return puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar1;
}



/* Entry: 108b65260; end: 108b653eb;  */

undefined8 *
FUN_108b65260(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  int extraout_w10;
  long lVar6;
  long lVar7;
  
  uVar3 = (undefined1)param_3;
  param_1[1] = &PTR_FUN_110ab3810;
  *param_1 = &PTR_FUN_110ab35c8;
  param_1[2] = &PTR_FUN_110ab3858;
  lVar4 = *param_2;
  param_1[3] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000108b68150();
      uVar3 = (undefined1)param_3;
    } while (extraout_w10 != 0);
  }
  lVar4 = param_2[1];
  lVar7 = param_2[4];
  lVar6 = param_2[3];
  param_1[5] = param_2[2];
  param_1[4] = lVar4;
  param_1[7] = lVar7;
  param_1[6] = lVar6;
  *(undefined1 *)(param_1 + 8) = uVar3;
  _objc_retain(param_5);
  _objc_retainBlock();
  param_1[9] = param_4;
  _objc_retainBlock();
  func_0x000108b68198();
  param_1[10] = param_5;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  puVar1 = param_1 + 0x17;
  func_0x000108a04dac();
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x137) = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x2e] = 0;
  func_0x0001089fa790(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  func_0x000108afb164();
  param_1[0xc] = puVar1;
  puVar2 = PTR_PTR_1126dae38;
  _objc_alloc();
  func_0x00010c030dc0();
  uVar5 = param_1[0x28];
  param_1[0x28] = puVar2;
  _objc_release(uVar5);
  return param_1;
}



/* Entry: 108b653ec; end: 108b654a7;  */

undefined8 * FUN_108b653ec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ab35c8;
  param_1[1] = &PTR_FUN_110ab3810;
  param_1[2] = &PTR_FUN_110ab3858;
  *(undefined1 *)(param_1[0x2f] + 4) = 0;
  FUN_108b655e0();
  uVar1 = param_1[0x28];
  param_1[0x28] = 0;
  _objc_release(uVar1);
  FUN_10899d2a8(param_1 + 0x2f);
  func_0x000108b68308();
  func_0x000108a50f70(param_1 + 0x20);
  func_0x000108b67580(param_1 + 0x1f);
  func_0x000108b68320();
  func_0x000108b68300();
  func_0x000108b682f8();
  func_0x000108b682f0();
  FUN_10898b0bc(param_1 + 3);
  return param_1;
}



/* Entry: 108b654a8; end: 108b654b3;  */

undefined8 * FUN_108b654a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110ab35c8;
  param_1[1] = &PTR_FUN_110ab3810;
  param_1[2] = &PTR_FUN_110ab3858;
  *(undefined1 *)(param_1[0x2f] + 4) = 0;
  FUN_108b655e0();
  uVar1 = param_1[0x28];
  param_1[0x28] = 0;
  _objc_release(uVar1);
  FUN_10899d2a8(param_1 + 0x2f);
  func_0x000108b68308();
  func_0x000108a50f70(param_1 + 0x20);
  func_0x000108b67580(param_1 + 0x1f);
  func_0x000108b68320();
  func_0x000108b68300();
  func_0x000108b682f8();
  func_0x000108b682f0();
  FUN_10898b0bc(param_1 + 3);
  return param_1;
}



/* Entry: 108b654b4; end: 108b654c7;  */

void FUN_108b654b4(void)

{
  FUN_108b653ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b654c8; end: 108b654d7;  */

void FUN_108b654c8(long param_1)

{
  FUN_108b653ec(param_1 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108b654d8; end: 108b6559b;  */

undefined8 FUN_108b654d8(double param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
    puVar1 = PTR_PTR_1126da808;
    func_0x00010c2a3ae0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c149840();
    puVar2 = puVar1;
    dVar3 = param_1;
    func_0x00010c0eef60();
    *(int *)(param_2 + 0x70) = (int)param_1;
    *(undefined **)(param_2 + 0x78) = puVar2;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(long *)(param_2 + 0x88) = (long)((int)param_1 / 100);
    func_0x00010c149840(puVar1);
    func_0x00010c065d00();
    *(int *)(param_2 + 0x90) = (int)dVar3;
    *(undefined **)(param_2 + 0x98) = puVar1;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(long *)(param_2 + 0xa8) = (long)((int)dVar3 / 100);
    FUN_108b6559c(param_2);
    *(undefined1 *)(param_2 + 0x138) = 1;
    func_0x000108b68188();
  }
  return 0;
}



/* Entry: 108b6559c; end: 108b655df;  */

void FUN_108b6559c(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x8c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x98) = *(undefined8 *)(param_1 + 0x78);
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x88) = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x90) = *(undefined8 *)(param_1 + 0x98);
  return;
}



/* Entry: 108b655e0; end: 108b65627;  */

undefined8 FUN_108b655e0(long *param_1)

{
  if ((char)param_1[0x27] == '\x01') {
    (**(code **)(*param_1 + 0x98))();
    (**(code **)(*param_1 + 0xb0))(param_1);
    *(undefined1 *)(param_1 + 0x27) = 0;
  }
  return 0;
}



/* Entry: 108b65628; end: 108b6562f;  */

undefined1 FUN_108b65628(long param_1)

{
  return *(undefined1 *)(param_1 + 0x138);
}



/* Entry: 108b65630; end: 108b65653;  */

undefined8 FUN_108b65630(long param_1)

{
  if ((*(byte *)(param_1 + 0x139) & 1) == 0) {
    FUN_108b65654();
    if ((int)param_1 == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



/* Entry: 108b65654; end: 108b65a0f;  */

void FUN_108b65654(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x30;
  
  if ((*(long *)(param_1 + 0xb0) == 0) && ((*(byte *)(param_1 + 0x139) & 1) == 0)) {
    lVar5 = *(long *)(param_1 + 0x48);
    puVar1 = (undefined1 *)0x20;
    __Znwm();
    *puVar1 = *(undefined1 *)(param_1 + 0x40);
    puVar1[1] = lVar5 != 0;
    *(long *)(puVar1 + 8) = param_1 + 0x10;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    FUN_108b671f8((long *)(param_1 + 0xb0),puVar1);
    uVar2 = *(ulong *)(param_1 + 0xb0);
    FUN_108b684a4();
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR_PTR_1126da390;
      func_0x00010c22ba80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11c0c0();
      puVar4 = puVar3;
      func_0x00010c075c20();
      *(char *)(param_1 + 0x13a) = (char)puVar4;
      func_0x00010c09fb60(puVar3);
      puVar4 = puVar3;
      func_0x00010bf18fa0();
      _objc_retain();
      if (((ulong)puVar4 & 1) == 0) {
        func_0x000108b6829c();
        puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000108b68168();
        FUN_108b62f20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x000108b6827c();
        func_0x000108b68198();
        func_0x000108b68270();
        func_0x000108b681d4();
LAB_108b65968:
        func_0x000108b68244();
        uVar6 = 0;
      }
      else {
        func_0x00010bf2d0e0();
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((int)puVar3 != 0) {
          func_0x000108b68168();
          FUN_108b62f20();
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b68284(0x3b8);
          func_0x00010c25d9e0(puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x000108b681d4();
          func_0x000108b68348(1);
          func_0x000108b6827c();
          puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          if (*(char *)(param_1 + 0x148) == '\x01') {
            func_0x000108b68168();
            FUN_108b62f20();
            _objc_retainAutoreleasedReturnValue();
            func_0x000108b68284(0x3ba);
            func_0x00010c25d9e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x000108b6812c();
            func_0x000108b681b0(2);
            func_0x000108b68198();
          }
          else {
            puVar4 = PTR_PTR_1126da390;
            func_0x00010c22ba80();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf47620();
            puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            if ((int)puVar4 == 0) {
              func_0x000108b68168();
              FUN_108b62f20();
              _objc_retainAutoreleasedReturnValue();
              func_0x000108b68284(0x3c4);
              func_0x00010c25d9e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x000108b68328();
              func_0x000108b68350();
            }
            else {
              *(undefined1 *)(param_1 + 0x148) = 1;
              puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x000108b68168();
              FUN_108b62f20();
              _objc_retainAutoreleasedReturnValue();
              func_0x000108b68284(0x3c2);
              func_0x00010c25d9e0(puVar3);
              _objc_retainAutoreleasedReturnValue();
              func_0x000108b68328();
              func_0x000108b68350();
            }
            _objc_release(puVar3);
            func_0x000108b681d4();
            if (((ulong)puVar4 & 1) != 0) {
              FUN_108b667e0(param_1);
              FUN_108b68804((double)*(int *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0xb0));
              goto LAB_108b65954;
            }
          }
          func_0x000108b6829c();
          goto LAB_108b65968;
        }
LAB_108b65954:
        func_0x000108b6829c();
        uVar6 = 1;
        *(undefined1 *)(param_1 + 0x139) = 1;
      }
      func_0x000108b68188();
      func_0x000108b68160();
      goto LAB_108b657f0;
    }
    func_0x000108b68244();
  }
  uVar6 = 0;
LAB_108b657f0:
  func_0x000108b682c8(uVar6,unaff_x30);
  return;
}



/* Entry: 108b65a10; end: 108b65a1f;  */

undefined1 FUN_108b65a10(long param_1)

{
  return *(undefined1 *)(param_1 + 0x139);
}


