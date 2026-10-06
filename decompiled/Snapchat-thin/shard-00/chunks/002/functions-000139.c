/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10034e164; end: 10034e16b; -[SCCameraHardwareResourceImpl videoStreamStabilityMonitor] */

undefined8 FUN_10034e164(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 10034e16c; end: 10034e193; -[SCCameraVideoStreamStabilityMonitorImpl streamingStarted] */

void FUN_10034e16c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10034e194();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10034e194; end: 10034e25b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034e194(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [144];
  
  func_0x000107c6071c();
  FUN_10006c804();
  lVar2 = _DAT_112ed69e8;
  if ((*(byte *)(unaff_x20 + _DAT_112ed69e8) & 1) == 0) {
    FUN_1000e9b3c(auStack_d0);
    lVar1 = unaff_x20 + _DAT_112ed69e0;
    func_0x000107c61428(lVar1,auStack_e8,0x21,0);
    func_0x00010034e2c8(auStack_d0,lVar1);
    *(undefined8 *)(lVar1 + 0x58) = param_1;
    *(double *)(lVar1 + 0x40) = *(double *)(unaff_x20 + _DAT_112ed6a38) / 1000.0;
    func_0x000107c614a8(auStack_e8);
    *(undefined1 *)(unaff_x20 + lVar2) = 1;
  }
  FUN_100070bfc();
  return;
}



/* Entry: 10034e25c; end: 10034e2fb;  */

undefined8 * FUN_10034e25c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  uVar1 = param_2[6];
  uVar3 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar3;
  param_1[8] = uVar2;
  uVar1 = param_2[10];
  uVar3 = param_2[0xd];
  uVar2 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar2;
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 10034e2fc; end: 10034e45f; -[SCManagedVideoStreamer _sampleBuffersCallbackQueue] */

void FUN_10034e2fc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar3 = param_1;
  func_0x000107c3f000();
  func_0x000107c61180();
  lVar2 = lVar3;
  func_0x000107c4f7c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61174(lVar2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x000107c4a09c();
  lVar3 = lVar2;
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126ae790;
      func_0x000107c610f4();
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3f8819);
      func_0x000107c61180();
      func_0x000107c470d0(puVar4,param_2,puVar5,0x21,0,4);
      uVar6 = *(undefined8 *)(param_1 + 0x78);
      *(undefined **)(param_1 + 0x78) = puVar4;
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar5);
      lVar3 = *(long *)(param_1 + 0x78);
    }
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (lVar2 != 0) {
    func_0x000107c56bd8(puVar4,param_2,lVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c28);
    func_0x000107c56bd8(puVar4,param_2,lVar2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c40);
  }
  if (lVar3 != 0) {
    func_0x000107c56bd8(puVar4,param_2,lVar3,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c9c58);
  }
  puVar5 = puVar4;
  func_0x000107c40794(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10034e460; end: 10034e50f; -[SCManagedVideoStreamer callbackPerformer] */

void FUN_10034e460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    lVar4 = *(long *)(param_1 + 0x88);
    if (lVar4 == 0) {
      puVar1 = PTR_PTR_1126ae790;
      func_0x000107c610f4();
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f3f87d9);
      func_0x000107c61180();
      func_0x000107c470d0(puVar1,param_2,puVar2,0x21,0,4);
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      *(undefined **)(param_1 + 0x88) = puVar1;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar2);
      lVar4 = *(long *)(param_1 + 0x88);
    }
  }
  else {
    lVar4 = *(long *)(param_1 + 0x158);
  }
  func_0x000107c61174(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10034e510; end: 10034e537;  */

void FUN_10034e510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010034e518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10034e538; end: 10034e57b;  */

void FUN_10034e538(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x000107c4a550();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c4370c(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010be718b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__performCompletionHandlersForWai_112579fc8);
  return;
}



/* Entry: 10034e57c; end: 10034e59b;  */

void FUN_10034e57c(void)

{
  func_0x000107c61168(&PTR_PTR_1129ccb98);
  return;
}



/* Entry: 10034e59c; end: 10034e7a3; -[SCManagedCaptureSessionImpl setSampleBufferDelegate:queueMap:] */

long FUN_10034e59c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar4);
  lVar1 = lVar4;
  func_0x000107c4080c(lVar4,param_2,&uStack_130,auStack_f0,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          func_0x000107c61128(lVar4);
        }
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar5 = *(undefined8 *)(lStack_128 + lVar7 * 8);
        uVar2 = uVar5;
        func_0x000107c4193c(uVar5);
        func_0x000107c4d960(puVar3,param_2,uVar2);
        func_0x000107c61180();
        uVar2 = param_4;
        func_0x000107c4d9e8(param_4,param_2,puVar3);
        func_0x000107c61180();
        func_0x000107c61170(puVar3);
        func_0x000107c5ddd0(uVar5);
        func_0x000107c61180();
        func_0x000107c58b60();
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar2);
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x000107c4080c(lVar4,param_2,&uStack_130,auStack_f0,0x10);
    } while (lVar1 != 0);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_4);
  lVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return lVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  return *(long *)(lVar1 + 0x20);
}



