/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103187ffc; end: 10318803f;  */

void FUN_103187ffc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103188040; end: 10318804b; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f47798;
  func_0x000107c61428(param_1 + _DAT_112f47798,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10318804c; end: 10318809f;  */

void FUN_10318804c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1031880a0; end: 1031880e7; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 audioPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031880a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f477a0;
  func_0x000107c61428(param_1 + _DAT_112f477a0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1031880e8; end: 10318814b; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 setAudioPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031880e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f477a0;
  func_0x000107c61428(param_1 + _DAT_112f477a0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10318814c; end: 10318815b; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 maxRecordDuration] */

undefined8 FUN_10318814c(void)

{
  return 0x4082c00000000000;
}



/* Entry: 10318815c; end: 1031883a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10318815c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long alStack_90 [4];
  undefined1 auStack_70 [8];
  
  lVar1 = 0x112f477a8;
  alStack_90[0] = param_4;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  alStack_90[2] = *(long *)(lVar1 + -8);
  alStack_90[3] = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_90[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  alStack_90[1] = (long)alStack_90 - extraout_x8;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar5 = ((long)alStack_90 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar4 = (undefined8 *)(lVar5 - extraout_x12);
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f47790,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f47798,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f477a0) = 0;
  func_0x00010318ee64();
  func_0x000107c613fc();
  uVar2 = param_1;
  FUN_1031905f4(param_1,param_2,param_3,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112f477b0) = uVar2;
  puVar3 = auStack_70;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  uVar6 = *(undefined8 *)(puVar3 + _DAT_112f477b0);
  *puVar4 = puVar3;
  puVar4[1] = &PTR_DAT_110618248;
  func_0x000107c6159c(puVar4,lVar1,0);
  func_0x000103188ddc(puVar4,lVar5);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c6157c(uVar6);
  uVar2 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  lVar1 = alStack_90[1];
  func_0x000107c5fd28(alStack_90[1],lVar5,uVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(alStack_90[0]);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(uVar6);
  (**(code **)(alStack_90[2] + 8))(lVar1,alStack_90[3]);
  func_0x000103188e20(puVar4);
  return puVar3;
}



/* Entry: 1031883a4; end: 10318844b; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 initWithPerformer:minRecordDurationSeconds:armingTimeoutSeconds:armingRetryIntervalMs:] */

undefined8
FUN_1031883a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  FUN_103188e5c(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 10318844c; end: 1031885ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318844c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_80 [16];
  
  func_0x000107c614f0();
  lVar1 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = _DAT_112f477b0;
  lVar6 = lVar5 - extraout_x12;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f477b0);
  func_0x000107c6159c(lVar6);
  func_0x000103188ddc(lVar6,lVar5);
  func_0x000107c6157c(uVar7);
  uVar3 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28(puVar4,lVar5,uVar3);
  func_0x000107c61574(uVar7);
  (**(code **)(lVar8 + 8))(puVar4,lVar1);
  func_0x000103188e20(lVar6);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c5fd2c(uVar3);
  func_0x000107c61574(uVar7);
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1031885f0; end: 103188613; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 dealloc] */

void FUN_1031885f0(void)

{
  func_0x000107c61174();
  FUN_10318844c();
  return;
}



/* Entry: 103188614; end: 10318866b; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188614(long param_1)

{
  FUN_1031873d8(param_1 + _DAT_112f47790);
  func_0x000107c61610(param_1 + _DAT_112f47798);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f477a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f477b0));
  return;
}



/* Entry: 10318866c; end: 103188673; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 startAudioNoteRecordingAsynchronously] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318866c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar2 - extraout_x12;
  func_0x000107c6159c(lVar5);
  func_0x000103188ddc(lVar5,lVar2);
  func_0x000107c61174(param_1);
  uVar3 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28(puVar4,lVar2,uVar3);
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  func_0x000103188e20(lVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103188674; end: 10318867b; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 stopAudioNoteRecordingAsynchronously] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188674(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar2 - extraout_x12;
  func_0x000107c6159c(lVar5);
  func_0x000103188ddc(lVar5,lVar2);
  func_0x000107c61174(param_1);
  uVar3 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28(puVar4,lVar2,uVar3);
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  func_0x000103188e20(lVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10318867c; end: 1031887d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318867c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar2 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar2 - extraout_x12;
  func_0x000107c6159c(lVar5);
  func_0x000103188ddc(lVar5,lVar2);
  func_0x000107c61174(param_1);
  uVar3 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28(puVar4,lVar2,uVar3);
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  func_0x000103188e20(lVar5);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1031887d4; end: 1031887ff; -[_TtC21ChatAudioNoteRecorder23ChatAudioNoteRecorderV4 init] */

void FUN_1031887d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatAudioNoteRecorder.ChatAudioNoteRecorderV4",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103188800);
  (*pcVar1)();
}



/* Entry: 103188800; end: 103188883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188800(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f477a0;
  func_0x000107c61428(unaff_x20 + _DAT_112f477a0,auStack_38,0,0);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c5bb1c();
  }
  lVar1 = _DAT_112f47790;
  func_0x000107c61428(unaff_x20 + _DAT_112f47790,auStack_50,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3e3e4();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 103188884; end: 103188933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188884(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112f47790;
  func_0x000107c61428(unaff_x20 + _DAT_112f47790,auStack_58,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_3 >> 0x3c < 0xf) {
      func_0x000107c5ee20(param_2,param_3);
    }
    else {
      param_2 = 0;
    }
    func_0x000107c3e3dc(param_1,lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 103188934; end: 103188ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188934(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112f47798;
  if (param_2 == 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f47798,auStack_78,0,0);
    lVar3 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = 0x79616b6f;
      func_0x000107c5fadc(0x79616b6f,0xe400000000000000);
      uVar5 = 0;
      func_0x000107c5fe40(0);
      lVar12 = lVar4;
      func_0x000107c312f4(lVar4,uVar5);
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(uVar5);
      if (lVar12 != 0) {
        puVar6 = &UNK_110618280;
        func_0x000107c613fc(&UNK_110618280,0x18,7);
        func_0x000107c61614(puVar6 + 0x10);
        pcStack_88 = FUN_10318909c;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100de205c;
        puStack_90 = &UNK_110618298;
        ppuVar7 = &puStack_a8;
        puStack_80 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar8 = PTR_PTR_1126aed70;
        func_0x000107c61168();
        func_0x000107c6157c(puVar6);
        func_0x000107c3dac4();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(lVar12);
        puVar1 = puStack_80;
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar1);
        lVar4 = -0x2fffffffffffffe9;
        func_0x000107c5fadc(0xd000000000000017,0x800000010f12b760);
        uVar9 = 0;
        func_0x000107c5fe40(0);
        lVar12 = lVar4;
        uVar5 = uVar9;
        func_0x000107c312f4(lVar4,uVar9);
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar9);
        if (lVar12 == 0) {
          lVar4 = 0;
          uVar5 = 0;
        }
        else {
          lVar4 = lVar12;
          func_0x000107c5faec(lVar12);
          func_0x000107c61170(lVar12);
        }
        lVar12 = -0x2fffffffffffffe7;
        func_0x000107c5fadc(0xd000000000000019,0x800000010f12b780);
        lVar10 = 0;
        func_0x000107c5fe40();
        lVar11 = lVar12;
        lVar13 = lVar10;
        func_0x000107c312f4(lVar12,lVar10);
        func_0x000107c61180();
        func_0x000107c61170(lVar12);
        func_0x000107c61170();
        if (lVar11 == 0) {
          lVar12 = 0;
          lVar13 = 0;
        }
        else {
          lVar12 = lVar11;
          func_0x000107c5faec(lVar11);
          func_0x000107c61170();
          lVar10 = lVar11;
        }
        func_0x000100de9c28();
        func_0x000107c613fc();
        *(undefined8 *)(lVar10 + 0x18) = 3;
        *(undefined8 *)(lVar10 + 0x10) = 1;
        *(undefined **)(lVar10 + 0x20) = puVar8;
        func_0x000107c610f8(PTR_PTR_1126aed78);
        func_0x000107c61174(puVar8);
        func_0x000100fe8774(lVar4,uVar5,lVar12,lVar13,lVar10);
        func_0x000107c59bc8();
        func_0x000107c4f018(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(lVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103188ca8);
      (*pcVar2)();
    }
  }
  lVar3 = _DAT_112f47790;
  func_0x000107c61428(unaff_x20 + _DAT_112f47790,&puStack_a8,0,0);
  lVar3 = unaff_x20 + lVar3;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c3e3dc(0);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 103188ca8; end: 103188d47;  */

void FUN_103188ca8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x1031890c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106182c0;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 103188d48; end: 103188e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103188d48(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f47790;
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + _DAT_112f47790,auStack_50,0,0);
    lVar1 = param_1 + lVar1;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c3e3dc(0);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103188e5c; end: 10318907b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103188e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long alStack_80 [2];
  
  func_0x000107c614f0();
  lVar1 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  alStack_80[0] = *(long *)(lVar1 + -8);
  alStack_80[1] = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_80[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)alStack_80 - extraout_x8;
  lVar1 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar5 = (undefined8 *)(lVar6 - extraout_x12);
  func_0x000107c61614(unaff_x20 + _DAT_112f47790,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f47798,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f477a0) = 0;
  uVar2 = 0;
  func_0x00010318ee64();
  func_0x000107c613fc();
  FUN_1031905f4(param_1,param_2,param_3,param_4,uVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112f477b0) = param_1;
  puVar3 = &stack0xffffffffffffff90;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  uVar7 = *(undefined8 *)(puVar3 + _DAT_112f477b0);
  *puVar5 = puVar3;
  puVar5[1] = &PTR_DAT_110618248;
  func_0x000107c6159c(puVar5,lVar1,0);
  func_0x000103188ddc(puVar5,lVar6);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  func_0x000107c6157c(uVar7);
  uVar2 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28(lVar4,lVar6,uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61574(uVar7);
  (**(code **)(alStack_80[0] + 8))(lVar4,alStack_80[1]);
  func_0x000103188e20(puVar5);
  return puVar3;
}



/* Entry: 10318907c; end: 10318909b;  */

void FUN_10318907c(void)

{
  func_0x000107c61168(&PTR_PTR_1128bdad0);
  return;
}



/* Entry: 10318909c; end: 1031890cf;  */

void FUN_10318909c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  
  ppuVar1 = &puStack_60;
  uStack_40 = 0x1031890c0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106182c0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar1);
  return;
}



/* Entry: 1031890d0; end: 10318910f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1031890d0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f477f0;
  func_0x000107c61428(unaff_x20 + _DAT_112f477f0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103189110;
  return auVar2;
}



/* Entry: 103189110; end: 103189113;  */

void FUN_103189110(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103189114; end: 10318929b;  */

void FUN_103189114(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0x112f479e0;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar1 = 0;
  FUN_10318efd8();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar1 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar1 = 0;
  FUN_10318ef6c();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  lVar1 = 0x112f47ba8;
  func_0x0001000285a8(0x112f47ba8,&UNK_10db94ab8);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  lVar1 = 0x112f47bb0;
  func_0x0001000285a8(0x112f47bb0,&UNK_10db94ac0);
  *(long *)(unaff_x22 + 0xd8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318929c,0,0);
  return;
}



/* Entry: 10318929c; end: 103189343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318929c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  func_0x0001000285a8(0x112f47b98,&UNK_10db94a98);
  func_0x000107c5fd34(uVar4);
  uVar4 = _DAT_112f477f8;
  lVar2 = _DAT_112f477f0;
  *(long *)(unaff_x22 + 0xf0) = _DAT_112f477f0;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar4;
  func_0x000107c61428(lVar1 + lVar2,unaff_x22 + 0x30,0,0);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103189344;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar3,*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  return;
}



/* Entry: 103189344; end: 10318938b;  */

void FUN_103189344(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x100));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318938c,0,0);
  return;
}



/* Entry: 10318938c; end: 1031894ab;  */

void FUN_10318938c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = uVar6;
  (**(code **)(*(long *)(unaff_x22 + 0xb8) + 0x30))(uVar6,1,*(undefined8 *)(unaff_x22 + 0xb0));
  if ((int)uVar5 == 1) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 200);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xd8));
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar6);
    func_0x000107c615c0(uVar3);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar4);
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar8);
    func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103189460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_103190aa8(uVar6,*(undefined8 *)(unaff_x22 + 200),FUN_10318ef6c);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1031894ac,uVar5,0);
  return;
}



/* Entry: 1031894ac; end: 103189883;  */

