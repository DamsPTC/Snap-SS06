/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008e3100; end: 1008e3113;  */

void FUN_1008e3100(void)

{
  FUN_1008e30d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008e3114; end: 1008e3117;  */

void FUN_1008e3114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004a55f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1008e3118; end: 1008e319b;  */

undefined8 * FUN_1008e3118(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_110abdbe0;
  plVar2 = param_1 + 2;
  lVar1 = *plVar2;
  *plVar2 = 0;
  if (lVar1 != 0) {
    FUN_1008e319c();
  }
  func_0x0001004a5c78(param_1 + 1,0);
  func_0x0001008e3178(param_1 + 3);
  func_0x0001008e31d4(plVar2);
  FUN_1004a5c90(param_1 + 1);
  return param_1;
}



/* Entry: 1008e319c; end: 1008e31b3;  */

void FUN_1008e319c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001008e31a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1008e31b4; end: 1008e31f7;  */

void FUN_1008e31b4(void)

{
  func_0x0001008e31a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008e31f8; end: 1008e31fb;  */

void FUN_1008e31f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1008e31fc; end: 1008e326f;  */

void FUN_1008e31fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 uStack_38;
  
  puVar1 = param_1;
  FUN_1004931f0();
  FUN_100493788();
  uStack_38 = 6;
  puVar2 = auStack_58;
  FUN_1008e3290(puVar2,param_1);
  (*(code *)**(undefined8 **)*puVar1)((undefined8 *)*puVar1,puVar2,param_2);
  func_0x0001004937c8();
  return;
}



/* Entry: 1008e3270; end: 1008e328f;  */

undefined8 FUN_1008e3270(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = (&PTR_DAT_113292d38)[param_2 >> 0x10 & 0xffff];
  func_0x00010002b82c(&stack0x00000008,puVar1);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50(param_1,param_2,puVar1);
  return param_1;
}



/* Entry: 1008e3290; end: 1008e32c3;  */

void FUN_1008e3290(void)

{
  FUN_1008e3270();
  FUN_1008e32c4();
  func_0x0001008e32d8();
  func_0x0001008e33a0();
  return;
}



/* Entry: 1008e32c4; end: 1008e32e3;  */

void FUN_1008e32c4(void)

{
  return;
}



/* Entry: 1008e32e4; end: 1008e3347;  */

undefined8 FUN_1008e32e4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_30 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  uVar1 = param_3;
  func_0x000107c613d0(param_3);
  FUN_1008e3348(param_1,&uStack_40,param_3,uVar1);
  FUN_1008e3388();
  return param_3;
}



/* Entry: 1008e3348; end: 1008e3387;  */

long FUN_1008e3348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_1000fecf4(param_1 + 8);
  func_0x0001004c38a0(param_1 + 8,&uStack_30);
  return param_1;
}



/* Entry: 1008e3388; end: 1008e33ab;  */

void FUN_1008e3388(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1008e33ac; end: 1008e33e7;  */

void FUN_1008e33ac(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  
  FUN_1004931f0();
  FUN_100493788();
  func_0x00010049379c(3);
  func_0x0001004937b0(param_1,auStack_48);
  func_0x0001004937c8();
  return;
}



/* Entry: 1008e33e8; end: 1008e363b;  */

void FUN_1008e33e8(long param_1,undefined *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x28))(plVar2,&UNK_110a58610);
    if ((int)plVar2 != 0) {
      plVar2 = *(long **)(param_1 + 8);
      func_0x000107c61174(param_2);
      if (param_2 == (undefined *)0x0) {
        puVar3 = &UNK_10f4a7fca;
      }
      else {
        puVar3 = param_2;
        func_0x000107c61178(param_2);
        func_0x000107c3ac4c();
      }
      func_0x000107c61170(param_2);
      FUN_10002b838(auStack_78,puVar3);
      func_0x000107c61174(param_3);
      if (param_3 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)&UNK_10f4a7fca;
      }
      else {
        func_0x000107c61178(param_3);
        puVar4 = param_3;
        func_0x000107c3ac4c(param_3);
      }
      func_0x000107c61170(param_3);
      FUN_10002b838(auStack_60,puVar4);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_10007e1e8(&uStack_98,auStack_78,&lStack_48,2);
      puVar4 = &uStack_98;
      (**(code **)(*plVar2 + 0x18))(plVar2,&UNK_110a58610,puVar4,param_4 * 10);
      puStack_80 = &uStack_98;
      FUN_10007e5dc(&puStack_80);
      lVar5 = 0;
      do {
        if ((&cStack_49)[lVar5] < '\0') {
          func_0x000107c60e14(*(undefined8 *)((long)auStack_60 + lVar5));
        }
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x30);
    }
  }
  func_0x000107c61170(param_3);
  puVar3 = param_2;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(param_3);
  if (cStack_61 < '\0') {
    func_0x000107c60e14(auStack_78[0]);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  func_0x000107c60bd8();
  FUN_1008e3668();
  lVar5 = param_3[4];
  cVar1 = *(char *)(param_3 + 5);
  if (*(long *)(puVar3 + lVar5 * 8) != 0) {
    func_0x000107c607f0();
  }
  if (puVar4 != (undefined8 *)0x0) {
    if (cVar1 == '\0') {
      func_0x000107c61174(puVar4);
    }
    else {
      func_0x000107c40794();
    }
  }
  *(undefined8 **)(puVar3 + lVar5 * 8) = puVar4;
  return;
}



/* Entry: 1008e363c; end: 1008e3667;  */

void FUN_1008e363c(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long unaff_x20;
  
  FUN_1008e3668();
  lVar2 = *(long *)(unaff_x20 + 0x20);
  cVar1 = *(char *)(unaff_x20 + 0x28);
  if (*(long *)(param_1 + lVar2 * 8) != 0) {
    func_0x000107c607f0();
  }
  if (param_3 != 0) {
    if (cVar1 == '\0') {
      func_0x000107c61174(param_3);
    }
    else {
      func_0x000107c40794();
    }
  }
  *(long *)(param_1 + lVar2 * 8) = param_3;
  return;
}



/* Entry: 1008e3668; end: 1008e3673;  */

undefined8 FUN_1008e3668(undefined8 param_1,long param_2)

{
  if (lRam00000001137fd260 != -1) {
    FUN_10002a2fc(0x1137fd260,&PTR___NSConcreteGlobalBlock_110d7a268);
  }
  return *(undefined8 *)(param_2 + lRam00000001137fd268);
}



/* Entry: 1008e3674; end: 1008e36bf;  */

undefined8 FUN_1008e3674(long param_1)

{
  if (lRam00000001137fd260 != -1) {
    FUN_10002a2fc(0x1137fd260,&PTR___NSConcreteGlobalBlock_110d7a268);
  }
  return *(undefined8 *)(param_1 + lRam00000001137fd268);
}



/* Entry: 1008e36c0; end: 1008e36f3;  */

void FUN_1008e36c0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b3d30;
  func_0x000107c61158();
  func_0x000107c60efc();
  func_0x000107c6104c();
  puRam00000001137fd268 = puVar1;
  return;
}



/* Entry: 1008e36f4; end: 1008e37a7; -[SCPreviewConfiguration setSnapSource:] */

void FUN_1008e36f4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x220) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef11b8),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x220) = param_3;
    *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) | 0x1000;
  }
  return;
}



/* Entry: 1008e37a8; end: 1008e37f7; -[SCPreviewConfiguration setMediaAspectRatio:] */

void FUN_1008e37a8(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if ((*(double *)(param_2 + 0x178) != param_1) &&
     (func_0x000107c3c7ec(iVar1,param_3,&PTR____CFConstantStringClassReference_110ef11f8),
     0.0 < param_1 && iVar1 != 0)) {
    *(double *)(param_2 + 0x178) = param_1;
  }
  return;
}



/* Entry: 1008e37f8; end: 1008e380f; -[SCPreviewPresenterImpl _shouldDisablePostCaptureScan] */

void FUN_1008e37f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x108),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e41e18,0,0);
  return;
}



/* Entry: 1008e3810; end: 1008e384f; -[SCPreviewConfiguration setScanInPreviewEnabled:] */

void FUN_1008e3810(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(byte *)(param_1 + 0xac) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1518),
     iVar1 != 0)) {
    *(char *)(param_1 + 0xac) = (char)param_3;
  }
  return;
}



/* Entry: 1008e3850; end: 1008e38c7; -[SCPreviewConfiguration setVideoPlaybackQuality:] */

void FUN_1008e3850(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x210) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1538),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x210) = param_3;
  }
  return;
}



/* Entry: 1008e38c8; end: 1008e38cf;  */

long FUN_1008e38c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x0001008e396c();
    FUN_1008e39f0(0);
    func_0x000107c613fc();
    lVar3 = lVar2;
    FUN_1008e3a10(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c61574(lVar2);
  }
  return lVar3;
}



/* Entry: 1008e38d0; end: 1008e39ef;  */

long FUN_1008e38d0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x0001008e396c();
    FUN_1008e39f0(0);
    func_0x000107c613fc();
    lVar2 = lVar1;
    FUN_1008e3a10(lVar1);
    func_0x000107c61574(param_1);
    func_0x000107c61574(lVar1);
  }
  return lVar2;
}



/* Entry: 1008e39f0; end: 1008e3a0f;  */

void FUN_1008e39f0(void)

{
  func_0x000107c61168(&PTR_PTR_112ee8fb0);
  return;
}



/* Entry: 1008e3a10; end: 1008e3b2f;  */

void FUN_1008e3a10(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar1 = PTR_PTR_1126b7e38;
  func_0x000107c61168();
  func_0x000107c50198();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  uStack_38 = 0;
  FUN_1000285a8(0x112ee8f68,&UNK_10db16310);
  func_0x000107c613fc();
  puVar2 = &uStack_38;
  FUN_10006c248();
  *(undefined8 **)(unaff_x20 + 0x20) = puVar2;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  FUN_1000c6580();
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  puVar1 = &UNK_110593cf8;
  func_0x000107c613fc(&UNK_110593cf8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x000107c6157c(param_1);
  puVar4 = &UNK_102aba1bc;
  puVar5 = puVar1;
  FUN_1000b6504(&UNK_102aba1bc);
  func_0x000107c61574(puVar1);
  puVar1 = puVar4;
  func_0x000107c614f0(puVar4);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),puVar1,puVar5);
  func_0x000107c615e8(puVar4);
  return;
}



/* Entry: 1008e3b30; end: 1008e3b73;  */

void FUN_1008e3b30(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008e3b74; end: 1008e3b7b;  */

void FUN_1008e3b74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008e3b7c; end: 1008e3b9f;  */

void FUN_1008e3b7c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008e3ba0; end: 1008e3bcf; -[SCPreviewConfiguration setAiLensDataProvider:] */

void FUN_1008e3ba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008e3bd0; end: 1008e3bd7; -[SCPreviewConfiguration setLensCameraPresenterSource:] */

void FUN_1008e3bd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x400) = param_3;
  return;
}



/* Entry: 1008e3bd8; end: 1008e3bdf; -[SCPreviewPresenterImpl previewConfiguration] */

undefined8 FUN_1008e3bd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1a8);
}



/* Entry: 1008e3be0; end: 1008e3be7; -[SCPreviewConfiguration setCameraType:] */

void FUN_1008e3be0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 1008e3be8; end: 1008e3bef; -[SCPreviewPresenterImpl loggingParams] */

undefined8 FUN_1008e3be8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x1b0);
}



/* Entry: 1008e3bf0; end: 1008e3bf7; -[SCPreviewConfiguration setCameraNavigationType:] */

void FUN_1008e3bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x228) = param_3;
  return;
}



/* Entry: 1008e3bf8; end: 1008e3bff; -[SCPreviewConfiguration setAllowSharingAfterSave:] */

void FUN_1008e3bf8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb4) = param_3;
  return;
}



/* Entry: 1008e3c00; end: 1008e3c07; -[SCCameraViewControllerInternalState replyConfiguration] */

undefined8 FUN_1008e3c00(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 1008e3c08; end: 1008e3fb3; -[SCPreviewPresenterImpl setReplyConfiguration:cameraViewType:] */

void FUN_1008e3c08(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5cb20();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + 0x160);
  *(long *)(param_1 + 0x160) = lVar1;
  func_0x000107c61170(uVar5);
  lVar1 = param_3;
  func_0x000107c5cb20();
  func_0x000107c61180();
  func_0x000107c57d60(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x150) = param_4;
  func_0x000107c5312c(*(undefined8 *)(param_1 + 0x1a8));
  if (lVar1 == 0) {
    lVar6 = 8;
  }
  else {
    lVar6 = lVar1;
    func_0x000107c4e2c8(lVar1);
  }
  func_0x000107c59428(*(undefined8 *)(param_1 + 0x1a8));
  FUN_1008cc2b4(lVar6);
  func_0x000107c61180();
  func_0x000107c59558(*(undefined8 *)(param_1 + 0x1b0));
  func_0x000107c61170(lVar6);
  func_0x000107c4a088(lVar1);
  func_0x000107c54cd4(*(undefined8 *)(param_1 + 0x1a8));
  lVar6 = lVar1;
  func_0x000107c4a088();
  lVar2 = lVar1;
  func_0x000107c50214(lVar1);
  func_0x000107c61180();
  if ((int)lVar6 == 0) {
    func_0x000107c539e4(*(undefined8 *)(param_1 + 0x1b0));
  }
  else {
    func_0x000107c5671c();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c3c858(param_1);
  func_0x000107c5947c(*(undefined8 *)(param_1 + 0x1a8));
  lVar6 = lVar1;
  func_0x000107c4f86c(lVar1);
  func_0x000107c61180();
  func_0x000107c57adc(*(undefined8 *)(param_1 + 0x1a8));
  func_0x000107c61170(lVar6);
  lVar6 = lVar1;
  func_0x000107c4fdf8();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar6 != 0) {
    puVar3 = PTR_PTR_1126b0238;
    func_0x000107c610f4(PTR_PTR_1126b0238);
    lVar6 = lVar1;
    func_0x000107c4fdfc(lVar1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4fdf8(lVar1);
    func_0x000107c61180();
    func_0x000107c4fddc(lVar1);
    func_0x000107c4fdcc(lVar1);
    lVar4 = lVar1;
    func_0x000107c4fde0(lVar1);
    func_0x000107c61180();
    func_0x000107c4a254(lVar1);
    func_0x000107c4fde4();
    func_0x000107c48900(puVar3);
    func_0x000107c57cb0(*(undefined8 *)(param_1 + 0x1a8));
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar6);
  }
  lVar6 = lVar1;
  func_0x000107c50210();
  func_0x000107c61180();
  lVar2 = lVar6;
  func_0x000107c4adac();
  func_0x000107c61170(lVar6);
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    func_0x000107c61170(uVar5);
  }
  else {
    func_0x000107c61144(auStack_68,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x60);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    lVar6 = lVar1;
    func_0x000107c50210(lVar1);
    func_0x000107c61180();
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    func_0x000107c6111c(auStack_70,auStack_68);
    func_0x000107c5b49c(uVar5);
    func_0x000107c61170(PTR___dispatch_main_q_11034be20);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c3afbc(param_1);
  func_0x000107c55c14(*(undefined8 *)(param_1 + 0x1a8));
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008e3fb4; end: 1008e401f; -[SCPreviewConfiguration setReplyParameters:] */

/* WARNING: Possible PIC construction at 0x0001008e4000: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e4004) */

void FUN_1008e3fb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  if ((*(long *)(param_1 + 0x290) != param_3) &&
     (lVar1 = param_1,
     func_0x000107c3c7ec(param_1,param_2,&PTR____CFConstantStringClassReference_110ef1498),
     (int)lVar1 != 0)) {
    func_0x000107c61174(param_3);
    lVar1 = *(long *)(param_1 + 0x290);
    *(long *)(param_1 + 0x290) = param_3;
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008e4020; end: 1008e405f; -[SCPreviewConfiguration setFromMischief:] */

void FUN_1008e4020(long param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(byte *)(param_1 + 0xab) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1478),
     iVar1 != 0)) {
    *(char *)(param_1 + 0xab) = (char)param_3;
  }
  return;
}