/* Entry: 10034e7a4; end: 10034e7ab; -[SCCaptureDeviceOutputImpl devicePosition] */

undefined8 FUN_10034e7a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10034e7ac; end: 10034e7d7; -[SCManagedVideoStreamer _enableVideoMirrorForDevicePosition:] */

void FUN_10034e7ac(long param_1,undefined8 param_2)

{
  func_0x000107c5a52c(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x170));
                    /* WARNING: Could not recover jumptable at 0x00010c1a12f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setFrontFacingVideoMirrored_112645ed8);
  return;
}



/* Entry: 10034e7d8; end: 10034e97b; -[SCManagedCaptureSessionImpl setVideoOrientation:] */

void FUN_10034e7d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar6);
  lVar2 = lVar6;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar6);
      }
      lVar3 = *(long *)(lVar7 * 8);
      func_0x000107c5ddd0();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c4022c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      func_0x000107c5ddcc();
      if (lVar3 != param_3) {
        func_0x000107c5a52c(lVar4);
      }
      func_0x000107c61170(lVar4);
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
    lVar2 = lVar6;
    func_0x000107c4080c();
  }
  lVar2 = lVar6;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(lVar6);
  func_0x000107c60bd8(lVar2);
  FUN_1000285a8(0x112ff5b20,&UNK_10dc62e00);
  func_0x000107c6157c(lVar2);
  FUN_1000823a8(FUN_10050e134,lVar2);
  return;
}



/* Entry: 10034e97c; end: 10034e9c7;  */

void FUN_10034e97c(undefined8 param_1)

{
  FUN_1000285a8(0x112ff5b20,&UNK_10dc62e00);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10050e134,param_1);
  return;
}



/* Entry: 10034e9c8; end: 10034e9e7;  */

void FUN_10034e9c8(void)

{
  func_0x000107c61168(&PTR_PTR_112942bb0);
  return;
}



/* Entry: 10034e9e8; end: 10034eaeb;  */

void FUN_10034e9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f30038,&UNK_10db74fd0);
  puVar1 = &UNK_1105f9400;
  func_0x000107c613fc(&UNK_1105f9400,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  FUN_1000823a8(FUN_1003a25f8,puVar1);
  return;
}



/* Entry: 10034eaec; end: 10034eb0b;  */

void FUN_10034eaec(void)

{
  func_0x000107c61168(&PTR_PTR_112f300c0);
  return;
}



/* Entry: 10034eb0c; end: 10034eb27;  */

void FUN_10034eb0c(undefined8 param_1)

{
  FUN_1000285a8(0x112f30050,&UNK_10db74fe8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003a1fd0,param_1);
  return;
}



/* Entry: 10034eb28; end: 10034eb77;  */

void FUN_10034eb28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034eb78; end: 10034eb97;  */

void FUN_10034eb78(void)

{
  func_0x000107c61168(&PTR_PTR_1129ca188);
  return;
}



/* Entry: 10034eb98; end: 10034ec2f;  */

void FUN_10034eb98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f31450,&UNK_10db77470);
  puVar1 = &UNK_1105fb190;
  func_0x000107c613fc(&UNK_1105fb190,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102ff46cc,puVar1);
  return;
}



/* Entry: 10034ec30; end: 10034ec83;  */

void FUN_10034ec30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10034ec84; end: 10034ec9f;  */

void FUN_10034ec84(undefined8 param_1)

{
  FUN_1000285a8(0x112f287d8,&UNK_10db643c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102f2142c,param_1);
  return;
}



/* Entry: 10034eca0; end: 10034ecef;  */

void FUN_10034eca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034ecf0; end: 10034ed0b;  */

void FUN_10034ecf0(undefined8 param_1)

{
  FUN_1000285a8(0x112f1ab78,&UNK_10db52fc0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b7be1c,param_1);
  return;
}



/* Entry: 10034ed0c; end: 10034ed5b;  */