void FUN_1031894ac(void)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 *puVar17;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x00010318fe00(*(undefined8 *)(unaff_x22 + 200),uVar8,FUN_10318ef6c);
  func_0x000107c614c4(uVar8,uVar13);
  iVar4 = (int)uVar8;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      lVar6 = *(long *)(unaff_x22 + 0x50) + *(long *)(unaff_x22 + 0xf8);
      uVar8 = **(undefined8 **)(unaff_x22 + 0xc0);
      *(undefined8 *)(lVar6 + 8) = (*(undefined8 **)(unaff_x22 + 0xc0))[1];
      func_0x000107c61604(lVar6,uVar8);
      func_0x000107c615e8(uVar8);
    }
    else if (iVar4 == 1) {
      puVar17 = *(undefined8 **)(unaff_x22 + 0xc0);
      lVar12 = *(long *)(unaff_x22 + 0x60);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar8 = *puVar17;
      uVar1 = puVar17[1];
      lVar6 = 0x112f47aa0;
      func_0x0001000285a8(0x112f47aa0,&UNK_10db949a0);
      (**(code **)(lVar12 + 0x20))(uVar13,(long)puVar17 + (long)*(int *)(lVar6 + 0x30),uVar15);
      FUN_10318a2f4(uVar8,uVar1,uVar13);
      func_0x00010318f248(uVar8,uVar1);
      (**(code **)(lVar12 + 8))(uVar13,uVar15);
    }
    else {
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar6 = *(long *)(unaff_x22 + 0x90);
      FUN_103190e08(*(long *)(unaff_x22 + 0x50) + *(long *)(unaff_x22 + 0xf0),uVar13,0x112f47b50,
                    &UNK_10db94a10);
      pcVar16 = *(code **)(lVar6 + 0x30);
      (*pcVar16)(uVar13,1,uVar8);
      lVar6 = *(long *)(unaff_x22 + 0xa8);
      if ((int)uVar13 == 0) {
        plVar5 = (long *)(lVar6 + *(int *)(*(long *)(unaff_x22 + 0x88) + 0x24));
        lVar14 = *plVar5;
        lVar2 = plVar5[1];
        cVar3 = (char)plVar5[2];
        FUN_10318f128(lVar14,lVar2,cVar3);
        lVar12 = 0x112f47b50;
        func_0x000103190e50(lVar6,0x112f47b50,&UNK_10db94a10);
        if (cVar3 == '\0') {
          func_0x00010318f22c(lVar14,lVar2,0);
        }
        else {
          if (cVar3 == '\x01') {
            lVar6 = *(long *)(unaff_x22 + 0xf0);
            uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
            lVar12 = *(long *)(unaff_x22 + 0x50);
            func_0x00010318f22c(lVar14,lVar2,1);
            puVar7 = PTR_PTR_1126ba4f0;
            func_0x000107c610f8(PTR_PTR_1126ba4f0);
            func_0x000107c453e4();
            uVar8 = 0xd00000000000001b;
            func_0x000107c5fadc(0xd00000000000001b,0x800000010f12b860);
            func_0x000108461150(puVar7,uVar8,1);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(puVar7);
            FUN_103190e08(lVar12 + lVar6,uVar13,0x112f47b50,&UNK_10db94a10);
            (*pcVar16)(uVar13,1,uVar15);
            uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
            if ((int)uVar13 == 0) {
              lVar14 = *(long *)(unaff_x22 + 0x98);
              uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
              lVar6 = *(long *)(unaff_x22 + 0x88);
              uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
              lVar12 = *(long *)(unaff_x22 + 0x78);
              func_0x00010318fe00(uVar8,lVar14,FUN_10318efd8);
              func_0x000103190e50(uVar8,0x112f47b50,&UNK_10db94a10);
              (**(code **)(lVar12 + 0x10))(uVar13,lVar14 + *(int *)(lVar6 + 0x1c),uVar15);
              func_0x00010318fdc4(lVar14,FUN_10318efd8);
              func_0x000107c5fd2c(uVar15);
              (**(code **)(lVar12 + 8))(uVar13,uVar15);
            }
            else {
              func_0x000103190e50(uVar8,0x112f47b50,&UNK_10db94a10);
            }
            goto LAB_103189658;
          }
          if (lVar2 != 0 || lVar14 != 0) {
            uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
            pcVar9 = (code *)(unaff_x22 + 0x10);
            FUN_1031890d0();
            lVar6 = lVar12;
            (*pcVar16)(lVar12,1,uVar8);
            if ((int)lVar6 == 0) {
              *(undefined1 *)(lVar12 + *(int *)(*(long *)(unaff_x22 + 0x88) + 0x28)) = 1;
            }
            (*pcVar9)(unaff_x22 + 0x10,0);
          }
        }
      }
      else {
        func_0x000103190e50(lVar6,0x112f47b50,&UNK_10db94a10);
LAB_103189658:
        func_0x00010318adac();
      }
    }
  }
  else {
    if (iVar4 - 3U < 2) {
      plVar5 = (long *)0x170;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x108) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = 0x1031898e8;
      lVar12 = *(long *)(unaff_x22 + 0x50);
      plVar5[0x17] = lVar12;
      lVar6 = 0x112f479e0;
      func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
      plVar5[0x18] = lVar6;
      lVar6 = *(long *)(lVar6 + -8);
      plVar5[0x19] = lVar6;
      uVar10 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x1a] = uVar10;
      lVar6 = 0x112f47b88;
      func_0x0001000285a8(0x112f47b88,&UNK_10db94a88);
      uVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x1b] = uVar10;
      lVar6 = 0;
      FUN_10318efd8();
      plVar5[0x1c] = lVar6;
      lVar6 = *(long *)(lVar6 + -8);
      plVar5[0x1d] = lVar6;
      uVar10 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x1e] = uVar10;
      lVar6 = 0;
      func_0x000107c5eec8();
      plVar5[0x1f] = lVar6;
      lVar6 = *(long *)(lVar6 + -8);
      plVar5[0x20] = lVar6;
      uVar10 = *(long *)(lVar6 + 0x40) + 0xf;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x21] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x22] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x23] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x24] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x25] = uVar11;
      uVar10 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x26] = uVar10;
      lVar6 = 0x112f47b50;
      func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
      uVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x27] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x28] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x29] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x2a] = uVar11;
      uVar11 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x2b] = uVar11;
      uVar10 = uVar10 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar5[0x2c] = uVar10;
      pcVar16 = FUN_103189abc;
      goto LAB_107c615e0;
    }
    func_0x00010318a830();
  }
  pcVar16 = FUN_103189884;
  lVar12 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar16,lVar12,0);
  return;
}



/* Entry: 103189884; end: 10318992f;  */

void FUN_103189884(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10318fdc4(*(undefined8 *)(unaff_x22 + 200),FUN_10318ef6c);
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103189344;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar1,*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  return;
}



/* Entry: 103189930; end: 103189abb;  */

void FUN_103189930(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = unaff_x20;
  lVar3 = 0x112f479e0;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  *(long *)(unaff_x22 + 0xc0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 200) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd0) = uVar1;
  lVar3 = 0x112f47b88;
  func_0x0001000285a8(0x112f47b88,&UNK_10db94a88);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
  lVar3 = 0;
  FUN_10318efd8();
  *(long *)(unaff_x22 + 0xe0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  lVar3 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x110) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x130) = uVar1;
  lVar3 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x138) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x148) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x150) = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x160) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103189abc);
  return;
}



/* Entry: 103189abc; end: 10318a2f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103189abc(void)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  char cVar15;
  undefined1 uVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long unaff_x22;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  code *pcVar30;
  
  lVar25 = _DAT_112f477f0;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar17 = *(long *)(unaff_x22 + 0xe8);
  lVar28 = *(long *)(unaff_x22 + 0xb8);
  func_0x000107c61428(lVar28 + _DAT_112f477f0,unaff_x22 + 0x90,0,0);
  FUN_103190e08(lVar28 + lVar25,uVar23,0x112f47b50,&UNK_10db94a10);
  pcVar30 = *(code **)(lVar17 + 0x30);
  (*pcVar30)(uVar23,1,uVar24);
  lVar17 = *(long *)(unaff_x22 + 0x160);
  if ((int)uVar23 == 0) {
    lVar26 = *(long *)(unaff_x22 + 0xe0);
    plVar1 = (long *)(lVar17 + *(int *)(lVar26 + 0x24));
    lVar7 = *plVar1;
    lVar14 = plVar1[1];
    cVar15 = (char)plVar1[2];
    FUN_10318f128(lVar7,lVar14,cVar15);
    lVar20 = 0x112f47b50;
    func_0x000103190e50(lVar17,0x112f47b50,&UNK_10db94a10);
    if (cVar15 == '\0') {
      uVar24 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
      FUN_103190e08(lVar28 + lVar25,uVar24,0x112f47b50,&UNK_10db94a10);
      (*pcVar30)(uVar24,1,uVar23);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x148);
      if ((int)uVar24 == 0) {
        lVar17 = *(long *)(unaff_x22 + 0x118);
        uVar18 = *(ulong *)(unaff_x22 + 0x120);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
        lVar25 = *(long *)(unaff_x22 + 0x100);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
        func_0x00010318fe00(uVar23,uVar27,FUN_10318efd8);
        func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
        (**(code **)(lVar25 + 0x10))(lVar17,uVar27,uVar24);
        func_0x00010318fdc4(uVar27,FUN_10318efd8);
        (**(code **)(lVar25 + 0x20))(uVar18,lVar17,uVar24);
        FUN_10318db48();
        if ((uVar18 & 1) != 0) {
          uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
          pcVar19 = (code *)(unaff_x22 + 0x50);
          FUN_1031890d0();
          lVar25 = lVar17;
          (*pcVar30)(lVar17,1,uVar24);
          if ((int)lVar25 == 0) {
            puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar26 + 0x24));
            uVar24 = *puVar2;
            uVar23 = puVar2[1];
            puVar2[1] = 0;
            *puVar2 = 1;
            uVar16 = *(undefined1 *)(puVar2 + 2);
            *(undefined1 *)(puVar2 + 2) = 2;
            FUN_10318f22c(uVar24,uVar23,uVar16);
          }
          (*pcVar19)(unaff_x22 + 0x50,0);
        }
        (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0xf8));
      }
      else {
        func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
      }
      func_0x000107c5bdf4(lVar7);
      FUN_10318f22c(lVar7,lVar14,0);
      goto LAB_103189b58;
    }
    if (cVar15 != '\x01') {
      if (lVar14 != 0 || lVar7 != 0) {
        uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
        pcVar19 = (code *)(unaff_x22 + 0x10);
        FUN_1031890d0();
        lVar17 = lVar20;
        (*pcVar30)(lVar20,1,uVar24);
        if ((int)lVar17 == 0) {
          *(undefined1 *)(lVar20 + *(int *)(*(long *)(unaff_x22 + 0xe0) + 0x28)) = 0;
        }
        (*pcVar19)(unaff_x22 + 0x10,0);
        goto LAB_103189b58;
      }
      uVar24 = *(undefined8 *)(unaff_x22 + 0x158);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
      FUN_103190e08(lVar28 + lVar25,uVar24,0x112f47b50,&UNK_10db94a10);
      (*pcVar30)(uVar24,1,uVar23);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
      if ((int)uVar24 == 0) {
        lVar17 = *(long *)(unaff_x22 + 0x128);
        uVar18 = *(ulong *)(unaff_x22 + 0x130);
        uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
        lVar20 = *(long *)(unaff_x22 + 0x100);
        uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
        func_0x00010318fe00(uVar23,uVar27,FUN_10318efd8);
        func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
        (**(code **)(lVar20 + 0x10))(lVar17,uVar27,uVar24);
        func_0x00010318fdc4(uVar27,FUN_10318efd8);
        (**(code **)(lVar20 + 0x20))(uVar18,lVar17,uVar24);
        FUN_10318db48();
        if ((uVar18 & 1) != 0) {
          uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
          pcVar19 = (code *)(unaff_x22 + 0x70);
          FUN_1031890d0();
          lVar20 = lVar17;
          (*pcVar30)(lVar17,1,uVar24);
          if ((int)lVar20 == 0) {
            puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar26 + 0x24));
            uVar24 = *puVar2;
            uVar23 = puVar2[1];
            puVar2[1] = 0;
            *puVar2 = 1;
            uVar16 = *(undefined1 *)(puVar2 + 2);
            *(undefined1 *)(puVar2 + 2) = 2;
            FUN_10318f22c(uVar24,uVar23,uVar16);
          }
          (*pcVar19)(unaff_x22 + 0x70,0);
        }
        (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0xf8));
      }
      else {
        func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
      }
      uVar24 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
      FUN_103190e08(lVar28 + lVar25,uVar24,0x112f47b50,&UNK_10db94a10);
      (*pcVar30)(uVar24,1,uVar23);
      lVar17 = *(long *)(unaff_x22 + 0x150);
      if ((int)uVar24 == 0) {
        lVar25 = *(long *)(unaff_x22 + 0xf0);
        lVar28 = *(long *)(unaff_x22 + 0xe0);
        func_0x00010318fe00(lVar17,lVar25,FUN_10318efd8);
        func_0x000103190e50(lVar17,0x112f47b50,&UNK_10db94a10);
        uVar24 = *(undefined8 *)(lVar25 + *(int *)(lVar28 + 0x14));
        func_0x000107c6157c(uVar24);
        func_0x00010318fdc4(lVar25,FUN_10318efd8);
        func_0x000107c5fd50(uVar24,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
                            PTR___ss5NeverOs5ErrorsWP_11034ee90);
        func_0x000107c61574(uVar24);
        goto LAB_103189b58;
      }
      goto LAB_103189b44;
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_103190e08(lVar28 + lVar25,uVar24,0x112f47b50,&UNK_10db94a10);
    (*pcVar30)(uVar24,1,uVar23);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x140);
    if ((int)uVar24 == 0) {
      lVar17 = *(long *)(unaff_x22 + 0x108);
      uVar18 = *(ulong *)(unaff_x22 + 0x110);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xf8);
      lVar20 = *(long *)(unaff_x22 + 0x100);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xf0);
      func_0x00010318fe00(uVar23,uVar27,FUN_10318efd8);
      func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar20 + 0x10))(lVar17,uVar27,uVar24);
      func_0x00010318fdc4(uVar27,FUN_10318efd8);
      (**(code **)(lVar20 + 0x20))(uVar18,lVar17,uVar24);
      FUN_10318db48();
      if ((uVar18 & 1) != 0) {
        uVar24 = *(undefined8 *)(unaff_x22 + 0xe0);
        pcVar19 = (code *)(unaff_x22 + 0x30);
        FUN_1031890d0();
        lVar20 = lVar17;
        (*pcVar30)(lVar17,1,uVar24);
        if ((int)lVar20 == 0) {
          puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar26 + 0x24));
          uVar24 = *puVar2;
          uVar23 = puVar2[1];
          puVar2[1] = 0;
          *puVar2 = 1;
          uVar16 = *(undefined1 *)(puVar2 + 2);
          *(undefined1 *)(puVar2 + 2) = 2;
          FUN_10318f22c(uVar24,uVar23,uVar16);
        }
        (*pcVar19)(unaff_x22 + 0x30,0);
      }
      (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))
                (*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0xf8));
    }
    else {
      func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
    }
    uVar24 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_103190e08(lVar28 + lVar25,uVar24,0x112f47b50,&UNK_10db94a10);
    (*pcVar30)(uVar24,1,uVar23);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x138);
    bVar3 = (int)uVar24 == 0;
    if (bVar3) {
      lVar28 = *(long *)(unaff_x22 + 0xf0);
      uVar24 = *(undefined8 *)(unaff_x22 + 0xd8);
      lVar25 = *(long *)(unaff_x22 + 0xe0);
      lVar17 = *(long *)(unaff_x22 + 200);
      uVar27 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0xc0);
      func_0x00010318fe00(uVar23,lVar28,FUN_10318efd8);
      func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar17 + 0x10))(uVar27,lVar28 + *(int *)(lVar25 + 0x1c),uVar29);
      func_0x00010318fdc4(lVar28,FUN_10318efd8);
      *(long *)(unaff_x22 + 0xa8) = lVar7;
      *(long *)(unaff_x22 + 0xb0) = lVar14;
      func_0x000107c5fd28(uVar24,unaff_x22 + 0xa8,uVar29);
      (**(code **)(lVar17 + 8))(uVar27,uVar29);
    }
    else {
      FUN_10318f22c(lVar7,lVar14,1);
      func_0x000103190e50(uVar23,0x112f47b50,&UNK_10db94a10);
    }
    lVar17 = *(long *)(unaff_x22 + 0xd8);
    lVar25 = 0x112f47b90;
    func_0x0001000285a8(0x112f47b90,&UNK_10db94a90);
    (**(code **)(*(long *)(lVar25 + -8) + 0x38))(lVar17,!bVar3,1,lVar25);
    uVar24 = 0x112f47b88;
    puVar21 = &UNK_10db94a88;
  }
  else {
LAB_103189b44:
    uVar24 = 0x112f47b50;
    puVar21 = &UNK_10db94a10;
  }
  func_0x000103190e50(lVar17,uVar24,puVar21);
LAB_103189b58:
  uVar24 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar27);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar29);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103189c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318a2f4; end: 10318b2bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318a2f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long alStack_e0 [6];
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_78 [24];
  
  lVar12 = 0x112f479e0;
  alStack_e0[5] = param_1;
  uStack_b0 = param_2;
  uStack_a0 = param_3;
  func_0x0001000285a8(0x112f479e0,&UNK_10db94960);
  lStack_a8 = *(long *)(lVar12 + -8);
  alStack_e0[4] = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar7 = 0;
  alStack_e0[3] = (long)alStack_e0 - extraout_x8;
  FUN_10318efd8();
  lVar17 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar20 = ((long)alStack_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112f47b88;
  func_0x0001000285a8(0x112f47b88,&UNK_10db94a88);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar20 - extraout_x8_01;
  lVar12 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar19 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = _DAT_112f477f0;
  lVar15 = lVar19 - extraout_x12;
  func_0x000107c61428(unaff_x20 + _DAT_112f477f0,auStack_78,0,0);
  FUN_103190e08(unaff_x20 + lVar12,lVar15,0x112f47b50,&UNK_10db94a10);
  pcVar18 = *(code **)(lVar17 + 0x30);
  lVar8 = lVar15;
  (*pcVar18)(lVar15,1,lVar7);
  lVar17 = lStack_a8;
  if ((int)lVar8 == 0) {
    alStack_e0[0] = lVar20;
    alStack_e0[1] = lVar19;
    alStack_e0[2] = lVar16;
    plVar1 = (long *)(lVar15 + *(int *)(lVar7 + 0x24));
    lVar8 = *plVar1;
    lVar16 = plVar1[1];
    cVar4 = (char)plVar1[2];
    FUN_10318f128(lVar8,lVar16,cVar4);
    func_0x000103190e50(lVar15,0x112f47b50,&UNK_10db94a10);
    uVar10 = uStack_a0;
    FUN_10318db48();
    uVar9 = uStack_b0;
    lVar6 = alStack_e0[5];
    lVar20 = alStack_e0[4];
    lVar19 = alStack_e0[3];
    lVar15 = alStack_e0[1];
    if ((uVar10 & 1) == 0) {
      FUN_10318f22c(lVar8,lVar16,cVar4);
      puVar11 = PTR_PTR_1126ba4f0;
      func_0x000107c610f8(PTR_PTR_1126ba4f0);
      func_0x000107c453e4();
      uVar9 = 0x5f64657269746572;
      uVar14 = 0xef6e6f6973736573;
    }
    else {
      if (cVar4 == '\0') {
        FUN_10318f22c(lVar8,lVar16,0);
        puVar11 = PTR_PTR_1126ba4f0;
        func_0x000107c610f8(PTR_PTR_1126ba4f0);
        func_0x000107c453e4();
        lVar12 = -0x2fffffffffffffea;
        func_0x000107c5fadc(0xd000000000000016,0x800000010f12b840);
        lVar17 = lVar12;
        func_0x000108461150(puVar11,lVar12,1);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(lVar12);
        pcVar13 = (code *)&uStack_98;
        FUN_1031890d0();
        lVar12 = lVar17;
        (*pcVar18)(lVar17,1,lVar7);
        if ((int)lVar12 == 0) {
          puVar2 = (undefined8 *)(lVar17 + *(int *)(lVar7 + 0x24));
          uVar9 = *puVar2;
          uVar14 = puVar2[1];
          *puVar2 = alStack_e0[5];
          puVar2[1] = uStack_b0;
          uVar5 = *(undefined1 *)(puVar2 + 2);
          *(undefined1 *)(puVar2 + 2) = 1;
          func_0x00010318f144();
          FUN_10318f22c(uVar9,uVar14,uVar5);
        }
        (*pcVar13)(&uStack_98,0);
        return;
      }
      if (cVar4 == '\x01') {
        FUN_10318f22c(lVar8,lVar16,1);
        puVar11 = PTR_PTR_1126ba4f0;
        func_0x000107c610f8(PTR_PTR_1126ba4f0);
        func_0x000107c453e4();
        uVar9 = 0x665f646e6f636573;
        uVar14 = 0xed00006873696e69;
      }
      else {
        if (lVar16 != 0 || lVar8 != 0) {
          FUN_103190e08(unaff_x20 + lVar12,alStack_e0[1],0x112f47b50,&UNK_10db94a10);
          lVar8 = lVar15;
          (*pcVar18)(lVar15,1,lVar7);
          lVar12 = alStack_e0[0];
          bVar3 = (int)lVar8 == 0;
          if (bVar3) {
            func_0x00010318fe00(lVar15,alStack_e0[0],FUN_10318efd8);
            func_0x000103190e50(lVar15,0x112f47b50,&UNK_10db94a10);
            (**(code **)(lVar17 + 0x10))(lVar19,lVar12 + *(int *)(lVar7 + 0x1c),lVar20);
            func_0x00010318fdc4(lVar12,FUN_10318efd8);
            uStack_98 = lVar6;
            uStack_90 = uVar9;
            func_0x00010318f144(lVar6,uVar9);
            lVar12 = alStack_e0[2];
            func_0x000107c5fd28(alStack_e0[2],&uStack_98,lVar20);
            (**(code **)(lVar17 + 8))(lVar19,lVar20);
          }
          else {
            func_0x000103190e50(lVar15,0x112f47b50,&UNK_10db94a10);
            lVar12 = alStack_e0[2];
          }
          lVar17 = 0x112f47b90;
          func_0x0001000285a8(0x112f47b90,&UNK_10db94a90);
          (**(code **)(*(long *)(lVar17 + -8) + 0x38))(lVar12,!bVar3,1,lVar17);
          func_0x000103190e50(lVar12,0x112f47b88,&UNK_10db94a88);
          return;
        }
        puVar11 = PTR_PTR_1126ba4f0;
        func_0x000107c610f8(PTR_PTR_1126ba4f0);
        func_0x000107c453e4();
        uVar9 = 0x676e696d7261;
        uVar14 = 0xe600000000000000;
      }
    }
  }
  else {
    func_0x000103190e50(lVar15,0x112f47b50,&UNK_10db94a10);
    puVar11 = PTR_PTR_1126ba4f0;
    func_0x000107c610f8(PTR_PTR_1126ba4f0);
    func_0x000107c453e4();
    uVar9 = 0x656c6469;
    uVar14 = 0xe400000000000000;
  }
  func_0x000107c5fadc(uVar9,uVar14);
  func_0x000108460fdc(puVar11,uVar9,1);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar9);
  return;
}



/* Entry: 10318b2bc; end: 10318b3ef;  */