/* Entry: 1008e4060; end: 1008e4143; -[SCPreviewPresenterImpl _snapSource:] */

long FUN_1008e4060(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x1a8);
  func_0x000107c501f4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4a0a4();
  func_0x000107c61170(uVar1);
  if ((uVar2 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x1a8);
    func_0x000107c501f4();
    func_0x000107c61180();
    lVar3 = lVar4;
    func_0x000107c50214();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) {
      if (param_3 == 5) {
        lVar3 = 0x11;
      }
      else if (param_3 == 0xc) {
        lVar3 = 0x1a;
      }
      else {
        lVar3 = *(long *)(param_1 + 0x1a8);
        func_0x000107c5b3f0();
        if (lVar3 != 0x1b) {
          lVar3 = 4;
        }
      }
    }
    else if (param_3 - 1U < 0xc) {
      lVar3 = *(long *)(&UNK_10ddd9a80 + (param_3 - 1U) * 8);
    }
    else {
      lVar3 = 4;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 1008e4144; end: 1008e414b; -[SCPreviewConfiguration replyParameters] */

undefined8 FUN_1008e4144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x290);
}



/* Entry: 1008e414c; end: 1008e4153; -[SCPreviewConfiguration snapSource] */

undefined8 FUN_1008e414c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x220);
}



/* Entry: 1008e4154; end: 1008e41d3; -[SCAPagePageView setExitEvent:] */

/* WARNING: Possible PIC construction at 0x0001008e41bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e41c0) */

void FUN_1008e4154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  FUN_1008e41d4(param_3);
  func_0x000107c61180();
  func_0x000107c54980(param_1,param_2,&PTR____CFConstantStringClassReference_110ea1f58,4,puVar1,3,
                      param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008e41d4; end: 1008e41f3;  */

undefined * FUN_1008e41d4(ulong param_1)

{
  if (param_1 < 0x2a) {
    return (&PTR_PTR_110d8d080)[param_1];
  }
  return (undefined *)0x0;
}



/* Entry: 1008e41f4; end: 1008e4223; -[SCPreviewConfiguration setQuotedMessageId:] */

void FUN_1008e41f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x3d8);
  *(undefined8 *)(param_1 + 0x3d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008e4224; end: 1008e42f3; -[SCPreviewPresenterImpl _cameraPresenterSource] */

undefined8 FUN_1008e4224(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_1 + 0x1a8);
  func_0x000107c501f4();
  func_0x000107c61180();
  uVar1 = 7;
  if (lVar2 != 0) {
    uVar1 = 8;
  }
  lVar3 = lVar2;
  func_0x000107c4e2c8();
  if (lVar3 == 0x2d) {
    uVar4 = 1;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c4e2c8();
    if (lVar3 == 0x2e) {
      lVar3 = lVar2;
      func_0x000107c508c0();
      uVar4 = uVar1;
      if (lVar3 + 1U < 6) {
        uVar4 = *(undefined8 *)(&UNK_10ddd9a50 + (lVar3 + 1U) * 8);
      }
    }
    else {
      lVar3 = lVar2;
      func_0x000107c4e2c8();
      if (lVar3 == 0x13) {
        uVar4 = 4;
      }
      else {
        lVar3 = lVar2;
        func_0x000107c4e2c8();
        if (lVar3 == 7) {
          uVar4 = 6;
        }
        else {
          lVar3 = lVar2;
          func_0x000107c4e2c8();
          uVar4 = 5;
          if (lVar3 != 0x14) {
            uVar4 = uVar1;
          }
        }
      }
    }
  }
  func_0x000107c61170(lVar2);
  return uVar4;
}



/* Entry: 1008e42f4; end: 1008e42fb; -[SCPreviewConfiguration setIsMusicCameraFromSpotlight:] */

void FUN_1008e42f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x9a) = param_3;
  return;
}



/* Entry: 1008e42fc; end: 1008e473f; -[SCCameraPreviewPresenterImpl _setTriggeringSectionWithPreviewPresenter:] */

/* WARNING: Possible PIC construction at 0x0001008e4360: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e43a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e43e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e440c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e44d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e454c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e459c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e45cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e4710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e46a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e46b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e46ac) */
/* WARNING: Removing unreachable block (ram,0x0001008e4714) */
/* WARNING: Removing unreachable block (ram,0x0001008e4638) */
/* WARNING: Removing unreachable block (ram,0x0001008e45d0) */
/* WARNING: Removing unreachable block (ram,0x0001008e45dc) */
/* WARNING: Removing unreachable block (ram,0x0001008e45a0) */
/* WARNING: Removing unreachable block (ram,0x0001008e45ec) */
/* WARNING: Removing unreachable block (ram,0x0001008e4600) */
/* WARNING: Removing unreachable block (ram,0x0001008e4678) */
/* WARNING: Removing unreachable block (ram,0x0001008e4630) */
/* WARNING: Removing unreachable block (ram,0x0001008e45f8) */
/* WARNING: Removing unreachable block (ram,0x0001008e45b0) */
/* WARNING: Removing unreachable block (ram,0x0001008e4550) */
/* WARNING: Removing unreachable block (ram,0x0001008e455c) */
/* WARNING: Removing unreachable block (ram,0x0001008e4644) */
/* WARNING: Removing unreachable block (ram,0x0001008e4654) */
/* WARNING: Removing unreachable block (ram,0x0001008e4724) */
/* WARNING: Removing unreachable block (ram,0x0001008e4730) */
/* WARNING: Removing unreachable block (ram,0x0001008e4734) */
/* WARNING: Removing unreachable block (ram,0x0001008e4738) */
/* WARNING: Removing unreachable block (ram,0x0001008e465c) */
/* WARNING: Removing unreachable block (ram,0x0001008e4664) */
/* WARNING: Removing unreachable block (ram,0x0001008e4670) */
/* WARNING: Removing unreachable block (ram,0x0001008e4564) */
/* WARNING: Removing unreachable block (ram,0x0001008e452c) */
/* WARNING: Removing unreachable block (ram,0x0001008e451c) */
/* WARNING: Removing unreachable block (ram,0x0001008e44d4) */
/* WARNING: Removing unreachable block (ram,0x0001008e44d8) */
/* WARNING: Removing unreachable block (ram,0x0001008e4488) */
/* WARNING: Removing unreachable block (ram,0x0001008e4478) */
/* WARNING: Removing unreachable block (ram,0x0001008e4468) */
/* WARNING: Removing unreachable block (ram,0x0001008e43e8) */
/* WARNING: Removing unreachable block (ram,0x0001008e44b0) */
/* WARNING: Removing unreachable block (ram,0x0001008e456c) */
/* WARNING: Removing unreachable block (ram,0x0001008e44bc) */
/* WARNING: Removing unreachable block (ram,0x0001008e43ec) */
/* WARNING: Removing unreachable block (ram,0x0001008e440c) */
/* WARNING: Removing unreachable block (ram,0x0001008e43a8) */
/* WARNING: Removing unreachable block (ram,0x0001008e4364) */
/* WARNING: Removing unreachable block (ram,0x0001008e46bc) */
/* WARNING: Removing unreachable block (ram,0x0001008e471c) */
/* WARNING: Removing unreachable block (ram,0x0001008e4410) */
/* WARNING: Removing unreachable block (ram,0x0001008e46cc) */

void FUN_1008e42fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  func_0x000107c41e68();
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008e4740; end: 1008e4747; -[SCPreviewConfiguration snapPageSource] */

undefined8 FUN_1008e4740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x218);
}



/* Entry: 1008e4748; end: 1008e488f;  */

void FUN_1008e4748(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c4588;
  func_0x000107c5b174(PTR_PTR_1126c4588);
  func_0x000107c61180();
  func_0x000107c5e564();
  func_0x000107c611b0();
  func_0x000107c5e488(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e674(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e884(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e688(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e568(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e494(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e768(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e6ec(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e7bc(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e778(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e824(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e73c(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
  func_0x000107c5e4d4(puVar1,param_2,0xffffffffffffffff);
  func_0x000107c611b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008e4890; end: 1008e48ab; +[SCSnapCommonLoggingParamsBuilder snapCommonLoggingParams] */

void FUN_1008e4890(void)

{
  func_0x000107c610fc(PTR_PTR_1126c4588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008e48ac; end: 1008e48b3; -[SCSnapCommonLoggingParamsBuilder withFilterMotion:] */

void FUN_1008e48ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x490) = param_3;
  return;
}



/* Entry: 1008e48b4; end: 1008e48bb; -[SCSnapCommonLoggingParamsBuilder withCameraSource:] */

void FUN_1008e48b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



/* Entry: 1008e48bc; end: 1008e48c3; -[SCSnapCommonLoggingParamsBuilder withLensSource:] */

void FUN_1008e48bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x328) = param_3;
  return;
}



/* Entry: 1008e48c4; end: 1008e48cb; -[SCSnapCommonLoggingParamsBuilder withVideoMode:] */

void FUN_1008e48c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x818) = param_3;
  return;
}



/* Entry: 1008e48cc; end: 1008e48d3; -[SCSnapCommonLoggingParamsBuilder withLowLightStatus:] */

void FUN_1008e48cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x138) = param_3;
  return;
}



/* Entry: 1008e48d4; end: 1008e48db; -[SCSnapCommonLoggingParamsBuilder withFlashTriggerSource:] */

void FUN_1008e48d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1b8) = param_3;
  return;
}



/* Entry: 1008e48dc; end: 1008e48e3; -[SCSnapCommonLoggingParamsBuilder withCaptureSource:] */

void FUN_1008e48dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x1c0) = param_3;
  return;
}



/* Entry: 1008e48e4; end: 1008e48eb; -[SCSnapCommonLoggingParamsBuilder withRoleType:] */

void FUN_1008e48e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x920) = param_3;
  return;
}



/* Entry: 1008e48ec; end: 1008e48f3; -[SCSnapCommonLoggingParamsBuilder withMusicSourcePageType:] */

void FUN_1008e48ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x968) = param_3;
  return;
}



/* Entry: 1008e48f4; end: 1008e48fb; -[SCSnapCommonLoggingParamsBuilder withSmartTemplateEffect:] */

void FUN_1008e48f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x9c0) = param_3;
  return;
}



/* Entry: 1008e48fc; end: 1008e4903; -[SCSnapCommonLoggingParamsBuilder withSectionType:] */

void FUN_1008e48fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 600) = param_3;
  return;
}



/* Entry: 1008e4904; end: 1008e490b; -[SCSnapCommonLoggingParamsBuilder withTemplateSource:] */

void FUN_1008e4904(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa88) = param_3;
  return;
}



/* Entry: 1008e490c; end: 1008e4913; -[SCSnapCommonLoggingParamsBuilder withQuickPostSource:] */

void FUN_1008e490c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xac0) = param_3;
  return;
}



/* Entry: 1008e4914; end: 1008e491b; -[SCSnapCommonLoggingParamsBuilder withContentLossReason:] */

void FUN_1008e4914(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x910) = param_3;
  return;
}



/* Entry: 1008e491c; end: 1008e4923; -[SCSnapCommonLoggingParamsBuilder withTriggeringSection:] */

void FUN_1008e491c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xab8) = param_3;
  return;
}



/* Entry: 1008e4924; end: 1008e6013; -[SCSnapCommonLoggingParamsBuilder build] */

void FUN_1008e4924(long param_1)