void FUN_10034ed0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034ed5c; end: 10034ed7b;  */

void FUN_10034ed5c(void)

{
  func_0x000107c61168(&PTR_PTR_1129a2e98);
  return;
}



/* Entry: 10034ed7c; end: 10034ed97;  */

void FUN_10034ed7c(undefined8 param_1)

{
  FUN_1000285a8(0x112f1a5f8,&UNK_10db52610);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100764b38,param_1);
  return;
}



/* Entry: 10034ed98; end: 10034ede7;  */

void FUN_10034ed98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034ede8; end: 10034ee07;  */

void FUN_10034ede8(void)

{
  func_0x000107c61168(&PTR_PTR_1129a1a78);
  return;
}



/* Entry: 10034ee08; end: 10034ee9f;  */

void FUN_10034ee08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1af88,&UNK_10db53730);
  puVar1 = &UNK_1105d4f20;
  func_0x000107c613fc(&UNK_1105d4f20,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102df4b00,puVar1);
  return;
}



/* Entry: 10034eea0; end: 10034eef3;  */

void FUN_10034eea0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10034eef4; end: 10034ef0f;  */

void FUN_10034eef4(undefined8 param_1)

{
  FUN_1000285a8(0x112f1af98,&UNK_10db53740);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102df4e0c,param_1);
  return;
}



/* Entry: 10034ef10; end: 10034ef5f;  */

void FUN_10034ef10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034ef60; end: 10034efab;  */

void FUN_10034ef60(undefined8 param_1)

{
  FUN_1000285a8(0x11307ada0,&UNK_10dd01980);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(0x10051d1dc,param_1);
  return;
}



/* Entry: 10034efac; end: 10034efcb;  */

void FUN_10034efac(void)

{
  func_0x000107c61168(&PTR_PTR_1129b7200);
  return;
}



/* Entry: 10034efcc; end: 10034f0df;  */

void FUN_10034efcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f216d0,&UNK_10db5aea0);
  puVar1 = &UNK_1105dd850;
  func_0x000107c613fc(&UNK_1105dd850,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  FUN_1000823a8(&UNK_102e58d7c,puVar1);
  return;
}



/* Entry: 10034f0e0; end: 10034f16b;  */

void FUN_10034f0e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10034f16c; end: 10034f187;  */

void FUN_10034f16c(undefined8 param_1)

{
  FUN_1000285a8(0x112f216d8,&UNK_10db5aea8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e593d8,param_1);
  return;
}



/* Entry: 10034f188; end: 10034f257;  */

void FUN_10034f188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034f258; end: 10034f2a3;  */

void FUN_10034f258(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10034f2a4; end: 10034f2bf;  */

void FUN_10034f2a4(undefined8 param_1)

{
  FUN_1000285a8(0x112f268a0,&UNK_10db61bc8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102eae154,param_1);
  return;
}



/* Entry: 10034f2c0; end: 10034f30f;  */

void FUN_10034f2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034f310; end: 10034f35b;  */

void FUN_10034f310(undefined8 param_1)

{
  FUN_1000285a8(0x112ececf0,&UNK_10daf4f40);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102954628,param_1);
  return;
}



/* Entry: 10034f35c; end: 10034f37b;  */

void FUN_10034f35c(void)

{
  func_0x000107c61168(&PTR_PTR_112872468);
  return;
}



/* Entry: 10034f37c; end: 10034f553;  */

void FUN_10034f37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f26980,&UNK_10db61d60);
  puVar1 = &UNK_1105e3bf8;
  func_0x000107c613fc(&UNK_1105e3bf8,0xb8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  FUN_1000823a8(FUN_10071b56c,puVar1);
  return;
}



/* Entry: 10034f554; end: 10034f573;  */

void FUN_10034f554(void)

{
  func_0x000107c61168(&PTR_PTR_112f269f8);
  return;
}



/* Entry: 10034f574; end: 10034f58f;  */

void FUN_10034f574(undefined8 param_1)

{
  FUN_1000285a8(0x112f26988,&UNK_10db61d68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10071a86c,param_1);
  return;
}



/* Entry: 10034f590; end: 10034f5df;  */

void FUN_10034f590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034f5e0; end: 10034f5fb;  */

void FUN_10034f5e0(undefined8 param_1)

{
  FUN_1000285a8(0x112f15cb8,&UNK_10db4ba70);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102d8d260,param_1);
  return;
}



/* Entry: 10034f5fc; end: 10034f64b;  */