void FUN_10318b2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar1 = 0;
  FUN_10318fe44();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10318b314,0,0);
  return;
}



/* Entry: 10318b3f0; end: 10318b4c3;  */

void FUN_10318b3f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x50);
  FUN_10318db48();
  if ((uVar5 & 1) != 0) {
    pcVar6 = (code *)(unaff_x22 + 0x10);
    FUN_1031890d0();
    lVar7 = 0;
    FUN_10318efd8();
    lVar9 = param_2;
    (**(code **)(*(long *)(lVar7 + -8) + 0x30))(param_2,1,lVar7);
    if ((int)lVar9 == 0) {
      puVar1 = (undefined8 *)(param_2 + *(int *)(lVar7 + 0x24));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      puVar1[1] = 0;
      *puVar1 = 1;
      uVar4 = *(undefined1 *)(puVar1 + 2);
      *(undefined1 *)(puVar1 + 2) = 2;
      FUN_10318f22c(uVar2,uVar3,uVar4);
    }
    (*pcVar6)(unaff_x22 + 0x10,0);
  }
  plVar8 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10318b4c4;
  lVar7 = *(long *)(unaff_x22 + 0x60);
  plVar8[9] = *(long *)(unaff_x22 + 0x58);
  plVar8[10] = lVar7;
  lVar9 = 0;
  func_0x000103182014();
  plVar8[0xb] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  plVar8[0xc] = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0xd] = uVar10;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0xe] = uVar10;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0xf] = uVar10;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x10] = uVar5;
  lVar9 = 0x112f47b60;
  func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
  uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x11] = uVar10;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x12] = uVar10;
  uVar10 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x13] = uVar10;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x14] = uVar5;
  lVar9 = 0;
  FUN_10318fe44();
  plVar8[0x15] = lVar9;
  uVar5 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar8[0x16] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318c2e4,lVar7,0);
  return;
}



/* Entry: 10318b4c4; end: 10318b50f;  */

void FUN_10318b4c4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318b510,uVar1,0);
  return;
}



/* Entry: 10318b510; end: 10318b55f;  */

void FUN_10318b510(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10318d97c(*(undefined8 *)(unaff_x22 + 0x50));
  FUN_10318fdc4(uVar1,FUN_10318fe44);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318b560,0,0);
  return;
}



/* Entry: 10318b560; end: 10318b597;  */

void FUN_10318b560(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010318b594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318b598; end: 10318b6e7;  */

void FUN_10318b598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  long lVar8;
  
  lVar3 = 0;
  FUN_10318ef6c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar2);
  lVar4 = 0x112f477a8;
  func_0x0001000285a8(0x112f477a8,&UNK_10db94820);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112f47aa0;
  func_0x0001000285a8(0x112f47aa0,&UNK_10db949a0);
  iVar1 = *(int *)(lVar5 + 0x30);
  *puVar7 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar2) = param_2;
  lVar5 = 0;
  func_0x000107c5eec8();
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))
            ((undefined1 *)((long)puVar7 + (long)iVar1),param_3,lVar5);
  func_0x000107c6159c(puVar7,lVar3,1);
  func_0x00010318f144(param_1,param_2);
  uVar6 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  func_0x000107c5fd28((long)puVar7 - extraout_x8_00,puVar7,uVar6);
  (**(code **)(lVar8 + 8))((long)puVar7 - extraout_x8_00,lVar4);
  return;
}



/* Entry: 10318b6e8; end: 10318b78f;  */

void FUN_10318b6e8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(long *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = 0;
  func_0x000103182014();
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  lVar2 = 0;
  func_0x00010318203c();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  plVar4 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10318b790;
  plVar4[2] = uVar3;
  plVar4[3] = unaff_x20 + 0xa8;
  lVar2 = 0;
  func_0x000103182028();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[4] = uVar3;
  lVar2 = 0;
  func_0x00010318203c();
  plVar4[5] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[6] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[7] = uVar3;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  plVar4[8] = (long)plVar1;
  *plVar1 = (long)plVar4;
  plVar1[1] = (long)FUN_103180354;
                    /* WARNING: Could not recover jumptable at 0x000103180350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1031839f8();
  return;
}



/* Entry: 10318b790; end: 10318b7db;  */

void FUN_10318b790(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318b7dc,uVar1,0);
  return;
}



/* Entry: 10318b7dc; end: 10318b97b;  */

void FUN_10318b7dc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x22;
  
  puVar11 = *(undefined8 **)(unaff_x22 + 0x48);
  puVar4 = puVar11;
  func_0x000107c614c4(puVar11,*(undefined8 *)(unaff_x22 + 0x40));
  if ((int)puVar4 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar7 = 0x112f474e0;
    func_0x0001000285a8(0x112f474e0,&UNK_10db94a50);
    uVar3 = *(undefined1 *)((long)puVar11 + (long)*(int *)(lVar7 + 0x30));
    FUN_103190aa8(puVar11,uVar5,0x103182014);
    plVar6 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10318b97c;
    lVar9 = *(long *)(unaff_x22 + 0x38);
    lVar2 = *(long *)(unaff_x22 + 0x20);
    lVar7 = *(long *)(unaff_x22 + 0x10);
    plVar6[7] = *(long *)(unaff_x22 + 0x18);
    plVar6[8] = lVar2;
    *(undefined1 *)((long)plVar6 + 0xc4) = uVar3;
    plVar6[5] = lVar7;
    plVar6[6] = lVar9;
    lVar7 = 0;
    func_0x000107c5eec8();
    plVar6[9] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar6[10] = lVar7;
    lVar7 = *(long *)(lVar7 + 0x40);
    plVar6[0xb] = lVar7;
    uVar8 = lVar7 + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar6[0xc] = uVar8;
    lVar7 = 0x112f47b70;
    func_0x0001000285a8(0x112f47b70,&UNK_10db94a38);
    uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar6[0xd] = uVar8;
    lVar7 = 0;
    FUN_10318fe44();
    plVar6[0xe] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar6[0xf] = lVar7;
    uVar8 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar6[0x10] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10318bad4,lVar2,0);
    return;
  }
  if ((int)puVar4 == 1) {
    uVar8 = *(ulong *)(unaff_x22 + 0x18);
    uVar5 = *puVar11;
    uVar10 = puVar11[1];
    FUN_10318db48();
    if ((uVar8 & 1) != 0) {
      puVar11 = *(undefined8 **)(unaff_x22 + 0x10);
      *puVar11 = uVar5;
      puVar11[1] = uVar10;
      uVar5 = 0;
      FUN_10318fe44(0);
      uVar10 = 1;
      goto LAB_10318b948;
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar7 = *(long *)(unaff_x22 + 0x30);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x10);
    func_0x00010318f258(uVar5,uVar10);
    (**(code **)(lVar7 + 0x38))(puVar11,1,1,uVar1);
    uVar5 = 0;
    FUN_10318fe44(0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar7 = *(long *)(unaff_x22 + 0x30);
    uVar8 = *(ulong *)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    FUN_10318db48();
    (**(code **)(lVar7 + 0x38))(uVar10,1,1,uVar5);
    uVar5 = 0;
    FUN_10318fe44(0);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x10);
    if ((uVar8 & 1) != 0) {
      uVar10 = 0;
      goto LAB_10318b948;
    }
  }
  uVar10 = 3;
LAB_10318b948:
  func_0x000107c6159c(puVar11,uVar5,uVar10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010318b978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318b97c; end: 10318bad3;  */

void FUN_10318b97c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x20);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10318b9c8,uVar1,0);
  return;
}



/* Entry: 10318bad4; end: 10318bc63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318bad4(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x00010318e004(uVar5,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  (**(code **)(lVar6 + 0x30))(uVar5,1,uVar4);
  if ((int)uVar5 == 1) {
    lVar6 = *(long *)(unaff_x22 + 0x40);
    cVar1 = *(char *)(unaff_x22 + 0xc4);
    func_0x000103190e50(*(undefined8 *)(unaff_x22 + 0x68),0x112f47b70,&UNK_10db94a38);
    uVar4 = 0xf;
    if (cVar1 != '\0') {
      uVar4 = 0x10;
    }
    uVar2 = 0;
    uVar5 = uVar4;
    func_0x00010319236c(0,uVar4);
    puVar3 = PTR_PTR_1126ba4f0;
    func_0x000107c610f8(PTR_PTR_1126ba4f0);
    func_0x000107c453e4();
    func_0x000107c5fadc(uVar2,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000108460c38(puVar3,uVar2,1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    FUN_1031909f8(0,uVar4,0);
    lVar6 = lVar6 + _DAT_112f477f8;
    func_0x000107c61618();
    *(long *)(unaff_x22 + 0x88) = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10318bc64,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_103190aa8(*(undefined8 *)(unaff_x22 + 0x68),uVar5,FUN_10318fe44);
  FUN_103190aa8(uVar5,uVar4,FUN_10318fe44);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010318bc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318bc64; end: 10318bcef;  */

void FUN_10318bc64(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10318fe88(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318bcf0,uVar2,uVar3);
  return;
}



/* Entry: 10318bcf0; end: 10318bd37;  */

void FUN_10318bcf0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  if (lVar1 != 0) {
    FUN_103188800();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318bd38,*(undefined8 *)(unaff_x22 + 0x40),0);
  return;
}



/* Entry: 10318bd38; end: 10318be3b;  */

void FUN_10318bd38(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  ulong uVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(lVar2 + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0x38),uVar5);
  uVar7 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar9 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  puVar4 = &UNK_110618300;
  func_0x000107c613fc(&UNK_110618300,uVar9 + lVar8,uVar7 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar3;
  (**(code **)(lVar2 + 0x20))(puVar4 + uVar9,uVar1,uVar5);
  func_0x000107c6157c(uVar3);
  uVar5 = 0x10;
  func_0x0001001ca524(0x10,0,0x28,3,0,0,&UNK_10db94a48,puVar4,&UNK_1106189e8);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  func_0x000107c61574(puVar4);
  plVar6 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10318be3c;
  lVar2 = *(long *)(unaff_x22 + 0x40);
  plVar6[7] = *(long *)(unaff_x22 + 0x38);
  plVar6[8] = lVar2;
  lVar8 = 0x112f47b58;
  func_0x0001000285a8(0x112f47b58,&UNK_10db94a18);
  plVar6[9] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar6[10] = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xb] = uVar7;
  lVar8 = 0;
  FUN_10318efd8();
  plVar6[0xc] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar6[0xd] = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xe] = uVar7;
  lVar8 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar7 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0xf] = uVar7;
  lVar8 = 0x112f479d8;
  func_0x0001000285a8(0x112f479d8,&UNK_10db94958);
  plVar6[0x10] = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  plVar6[0x11] = lVar8;
  uVar7 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar9 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x12] = uVar9;
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x13] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318e524,lVar2,0);
  return;
}