{
  undefined *puVar1;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar1 = PTR_PTR_1126d9630;
  func_0x000107c610f4();
  func_0x000107c4878c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x140),
                      *(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174),
                      *(undefined4 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x1d0),
                      *(undefined8 *)(param_1 + 0x208),*(undefined8 *)(param_1 + 0x220),puVar1,
                      *(undefined8 *)(param_1 + 0xa88),*(undefined1 *)(param_1 + 8),
                      *(undefined1 *)(param_1 + 9),*(undefined1 *)(param_1 + 10),
                      *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                      *(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21),
                      *(undefined1 *)(param_1 + 0x25),*(undefined1 *)(param_1 + 0x29));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008e6014; end: 1008e8a8b; -[SCSnapCommonLoggingParams initWithSnapEditor:timelineEdit:timelineLayer:animatedStickerCount:animatedFilterCount:withAnimated:drawing:cropping:croppingStateChanged:withGallery:withMyStory:withFriendStory:withPublicStory:withMapStory:withSpotlightStory:withGroupCustomStory:withStoryPost:withPrivateStoryCount:withNonPrivateStoryCount:storyBusinessIds:withMyStoryPrivacyOverride:withOurStory:withSnap:withLocationEnabled:fromPreview:savedToGalleryByScreenshot:savedToGalleryByScreenRecording:reply:viewTime:caption:filterIndexCount:filterSeenCount:filterIndexPos:recipientCount:invitedRecipientCount:storyPostCount:source:contentSource:sourcePageSessionId:productMediaType:encryptedGeoData:filterGeoId:filterGeoIdList:filterInfo:filterCTPItemRequestId:unlockableStickerIds:geoFilterDynamicContextSources:filterVisual:lagunaUserAgent:lagunaDeviceId:shareChannel:replyCta:inChatSource:cellViewPosition:sendToSessionId:rankingResultsId:lowLightStatus:brightnessValue:flashOn:flashMode:frontCamera:cameraFlipsWhileRecording:hasLabel:lowLightBoostEnabledBeforeCapture:handsFree:handsFreeActivationType:mediaDuration:fullSnapTimeSec:segmentTimeSec:mediaType:mediaSources:cameraSource:cameraMode:activeCameraModes:detailedCameraModes:gridModeState:flashTriggerSource:captureSource:withZooming:zoomingLevel:exposureBias:isBatchCapture:isTimeline:isMultiCam:finalSelectedMultiCamLayout:isShutterSoundEnabled:spotlightModes:ringFlashColor:ringFlashSize:ringFlashAutoEnableTooltipShown:ringFlashAutoEnable:cameraFlipActionDuringCapture:toneModeAdjustedImageDiff:toneModeFineTuningValue:toneModeSliderValue:toneModeToneMappingParams:recordingSpeed:ringStyle:videoStabilizationMode:sectionType:backCameraDeviceType:lensPosition:zoomFactorsRange:preCaptureZoomLevel:zoomLevelGroup:captureZoomSource:isDeviceInMotion:motionValue:multiSnapCount:multiSnapIndex:deletedSegments:trimmed:trimToolOpenCount:hasIndividualCreativeTools:multiSnapBundleId:multiSnapPreviewCount:multiSnapPreviewIndex:multiSnapOutputCount:multiSnapOutputIndex:lensSessionId:arBarTabSessionId:arBarTabCategoryId:postCaptureLensId:lensId:lensOptionId:lensOptionSourceType:lensSource:lensType:faceFrontCameraCount:faceBackCameraCount:lensIndexPos:lensIndexCount:lensBundleUrl:lensConfigurations:toolLensesMap:creativeToolsEditSessionId:hasGeoLens:hasSponsoredLens:snappableFunnelIdAndDepth:lensNamespace:lensCollectionId:lensAdId:lensSponsoredType:rankingId:rankingData:lensExplorerCategoryId:lensPromptId:lensPromptTurnBasedTurnNumber:lensPromptTurnBasedIsComplete:lensCustomizationId:targetingCampaignId:lensSwipeId:launchSourceAdId:captionTracking:captionAddCount:captionUseCount:captionDeletionCount:captionStyleList:captionStyleLoggingParams:captionStylesLoadingTime:captionToolIsOpened:tagFromCarouselCount:tagCount:creatorTagCount:friendedTagCount:unverifiedTagCount:faceTagCount:staticCaptionPlacePositions:staticCaptionWithTagPlacePositions:captionScales:captionTimeBasedUseCount:captionOnPreviewPresentation:autoCaptionsEnabled:voiceoverEnabled:filterMotion:filterReverse:swipeCount:snapSessionId:startRecordingTimestamp:captureSessionId:firstSwipeDirection:lastFilterRenderTime:filterRenderTimes:filterInfoValue:filterStreakValue:filterRemovalCount:filterStreakType:snapTimeIsLoop:filterCarouselLoggingParams:shouldSaveToMemories:saveCount:snapDidSendToChat:snapDidPostToStory:snapDidSaveAsCopy:snapDidSaveToReplace:snapIsFromSearch:memoriesUserContext:gallerySendSource:destinations:galleryMediaType:orientation:entryType:meo:hasCreative:entryExternalId:galleryCollectionCategory:visitSendToCount:clientProcessingType:templateId:collageUCOLensId:memoriesSnapIndexInStory:featuredStoryTemplateName:featuredStoryGroupName:featuredStoryLoggingInfo:videoCreateSessionId:memSessionId:memTabSessionId:viewSource:memTrimmedSourceDurationMs:stickerCount:stickerTrackingCount:stickerDeletionCount:stickerAutoGeneratedUsageCount:emojiStickersCount:bitmojiStickersCount:bitmojiGeoStickersCount:snapchatStickersCount:emojiStickersFromRecentCount:bitmojiStickersFromRecentCount:bitmojiGeoStickersFromRecentCount:snapchatStickersFromRecentCount:stickerFromSearchCount:stickerUserEnterSearchCount:pretypeStickerTagSelectCount:prefixMatchStickerTagSelectCount:infoStickersCount:contextualStickersCount:infoStickerTapCount:unlockableStickerCount:giphyStickerCount:gameSnippetStickerCount:emojiStickersList:bitmojiStickersList:bitmojiGeoStickersList:snapchatStickersList:infoStickersList:contextualStickersList:unlockableStickerList:giphyStickerList:gameSnippetStickerList:customStickerList:stickerPackIds:staticStickerPlacePositions:stickerMaxScale:encodedStickers:stickerCanvasId:stickerTimeBasedUseCount:stickerLoggingParams:customStickerCreationCount:customStickerDeletionCount:customStickerSelectionCount:customStickerSelectionFromRecentCount:customStickerFromCutoutCreationCount:customStickerFromCutoutDeletionCount:drawToolButtonClicked:emojiBrushClicked:attachmentToolButtonClicked:timerToolButtonClicked:soundToolButtonClicked:chatReplyAddMoreFriendButtonClicked:postStoryButtonClicked:snapCreateTime:correspondentGuidsString:correspondentIdsString:mischiefIdsString:snapcraftStyleId:tapCount:filterVenueYOffset:venueTapIndex:venueID:geofilterVenueID:hasVenueSticker:hasVenueFilter:hasBackgroundFilter:venueIsFromSearch:venueDistanceFromSnap:drawToolColorsHexString:drawToolColorChanged:drawToolUndoButtonTapCount:brushResizeCount:brushStroke:drawingStartPositions:drawingV2PaletteChangeCount:drawingV2PalettesUsed:drawingV2StrawPickCount:withAttachment:audioFilterStyleId:soundToolEffectChanged:audioBitrate:activeMicrophoneMode:preferredMicrophoneMode:lastPreferredMicrophoneMode:videoMode:visualFilterIsSeen:groupStoriesSendCount:availableGroupStoriesCount:expiredGroupStoryPostCount:availableExpiredGroupStoryCount:officialStoriesSendCount:sharedStoriesSendCount:viewMoreStoriesTapCount:reshareItemId:filterStackingButtonAddCount:filterStackingButtonRemoveCount:autoCreativeFilterId:withFilterPeeking:entryId:snapId:mediaFormat:spectaclesContentId:previewExitType:shutterSpeed:ISO:aperture:brightness:withAdjustingExposure:withAdjustingFocus:withSendToPagePresentedFromPreview:fromSendTo:topsnapAdId:topsnapAdRequestClientId:filterSource:withSnapReply:navigationAction:creativeKitSnapMetadata:withRecoveredMedia:recoveredSnap:contentLossReason:screenOverlayDataSize:roleType:storyInviteIdHashed:magicMomentSliderPosition:magicMomentTriedCount:magicMomentApplied:stickerBloopCount:stickerBloopListIds:musicTrackId:musicPickerSessionId:musicSourcePageType:matchedTrackId:musicSessionId:remixLoggingParams:remixAllowed:repostSourceSnapId:promptRepostChatId:contextSessionId:cameraShortcutId:scanSessionId:timelineSegmentIndex:smartTemplateEffect:friendsFeedShortcutType:segmentLoggingParams:exportOrigin:savingSessionId:previewExportWithCameraRoll:previewExportWithGallery:musicEnabledAudioMix:voiceoverEnabledAudioMix:musicMixedVolume:baseMediaMixedVolume:voiceoverMixedVolume:isStreakRestore:expiredStreakCount:aiCropToolLoggingParams:magicCaptionLoggingParams:dreamPackId:dreamId:dreamsSessionId:textToSpeechCount:textToSpeechFailed:isPinched:isMediaGeneratedByAIMode:hasExternalMedia:externalMediaImportMethods:isAspectRatioButtonActivated:importedContentId:lyricsTrackIdInLens:soundSyncTrackIdInLens:plusSnapModeParams:isQuickCut:templateSource:isTemporaryStorage:isLensLocked:lensLockReason:freemiumGroupId:isContinuousCapture:crossPostSessionId:triggeringSection:quickPostSource:soundVisualizerTools:isSnapBack:isGamesViewSnap:reactionCameraEnabled:] */