void FUN_10034f5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034f64c; end: 10034f697;  */

void FUN_10034f64c(undefined8 param_1)

{
  FUN_1000285a8(0x112fba288,&UNK_10dc2b110);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10051d0f0,param_1);
  return;
}



/* Entry: 10034f698; end: 10034f6b7;  */

void FUN_10034f698(void)

{
  func_0x000107c61168(&PTR_PTR_112908058);
  return;
}



/* Entry: 10034f6b8; end: 10034f703;  */

void FUN_10034f6b8(undefined8 param_1)

{
  FUN_1000285a8(0x11307ae18,&UNK_10dd01a50);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_104457908,param_1);
  return;
}



/* Entry: 10034f704; end: 10034f723;  */

void FUN_10034f704(void)

{
  func_0x000107c61168(&PTR_PTR_1129b7380);
  return;
}



/* Entry: 10034f724; end: 10034f80f;  */

void FUN_10034f724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2ef98,&UNK_10db73b70);
  puVar1 = &UNK_1105f7b18;
  func_0x000107c613fc(&UNK_1105f7b18,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(FUN_100928020,puVar1);
  return;
}



/* Entry: 10034f810; end: 10034f82f;  */

void FUN_10034f810(void)

{
  func_0x000107c61168(&PTR_PTR_112f2f008);
  return;
}



/* Entry: 10034f830; end: 10034f84b;  */

void FUN_10034f830(undefined8 param_1)

{
  FUN_1000285a8(0x112f31550,&UNK_10db776a8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1004ed3bc,param_1);
  return;
}



/* Entry: 10034f84c; end: 10034f89b;  */

void FUN_10034f84c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034f89c; end: 10034fad3;  */

void FUN_10034f89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f32218,&UNK_10db78b30);
  puVar1 = &UNK_1105fbca8;
  func_0x000107c613fc(&UNK_1105fbca8,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  FUN_1000823a8(&UNK_102ffde80,puVar1);
  return;
}



/* Entry: 10034fad4; end: 10034fbe7;  */

void FUN_10034fad4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10034fbe8; end: 10034fc03;  */

void FUN_10034fbe8(undefined8 param_1)

{
  FUN_1000285a8(0x112f32220,&UNK_10db78b38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102ffee3c,param_1);
  return;
}



/* Entry: 10034fc04; end: 10034fc53;  */

void FUN_10034fc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10034fc54; end: 10034fc73;  */

void FUN_10034fc54(void)

{
  func_0x000107c61168(&PTR_PTR_112931eb8);
  return;
}



/* Entry: 10034fc74; end: 10034fcbf;  */

void FUN_10034fc74(undefined8 param_1)

{
  FUN_1000285a8(0x112ff1b30,&UNK_10dc5c7e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b8ce00,param_1);
  return;
}



/* Entry: 10034fcc0; end: 10034fcdf;  */

void FUN_10034fcc0(void)

{
  func_0x000107c61168(&PTR_PTR_112938708);
  return;
}



/* Entry: 10034fce0; end: 10034ff2f;  */

void FUN_10034fce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f171a8,&UNK_10db4d880);
  puVar1 = &UNK_1105cfba8;
  func_0x000107c613fc(&UNK_1105cfba8,0xf0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  FUN_1000823a8(&UNK_102da3ca4,puVar1);
  return;
}



/* Entry: 10034ff30; end: 10035004b;  */

void FUN_10034ff30(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035004c; end: 1003500cb;  */

void FUN_10035004c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f231d8,&UNK_10db5d780);
  puVar1 = &UNK_1105de570;
  func_0x000107c613fc(&UNK_1105de570,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_102e76bc4,puVar1);
  return;
}



/* Entry: 1003500cc; end: 100350117;  */

void FUN_1003500cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100350118; end: 100350133;  */

void FUN_100350118(undefined8 param_1)

{
  FUN_1000285a8(0x112f231e0,&UNK_10db5d788);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e76e04,param_1);
  return;
}



/* Entry: 100350134; end: 100350183;  */

void FUN_100350134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100350184; end: 10035021b;  */

void FUN_100350184(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ea2ef8,&UNK_10dab54c0);
  puVar1 = &UNK_11051a470;
  func_0x000107c613fc(&UNK_11051a470,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102503f08,puVar1);
  return;
}



/* Entry: 10035021c; end: 10035021f;  */

void FUN_10035021c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100350220; end: 10035022f;  */

undefined1  [16] FUN_100350220(void)

{
  return ZEXT816(0x110575430);
}