/* Entry: 10318be3c; end: 10318be8f;  */

void FUN_10318be3c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0xa8) = param_1;
  *(undefined8 *)(lVar1 + 0xb0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318be90,uVar2,0);
  return;
}



/* Entry: 10318be90; end: 10318c023;  */

void FUN_10318be90(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x38);
  func_0x000107c5fd50(*(undefined8 *)(unaff_x22 + 0x98),&UNK_1106189e8,PTR___ss5NeverON_11034ee88,
                      PTR___ss5NeverOs5ErrorsWP_11034ee90);
  FUN_10318db48();
  if ((uVar5 & 1) != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar7 = 0x112f47b68;
    func_0x0001000285a8(0x112f47b68,&UNK_10db94a28);
    iVar4 = *(int *)(lVar7 + 0x30);
    *(undefined4 *)(unaff_x22 + 0xc0) = *(undefined4 *)(lVar7 + 0x40);
    *puVar2 = uVar1;
    puVar2[1] = uVar3;
    func_0x00010318fe00(uVar8,(long)puVar2 + (long)iVar4,0x103182014);
    plVar6 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10318c024;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)
              (plVar6,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x98),&UNK_1106189e8);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x00010318f248(*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_103192458(1,0,2);
  func_0x000107c615e8(uVar8);
  func_0x000107c61574(uVar9);
  func_0x00010318fe00(uVar3,uVar1,0x103182014);
  lVar7 = 0;
  func_0x000103182014();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar1,0,1,lVar7);
  func_0x000107c6159c(uVar1,uVar10,3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010318c020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318c024; end: 10318c06f;  */

void FUN_10318c024(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318c070,uVar1,0);
  return;
}



/* Entry: 10318c070; end: 10318c117;  */

void FUN_10318c070(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  double dVar5;
  
  iVar1 = *(int *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61574(uVar3);
  dVar5 = *(double *)(unaff_x22 + 0x18);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x20));
  *(bool *)(lVar4 + iVar1) = dVar5 <= 0.3;
  func_0x000107c6159c(lVar4,uVar2,4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010318c114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318c118; end: 10318c16f;  */

void FUN_10318c118(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10318c170;
  plVar1[0xb] = param_3;
  plVar1[0xc] = param_2;
  lVar2 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0xd] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318e858,param_2,0);
  return;
}



/* Entry: 10318c170; end: 10318c1c7;  */

void FUN_10318c170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318c1c8,uVar1,0);
  return;
}



/* Entry: 10318c1c8; end: 10318c1eb;  */

void FUN_10318c1c8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar2[1] = uVar3;
  puVar2[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010318c1e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318c1ec; end: 10318c2e3;  */

void FUN_10318c1ec(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  lVar1 = 0;
  func_0x000103182014();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  lVar1 = 0x112f47b60;
  func_0x0001000285a8(0x112f47b60,&UNK_10db94a20);
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  lVar1 = 0;
  FUN_10318fe44();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318c2e4);
  return;
}



/* Entry: 10318c2e4; end: 10318c94b;  */

/* WARNING: Removing unreachable block (ram,0x00010318c874) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_10318c2e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  undefined8 uVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long extraout_x8;
  long extraout_x12;
  ulong uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  long *plVar24;
  undefined *puVar25;
  long lVar26;
  undefined1 uVar27;
  double unaff_x21;
  ulong uVar28;
  long unaff_x22;
  long lVar29;
  ulong uVar30;
  double dVar31;
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [48];
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  long lStack_1a0;
  undefined8 *puStack_198;
  ulong *puStack_190;
  code *pcStack_188;
  long lStack_178;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  ulong auStack_130 [3];
  undefined8 uStack_118;
  ulong uStack_110;
  code *pcStack_108;
  long lStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  ulong *puStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long *plStack_98;
  ulong uStack_90;
  code *pcStack_88;
  ulong uStack_80;
  code *pcStack_78;
  undefined8 *puStack_70;
  long lStack_68;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x00010318fe00(*(undefined8 *)(unaff_x22 + 0x48),uVar8,FUN_10318fe44);
  func_0x000107c614c4(uVar8,uVar13);
  puVar9 = *(ulong **)(unaff_x22 + 0xb0);
  iVar14 = (int)uVar8;
  if (iVar14 < 2) {
    if (iVar14 == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar16 = *(long *)(unaff_x22 + 0x60);
      FUN_1031909a8(puVar9,uVar2);
      FUN_103190e08(uVar2,uVar13,0x112f47b60,&UNK_10db94a20);
      (**(code **)(lVar16 + 0x30))(uVar13,1,uVar8);
      if ((int)uVar13 != 1) {
        lVar26 = *(long *)(unaff_x22 + 0x50);
        FUN_103190aa8(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0x80),
                      0x103182014);
        plVar11 = (long *)0x70;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xb8) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_10318c94c;
        lVar16 = *(long *)(unaff_x22 + 0x80);
        goto FUN_103181b40;
      }
      func_0x000103190e50(*(undefined8 *)(unaff_x22 + 0x98),0x112f47b60,&UNK_10db94a20);
      lVar16 = *(long *)(unaff_x22 + 0x50);
      puVar10 = PTR_PTR_1126ba4f0;
      func_0x000107c610f8(PTR_PTR_1126ba4f0);
      func_0x000107c453e4();
      uVar13 = 0x656c6c65636e6163;
      func_0x000107c5fadc(0x656c6c65636e6163,0xe900000000000064);
      func_0x000108460c38(puVar10,uVar13,1);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(puVar10);
      lVar16 = lVar16 + _DAT_112f477f8;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0xc0) = lVar16;
      UNRECOVERED_JUMPTABLE = FUN_10318ca50;
    }
    else {
      lVar16 = *(long *)(unaff_x22 + 0x50);
      uVar20 = *puVar9;
      *(ulong *)(unaff_x22 + 0xd0) = uVar20;
      uVar28 = puVar9[1];
      *(ulong *)(unaff_x22 + 0xd8) = uVar28;
      uStack_80 = 0x5f64656c696166;
      pcStack_78 = (code *)0xe700000000000000;
      uVar19 = uVar20;
      uVar30 = uVar28;
      func_0x0001031929a4(uVar20,uVar28);
      func_0x00010318f154(uVar20,uVar28);
      func_0x000107c5fb78(uVar19,uVar30);
      func_0x000107c6142c(uVar30);
      UNRECOVERED_JUMPTABLE = pcStack_78;
      uVar19 = uStack_80;
      puVar10 = PTR_PTR_1126ba4f0;
      func_0x000107c610f8(PTR_PTR_1126ba4f0);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar19,UNRECOVERED_JUMPTABLE);
      func_0x000107c6142c(UNRECOVERED_JUMPTABLE);
      func_0x000108460c38(puVar10,uVar19,1);
      func_0x00010318f258(uVar20,uVar28);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(puVar10);
      lVar16 = lVar16 + _DAT_112f477f8;
      func_0x000107c61618();
      *(long *)(unaff_x22 + 0xe0) = lVar16;
      UNRECOVERED_JUMPTABLE = FUN_10318ccf4;
    }
    lVar16 = 0;
    uVar13 = 0;
    goto LAB_107c615e0;
  }
  if (iVar14 == 2) {
    lVar26 = *(long *)(unaff_x22 + 0x50);
    FUN_103190aa8(puVar9,*(undefined8 *)(unaff_x22 + 0x78),0x103182014);
    plVar11 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xf0) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_10318ce78;
    lVar16 = *(long *)(unaff_x22 + 0x78);
  }
  else {
    if (iVar14 != 3) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar19 = *puVar9;
      UNRECOVERED_JUMPTABLE = (code *)puVar9[1];
      lVar16 = 0x112f47b68;
      func_0x0001000285a8(0x112f47b68,&UNK_10db94a28);
      uVar30 = (ulong)*(byte *)((long)puVar9 + (long)*(int *)(lVar16 + 0x40));
      FUN_103190aa8((long)puVar9 + (long)*(int *)(lVar16 + 0x30),uVar13,0x103182014);
      if (UNRECOVERED_JUMPTABLE == (code *)0xf) {
        lVar26 = *(long *)(unaff_x22 + 0x68);
        iVar14 = *(int *)(*(long *)(unaff_x22 + 0x58) + 0x14);
        puVar10 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
        func_0x000107c610f8(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
        puVar25 = puVar10;
        func_0x000107c5ed90();
        func_0x000107c48fd4(puVar10);
        func_0x000107c61170(puVar25);
        func_0x000107c42378(&uStack_80,puVar10);
        *(ulong *)(unaff_x22 + 0x138) = uStack_80;
        *(code **)(unaff_x22 + 0x140) = pcStack_78;
        *(undefined8 **)(unaff_x22 + 0x148) = puStack_70;
        UNRECOVERED_JUMPTABLE = pcStack_78;
        func_0x000107c60a3c(unaff_x22 + 0x138);
        if ((((ulong)UNRECOVERED_JUMPTABLE ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
          func_0x000107c61170(puVar10);
          lVar26 = 0;
          lVar15 = -0x1000000000000000;
          uVar27 = 1;
          UNRECOVERED_JUMPTABLE = (code *)0xc;
          uVar30 = 0;
        }
        else {
          lVar16 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x70);
          dVar31 = (double)UNRECOVERED_JUMPTABLE;
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar16 == 0) {
            if (0.3 <= (double)UNRECOVERED_JUMPTABLE) goto LAB_10318c860;
          }
          else {
            func_0x000107c4223c();
            func_0x000107c61170(lVar16);
            if (dVar31 <= (double)UNRECOVERED_JUMPTABLE) {
LAB_10318c860:
              lVar26 = lVar26 + iVar14;
              lVar15 = 0;
              uVar27 = 0;
              func_0x000107c5ede8();
              func_0x000107c61170(puVar10);
              goto LAB_10318c8c4;
            }
          }
          func_0x000107c61170(puVar10);
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          lVar26 = 0;
          lVar15 = -0x1000000000000000;
          uVar27 = 2;
          uVar30 = 0;
        }
      }
      else {
        lVar26 = 0;
        lVar15 = -0x1000000000000000;
        uVar27 = 1;
        uVar30 = uVar19;
      }
LAB_10318c8c4:
      *(long *)(unaff_x22 + 0x120) = lVar26;
      *(long *)(unaff_x22 + 0x128) = lVar15;
      *(undefined1 *)(unaff_x22 + 0x150) = uVar27;
      *(ulong *)(unaff_x22 + 0x110) = uVar30;
      *(code **)(unaff_x22 + 0x118) = UNRECOVERED_JUMPTABLE;
      plVar11 = (long *)0xc0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x130) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10318d310;
      lVar17 = *(long *)(unaff_x22 + 0x68);
      lVar16 = *(long *)(unaff_x22 + 0x50);
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      plVar11[0xf] = lVar15;
      plVar11[0x10] = lVar16;
      *(undefined1 *)(plVar11 + 0x16) = uVar27;
      plVar11[0xd] = (long)UNRECOVERED_JUMPTABLE;
      plVar11[0xe] = lVar26;
      plVar11[0xb] = lVar17;
      plVar11[0xc] = uVar30;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) {
        func_0x000107c60e78();
        lVar26 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar16 = plVar11[0x10];
        puVar21 = (undefined8 *)plVar11[0xb];
        FUN_103192458(plVar11[0xc],plVar11[0xd],(char)plVar11[0x16]);
        func_0x000107c53fcc(*puVar21);
        lVar16 = lVar16 + _DAT_112f477f8;
        func_0x000107c61618();
        plVar11[0x11] = lVar16;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar26) {
          UNRECOVERED_JUMPTABLE = FUN_10318d53c;
          lVar16 = 0;
          uVar13 = 0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_80 = *(ulong *)PTR____stack_chk_guard_11034bdc0;
        lVar26 = 0;
        pcStack_78 = (code *)unaff_x21;
        puStack_70 = puVar21;
        lStack_68 = (long)plVar11;
        func_0x000107c5fcec();
        puVar10 = PTR___sScMMa_11034fc70;
        lVar16 = lVar26;
        func_0x000107c5fce8();
        plVar11[0x12] = lVar16;
        uVar13 = 0x112d45220;
        FUN_10318fe88(0x112d45220,puVar10,PTR___sScMScAsMc_11034fc78);
        lVar16 = lVar26;
        func_0x000107c5fca8(lVar26,uVar13);
        if (*(ulong *)PTR____stack_chk_guard_11034bdc0 == uStack_80) {
          UNRECOVERED_JUMPTABLE = FUN_10318d5f4;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_90 = (ulong)&stack0xffffffffffffffa0 | 0x1000000000000000;
        pcStack_88 = FUN_10318d5f4;
        lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar16 = plVar11[0x11];
        plStack_98 = plVar11;
        func_0x000107c61574(plVar11[0x12]);
        if (lVar16 != 0) {
          lVar16 = plVar11[0xd];
          if ((char)plVar11[0x16] != '\0') {
            lVar16 = 0;
          }
          FUN_103188884(lVar16,plVar11[0xe],plVar11[0xf]);
        }
        lVar16 = plVar11[0x10];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
          UNRECOVERED_JUMPTABLE = FUN_10318d680;
          uVar13 = 0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_b0 = (ulong)&uStack_90 | 0x1000000000000000;
        pcStack_a8 = FUN_10318d680;
        puStack_c8 = *(undefined **)PTR____stack_chk_guard_11034bdc0;
        lVar17 = plVar11[0x10];
        lVar15 = plVar11[0xb];
        lVar16 = 0;
        puStack_c0 = (ulong *)lVar26;
        pcStack_b8 = (code *)plVar11;
        func_0x000103182014();
        plVar11[0x13] = lVar16;
        plVar11[0x14] = *(long *)(lVar15 + *(int *)(lVar16 + 0x18));
        plVar11[0x15] = *(long *)(lVar17 + 0xa0);
        if ((undefined *)*(long *)PTR____stack_chk_guard_11034bdc0 == puStack_c8) {
          UNRECOVERED_JUMPTABLE = FUN_10318d710;
          lVar16 = 0;
          uVar13 = 0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_e0 = (ulong)&uStack_b0 | 0x1000000000000000;
        pcStack_d8 = FUN_10318d710;
        lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar26 = plVar11[0x14];
        plVar11[2] = (long)plVar11;
        plVar11[3] = (long)FUN_10318d794;
        lStack_f0 = lVar15;
        plStack_e8 = plVar11;
        func_0x000107c61448(plVar11 + 2,0);
        FUN_103183860();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
          func_0x000107c60e78();
          uStack_110 = (ulong)&uStack_e0 | 0x1000000000000000;
          pcStack_108 = FUN_10318d794;
          auStack_130[2] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
          uStack_118 = *plVar11;
          lVar15 = *plVar11;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_130[2]) {
            UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
            lVar16 = 0;
            uVar13 = 0;
          }
          else {
            func_0x000107c60e78();
            auStack_130[0] = (ulong)&uStack_110 | 0x1000000000000000;
            auStack_130[1] = 0x10318d800;
            lStack_140 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar16 = *(long *)(lVar15 + 0x80);
            lStack_138 = lVar15;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_140) {
              func_0x000107c60e78();
              uStack_150 = (ulong)auStack_130 | 0x1000000000000000;
              puStack_168 = puVar10;
              pcStack_148 = FUN_10318d860;
              lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar16 = *(long *)(lVar15 + 0x98);
              puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              lStack_160 = lVar26;
              lStack_158 = lVar15;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar25 = puVar10;
              func_0x000107c5ed90((long)*(int *)(lVar16 + 0x14));
              puVar21 = (undefined8 *)(lVar15 + 0x50);
              *puVar21 = 0;
              puVar12 = puVar10;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar25);
              func_0x000107c61170(puVar10);
              puVar22 = (undefined8 *)*puVar21;
              lVar16 = *(long *)(lVar15 + 0x88);
              if ((int)puVar12 == 0) {
                puVar21 = puVar22;
                func_0x000107c61174(puVar22);
                func_0x000107c5ed30();
                func_0x000107c61170(puVar21);
                func_0x000107c61654();
                func_0x000107c615e8(lVar16);
                func_0x000107c614ac(puVar22);
                puVar21 = puVar22;
              }
              else {
                func_0x000107c61174(puVar22);
                func_0x000107c615e8(lVar16);
              }
              UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
                func_0x000107c60e78();
                pcStack_188 = FUN_10318d97c;
                lVar26 = 0x112f47b50;
                puStack_1b8 = puVar12;
                lStack_1b0 = lVar15;
                puStack_1a8 = puVar21;
                lStack_1a0 = lVar16;
                puStack_198 = puVar22;
                puStack_190 = &uStack_150;
                func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
                (*(code *)PTR____chkstk_darwin_11034bd40)
                          (*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
                puVar23 = auStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
                (*(code *)PTR____chkstk_darwin_11034bd40)();
                lVar15 = (long)puVar23 - extraout_x12;
                FUN_10318db48();
                lVar26 = _DAT_112f477f0;
                if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
                  func_0x000107c61428(lVar16 + _DAT_112f477f0,auStack_1e8,0,0);
                  FUN_103190e08(lVar16 + lVar26,lVar15,0x112f47b50,&UNK_10db94a10);
                  lVar18 = 0;
                  FUN_10318efd8();
                  lVar29 = *(long *)(lVar18 + -8);
                  lVar17 = lVar15;
                  (**(code **)(lVar29 + 0x30))(lVar15,1,lVar18);
                  if ((int)lVar17 == 0) {
                    cVar7 = *(char *)(lVar15 + *(int *)(lVar18 + 0x28));
                    func_0x000103190e50(lVar15,0x112f47b50,&UNK_10db94a10);
                    (**(code **)(lVar29 + 0x38))(puVar23,1,1,lVar18);
                    func_0x000107c61428(lVar16 + lVar26,auStack_200,0x21,0);
                    func_0x00010318fec8(puVar23,lVar16 + lVar26);
                    UNRECOVERED_JUMPTABLE = (code *)auStack_200;
                    func_0x000107c614a8(UNRECOVERED_JUMPTABLE);
                    if (cVar7 == '\x01') {
                      func_0x00010318adac();
                    }
                  }
                  else {
                    func_0x000103190e50(lVar15,0x112f47b50,&UNK_10db94a10);
                    (**(code **)(lVar29 + 0x38))(puVar23,1,1,lVar18);
                    func_0x000107c61428(lVar16 + lVar26,auStack_200,0x21,0);
                    func_0x00010318fec8(puVar23,lVar16 + lVar26);
                    UNRECOVERED_JUMPTABLE = (code *)auStack_200;
                    func_0x000107c614a8(UNRECOVERED_JUMPTABLE);
                  }
                }
                return UNRECOVERED_JUMPTABLE;
              }
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return UNRECOVERED_JUMPTABLE;
            }
            UNRECOVERED_JUMPTABLE = FUN_10318d860;
            uVar13 = 0;
          }
          goto LAB_107c615e0;
        }
        goto LAB_107c61444;
      }
      UNRECOVERED_JUMPTABLE = FUN_10318d4a0;
      uVar13 = 0;
      goto LAB_107c615e0;
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar16 = *(long *)(unaff_x22 + 0x60);
    FUN_1031909a8(puVar9,uVar2);
    FUN_103190e08(uVar2,uVar13,0x112f47b60,&UNK_10db94a20);
    (**(code **)(lVar16 + 0x30))(uVar13,1,uVar8);
    if ((int)uVar13 == 1) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x000103190e50(*(undefined8 *)(unaff_x22 + 0x90),0x112f47b60,&UNK_10db94a20);
      func_0x000103190e50(uVar13,0x112f47b60,&UNK_10db94a20);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
      func_0x000107c615c0(uVar3);
      func_0x000107c615c0(uVar13);
      func_0x000107c615c0(uVar4);
      func_0x000107c615c0(uVar8);
      func_0x000107c615c0(uVar5);
      func_0x000107c615c0(uVar2);
      func_0x000107c615c0(uVar6);
      func_0x000107c615c0(uVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010318c444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    lVar26 = *(long *)(unaff_x22 + 0x50);
    FUN_103190aa8(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x70),0x103182014);
    plVar11 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x108) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_10318d200;
    lVar16 = *(long *)(unaff_x22 + 0x70);
  }
FUN_103181b40:
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11[0xb] = lVar16;
  plVar11[0xc] = lVar26 + 0xa8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    UNRECOVERED_JUMPTABLE = FUN_103181ba4;
    lVar16 = 0;
    uVar13 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar21 = (undefined8 *)plVar11[0xb];
    lVar16 = plVar11[0xc];
    uVar13 = *puVar21;
    func_0x000107c53fcc(uVar13);
    func_0x000107c5bdf4(uVar13);
    lVar26 = 0;
    func_0x000103182014();
    plVar11[0xd] = lVar26;
    plVar24 = *(long **)((long)puVar21 + (long)*(int *)(lVar26 + 0x18));
    uVar19 = *(ulong *)(lVar16 + 0x28);
    plVar11[2] = (long)plVar11;
    plVar11[3] = (long)FUN_103181c58;
    func_0x000107c61448(plVar11 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
LAB_107c61444:
      UNRECOVERED_JUMPTABLE = (code *)(plVar11 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    }
    func_0x000107c60e78();
    puStack_70 = *(undefined8 **)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar11;
    lVar16 = *plVar11;
    if (*(undefined8 **)PTR____stack_chk_guard_11034bdc0 != puStack_70) {
      func_0x000107c60e78();
      uStack_80 = (ulong)&stack0xffffffffffffffa0 | 0x1000000000000000;
      pcStack_78 = FUN_103181cc4;
      pcStack_a8 = *(code **)PTR____stack_chk_guard_11034bdc0;
      lVar26 = *(long *)(lVar16 + 0x68);
      puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      plStack_98 = puVar21;
      uStack_90 = uVar19;
      pcStack_88 = (code *)lVar16;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar25 = puVar10;
      func_0x000107c5ed90((long)*(int *)(lVar26 + 0x14));
      *(undefined8 *)(lVar16 + 0x50) = 0;
      puVar12 = puVar10;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar25);
      func_0x000107c61170(puVar10);
      puVar25 = *(undefined **)(lVar16 + 0x50);
      if ((int)puVar12 == 0) {
        puVar10 = puVar25;
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(puVar10);
        func_0x000107c61654();
        func_0x000107c614ac(puVar25);
      }
      else {
        func_0x000107c61174(puVar25);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
      if ((code *)*(long *)PTR____stack_chk_guard_11034bdc0 != pcStack_a8) {
        func_0x000107c60e78();
        pcStack_b8 = FUN_103181dcc;
        lVar16 = *plVar24;
        *(long *)UNRECOVERED_JUMPTABLE = lVar16;
        puStack_d0 = puVar25;
        puStack_c8 = puVar10;
        puStack_c0 = &uStack_80;
        func_0x000107c6157c(lVar16);
        return (code *)(lVar16 + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x000103181dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return UNRECOVERED_JUMPTABLE;
    }
    UNRECOVERED_JUMPTABLE = FUN_103181cc4;
    lVar16 = 0;
    uVar13 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,lVar16,uVar13);
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 10318c94c; end: 10318c997;  */