undefined8 *
FUN_1008e6014(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined1 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined1 param_55,undefined4 param_56,
             undefined8 param_57,undefined1 param_58,undefined4 param_59,undefined8 param_60,
             undefined4 param_61,undefined4 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70,undefined8 param_71,undefined8 param_72,
             undefined1 param_73,undefined4 param_74,undefined8 param_75,undefined4 param_76,
             undefined4 param_77,undefined8 param_78,undefined1 param_79,undefined4 param_80,
             undefined8 param_81,undefined8 param_82,undefined4 param_83,undefined4 param_84,
             undefined8 param_85,undefined8 param_86,undefined8 param_87,undefined8 param_88)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined4 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined1 in_stack_00000240;
  undefined4 in_stack_00000244;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined1 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined1 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined1 in_stack_00000328;
  undefined1 in_stack_00000329;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined1 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined1 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined1 in_stack_00000438;
  undefined1 in_stack_00000439;
  undefined1 in_stack_0000043a;
  undefined8 in_stack_00000440;
  undefined1 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined1 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined1 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined1 in_stack_000004c8;
  undefined1 in_stack_000004c9;
  undefined1 in_stack_000004ca;
  undefined1 in_stack_000004cb;
  undefined1 in_stack_000004cc;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined1 in_stack_00000500;
  undefined1 in_stack_00000501;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined1 in_stack_000006e8;
  undefined1 in_stack_000006e9;
  undefined1 in_stack_000006ea;
  undefined1 in_stack_000006eb;
  undefined1 in_stack_000006ec;
  undefined1 in_stack_000006ed;
  undefined1 in_stack_000006ee;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined1 in_stack_00000740;
  undefined1 in_stack_00000741;
  undefined1 in_stack_00000742;
  undefined1 in_stack_00000743;
  undefined4 in_stack_00000744;
  undefined8 in_stack_00000748;
  undefined1 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined1 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined1 in_stack_000007a0;
  undefined8 in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined1 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  undefined8 in_stack_00000800;
  undefined8 in_stack_00000808;
  undefined8 in_stack_00000810;
  undefined8 in_stack_00000818;
  undefined8 in_stack_00000820;
  undefined8 in_stack_00000828;
  undefined1 in_stack_00000830;
  undefined8 in_stack_00000838;
  undefined8 in_stack_00000840;
  undefined8 in_stack_00000848;
  undefined8 in_stack_00000850;
  undefined8 in_stack_00000858;
  undefined8 in_stack_00000860;
  undefined8 in_stack_00000868;
  undefined8 in_stack_00000870;
  undefined8 in_stack_00000878;
  undefined1 in_stack_00000880;
  undefined1 in_stack_00000881;
  undefined1 in_stack_00000882;
  undefined1 in_stack_00000883;
  undefined8 in_stack_00000888;
  undefined8 in_stack_00000890;
  undefined8 in_stack_00000898;
  undefined1 in_stack_000008a0;
  undefined8 in_stack_000008a8;
  undefined8 in_stack_000008b0;
  undefined1 in_stack_000008b8;
  undefined1 in_stack_000008b9;
  undefined8 in_stack_000008c0;
  undefined8 in_stack_000008c8;
  undefined8 in_stack_000008d0;
  undefined8 in_stack_000008d8;
  undefined8 in_stack_000008e0;
  undefined8 in_stack_000008e8;
  undefined1 in_stack_000008f0;
  undefined8 in_stack_000008f8;
  undefined8 in_stack_00000900;
  undefined8 in_stack_00000908;
  undefined8 in_stack_00000910;
  undefined8 in_stack_00000918;
  undefined8 in_stack_00000920;
  undefined8 in_stack_00000928;
  undefined8 in_stack_00000930;
  undefined1 in_stack_00000938;
  undefined8 in_stack_00000940;
  undefined8 in_stack_00000948;
  undefined8 in_stack_00000950;
  undefined8 in_stack_00000958;
  undefined8 in_stack_00000960;
  undefined8 in_stack_00000968;
  undefined8 in_stack_00000970;
  undefined8 in_stack_00000978;
  undefined8 in_stack_00000980;
  undefined8 in_stack_00000988;
  undefined8 in_stack_00000990;
  undefined1 in_stack_00000998;
  undefined1 in_stack_00000999;
  undefined1 in_stack_0000099a;
  undefined1 in_stack_0000099b;
  undefined8 in_stack_000009a0;
  undefined8 in_stack_000009a8;
  undefined8 in_stack_000009b0;
  undefined1 in_stack_000009b8;
  undefined8 in_stack_000009c0;
  undefined8 in_stack_000009c8;
  undefined8 in_stack_000009d0;
  undefined8 in_stack_000009d8;
  undefined8 in_stack_000009e0;
  undefined8 in_stack_000009e8;
  undefined8 in_stack_000009f0;
  undefined1 in_stack_000009f8;
  undefined1 in_stack_000009f9;
  undefined1 in_stack_000009fa;
  undefined1 in_stack_000009fb;
  undefined8 in_stack_00000a00;
  undefined1 in_stack_00000a08;
  undefined8 in_stack_00000a10;
  undefined8 in_stack_00000a18;
  undefined8 in_stack_00000a20;
  undefined8 in_stack_00000a28;
  undefined1 in_stack_00000a30;
  undefined8 in_stack_00000a38;
  undefined1 in_stack_00000a40;
  undefined1 in_stack_00000a41;
  undefined8 in_stack_00000a48;
  undefined8 in_stack_00000a50;
  undefined1 in_stack_00000a58;
  undefined8 in_stack_00000a60;
  undefined8 in_stack_00000a68;
  undefined8 in_stack_00000a70;
  undefined8 in_stack_00000a78;
  undefined1 in_stack_00000a80;
  undefined1 in_stack_00000a81;
  undefined1 in_stack_00000a82;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  func_0x000107c61174();
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_65);
  func_0x000107c61174(param_68);
  func_0x000107c61174(param_69);
  func_0x000107c61174(param_75);
  func_0x000107c61174(param_81);
  func_0x000107c61174(param_85);
  func_0x000107c61174(param_88);
  func_0x000107c61174(in_stack_00000220);
  func_0x000107c61174(in_stack_00000278);
  func_0x000107c61174(in_stack_000002a0);
  func_0x000107c61174(in_stack_000002a8);
  func_0x000107c61174(in_stack_000002b0);
  func_0x000107c61174(in_stack_000002b8);
  func_0x000107c61174(in_stack_000002c0);
  func_0x000107c61174(in_stack_000002c8);
  func_0x000107c61174(in_stack_00000308);
  func_0x000107c61174(in_stack_00000310);
  func_0x000107c61174(in_stack_00000318);
  func_0x000107c61174(in_stack_00000320);
  func_0x000107c61174(in_stack_00000330);
  func_0x000107c61174(in_stack_00000338);
  func_0x000107c61174(in_stack_00000340);
  func_0x000107c61174(in_stack_00000348);
  func_0x000107c61174(in_stack_00000358);
  func_0x000107c61174(in_stack_00000360);
  func_0x000107c61174(in_stack_00000368);
  func_0x000107c61174(in_stack_00000370);
  func_0x000107c61174(in_stack_00000378);
  func_0x000107c61174(in_stack_00000380);
  func_0x000107c61174(in_stack_00000388);
  func_0x000107c61174(in_stack_00000390);
  func_0x000107c61174(in_stack_00000398);
  func_0x000107c61174(in_stack_000003a0);
  func_0x000107c61174(in_stack_000003c8);
  func_0x000107c61174(in_stack_000003d0);
  func_0x000107c61174(in_stack_00000418);
  func_0x000107c61174(in_stack_00000420);
  func_0x000107c61174(in_stack_00000428);
  func_0x000107c61174(in_stack_00000458);
  func_0x000107c61174(in_stack_00000460);
  func_0x000107c61174(in_stack_00000468);
  func_0x000107c61174(in_stack_00000478);
  func_0x000107c61174(in_stack_00000480);
  func_0x000107c61174(in_stack_00000488);
  func_0x000107c61174(in_stack_000004b0);
  func_0x000107c61174(in_stack_000004d0);
  func_0x000107c61174(in_stack_000004e0);
  func_0x000107c61174(in_stack_00000508);
  func_0x000107c61174(in_stack_00000510);
  func_0x000107c61174(in_stack_00000520);
  func_0x000107c61174(in_stack_00000528);
  func_0x000107c61174(in_stack_00000530);
  func_0x000107c61174(in_stack_00000540);
  func_0x000107c61174(in_stack_00000548);
  func_0x000107c61174(in_stack_00000550);
  func_0x000107c61174(in_stack_00000558);
  func_0x000107c61174(in_stack_00000560);
  func_0x000107c61174(in_stack_00000568);
  func_0x000107c61174(in_stack_00000578);
  func_0x000107c61174(in_stack_00000630);
  func_0x000107c61174(in_stack_00000638);
  func_0x000107c61174(in_stack_00000640);
  func_0x000107c61174(in_stack_00000648);
  func_0x000107c61174(in_stack_00000650);
  func_0x000107c61174(in_stack_00000658);
  func_0x000107c61174(in_stack_00000660);
  func_0x000107c61174(in_stack_00000668);
  func_0x000107c61174(in_stack_00000670);
  func_0x000107c61174(in_stack_00000678);
  func_0x000107c61174(in_stack_00000680);
  func_0x000107c61174(in_stack_00000688);
  func_0x000107c61174(in_stack_00000698);
  func_0x000107c61174(in_stack_000006a0);
  func_0x000107c61174(in_stack_000006b0);
  func_0x000107c61174(in_stack_000006f0);
  func_0x000107c61174(in_stack_000006f8);
  func_0x000107c61174(in_stack_00000700);
  func_0x000107c61174(in_stack_00000708);
  func_0x000107c61174(in_stack_00000710);
  func_0x000107c61174(in_stack_00000730);
  func_0x000107c61174(in_stack_00000738);
  func_0x000107c61174(in_stack_00000748);
  func_0x000107c61174(in_stack_00000768);
  func_0x000107c61174(in_stack_00000770);
  func_0x000107c61174(in_stack_00000780);
  func_0x000107c61174(in_stack_00000798);
  func_0x000107c61174(in_stack_000007a8);
  func_0x000107c61174(in_stack_00000810);
  func_0x000107c61174(in_stack_00000828);
  func_0x000107c61174(in_stack_00000838);
  func_0x000107c61174(in_stack_00000840);
  func_0x000107c61174(in_stack_00000850);
  func_0x000107c61174(in_stack_00000888);
  func_0x000107c61174(in_stack_00000890);
  func_0x000107c61174(in_stack_000008b0);
  func_0x000107c61174(in_stack_000008d8);
  func_0x000107c61174(in_stack_000008e0);
  func_0x000107c61174(in_stack_000008e8);
  func_0x000107c61174(in_stack_00000900);
  func_0x000107c61174(in_stack_00000908);
  func_0x000107c61174(in_stack_00000910);
  func_0x000107c61174(in_stack_00000920);
  func_0x000107c61174(in_stack_00000928);
  func_0x000107c61174(in_stack_00000930);
  func_0x000107c61174(in_stack_00000940);
  func_0x000107c61174(in_stack_00000948);
  func_0x000107c61174(in_stack_00000950);
  func_0x000107c61174(in_stack_00000958);
  func_0x000107c61174(in_stack_00000960);
  func_0x000107c61174(in_stack_00000978);
  func_0x000107c61174(in_stack_00000980);
  func_0x000107c61174(in_stack_00000990);
  func_0x000107c61174(in_stack_000009a0);
  func_0x000107c61174(in_stack_000009a8);
  func_0x000107c61174(in_stack_000009b0);
  func_0x000107c61174(in_stack_000009c8);
  func_0x000107c61174(in_stack_000009d0);
  func_0x000107c61174(in_stack_000009d8);
  func_0x000107c61174(in_stack_000009e0);
  func_0x000107c61174(in_stack_000009e8);
  func_0x000107c61174(in_stack_00000a00);
  func_0x000107c61174(in_stack_00000a10);
  func_0x000107c61174(in_stack_00000a18);
  func_0x000107c61174(in_stack_00000a20);
  func_0x000107c61174(in_stack_00000a28);
  func_0x000107c61174(in_stack_00000a48);
  func_0x000107c61174(in_stack_00000a50);
  func_0x000107c61174(in_stack_00000a60);
  func_0x000107c61174(in_stack_00000a78);
  puStack_b0 = PTR_PTR_1127051a0;
  puVar1 = &uStack_b8;
  uStack_b8 = param_9;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    *(undefined1 *)((long)puVar1 + 10) = param_13;
    puVar1[0x11] = param_14;
    puVar1[0x12] = param_15;
    *(undefined1 *)((long)puVar1 + 0xb) = param_16;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 0xd) = param_17._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_17._2_1_;
    *(undefined1 *)((long)puVar1 + 0xf) = param_17._3_1_;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 0x11) = param_18._1_1_;
    *(undefined1 *)((long)puVar1 + 0x12) = param_18._2_1_;
    *(undefined1 *)((long)puVar1 + 0x13) = param_18._3_1_;
    *(undefined1 *)((long)puVar1 + 0x14) = (undefined1)param_19;
    *(undefined1 *)((long)puVar1 + 0x15) = param_19._1_1_;
    *(undefined1 *)((long)puVar1 + 0x16) = param_19._2_1_;
    puVar1[0x13] = param_21;
    puVar1[0x14] = param_22;
    uVar2 = param_23;
    func_0x000107c40794();
    uVar3 = puVar1[0x15];
    puVar1[0x15] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_24;
    func_0x000107c40794();
    uVar3 = puVar1[0x16];
    puVar1[0x16] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x17) = (undefined1)param_25;
    *(undefined1 *)(puVar1 + 3) = param_25._1_1_;
    *(undefined1 *)((long)puVar1 + 0x19) = param_25._2_1_;
    *(undefined1 *)((long)puVar1 + 0x1a) = param_25._3_1_;
    *(undefined1 *)((long)puVar1 + 0x1b) = (undefined1)param_26;
    *(undefined1 *)((long)puVar1 + 0x1c) = param_26._1_1_;
    *(undefined1 *)((long)puVar1 + 0x1d) = param_26._2_1_;
    *(undefined4 *)(puVar1 + 0xd) = param_1;
    puVar1[0x17] = param_27;
    puVar1[0x18] = param_28;
    puVar1[0x19] = param_29;
    puVar1[0x1a] = param_30;
    puVar1[0x1b] = param_31;
    puVar1[0x1c] = param_32;
    puVar1[0x1d] = param_33;
    puVar1[0x1e] = param_34;
    puVar1[0x1f] = param_35;
    uVar2 = param_36;
    func_0x000107c40794();
    uVar3 = puVar1[0x20];
    puVar1[0x20] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x21] = param_37;
    uVar2 = param_38;
    func_0x000107c40794();
    uVar3 = puVar1[0x22];
    puVar1[0x22] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_39;
    func_0x000107c40794();
    uVar3 = puVar1[0x23];
    puVar1[0x23] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_40;
    func_0x000107c40794();
    uVar3 = puVar1[0x24];
    puVar1[0x24] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_41;
    func_0x000107c40794();
    uVar3 = puVar1[0x25];
    puVar1[0x25] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_42;
    func_0x000107c40794();
    uVar3 = puVar1[0x26];
    puVar1[0x26] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_43;
    func_0x000107c40794();
    uVar3 = puVar1[0x27];
    puVar1[0x27] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_44;
    func_0x000107c40794();
    uVar3 = puVar1[0x28];
    puVar1[0x28] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_45;
    func_0x000107c40794();
    uVar3 = puVar1[0x29];
    puVar1[0x29] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_46;
    func_0x000107c40794();
    uVar3 = puVar1[0x2a];
    puVar1[0x2a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_47;
    func_0x000107c40794();
    uVar3 = puVar1[0x2b];
    puVar1[0x2b] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_48;
    func_0x000107c40794();
    uVar3 = puVar1[0x2c];
    puVar1[0x2c] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x2d] = param_49;
    puVar1[0x2e] = param_50;
    puVar1[0x2f] = param_51;
    uVar2 = param_52;
    func_0x000107c40794();
    uVar3 = puVar1[0x30];
    puVar1[0x30] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_53;
    func_0x000107c40794();
    uVar3 = puVar1[0x31];
    puVar1[0x31] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x1e) = param_55;
    puVar1[0x32] = param_54;
    puVar1[0x33] = param_57;
    *(undefined1 *)((long)puVar1 + 0x1f) = param_58;
    *(undefined1 *)(puVar1 + 4) = (undefined1)param_61;
    *(undefined1 *)((long)puVar1 + 0x21) = param_61._1_1_;
    *(undefined1 *)((long)puVar1 + 0x22) = param_61._2_1_;
    puVar1[0x34] = param_60;
    puVar1[0x35] = param_63;
    *(undefined4 *)((long)puVar1 + 0x6c) = param_2;
    *(undefined4 *)(puVar1 + 0xe) = param_3;
    *(undefined4 *)((long)puVar1 + 0x74) = param_4;
    *(undefined4 *)(puVar1 + 0xf) = param_5;
    puVar1[0x36] = param_64;
    uVar2 = param_65;
    func_0x000107c40794();
    uVar3 = puVar1[0x37];
    puVar1[0x37] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x38] = param_66;
    puVar1[0x39] = param_67;
    uVar2 = param_68;
    func_0x000107c40794();
    uVar3 = puVar1[0x3a];
    puVar1[0x3a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_69;
    func_0x000107c40794();
    uVar3 = puVar1[0x3b];
    puVar1[0x3b] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x3c] = param_70;
    puVar1[0x3d] = param_71;
    puVar1[0x3e] = param_72;
    *(undefined1 *)((long)puVar1 + 0x23) = param_73;
    puVar1[0x3f] = param_6;
    uVar2 = param_75;
    func_0x000107c40794();
    uVar3 = puVar1[0x40];
    puVar1[0x40] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x24) = (undefined1)param_76;
    *(undefined1 *)((long)puVar1 + 0x25) = param_76._1_1_;
    *(undefined1 *)((long)puVar1 + 0x26) = param_76._2_1_;
    puVar1[0x41] = param_78;
    *(undefined1 *)((long)puVar1 + 0x27) = param_79;
    uVar2 = param_81;
    func_0x000107c40794();
    uVar3 = puVar1[0x42];
    puVar1[0x42] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x43] = param_82;
    puVar1[0x44] = param_7;
    *(undefined1 *)(puVar1 + 5) = (undefined1)param_83;
    *(undefined1 *)((long)puVar1 + 0x29) = param_83._1_1_;
    uVar2 = param_85;
    func_0x000107c40794();
    uVar3 = puVar1[0x45];
    puVar1[0x45] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x46] = param_8;
    puVar1[0x47] = param_86;
    puVar1[0x48] = param_87;
    uVar2 = param_88;
    func_0x000107c40794();
    uVar3 = puVar1[0x49];
    puVar1[0x49] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x4a] = in_stack_000001f0;
    puVar1[0x4b] = in_stack_000001f8;
    puVar1[0x4c] = in_stack_00000200;
    puVar1[0x4d] = in_stack_00000208;
    puVar1[0x4e] = in_stack_00000210;
    *(undefined4 *)((long)puVar1 + 0x7c) = in_stack_00000218;
    uVar2 = in_stack_00000220;
    func_0x000107c40794();
    uVar3 = puVar1[0x4f];
    puVar1[0x4f] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x50] = in_stack_00000228;
    puVar1[0x51] = in_stack_00000230;
    puVar1[0x52] = in_stack_00000238;
    *(undefined1 *)((long)puVar1 + 0x2a) = in_stack_00000240;
    *(undefined4 *)(puVar1 + 0x10) = in_stack_00000244;
    puVar1[0x53] = in_stack_00000248;
    puVar1[0x54] = in_stack_00000250;
    puVar1[0x55] = in_stack_00000258;
    *(undefined1 *)((long)puVar1 + 0x2b) = in_stack_00000260;
    puVar1[0x56] = in_stack_00000268;
    *(undefined1 *)((long)puVar1 + 0x2c) = in_stack_00000270;
    uVar2 = in_stack_00000278;
    func_0x000107c40794();
    uVar3 = puVar1[0x57];
    puVar1[0x57] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x58] = in_stack_00000280;
    puVar1[0x59] = in_stack_00000288;
    puVar1[0x5a] = in_stack_00000290;
    puVar1[0x5b] = in_stack_00000298;
    uVar2 = in_stack_000002a0;
    func_0x000107c40794();
    uVar3 = puVar1[0x5c];
    puVar1[0x5c] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000002a8;
    func_0x000107c40794();
    uVar3 = puVar1[0x5d];
    puVar1[0x5d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000002b0;
    func_0x000107c40794();
    uVar3 = puVar1[0x5e];
    puVar1[0x5e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000002b8;
    func_0x000107c40794();
    uVar3 = puVar1[0x5f];
    puVar1[0x5f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000002c0;
    func_0x000107c40794();
    uVar3 = puVar1[0x60];
    puVar1[0x60] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000002c8;
    func_0x000107c40794();
    uVar3 = puVar1[0x61];
    puVar1[0x61] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x62] = in_stack_000002d0;
    puVar1[99] = in_stack_000002d8;
    puVar1[100] = in_stack_000002e0;
    puVar1[0x65] = in_stack_000002e8;
    puVar1[0x66] = in_stack_000002f0;
    puVar1[0x67] = in_stack_000002f8;
    puVar1[0x68] = in_stack_00000300;
    uVar2 = in_stack_00000308;
    func_0x000107c40794();
    uVar3 = puVar1[0x69];
    puVar1[0x69] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000310;
    func_0x000107c40794();
    uVar3 = puVar1[0x6a];
    puVar1[0x6a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000318;
    func_0x000107c40794();
    uVar3 = puVar1[0x6b];
    puVar1[0x6b] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000320;
    func_0x000107c40794();
    uVar3 = puVar1[0x6c];
    puVar1[0x6c] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x2d) = in_stack_00000328;
    *(undefined1 *)((long)puVar1 + 0x2e) = in_stack_00000329;
    uVar2 = in_stack_00000330;
    func_0x000107c40794();
    uVar3 = puVar1[0x6d];
    puVar1[0x6d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000338;
    func_0x000107c40794();
    uVar3 = puVar1[0x6e];
    puVar1[0x6e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000340;
    func_0x000107c40794();
    uVar3 = puVar1[0x6f];
    puVar1[0x6f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000348;
    func_0x000107c40794();
    uVar3 = puVar1[0x70];
    puVar1[0x70] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x71] = in_stack_00000350;
    uVar2 = in_stack_00000358;
    func_0x000107c40794();
    uVar3 = puVar1[0x72];
    puVar1[0x72] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000360;
    func_0x000107c40794();
    uVar3 = puVar1[0x73];
    puVar1[0x73] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000368;
    func_0x000107c40794();
    uVar3 = puVar1[0x74];
    puVar1[0x74] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000370;
    func_0x000107c40794();
    uVar3 = puVar1[0x75];
    puVar1[0x75] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000378;
    func_0x000107c40794();
    uVar3 = puVar1[0x76];
    puVar1[0x76] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000380;
    func_0x000107c40794();
    uVar3 = puVar1[0x77];
    puVar1[0x77] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000388;
    func_0x000107c40794();
    uVar3 = puVar1[0x78];
    puVar1[0x78] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000390;
    func_0x000107c40794();
    uVar3 = puVar1[0x79];
    puVar1[0x79] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000398;
    func_0x000107c40794();
    uVar3 = puVar1[0x7a];
    puVar1[0x7a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000003a0;
    func_0x000107c40794();
    uVar3 = puVar1[0x7b];
    puVar1[0x7b] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x2f) = in_stack_000003a8;
    puVar1[0x7c] = in_stack_000003b0;
    puVar1[0x7d] = in_stack_000003b8;
    puVar1[0x7e] = in_stack_000003c0;
    uVar2 = in_stack_000003c8;
    func_0x000107c40794();
    uVar3 = puVar1[0x7f];
    puVar1[0x7f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000003d0;
    func_0x000107c40794();
    uVar3 = puVar1[0x80];
    puVar1[0x80] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x81] = in_stack_000003d8;
    *(undefined1 *)(puVar1 + 6) = in_stack_000003e0;
    puVar1[0x82] = in_stack_000003e8;
    puVar1[0x83] = in_stack_000003f0;
    puVar1[0x84] = in_stack_000003f8;
    puVar1[0x85] = in_stack_00000400;
    puVar1[0x86] = in_stack_00000408;
    puVar1[0x87] = in_stack_00000410;
    uVar2 = in_stack_00000418;
    func_0x000107c40794();
    uVar3 = puVar1[0x88];
    puVar1[0x88] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000420;
    func_0x000107c40794();
    uVar3 = puVar1[0x89];
    puVar1[0x89] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000428;
    func_0x000107c40794();
    uVar3 = puVar1[0x8a];
    puVar1[0x8a] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x8b] = in_stack_00000430;
    *(undefined1 *)((long)puVar1 + 0x31) = in_stack_00000438;
    *(undefined1 *)((long)puVar1 + 0x32) = in_stack_00000439;
    *(undefined1 *)((long)puVar1 + 0x33) = in_stack_0000043a;
    puVar1[0x8c] = in_stack_00000440;
    *(undefined1 *)((long)puVar1 + 0x34) = in_stack_00000448;
    puVar1[0x8d] = in_stack_00000450;
    uVar2 = in_stack_00000458;
    func_0x000107c40794();
    uVar3 = puVar1[0x8e];
    puVar1[0x8e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000460;
    func_0x000107c40794();
    uVar3 = puVar1[0x8f];
    puVar1[0x8f] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000468;
    func_0x000107c40794();
    uVar3 = puVar1[0x90];
    puVar1[0x90] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x91] = in_stack_00000470;
    uVar2 = in_stack_00000478;
    func_0x000107c40794();
    uVar3 = puVar1[0x92];
    puVar1[0x92] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000480;
    func_0x000107c40794();
    uVar3 = puVar1[0x93];
    puVar1[0x93] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000488;
    func_0x000107c40794();
    uVar3 = puVar1[0x94];
    puVar1[0x94] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x95] = in_stack_00000490;
    puVar1[0x96] = in_stack_00000498;
    puVar1[0x97] = in_stack_000004a0;
    *(undefined1 *)((long)puVar1 + 0x35) = in_stack_000004a8;
    uVar2 = in_stack_000004b0;
    func_0x000107c40794();
    uVar3 = puVar1[0x98];
    puVar1[0x98] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x36) = in_stack_000004b8;
    puVar1[0x99] = in_stack_000004c0;
    *(undefined1 *)((long)puVar1 + 0x37) = in_stack_000004c8;
    *(undefined1 *)(puVar1 + 7) = in_stack_000004c9;
    *(undefined1 *)((long)puVar1 + 0x39) = in_stack_000004ca;
    *(undefined1 *)((long)puVar1 + 0x3a) = in_stack_000004cb;
    *(undefined1 *)((long)puVar1 + 0x3b) = in_stack_000004cc;
    uVar2 = in_stack_000004d0;
    func_0x000107c40794();
    uVar3 = puVar1[0x9a];
    puVar1[0x9a] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x9b] = in_stack_000004d8;
    uVar2 = in_stack_000004e0;
    func_0x000107c40794();
    uVar3 = puVar1[0x9c];
    puVar1[0x9c] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x9d] = in_stack_000004e8;
    puVar1[0x9e] = in_stack_000004f0;
    puVar1[0x9f] = in_stack_000004f8;
    *(undefined1 *)((long)puVar1 + 0x3c) = in_stack_00000500;
    *(undefined1 *)((long)puVar1 + 0x3d) = in_stack_00000501;
    uVar2 = in_stack_00000508;
    func_0x000107c40794();
    uVar3 = puVar1[0xa0];
    puVar1[0xa0] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000510;
    func_0x000107c40794();
    uVar3 = puVar1[0xa1];
    puVar1[0xa1] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xa2] = in_stack_00000518;
    uVar2 = in_stack_00000520;
    func_0x000107c40794();
    uVar3 = puVar1[0xa3];
    puVar1[0xa3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000528;
    func_0x000107c40794();
    uVar3 = puVar1[0xa4];
    puVar1[0xa4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000530;
    func_0x000107c40794();
    uVar3 = puVar1[0xa5];
    puVar1[0xa5] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xa6] = in_stack_00000538;
    uVar2 = in_stack_00000540;
    func_0x000107c40794();
    uVar3 = puVar1[0xa7];
    puVar1[0xa7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000548;
    func_0x000107c40794();
    uVar3 = puVar1[0xa8];
    puVar1[0xa8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000550;
    func_0x000107c40794();
    uVar3 = puVar1[0xa9];
    puVar1[0xa9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000558;
    func_0x000107c40794();
    uVar3 = puVar1[0xaa];
    puVar1[0xaa] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000560;
    func_0x000107c40794();
    uVar3 = puVar1[0xab];
    puVar1[0xab] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000568;
    func_0x000107c40794();
    uVar3 = puVar1[0xac];
    puVar1[0xac] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xad] = in_stack_00000570;
    uVar2 = in_stack_00000578;
    func_0x000107c40794();
    uVar3 = puVar1[0xae];
    puVar1[0xae] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xaf] = in_stack_00000580;
    puVar1[0xb0] = in_stack_00000588;
    puVar1[0xb1] = in_stack_00000590;
    puVar1[0xb2] = in_stack_00000598;
    puVar1[0xb3] = in_stack_000005a0;
    puVar1[0xb4] = in_stack_000005a8;
    puVar1[0xb5] = in_stack_000005b0;
    puVar1[0xb6] = in_stack_000005b8;
    puVar1[0xb7] = in_stack_000005c0;
    puVar1[0xb8] = in_stack_000005c8;
    puVar1[0xb9] = in_stack_000005d0;
    puVar1[0xba] = in_stack_000005d8;
    puVar1[0xbb] = in_stack_000005e0;
    puVar1[0xbc] = in_stack_000005e8;
    puVar1[0xbd] = in_stack_000005f0;
    puVar1[0xbe] = in_stack_000005f8;
    puVar1[0xbf] = in_stack_00000600;
    puVar1[0xc0] = in_stack_00000608;
    puVar1[0xc1] = in_stack_00000610;
    puVar1[0xc2] = in_stack_00000618;
    puVar1[0xc3] = in_stack_00000620;
    puVar1[0xc4] = in_stack_00000628;
    uVar2 = in_stack_00000630;
    func_0x000107c40794();
    uVar3 = puVar1[0xc5];
    puVar1[0xc5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000638;
    func_0x000107c40794();
    uVar3 = puVar1[0xc6];
    puVar1[0xc6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000640;
    func_0x000107c40794();
    uVar3 = puVar1[199];
    puVar1[199] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000648;
    func_0x000107c40794();
    uVar3 = puVar1[200];
    puVar1[200] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000650;
    func_0x000107c40794();
    uVar3 = puVar1[0xc9];
    puVar1[0xc9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000658;
    func_0x000107c40794();
    uVar3 = puVar1[0xca];
    puVar1[0xca] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000660;
    func_0x000107c40794();
    uVar3 = puVar1[0xcb];
    puVar1[0xcb] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000668;
    func_0x000107c40794();
    uVar3 = puVar1[0xcc];
    puVar1[0xcc] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000670;
    func_0x000107c40794();
    uVar3 = puVar1[0xcd];
    puVar1[0xcd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000678;
    func_0x000107c40794();
    uVar3 = puVar1[0xce];
    puVar1[0xce] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000680;
    func_0x000107c40794();
    uVar3 = puVar1[0xcf];
    puVar1[0xcf] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000688;
    func_0x000107c40794();
    uVar3 = puVar1[0xd0];
    puVar1[0xd0] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xd1] = in_stack_00000690;
    uVar2 = in_stack_00000698;
    func_0x000107c40794();
    uVar3 = puVar1[0xd2];
    puVar1[0xd2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000006a0;
    func_0x000107c40794();
    uVar3 = puVar1[0xd3];
    puVar1[0xd3] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xd4] = in_stack_000006a8;
    uVar2 = in_stack_000006b0;
    func_0x000107c40794();
    uVar3 = puVar1[0xd5];
    puVar1[0xd5] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xd6] = in_stack_000006b8;
    puVar1[0xd7] = in_stack_000006c0;
    puVar1[0xd8] = in_stack_000006c8;
    puVar1[0xd9] = in_stack_000006d0;
    puVar1[0xda] = in_stack_000006d8;
    puVar1[0xdb] = in_stack_000006e0;
    *(undefined1 *)((long)puVar1 + 0x3e) = in_stack_000006e8;
    *(undefined1 *)((long)puVar1 + 0x3f) = in_stack_000006e9;
    *(undefined1 *)(puVar1 + 8) = in_stack_000006ea;
    *(undefined1 *)((long)puVar1 + 0x41) = in_stack_000006eb;
    *(undefined1 *)((long)puVar1 + 0x42) = in_stack_000006ec;
    *(undefined1 *)((long)puVar1 + 0x43) = in_stack_000006ed;
    *(undefined1 *)((long)puVar1 + 0x44) = in_stack_000006ee;
    uVar2 = in_stack_000006f0;
    func_0x000107c40794();
    uVar3 = puVar1[0xdc];
    puVar1[0xdc] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000006f8;
    func_0x000107c40794();
    uVar3 = puVar1[0xdd];
    puVar1[0xdd] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000700;
    func_0x000107c40794();
    uVar3 = puVar1[0xde];
    puVar1[0xde] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000708;
    func_0x000107c40794();
    uVar3 = puVar1[0xdf];
    puVar1[0xdf] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000710;
    func_0x000107c40794();
    uVar3 = puVar1[0xe0];
    puVar1[0xe0] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xe1] = in_stack_00000718;
    puVar1[0xe2] = in_stack_00000720;
    puVar1[0xe3] = in_stack_00000728;
    uVar2 = in_stack_00000730;
    func_0x000107c40794();
    uVar3 = puVar1[0xe4];
    puVar1[0xe4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000738;
    func_0x000107c40794();
    uVar3 = puVar1[0xe5];
    puVar1[0xe5] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x45) = in_stack_00000740;
    *(undefined1 *)((long)puVar1 + 0x46) = in_stack_00000741;
    *(undefined1 *)((long)puVar1 + 0x47) = in_stack_00000742;
    *(undefined1 *)(puVar1 + 9) = in_stack_00000743;
    *(undefined4 *)((long)puVar1 + 0x84) = in_stack_00000744;
    uVar2 = in_stack_00000748;
    func_0x000107c40794();
    uVar3 = puVar1[0xe6];
    puVar1[0xe6] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x49) = in_stack_00000750;
    puVar1[0xe7] = in_stack_00000758;
    puVar1[0xe8] = in_stack_00000760;
    uVar2 = in_stack_00000768;
    func_0x000107c40794();
    uVar3 = puVar1[0xe9];
    puVar1[0xe9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000770;
    func_0x000107c40794();
    uVar3 = puVar1[0xea];
    puVar1[0xea] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xeb] = in_stack_00000778;
    uVar2 = in_stack_00000780;
    func_0x000107c40794();
    uVar3 = puVar1[0xec];
    puVar1[0xec] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xed] = in_stack_00000788;
    *(undefined1 *)((long)puVar1 + 0x4a) = in_stack_00000790;
    uVar2 = in_stack_00000798;
    func_0x000107c40794();
    uVar3 = puVar1[0xee];
    puVar1[0xee] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x4b) = in_stack_000007a0;
    uVar2 = in_stack_000007a8;
    func_0x000107c40794();
    uVar3 = puVar1[0xef];
    puVar1[0xef] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xf0] = in_stack_000007b0;
    puVar1[0xf1] = in_stack_000007b8;
    puVar1[0xf2] = in_stack_000007c0;
    puVar1[0xf3] = in_stack_000007c8;
    *(undefined1 *)((long)puVar1 + 0x4c) = in_stack_000007d0;
    puVar1[0xf4] = in_stack_000007d8;
    puVar1[0xf5] = in_stack_000007e0;
    puVar1[0xf6] = in_stack_000007e8;
    puVar1[0xf7] = in_stack_000007f0;
    puVar1[0xf8] = in_stack_000007f8;
    puVar1[0xf9] = in_stack_00000800;
    puVar1[0xfa] = in_stack_00000808;
    uVar2 = in_stack_00000810;
    func_0x000107c40794();
    uVar3 = puVar1[0xfb];
    puVar1[0xfb] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0xfc] = in_stack_00000818;
    puVar1[0xfd] = in_stack_00000820;
    uVar2 = in_stack_00000828;
    func_0x000107c40794();
    uVar3 = puVar1[0xfe];
    puVar1[0xfe] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x4d) = in_stack_00000830;
    uVar2 = in_stack_00000838;
    func_0x000107c40794();
    uVar3 = puVar1[0xff];
    puVar1[0xff] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000840;
    func_0x000107c40794();
    uVar3 = puVar1[0x100];
    puVar1[0x100] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x101] = in_stack_00000848;
    uVar2 = in_stack_00000850;
    func_0x000107c40794();
    uVar3 = puVar1[0x102];
    puVar1[0x102] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x103] = in_stack_00000858;
    puVar1[0x104] = in_stack_00000860;
    puVar1[0x105] = in_stack_00000868;
    puVar1[0x106] = in_stack_00000870;
    puVar1[0x107] = in_stack_00000878;
    *(undefined1 *)((long)puVar1 + 0x4e) = in_stack_00000880;
    *(undefined1 *)((long)puVar1 + 0x4f) = in_stack_00000881;
    *(undefined1 *)(puVar1 + 10) = in_stack_00000882;
    *(undefined1 *)((long)puVar1 + 0x51) = in_stack_00000883;
    uVar2 = in_stack_00000888;
    func_0x000107c40794();
    uVar3 = puVar1[0x108];
    puVar1[0x108] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000890;
    func_0x000107c40794();
    uVar3 = puVar1[0x109];
    puVar1[0x109] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x10a] = in_stack_00000898;
    *(undefined1 *)((long)puVar1 + 0x52) = in_stack_000008a0;
    puVar1[0x10b] = in_stack_000008a8;
    uVar2 = in_stack_000008b0;
    func_0x000107c40794();
    uVar3 = puVar1[0x10c];
    puVar1[0x10c] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x53) = in_stack_000008b8;
    *(undefined1 *)((long)puVar1 + 0x54) = in_stack_000008b9;
    puVar1[0x10d] = in_stack_000008c0;
    puVar1[0x10e] = in_stack_000008c8;
    puVar1[0x10f] = in_stack_000008d0;
    uVar2 = in_stack_000008d8;
    func_0x000107c40794();
    uVar3 = puVar1[0x110];
    puVar1[0x110] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000008e0;
    func_0x000107c40794();
    uVar3 = puVar1[0x111];
    puVar1[0x111] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000008e8;
    func_0x000107c40794();
    uVar3 = puVar1[0x112];
    puVar1[0x112] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x55) = in_stack_000008f0;
    puVar1[0x113] = in_stack_000008f8;
    uVar2 = in_stack_00000900;
    func_0x000107c40794();
    uVar3 = puVar1[0x114];
    puVar1[0x114] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000908;
    func_0x000107c40794();
    uVar3 = puVar1[0x115];
    puVar1[0x115] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000910;
    func_0x000107c40794();
    uVar3 = puVar1[0x116];
    puVar1[0x116] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x117] = in_stack_00000918;
    uVar2 = in_stack_00000920;
    func_0x000107c40794();
    uVar3 = puVar1[0x118];
    puVar1[0x118] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000928;
    func_0x000107c40794();
    uVar3 = puVar1[0x119];
    puVar1[0x119] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000930;
    func_0x000107c40794();
    uVar3 = puVar1[0x11a];
    puVar1[0x11a] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x56) = in_stack_00000938;
    uVar2 = in_stack_00000940;
    func_0x000107c40794();
    uVar3 = puVar1[0x11b];
    puVar1[0x11b] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000948;
    func_0x000107c40794();
    uVar3 = puVar1[0x11c];
    puVar1[0x11c] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000950;
    func_0x000107c40794();
    uVar3 = puVar1[0x11d];
    puVar1[0x11d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000958;
    func_0x000107c40794();
    uVar3 = puVar1[0x11e];
    puVar1[0x11e] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000960;
    func_0x000107c40794();
    uVar3 = puVar1[0x11f];
    puVar1[0x11f] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x120] = in_stack_00000968;
    puVar1[0x121] = in_stack_00000970;
    uVar2 = in_stack_00000978;
    func_0x000107c40794();
    uVar3 = puVar1[0x122];
    puVar1[0x122] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000980;
    func_0x000107c40794();
    uVar3 = puVar1[0x123];
    puVar1[0x123] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x124] = in_stack_00000988;
    uVar2 = in_stack_00000990;
    func_0x000107c40794();
    uVar3 = puVar1[0x125];
    puVar1[0x125] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x57) = in_stack_00000998;
    *(undefined1 *)(puVar1 + 0xb) = in_stack_00000999;
    *(undefined1 *)((long)puVar1 + 0x59) = in_stack_0000099a;
    *(undefined1 *)((long)puVar1 + 0x5a) = in_stack_0000099b;
    uVar2 = in_stack_000009a0;
    func_0x000107c40794();
    uVar3 = puVar1[0x126];
    puVar1[0x126] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000009a8;
    func_0x000107c40794();
    uVar3 = puVar1[0x127];
    puVar1[0x127] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000009b0;
    func_0x000107c40794();
    uVar3 = puVar1[0x128];
    puVar1[0x128] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x5b) = in_stack_000009b8;
    puVar1[0x129] = in_stack_000009c0;
    uVar2 = in_stack_000009c8;
    func_0x000107c40794();
    uVar3 = puVar1[0x12a];
    puVar1[0x12a] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000009d0;
    func_0x000107c40794();
    uVar3 = puVar1[299];
    puVar1[299] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000009d8;
    func_0x000107c40794();
    uVar3 = puVar1[300];
    puVar1[300] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000009e0;
    func_0x000107c40794();
    uVar3 = puVar1[0x12d];
    puVar1[0x12d] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_000009e8;
    func_0x000107c40794();
    uVar3 = puVar1[0x12e];
    puVar1[0x12e] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x12f] = in_stack_000009f0;
    *(undefined1 *)((long)puVar1 + 0x5c) = in_stack_000009f8;
    *(undefined1 *)((long)puVar1 + 0x5d) = in_stack_000009f9;
    *(undefined1 *)((long)puVar1 + 0x5e) = in_stack_000009fa;
    *(undefined1 *)((long)puVar1 + 0x5f) = in_stack_000009fb;
    uVar2 = in_stack_00000a00;
    func_0x000107c40794();
    uVar3 = puVar1[0x130];
    puVar1[0x130] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 0xc) = in_stack_00000a08;
    uVar2 = in_stack_00000a10;
    func_0x000107c40794();
    uVar3 = puVar1[0x131];
    puVar1[0x131] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000a18;
    func_0x000107c40794();
    uVar3 = puVar1[0x132];
    puVar1[0x132] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000a20;
    func_0x000107c40794();
    uVar3 = puVar1[0x133];
    puVar1[0x133] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000a28;
    func_0x000107c40794();
    uVar3 = puVar1[0x134];
    puVar1[0x134] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x61) = in_stack_00000a30;
    puVar1[0x135] = in_stack_00000a38;
    *(undefined1 *)((long)puVar1 + 0x62) = in_stack_00000a40;
    *(undefined1 *)((long)puVar1 + 99) = in_stack_00000a41;
    uVar2 = in_stack_00000a48;
    func_0x000107c40794();
    uVar3 = puVar1[0x136];
    puVar1[0x136] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = in_stack_00000a50;
    func_0x000107c40794();
    uVar3 = puVar1[0x137];
    puVar1[0x137] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 100) = in_stack_00000a58;
    uVar2 = in_stack_00000a60;
    func_0x000107c40794();
    uVar3 = puVar1[0x138];
    puVar1[0x138] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x139] = in_stack_00000a68;
    puVar1[0x13a] = in_stack_00000a70;
    uVar2 = in_stack_00000a78;
    func_0x000107c40794();
    uVar3 = puVar1[0x13b];
    puVar1[0x13b] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0x65) = in_stack_00000a80;
    *(undefined1 *)((long)puVar1 + 0x66) = in_stack_00000a81;
    *(undefined1 *)((long)puVar1 + 0x67) = in_stack_00000a82;
  }
  func_0x000107c61170(in_stack_00000a78);
  func_0x000107c61170(in_stack_00000a60);
  func_0x000107c61170(in_stack_00000a50);
  func_0x000107c61170(in_stack_00000a48);
  func_0x000107c61170(in_stack_00000a28);
  func_0x000107c61170(in_stack_00000a20);
  func_0x000107c61170(in_stack_00000a18);
  func_0x000107c61170(in_stack_00000a10);
  func_0x000107c61170(in_stack_00000a00);
  func_0x000107c61170(in_stack_000009e8);
  func_0x000107c61170(in_stack_000009e0);
  func_0x000107c61170(in_stack_000009d8);
  func_0x000107c61170(in_stack_000009d0);
  func_0x000107c61170(in_stack_000009c8);
  func_0x000107c61170(in_stack_000009b0);
  func_0x000107c61170(in_stack_000009a8);
  func_0x000107c61170(in_stack_000009a0);
  func_0x000107c61170(in_stack_00000990);
  func_0x000107c61170(in_stack_00000980);
  func_0x000107c61170(in_stack_00000978);
  func_0x000107c61170(in_stack_00000960);
  func_0x000107c61170(in_stack_00000958);
  func_0x000107c61170(in_stack_00000950);
  func_0x000107c61170(in_stack_00000948);
  func_0x000107c61170(in_stack_00000940);
  func_0x000107c61170(in_stack_00000930);
  func_0x000107c61170(in_stack_00000928);
  func_0x000107c61170(in_stack_00000920);
  func_0x000107c61170(in_stack_00000910);
  func_0x000107c61170(in_stack_00000908);
  func_0x000107c61170(in_stack_00000900);
  func_0x000107c61170(in_stack_000008e8);
  func_0x000107c61170(in_stack_000008e0);
  func_0x000107c61170(in_stack_000008d8);
  func_0x000107c61170(in_stack_000008b0);
  func_0x000107c61170(in_stack_00000890);
  func_0x000107c61170(in_stack_00000888);
  func_0x000107c61170(in_stack_00000850);
  func_0x000107c61170(in_stack_00000840);
  func_0x000107c61170(in_stack_00000838);
  func_0x000107c61170(in_stack_00000828);
  func_0x000107c61170(in_stack_00000810);
  func_0x000107c61170(in_stack_000007a8);
  func_0x000107c61170(in_stack_00000798);
  func_0x000107c61170(in_stack_00000780);
  func_0x000107c61170(in_stack_00000770);
  func_0x000107c61170(in_stack_00000768);
  func_0x000107c61170(in_stack_00000748);
  func_0x000107c61170(in_stack_00000738);
  func_0x000107c61170(in_stack_00000730);
  func_0x000107c61170(in_stack_00000710);
  func_0x000107c61170(in_stack_00000708);
  func_0x000107c61170(in_stack_00000700);
  func_0x000107c61170(in_stack_000006f8);
  func_0x000107c61170(in_stack_000006f0);
  func_0x000107c61170(in_stack_000006b0);
  func_0x000107c61170(in_stack_000006a0);
  func_0x000107c61170(in_stack_00000698);
  func_0x000107c61170(in_stack_00000688);
  func_0x000107c61170(in_stack_00000680);
  func_0x000107c61170(in_stack_00000678);
  func_0x000107c61170(in_stack_00000670);
  func_0x000107c61170(in_stack_00000668);
  func_0x000107c61170(in_stack_00000660);
  func_0x000107c61170(in_stack_00000658);
  func_0x000107c61170(in_stack_00000650);
  func_0x000107c61170(in_stack_00000648);
  func_0x000107c61170(in_stack_00000640);
  func_0x000107c61170(in_stack_00000638);
  func_0x000107c61170(in_stack_00000630);
  func_0x000107c61170(in_stack_00000578);
  func_0x000107c61170(in_stack_00000568);
  func_0x000107c61170(in_stack_00000560);
  func_0x000107c61170(in_stack_00000558);
  func_0x000107c61170(in_stack_00000550);
  func_0x000107c61170(in_stack_00000548);
  func_0x000107c61170(in_stack_00000540);
  func_0x000107c61170(in_stack_00000530);
  func_0x000107c61170(in_stack_00000528);
  func_0x000107c61170(in_stack_00000520);
  func_0x000107c61170(in_stack_00000510);
  func_0x000107c61170(in_stack_00000508);
  func_0x000107c61170(in_stack_000004e0);
  func_0x000107c61170(in_stack_000004d0);
  func_0x000107c61170(in_stack_000004b0);
  func_0x000107c61170(in_stack_00000488);
  func_0x000107c61170(in_stack_00000480);
  func_0x000107c61170(in_stack_00000478);
  func_0x000107c61170(in_stack_00000468);
  func_0x000107c61170(in_stack_00000460);
  func_0x000107c61170(in_stack_00000458);
  func_0x000107c61170(in_stack_00000428);
  func_0x000107c61170(in_stack_00000420);
  func_0x000107c61170(in_stack_00000418);
  func_0x000107c61170(in_stack_000003d0);
  func_0x000107c61170(in_stack_000003c8);
  func_0x000107c61170(in_stack_000003a0);
  func_0x000107c61170(in_stack_00000398);
  func_0x000107c61170(in_stack_00000390);
  func_0x000107c61170(in_stack_00000388);
  func_0x000107c61170(in_stack_00000380);
  func_0x000107c61170(in_stack_00000378);
  func_0x000107c61170(in_stack_00000370);
  func_0x000107c61170(in_stack_00000368);
  func_0x000107c61170(in_stack_00000360);
  func_0x000107c61170(in_stack_00000358);
  func_0x000107c61170(in_stack_00000348);
  func_0x000107c61170(in_stack_00000340);
  func_0x000107c61170(in_stack_00000338);
  func_0x000107c61170(in_stack_00000330);
  func_0x000107c61170(in_stack_00000320);
  func_0x000107c61170(in_stack_00000318);
  func_0x000107c61170(in_stack_00000310);
  func_0x000107c61170(in_stack_00000308);
  func_0x000107c61170(in_stack_000002c8);
  func_0x000107c61170(in_stack_000002c0);
  func_0x000107c61170(in_stack_000002b8);
  func_0x000107c61170(in_stack_000002b0);
  func_0x000107c61170(in_stack_000002a8);
  func_0x000107c61170(in_stack_000002a0);
  func_0x000107c61170(in_stack_00000278);
  func_0x000107c61170(in_stack_00000220);
  func_0x000107c61170(param_88);
  func_0x000107c61170(param_85);
  func_0x000107c61170(param_81);
  func_0x000107c61170(param_75);
  func_0x000107c61170(param_69);
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  return puVar1;
}