/* Entry: 100350230; end: 1003503bb;  */

void FUN_100350230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e9c2b8,&UNK_10daaa160);
  puVar1 = &UNK_11050c750;
  func_0x000107c613fc(&UNK_11050c750,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(FUN_1006ca82c,puVar1);
  return;
}



/* Entry: 1003503bc; end: 1003503cb;  */

undefined1  [16] FUN_1003503bc(void)

{
  return ZEXT816(0x11057d1b8);
}



/* Entry: 1003503cc; end: 10035051f;  */

void FUN_1003503cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecc968,&UNK_10daf0ff0);
  puVar1 = &UNK_11056a668;
  func_0x000107c613fc(&UNK_11056a668,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_10;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  *(undefined8 *)(puVar1 + 0x58) = param_14;
  *(undefined8 *)(puVar1 + 0x60) = param_8;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_2;
  *(undefined8 *)(puVar1 + 0x78) = param_3;
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_102904638,puVar1);
  return;
}



/* Entry: 100350520; end: 100350523;  */

void FUN_100350520(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100350524; end: 100350543;  */

void FUN_100350524(void)

{
  func_0x000107c61168(&PTR_PTR_112900fc8);
  return;
}



/* Entry: 100350544; end: 100350623;  */

void FUN_100350544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecec40,&UNK_10daf4d80);
  puVar1 = &UNK_1105712a8;
  func_0x000107c613fc(&UNK_1105712a8,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10051f17c,puVar1);
  return;
}



/* Entry: 100350624; end: 100350643;  */

void FUN_100350624(void)

{
  func_0x000107c61168(&PTR_PTR_1128af270);
  return;
}



/* Entry: 100350644; end: 10035072f;  */

void FUN_100350644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ece9d0,&UNK_10daf4830);
  puVar1 = &UNK_110570658;
  func_0x000107c613fc(&UNK_110570658,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10051f348,puVar1);
  return;
}



/* Entry: 100350730; end: 10035074f;  */

void FUN_100350730(void)

{
  func_0x000107c61168(&PTR_PTR_1128af400);
  return;
}



/* Entry: 100350750; end: 100350957;  */

void FUN_100350750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ecd028,&UNK_10daf2550);
  puVar1 = &UNK_11056c230;
  func_0x000107c613fc(&UNK_11056c230,0xd0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_12;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_14;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_1;
  *(undefined8 *)(puVar1 + 0x70) = param_16;
  *(undefined8 *)(puVar1 + 0x78) = param_17;
  *(undefined8 *)(puVar1 + 0x80) = param_18;
  *(undefined8 *)(puVar1 + 0x88) = param_19;
  *(undefined8 *)(puVar1 + 0x90) = param_24;
  *(undefined8 *)(puVar1 + 0x98) = param_2;
  *(undefined8 *)(puVar1 + 0xa0) = param_3;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_22;
  *(undefined8 *)(puVar1 + 200) = param_5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_102916adc,puVar1);
  return;
}



/* Entry: 100350958; end: 10035095b;  */

void FUN_100350958(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035095c; end: 10035097b;  */

void FUN_10035095c(void)

{
  func_0x000107c61168(&PTR_PTR_1128a5540);
  return;
}



/* Entry: 10035097c; end: 100350aa3;  */

void FUN_10035097c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e9b6e0,&UNK_10daa91a0);
  puVar1 = &UNK_11050b4a0;
  func_0x000107c613fc(&UNK_11050b4a0,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_10;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_12;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_1;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  FUN_1000823a8(&UNK_10245a258,puVar1);
  return;
}



/* Entry: 100350aa4; end: 100350aa7;  */

void FUN_100350aa4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100350aa8; end: 100350ac7;  */

void FUN_100350aa8(void)

{
  func_0x000107c61168(&PTR_PTR_11292f258);
  return;
}



/* Entry: 100350ac8; end: 100350cd7;  */

void FUN_100350ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ef9528,&UNK_10db28c10);
  puVar1 = &UNK_1105a4b80;
  func_0x000107c613fc(&UNK_1105a4b80,200,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_17;
  *(undefined8 *)(puVar1 + 0x28) = param_18;
  *(undefined8 *)(puVar1 + 0x30) = param_21;
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_22;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_19;
  *(undefined8 *)(puVar1 + 0x70) = param_23;
  *(undefined8 *)(puVar1 + 0x78) = param_2;
  *(undefined8 *)(puVar1 + 0x80) = param_6;
  *(undefined8 *)(puVar1 + 0x88) = param_8;
  *(undefined8 *)(puVar1 + 0x90) = param_12;
  *(undefined8 *)(puVar1 + 0x98) = param_13;
  *(undefined8 *)(puVar1 + 0xa0) = param_14;
  *(undefined8 *)(puVar1 + 0xa8) = param_15;
  *(undefined8 *)(puVar1 + 0xb0) = param_16;
  *(undefined8 *)(puVar1 + 0xb8) = param_20;
  *(undefined8 *)(puVar1 + 0xc0) = param_1;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006ec414,puVar1);
  return;
}