void FUN_10318c94c(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318c998,uVar1,0);
  return;
}



/* Entry: 10318c998; end: 10318ca4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318c998(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  FUN_10318fdc4(*(undefined8 *)(unaff_x22 + 0x80),0x103182014);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  puVar1 = PTR_PTR_1126ba4f0;
  func_0x000107c610f8(PTR_PTR_1126ba4f0);
  func_0x000107c453e4();
  uVar2 = 0x656c6c65636e6163;
  func_0x000107c5fadc(0x656c6c65636e6163,0xe900000000000064);
  func_0x000108460c38(puVar1,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  lVar3 = lVar3 + _DAT_112f477f8;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xc0) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318ca50,0,0);
  return;
}



/* Entry: 10318ca50; end: 10318cadb;  */

void FUN_10318ca50(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10318fe88(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318cadc,uVar2,uVar3);
  return;
}



/* Entry: 10318cadc; end: 10318cb7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318cadc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  lVar1 = _DAT_112f47790;
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61428(lVar3 + _DAT_112f47790,unaff_x22 + 0x28,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c3e3dc(0);
      func_0x000107c615e8(lVar3);
      pcVar2 = FUN_10318cb7c;
      goto LAB_10318cb68;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  pcVar2 = FUN_10318cc38;
LAB_10318cb68:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,0);
  return;
}



/* Entry: 10318cb7c; end: 10318cc37;  */

void FUN_10318cb7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000103190e50(uVar8,0x112f47b60,&UNK_10db94a20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010318cc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318cc38; end: 10318ccf3;  */

void FUN_10318cc38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xc0));
  func_0x000103190e50(uVar8,0x112f47b60,&UNK_10db94a20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010318ccf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318ccf4; end: 10318cd7f;  */

void FUN_10318ccf4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10318fe88(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318cd80,uVar2,uVar3);
  return;
}



/* Entry: 10318cd80; end: 10318cdd7;  */

void FUN_10318cd80(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe8));
  if (lVar1 != 0) {
    FUN_103188934(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x00010318f258(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318cdd8,uVar2,0);
  return;
}



/* Entry: 10318cdd8; end: 10318ce77;  */

void FUN_10318cdd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xe0));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010318ce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318ce78; end: 10318cec3;  */

void FUN_10318ce78(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318cec4,uVar1,0);
  return;
}



/* Entry: 10318cec4; end: 10318cf6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318cec4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x50);
  puVar1 = PTR_PTR_1126ba4f0;
  func_0x000107c610f8(PTR_PTR_1126ba4f0);
  func_0x000107c453e4();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f12b7d0);
  func_0x000108460c38(puVar1,uVar2,1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  lVar3 = lVar3 + _DAT_112f477f8;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xf8) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318cf6c,0,0);
  return;
}



/* Entry: 10318cf6c; end: 10318cff7;  */

void FUN_10318cf6c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10318fe88(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318cff8,uVar2,uVar3);
  return;
}



/* Entry: 10318cff8; end: 10318d097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318cff8(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xf8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x100));
  lVar1 = _DAT_112f47790;
  if (lVar3 != 0) {
    lVar3 = *(long *)(unaff_x22 + 0xf8);
    func_0x000107c61428(lVar3 + _DAT_112f47790,unaff_x22 + 0x10,0,0);
    lVar3 = lVar3 + lVar1;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c3e3dc(0);
      func_0x000107c615e8(lVar3);
      pcVar2 = FUN_10318d098;
      goto LAB_10318d084;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  pcVar2 = FUN_10318d14c;
LAB_10318d084:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,0);
  return;
}



/* Entry: 10318d098; end: 10318d14b;  */

void FUN_10318d098(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
  FUN_10318fdc4(uVar8,0x103182014);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010318d148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318d14c; end: 10318d1ff;  */

void FUN_10318d14c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
  FUN_10318fdc4(uVar8,0x103182014);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010318d1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318d200; end: 10318d24b;  */

void FUN_10318d200(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318d24c,uVar1,0);
  return;
}



/* Entry: 10318d24c; end: 10318d30f;  */

void FUN_10318d24c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_10318fdc4(*(undefined8 *)(unaff_x22 + 0x70),0x103182014);
  func_0x000103190e50(uVar8,0x112f47b60,&UNK_10db94a20);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010318d30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318d310; end: 10318d37b;  */

void FUN_10318d310(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x110);
  uVar2 = *(undefined8 *)(lVar4 + 0x118);
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  uVar3 = *(undefined1 *)(lVar4 + 0x150);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x130));
  FUN_103190994(uVar1,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318d37c,uVar5,0);
  return;
}



/* Entry: 10318d37c; end: 10318d42f;  */

