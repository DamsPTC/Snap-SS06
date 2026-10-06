/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10795f794; end: 10795f7bf;  */

void FUN_10795f794(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  _objc_alloc_init();
  uVar1 = uRam0000000113727008;
  uRam0000000113727008 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10795fd84; end: 10795fd8f; -[SCShakeAsyncLogManager .cxx_destruct] */

void FUN_10795fd84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 107960590; end: 107960637; +[SCShakeLogFileManager areLogsCompressedForId:inPath:] */

undefined *
FUN_107960590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf69bc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be1df20(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bfacbe0(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 107961028; end: 10796113b; +[SCShakeLogFileManager _copyFile:baseUrl:toFileName:] */

uint FUN_107961028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  _objc_retain(param_3);
  func_0x00010bdc2c60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bfad0c0();
  _open();
  if ((int)puVar2 < 0) {
    uVar5 = 0;
  }
  else {
    puVar3 = param_4;
    _objc_retainAutorelease();
    func_0x00010bfad0c0();
    _open();
    if ((int)puVar3 < 0) {
      uVar5 = 0;
    }
    else {
      puVar4 = puVar2;
      _fcopyfile(puVar2,puVar3,0,0xf);
      uVar5 = ~(uint)puVar4 >> 0x1f;
      _close(puVar2);
      puVar2 = puVar3;
    }
    _close(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  return uVar5;
}



/* Entry: 1079613d4; end: 10796148b; -[SCShakeSyncManager _transitionToState:backOffDelayMillis:] */

void FUN_1079613d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0f98a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f7fe0((double)(param_4 / 1000));
  _objc_release(uVar1);
  return;
}



/* Entry: 107961b08; end: 107961bef; -[SCShakeSyncManager _completeUploadTicket:isUploadSucceed:] */

void FUN_107961b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126d57f8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010c2bd3c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ba40(puVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28b040();
  _objc_release(puVar1);
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b6c20;
  func_0x00010c0b5cc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2bd3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12eb20(puVar1,param_2,param_3,lVar2);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107961c88; end: 107961c93; -[SCShakeSyncManager mIsCanceled] */

byte FUN_107961c88(long param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



/* Entry: 1079622bc; end: 1079622c3; -[SCShakeTicket mDescription] */

undefined8 FUN_1079622bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1079622fc; end: 107962303; -[SCShakeTicket mNetworkBandwidth] */

undefined8 FUN_1079622fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10796233c; end: 107962343; -[SCShakeTicket mHasScreenCaptured] */

undefined1 FUN_10796233c(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1079623a4; end: 1079623ab; -[SCShakeTicket carrierInfo] */

undefined8 FUN_1079623a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 1079623e4; end: 1079623eb; -[SCShakeTicket uploadUrl] */

undefined8 FUN_1079623e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 107962630; end: 107962637; -[SCShakeTicketBuilder mDescription] */

undefined8 FUN_107962630(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 107962670; end: 107962677; -[SCShakeTicketBuilder mNotificationEmails] */

undefined8 FUN_107962670(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1079626b0; end: 1079626b7; -[SCShakeTicketBuilder mNetworkBandwidth] */

undefined8 FUN_1079626b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 107962740; end: 107962747; -[SCShakeTicketBuilder mWithAttachments] */

undefined1 FUN_107962740(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 107962780; end: 107962787; -[SCShakeTicketBuilder mHasScreenCaptured] */

undefined1 FUN_107962780(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1079627c0; end: 1079627c7; -[SCShakeTicketBuilder mReportSource] */

undefined8 FUN_1079627c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 107962850; end: 107962857; -[SCShakeTicketBuilder preferenceInfo] */

undefined8 FUN_107962850(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 107962890; end: 107962897; -[SCShakeTicketBuilder lastConversationId] */

undefined8 FUN_107962890(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1079628d0; end: 1079628d7; -[SCShakeTicketBuilder metadataUploaded] */

undefined1 FUN_1079628d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 107963008; end: 10796340f;  */

void FUN_107963008(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar2 = PTR_PTR_1126d57f8;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c22ba40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bfc8040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b6c20;
  if (puVar3 == (undefined *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c2bd3c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6b4a0(puVar2);
    _objc_release(uVar1);
  }
  puVar3 = PTR_PTR_1126b6c20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0b3620(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14a900();
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b6c20;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c2bd3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14acc0();
  _objc_release();
  _dispatch_group_create();
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  puStack_88 = &UNK_107963410;
  puStack_80 = &UNK_107963420;
  puVar6 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  puStack_98 = &uStack_a0;
  _objc_opt_new();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0xc2000000;
  puStack_100 = &UNK_107963428;
  puStack_f8 = &UNK_1109f1c80;
  puStack_d0 = &uStack_a0;
  puStack_b8 = &uStack_c0;
  puStack_78 = puVar6;
  _objc_retain(uVar1);
  uStack_e8 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uStack_f0 = uVar1;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = uVar8;
  _objc_retain(uVar9);
  uStack_d8 = uVar9;
  puStack_c8 = &uStack_c0;
  func_0x00010bf97de0(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010bee7160(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar2;
  uStack_1b0 = 0xc2000000;
  puStack_1a8 = &UNK_107963818;
  puStack_1a0 = &UNK_1109f1cb0;
  uStack_118 = SUB81(puVar5,0);
  uStack_117 = *(undefined1 *)(param_1 + 0x98);
  uStack_116 = SUB81(puVar3,0);
  puStack_140 = &uStack_c0;
  uStack_198 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  uStack_128 = *(undefined8 *)(param_1 + 0x88);
  uStack_130 = *(undefined8 *)(param_1 + 0x80);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  uStack_190 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x50);
  uStack_188 = uVar9;
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uStack_180 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  uStack_178 = uVar9;
  _objc_retain(uVar8);
  uStack_120 = *(undefined8 *)(param_1 + 0x90);
  uVar9 = *(undefined8 *)(param_1 + 0x60);
  uStack_170 = uVar8;
  _objc_retain(uVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  uStack_168 = uVar9;
  _objc_retain(uVar8);
  puStack_138 = &uStack_a0;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uStack_160 = uVar8;
  _objc_retain(uVar9);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uStack_158 = uVar9;
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  uStack_150 = uVar7;
  _objc_retain(uVar8);
  uStack_148 = uVar8;
  func_0x000100bc0718(uVar1,uVar4,&puStack_1b8);
  _objc_release(uVar4);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(uStack_158);
  _objc_release(uStack_160);
  _objc_release(uStack_168);
  _objc_release(uStack_170);
  _objc_release(uStack_178);
  _objc_release(uStack_180);
  _objc_release(uStack_188);
  _objc_release(uStack_190);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uStack_f0);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(puStack_78);
  _objc_release(uVar1);
  return;
}



/* Entry: 107964604; end: 10796474b; -[SCShakeTicketAdapter _appendJiraMetaInfo:bugDescription:project:subProject:infoProviderRegistry:] */

void FUN_107964604(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  if (param_3 == (undefined *)0x0) {
    _objc_retain(param_7);
    _objc_opt_new();
  }
  else {
    _objc_retain(param_7);
    func_0x00010c0d3c80();
    puVar1 = param_3;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10796474c;
  puStack_68 = &UNK_1109f1d70;
  puStack_60 = puVar1;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(puVar1);
  func_0x00010bf97de0(param_7,param_2,&puStack_80);
  _objc_release(param_7);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(puStack_60);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1079659fc; end: 107965ae3; +[SCShakeTicketManager shouldInfiniteRetry:error:] */

undefined8 FUN_1079659fc(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c252ee0();
  if ((lVar1 == 0) && (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 == -999)) {
    func_0x00010bf6c020(PTR_PTR_1126d5810);
  }
  else {
    lVar1 = param_3;
    func_0x00010c252ee0();
    if (((lVar1 != 0) ||
        ((lVar1 = param_4, func_0x00010bf3ec40(), lVar1 != -0x4b0 &&
         (lVar1 = param_4, func_0x00010bf3ec40(), lVar1 != -0x3fb)))) &&
       (lVar1 = param_3, func_0x00010c252ee0(), lVar1 != 0x1ad)) {
      lVar1 = param_3;
      func_0x00010c252ee0();
      if (lVar1 == 0) {
        lVar1 = param_4;
        func_0x00010bf3ec40(param_4);
        func_0x00010c0788c0(param_1,param_2,lVar1);
        if ((param_1 & 1) != 0) goto LAB_107965abc;
      }
      uVar2 = 0;
      goto LAB_107965ac0;
    }
  }
LAB_107965abc:
  uVar2 = 1;
LAB_107965ac0:
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 107965f3c; end: 1079661ff; -[SCShakeTicketManager _uploadShakeTicket:latestNotificationInfo:configuration:onSuccess:onDuplicate:onTransientError:onPermanentError:] */

void FUN_107965f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_107966200;
  puStack_90 = &UNK_1109f1e90;
  _objc_retain(param_9);
  uStack_88 = param_9;
  _objc_retain(param_6);
  ppuVar2 = &puStack_a8;
  uStack_80 = param_6;
  _objc_retainBlock();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  puStack_f0 = &UNK_1079662d4;
  puStack_e8 = &UNK_1109f1ec0;
  _objc_retain(param_9);
  uStack_d0 = param_9;
  uStack_e0 = param_1;
  ppuStack_c8 = ppuVar2;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  uStack_c0 = param_7;
  uStack_b8 = param_6;
  _objc_retain(param_8);
  uStack_b0 = param_8;
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar3 = &puStack_100;
  _objc_retainBlock(ppuVar3);
  puStack_130 = puVar1;
  uStack_128 = 0xc2000000;
  puStack_120 = &UNK_107966754;
  puStack_118 = &UNK_1109f1ef0;
  uStack_110 = param_9;
  uStack_108 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_9);
  ppuVar4 = &puStack_130;
  _objc_retainBlock(ppuVar4);
  uVar5 = param_5;
  func_0x00010bf70800();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c0829a0();
  _objc_release(uVar5);
  if ((uVar6 & 1) == 0) {
    func_0x00010bed0f00(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bdd15c0();
    _objc_retainAutoreleasedReturnValue();
  }
  uVar5 = param_5;
  func_0x00010c0d7ea0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c28e2c0();
  _objc_release(uVar5);
  _objc_release(param_1);
  _objc_release(ppuVar4);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(ppuVar3);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_d8);
  _objc_release(uStack_d0);
  _objc_release(ppuVar2);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(param_8);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 107967644; end: 107967777; -[SCShakeTicketManager _jsonStringFromUnsanitizedString:] */

void FUN_107967644(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf64b60(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c008340();
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c08fa60(puVar1);
  puVar3 = puVar1;
  func_0x00010c260c20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  func_0x00010c260c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 10796835c; end: 10796847b; -[SCShakeTicketTable updateTicketStatusWithID:uploadStatus:] */

undefined *
FUN_10796835c(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined **ppuStack_120;
  long lStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined1 **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  if (param_4 < 3) {
    ppuStack_58 = (undefined **)(&PTR_PTR_1109f1f20)[param_4];
  }
  else {
    ppuStack_58 = &PTR____CFConstantStringClassReference_110e45778;
  }
  puVar8 = *(undefined **)(param_1 + 8);
  puVar10 = *(undefined **)(param_1 + 0x18);
  puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = param_3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar11;
  func_0x00010bf9b080();
  _objc_release(puVar11);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  puStack_68 = &UNK_10796847c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_sync_enter(param_3);
  puVar8 = *(undefined **)(param_3 + 8);
  uVar12 = *(undefined8 *)(param_3 + 0x20);
  puVar11 = puVar10;
  if (puVar10 == (undefined *)0x0) {
    puVar11 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_d0 = puVar11;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_c8 = puVar2;
  uStack_c0 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_d0,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b080(puVar8,param_2,uVar12,puVar3);
  uVar13 = (ulong)(puVar10 == (undefined *)0x0);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (puVar10 == (undefined *)0x0) {
    _objc_release(puVar11);
  }
  _objc_sync_exit(param_3);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return puVar8;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_3);
  puVar3 = puVar10;
  __Unwind_Resume();
  puStack_d8 = &UNK_1079685f4;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar3;
  uStack_110 = uVar13;
  puStack_108 = puVar8;
  puStack_100 = puVar11;
  lStack_f8 = param_3;
  uStack_f0 = param_5;
  puStack_e8 = puVar10;
  ppuStack_e0 = &puStack_70;
  if (*(long *)(puVar3 + 8) == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    _objc_retain();
    _objc_sync_enter(puVar3);
    lVar7 = *(long *)(puVar3 + 8);
    uVar12 = *(undefined8 *)(puVar3 + 0x28);
    ppuStack_120 = &PTR____CFConstantStringClassReference_110ea6c58;
    puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_120,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9b000(lVar7,param_2,uVar12,puVar11);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    lVar6 = lVar7;
    func_0x00010bfb1b60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar10 = PTR_PTR_1126d5828;
      _objc_alloc_init();
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6c78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c12e0(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110def758);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767dd8();
      func_0x00010c1c1460(puVar10,param_2,lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69a58);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1440(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110dd3178);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1220(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110db1138);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1240(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69818);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14c0(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6c98);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13e0(puVar10,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6cb8);
      func_0x00010c1c1300(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6cd8);
      func_0x00010c1c14a0(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6cf8);
      func_0x00010c1c1540(puVar10,param_2,lVar4);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = lVar6;
      func_0x00010c0b4ac0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d18);
      func_0x00010c0df7a0(puVar11,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c13a0(puVar10,param_2,puVar11);
      _objc_release(puVar11);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d38);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767714();
      func_0x00010c1c13c0(puVar10,param_2,lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d58);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010b767f1c();
      func_0x00010c1c1480(puVar10,param_2,lVar5);
      _objc_release(lVar4);
      puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar4 = lVar6;
      func_0x00010c0b4ac0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e06df8);
      func_0x00010c0df7a0(puVar11,param_2,lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c11c0(puVar10,param_2,puVar11);
      _objc_release(puVar11);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d78);
      func_0x00010c1c1520(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6d98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1500(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6db8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c14e0(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6dd8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1360(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6df8);
      func_0x00010c1c1280(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e18);
      func_0x00010c1c12a0(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e38);
      func_0x00010c1c1260(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e58);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1180(puVar10,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69918);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1420(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69db8);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf44740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c1340(puVar10,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e78);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179d60(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6e98);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1dfd80(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6eb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c171b80(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69898);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c162820(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110e698b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7880(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6ed8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b7ac0(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110e69838);
      func_0x00010c1fbba0(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6ef8);
      func_0x00010c1f51a0(puVar10,param_2,lVar4);
      lVar4 = lVar6;
      func_0x00010bf63a20(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c218e40(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010c25d260(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d080(puVar10,param_2,lVar4);
      _objc_release(lVar4);
      lVar4 = lVar6;
      func_0x00010bf1f2e0(lVar6,param_2,&PTR____CFConstantStringClassReference_110ea6f58);
      func_0x00010c1c7600(puVar10,param_2,lVar4);
      puVar11 = puVar10;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
    }
    _objc_release(lVar6);
    _objc_release(lVar7);
    _objc_sync_exit(puVar3);
    _objc_release();
    puVar10 = puVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_118) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return puVar11;
  }
  ___stack_chk_fail();
  _objc_sync_exit(puVar10);
  __Unwind_Resume();
  puVar11 = puVar2;
  func_0x00010bdf8000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d5850;
  _objc_alloc();
  puVar10 = puVar11;
  func_0x00010c0f5800(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar3,param_2,puVar10);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  *(undefined **)(puVar2 + 8) = puVar3;
  _objc_release(uVar12);
  _objc_release(puVar10);
  uVar9 = *(undefined8 *)(puVar2 + 8);
  uVar12 = uVar9;
  func_0x00010c252980(uVar9,param_2,&PTR____CFConstantStringClassReference_110ea6f78);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9afc0(uVar9,param_2,uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar12);
  lVar6 = *(long *)(puVar2 + 8);
  if ((lVar6 != 0) && (func_0x00010c088a40(), (int)lVar6 != 0xe)) {
    iVar1 = (int)*(undefined8 *)(puVar2 + 8);
    func_0x00010c088a40();
    if (iVar1 != 5) {
      iVar1 = (int)*(undefined8 *)(puVar2 + 8);
      func_0x00010c088a40();
      if (iVar1 != 0xb) goto code_r0x000107968ee0;
    }
  }
  func_0x00010bf6bac0(puVar2);
  puVar3 = PTR_PTR_1126d5850;
  _objc_alloc();
  puVar10 = puVar11;
  func_0x00010c0f5800(puVar11);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034700(puVar3,param_2,puVar10);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  *(undefined **)(puVar2 + 8) = puVar3;
  _objc_release(uVar12);
  _objc_release(puVar10);
code_r0x000107968ee0:
  uVar9 = *(undefined8 *)(puVar2 + 8);
  uVar12 = uVar9;
  func_0x00010c252980(uVar9,param_2,&PTR____CFConstantStringClassReference_110ea6f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9b060(uVar9,param_2,uVar12);
  _objc_release(uVar12);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c252980(uVar12,param_2,&PTR____CFConstantStringClassReference_110ea6fb8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x10) = uVar12;
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c252980(uVar12,param_2,&PTR____CFConstantStringClassReference_110ea6fd8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = uVar12;
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c252980(uVar12,param_2,&PTR____CFConstantStringClassReference_110ea6ff8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = uVar12;
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c252980(uVar12,param_2,&PTR____CFConstantStringClassReference_110ea7018);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = uVar12;
  _objc_release(uVar9);
  uVar12 = *(undefined8 *)(puVar2 + 8);
  func_0x00010c252980(uVar12,param_2,&PTR____CFConstantStringClassReference_110ea7038);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = uVar12;
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return puVar11;
}



/* Entry: 107969364; end: 10796940b; -[SCShakeTicketUploader run] */

void FUN_107969364(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_1 + 0x50) != 5) {
    return;
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 8);
  func_0x00010c0cc860();
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c28ea80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      func_0x00010c28ea80();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf51e00();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar5;
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar5 = 1;
      goto LAB_1079693f8;
    }
  }
  uVar5 = 0;
LAB_1079693f8:
                    /* WARNING: Could not recover jumptable at 0x00010be819b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processNextStep__11257e008,uVar5);
  return;
}



/* Entry: 1079697b4; end: 1079698f3; -[SCShakeTicketUploader _compressFiles] */

/* WARNING: Possible PIC construction at 0x00010796986c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107969870) */

void FUN_1079697b4(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c0b6000();
  puVar4 = PTR_PTR_1126b6c20;
  if ((uVar1 & 1) == 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c0b5de0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c2bd3c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfc3ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    _objc_retain(0);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (puVar4 == (undefined *)0x0) {
      lVar5 = *(long *)(param_1 + 0x38);
      func_0x00010bf6e340(0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))(lVar5,0,uVar6,1);
      _objc_release(uVar6);
      _objc_release(0);
      _objc_release(0);
      return;
    }
    _objc_retain(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar4;
    _objc_release(uVar2);
    uVar2 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be819b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processNextStep__11257e008,uVar2);
  return;
}



/* Entry: 107969eb4; end: 107969ebb; -[SCShakeTicketUploader mCurrentStep] */

undefined8 FUN_107969eb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10796a164; end: 10796a1d3; -[SCShakeUploadThrottleController setServerBackoffForId:serverBackoffMilliseconds:] */

void FUN_10796a164(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c0df780(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560(uVar2,param_2,puVar1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10796a438; end: 10796a43f; -[SCSnapAirConfiguration eventLogger] */

undefined8 FUN_10796a438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10796a56c; end: 10796a5cb; -[SCNotificationProcessingCompletion complete:] */

void FUN_10796a56c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _os_unfair_lock_lock(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 10796a858; end: 10796a85f; -[SCNativeNotificationProcessedEvent notification] */

undefined8 FUN_10796a858(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10796aa04; end: 10796aa27; -[SCRemixOperaMetadata copyWithZone:] */

undefined8 FUN_10796aa04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10796abec; end: 10796abf3; -[SCRemixOperaMetadata mentionedPublicProfileId] */

undefined8 FUN_10796abec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10796af0c; end: 10796af73; +[MFCCover descriptor] */

void FUN_10796af0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000113727088 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112b65c50,
                        &PTR____CFConstantStringClassReference_110ea7198,&PTR_DAT_11323b508,
                        &PTR_s_id_p_11323b5a0,5,0x30,0x1c);
    puRam0000000113727088 = puVar1;
  }
  return;
}



/* Entry: 10796b21c; end: 10796b2d7; -[SCDeepLinkingUrlInterceptor initWithInitialConfig:circumstanceEngine:application:alertViewCoordinator:internalDeeplinkHandler:] */

undefined8
FUN_10796b21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_7);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_10796b2d8;
  puStack_50 = &UNK_1109f1f70;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x00010c01db80(param_1,param_2,param_3,param_4,param_5,param_6,&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_7);
  return param_1;
}



/* Entry: 10796bb8c; end: 10796bb97; -[SCDeepLinkingUrlInterceptor handleOpenURL:additionalInfo:completion:] */

void FUN_10796bb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd1bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_handleOpenURL_additionalInfo_onD_1125d2090,param_3,param_4,0,param_5);
  return;
}



/* Entry: 10796c29c; end: 10796c2af;  */

void FUN_10796c29c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010796c2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10796c874; end: 10796c893;  */

void FUN_10796c874(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10796cefc; end: 10796cf77; -[SCDeepLinkingUrlInterceptor notifyDelegateDidClickOKForLeavingAppForURL:] */

void FUN_10796cefc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x50;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a36e0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10796d390; end: 10796d547;  */

void FUN_10796d390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5860;
  _objc_retain();
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_alloc();
  func_0x00010c05de60();
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10796e860; end: 10796e8e7;  */

void FUN_10796e860(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be31500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10796efa8; end: 10796efab; -[SCStoriesChromeInteractionSession _openRepostCreatorMiniProfileForFriendStories] */

void FUN_10796efa8(void)

{
  return;
}



/* Entry: 10796f838; end: 10796f8a7;  */

void FUN_10796f838(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf99b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0eb7c0();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079704d0; end: 10797054b; -[SCStoriesSharingSession extraPropertiesForStorySnap:] */

void FUN_1079704d0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x10);
  _objc_release(param_3);
  if (param_3 == lVar2) {
    func_0x00010bef7f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x18));
    func_0x00010bef7f60(puVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107971d98; end: 107971f3f; -[SCStoriesSharingSession _handleCopyLinkWithAttribution:] */

void FUN_107971d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_retain(param_3);
  uVar2 = *(ulong *)(param_1 + 0x10);
  func_0x000108539a68();
  if ((uVar2 & 1) == 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010853a378();
    if ((uVar2 & 1) == 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x00010853a0e0();
      if (iVar1 == 0) goto LAB_107971f24;
      uVar11 = 1;
    }
    else {
      uVar11 = 3;
    }
  }
  else {
    uVar11 = 2;
  }
  lVar3 = param_1;
  func_0x00010be1bc40(param_1,param_2,uVar11,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar5 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar5);
  lVar6 = lVar5;
  func_0x00010c27f040();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c27f020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar4,param_2,lVar7,1);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  puVar8 = PTR_PTR_1126b3ee8;
  _objc_alloc(PTR_PTR_1126b3ee8);
  puVar9 = puVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045aa0(puVar8,param_2,0x11,1,lVar3,param_1,puVar4,puVar9);
  _objc_release(puVar9);
  uVar10 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf57580();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = uVar11;
  _objc_release(uVar12);
  _objc_release(uVar10);
  func_0x00010bfd26e0(*(undefined8 *)(param_1 + 0x140),param_2,0xf);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(lVar3);
LAB_107971f24:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1079728a4; end: 107972d53; -[SCStoriesSharingSession _launchLegacySendToScopeFromViewController:attribution:shareSheetConfiguration:creatorUserName:friendInThisSnapIds:isCameosStory:] */

void FUN_1079728a4(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,long param_5,
                  undefined8 param_6,long param_7,int param_8)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar2 = *(ulong *)(param_1 + 0xb0);
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c076220();
  _objc_release(uVar2);
  puVar5 = param_4;
  if ((uVar3 & 1) == 0) {
    puVar15 = PTR_PTR_1126d5880;
    if (param_5 == 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2923e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108539520(uVar14,uVar4);
      _objc_release(uVar4);
      if ((int)uVar14 == 0) {
        param_5 = 0;
        puVar15 = PTR_PTR_1126d5880;
      }
      else {
        param_5 = param_1;
        func_0x00010be1b720();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126d5880;
      }
    }
    PTR_PTR_1126d5880 = puVar15;
    if (param_8 != 0) {
      func_0x00010c08f4a0(puVar15);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b0380();
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar5 = puVar15;
      func_0x00010bf21f60(puVar15);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(puVar15);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107972d54(uVar4,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xe8));
    lVar6 = param_7;
    func_0x00010bf529e0();
    if (lVar6 == 0) {
      puVar15 = (undefined *)0x0;
    }
    else {
      puVar15 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf5b080();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar7;
    func_0x00010bf5b3e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar14;
    func_0x00010bf4de40();
    _objc_release(uVar14);
    _objc_release(uVar7);
    puStack_68 = PTR_PTR_1126b1a20;
    _objc_alloc();
    lVar6 = param_1;
    func_0x00010bdd9d80();
    if ((int)lVar6 != 0) {
      func_0x000108faa89c(*(undefined8 *)(param_1 + 0xe8));
    }
    if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
      func_0x00010c01d660();
    }
    else {
      lVar6 = param_5;
      func_0x00010c26b9e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01d660();
      _objc_release(lVar6);
    }
    puVar9 = PTR_PTR_1126c90a0;
    _objc_alloc(PTR_PTR_1126c90a0);
    lVar6 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar6);
    lVar10 = lVar6;
    func_0x00010c22b5a0();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010c22b620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c031ee0(puVar9);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar6);
    if ((int)uVar4 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)*(undefined8 *)(param_1 + 0xe8);
      func_0x000108faa888();
    }
    if (*(long *)(param_1 + 0xb8) == 0) {
      puVar12 = PTR_PTR_1126b1a28;
      _objc_alloc();
      func_0x00010c039180();
      uVar4 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined **)(param_1 + 0xb8) = puVar12;
      _objc_release(uVar4);
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0xe8);
    func_0x000108faa89c();
    if ((iVar1 != 0) && ((int)uVar8 == 1)) {
      _objc_release(param_5);
      param_5 = 0;
    }
    puVar13 = PTR_PTR_1126b1a30;
    _objc_alloc(PTR_PTR_1126b1a30);
    func_0x00010bff5040();
    puVar12 = PTR_DAT_1126a4f48;
    _objc_retain(param_3);
    uVar2 = param_3;
    func_0x00010010fab4(param_3,puVar12);
    uVar3 = param_3;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    if (uVar3 == 0) {
      uVar16 = 1;
    }
    if ((uVar16 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c29e000(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d9920();
      _objc_release(uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + 0xb0);
    func_0x00010bfe63a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b7c0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar13);
    _objc_release(puVar9);
    _objc_release(puStack_68);
    _objc_release(puVar15);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107973ab4; end: 107973b9f;  */

void FUN_107973ab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x000107d51d8c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  puVar4 = PTR_PTR_1126ae558;
  puVar3 = PTR_PTR_1126b0800;
  _objc_alloc(PTR_PTR_1126b0800);
  uVar1 = uVar2;
  func_0x00010beec820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c051840(puVar3,param_2,uVar1,uVar2,0,0xc,0,0);
  func_0x00010bfe9ca0(puVar4,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107974a9c; end: 107974b43;  */

void FUN_107974a9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_2);
  lVar4 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar4);
  func_0x00010bea7da0();
  _objc_release(lVar4);
  puVar2 = PTR_PTR_1126b1c68;
  uVar1 = param_2;
  func_0x00010c28f340(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c29be00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107975100; end: 10797515f;  */

void FUN_107975100(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
    _objc_retain(param_2);
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee10e0();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107975834; end: 107975acf; -[SCStoriesSharingSession _sendMessageWithSendToSelection:sendToSessionId:shareSheetConfiguration:] */

void FUN_107975834(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c15f2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126afca8;
  if (lVar3 == 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110ea2cb8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea2cb8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c238700(puVar1);
  }
  else {
    ppuVar9 = param_3;
    func_0x00010c122f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_3;
    func_0x00010c2584a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = param_3;
    func_0x00010bf24f00(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = param_3;
    func_0x00010bfcf800(param_3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = param_3;
    func_0x00010befd440(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea0720(param_1);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar9);
    if (*(char *)(param_1 + 0xf0) != '\x01') goto LAB_107975aa0;
    ppuVar9 = param_3;
    func_0x00010c0fb120();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar9;
    func_0x00010bf529e0();
    if (ppuVar4 != (undefined **)0x0) {
      lVar3 = param_5;
      func_0x00010c26b9e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        lVar2 = param_5;
        func_0x00010c26b9e0();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar2);
        _objc_release(lVar3);
        _objc_release(ppuVar9);
        if (lVar8 == 0) goto LAB_107975aa0;
        ppuVar9 = *(undefined ***)(param_1 + 0xe0);
        func_0x00010c269d40(ppuVar9);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_3;
        func_0x00010c0fb120(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5;
        func_0x00010c26b9e0(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar8 = param_5;
        func_0x00010c22c620(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c15c5a0(ppuVar9);
        _objc_release(lVar8);
        _objc_release(lVar2);
        _objc_release(lVar3);
        _objc_release(ppuVar4);
      }
    }
  }
  _objc_release(ppuVar9);
LAB_107975aa0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107976dd4; end: 107976e8b;  */

void FUN_107976dd4(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126afca8;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e1c5f8;
  if (param_2 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e05498;
  }
  func_0x00010bcbeaa8(ppuVar2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c238760(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 107977940; end: 107977983; -[SCStoriesSharingSession _didDismissSendViewController] */

void FUN_107977940(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079789a0; end: 107978a57;  */

void FUN_1079789a0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x0001008522a8();
  if ((int)lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc60();
    _objc_release(puVar2);
  }
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  puVar2 = PTR_PTR_1126b2d30;
  func_0x00010c22a860(PTR_PTR_1126b2d30);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be004e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10797941c; end: 10797944b; -[SCStoriesSharingSession _setSpotlightSnapDownloadResult:] */

void FUN_10797941c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10797975c; end: 107979763; -[SCStoriesSharingSession currentStoryViewId] */

undefined8 FUN_10797975c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x180);
}



/* Entry: 107979a48; end: 107979aeb; -[SCDiscoverFeedActionHandlerStoryOpenContext initWithInitialCheetahStory:initialStorySectionKey:] */

undefined1 *
FUN_107979a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8fd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 107979b4c; end: 107979b7b; -[SCDiscoverFriendStoryTileTapPrecomputedContext .cxx_destruct] */

void FUN_107979b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10797a9cc; end: 10797aa63;  */

void FUN_10797a9cc(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10797c3dc; end: 10797c4e3; -[SCDiscoverFeedActionHandler _backPatchSaberActionHandlerDelegate:] */

void FUN_10797c3dc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d58a8;
  _objc_opt_class(PTR_PTR_1126d58a8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 == 0) {
      func_0x00010c18b5e0(param_3);
    }
  }
  puVar2 = PTR_PTR_1126c2220;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar3 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  if (uVar3 != 0) {
    uVar4 = param_3;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar4 == 0) {
      func_0x00010c18b5e0(param_3);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10797c824; end: 10797c97f; -[SCDiscoverFeedActionHandler _updateDiscoverFeedOperaSessionWithLastPlayedDataModel:] */

void FUN_10797c824(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  puStack_68 = &UNK_10797c980;
  puStack_60 = &UNK_10797c990;
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = uVar1;
  _objc_retain(param_3);
  _objc_retain(param_3);
  func_0x00010c0bd820(uVar2);
  uVar1 = puStack_78[5];
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 10797d52c; end: 10797d64f; -[SCDiscoverFeedActionHandler _canPlayStories] */

byte FUN_10797d52c(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar2);
  bVar1 = *(byte *)(param_1 + 0xa8);
  if ((bVar1 & 1) != 0) goto LAB_10797d614;
  if (*(long *)(param_1 + 0x280) != 0) {
    func_0x00010bf2eb40();
    func_0x00010be6dd20(param_1);
    lVar4 = param_1 + 0x60;
    _objc_loadWeakRetained();
    lVar3 = lVar4;
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      lVar3 = *(long *)(param_1 + 0x178);
      func_0x00010c150520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      if (lVar3 == 0) goto LAB_10797d5e8;
    }
    else {
      _objc_release();
      _objc_release(lVar4);
    }
    func_0x00010bddf8a0(param_1);
  }
LAB_10797d5e8:
  lVar4 = *(long *)(param_1 + 0x1c8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x1c8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
LAB_10797d614:
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar2);
  return bVar1 ^ 1;
}



/* Entry: 10797d974; end: 10797d98b; -[SCDiscoverFeedActionHandler _isVerticalVOperaSwipeLeftToContextEnabledForFeedType:] */

undefined8 FUN_10797d974(void)

{
  func_0x00010be45660();
  return 0;
}



/* Entry: 10797dcc8; end: 10797ddc7; -[SCDiscoverFeedActionHandler _handleShowStoryDebugViewWithStory:] */

void FUN_10797dcc8(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x24;
  undefined *puVar11;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined1 **ppuStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long *plStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined auStack_138 [128];
  long lStack_b8;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_1126b02a8;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  ppuStack_58 = &PTR____CFConstantStringClassReference_110eb6238;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_50 = param_3;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_50,&ppuStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01b460(puVar2,param_2,&PTR____CFConstantStringClassReference_110eb5e18,puVar6);
  _objc_release(puVar6);
  func_0x00010bfd0140(param_1,param_2,param_1,puVar2,0);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_180;
  puStack_68 = &UNK_10797ddc8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(param_1);
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  plStack_170 = (long *)0x0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  puVar10 = *(undefined **)(puVar2 + 0x28);
  _objc_retain(puVar10);
  puVar7 = auStack_138;
  puVar11 = puVar10;
  func_0x00010bf52a60();
  if (puVar11 != (undefined *)0x0) {
    unaff_x24 = *plStack_170;
    puVar6 = puVar11;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_170 != unaff_x24) {
          _objc_enumerationMutation(puVar10);
        }
        uVar4 = *(ulong *)(lStack_178 + (long)puVar11 * 8);
        puVar8 = (undefined8 *)puVar2;
        puVar7 = puVar3;
        func_0x00010bfd0140();
        if ((uVar4 & 1) != 0) goto code_r0x00010797dec4;
        puVar11 = puVar11 + 1;
      } while (puVar6 != puVar11);
      puVar7 = auStack_138;
      puVar6 = puVar10;
      puVar8 = &uStack_180;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
code_r0x00010797dec4:
  _objc_release(puVar10);
  _objc_release(puVar3);
  puVar11 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  puStack_188 = &UNK_10797df14;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar9 = *(long *)(puVar11 + 0x168);
  puVar5 = puVar11;
  lStack_1c0 = unaff_x24;
  puStack_1b8 = puVar6;
  puStack_1b0 = puVar10;
  puStack_1a8 = puVar3;
  puStack_1a0 = puVar2;
  puStack_198 = param_1;
  ppuStack_190 = &puStack_70;
  if (lVar9 != 0) {
    _objc_retain(puVar7);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(puVar11 + 0x168));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar5 = PTR_PTR_1126b3530;
    _objc_alloc();
    puVar2 = puVar11 + 0x238;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c038f40(puVar5,param_2,puVar2,1);
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c68b8;
    ppuStack_1d8 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuStack_1d0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110cad80;
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_1d0,&ppuStack_1d8
                        ,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d0a00(puVar2,param_2,puVar7,puVar6,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = *(undefined **)(puVar11 + 0x170);
    func_0x00010bf241c0(puVar6,param_2,puVar5,0,0,0,puVar2,0x13,0x5a,0xffffffffffffffff);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    puVar8 = (undefined8 *)puVar6;
    func_0x00010bf9d620(*(undefined8 *)(puVar11 + 0x168));
    _objc_release(puVar6);
    _objc_release(puVar2);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  iVar1 = (int)*(undefined8 *)(puVar5 + 0x198);
  func_0x00010c071800();
  if ((iVar1 != 0) &&
     (puVar2 = (undefined *)puVar8, func_0x00010c08fa60(), puVar2 != (undefined *)0x0)) {
    puVar6 = PTR_PTR_1126b3530;
    _objc_alloc(PTR_PTR_1126b3530);
    puVar2 = puVar5 + 0x238;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c038f40(puVar6,param_2,puVar2,1);
    _objc_release(puVar2);
    puVar7 = PTR_PTR_1126b5c08;
    _objc_alloc(PTR_PTR_1126b5c08);
    puVar2 = puVar5 + 0x238;
    _objc_loadWeakRetained(puVar2);
    func_0x00010c039140(puVar7,param_2,puVar2,puVar8,2,puVar6,puVar5);
    _objc_release(puVar2);
    func_0x00010c08b7c0(*(undefined8 *)(puVar5 + 0x198),param_2,puVar7,puVar5);
    _objc_release(puVar7);
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10797e9ac; end: 10797e9f3;  */

void FUN_10797e9ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10797fc04; end: 10797fc0b;  */

void FUN_10797fc04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 1079810e4; end: 10798112b;  */

void FUN_1079810e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf454e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108f51f98();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107982424; end: 107982563;  */

undefined1 FUN_107982424(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0bdf60(param_2);
  uVar1 = *(undefined1 *)(puStack_68 + 3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 107982d88; end: 107982e93;  */

undefined8 FUN_107982d88(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  puVar1 = PTR_PTR_1126c2118;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    uVar2 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar2 = param_1;
      _objc_opt_isKindOfClass(param_1,puVar1);
      if ((uVar2 & 1) == 0) goto LAB_107982e74;
    }
    puVar1 = PTR_PTR_1126c11e8;
    func_0x00010c11af80();
LAB_107982e64:
    if (((ulong)puVar1 & param_2) != 0) {
      uVar4 = 4;
      goto LAB_107982e78;
    }
  }
  else {
    _objc_retain(param_1);
    _objc_opt_class(puVar1);
    uVar3 = param_1;
    _objc_opt_isKindOfClass(param_1,puVar1);
    uVar2 = param_1;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(param_1);
    uVar3 = uVar2;
    func_0x000108538878();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      puVar1 = PTR_PTR_1126c11e8;
      func_0x00010c11aac0();
      goto LAB_107982e64;
    }
  }
LAB_107982e74:
  uVar4 = 1;
LAB_107982e78:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 107983c54; end: 107983d07; -[SCDiscoverFeedActionHandler _feedTypeFromGroupDataModel:] */

void FUN_107983c54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c2118;
  _objc_opt_class(PTR_PTR_1126c2118);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar3 = param_3;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR_PTR_1126bdd30;
    _objc_opt_class(PTR_PTR_1126bdd30);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_PTR_1126bdd28;
      _objc_opt_class(PTR_PTR_1126bdd28);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
        goto LAB_107983ce8;
      }
    }
    func_0x00010bfa4340(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001085357a4(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107983ce8:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 107984134; end: 107984223; -[SCDiscoverFeedActionHandler operaPresenterWillBeginPresenting:transitionAnimator:] */

void FUN_107984134(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x280) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x280) = param_3;
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 200);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc780();
  _objc_release(uVar1);
  dVar2 = *(double *)(param_1 + 0x1a8);
  if (dVar2 != 0.0) {
    _CACurrentMediaTime();
    func_0x000107b08de0(*(undefined8 *)(param_1 + 0x1a0),*(undefined1 *)(param_1 + 0x1b8),
                        *(undefined8 *)(param_1 + 0x1b0),
                        (long)((dVar2 - *(double *)(param_1 + 0x1a8)) * 1000.0));
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + 0xa8) = 1;
  param_1 = param_1 + 0x260;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0eb4a0();
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107984d00; end: 107984fab; -[SCDiscoverFeedActionHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_107984d00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_3;
  func_0x00010bf5fb00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed6f20(param_1);
  uVar10 = *(undefined8 *)(param_1 + 0xa0);
  uVar11 = *(undefined8 *)(param_1 + 0x248);
  uVar1 = *(undefined1 *)(param_1 + 0x150);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c231d40();
  func_0x00010798dab4(uVar10,0,uVar11,uVar6,uVar1,0,uVar7,uVar4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0xa0);
  func_0x000107af901c();
  lVar9 = param_1 + 0x250;
  _objc_loadWeakRetained(lVar9);
  func_0x00010bf7bf00();
  _objc_release(param_4);
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010be411a0();
  if ((int)lVar9 == 0) {
    uVar6 = param_3;
    if (lVar5 == 0xf7) {
      func_0x00010c27a6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (lVar5 == 5) {
      func_0x00010c27a6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (lVar5 != 2) goto LAB_107984f04;
      uVar7 = *(undefined8 *)(param_1 + 0x188);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b1270;
      func_0x00010bf71a60(PTR_PTR_1126b1270);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f320();
      _objc_release(puVar8);
      _objc_release(uVar7);
      func_0x00010c27a6a0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c28b4e0();
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x188);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0ced60();
    uVar4 = uVar2;
    FUN_107982d88(uVar2,uVar7);
    *(undefined8 *)(param_1 + 0x138) = uVar4;
  }
  _objc_release(uVar6);
LAB_107984f04:
  lVar9 = *(long *)(param_1 + 0x1c8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar9 != 0) {
    puVar8 = PTR_PTR_1126c2d60;
    func_0x00010c0f27c0(PTR_PTR_1126c2d60);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x1d8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar6);
    _objc_release(puVar8);
  }
  _objc_release(uVar10);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10798541c; end: 10798541f; -[SCDiscoverFeedActionHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_10798541c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0eae90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_operaPresenterDidFinishPresentin_1126185b8);
  return;
}



/* Entry: 107985958; end: 107985ac3; -[SCDiscoverFeedActionHandler setPresentingViewController:] */

void FUN_107985958(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x238,param_3);
  uVar10 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar6 = *(long *)(param_1 + 0x28);
  _objc_retain(lVar6);
  lVar3 = lVar6;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar6);
        }
        puVar2 = PTR_DAT_1126a4e80;
        lVar7 = *(long *)(lStack_128 + lVar9 * 8);
        _objc_retain(lVar7);
        lVar4 = lVar7;
        func_0x00010010fab4(lVar7,puVar2);
        lVar1 = lVar7;
        if ((int)lVar4 == 0) {
          lVar1 = 0;
        }
        _objc_retain(lVar1);
        _objc_release(lVar7);
        if (lVar1 != 0) {
          func_0x00010c1e1580(lVar7);
        }
        _objc_release(lVar1);
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar6;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  if ((*(byte *)(param_3 + 0x164) & 1) == 0) {
    if (puVar5 == (undefined8 *)0x0) {
      lVar3 = param_3 + 0x238;
      _objc_loadWeakRetained(lVar3);
      lVar6 = lVar3;
      func_0x00010c29bf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectGetMaxY();
      uVar11 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar14 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      func_0x00010bc8525c(uVar11,uVar12,uVar13,uVar14,uVar10);
      _objc_release(lVar6);
      _objc_release(lVar3);
      func_0x00010c283ba0(*(undefined8 *)(param_3 + 0x280));
      func_0x00010c283c00(uVar11,uVar12,uVar13,uVar14,*(undefined8 *)(param_3 + 0x280));
    }
    else {
      func_0x00010c283ba0(*(undefined8 *)(param_3 + 0x280));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 107985c40; end: 107985c87; -[SCDiscoverFeedActionHandler removeSpotlightScope:] */

void FUN_107985c40(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x168);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x168));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 107986230; end: 107986237;  */

void FUN_107986230(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10797c980;
  puStack_30 = &UNK_10797c990;
  uStack_28 = 0;
  func_0x00010c0bdf60(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1079863ec; end: 107986403; -[SCDiscoverFeedActionHandler operaViewingHandler] */

void FUN_1079863ec(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x250);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107986454; end: 10798646b; -[SCDiscoverFeedActionHandler virtualSectionConfigurable] */

void FUN_107986454(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x268);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1079864a8; end: 1079864d7; -[SCDiscoverFeedActionHandler setOperaPresenter:] */

void FUN_1079864a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x280);
  *(undefined8 *)(param_1 + 0x280) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107986a48; end: 107986b47;  */

bool FUN_107986a48(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010c25b720();
  if ((lVar2 == 3) || (lVar2 = param_2, func_0x00010c25b720(), lVar2 == 0xe)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_2;
    func_0x00010c25b720(param_2);
    bVar1 = lVar2 == 0xd;
  }
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 1079884d8; end: 107988547;  */

void FUN_1079884d8(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2a7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1079889f4; end: 107988bfb; -[SCDiscoverFeedActionSheetActionHandler _handleOptInNotificationWithActionDataModel:] */

void FUN_1079889f4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  undefined1 auStack_90 [8];
  long lStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010c259740();
  lVar4 = param_3;
  func_0x00010bf60240();
  if (1 < lVar4 - 1U) {
    lVar5 = param_1;
    func_0x00010bec51c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      uVar1 = 1;
      if (lVar4 == 3) {
        uVar1 = 2;
      }
      _objc_initWeak(auStack_78,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0xf0);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___dispatch_main_q_11034be20;
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      puStack_a8 = &UNK_107988bfc;
      puStack_a0 = &UNK_1109f2b60;
      _objc_copyWeak(auStack_90,auStack_78);
      lStack_88 = lVar3;
      uStack_80 = uVar1;
      _objc_retain(param_3);
      lStack_98 = param_3;
      _objc_copyWeak(auStack_d0,auStack_78);
      lStack_c8 = lVar3;
      uStack_c0 = uVar1;
      _objc_retain(param_3);
      func_0x00010c28a500(uVar6);
      _objc_release(puVar2);
      _objc_release(puVar2);
      _objc_release(uVar6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_d0);
      _objc_release(lStack_98);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_78);
      func_0x00010c28a540(*(undefined8 *)(param_1 + 0x40));
    }
    _objc_release(lVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1079894a4; end: 10798958f; -[SCDiscoverFeedActionSheetActionHandler _dismissMenuAndSendPromotedStoryForActionDataModel:] */

void FUN_1079894a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  param_1 = param_1 + 0x1c8;
  _objc_loadWeakRetained(param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf83dc0(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1079897a8; end: 1079897ab; -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerTappedSendUsername] */

void FUN_1079897a8(void)

{
  return;
}



/* Entry: 107989ce4; end: 107989d17;  */

void FUN_107989ce4(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7e060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798a6e0; end: 10798a7f7; -[SCDiscoverFeedActionSheetActionHandler _presentShowProfile:sourceView:storyLoggingInfo:] */

void FUN_10798a6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c259740(uVar3);
  func_0x00010c2600c0(uVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c259740(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0dca40(uVar4);
  uVar3 = param_3;
  func_0x0001079d325c(param_3,&PTR____CFConstantStringClassReference_110e1cad8,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar1 = param_1 + 0x1d0;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c1e1580(*(undefined8 *)(param_1 + 0x60));
  _objc_release(lVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x60));
  func_0x00010bdcc7e0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10798ae04; end: 10798ae7b; -[SCDiscoverFeedActionSheetActionHandler reportDidCompleteWithCancelled:] */

void FUN_10798ae04(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x90));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bea5ca0(param_1);
  if ((param_3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010bf85d80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c259740(uVar2);
    func_0x00010be7bc80(param_1,param_2,uVar1,uVar2);
    _objc_release(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10798b9e4; end: 10798ba2f;  */

void FUN_10798b9e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf9d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_exposeScope__1125c4f30,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10798c0f8; end: 10798c167;  */

void FUN_10798c0f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c0402e0();
  _objc_release(param_2);
  func_0x00010c1c8b80(puVar1);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10798c6a8; end: 10798c6d3; -[SCDiscoverFeedActionSheetActionHandler _setNeedsCustomStatusBarStyleContextUpdate] */

void FUN_10798c6a8(long param_1)

{
  param_1 = param_1 + 0x1d8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1cbd20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10798cbfc; end: 10798cc7b; -[SCDiscoverFeedActionSheetActionHandler hideAdScopeDidComplete:didSubmit:] */

void FUN_10798cbfc(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0xb8));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010bea5ca0(param_1);
  if ((param_4 != 0) && (lVar1 = *(long *)(param_1 + 0x68), lVar1 != 0)) {
    func_0x00010c259740();
    lVar2 = param_1;
    func_0x00010bec51c0(param_1,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      func_0x00010be8d840(param_1,param_2,lVar2);
    }
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10798d098; end: 10798d343; -[SCDiscoverFeedActionSheetActionHandler _presentBlockDialogForActionDataModel:] */

void FUN_10798d098(long param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_initWeak(auStack_80,param_1);
  puVar2 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dac8f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dac8f8,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  puStack_a0 = &UNK_10798d344;
  puStack_98 = &UNK_110849410;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_3);
  lStack_90 = param_3;
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar3 = PTR_PTR_1126aed70;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  puVar4 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea76f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea76f8,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = &PTR____CFConstantStringClassReference_110ea7718;
  uVar8 = 0;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110ea7718,0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_78 = puVar2;
  puStack_70 = puVar3;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfefe80(puVar4);
  _objc_release(puVar6);
  _objc_release(ppuVar5);
  _objc_release(ppuVar1);
  func_0x00010c211b40(puVar4);
  param_1 = param_1 + 0x1d0;
  _objc_loadWeakRetained();
  func_0x00010c10eda0();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(lStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  lVar7 = param_3;
  __Unwind_Resume();
  puStack_b8 = &UNK_10798d344;
  puStack_e0 = puVar3;
  puStack_d8 = puVar2;
  lStack_d0 = param_1;
  lStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  _objc_copyWeak(auStack_e8,lVar7 + 0x28);
  uVar9 = *(undefined8 *)(lVar7 + 0x20);
  _objc_retain(uVar9);
  func_0x00010bf84b00(uVar8);
  _objc_release(uVar9);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uVar8);
  return;
}



/* Entry: 10798d7a0; end: 10798d7b7; -[SCDiscoverFeedActionSheetActionHandler presentingViewController] */

void FUN_10798d7a0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x1d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10798df54; end: 10798e1e3;  */

void FUN_10798df54(long param_1,long param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar7 = param_2;
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c0ea200();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c247d20();
    if (lVar2 != 2) {
      lVar2 = param_1;
      func_0x00010c0ea200();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c247d20();
      if (lVar3 != 4) {
        lVar3 = param_1;
        func_0x00010c0ea200();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c247d20();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (lVar4 != 3) {
          func_0x00010c259740(param_1);
          func_0x00010c0df880();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_3;
          func_0x00010bf4b900();
          _objc_release(puVar5);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (((((uVar6 & 1) == 0) && (lVar7 = param_1, param_5 == 0xef)) && (param_4 == 0)) &&
             (param_7 != 0)) {
            puStack_88 = &uStack_90;
            uStack_90 = 0;
            uStack_80 = 0x3032000000;
            puStack_78 = &UNK_10798dd2c;
            puStack_70 = &UNK_10798dd3c;
            uStack_68 = 0;
            _objc_retain(param_1);
            func_0x00010bf97e80(param_7);
            lVar7 = puStack_88[5];
            _objc_retain(lVar7);
            _objc_release(param_1);
            __Block_object_dispose(&uStack_90,8);
            _objc_release(uStack_68);
            goto LAB_10798e05c;
          }
          goto LAB_10798e040;
        }
        _objc_release(lVar3);
      }
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
LAB_10798e040:
  func_0x00010798ed1c(lVar7,param_4,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
LAB_10798e05c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
  return;
}



/* Entry: 10798e898; end: 10798e8f7;  */

void FUN_10798e898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_10798df54(param_6,param_3,0,*(undefined8 *)(param_1 + 0x20),2,*(undefined1 *)(param_1 + 0x30),
                0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10798ee80; end: 10798ee8b; +[SCDiscoverFeedCustomStoryActionHandler announcerIdentifier] */

undefined ** FUN_10798ee80(void)

{
  return &PTR____CFConstantStringClassReference_110ea7738;
}



/* Entry: 10798f804; end: 10798f84b; -[SCDiscoverFeedCustomStoryActionHandler dismissCameraScope:] */

void FUN_10798f804(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 10798f9d4; end: 10798faeb; -[SCDiscoverFeedExpandStoriesActionHandler handleActionWithSender:actionModel:fromSourceView:] */

ulong FUN_10798f9d4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  uVar2 = param_4;
  func_0x00010beee2e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    uVar2 = uVar1;
    func_0x00010c0e00e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be52e00(param_1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9be20();
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar4;
}