/* Entry: 1008e8a8c; end: 1008e8abb; -[SCPreviewConfiguration setCommonLoggingParams:] */

void FUN_1008e8a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008e8abc; end: 1008e919f; -[SCSnapCommonLoggingParamsBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008e8ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8bdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8bf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8c9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8cb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8ce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8d44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8e94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e8ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e902c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e905c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e908c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e90a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e90bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e90d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e90ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e911c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e914c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e917c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e9168) */
/* WARNING: Removing unreachable block (ram,0x0001008e9150) */
/* WARNING: Removing unreachable block (ram,0x0001008e9138) */
/* WARNING: Removing unreachable block (ram,0x0001008e9120) */
/* WARNING: Removing unreachable block (ram,0x0001008e9108) */
/* WARNING: Removing unreachable block (ram,0x0001008e90f0) */
/* WARNING: Removing unreachable block (ram,0x0001008e90d8) */
/* WARNING: Removing unreachable block (ram,0x0001008e90c0) */
/* WARNING: Removing unreachable block (ram,0x0001008e90a8) */
/* WARNING: Removing unreachable block (ram,0x0001008e9090) */
/* WARNING: Removing unreachable block (ram,0x0001008e9078) */
/* WARNING: Removing unreachable block (ram,0x0001008e9060) */
/* WARNING: Removing unreachable block (ram,0x0001008e9048) */
/* WARNING: Removing unreachable block (ram,0x0001008e9030) */
/* WARNING: Removing unreachable block (ram,0x0001008e9018) */
/* WARNING: Removing unreachable block (ram,0x0001008e9000) */
/* WARNING: Removing unreachable block (ram,0x0001008e8fe8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8fd0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8fb8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8fa0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8f88) */
/* WARNING: Removing unreachable block (ram,0x0001008e8f70) */
/* WARNING: Removing unreachable block (ram,0x0001008e8f58) */
/* WARNING: Removing unreachable block (ram,0x0001008e8f40) */
/* WARNING: Removing unreachable block (ram,0x0001008e8f28) */
/* WARNING: Removing unreachable block (ram,0x0001008e8f10) */
/* WARNING: Removing unreachable block (ram,0x0001008e8ef8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8ee0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8ec8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8eb0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e98) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e80) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e68) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e50) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e38) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e20) */
/* WARNING: Removing unreachable block (ram,0x0001008e8e08) */
/* WARNING: Removing unreachable block (ram,0x0001008e8df0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8dd8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8dc0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8da8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d90) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d78) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d60) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d48) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d30) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d18) */
/* WARNING: Removing unreachable block (ram,0x0001008e8d00) */
/* WARNING: Removing unreachable block (ram,0x0001008e8ce8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8cd0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8cb8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8ca0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8c88) */
/* WARNING: Removing unreachable block (ram,0x0001008e8c70) */
/* WARNING: Removing unreachable block (ram,0x0001008e8c58) */
/* WARNING: Removing unreachable block (ram,0x0001008e8c40) */
/* WARNING: Removing unreachable block (ram,0x0001008e8c28) */
/* WARNING: Removing unreachable block (ram,0x0001008e8c10) */
/* WARNING: Removing unreachable block (ram,0x0001008e8bf8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8be0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8bc8) */
/* WARNING: Removing unreachable block (ram,0x0001008e8bb0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b98) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b80) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b68) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b50) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b38) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b20) */
/* WARNING: Removing unreachable block (ram,0x0001008e8b08) */
/* WARNING: Removing unreachable block (ram,0x0001008e8af0) */
/* WARNING: Removing unreachable block (ram,0x0001008e8ad8) */
/* WARNING: Removing unreachable block (ram,0x0001008e9180) */