void FUN_10318d37c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x128));
  FUN_10318fdc4(uVar8,0x103182014);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010318d42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10318d430; end: 10318d49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d430(long param_1,long param_2,long param_3,undefined1 param_4,long param_5,
                  long param_6)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  long unaff_x20;
  long lVar13;
  long *unaff_x22;
  long lVar14;
  char acStack_200 [24];
  undefined1 auStack_1e8 [24];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0xf] = param_6;
  unaff_x22[0x10] = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x16) = param_4;
  unaff_x22[0xd] = param_3;
  unaff_x22[0xe] = param_5;
  unaff_x22[0xb] = param_1;
  unaff_x22[0xc] = param_2;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_10318d4a0;
  }
  else {
    func_0x000107c60e78();
    lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar7 = unaff_x22[0x10];
    puVar10 = (undefined8 *)unaff_x22[0xb];
    FUN_103192458(unaff_x22[0xc],unaff_x22[0xd],(char)unaff_x22[0x16]);
    func_0x000107c53fcc(*puVar10);
    lVar7 = lVar7 + _DAT_112f477f8;
    func_0x000107c61618();
    unaff_x22[0x11] = lVar7;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
      UNRECOVERED_JUMPTABLE = FUN_10318d53c;
    }
    else {
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar8 = 0;
      func_0x000107c5fcec();
      puVar2 = PTR___sScMMa_11034fc70;
      lVar7 = lVar8;
      func_0x000107c5fce8();
      unaff_x22[0x12] = lVar7;
      uVar11 = 0x112d45220;
      FUN_10318fe88(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8(lVar8,uVar11);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        UNRECOVERED_JUMPTABLE = FUN_10318d5f4;
      }
      else {
        func_0x000107c60e78();
        lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar7 = unaff_x22[0x11];
        func_0x000107c61574(unaff_x22[0x12]);
        if (lVar7 != 0) {
          lVar7 = unaff_x22[0xd];
          if ((char)unaff_x22[0x16] != '\0') {
            lVar7 = 0;
          }
          FUN_103188884(lVar7,unaff_x22[0xe],unaff_x22[0xf]);
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
          UNRECOVERED_JUMPTABLE = FUN_10318d680;
        }
        else {
          func_0x000107c60e78();
          lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar13 = unaff_x22[0x10];
          lVar9 = unaff_x22[0xb];
          lVar7 = 0;
          func_0x000103182014();
          unaff_x22[0x13] = lVar7;
          unaff_x22[0x14] = *(long *)(lVar9 + *(int *)(lVar7 + 0x18));
          unaff_x22[0x15] = *(long *)(lVar13 + 0xa0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
            UNRECOVERED_JUMPTABLE = FUN_10318d710;
          }
          else {
            func_0x000107c60e78();
            lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
            unaff_x22[2] = (long)unaff_x22;
            unaff_x22[3] = (long)FUN_10318d794;
            func_0x000107c61448(unaff_x22 + 2,0);
            FUN_103183860();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
              return;
            }
            func_0x000107c60e78();
            lVar7 = *unaff_x22;
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)PTR____stack_chk_guard_11034bdc0) {
              UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
            }
            else {
              func_0x000107c60e78();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                  *(long *)PTR____stack_chk_guard_11034bdc0) {
                func_0x000107c60e78();
                lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
                lVar9 = *(long *)(lVar7 + 0x98);
                puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
                func_0x000107c61168();
                func_0x000107c415e0();
                func_0x000107c61180();
                puVar3 = puVar2;
                func_0x000107c5ed90((long)*(int *)(lVar9 + 0x14));
                *(undefined8 *)(lVar7 + 0x50) = 0;
                puVar4 = puVar2;
                func_0x000107c4ff50();
                func_0x000107c61170(puVar3);
                func_0x000107c61170(puVar2);
                uVar11 = *(undefined8 *)(lVar7 + 0x50);
                lVar9 = *(long *)(lVar7 + 0x88);
                if ((int)puVar4 == 0) {
                  uVar5 = uVar11;
                  func_0x000107c61174(uVar11);
                  func_0x000107c5ed30();
                  func_0x000107c61170(uVar5);
                  func_0x000107c61654();
                  func_0x000107c615e8(lVar9);
                  func_0x000107c614ac(uVar11);
                }
                else {
                  func_0x000107c61174(uVar11);
                  func_0x000107c615e8(lVar9);
                }
                UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*UNRECOVERED_JUMPTABLE)();
                  return;
                }
                func_0x000107c60e78();
                lVar7 = 0x112f47b50;
                func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
                (*(code *)PTR____chkstk_darwin_11034bd40)
                          (*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
                pcVar12 = acStack_200 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
                (*(code *)PTR____chkstk_darwin_11034bd40)();
                lVar8 = (long)pcVar12 - extraout_x12;
                FUN_10318db48();
                lVar7 = _DAT_112f477f0;
                if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
                  func_0x000107c61428(lVar9 + _DAT_112f477f0,auStack_1e8,0,0);
                  FUN_103190e08(lVar9 + lVar7,lVar8,0x112f47b50,&UNK_10db94a10);
                  lVar6 = 0;
                  FUN_10318efd8();
                  lVar14 = *(long *)(lVar6 + -8);
                  lVar13 = lVar8;
                  (**(code **)(lVar14 + 0x30))(lVar8,1,lVar6);
                  if ((int)lVar13 == 0) {
                    cVar1 = *(char *)(lVar8 + *(int *)(lVar6 + 0x28));
                    func_0x000103190e50(lVar8,0x112f47b50,&UNK_10db94a10);
                    (**(code **)(lVar14 + 0x38))(pcVar12,1,1,lVar6);
                    func_0x000107c61428(lVar9 + lVar7,acStack_200,0x21,0);
                    func_0x00010318fec8(pcVar12,lVar9 + lVar7);
                    func_0x000107c614a8(acStack_200);
                    if (cVar1 == '\x01') {
                      func_0x00010318adac();
                    }
                  }
                  else {
                    func_0x000103190e50(lVar8,0x112f47b50,&UNK_10db94a10);
                    (**(code **)(lVar14 + 0x38))(pcVar12,1,1,lVar6);
                    func_0x000107c61428(lVar9 + lVar7,acStack_200,0x21,0);
                    func_0x00010318fec8(pcVar12,lVar9 + lVar7);
                    func_0x000107c614a8(acStack_200);
                  }
                }
                return;
              }
              UNRECOVERED_JUMPTABLE = FUN_10318d860;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE);
  return;
}