/* Entry: 100350cd8; end: 100350cf7;  */

void FUN_100350cd8(void)

{
  func_0x000107c61168(&PTR_PTR_1129b0fe8);
  return;
}



/* Entry: 100350cf8; end: 100350f53;  */

void FUN_100350cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f4fa50,&UNK_10dba3a10);
  puVar1 = &UNK_11062e9e0;
  func_0x000107c613fc(&UNK_11062e9e0,0xf8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  FUN_1000823a8(FUN_1006fa9dc,puVar1);
  return;
}



/* Entry: 100350f54; end: 100350f73;  */

void FUN_100350f54(void)

{
  func_0x000107c61168(&PTR_PTR_1129b1e60);
  return;
}



/* Entry: 100350f74; end: 1003511c7;  */

void FUN_100350f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f534c8,&UNK_10dbaa7d0);
  puVar1 = &UNK_110636d98;
  func_0x000107c613fc(&UNK_110636d98,0xe0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_16;
  *(undefined8 *)(puVar1 + 0x18) = param_8;
  *(undefined8 *)(puVar1 + 0x20) = param_15;
  *(undefined8 *)(puVar1 + 0x28) = param_21;
  *(undefined8 *)(puVar1 + 0x30) = param_17;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_13;
  *(undefined8 *)(puVar1 + 0x50) = param_19;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_18;
  *(undefined8 *)(puVar1 + 0x68) = param_22;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_1;
  *(undefined8 *)(puVar1 + 0x80) = param_2;
  *(undefined8 *)(puVar1 + 0x88) = param_3;
  *(undefined8 *)(puVar1 + 0x90) = param_5;
  *(undefined8 *)(puVar1 + 0x98) = param_9;
  *(undefined8 *)(puVar1 + 0xa0) = param_10;
  *(undefined8 *)(puVar1 + 0xa8) = param_11;
  *(undefined8 *)(puVar1 + 0xb0) = param_12;
  *(undefined8 *)(puVar1 + 0xb8) = param_20;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  FUN_1000823a8(FUN_100b5d940,puVar1);
  return;
}



/* Entry: 1003511c8; end: 1003511e7;  */

void FUN_1003511c8(void)

{
  func_0x000107c61168(&PTR_PTR_1129c6bc8);
  return;
}



/* Entry: 1003511e8; end: 10035143f;  */

void FUN_1003511e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e77a98,&UNK_10da809a0);
  puVar1 = &UNK_1104ec890;
  func_0x000107c613fc(&UNK_1104ec890,0xe8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_25;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_10;
  *(undefined8 *)(puVar1 + 0x28) = param_27;
  *(undefined8 *)(puVar1 + 0x30) = param_22;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_19;
  *(undefined8 *)(puVar1 + 0x58) = param_18;
  *(undefined8 *)(puVar1 + 0x60) = param_14;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_2;
  *(undefined8 *)(puVar1 + 0x78) = param_26;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_9;
  *(undefined8 *)(puVar1 + 0x90) = param_4;
  *(undefined8 *)(puVar1 + 0x98) = param_12;
  *(undefined8 *)(puVar1 + 0xa0) = param_24;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_6;
  *(undefined8 *)(puVar1 + 0xb8) = param_15;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_21;
  *(undefined8 *)(puVar1 + 0xd0) = param_1;
  *(undefined8 *)(puVar1 + 0xd8) = param_3;
  *(undefined8 *)(puVar1 + 0xe0) = param_17;
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_17);
  FUN_1000823a8(&UNK_102277d14,puVar1);
  return;
}



/* Entry: 100351440; end: 100351443;  */

void FUN_100351440(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100351444; end: 1003514db;  */

void FUN_100351444(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e4fc08,&UNK_10da4d380);
  puVar1 = &UNK_1104bc088;
  func_0x000107c613fc(&UNK_1104bc088,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_10200ebc8,puVar1);
  return;
}



/* Entry: 1003514dc; end: 1003514df;  */

void FUN_1003514dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