void FUN_1008e8abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xac8,0);
  return;
}



/* Entry: 1008e91a0; end: 1008e92d7; -[SCCameraPreviewPresenterImpl vendPreviewPresenterToRelevantFeatures:] */

/* WARNING: Possible PIC construction at 0x0001008e9204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e9268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e92ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008e92bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008e92b0) */
/* WARNING: Removing unreachable block (ram,0x0001008e926c) */
/* WARNING: Removing unreachable block (ram,0x0001008e925c) */
/* WARNING: Removing unreachable block (ram,0x0001008e9218) */
/* WARNING: Removing unreachable block (ram,0x0001008e9208) */
/* WARNING: Removing unreachable block (ram,0x0001008e92c0) */

void FUN_1008e91a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c3f0bc(param_1);
  func_0x000107c61180();
  func_0x000107c446a8();
  func_0x000107c61180();
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c5a28c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008e92d8; end: 1008e9307;  */

bool FUN_1008e92d8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 1008e9308; end: 1008e95df;  */

void FUN_1008e9308(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x30;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar18 = (undefined *)0x0;
  }
  else {
    puVar18 = PTR_PTR_1126c7a28;
    func_0x000107c610f4();
    uVar16 = *(undefined8 *)(lVar1 + 0x58);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1008e9634;
    puStack_88 = &UNK_11084e7d0;
    uVar17 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar17);
    ppuVar2 = &puStack_a0;
    uStack_80 = uVar17;
    FUN_1008e9634();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    func_0x000107c3eabc();
    func_0x000107c61180();
    uVar15 = *(undefined8 *)(lVar1 + 0xe8);
    uVar4 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c5b038();
    func_0x000107c61180();
    uVar17 = uVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    func_0x000107c5dd3c();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar1 + 0x1c8);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c519ac();
    uVar9 = *(undefined8 *)(lVar1 + 0x30);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar10 = uVar9;
    func_0x000107c3f314();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(lVar1 + 400);
    func_0x000107c4aeb4();
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar13 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c3f290();
    func_0x000107c61180();
    puVar14 = PTR_PTR_1126ae720;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    puStack_b8 = &UNK_1060a71c4;
    puStack_b0 = &UNK_11090c100;
    uVar19 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c61174(uVar19);
    uStack_a8 = uVar19;
    func_0x000107c3e4fc(puVar14,param_2,&puStack_c8);
    func_0x000107c61180();
    func_0x000107c49328(puVar18,param_2,uVar16,ppuVar2,uVar3,uVar15,uVar4,uVar17,uVar6,uVar7,uVar8,
                        uVar10,uVar11,uVar12,uVar13,puVar14,*(undefined8 *)(lVar1 + 0xf0));
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(uStack_80);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar18);
  return;
}