/* Entry: 10318d4a0; end: 10318d53b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d4a0(void)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  long *unaff_x22;
  long lVar14;
  char acStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x22[0x10];
  puVar10 = (undefined8 *)unaff_x22[0xb];
  FUN_103192458(unaff_x22[0xc],unaff_x22[0xd],(char)unaff_x22[0x16]);
  func_0x000107c53fcc(*puVar10);
  lVar12 = lVar12 + _DAT_112f477f8;
  func_0x000107c61618();
  unaff_x22[0x11] = lVar12;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    UNRECOVERED_JUMPTABLE = FUN_10318d53c;
    lVar8 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar8 = 0;
    func_0x000107c5fcec();
    puVar2 = PTR___sScMMa_11034fc70;
    lVar12 = lVar8;
    func_0x000107c5fce8();
    unaff_x22[0x12] = lVar12;
    uVar7 = 0x112d45220;
    FUN_10318fe88(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(lVar8,uVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      UNRECOVERED_JUMPTABLE = FUN_10318d5f4;
    }
    else {
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = unaff_x22[0x11];
      func_0x000107c61574(unaff_x22[0x12]);
      if (lVar12 != 0) {
        lVar12 = unaff_x22[0xd];
        if ((char)unaff_x22[0x16] != '\0') {
          lVar12 = 0;
        }
        FUN_103188884(lVar12,unaff_x22[0xe],unaff_x22[0xf]);
      }
      lVar8 = unaff_x22[0x10];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
        UNRECOVERED_JUMPTABLE = FUN_10318d680;
        uVar7 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = unaff_x22[0x10];
        lVar9 = unaff_x22[0xb];
        lVar12 = 0;
        func_0x000103182014();
        unaff_x22[0x13] = lVar12;
        unaff_x22[0x14] = *(long *)(lVar9 + *(int *)(lVar12 + 0x18));
        unaff_x22[0x15] = *(long *)(lVar13 + 0xa0);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
          UNRECOVERED_JUMPTABLE = FUN_10318d710;
          lVar8 = 0;
          uVar7 = 0;
        }
        else {
          func_0x000107c60e78();
          lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
          unaff_x22[2] = (long)unaff_x22;
          unaff_x22[3] = (long)FUN_10318d794;
          func_0x000107c61448(unaff_x22 + 2,0);
          FUN_103183860();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
            return;
          }
          func_0x000107c60e78();
          lVar12 = *unaff_x22;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0
             ) {
            UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
            lVar8 = 0;
            uVar7 = 0;
          }
          else {
            func_0x000107c60e78();
            lVar8 = *(long *)(lVar12 + 0x80);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 !=
                *(long *)PTR____stack_chk_guard_11034bdc0) {
              func_0x000107c60e78();
              lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
              lVar9 = *(long *)(lVar12 + 0x98);
              puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
              func_0x000107c61168();
              func_0x000107c415e0();
              func_0x000107c61180();
              puVar3 = puVar2;
              func_0x000107c5ed90((long)*(int *)(lVar9 + 0x14));
              *(undefined8 *)(lVar12 + 0x50) = 0;
              puVar4 = puVar2;
              func_0x000107c4ff50();
              func_0x000107c61170(puVar3);
              func_0x000107c61170(puVar2);
              uVar7 = *(undefined8 *)(lVar12 + 0x50);
              lVar9 = *(long *)(lVar12 + 0x88);
              if ((int)puVar4 == 0) {
                uVar5 = uVar7;
                func_0x000107c61174(uVar7);
                func_0x000107c5ed30();
                func_0x000107c61170(uVar5);
                func_0x000107c61654();
                func_0x000107c615e8(lVar9);
                func_0x000107c614ac(uVar7);
              }
              else {
                func_0x000107c61174(uVar7);
                func_0x000107c615e8(lVar9);
              }
              UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)();
                return;
              }
              func_0x000107c60e78();
              lVar12 = 0x112f47b50;
              func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
              (*(code *)PTR____chkstk_darwin_11034bd40)
                        (*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
              pcVar11 = acStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              lVar8 = (long)pcVar11 - extraout_x12;
              FUN_10318db48();
              lVar12 = _DAT_112f477f0;
              if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
                func_0x000107c61428(lVar9 + _DAT_112f477f0,auStack_1c8,0,0);
                FUN_103190e08(lVar9 + lVar12,lVar8,0x112f47b50,&UNK_10db94a10);
                lVar6 = 0;
                FUN_10318efd8();
                lVar14 = *(long *)(lVar6 + -8);
                lVar13 = lVar8;
                (**(code **)(lVar14 + 0x30))(lVar8,1,lVar6);
                if ((int)lVar13 == 0) {
                  cVar1 = *(char *)(lVar8 + *(int *)(lVar6 + 0x28));
                  func_0x000103190e50(lVar8,0x112f47b50,&UNK_10db94a10);
                  (**(code **)(lVar14 + 0x38))(pcVar11,1,1,lVar6);
                  func_0x000107c61428(lVar9 + lVar12,acStack_1e0,0x21,0);
                  func_0x00010318fec8(pcVar11,lVar9 + lVar12);
                  func_0x000107c614a8(acStack_1e0);
                  if (cVar1 == '\x01') {
                    func_0x00010318adac();
                  }
                }
                else {
                  func_0x000103190e50(lVar8,0x112f47b50,&UNK_10db94a10);
                  (**(code **)(lVar14 + 0x38))(pcVar11,1,1,lVar6);
                  func_0x000107c61428(lVar9 + lVar12,acStack_1e0,0x21,0);
                  func_0x00010318fec8(pcVar11,lVar9 + lVar12);
                  func_0x000107c614a8(acStack_1e0);
                }
              }
              return;
            }
            UNRECOVERED_JUMPTABLE = FUN_10318d860;
            uVar7 = 0;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,lVar8,uVar7);
  return;
}



/* Entry: 10318d53c; end: 10318d5f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d53c(void)

{
  char cVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  char *pcVar10;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  char acStack_1b0 [24];
  undefined1 auStack_198 [24];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar13 = lVar2;
  func_0x000107c5fce8();
  unaff_x22[0x12] = lVar13;
  uVar8 = 0x112d45220;
  FUN_10318fe88(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    UNRECOVERED_JUMPTABLE = FUN_10318d5f4;
  }
  else {
    func_0x000107c60e78();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar13 = unaff_x22[0x11];
    func_0x000107c61574(unaff_x22[0x12]);
    if (lVar13 != 0) {
      lVar13 = unaff_x22[0xd];
      if ((char)unaff_x22[0x16] != '\0') {
        lVar13 = 0;
      }
      FUN_103188884(lVar13,unaff_x22[0xe],unaff_x22[0xf]);
    }
    lVar2 = unaff_x22[0x10];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
      UNRECOVERED_JUMPTABLE = FUN_10318d680;
      uVar8 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar11 = unaff_x22[0x10];
      lVar9 = unaff_x22[0xb];
      lVar13 = 0;
      func_0x000103182014();
      unaff_x22[0x13] = lVar13;
      unaff_x22[0x14] = *(long *)(lVar9 + *(int *)(lVar13 + 0x18));
      unaff_x22[0x15] = *(long *)(lVar11 + 0xa0);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
        UNRECOVERED_JUMPTABLE = FUN_10318d710;
        lVar2 = 0;
        uVar8 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
        unaff_x22[2] = (long)unaff_x22;
        unaff_x22[3] = (long)FUN_10318d794;
        func_0x000107c61448(unaff_x22 + 2,0);
        FUN_103183860();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
          return;
        }
        func_0x000107c60e78();
        lVar13 = *unaff_x22;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
          lVar2 = 0;
          uVar8 = 0;
        }
        else {
          func_0x000107c60e78();
          lVar2 = *(long *)(lVar13 + 0x80);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0
             ) {
            func_0x000107c60e78();
            lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
            lVar9 = *(long *)(lVar13 + 0x98);
            puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
            func_0x000107c61168();
            func_0x000107c415e0();
            func_0x000107c61180();
            puVar4 = puVar3;
            func_0x000107c5ed90((long)*(int *)(lVar9 + 0x14));
            *(undefined8 *)(lVar13 + 0x50) = 0;
            puVar5 = puVar3;
            func_0x000107c4ff50();
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar3);
            uVar8 = *(undefined8 *)(lVar13 + 0x50);
            lVar9 = *(long *)(lVar13 + 0x88);
            if ((int)puVar5 == 0) {
              uVar6 = uVar8;
              func_0x000107c61174(uVar8);
              func_0x000107c5ed30();
              func_0x000107c61170(uVar6);
              func_0x000107c61654();
              func_0x000107c615e8(lVar9);
              func_0x000107c614ac(uVar8);
            }
            else {
              func_0x000107c61174(uVar8);
              func_0x000107c615e8(lVar9);
            }
            UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
            func_0x000107c60e78();
            lVar13 = 0x112f47b50;
            func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
            pcVar10 = acStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar2 = (long)pcVar10 - extraout_x12;
            FUN_10318db48();
            lVar13 = _DAT_112f477f0;
            if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
              func_0x000107c61428(lVar9 + _DAT_112f477f0,auStack_198,0,0);
              FUN_103190e08(lVar9 + lVar13,lVar2,0x112f47b50,&UNK_10db94a10);
              lVar7 = 0;
              FUN_10318efd8();
              lVar12 = *(long *)(lVar7 + -8);
              lVar11 = lVar2;
              (**(code **)(lVar12 + 0x30))(lVar2,1,lVar7);
              if ((int)lVar11 == 0) {
                cVar1 = *(char *)(lVar2 + *(int *)(lVar7 + 0x28));
                func_0x000103190e50(lVar2,0x112f47b50,&UNK_10db94a10);
                (**(code **)(lVar12 + 0x38))(pcVar10,1,1,lVar7);
                func_0x000107c61428(lVar9 + lVar13,acStack_1b0,0x21,0);
                func_0x00010318fec8(pcVar10,lVar9 + lVar13);
                func_0x000107c614a8(acStack_1b0);
                if (cVar1 == '\x01') {
                  func_0x00010318adac();
                }
              }
              else {
                func_0x000103190e50(lVar2,0x112f47b50,&UNK_10db94a10);
                (**(code **)(lVar12 + 0x38))(pcVar10,1,1,lVar7);
                func_0x000107c61428(lVar9 + lVar13,acStack_1b0,0x21,0);
                func_0x00010318fec8(pcVar10,lVar9 + lVar13);
                func_0x000107c614a8(acStack_1b0);
              }
            }
            return;
          }
          UNRECOVERED_JUMPTABLE = FUN_10318d860;
          uVar8 = 0;
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,lVar2,uVar8);
  return;
}



/* Entry: 10318d5f4; end: 10318d67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d5f4(void)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  char acStack_180 [24];
  undefined1 auStack_168 [24];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar13 = unaff_x22[0x11];
  func_0x000107c61574(unaff_x22[0x12]);
  if (lVar13 != 0) {
    lVar13 = unaff_x22[0xd];
    if ((char)unaff_x22[0x16] != '\0') {
      lVar13 = 0;
    }
    FUN_103188884(lVar13,unaff_x22[0xe],unaff_x22[0xf]);
  }
  lVar13 = unaff_x22[0x10];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    UNRECOVERED_JUMPTABLE = FUN_10318d680;
  }
  else {
    func_0x000107c60e78();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar11 = unaff_x22[0x10];
    lVar8 = unaff_x22[0xb];
    lVar13 = 0;
    func_0x000103182014();
    unaff_x22[0x13] = lVar13;
    unaff_x22[0x14] = *(long *)(lVar8 + *(int *)(lVar13 + 0x18));
    unaff_x22[0x15] = *(long *)(lVar11 + 0xa0);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
      UNRECOVERED_JUMPTABLE = FUN_10318d710;
      lVar13 = 0;
    }
    else {
      func_0x000107c60e78();
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      unaff_x22[2] = (long)unaff_x22;
      unaff_x22[3] = (long)FUN_10318d794;
      func_0x000107c61448(unaff_x22 + 2,0);
      FUN_103183860();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
        return;
      }
      func_0x000107c60e78();
      lVar7 = *unaff_x22;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
        UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
        lVar13 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar13 = *(long *)(lVar7 + 0x80);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0)
        {
          func_0x000107c60e78();
          lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
          lVar8 = *(long *)(lVar7 + 0x98);
          puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
          func_0x000107c61168();
          func_0x000107c415e0();
          func_0x000107c61180();
          puVar3 = puVar2;
          func_0x000107c5ed90((long)*(int *)(lVar8 + 0x14));
          *(undefined8 *)(lVar7 + 0x50) = 0;
          puVar4 = puVar2;
          func_0x000107c4ff50();
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar2);
          uVar9 = *(undefined8 *)(lVar7 + 0x50);
          lVar8 = *(long *)(lVar7 + 0x88);
          if ((int)puVar4 == 0) {
            uVar5 = uVar9;
            func_0x000107c61174(uVar9);
            func_0x000107c5ed30();
            func_0x000107c61170(uVar5);
            func_0x000107c61654();
            func_0x000107c615e8(lVar8);
            func_0x000107c614ac(uVar9);
          }
          else {
            func_0x000107c61174(uVar9);
            func_0x000107c615e8(lVar8);
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 8);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          func_0x000107c60e78();
          lVar13 = 0x112f47b50;
          func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
          (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
          pcVar10 = acStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar7 = (long)pcVar10 - extraout_x12;
          FUN_10318db48();
          lVar13 = _DAT_112f477f0;
          if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
            func_0x000107c61428(lVar8 + _DAT_112f477f0,auStack_168,0,0);
            FUN_103190e08(lVar8 + lVar13,lVar7,0x112f47b50,&UNK_10db94a10);
            lVar6 = 0;
            FUN_10318efd8();
            lVar12 = *(long *)(lVar6 + -8);
            lVar11 = lVar7;
            (**(code **)(lVar12 + 0x30))(lVar7,1,lVar6);
            if ((int)lVar11 == 0) {
              cVar1 = *(char *)(lVar7 + *(int *)(lVar6 + 0x28));
              func_0x000103190e50(lVar7,0x112f47b50,&UNK_10db94a10);
              (**(code **)(lVar12 + 0x38))(pcVar10,1,1,lVar6);
              func_0x000107c61428(lVar8 + lVar13,acStack_180,0x21,0);
              func_0x00010318fec8(pcVar10,lVar8 + lVar13);
              func_0x000107c614a8(acStack_180);
              if (cVar1 == '\x01') {
                func_0x00010318adac();
              }
            }
            else {
              func_0x000103190e50(lVar7,0x112f47b50,&UNK_10db94a10);
              (**(code **)(lVar12 + 0x38))(pcVar10,1,1,lVar6);
              func_0x000107c61428(lVar8 + lVar13,acStack_180,0x21,0);
              func_0x00010318fec8(pcVar10,lVar8 + lVar13);
              func_0x000107c614a8(acStack_180);
            }
          }
          return;
        }
        UNRECOVERED_JUMPTABLE = FUN_10318d860;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,lVar13,0);
  return;
}



/* Entry: 10318d680; end: 10318d70f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d680(void)

{
  char cVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  char *pcVar11;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  char acStack_160 [24];
  undefined1 auStack_148 [24];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x22[0x10];
  lVar10 = unaff_x22[0xb];
  lVar2 = 0;
  func_0x000103182014();
  unaff_x22[0x13] = lVar2;
  unaff_x22[0x14] = *(long *)(lVar10 + *(int *)(lVar2 + 0x18));
  unaff_x22[0x15] = *(long *)(lVar12 + 0xa0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    UNRECOVERED_JUMPTABLE = FUN_10318d710;
    uVar8 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
    unaff_x22[2] = (long)unaff_x22;
    unaff_x22[3] = (long)FUN_10318d794;
    func_0x000107c61448(unaff_x22 + 2,0);
    FUN_103183860();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
      return;
    }
    func_0x000107c60e78();
    lVar2 = *unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
      UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
      uVar8 = 0;
    }
    else {
      func_0x000107c60e78();
      uVar8 = *(undefined8 *)(lVar2 + 0x80);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
        func_0x000107c60e78();
        lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar10 = *(long *)(lVar2 + 0x98);
        puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x000107c61168();
        func_0x000107c415e0();
        func_0x000107c61180();
        puVar4 = puVar3;
        func_0x000107c5ed90((long)*(int *)(lVar10 + 0x14));
        *(undefined8 *)(lVar2 + 0x50) = 0;
        puVar5 = puVar3;
        func_0x000107c4ff50();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        uVar8 = *(undefined8 *)(lVar2 + 0x50);
        lVar10 = *(long *)(lVar2 + 0x88);
        if ((int)puVar5 == 0) {
          uVar6 = uVar8;
          func_0x000107c61174(uVar8);
          func_0x000107c5ed30();
          func_0x000107c61170(uVar6);
          func_0x000107c61654();
          func_0x000107c615e8(lVar10);
          func_0x000107c614ac(uVar8);
        }
        else {
          func_0x000107c61174(uVar8);
          func_0x000107c615e8(lVar10);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        func_0x000107c60e78();
        lVar2 = 0x112f47b50;
        func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
        pcVar11 = acStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar9 = (long)pcVar11 - extraout_x12;
        FUN_10318db48();
        lVar2 = _DAT_112f477f0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          func_0x000107c61428(lVar10 + _DAT_112f477f0,auStack_148,0,0);
          FUN_103190e08(lVar10 + lVar2,lVar9,0x112f47b50,&UNK_10db94a10);
          lVar7 = 0;
          FUN_10318efd8();
          lVar13 = *(long *)(lVar7 + -8);
          lVar12 = lVar9;
          (**(code **)(lVar13 + 0x30))(lVar9,1,lVar7);
          if ((int)lVar12 == 0) {
            cVar1 = *(char *)(lVar9 + *(int *)(lVar7 + 0x28));
            func_0x000103190e50(lVar9,0x112f47b50,&UNK_10db94a10);
            (**(code **)(lVar13 + 0x38))(pcVar11,1,1,lVar7);
            func_0x000107c61428(lVar10 + lVar2,acStack_160,0x21,0);
            func_0x00010318fec8(pcVar11,lVar10 + lVar2);
            func_0x000107c614a8(acStack_160);
            if (cVar1 == '\x01') {
              func_0x00010318adac();
            }
          }
          else {
            func_0x000103190e50(lVar9,0x112f47b50,&UNK_10db94a10);
            (**(code **)(lVar13 + 0x38))(pcVar11,1,1,lVar7);
            func_0x000107c61428(lVar10 + lVar2,acStack_160,0x21,0);
            func_0x00010318fec8(pcVar11,lVar10 + lVar2);
            func_0x000107c614a8(acStack_160);
          }
        }
        return;
      }
      UNRECOVERED_JUMPTABLE = FUN_10318d860;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar8,0);
  return;
}



/* Entry: 10318d710; end: 10318d793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d710(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  char *pcVar11;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  char acStack_130 [24];
  undefined1 auStack_118 [24];
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[2] = (long)unaff_x22;
  unaff_x22[3] = (long)FUN_10318d794;
  func_0x000107c61448(unaff_x22 + 2,0);
  FUN_103183860();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 2);
    return;
  }
  func_0x000107c60e78();
  lVar9 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
    uVar8 = 0;
  }
  else {
    func_0x000107c60e78();
    uVar8 = *(undefined8 *)(lVar9 + 0x80);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar12 = *(long *)(lVar9 + 0x98);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5ed90((long)*(int *)(lVar12 + 0x14));
      *(undefined8 *)(lVar9 + 0x50) = 0;
      puVar4 = puVar2;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      uVar8 = *(undefined8 *)(lVar9 + 0x50);
      lVar12 = *(long *)(lVar9 + 0x88);
      if ((int)puVar4 == 0) {
        uVar5 = uVar8;
        func_0x000107c61174(uVar8);
        func_0x000107c5ed30();
        func_0x000107c61170(uVar5);
        func_0x000107c61654();
        func_0x000107c615e8(lVar12);
        func_0x000107c614ac(uVar8);
      }
      else {
        func_0x000107c61174(uVar8);
        func_0x000107c615e8(lVar12);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      lVar9 = 0x112f47b50;
      func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
      pcVar11 = acStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar10 = (long)pcVar11 - extraout_x12;
      FUN_10318db48();
      lVar9 = _DAT_112f477f0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        func_0x000107c61428(lVar12 + _DAT_112f477f0,auStack_118,0,0);
        FUN_103190e08(lVar12 + lVar9,lVar10,0x112f47b50,&UNK_10db94a10);
        lVar6 = 0;
        FUN_10318efd8();
        lVar13 = *(long *)(lVar6 + -8);
        lVar7 = lVar10;
        (**(code **)(lVar13 + 0x30))(lVar10,1,lVar6);
        if ((int)lVar7 == 0) {
          cVar1 = *(char *)(lVar10 + *(int *)(lVar6 + 0x28));
          func_0x000103190e50(lVar10,0x112f47b50,&UNK_10db94a10);
          (**(code **)(lVar13 + 0x38))(pcVar11,1,1,lVar6);
          func_0x000107c61428(lVar12 + lVar9,acStack_130,0x21,0);
          func_0x00010318fec8(pcVar11,lVar12 + lVar9);
          func_0x000107c614a8(acStack_130);
          if (cVar1 == '\x01') {
            func_0x00010318adac();
          }
        }
        else {
          func_0x000103190e50(lVar10,0x112f47b50,&UNK_10db94a10);
          (**(code **)(lVar13 + 0x38))(pcVar11,1,1,lVar6);
          func_0x000107c61428(lVar12 + lVar9,acStack_130,0x21,0);
          func_0x00010318fec8(pcVar11,lVar12 + lVar9);
          func_0x000107c614a8(acStack_130);
        }
      }
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_10318d860;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar8,0);
  return;
}



/* Entry: 10318d794; end: 10318d85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d794(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  char *pcVar10;
  long lVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  char acStack_100 [24];
  undefined1 auStack_e8 [24];
  
  lVar12 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    UNRECOVERED_JUMPTABLE = (code *)0x10318d800;
    uVar8 = 0;
  }
  else {
    func_0x000107c60e78();
    uVar8 = *(undefined8 *)(lVar12 + 0x80);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar11 = *(long *)(lVar12 + 0x98);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c61168();
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c5ed90((long)*(int *)(lVar11 + 0x14));
      *(undefined8 *)(lVar12 + 0x50) = 0;
      puVar4 = puVar2;
      func_0x000107c4ff50();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      uVar8 = *(undefined8 *)(lVar12 + 0x50);
      lVar11 = *(long *)(lVar12 + 0x88);
      if ((int)puVar4 == 0) {
        uVar5 = uVar8;
        func_0x000107c61174(uVar8);
        func_0x000107c5ed30();
        func_0x000107c61170(uVar5);
        func_0x000107c61654();
        func_0x000107c615e8(lVar11);
        func_0x000107c614ac(uVar8);
      }
      else {
        func_0x000107c61174(uVar8);
        func_0x000107c615e8(lVar11);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      func_0x000107c60e78();
      lVar12 = 0x112f47b50;
      func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
      pcVar10 = acStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      (*(code *)PTR____chkstk_darwin_11034bd40)();
      lVar9 = (long)pcVar10 - extraout_x12;
      FUN_10318db48();
      lVar12 = _DAT_112f477f0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        func_0x000107c61428(lVar11 + _DAT_112f477f0,auStack_e8,0,0);
        FUN_103190e08(lVar11 + lVar12,lVar9,0x112f47b50,&UNK_10db94a10);
        lVar6 = 0;
        FUN_10318efd8();
        lVar13 = *(long *)(lVar6 + -8);
        lVar7 = lVar9;
        (**(code **)(lVar13 + 0x30))(lVar9,1,lVar6);
        if ((int)lVar7 == 0) {
          cVar1 = *(char *)(lVar9 + *(int *)(lVar6 + 0x28));
          func_0x000103190e50(lVar9,0x112f47b50,&UNK_10db94a10);
          (**(code **)(lVar13 + 0x38))(pcVar10,1,1,lVar6);
          func_0x000107c61428(lVar11 + lVar12,acStack_100,0x21,0);
          func_0x00010318fec8(pcVar10,lVar11 + lVar12);
          func_0x000107c614a8(acStack_100);
          if (cVar1 == '\x01') {
            func_0x00010318adac();
          }
        }
        else {
          func_0x000103190e50(lVar9,0x112f47b50,&UNK_10db94a10);
          (**(code **)(lVar13 + 0x38))(pcVar10,1,1,lVar6);
          func_0x000107c61428(lVar11 + lVar12,acStack_100,0x21,0);
          func_0x00010318fec8(pcVar10,lVar11 + lVar12);
          func_0x000107c614a8(acStack_100);
        }
      }
      return;
    }
    UNRECOVERED_JUMPTABLE = FUN_10318d860;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar8,0);
  return;
}



/* Entry: 10318d860; end: 10318d97b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d860(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  char acStack_c0 [24];
  undefined1 auStack_a8 [24];
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = *(long *)(unaff_x22 + 0x98);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ed90((long)*(int *)(lVar11 + 0x14));
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  puVar4 = puVar2;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar11 = *(long *)(unaff_x22 + 0x88);
  if ((int)puVar4 == 0) {
    uVar5 = uVar9;
    func_0x000107c61174(uVar9);
    func_0x000107c5ed30();
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c615e8(lVar11);
    func_0x000107c614ac(uVar9);
  }
  else {
    func_0x000107c61174(uVar9);
    func_0x000107c615e8(lVar11);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x00010318d974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  lVar8 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  pcVar10 = acStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)pcVar10 - extraout_x12;
  FUN_10318db48();
  lVar8 = _DAT_112f477f0;
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    func_0x000107c61428(lVar11 + _DAT_112f477f0,auStack_a8,0,0);
    FUN_103190e08(lVar11 + lVar8,lVar12,0x112f47b50,&UNK_10db94a10);
    lVar6 = 0;
    FUN_10318efd8();
    lVar13 = *(long *)(lVar6 + -8);
    lVar7 = lVar12;
    (**(code **)(lVar13 + 0x30))(lVar12,1,lVar6);
    if ((int)lVar7 == 0) {
      cVar1 = *(char *)(lVar12 + *(int *)(lVar6 + 0x28));
      func_0x000103190e50(lVar12,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar13 + 0x38))(pcVar10,1,1,lVar6);
      func_0x000107c61428(lVar11 + lVar8,acStack_c0,0x21,0);
      func_0x00010318fec8(pcVar10,lVar11 + lVar8);
      func_0x000107c614a8(acStack_c0);
      if (cVar1 == '\x01') {
        func_0x00010318adac();
      }
    }
    else {
      func_0x000103190e50(lVar12,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar13 + 0x38))(pcVar10,1,1,lVar6);
      func_0x000107c61428(lVar11 + lVar8,acStack_c0,0x21,0);
      func_0x00010318fec8(pcVar10,lVar11 + lVar8);
      func_0x000107c614a8(acStack_c0);
    }
  }
  return;
}



/* Entry: 10318d97c; end: 10318db47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318d97c(ulong param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  char *pcVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  char acStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  pcVar5 = acStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)pcVar5 - extraout_x12;
  FUN_10318db48();
  lVar2 = _DAT_112f477f0;
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112f477f0,auStack_68,0,0);
    FUN_103190e08(unaff_x20 + lVar2,lVar6,0x112f47b50,&UNK_10db94a10);
    lVar3 = 0;
    FUN_10318efd8();
    lVar7 = *(long *)(lVar3 + -8);
    lVar4 = lVar6;
    (**(code **)(lVar7 + 0x30))(lVar6,1,lVar3);
    if ((int)lVar4 == 0) {
      cVar1 = *(char *)(lVar6 + *(int *)(lVar3 + 0x28));
      func_0x000103190e50(lVar6,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar7 + 0x38))(pcVar5,1,1,lVar3);
      func_0x000107c61428(unaff_x20 + lVar2,acStack_80,0x21,0);
      func_0x00010318fec8(pcVar5,unaff_x20 + lVar2);
      func_0x000107c614a8(acStack_80);
      if (cVar1 == '\x01') {
        func_0x00010318adac();
      }
    }
    else {
      func_0x000103190e50(lVar6,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar7 + 0x38))(pcVar5,1,1,lVar3);
      func_0x000107c61428(unaff_x20 + lVar2,acStack_80,0x21,0);
      func_0x00010318fec8(pcVar5,unaff_x20 + lVar2);
      func_0x000107c614a8(acStack_80);
    }
  }
  return;
}



/* Entry: 10318db48; end: 10318e423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10318db48(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar5;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  uStack_88 = param_1;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d68090;
  lStack_a0 = lVar4;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar4 - extraout_x8_00;
  lVar2 = 0;
  lStack_80 = lVar4;
  FUN_10318efd8();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar4 = lVar4 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar4 - extraout_x8_02;
  lVar12 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar5 = lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = _DAT_112f477f0;
  lVar11 = lVar5 - extraout_x12_00;
  func_0x000107c61428(unaff_x20 + _DAT_112f477f0,auStack_78,0,0);
  FUN_103190e08(unaff_x20 + lVar12,lVar9,0x112f47b50,&UNK_10db94a10);
  lVar12 = lVar9;
  (**(code **)(lVar13 + 0x30))(lVar9,1,lVar2);
  if ((int)lVar12 == 0) {
    func_0x00010318fe00(lVar9,lVar4,FUN_10318efd8);
    func_0x000103190e50(lVar9,0x112f47b50,&UNK_10db94a10);
    pcVar10 = *(code **)(lVar6 + 0x10);
    (*pcVar10)(lVar11,lVar4,lVar1);
    func_0x00010318fdc4(lVar4,FUN_10318efd8);
    pcVar8 = *(code **)(lVar6 + 0x38);
    (*pcVar8)(lVar11,0,1,lVar1);
  }
  else {
    func_0x000103190e50(lVar9,0x112f47b50,&UNK_10db94a10);
    pcVar8 = *(code **)(lVar6 + 0x38);
    (*pcVar8)(lVar11,1,1,lVar1);
    pcVar10 = *(code **)(lVar6 + 0x10);
  }
  (*pcVar10)(lVar5,uStack_88,lVar1);
  (*pcVar8)(lVar5,0,1,lVar1);
  lVar4 = lStack_80;
  lVar12 = (long)*(int *)(lStack_90 + 0x30);
  FUN_103190e08(lVar11,lStack_80,0x112d3bc20,&UNK_10d904ef0);
  FUN_103190e08(lVar5,lVar4 + lVar12,0x112d3bc20,&UNK_10d904ef0);
  pcVar8 = *(code **)(lVar6 + 0x30);
  lVar9 = lVar4;
  (*pcVar8)(lVar4,1,lVar1);
  lVar2 = lStack_98;
  if ((int)lVar9 == 1) {
    func_0x000103190e50(lVar5,0x112d3bc20,&UNK_10d904ef0);
    func_0x000103190e50(lVar11,0x112d3bc20,&UNK_10d904ef0);
    lVar12 = lVar4 + lVar12;
    (*pcVar8)(lVar12,1,lVar1);
    if ((int)lVar12 == 1) {
      func_0x000103190e50(lVar4,0x112d3bc20,&UNK_10d904ef0);
      uVar7 = 1;
      goto LAB_10318dfe0;
    }
  }
  else {
    FUN_103190e08(lVar4,lStack_98,0x112d3bc20,&UNK_10d904ef0);
    lVar9 = lVar4 + lVar12;
    (*pcVar8)(lVar9,1,lVar1);
    lVar13 = lStack_a0;
    if ((int)lVar9 != 1) {
      (**(code **)(lVar6 + 0x20))(lStack_a0,lVar4 + lVar12,lVar1);
      uVar3 = 0x112d68098;
      FUN_10318fe88(0x112d68098,PTR___s10Foundation4UUIDVMa_110350c38,
                    PTR___s10Foundation4UUIDVSQAAMc_110350c50);
      lVar12 = lVar2;
      func_0x000107c5fab8(lVar2,lVar13,lVar1,uVar3);
      uVar7 = (uint)lVar12;
      pcVar8 = *(code **)(lVar6 + 8);
      (*pcVar8)(lVar13,lVar1);
      func_0x000103190e50(lVar5,0x112d3bc20,&UNK_10d904ef0);
      func_0x000103190e50(lVar11,0x112d3bc20,&UNK_10d904ef0);
      (*pcVar8)(lVar2,lVar1);
      func_0x000103190e50(lVar4,0x112d3bc20,&UNK_10d904ef0);
      goto LAB_10318dfe0;
    }
    func_0x000103190e50(lVar5,0x112d3bc20,&UNK_10d904ef0);
    func_0x000103190e50(lVar11,0x112d3bc20,&UNK_10d904ef0);
    (**(code **)(lVar6 + 8))(lVar2,lVar1);
  }
  func_0x000103190e50(lVar4,0x112d68090,&UNK_10da24400);
  uVar7 = 0;
LAB_10318dfe0:
  return uVar7 & 1;
}



/* Entry: 10318e424; end: 10318e523;  */