/* Entry: 1008e95e0; end: 1008e9633; -[SCAPagePageView setIsForeground:] */

void FUN_1008e95e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c54984(param_1,param_2,&PTR____CFConstantStringClassReference_110fb1af8,0x11,puVar1,1
                     );
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1008e9634; end: 1008e970f;  */

void FUN_1008e9634(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1008e9710; end: 1008eaaf3;  */

/* WARNING: Removing unreachable block (ram,0x0001008ea2bc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea2e0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea2f8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea310) */
/* WARNING: Removing unreachable block (ram,0x0001008ea328) */
/* WARNING: Removing unreachable block (ram,0x0001008ea340) */
/* WARNING: Removing unreachable block (ram,0x0001008ea358) */
/* WARNING: Removing unreachable block (ram,0x0001008ea370) */
/* WARNING: Removing unreachable block (ram,0x0001008ea388) */
/* WARNING: Removing unreachable block (ram,0x0001008ea394) */
/* WARNING: Removing unreachable block (ram,0x0001008ea3ac) */
/* WARNING: Removing unreachable block (ram,0x0001008ea3c4) */
/* WARNING: Removing unreachable block (ram,0x0001008ea3dc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea3e8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea400) */
/* WARNING: Removing unreachable block (ram,0x0001008ea418) */
/* WARNING: Removing unreachable block (ram,0x0001008ea424) */
/* WARNING: Removing unreachable block (ram,0x0001008ea448) */
/* WARNING: Removing unreachable block (ram,0x0001008ea460) */
/* WARNING: Removing unreachable block (ram,0x0001008ea478) */
/* WARNING: Removing unreachable block (ram,0x0001008ea490) */
/* WARNING: Removing unreachable block (ram,0x0001008ea4a8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea4c0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea4d8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea4f0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea508) */
/* WARNING: Removing unreachable block (ram,0x0001008ea520) */
/* WARNING: Removing unreachable block (ram,0x0001008ea538) */
/* WARNING: Removing unreachable block (ram,0x0001008ea550) */
/* WARNING: Removing unreachable block (ram,0x0001008ea568) */
/* WARNING: Removing unreachable block (ram,0x0001008ea580) */
/* WARNING: Removing unreachable block (ram,0x0001008ea598) */
/* WARNING: Removing unreachable block (ram,0x0001008ea5b0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea5bc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea5d4) */
/* WARNING: Removing unreachable block (ram,0x0001008ea5ec) */
/* WARNING: Removing unreachable block (ram,0x0001008ea604) */
/* WARNING: Removing unreachable block (ram,0x0001008ea61c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea634) */
/* WARNING: Removing unreachable block (ram,0x0001008ea64c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea664) */
/* WARNING: Removing unreachable block (ram,0x0001008ea67c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea694) */
/* WARNING: Removing unreachable block (ram,0x0001008ea6a0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea6b8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea6d0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea6e8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea700) */
/* WARNING: Removing unreachable block (ram,0x0001008ea718) */
/* WARNING: Removing unreachable block (ram,0x0001008ea730) */
/* WARNING: Removing unreachable block (ram,0x0001008ea748) */
/* WARNING: Removing unreachable block (ram,0x0001008ea754) */
/* WARNING: Removing unreachable block (ram,0x0001008ea778) */
/* WARNING: Removing unreachable block (ram,0x0001008ea79c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea7b4) */
/* WARNING: Removing unreachable block (ram,0x0001008ea7cc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea7e4) */
/* WARNING: Removing unreachable block (ram,0x0001008ea7fc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea814) */
/* WARNING: Removing unreachable block (ram,0x0001008ea82c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea844) */
/* WARNING: Removing unreachable block (ram,0x0001008ea850) */
/* WARNING: Removing unreachable block (ram,0x0001008ea868) */
/* WARNING: Removing unreachable block (ram,0x0001008ea8a8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea8cc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea8e4) */
/* WARNING: Removing unreachable block (ram,0x0001008ea8fc) */
/* WARNING: Removing unreachable block (ram,0x0001008ea908) */
/* WARNING: Removing unreachable block (ram,0x0001008ea924) */
/* WARNING: Removing unreachable block (ram,0x0001008ea94c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea964) */
/* WARNING: Removing unreachable block (ram,0x0001008ea97c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea988) */
/* WARNING: Removing unreachable block (ram,0x0001008ea9ac) */
/* WARNING: Removing unreachable block (ram,0x0001008ea9d0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea9f4) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa0c) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa24) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa3c) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa54) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa60) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa84) */
/* WARNING: Removing unreachable block (ram,0x0001008eaaa8) */
/* WARNING: Removing unreachable block (ram,0x0001008eaacc) */
/* WARNING: Removing unreachable block (ram,0x0001008eaaec) */
/* WARNING: Removing unreachable block (ram,0x0001008eaac0) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa9c) */
/* WARNING: Removing unreachable block (ram,0x0001008eaa78) */
/* WARNING: Removing unreachable block (ram,0x0001008ea9e8) */
/* WARNING: Removing unreachable block (ram,0x0001008ea9c4) */
/* WARNING: Removing unreachable block (ram,0x0001008ea9a0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea940) */
/* WARNING: Removing unreachable block (ram,0x0001008ea8c0) */
/* WARNING: Removing unreachable block (ram,0x0001008ea89c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea790) */
/* WARNING: Removing unreachable block (ram,0x0001008ea76c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea43c) */
/* WARNING: Removing unreachable block (ram,0x0001008ea2d4) */

void FUN_1008e9710(undefined **param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  func_0x000107c61174();
  ppuVar2 = param_1;
  func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59ad8);
  if ((((((ulong)ppuVar2 & 1) == 0) &&
       (ppuVar2 = param_1,
       func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110e36118),
       ((ulong)ppuVar2 & 1) == 0)) &&
      (ppuVar2 = param_1,
      func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f5a398),
      ((ulong)ppuVar2 & 1) == 0)) &&
     (ppuVar2 = param_1,
     func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59b18),
     ((ulong)ppuVar2 & 1) == 0)) {
    ppuVar1 = param_1;
    func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59b98);
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcf0d8;
    if (((param_1 != &PTR____CFConstantStringClassReference_110f594b8) &&
        (((ulong)ppuVar1 & 1) == 0)) &&
       (ppuVar1 = param_1,
       func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59af8),
       ppuVar2 = &PTR____CFConstantStringClassReference_110dcf0d8, ((ulong)ppuVar1 & 1) == 0)) {
      ppuVar2 = param_1;
      func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f594b8);
      if (((ulong)ppuVar2 & 1) == 0) {
        ppuVar2 = param_1;
        func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f5a838);
        if (((ulong)ppuVar2 & 1) == 0) {
          ppuVar2 = param_1;
          func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59bb8);
          if ((((ulong)ppuVar2 & 1) == 0) &&
             (ppuVar2 = param_1,
             func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f5a378),
             ((ulong)ppuVar2 & 1) == 0)) {
            ppuVar2 = param_1;
            func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59b58);
            if (((ulong)ppuVar2 & 1) == 0) {
              ppuVar2 = param_1;
              func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f59bd8);
              if ((((((ulong)ppuVar2 & 1) == 0) &&
                   (ppuVar2 = param_1,
                   func_0x000107c49d0c(param_1,param_2,
                                       &PTR____CFConstantStringClassReference_110f5ab38),
                   ((ulong)ppuVar2 & 1) == 0)) &&
                  (ppuVar2 = param_1,
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110dbb7d8),
                  ((ulong)ppuVar2 & 1) == 0)) &&
                 (((ppuVar2 = param_1,
                   func_0x000107c49d0c(param_1,param_2,
                                       &PTR____CFConstantStringClassReference_110f59bf8),
                   ((ulong)ppuVar2 & 1) == 0 &&
                   (ppuVar2 = param_1,
                   func_0x000107c49d0c(param_1,param_2,
                                       &PTR____CFConstantStringClassReference_110f59c18),
                   ((ulong)ppuVar2 & 1) == 0)) &&
                  ((ppuVar2 = param_1,
                   func_0x000107c49d0c(param_1,param_2,
                                       &PTR____CFConstantStringClassReference_110dea458),
                   ((ulong)ppuVar2 & 1) == 0 &&
                   (ppuVar2 = param_1,
                   func_0x000107c49d0c(param_1,param_2,
                                       &PTR____CFConstantStringClassReference_110e1f9d8),
                   ((ulong)ppuVar2 & 1) == 0)))))) {
                ppuVar2 = param_1;
                func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f5a3b8
                                   );
                if (((ulong)ppuVar2 & 1) == 0) {
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f59db8);
                  if (((((((ulong)ppuVar2 & 1) != 0) ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59cd8),
                        ((ulong)ppuVar2 & 1) != 0)) ||
                       ((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59cf8),
                        ((ulong)ppuVar2 & 1) != 0 ||
                        (((ppuVar2 = param_1,
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f59df8),
                          ((ulong)ppuVar2 & 1) != 0 ||
                          (ppuVar2 = param_1,
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f59dd8),
                          ((ulong)ppuVar2 & 1) != 0)) ||
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f59d98),
                         ((ulong)ppuVar2 & 1) != 0)))))) ||
                      ((ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f59d38),
                       ((ulong)ppuVar2 & 1) != 0 ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f59d18),
                       ((ulong)ppuVar2 & 1) != 0)))) ||
                     ((ppuVar2 = param_1,
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f59d58),
                      ((ulong)ppuVar2 & 1) != 0 ||
                      (((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59d78),
                        ((ulong)ppuVar2 & 1) != 0 ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59e18),
                        ((ulong)ppuVar2 & 1) != 0)) ||
                       ((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59e38),
                        ((ulong)ppuVar2 & 1) != 0 ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59e58),
                        ((ulong)ppuVar2 & 1) != 0)))))))) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e4b058;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f59b38);
                  if (((((ulong)ppuVar2 & 1) != 0) ||
                      (ppuVar2 = param_1,
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110e44958),
                      ((ulong)ppuVar2 & 1) != 0)) ||
                     (ppuVar2 = param_1,
                     func_0x000107c49d0c(param_1,param_2,
                                         &PTR____CFConstantStringClassReference_110f5a478),
                     ((ulong)ppuVar2 & 1) != 0)) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110f59558;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f59e78);
                  if (((((ulong)ppuVar2 & 1) != 0) ||
                      (ppuVar2 = param_1,
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f59eb8),
                      ((ulong)ppuVar2 & 1) != 0)) ||
                     ((((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59ed8),
                        ((ulong)ppuVar2 & 1) != 0 ||
                        ((ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f59f78),
                         ((ulong)ppuVar2 & 1) != 0 ||
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f59f18),
                         ((ulong)ppuVar2 & 1) != 0)))) ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f59ef8),
                       ((ulong)ppuVar2 & 1) != 0)) ||
                      (((((((ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f59f58),
                            ((ulong)ppuVar2 & 1) != 0 ||
                            (ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f5a098),
                            ((ulong)ppuVar2 & 1) != 0)) ||
                           (ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f5a038),
                           ((ulong)ppuVar2 & 1) != 0)) ||
                          ((ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f5a418),
                           ((ulong)ppuVar2 & 1) != 0 ||
                           (ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f5a0b8),
                           ((ulong)ppuVar2 & 1) != 0)))) ||
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f59fd8),
                         ((ulong)ppuVar2 & 1) != 0)) ||
                        (((ppuVar2 = param_1,
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f59f98),
                          ((ulong)ppuVar2 & 1) != 0 ||
                          (ppuVar2 = param_1,
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f5a078),
                          ((ulong)ppuVar2 & 1) != 0)) ||
                         ((ppuVar2 = param_1,
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f59fb8),
                          ((ulong)ppuVar2 & 1) != 0 ||
                          (((ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f5a018),
                            ((ulong)ppuVar2 & 1) != 0 ||
                            (ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f59f38),
                            ((ulong)ppuVar2 & 1) != 0)) ||
                           (ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f59ff8),
                           ((ulong)ppuVar2 & 1) != 0)))))))) ||
                       ((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59e98),
                        ((ulong)ppuVar2 & 1) != 0 ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f5a0d8),
                        ((ulong)ppuVar2 & 1) != 0)))))))) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e6aa18;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f59b78);
                  if (((ulong)ppuVar2 & 1) != 0) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110f59598;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f5a0f8);
                  if ((((((ulong)ppuVar2 & 1) != 0) ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f5a118),
                       ((ulong)ppuVar2 & 1) != 0)) ||
                      ((ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110dbf098),
                       ((ulong)ppuVar2 & 1) != 0 ||
                       (((ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f5a178),
                         ((ulong)ppuVar2 & 1) != 0 ||
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f5a238),
                         ((ulong)ppuVar2 & 1) != 0)) ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f5a258),
                        ((ulong)ppuVar2 & 1) != 0)))))) ||
                     (ppuVar2 = param_1,
                     func_0x000107c49d0c(param_1,param_2,
                                         &PTR____CFConstantStringClassReference_110db9d58),
                     ((ulong)ppuVar2 & 1) != 0)) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110db65d8;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110e30ab8);
                  if ((((ulong)ppuVar2 & 1) != 0) ||
                     (ppuVar2 = param_1,
                     func_0x000107c49d0c(param_1,param_2,
                                         &PTR____CFConstantStringClassReference_110f5a358),
                     ((ulong)ppuVar2 & 1) != 0)) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e607d8;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110eb5718);
                  if ((((((((ulong)ppuVar2 & 1) != 0) ||
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110e66878),
                         ((ulong)ppuVar2 & 1) != 0)) ||
                        ((ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110e66898),
                         ((ulong)ppuVar2 & 1) != 0 ||
                         ((((ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110e668b8),
                            ((ulong)ppuVar2 & 1) != 0 ||
                            (ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f5a198),
                            ((ulong)ppuVar2 & 1) != 0)) ||
                           (ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f5a1b8),
                           ((ulong)ppuVar2 & 1) != 0)) ||
                          ((ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110dd50f8),
                           ((ulong)ppuVar2 & 1) != 0 ||
                           (ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f5a538),
                           ((ulong)ppuVar2 & 1) != 0)))))))) ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f5a578),
                       ((ulong)ppuVar2 & 1) != 0)) ||
                      ((ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f5a1f8),
                       ((ulong)ppuVar2 & 1) != 0 ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110dbb6f8),
                       ((ulong)ppuVar2 & 1) != 0)))) ||
                     (((ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f5a218),
                       ((ulong)ppuVar2 & 1) != 0 ||
                       (((ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f5ac38),
                         ((ulong)ppuVar2 & 1) != 0 ||
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f5ac58),
                         ((ulong)ppuVar2 & 1) != 0)) ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f5a598),
                        ((ulong)ppuVar2 & 1) != 0)))) ||
                      ((ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110e1f2b8),
                       ((ulong)ppuVar2 & 1) != 0 ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110e1cd38),
                       ((ulong)ppuVar2 & 1) != 0)))))) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e573b8;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110f5a138);
                  if (((((ulong)ppuVar2 & 1) != 0) ||
                      (ppuVar2 = param_1,
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110db9d78),
                      ((ulong)ppuVar2 & 1) != 0)) ||
                     ((ppuVar2 = param_1,
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f16ef8),
                      ((ulong)ppuVar2 & 1) != 0 ||
                      (((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f5a6b8),
                        ((ulong)ppuVar2 & 1) != 0 ||
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f5a9f8),
                        ((ulong)ppuVar2 & 1) != 0)) ||
                       (ppuVar2 = param_1,
                       func_0x000107c49d0c(param_1,param_2,
                                           &PTR____CFConstantStringClassReference_110f5a9d8),
                       ((ulong)ppuVar2 & 1) != 0)))))) {
                    ppuVar2 = &PTR____CFConstantStringClassReference_110e6aa38;
                    goto LAB_1008e9790;
                  }
                  ppuVar2 = param_1;
                  func_0x000107c49d0c(param_1,param_2,
                                      &PTR____CFConstantStringClassReference_110db9e78);
                  if (((((ulong)ppuVar2 & 1) == 0) &&
                      (ppuVar2 = param_1,
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f5a518),
                      ((ulong)ppuVar2 & 1) == 0)) &&
                     (ppuVar2 = param_1,
                     func_0x000107c49d0c(param_1,param_2,
                                         &PTR____CFConstantStringClassReference_110f5a3f8),
                     ((ulong)ppuVar2 & 1) == 0)) {
                    ppuVar2 = param_1;
                    func_0x000107c49d0c(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110eb57b8);
                    if (((((ulong)ppuVar2 & 1) == 0) &&
                        (ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59c78),
                        ((ulong)ppuVar2 & 1) == 0)) &&
                       ((ppuVar2 = param_1,
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f59c58),
                        ((ulong)ppuVar2 & 1) == 0 &&
                        ((ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f59c98),
                         ((ulong)ppuVar2 & 1) == 0 &&
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f59cb8),
                         ((ulong)ppuVar2 & 1) == 0)))))) {
                      ppuVar2 = param_1;
                      func_0x000107c49d0c(param_1,param_2,
                                          &PTR____CFConstantStringClassReference_110f5a5f8);
                      if (((((ulong)ppuVar2 & 1) == 0) &&
                          (ppuVar2 = param_1,
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f5a618),
                          ((ulong)ppuVar2 & 1) == 0)) &&
                         (ppuVar2 = param_1,
                         func_0x000107c49d0c(param_1,param_2,
                                             &PTR____CFConstantStringClassReference_110f5a3d8),
                         ((ulong)ppuVar2 & 1) == 0)) {
                        ppuVar2 = param_1;
                        func_0x000107c49d0c(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110f5a658);
                        if (((((ulong)ppuVar2 & 1) == 0) &&
                            (ppuVar2 = param_1,
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f5a678),
                            ((ulong)ppuVar2 & 1) == 0)) &&
                           (ppuVar2 = param_1,
                           func_0x000107c49d0c(param_1,param_2,
                                               &PTR____CFConstantStringClassReference_110f5a698),
                           ((ulong)ppuVar2 & 1) == 0)) {
                          ppuVar2 = param_1;
                          func_0x000107c49d0c(param_1,param_2,
                                              &PTR____CFConstantStringClassReference_110f5a6d8);
                          if (((ulong)ppuVar2 & 1) == 0) {
                            ppuVar2 = param_1;
                            func_0x000107c49d0c(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110f5a5d8);
                            if (((ulong)ppuVar2 & 1) == 0) {
                              ppuVar2 = param_1;
                              func_0x000107c49d0c(param_1,param_2,
                                                  &PTR____CFConstantStringClassReference_110f5a898);
                              if (((((ulong)ppuVar2 & 1) == 0) &&
                                  (ppuVar2 = param_1,
                                  func_0x000107c49d0c(param_1,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110ee1a38),
                                  ((ulong)ppuVar2 & 1) == 0)) &&
                                 ((ppuVar2 = param_1,
                                  func_0x000107c49d0c(param_1,param_2,
                                                      &
                                                  PTR____CFConstantStringClassReference_110f5a8b8),
                                  ((ulong)ppuVar2 & 1) == 0 &&
                                  ((ppuVar2 = param_1,
                                   func_0x000107c49d0c(param_1,param_2,
                                                       &
                                                  PTR____CFConstantStringClassReference_110f5a8d8),
                                   ((ulong)ppuVar2 & 1) == 0 &&
                                   (ppuVar2 = param_1,
                                   func_0x000107c49d0c(param_1,param_2,
                                                       &
                                                  PTR____CFConstantStringClassReference_110e62018),
                                   ((ulong)ppuVar2 & 1) == 0)))))) {
                                func_0x000107c49d0c(param_1,param_2,
                                                    &PTR____CFConstantStringClassReference_110f5a8f8
                                                   );
                                ppuVar2 = &PTR____CFConstantStringClassReference_110e43018;
                              }
                              else {
                                ppuVar2 = &PTR____CFConstantStringClassReference_110e43018;
                              }
                            }
                            else {
                              ppuVar2 = &PTR____CFConstantStringClassReference_110e0a938;
                            }
                          }
                          else {
                            ppuVar2 = &PTR____CFConstantStringClassReference_110f595b8;
                          }
                        }
                        else {
                          ppuVar2 = &PTR____CFConstantStringClassReference_110f59578;
                        }
                      }
                      else {
                        ppuVar2 = &PTR____CFConstantStringClassReference_110dec718;
                      }
                    }
                    else {
                      ppuVar2 = &PTR____CFConstantStringClassReference_110df1158;
                    }
                    goto LAB_1008e9790;
                  }
                }
                ppuVar2 = &PTR____CFConstantStringClassReference_110e607f8;
              }
              else {
                ppuVar2 = &PTR____CFConstantStringClassReference_110f594d8;
              }
            }
            else {
              ppuVar2 = &PTR____CFConstantStringClassReference_110dae358;
            }
          }
          else {
            ppuVar2 = &PTR____CFConstantStringClassReference_110f59538;
          }
        }
        else {
          ppuVar2 = &PTR____CFConstantStringClassReference_110f595f8;
        }
      }
      else {
        ppuVar2 = &PTR____CFConstantStringClassReference_110f594f8;
      }
    }
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dcf0d8;
  }
LAB_1008e9790:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1008eaaf4; end: 1008eae7b; -[SCFeatureHandsFreeImpl initWithUserSession:cameraUserActionLogger:blizzardLogger:featureSettingsService:cameraHardwareServicesAPI:simpleFeatureGatingConfig:verticalToolbarConfiguration:cameraModeActivationController:scopedCameraType:cameraViewfinderConfiguration:lensCarouselManager:cameraHardwareResource:cameraUIScopeViewContainer:replyConfigPublisher:circumstanceEngine:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008eaaf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  puStack_70 = PTR_PTR_1126efeb0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112740b08;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740b0c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740b10;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_5;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740b14;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740b18;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740b1c;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740b20,param_9);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    lVar5 = (long)_DAT_112740b24;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    func_0x000107c421ac();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112740b28);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740b28) = uVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740b2c,param_10);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112740b30) = param_11;
    lVar5 = (long)_DAT_112740b34;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740b38,param_13);
    lVar5 = (long)_DAT_112740b3c;
    func_0x000107c61174(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112740b40,param_15);
    lVar5 = (long)_DAT_112740b44;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_16;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112740b48;
    func_0x000107c61174(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_17;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008eae7c; end: 1008eaeb3; -[SCFeatureHandsFreeImpl configureLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eae7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b54);
  *(undefined8 *)(param_1 + _DAT_112740b54) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008eaeb4; end: 1008eaf13; -[SCFeatureHandsFreeImpl configureWithView:] */

/* WARNING: Possible PIC construction at 0x0001008eaef0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eaef4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eaeb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740b50);
  *(undefined8 *)(param_1 + _DAT_112740b50) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008eaf14; end: 1008eb133; -[SCFeatureHandsFreeImpl _createAndSetupView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eaf14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_10616d358;
  puStack_80 = &UNK_1109116d0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c61174(param_3);
  uStack_78 = param_3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112740b4c);
  *(undefined **)(param_1 + _DAT_112740b4c) = puVar1;
  func_0x000107c61170(uVar5);
  puVar2 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126c82e8;
  func_0x000107c446a4(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c5e070(puVar2);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008eb134; end: 1008eb13b; +[SCAttributedCameraTask handsFreeMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb134(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x13;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008eb13c; end: 1008eb14f; -[SCFeatureHandsFreeImpl setUsageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb13c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740b68,param_3);
  return;
}



/* Entry: 1008eb150; end: 1008eb1ab; -[SCFeatureSnapKitImpl setPreviewPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11273f744;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c577c4(*(undefined8 *)(param_1 + _DAT_11273f738));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008eb1ac; end: 1008eb1bf; -[SCFeatureMusicImpl setUsageTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb1ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11273ebf4,param_3);
  return;
}



/* Entry: 1008eb1c0; end: 1008eb1ef; -[SCCameraViewControllerInternalState setPreviewPresenter:] */

void FUN_1008eb1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008eb1f0; end: 1008eb2af; -[SCMainCameraViewControllerStartupWorkflow resetButtons:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb1f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_resetButtons__11262bae8;
  puStack_38 = PTR_PTR_1126f8340;
  lStack_40 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  lVar2 = param_3;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  lVar3 = lVar2;
  func_0x000107c3f300();
  func_0x000107c61170(lVar2);
  param_1 = param_1 + _DAT_11276239c;
  func_0x000107c61148(param_1);
  if (lVar3 == 0) {
    func_0x000107c5d290();
  }
  else {
    func_0x000107c4b964();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1008eb2b0; end: 1008eb32f; -[SCCameraViewControllerStartupWorkflow resetButtons:] */

/* WARNING: Possible PIC construction at 0x0001008eb2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008eb31c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eb2f0) */
/* WARNING: Removing unreachable block (ram,0x0001008eb320) */

void FUN_1008eb2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5bcc0(param_3);
  func_0x000107c61180();
  func_0x000107c3f16c();
  func_0x000107c61180();
  func_0x000107c52164();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008eb330; end: 1008eb3c7; -[SCCameraOverlayView setActionButtonsHidden:] */

/* WARNING: Possible PIC construction at 0x0001008eb38c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008eb390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb330(long param_1,undefined8 param_2,ulong param_3)

{
  if (((param_3 & 1) == 0) && (*(long *)(param_1 + _DAT_112762890) != 0)) {
    func_0x000107c501b4(param_1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c550d8();
  }
  else {
    func_0x000107c4f364(param_1);
    func_0x000107c61180();
    func_0x000107c550d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1008eb3c8; end: 1008eb3d7; -[SCCameraOverlayView profileButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008eb3c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762908);
}



/* Entry: 1008eb3d8; end: 1008eb5df; -[SCCameraOverlayView setButtonsForState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb3d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c5ada4();
  lVar1 = param_1;
  func_0x000107c4f364(param_1);
  func_0x000107c61180();
  func_0x000107c550d8();
  func_0x000107c61170(lVar1);
  switch(param_3) {
  case 0:
  case 5:
    if (*(long *)(param_1 + _DAT_112762890) != 0) {
      lVar1 = param_1;
      func_0x000107c501b4(param_1);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c550d8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    break;
  case 1:
  case 2:
  case 4:
  case 6:
  case 7:
  case 8:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    lVar1 = param_1;
    func_0x000107c501b4(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c550d8();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    break;
  case 3:
    if (*(long *)(param_1 + _DAT_112762890) != 0) {
      lVar1 = param_1;
      func_0x000107c501b4(param_1);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c550d8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
    }
    break;
  case 9:
    lVar1 = param_1;
    func_0x000107c501b4(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c550d8();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c57d48(param_1);
    break;
  default:
    goto LAB_1008eb4a0;
  }
  lVar1 = param_1;
  func_0x000107c44f28(param_1);
  func_0x000107c61180();
  func_0x000107c550d8();
  func_0x000107c61170(lVar1);
LAB_1008eb4a0:
  lVar1 = param_1;
  func_0x000107c3f250(param_1);
  func_0x000107c61180();
  func_0x000107c550d8();
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c138490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_resetCameraTimerFrameWithAnimati_11262bb40,1)
  ;
  return;
}



/* Entry: 1008eb5e0; end: 1008eb5eb; -[SCCameraOverlayView shouldShowTooltipAndProfileButton:] */

bool FUN_1008eb5e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 0;
}



/* Entry: 1008eb5ec; end: 1008eb5fb; -[SCCameraOverlayView hovaNavigationLineSeparator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008eb5ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112762900);
}



/* Entry: 1008eb5fc; end: 1008eb73b; -[SCCameraOverlayView resetCameraTimerFrameWithAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008eb5fc(double param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  undefined1 auStack_58 [8];
  double dStack_50;
  undefined1 auStack_48 [8];
  
  if ((*(byte *)(param_2 + _DAT_112762808) & 1) == 0) {
    lVar2 = param_2;
    func_0x000107c4168c();
    func_0x000107c61180();
    func_0x000107c3f25c();
    dVar3 = param_1;
    func_0x000107c61170(lVar2);
    lVar2 = (long)_DAT_112762850;
    func_0x000107c3ec3c(*(undefined8 *)(param_2 + lVar2));
    if (dVar3 != param_1) {
      if (param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c173690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)
                  (param_1,*(undefined8 *)(param_2 + lVar2),PTR_s_setBottomOffset__11263a7c0);
        return;
      }
      func_0x000107c4abfc(param_2);
      func_0x000107c61144(auStack_48,param_2);
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c6111c(auStack_58,auStack_48);
      dStack_50 = param_1;
      func_0x000107c3dccc(0x3fd3333333333333,puVar1);
      func_0x000107c61120(auStack_58);
      func_0x000107c61120(auStack_48);
    }
  }
  return;
}



/* Entry: 1008eb73c; end: 1008eb8f7; -[SCCameraViewController cameraTimerNGSBottomOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1008eb73c(double param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  
  func_0x000107c49634();
  uVar10 = param_2;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  uVar1 = uVar10;
  func_0x000107c3e6cc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5ad78();
  if ((int)uVar3 == 0) {
    uVar12 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c3f1ac();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3f084();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c4008c();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c3f238();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c49cd8();
    uVar12 = (uint)uVar8 ^ 1;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar10);
  dVar13 = param_1 + 47.0;
  if ((uVar12 & 1) == 0) {
    dVar13 = param_1;
  }
  lVar11 = (long)_DAT_1127624bc;
  lVar9 = *(long *)(param_2 + lVar11);
  func_0x000107c3f300();
  dVar14 = dVar13;
  if (lVar9 != 0) {
    uVar10 = *(ulong *)(param_2 + lVar11);
    func_0x000107c3f300();
    if ((uVar10 != 9) && (FUN_1008522a8(), (uVar10 & 1) == 0)) {
      uVar10 = param_2;
      func_0x000107c4b064();
      func_0x000107c61180();
      uVar1 = uVar10;
      func_0x000107c3e10c();
      if ((int)uVar1 == 0) {
        func_0x000107c3bb58();
        func_0x000107c61170(uVar10);
        dVar14 = dVar13 + 47.0;
        if ((param_2 & 1) == 0) {
          dVar14 = dVar13;
        }
      }
      else {
        func_0x000107c61170(uVar10);
        dVar14 = dVar13 + 47.0;
      }
    }
  }
  return dVar14;
}



/* Entry: 1008eb8f8; end: 1008eb913; -[SCFeatureBatchCaptureImpl shouldShowPreviewButton] */

bool FUN_1008eb8f8(long param_1)

{
  func_0x000107c3c4e4();
  return param_1 != 0;
}



/* Entry: 1008eb914; end: 1008eb95b; -[SCFeatureBatchCaptureImpl _segmentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1008eb914(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740434);
  func_0x000107c51c14(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c40808();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 1008eb95c; end: 1008eb963; -[SCCameraOverlayFooterLayoutController bottomOffset] */

undefined8 FUN_1008eb95c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