void FUN_10318e424(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  lVar3 = 0x112f47b58;
  func_0x0001000285a8(0x112f47b58,&UNK_10db94a18);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  lVar3 = 0;
  FUN_10318efd8();
  *(long *)(unaff_x22 + 0x60) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar3 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar1 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
  lVar3 = 0x112f479d8;
  func_0x0001000285a8(0x112f479d8,&UNK_10db94958);
  *(long *)(unaff_x22 + 0x80) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318e524);
  return;
}



/* Entry: 10318e524; end: 10318e6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318e524(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  FUN_10318db48();
  lVar2 = _DAT_112f477f0;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar3 = *(long *)(unaff_x22 + 0x68);
    lVar9 = *(long *)(unaff_x22 + 0x40);
    func_0x000107c61428(lVar9 + _DAT_112f477f0,unaff_x22 + 0x10,0,0);
    FUN_103190e08(lVar9 + lVar2,uVar8,0x112f47b50,&UNK_10db94a10);
    (**(code **)(lVar3 + 0x30))(uVar8,1,uVar1);
    if ((int)uVar8 == 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
      lVar3 = *(long *)(unaff_x22 + 0x88);
      lVar2 = *(long *)(unaff_x22 + 0x70);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar9 = *(long *)(unaff_x22 + 0x60);
      func_0x00010318fe00(uVar5,lVar2,FUN_10318efd8);
      func_0x000103190e50(uVar5,0x112f47b50,&UNK_10db94a10);
      (**(code **)(lVar3 + 0x10))(uVar1,lVar2 + *(int *)(lVar9 + 0x18),uVar8);
      func_0x00010318fdc4(lVar2,FUN_10318efd8);
      (**(code **)(lVar3 + 0x20))(uVar10,uVar1,uVar8);
      func_0x000107c5fd34(uVar4,uVar8);
      plVar7 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa0) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10318e6fc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
                (plVar7,unaff_x22 + 0x28,*(undefined8 *)(unaff_x22 + 0x48));
      return;
    }
    func_0x000103190e50(*(undefined8 *)(unaff_x22 + 0x78),0x112f47b50,&UNK_10db94a10);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010318e620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xe);
  return;
}



/* Entry: 10318e6fc; end: 10318e747;  */

void FUN_10318e6fc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318e748,uVar1,0);
  return;
}



/* Entry: 10318e748; end: 10318e7f3;  */

void FUN_10318e748(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))
            (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x48));
  (**(code **)(lVar4 + 8))(uVar6,uVar2);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  uVar2 = 0;
  if (lVar4 != 0x10) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  }
  lVar1 = 0xe;
  if (lVar4 != 0x10) {
    lVar1 = lVar4;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010318e7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,lVar1);
  return;
}



/* Entry: 10318e7f4; end: 10318e857;  */

void FUN_10318e7f4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  lVar1 = 0x112f47b50;
  func_0x0001000285a8(0x112f47b50,&UNK_10db94a10);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318e858);
  return;
}



/* Entry: 10318e858; end: 10318e953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318e858(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar2 = 8;
  func_0x000107c5fc70(8,PTR___s12CoreGraphics7CGFloatVN_1103513a8);
  *(undefined8 *)(uVar2 + 0x10) = 8;
  *(undefined8 *)(uVar2 + 0x28) = 0;
  *(undefined8 *)(uVar2 + 0x20) = 0;
  *(undefined8 *)(uVar2 + 0x38) = 0;
  *(undefined8 *)(uVar2 + 0x30) = 0;
  *(undefined8 *)(uVar2 + 0x48) = 0;
  *(undefined8 *)(uVar2 + 0x40) = 0;
  *(undefined8 *)(uVar2 + 0x58) = 0;
  *(undefined8 *)(uVar2 + 0x50) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x3fd3333333333333;
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  func_0x000107c5fd5c();
  uVar4 = _DAT_112f477f8;
  lVar1 = _DAT_112f477f0;
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010318e8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar6,uVar5,uVar4);
    return;
  }
  *(long *)(unaff_x22 + 0x70) = _DAT_112f477f0;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  func_0x000107c61428(*(long *)(unaff_x22 + 0x60) + lVar1,unaff_x22 + 0x28,0,0);
  plVar3 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10318e954;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(0xa98ac7);
  return;
}



/* Entry: 10318e954; end: 10318e9b7;  */

void FUN_10318e954(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  uVar3 = *(undefined8 *)(lVar2 + 0x60);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10318e9b8;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x1031920f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar3,0);
  return;
}



/* Entry: 10318e9b8; end: 10318ebd7;  */

void FUN_10318e9b8(ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char cVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    uVar9 = *(ulong *)(unaff_x22 + 0x58);
    FUN_10318db48();
    if ((uVar9 & 1) != 0) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
      FUN_103190e08(*(long *)(unaff_x22 + 0x60) + *(long *)(unaff_x22 + 0x70),uVar8,0x112f47b50,
                    &UNK_10db94a10);
      lVar2 = 0;
      FUN_10318efd8();
      (**(code **)(*(long *)(lVar2 + -8) + 0x30))(uVar8,1,lVar2);
      lVar3 = *(long *)(unaff_x22 + 0x68);
      if ((int)uVar8 == 0) {
        puVar1 = (ulong *)(lVar3 + *(int *)(lVar2 + 0x24));
        uVar9 = *puVar1;
        *(ulong *)(unaff_x22 + 0x88) = uVar9;
        uVar7 = puVar1[1];
        *(ulong *)(unaff_x22 + 0x90) = uVar7;
        cVar6 = (char)puVar1[2];
        FUN_10318f128(uVar9,uVar7,cVar6);
        func_0x000103190e50(lVar3,0x112f47b50,&UNK_10db94a10);
        if (cVar6 == '\0') {
          uVar4 = uVar9;
          func_0x000107c4a2f8();
          if ((uVar4 & 1) != 0) {
            if ((*(byte *)(unaff_x22 + 0x10) & 7) == 0) {
              func_0x000107c5668c(uVar9);
            }
            func_0x000107c5d570(uVar9);
            func_0x000107c4e4bc();
            FUN_103198638();
            *(ulong *)(unaff_x22 + 0x98) = uVar9;
            if (uVar9 != 0) {
              lVar2 = *(long *)(unaff_x22 + 0x60) + *(long *)(unaff_x22 + 0x78);
              func_0x000107c61618();
              *(long *)(unaff_x22 + 0xa0) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_task_switch_110350130)(FUN_10318ebd8,0,0);
              return;
            }
            uVar9 = *(ulong *)(unaff_x22 + 0x88);
            FUN_10318f22c(uVar9,*(undefined8 *)(unaff_x22 + 0x90),0);
            func_0x000107c5fd5c();
            if ((uVar9 & 1) == 0) {
              plVar5 = (long *)(ulong)*(uint *)(
                                               PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                               + 4);
              func_0x000107c615b8();
              *(long **)(unaff_x22 + 0x80) = plVar5;
              *plVar5 = unaff_x22;
              plVar5[1] = (long)FUN_10318e954;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00
              )(0xa98ac7);
              return;
            }
            goto LAB_10318eb44;
          }
          cVar6 = '\0';
        }
        FUN_10318f22c(uVar9,uVar7,cVar6);
      }
      else {
        func_0x000103190e50(lVar3,0x112f47b50,&UNK_10db94a10);
      }
    }
  }
LAB_10318eb44:
  uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010318eb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar11,uVar10,uVar8);
  return;
}



/* Entry: 10318ebd8; end: 10318ec63;  */

void FUN_10318ebd8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10318fe88(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10318ec64,uVar2,uVar3);
  return;
}



/* Entry: 10318ec64; end: 10318ed03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318ec64(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  lVar1 = _DAT_112f477a0;
  if (lVar4 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0xa0);
    func_0x000107c61428(lVar4 + _DAT_112f477a0,unaff_x22 + 0x40,0,0);
    if (*(long *)(lVar4 + lVar1) != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x000107c52728();
      func_0x000107c6142c(uVar5);
      pcVar2 = FUN_10318ed04;
      goto LAB_10318ecf0;
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  pcVar2 = (code *)0x103192104;
LAB_10318ecf0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar3,0);
  return;
}



/* Entry: 10318ed04; end: 10318edaf;  */

void FUN_10318ed04(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
  uVar1 = *(ulong *)(unaff_x22 + 0x88);
  FUN_10318f22c(uVar1,*(undefined8 *)(unaff_x22 + 0x90),0);
  func_0x000107c5fd5c();
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010318ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar5,uVar4,uVar3);
    return;
  }
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10318e954;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)(0xa98ac7);
  return;
}



/* Entry: 10318edb0; end: 10318ee5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10318edb0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x0001000834e4(unaff_x20 + 0x78);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xa0));
  FUN_103190ca8(unaff_x20 + 0xa8);
  func_0x0001000834e4(unaff_x20 + 0xe8);
  lVar1 = _DAT_112f477e8;
  lVar2 = 0x112f477b8;
  func_0x0001000285a8(0x112f477b8,&UNK_10db94a70);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000103190e50(unaff_x20 + _DAT_112f477f0,0x112f47b50,&UNK_10db94a10);
  func_0x000103190cdc(unaff_x20 + _DAT_112f477f8);
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 10318ee5c; end: 10318ee77;  */

void FUN_10318ee5c(void)

{
  if (lRam0000000112f47828 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e74cce4);
  return;
}



/* Entry: 10318ee78; end: 10318ef6b;  */

void FUN_10318ee78(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBOWV_11034d658 + 0x40;
  puStack_68 = &UNK_10db948e0;
  puStack_58 = &UNK_10db948f8;
  puStack_50 = &UNK_10db94910;
  puStack_48 = &UNK_10db94928;
  puStack_40 = &UNK_10db948f8;
  uVar2 = 0x112f47838;
  lVar1 = 0x13f;
  FUN_10318ef80(0x13f,0x112f47838,FUN_10318ef6c,PTR___sScS12ContinuationVMa_11034fd50);
  if (uVar2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112f47840;
    lVar1 = 0x13f;
    FUN_10318ef80(0x13f,0x112f47840,FUN_10318efd8,PTR___sSqMa_11034e168);
    if (uVar2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10db94940;
      func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
    }
  }
  return;
}


