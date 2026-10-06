/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090bd94c; end: 1090bda0f;  */

void FUN_1090bd94c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = 0x20;
  __Znwm();
  FUN_1090cbf68();
  plVar1 = (long *)(lVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x50);
  lStack_40 = lVar4;
  lStack_38 = lVar4;
  if (plVar1 != &lStack_38) {
    lStack_38 = 0;
    lVar5 = *plVar1;
    *plVar1 = lVar4;
    FUN_1090a94f8(lVar5);
  }
  FUN_1090a94d4(&lStack_38);
  FUN_1090a9464(&lStack_40);
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar4 + 0x48) == 1) {
    func_0x0001090fab40(*(undefined8 *)(lVar4 + 0x10),lVar4 + 0x50);
  }
  return;
}



/* Entry: 1090bda10; end: 1090bda4f; -[SCNeoPlayerSubtitleManager setUpdateMode:] */

void FUN_1090bda10(void)

{
  func_0x0001090bef14();
  func_0x0001090bef08();
  return;
}



/* Entry: 1090bda50; end: 1090bdb63;  */

void FUN_1090bda50(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plStack_38;
  
  lVar4 = *(long *)(param_1 + 0x28);
  *(long *)(*(long *)(param_1 + 0x20) + 0x48) = lVar4;
  if (lVar4 == 1) {
    plVar3 = (long *)0x18;
    __Znwm();
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    plVar6 = plVar3 + 1;
    *plVar6 = 1;
    *plVar3 = (long)&PTR_FUN_110ad8978;
    _objc_initWeak(plVar3 + 2,uVar5);
    func_0x0001090bee9c();
    func_0x0001090bef84();
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_38 = plVar3;
    func_0x0001090fac88();
    FUN_1090ad63c(&plStack_38);
    lVar4 = *(long *)(param_1 + 0x20);
    if (*(long *)(lVar4 + 0x50) != 0) {
      func_0x0001090fab40(*(undefined8 *)(lVar4 + 0x10));
      lVar4 = *(long *)(param_1 + 0x20);
    }
    func_0x0001090faf04(*(undefined8 *)(lVar4 + 0x10),*(undefined1 *)(lVar4 + 0x30));
    do {
      lVar4 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  else {
    func_0x0001090bef84();
    plStack_38 = (long *)0x0;
    func_0x0001090fac88();
    FUN_1090ad63c(&plStack_38);
    func_0x0001090bef84();
    func_0x0001090faf04();
  }
  return;
}



/* Entry: 1090bdb64; end: 1090bdb9b; -[SCNeoPlayerSubtitleManager loadSubtitles] */

void FUN_1090bdb64(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001090bf04c();
    func_0x0001090beee8(0xc2000000);
  }
  return;
}



/* Entry: 1090bdb9c; end: 1090bdf17;  */

void FUN_1090bdb9c(long param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined8 extraout_x8_01;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long alStack_88 [3];
  undefined8 uStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  char cStack_49;
  int iStack_48;
  int iStack_40;
  undefined8 uStack_38;
  
  lVar6 = param_1;
  func_0x0001090befc8();
  uStack_38 = extraout_x8;
  func_0x00010c2778c0(*(undefined8 *)(*(long *)(lVar6 + 0x20) + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b80();
  func_0x0001090bee9c();
  uVar3 = 1;
  __Znwm();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  uStack_70 = uVar3;
  func_0x00010bdc3520(uVar4);
  func_0x000107c278b8(alStack_88,uVar4);
  func_0x0001090fb2f4(&uStack_68,&uStack_70,alStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_88);
  func_0x00010c2778c0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  func_0x0001090bee9c();
  if (iStack_40 == 1) {
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090beff0();
    uVar2 = cStack_49 == '\0';
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090beff0(puVar5);
    func_0x0001090bef4c();
    if (iStack_48 != 0) {
      func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090beff0(puVar5);
      func_0x0001090bef4c();
    }
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090beed0();
    func_0x0001090bef78();
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1090bdf18;
    puStack_a0 = &UNK_110883780;
    uStack_98 = *(undefined8 *)(param_1 + 0x20);
    puStack_90 = puVar5;
    _objc_retain(puVar5);
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,auStack_b8);
    _objc_release(puStack_90);
    func_0x0001090bee9c();
  }
  else {
    if (iStack_40 != 0) goto LAB_1090bdea4;
    uVar2 = 0;
    alStack_88[0] = 0;
    if (CONCAT44(uStack_64,uStack_68) != 0) {
      do {
        func_0x0001090bf03c();
        alStack_88[0] = extraout_x8_00;
      } while (extraout_w11 != 0);
    }
    func_0x0001090bef84();
    func_0x0001090fa940();
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30) = 1;
    func_0x0001090bef84();
    func_0x0001090faf04();
    lVar6 = *(long *)(param_1 + 0x20);
    if ((*(long *)(lVar6 + 0x48) == 0) && ((*(byte *)(lVar6 + 0x24) & 1) != 0)) {
      func_0x0001090fae14(*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18),
                          (ulong)*(uint *)(lVar6 + 0x20) | 0x100000000,1);
    }
    uStack_c0 = 0;
    if (alStack_88[0] != 0) {
      do {
        func_0x0001090bf03c();
        uStack_c0 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    func_0x0001090bee80();
    FUN_1090ad684(&uStack_c0);
    FUN_1090ad684(alStack_88);
  }
  FUN_1090be858(&uStack_68);
  func_0x0001090fbac8(&uStack_70);
  func_0x0001090bef30(uStack_38);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_1090bdea4:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1090bdeac);
  (*pcVar1)();
}



/* Entry: 1090bdf18; end: 1090bdf53;  */

void FUN_1090bdf18(undefined8 param_1)

{
  func_0x0001090befbc();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bdf54; end: 1090bdf9b;  */

void FUN_1090bdf54(undefined8 param_1)

{
  func_0x0001090befbc();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c261000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bdf9c; end: 1090bdfff;  */

void FUN_1090bdf9c(long param_1,long param_2)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  uVar1 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    do {
      func_0x0001090bf03c();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}



/* Entry: 1090be000; end: 1090be043; -[SCNeoPlayerSubtitleManager setEnabled:] */

void FUN_1090be000(void)

{
  func_0x0001090bef14();
  func_0x0001090bef08();
  return;
}



/* Entry: 1090be044; end: 1090be0b3;  */

void FUN_1090be044(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x20) + 0x30) != *(char *)(param_1 + 0x28)) {
    *(char *)(*(long *)(param_1 + 0x20) + 0x30) = *(char *)(param_1 + 0x28);
    func_0x0001090faf04(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),
                        *(undefined1 *)(param_1 + 0x28));
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf65c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x20),PTR_s_deactivateCurrentCue_1125b70b8);
      return;
    }
    if (*(long *)(*(long *)(param_1 + 0x20) + 0x48) == 0) {
      func_0x0001090befd8();
      func_0x00010c28c6a0();
    }
  }
  return;
}



/* Entry: 1090be0b4; end: 1090be13f; -[SCNeoPlayerSubtitleManager isEnabled] */

undefined1 FUN_1090be0b4(long param_1)

{
  undefined1 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  puStack_48 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1090be140;
  puStack_58 = &UNK_110a14000;
  lStack_50 = param_1;
  puStack_38 = puStack_48;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x38),&puStack_70);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  return uVar1;
}



/* Entry: 1090be140; end: 1090be153;  */

void FUN_1090be140(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x30);
  return;
}



/* Entry: 1090be154; end: 1090be1c3; -[SCNeoPlayerSubtitleManager resetCueState] */

void FUN_1090be154(void)

{
  func_0x0001090bf04c();
  func_0x0001090beee8(0xc2000000);
  return;
}



/* Entry: 1090be1c4; end: 1090be29b; -[SCNeoPlayerSubtitleManager updateWithCurrentTime:] */

void FUN_1090be1c4(void)

{
  func_0x0001090bef14();
  func_0x0001090bef08();
  return;
}



/* Entry: 1090be29c; end: 1090be39b; -[SCNeoPlayerSubtitleManager _performUpdateWithCurrentTime:forceUpdate:] */

void FUN_1090be29c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  func_0x0001090fae6c(auStack_38,*(undefined8 *)(param_1 + 0x10));
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x0001090fae14(uVar3,*param_3,(ulong)*(uint *)(param_3 + 1) | 0x100000000,param_4);
  if ((int)uVar3 != 0) {
    func_0x0001090fae6c(&lStack_60,*(undefined8 *)(param_1 + 0x10));
    lVar2 = lStack_60;
    FUN_1090bee2c(&lStack_60);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (lVar2 == 0) {
      func_0x00010bf65c40(param_1);
    }
    else {
      func_0x0001090fae6c(&uStack_40,*(undefined8 *)(param_1 + 0x10));
      func_0x0001090bf060(uStack_40);
      func_0x00010c25da80(puVar1);
      _objc_retainAutoreleasedReturnValue();
      lStack_58 = param_3[1];
      lStack_60 = *param_3;
      lStack_50 = param_3[2];
      func_0x00010beef940(param_1);
      func_0x0001090bee9c();
      FUN_1090bee2c(&uStack_40);
    }
  }
  func_0x0001090bf00c();
  return;
}



/* Entry: 1090be39c; end: 1090be41f; -[SCNeoPlayerSubtitleManager activateCueWithText:atTime:] */

void FUN_1090be39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001090bf030();
  func_0x0001090bef78();
  func_0x0001090bf020();
  func_0x0001090bee80();
  _objc_release(param_3);
  func_0x0001090beed0();
  return;
}



/* Entry: 1090be420; end: 1090be4a3;  */

void FUN_1090be420(long param_1)

{
  char cVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 != 0) &&
     (cVar1 = *(char *)(*(long *)(param_1 + 0x20) + 0x30), _objc_release(), cVar1 == '\x01')) {
    func_0x00010bf6b020(*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c260fa0();
    func_0x0001090beed0();
  }
  return;
}



/* Entry: 1090be4a4; end: 1090be4e7; -[SCNeoPlayerSubtitleManager deactivateCurrentCue] */

void FUN_1090be4a4(void)

{
  func_0x0001090bef78();
  func_0x0001090bee80();
  return;
}



/* Entry: 1090be4e8; end: 1090be523;  */

void FUN_1090be4e8(undefined8 param_1)

{
  func_0x0001090befbc();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090be524; end: 1090be607; -[SCNeoPlayerSubtitleManager reset] */

void FUN_1090be524(long param_1)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  
  puVar1 = &UNK_10f54f4fe;
  _dispatch_get_specific();
  if (puVar1 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010be92f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resetInternal_112582578);
    return;
  }
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1090be608;
  puStack_68 = &UNK_110a14000;
  lStack_60 = param_1;
  puStack_48 = puStack_58;
  func_0x000107c27da4(*(undefined8 *)(param_1 + 0x38),&puStack_80);
  if (*(char *)(puStack_48 + 3) == '\x01') {
    func_0x0001090bee80();
  }
  __Block_object_dispose(&uStack_50,8);
  return;
}



/* Entry: 1090be608; end: 1090be6b3;  */

void FUN_1090be608(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_28;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = 0;
  }
  else {
    func_0x0001090bef84();
    func_0x0001090fae6c(&lStack_28);
    *(bool *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = lStack_28 != 0;
    FUN_1090bee2c(&lStack_28);
  }
  func_0x0001090beed0();
  func_0x0001090bef84();
  lStack_28 = 0;
  func_0x0001090fa940();
  FUN_1090ad684(&lStack_28);
  puVar1 = PTR__kCMTimeZero_110348670;
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(puVar1 + 0x10);
  return;
}



/* Entry: 1090be6b4; end: 1090be6ef;  */

void FUN_1090be6b4(undefined8 param_1)

{
  func_0x0001090befbc();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090be6f0; end: 1090be797; -[SCNeoPlayerSubtitleManager _resetInternal] */

void FUN_1090be6f0(long param_1)

{
  long lVar1;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_release();
    func_0x0001090befac();
    FUN_1090ad684(&lStack_38);
    func_0x0001090bef90();
  }
  else {
    func_0x0001090fae6c(&lStack_38,*(undefined8 *)(param_1 + 0x10));
    func_0x0001090bf00c();
    func_0x0001090beed0();
    func_0x0001090befac();
    FUN_1090ad684(&lStack_38);
    func_0x0001090bef90();
    if (lStack_38 != 0) {
      func_0x0001090bef78();
      func_0x0001090beec0();
    }
  }
  return;
}



/* Entry: 1090be798; end: 1090be7d3;  */

void FUN_1090be798(undefined8 param_1)

{
  func_0x0001090befbc();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c260fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090be7d4; end: 1090be7eb; -[SCNeoPlayerSubtitleManager delegate] */

void FUN_1090be7d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090be7ec; end: 1090be7f7; -[SCNeoPlayerSubtitleManager setDelegate:] */

void FUN_1090be7ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x58,param_3);
  return;
}



/* Entry: 1090be7f8; end: 1090be84b; -[SCNeoPlayerSubtitleManager .cxx_destruct] */

void FUN_1090be7f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x58);
  FUN_1090a94d4(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  FUN_1090beb08(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090be84c; end: 1090be857; -[SCNeoPlayerSubtitleManager .cxx_construct] */

void FUN_1090be84c(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



/* Entry: 1090be858; end: 1090be8a7;  */

void FUN_1090be858(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110ad8908)[*(uint *)(param_1 + 0x28)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  return;
}



/* Entry: 1090be8a8; end: 1090be8b7;  */

void FUN_1090be8a8(undefined8 param_1,undefined8 param_2)

{
  func_0x0001090ad7b0(param_2);
  func_0x0001090ad6a8();
  return;
}



/* Entry: 1090be8b8; end: 1090be8fb;  */

void FUN_1090be8b8(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001090befc8();
  uStack_28 = extraout_x8;
  FUN_1090be8fc(auStack_38);
  *param_1 = auStack_38[0];
  func_0x0001090bef30(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1090be8fc;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1090be91c(&uStack_51);
  return;
}



/* Entry: 1090be8fc; end: 1090be91b;  */

void FUN_1090be8fc(void)

{
  undefined1 uStack_11;
  
  FUN_1090be91c(&uStack_11);
  return;
}



/* Entry: 1090be91c; end: 1090be9db;  */

void FUN_1090be91c(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_60;
  long lStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar5 = auStack_40;
  func_0x0001090befc8();
  uStack_28 = extraout_x8;
  FUN_1090be9f8(auStack_40,1);
  puVar6 = puStack_30;
  *puStack_30 = &PTR_FUN_110ad8928;
  puStack_30[1] = 0;
  puStack_30[4] = 0;
  puStack_30[5] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_110adba28;
  puStack_30[6] = 0x32aaaba7;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[10] = 0;
  puStack_30[9] = 0;
  puStack_30[0xc] = 0;
  puStack_30[0xb] = 0;
  puStack_30[0xe] = 0;
  puStack_30[0xd] = 0;
  puStack_30[0x10] = 0;
  puStack_30[0xf] = 0;
  puStack_30[0x12] = 0;
  puStack_30[0x11] = 0;
  puStack_30[0x14] = 0;
  puStack_30[0x13] = 0;
  puStack_30[0x15] = 0;
  *(undefined1 *)(puStack_30 + 0x16) = 1;
  puStack_30 = (undefined8 *)0x0;
  FUN_1090be9dc(param_1,puVar6 + 3);
  FUN_1090beaf8();
  func_0x0001090bef30(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = puVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_48 = FUN_1090be9dc;
    lStack_58 = extraout_x8_00[1];
    if (lStack_58 != 0) {
      plVar1 = (long *)(lStack_58 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_60 = puVar5;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_60);
    func_0x000107c278ec(&puStack_60);
    return;
  }
  return;
}



/* Entry: 1090be9dc; end: 1090be9f7;  */

void FUN_1090be9dc(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090be9f8; end: 1090bea1f;  */

long FUN_1090be9f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090bea20();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090bea20; end: 1090bea4f;  */

void FUN_1090bea20(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110ad8928;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090bea50; end: 1090bea53;  */

void FUN_1090bea50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8928;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090bea54; end: 1090bea67;  */

void FUN_1090bea54(void)

{
  func_0x0001090bea78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090bea68; end: 1090bea8b;  */

void FUN_1090bea68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090bea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090bea8c; end: 1090beaf7;  */

void FUN_1090bea8c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090beaf8; end: 1090beb07;  */

void FUN_1090beaf8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090beb08; end: 1090beb2f;  */

undefined8 * FUN_1090beb08(undefined8 *param_1)

{
  FUN_1090beb30(*param_1);
  return param_1;
}



/* Entry: 1090beb30; end: 1090beb3b;  */

void FUN_1090beb30(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090beb3c; end: 1090bec2f;  */

void FUN_1090beb3c(void)

{
  func_0x0001090bf014();
  return;
}



/* Entry: 1090bec30; end: 1090bed47;  */

void FUN_1090bec30(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x00010c071800();
    func_0x0001090beed0();
    if ((uVar2 & 1) != 0) {
      if (**(long **)(param_1 + 0x28) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf6b020(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c260fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(uVar3);
        return;
      }
      func_0x0001090bf060(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c25da80();
      _objc_retainAutoreleasedReturnValue();
      FUN_1090caae4(auStack_48,*(undefined8 *)(**(long **)(param_1 + 0x28) + 0x40),
                    *(undefined8 *)(**(long **)(param_1 + 0x28) + 0x48));
      func_0x00010bf6b020(*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c260fa0();
      func_0x0001090bee9c();
      func_0x0001090beed0();
    }
  }
  return;
}



/* Entry: 1090bed48; end: 1090bee2b;  */

void FUN_1090bed48(long param_1)

{
  long *plVar1;
  long unaff_x20;
  
  func_0x0001090befbc();
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_1 != 0) {
    if (**(long **)(unaff_x20 + 0x28) == 1) {
      plVar1 = *(long **)(unaff_x20 + 0x20);
      func_0x00010bf6b020(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c261000();
    }
    else {
      plVar1 = *(long **)(unaff_x20 + 0x28) + 1;
      FUN_109095ad0(plVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf6b020(*(undefined8 *)(unaff_x20 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c260fc0();
      func_0x0001090bee9c();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(plVar1);
    return;
  }
  return;
}



/* Entry: 1090bee2c; end: 1090bee53;  */

undefined8 * FUN_1090bee2c(undefined8 *param_1)

{
  FUN_1090bee54(*param_1);
  return param_1;
}



/* Entry: 1090bee54; end: 1090bf073;  */

void FUN_1090bee54(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090bee78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090bf074; end: 1090bf147; -[SCNeoPlayerTimer initWithTimebase:timeInterval:queue:block:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1090bf074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112700608;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithTimebase_queue__1125f23a0,param_3,param_5);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_1127818c0);
    uVar4 = param_4[2];
    uVar3 = *param_4;
    puVar1[1] = param_4[1];
    *puVar1 = uVar3;
    puVar1[2] = uVar4;
    uVar4 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127818c4);
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127818c4) = uVar4;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar2;
}



/* Entry: 1090bf148; end: 1090bf19b; -[SCNeoPlayerTimer invalidate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090bf148(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127818c4);
  *(undefined8 *)(param_1 + _DAT_1127818c4) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_112700608;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_invalidate_1125f8150);
  return;
}



/* Entry: 1090bf19c; end: 1090bf227; -[SCNeoPlayerTimer _scheduleNextFireDateWithCurrentTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090bf19c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = param_3[1];
  uStack_40 = *param_3;
  uStack_30 = param_3[2];
  func_0x0001090bf2e8(param_1 + _DAT_1127818c0);
  _CMTimeAdd(&uStack_60,&uStack_40,auStack_80);
  func_0x0001090bf2e8(PTR__kCMTimeZero_110348670);
  _CMTimeMaximum(&uStack_40,&uStack_60,auStack_80);
  uStack_58 = uStack_38;
  uStack_60 = uStack_40;
  uStack_50 = uStack_30;
  func_0x00010c1500a0(param_1);
  return;
}



/* Entry: 1090bf228; end: 1090bf25f; -[SCNeoPlayerTimer timeDidJump] */

void FUN_1090bf228(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010bf60480(auStack_38);
  func_0x00010be9b360(param_1,param_2,auStack_38);
  return;
}



/* Entry: 1090bf260; end: 1090bf2d3; -[SCNeoPlayerTimer onEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090bf260(long param_1)

{
  long lVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf60480(&uStack_38);
  uStack_48 = uStack_30;
  uStack_50 = uStack_38;
  uStack_40 = uStack_28;
  func_0x00010be9b360(param_1);
  lVar1 = *(long *)(param_1 + _DAT_1127818c4);
  if (lVar1 != 0) {
    uStack_40 = uStack_28;
    uStack_48 = uStack_30;
    uStack_50 = uStack_38;
    (**(code **)(lVar1 + 0x10))(lVar1,&uStack_50);
  }
  return;
}



/* Entry: 1090bf2d4; end: 1090bf2fb; -[SCNeoPlayerTimer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090bf2d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127818c4,0);
  return;
}



/* Entry: 1090bf2fc; end: 1090bf4cf; -[SCNeoPlayerTimerBase initWithTimebase:queue:] */

undefined8 * FUN_1090bf2fc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112700610;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
    if (param_3 == 0) goto LAB_1090bf488;
    puVar1[2] = param_3;
    _CFRetain(param_3);
    puVar2 = PTR___dispatch_source_type_timer_11034be38;
    _dispatch_source_create(PTR___dispatch_source_type_timer_11034be38,0,0,param_4);
    uVar3 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,puVar1);
    uVar3 = puVar1[1];
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1090bf4d0;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    _dispatch_source_set_event_handler(uVar3,&puStack_80);
    _dispatch_activate(puVar1[1]);
    _CMTimebaseAddTimerDispatchSource(param_3,puVar1[1]);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_retain(puVar1);
  puVar4 = puVar1;
LAB_1090bf488:
  _objc_release(param_4);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 1090bf4d0; end: 1090bf4fb;  */

void FUN_1090bf4d0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e3f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bf4fc; end: 1090bf547; -[SCNeoPlayerTimerBase dealloc] */

void FUN_1090bf4fc(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c069d00();
  _CFRelease(*(undefined8 *)(param_1 + 0x10));
  puStack_28 = PTR_PTR_112700610;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090bf548; end: 1090bf597; -[SCNeoPlayerTimerBase invalidate] */

void FUN_1090bf548(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(puVar1);
  _CMTimebaseRemoveTimerDispatchSource(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8))
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_source_cancel_11034c160)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1090bf598; end: 1090bf5d3; -[SCNeoPlayerTimerBase scheduleNextEventTime:] */

void FUN_1090bf598(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  uStack_20 = param_3[2];
  _CMTimebaseSetTimerDispatchSourceNextFireTime
            (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),&uStack_30,0);
  return;
}



/* Entry: 1090bf5d4; end: 1090bf5db; -[SCNeoPlayerTimerBase currentTime] */

void FUN_1090bf5d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbb93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimebaseGetTime_1103484d8)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1090bf5dc; end: 1090bf5df; -[SCNeoPlayerTimerBase effectiveRateDidChange] */

void FUN_1090bf5dc(void)

{
  return;
}



/* Entry: 1090bf5e0; end: 1090bf5e3; -[SCNeoPlayerTimerBase timeDidJump] */

void FUN_1090bf5e0(void)

{
  return;
}



/* Entry: 1090bf5e4; end: 1090bf5e7; -[SCNeoPlayerTimerBase onEvent] */

void FUN_1090bf5e4(void)

{
  return;
}



/* Entry: 1090bf5e8; end: 1090bf5ef; -[SCNeoPlayerTimerBase timebase] */

undefined8 FUN_1090bf5e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1090bf5f0; end: 1090bf5fb; -[SCNeoPlayerTimerBase .cxx_destruct] */

void FUN_1090bf5f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1090bf5fc; end: 1090bf6db; -[SCNeoPlayerTrackProgressObserverImpl initWithLogPrefix:delegate:shouldCheckPipelineBackPressure:] */

undefined1 *
FUN_1090bf5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 uVar2;
  undefined8 extraout_x9;
  undefined8 uVar3;
  undefined8 in_register_00005008;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112700618;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0001090c00e8();
    *(undefined8 *)((long)puVar1 + 0x18) = extraout_x9;
    *(undefined8 *)((long)puVar1 + 0x10) = in_register_00005008;
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    uVar4 = extraout_x8[1];
    uVar3 = *extraout_x8;
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    uVar2 = extraout_x8[2];
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x60) = uVar2;
    *(undefined8 *)((long)puVar1 + 0x58) = uVar4;
    *(undefined8 *)((long)puVar1 + 0x50) = uVar3;
    *(undefined1 *)((long)puVar1 + 0x88) = param_6;
    *(undefined1 *)((long)puVar1 + 0x68) = 0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_4;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x70),param_5);
  }
  func_0x0001090c00d8();
  func_0x0001090c005c();
  return (undefined1 *)puVar1;
}



/* Entry: 1090bf6dc; end: 1090bf773; -[SCNeoPlayerTrackProgressObserverImpl setEnabled:] */

void FUN_1090bf6dc(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined8 *extraout_x8;
  undefined8 uVar1;
  undefined8 extraout_x9;
  undefined8 uVar2;
  undefined8 in_register_00005008;
  undefined8 uVar3;
  
  if (*(byte *)(param_2 + 0x68) != param_4) {
    if ((param_4 & 1) == 0) {
      func_0x0001090c00e8();
      *(undefined8 *)(param_2 + 0x18) = extraout_x9;
      *(undefined8 *)(param_2 + 0x10) = in_register_00005008;
      *(undefined8 *)(param_2 + 8) = param_1;
      uVar3 = extraout_x8[1];
      uVar2 = *extraout_x8;
      *(undefined8 *)(param_2 + 0x28) = uVar3;
      *(undefined8 *)(param_2 + 0x20) = uVar2;
      uVar1 = extraout_x8[2];
      *(undefined8 *)(param_2 + 0x30) = uVar1;
      *(undefined8 *)(param_2 + 0x40) = uVar3;
      *(undefined8 *)(param_2 + 0x38) = uVar2;
      *(undefined8 *)(param_2 + 0x48) = uVar1;
      *(undefined8 *)(param_2 + 0x60) = uVar1;
      *(undefined8 *)(param_2 + 0x58) = uVar3;
      *(undefined8 *)(param_2 + 0x50) = uVar2;
      func_0x00010be599e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      func_0x0001090c00b0();
    }
    *(char *)(param_2 + 0x68) = (char)param_4;
  }
  return;
}



/* Entry: 1090bf774; end: 1090bf77f; -[SCNeoPlayerTrackProgressObserverImpl setProcessingPipelineStatusProvider:] */

void FUN_1090bf774(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x78,param_3);
  return;
}



/* Entry: 1090bf780; end: 1090bf823; -[SCNeoPlayerTrackProgressObserverImpl updateLastEnqueuedBufferPts:presentationEndTime:] */

void FUN_1090bf780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    *(undefined8 *)(param_1 + 0x30) = param_4[2];
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  else {
    func_0x0001090c0020(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x28) = uStack_58;
    *(undefined8 *)(param_1 + 0x20) = uStack_60;
    *(undefined8 *)(param_1 + 0x30) = uStack_50;
  }
  iVar1 = (int)lVar2;
  func_0x0001090c0088();
  func_0x0001090c0064(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 != 0) {
    func_0x00010be599e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c00b8();
    func_0x00010bdc3520();
    func_0x0001090c005c();
  }
  return;
}



/* Entry: 1090bf824; end: 1090bf84f; -[SCNeoPlayerTrackProgressObserverImpl didFinishBatchEnqueueBuffers] */

void FUN_1090bf824(undefined8 param_1)

{
  func_0x0001090c00c8();
  func_0x00010c252720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1090bf850; end: 1090bf893; -[SCNeoPlayerTrackProgressObserverImpl didInsertPlayableTimeRange] */

void FUN_1090bf850(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x0001090c00c8();
    func_0x00010c252720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1090bf894; end: 1090bf8d7; -[SCNeoPlayerTrackProgressObserverImpl didFinishProcessingBuffers] */

void FUN_1090bf894(long param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    func_0x0001090c00c8();
    func_0x00010c252720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1090bf8d8; end: 1090bf97b; -[SCNeoPlayerTrackProgressObserverImpl updateLastDequeuedBufferPts:presentationEndTime:] */

void FUN_1090bf8d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    *(undefined8 *)(param_1 + 0x48) = param_4[2];
    *(undefined8 *)(param_1 + 0x40) = uVar4;
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  else {
    func_0x0001090c0020(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x40) = uStack_58;
    *(undefined8 *)(param_1 + 0x38) = uStack_60;
    *(undefined8 *)(param_1 + 0x48) = uStack_50;
  }
  iVar1 = (int)lVar2;
  func_0x0001090c0088();
  func_0x0001090c0064(*(undefined8 *)(param_1 + 0x48));
  if (iVar1 != 0) {
    func_0x00010be599e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c00b8();
    func_0x00010bdc3520();
    func_0x0001090c005c();
  }
  return;
}



/* Entry: 1090bf97c; end: 1090bfa1f; -[SCNeoPlayerTrackProgressObserverImpl updateLastProcessedBufferPts:presentationEndTime:] */

void FUN_1090bf97c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar2 = param_1;
  if ((*(byte *)(param_1 + 0x5c) & 1) == 0) {
    uVar4 = param_4[1];
    uVar3 = *param_4;
    *(undefined8 *)(param_1 + 0x60) = param_4[2];
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x50) = uVar3;
  }
  else {
    func_0x0001090c0020(*(undefined8 *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x58) = uStack_58;
    *(undefined8 *)(param_1 + 0x50) = uStack_60;
    *(undefined8 *)(param_1 + 0x60) = uStack_50;
  }
  iVar1 = (int)lVar2;
  func_0x0001090c0088();
  func_0x0001090c0064(*(undefined8 *)(param_1 + 0x60));
  if (iVar1 != 0) {
    func_0x00010be599e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c00b8();
    func_0x00010bdc3520();
    func_0x0001090c005c();
  }
  return;
}



/* Entry: 1090bfa20; end: 1090bfa63; -[SCNeoPlayerTrackProgressObserverImpl didReachEndOfStream] */

void FUN_1090bfa20(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x48);
  func_0x00010be599e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c00b8();
  func_0x00010bdc3520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1090bfa64; end: 1090bfa97; -[SCNeoPlayerTrackProgressObserverImpl willSeek] */

void FUN_1090bfa64(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__kCMTimeInvalid_110348648;
  uVar4 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 8);
  uVar3 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  uVar2 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return;
}



/* Entry: 1090bfa98; end: 1090bfaab; -[SCNeoPlayerTrackProgressObserverImpl endTime] */

void FUN_1090bfa98(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[1] = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 1090bfaac; end: 1090bfab3; -[SCNeoPlayerTrackProgressObserverImpl isEnabled] */

undefined1 FUN_1090bfaac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x68);
}



/* Entry: 1090bfab4; end: 1090bfb17; -[SCNeoPlayerTrackProgressObserverImpl hasPendingBufferAtTargetTime:] */

bool FUN_1090bfab4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (((*(byte *)(param_1 + 0x2c) & 1) != 0) && ((*(byte *)((long)param_3 + 0xc) & 1) != 0)) {
    uStack_28 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
    uStack_20 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = param_3[1];
    uStack_50 = *param_3;
    uStack_40 = param_3[2];
    puVar1 = &uStack_30;
    _CMTimeCompare(puVar1,&uStack_50);
    return 0 < (int)puVar1;
  }
  return false;
}



/* Entry: 1090bfb18; end: 1090bfb2b; -[SCNeoPlayerTrackProgressObserverImpl latestEnqueuedPresentationEndTime] */

void FUN_1090bfb18(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = uVar1;
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  return;
}



/* Entry: 1090bfb2c; end: 1090bff5f; -[SCNeoPlayerTrackProgressObserverImpl progressAtTargetTime:hasSufficientDataForReliablePlayback:currentTime:] */

void FUN_1090bfb2c(byte *param_1,long param_2,undefined8 param_3,undefined8 *param_4,byte param_5,
                  undefined8 *param_6)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar14 = 0;
  }
  else {
    uStack_88 = param_6[1];
    uStack_90 = *param_6;
    uStack_80 = param_6[2];
    uStack_a8 = *(undefined8 *)(param_2 + 0x10);
    uStack_b0 = *(undefined8 *)(param_2 + 8);
    uStack_a0 = *(undefined8 *)(param_2 + 0x18);
    puVar5 = &uStack_90;
    _CMTimeCompare(puVar5,&uStack_b0);
    uVar14 = ~(uint)puVar5 >> 0x1f;
  }
  param_1[2] = (byte)uVar14;
  uVar17 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 4) = uVar17;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x30);
  uVar17 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x1c) = uVar17;
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x18);
  bVar2 = *(byte *)(param_2 + 0x68);
  *param_1 = bVar2;
  lVar6 = param_2 + 0x78;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c06d580();
  param_1[3] = (byte)lVar7;
  _objc_release(lVar6);
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 1) == 0) {
    uStack_88 = param_4[1];
    uStack_90 = *param_4;
    uStack_80 = param_4[2];
  }
  else {
    func_0x0001090c0110();
    uStack_c8 = param_4[1];
    uStack_d0 = *param_4;
    uStack_c0 = param_4[2];
    _CMTimeMinimum(&uStack_90,&uStack_b0,&uStack_d0);
  }
  uVar3 = (int)param_2 + 0x78;
  _objc_loadWeakRetained();
  func_0x00010bfdafe0();
  uVar4 = uVar3;
  func_0x0001090c00e0();
  if (*(char *)(param_2 + 0x88) == '\x01') {
    if ((*(uint *)(param_2 + 0x2c) & 1) == 0) {
      uVar16 = 0;
    }
    else {
      func_0x0001090c009c();
      func_0x0001090c0160();
      func_0x0001090c0050();
      uVar16 = (uint)(0 < (int)uVar4);
      if (((uVar1 & 1) != 0) && ((int)uVar4 < 1)) {
        func_0x0001090c009c();
        func_0x0001090c0124();
        func_0x0001090c0050();
        uVar16 = (uint)(uVar4 == 0);
      }
    }
    param_1[1] = (byte)uVar16;
    if ((uVar16 == 0) && (((uVar3 ^ 1) & 1) == 0)) {
      if ((*(byte *)(param_2 + 0x5c) & 1) == 0) {
        uVar16 = 0;
      }
      else {
        func_0x0001090c00fc();
        func_0x0001090c0160();
        func_0x0001090c0050();
        uVar16 = (uint)(0 < (int)uVar4);
        if (((uVar1 & 1) != 0) && ((int)uVar4 < 1)) {
          func_0x0001090c00fc();
          func_0x0001090c0124();
          func_0x0001090c0050();
          uVar16 = (uint)(uVar4 == 0);
        }
      }
    }
    param_1[1] = (byte)uVar16;
    bVar13 = bVar2 ^ 1 | (byte)(uVar14 | uVar16);
    if ((((bVar2 ^ 1) & 1) == 0 && (uVar14 | uVar16) == 0) && ((((uint)lVar7 ^ 1) & 1) == 0)) {
      bVar13 = *(byte *)(param_2 + 0x2c) & 1;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0x2c) & 1) == 0) {
      bVar15 = false;
    }
    else {
      func_0x0001090c009c();
      func_0x0001090c0138();
      func_0x0001090c0050();
      bVar15 = 0 < (int)uVar4;
    }
    bVar13 = (byte)(uVar4 >> 0x18);
    param_1[1] = bVar15;
    if ((bVar15 == false) && (((uVar3 ^ 1) & 1) == 0)) {
      if ((*(byte *)(param_2 + 0x5c) & 1) == 0) {
        bVar15 = false;
      }
      else {
        func_0x0001090c014c();
        func_0x0001090c0138();
        func_0x0001090c0050();
        bVar15 = (bool)((byte)~bVar13 >> 7);
      }
    }
    param_1[1] = bVar15;
    bVar13 = param_5 | (byte)uVar14 | bVar15 | bVar2 ^ 1;
  }
  param_1[0x34] = bVar13 & 1;
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_a8 = *(undefined8 *)(param_1 + 0xc);
  uStack_b0 = *(undefined8 *)(param_1 + 4);
  uStack_a0 = *(undefined8 *)(param_1 + 0x14);
  func_0x0001090c00d0();
  func_0x0001090c014c();
  func_0x0001090c00d0();
  func_0x0001090c0110();
  func_0x0001090c00d0();
  func_0x00010c25d9e0();
  _objc_retainAutoreleasedReturnValue();
  *(undefined **)(param_1 + 0x38) = puVar12;
  func_0x0001090c00b0();
  _objc_release(puVar11);
  _objc_release(puVar10);
  func_0x0001090c00e0();
  _objc_release(puVar9);
  _objc_release(puVar8);
  return;
}



/* Entry: 1090bff60; end: 1090bffc3; -[SCNeoPlayerTrackProgressObserverImpl _logTag] */

void FUN_1090bff60(undefined **param_1)

{
  undefined **ppuVar1;
  
  func_0x0001090c00c8();
  func_0x00010c0b1720();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db54d8;
  if (param_1 != (undefined **)0x0) {
    ppuVar1 = param_1;
  }
  _objc_retain(ppuVar1);
  func_0x0001090c00d8();
  func_0x0001090c005c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1090bffc4; end: 1090c001f; -[SCNeoPlayerTrackProgressObserverImpl .cxx_destruct] */

void FUN_1090bffc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_destroyWeak(param_1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x70);
  return;
}



/* Entry: 1090c0020; end: 1090c0173;  */

void FUN_1090c0020(undefined8 param_1)

{
  undefined8 *in_x3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000008 = in_x3[1];
  uStack0000000000000000 = *in_x3;
  uStack0000000000000010 = in_x3[2];
  uStack0000000000000030 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbb87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CMTimeMaximum_110348458)(&stack0x00000040,&stack0x00000020);
  return;
}



/* Entry: 1090c0174; end: 1090c01fb; -[SCNeoPlayerVideoView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1090c0174(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_30 [2];
  
  puVar2 = auStack_30;
  func_0x0001090c0f20();
  auStack_30[0] = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010c08c0e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2d20();
    func_0x0001090c0ea8();
    puVar1 = (undefined8 *)((long)puVar2 + (long)_DAT_1127818f8);
    uVar3 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    *puVar1 = uVar3;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar1[5] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    puVar1[4] = uVar3;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1090c01fc; end: 1090c021b; -[SCNeoPlayerVideoView setVideoGravity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c01fc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_1127818fc) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_1127818fc) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1090c021c; end: 1090c032f; -[SCNeoPlayerVideoView setVideoLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c021c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_b0 [128];
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112781900;
  if (param_3 != *(long *)(param_1 + lVar2)) {
    func_0x00010bec3ba0(param_1);
    func_0x00010c12c940(*(undefined8 *)(param_1 + lVar2));
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010c1a68e0(param_1);
    if (param_3 != 0) {
      func_0x0001090c0efc();
      func_0x0001090c0eb8(*(undefined8 *)(lVar2 + 0x718));
      func_0x0001090c0eec(auStack_b0,PTR__CATransform3DIdentity_110346c58);
      func_0x00010c219960(param_3);
      func_0x00010bf42760(*(undefined8 *)(lVar2 + 0x718));
      func_0x0001090c0ec0();
      func_0x0001090c0f14();
      func_0x0001090c0ec0();
      func_0x0001090c0ec0();
      func_0x0001090c0ec0();
      func_0x00010c08c0e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c066f40();
      func_0x0001090c0eb0();
      func_0x00010be48ba0(param_1);
      func_0x00010c1cbe20(param_1);
    }
  }
  func_0x0001090c0ec8();
  return;
}



/* Entry: 1090c0330; end: 1090c035f; -[SCNeoPlayerVideoView clearVideoLayerTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0330(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bec3ba0();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112781900);
  *(undefined8 *)(param_1 + _DAT_112781900) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090c0360; end: 1090c079b; -[SCNeoPlayerVideoView _layout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0360(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined *param_5)

{
  double *pdVar1;
  bool bVar2;
  int iVar3;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined *puVar4;
  
  lVar10 = (long)_DAT_112781900;
  if (*(long *)(param_5 + lVar10) == 0) {
    return;
  }
  puVar4 = param_5;
  func_0x00010bf20c00();
  iVar3 = (int)puVar4;
  dVar16 = param_4;
  _CGRectIsEmpty();
  if ((iVar3 != 0) && (puVar4 = param_5, func_0x00010bfdb100(), (int)puVar4 == 0)) {
    return;
  }
  dVar18 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  dVar17 = *(double *)PTR__CGAffineTransformIdentity_110347008;
  dVar14 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  dVar13 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  dVar12 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar15 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_c0 = dVar17;
  dStack_b8 = dVar18;
  dStack_b0 = dVar13;
  dStack_a8 = dVar14;
  dStack_a0 = dVar15;
  dStack_98 = dVar12;
  func_0x0001090c0efc();
  func_0x0001090c0eb8(*(undefined8 *)(unaff_x21 + 0x718));
  lVar7 = *(long *)(param_5 + _DAT_112781904);
  if ((lVar7 == 0) || (lVar9 = *(long *)(param_5 + _DAT_112781908), lVar9 == 0)) {
    dStack_f0 = dVar17;
    dStack_e8 = dVar18;
    dStack_e0 = dVar13;
    dStack_d8 = dVar14;
    dStack_d0 = dVar15;
    dStack_c8 = dVar12;
    dStack_c0 = dVar17;
    dStack_b8 = dVar18;
    dStack_b0 = dVar13;
    dStack_a8 = dVar14;
    dStack_a0 = dVar15;
    dStack_98 = dVar12;
    func_0x00010c166440(*(undefined8 *)(param_5 + lVar10));
    uVar5 = *(ulong *)(param_5 + lVar10);
    func_0x0001090c0f2c();
    func_0x00010c19f0e0();
  }
  else {
    pdVar1 = (double *)(param_5 + _DAT_1127818f8);
    fVar11 = (float)pdVar1[1];
    _atan2f(fVar11,(float)*pdVar1);
    dVar15 = (double)lVar7;
    dVar16 = (double)lVar9;
    dStack_e8 = pdVar1[1];
    dStack_f0 = *pdVar1;
    dStack_d8 = pdVar1[3];
    dStack_e0 = pdVar1[2];
    dStack_c8 = pdVar1[5];
    dStack_d0 = pdVar1[4];
    _CGRectApplyAffineTransform(0,0,&dStack_f0);
    dVar15 = dVar15 / dVar16;
    dVar17 = param_3;
    dVar18 = param_4;
    func_0x00010909472c(param_3,param_4,*(undefined8 *)(param_5 + _DAT_1127818fc));
    _CGAffineTransformMakeRotation(&dStack_f0,-(double)fVar11);
    _CGRectApplyAffineTransform(dVar17,dVar18,&dStack_f0);
    func_0x00010c1739e0(0,0,*(undefined8 *)(param_5 + lVar10));
    func_0x00010c1dee80(param_3 * 0.5,param_4 * 0.5,*(undefined8 *)(param_5 + lVar10));
    _CGAffineTransformMakeRotation(&dStack_c0,(double)fVar11);
    uVar5 = *(ulong *)(param_5 + lVar10);
    dStack_e8 = dStack_b8;
    dStack_f0 = dStack_c0;
    dStack_d8 = dStack_a8;
    dStack_e0 = dStack_b0;
    dStack_c8 = dStack_98;
    dStack_d0 = dStack_a0;
    func_0x00010c166440();
  }
  func_0x0001090c0f2c();
  _CGRectIsEmpty();
  func_0x00010bf42760(*(undefined8 *)(unaff_x21 + 0x718));
  if (((uVar5 & 1) == 0) && (puVar4 = param_5, func_0x00010bfdb100(), ((ulong)puVar4 & 1) == 0)) {
    func_0x00010bfb2f20(*(undefined8 *)(unaff_x21 + 0x718));
    func_0x00010c1a68e0(param_5);
    puVar4 = param_5;
    func_0x00010c0e5fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined *)0x0) {
      puVar4 = param_5;
      func_0x00010c0e5fc0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(puVar4 + 0x10))();
      func_0x0001090c0ea8();
    }
  }
  pdVar1 = (double *)(param_5 + _DAT_11278190c);
  pdVar1[1] = dStack_b8;
  *pdVar1 = dStack_c0;
  pdVar1[3] = dStack_a8;
  pdVar1[2] = dStack_b0;
  pdVar1[5] = dStack_98;
  pdVar1[4] = dStack_a0;
  dVar17 = dStack_a0;
  func_0x00010c12b200(*(undefined8 *)(param_5 + lVar10));
  func_0x0001090c0f14(*(undefined8 *)(param_5 + lVar10));
  func_0x00010c12b200();
  func_0x00010c12b200(*(undefined8 *)(param_5 + lVar10));
  func_0x00010c12b200(*(undefined8 *)(param_5 + lVar10));
  if (param_5[_DAT_112781910] == '\x01') {
    puVar4 = param_5;
    func_0x00010bde7340();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = param_5;
      func_0x00010c08c0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090c0f14();
      func_0x00010bf03c40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      func_0x0001090c0ea8();
      if (puVar4 == (undefined *)0x0) goto LAB_1090c0670;
    }
    else {
      _objc_release();
    }
    func_0x00010bec20e0(param_5);
  }
  else {
LAB_1090c0670:
    func_0x00010bec3ba0(param_5);
  }
  uVar8 = *(ulong *)(param_5 + lVar10);
  func_0x0001090c0ee4();
  puVar4 = PTR__OBJC_CLASS___CAMetalLayer_1126c9000;
  _objc_opt_class(PTR__OBJC_CLASS___CAMetalLayer_1126c9000);
  uVar5 = uVar8;
  _objc_opt_isKindOfClass(uVar8,puVar4);
  if ((uVar5 & 1) != 0) {
    puVar4 = param_5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar6 = param_5;
      func_0x00010c2a71e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar6;
      func_0x00010c150e00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
    }
    func_0x0001090c0ed0();
    func_0x00010c0d5c20(puVar4);
    dVar18 = dVar17;
    func_0x00010bf4e040(uVar8);
    if (dVar18 != dVar17) {
      func_0x00010c182d20(dVar17,uVar8);
    }
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar10));
    dVar15 = dVar17 * dVar15 + 0.5;
    dVar18 = (double)(long)dVar15;
    dVar16 = dVar17 * dVar16 + 0.5;
    dVar17 = (double)(long)dVar16;
    func_0x00010bf89d80(uVar8);
    bVar2 = false;
    if ((dVar16 == dVar18) && (bVar2 = false, !NAN(dVar15) && !NAN(dVar17))) {
      bVar2 = dVar15 == dVar17;
    }
    if (!bVar2) {
      func_0x00010c191800(dVar18,dVar17,uVar8);
    }
    func_0x0001090c0eb0();
  }
  func_0x0001090c0ea8();
  return;
}



/* Entry: 1090c079c; end: 1090c084b; -[SCNeoPlayerVideoView _containerBoundsSizeAnimation] */

void FUN_1090c079c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf03c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c0eb0();
  if (uVar1 == 0) {
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c0ea8();
    uVar1 = param_1;
  }
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  _objc_opt_class(PTR__OBJC_CLASS___CABasicAnimation_1126b5708);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x0001090c0ee4();
  func_0x0001090c0ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090c084c; end: 1090c098b; -[SCNeoPlayerVideoView _startVideoScaleSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c084c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  lVar4 = (long)_DAT_112781914;
  if (*(long *)(param_1 + lVar4) == 0) {
    puVar1 = PTR__OBJC_CLASS___CADisplayLink_1126b94a8;
    func_0x00010bf85b60(PTR__OBJC_CLASS___CADisplayLink_1126b94a8,param_2,param_1,
                        PTR_s__syncVideoLayerToContainerPresen_112590198);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    puVar1 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
      func_0x00010c0b6c20();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar2 = param_1;
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c150e00();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c0c3480();
    if (puVar1 != (undefined *)0x0) {
      func_0x0001090c0ed0();
    }
    func_0x0001090c0ed0();
    func_0x0001090c0ea8();
    if (0 < (long)puVar2) {
      fVar5 = (float)(long)puVar2;
      _CAFrameRateRangeMake(fVar5,fVar5,fVar5);
      func_0x00010c1dffc0(*(undefined8 *)(param_1 + lVar4));
    }
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befc2c0(uVar3);
    func_0x0001090c0eb0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec9fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncVideoLayerToContainerPresen_112590198);
  return;
}



/* Entry: 1090c098c; end: 1090c09bf; -[SCNeoPlayerVideoView _stopVideoScaleSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c098c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112781914;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1090c09c0; end: 1090c0bbb; -[SCNeoPlayerVideoView _syncVideoLayerToContainerPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c09c0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_270 [128];
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_f0 [128];
  
  lVar2 = param_5;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090c0eb0();
  lVar3 = (long)_DAT_112781900;
  if ((((*(long *)(param_5 + lVar3) != 0) && (lVar2 != 0)) &&
      (func_0x00010bf20c00(param_5), 0.0 < param_3)) && (0.0 < param_4)) {
    dVar4 = param_3;
    dVar5 = param_4;
    func_0x00010bf20c00(lVar2);
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x0001090c0eb8(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c1dee80(dVar4 * 0.5,dVar5 * 0.5,*(undefined8 *)(param_5 + lVar3));
    puVar1 = (undefined8 *)(param_5 + _DAT_11278190c);
    uStack_1e8 = puVar1[1];
    uStack_1f0 = *puVar1;
    uStack_1d8 = puVar1[3];
    uStack_1e0 = puVar1[2];
    uStack_1c8 = puVar1[5];
    uStack_1d0 = puVar1[4];
    _CATransform3DMakeAffineTransform(&uStack_170,&uStack_1f0);
    _CATransform3DMakeScale(&uStack_1f0,dVar4 / param_3,dVar5 / param_4,0x3ff0000000000000);
    _CATransform3DConcat(auStack_f0,&uStack_170,&uStack_1f0);
    func_0x0001090c0eec(&uStack_170,auStack_f0);
    func_0x0001090c0ed8();
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
    lVar2 = param_5;
    func_0x00010bde7340();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      _objc_release();
      goto LAB_1090c0b94;
    }
    lVar2 = param_5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090c0f14();
    func_0x00010bf03c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001090c0eb0();
    if (lVar2 != 0) goto LAB_1090c0b94;
    func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x0001090c0eb8(PTR__OBJC_CLASS___CATransaction_1126b5718);
    func_0x00010c1dee80(param_3 * 0.5,param_4 * 0.5,*(undefined8 *)(param_5 + lVar3));
    uStack_168 = puVar1[1];
    uStack_170 = *puVar1;
    uStack_158 = puVar1[3];
    uStack_160 = puVar1[2];
    uStack_148 = puVar1[5];
    uStack_150 = puVar1[4];
    _CATransform3DMakeAffineTransform(auStack_270,&uStack_170);
    func_0x0001090c0eec(&uStack_170,auStack_270);
    func_0x0001090c0ed8();
    func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  }
  func_0x00010bec3ba0(param_5);
LAB_1090c0b94:
  func_0x0001090c0ec8();
  return;
}



/* Entry: 1090c0bbc; end: 1090c0bff; -[SCNeoPlayerVideoView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0bbc(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + _DAT_112781914));
  func_0x0001090c0f20();
  alStack_30[0] = param_1;
  _objc_msgSendSuper2(alStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1090c0c00; end: 1090c0c3b; -[SCNeoPlayerVideoView layoutSubviews] */

void FUN_1090c0c00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_30 [2];
  
  uVar1 = param_1;
  func_0x0001090c0f20();
  auStack_30[0] = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010be48ba0(param_1);
  return;
}



/* Entry: 1090c0c3c; end: 1090c0d23; -[SCNeoPlayerVideoView setVideoTransform:videoWidth:videoHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0c3c(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar2 = _DAT_112781908;
  iVar1 = _DAT_1127818f8;
  lVar4 = (long)_DAT_112781904;
  if ((*(long *)(param_1 + lVar4) == param_4) && (*(long *)(param_1 + _DAT_112781908) == param_5)) {
    puVar3 = (undefined8 *)(param_1 + _DAT_1127818f8);
    uStack_78 = puVar3[1];
    uStack_80 = *puVar3;
    uStack_68 = puVar3[3];
    uStack_70 = puVar3[2];
    uStack_58 = puVar3[5];
    uStack_60 = puVar3[4];
    uStack_a8 = param_3[1];
    uStack_b0 = *param_3;
    uStack_98 = param_3[3];
    uStack_a0 = param_3[2];
    uStack_88 = param_3[5];
    uStack_90 = param_3[4];
    puVar3 = &uStack_80;
    _CGAffineTransformEqualToTransform(puVar3,&uStack_b0);
    if (((ulong)puVar3 & 1) != 0) {
      return;
    }
  }
  puVar3 = (undefined8 *)(param_1 + iVar1);
  uVar6 = param_3[1];
  uVar5 = *param_3;
  uVar7 = param_3[2];
  uVar9 = param_3[5];
  uVar8 = param_3[4];
  puVar3[3] = param_3[3];
  puVar3[2] = uVar7;
  puVar3[5] = uVar9;
  puVar3[4] = uVar8;
  puVar3[1] = uVar6;
  *puVar3 = uVar5;
  *(long *)(param_1 + lVar4) = param_4;
  *(long *)(param_1 + iVar2) = param_5;
  func_0x00010c1cbe20(param_1);
  return;
}



/* Entry: 1090c0d24; end: 1090c0de3; -[SCNeoPlayerVideoView actionForLayer:forKey:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090c0d24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar3;
  long alStack_40 [2];
  long lVar2;
  
  plVar3 = alStack_40;
  _objc_retain(param_3);
  func_0x0001090c0ee4();
  if ((*(byte *)(param_1 + _DAT_112781910) & 1) == 0) {
    plVar3 = (long *)PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_1;
    func_0x00010c262c40();
    iVar1 = (int)lVar2;
    func_0x00010c067bc0();
    if (iVar1 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      func_0x0001090c0f20();
      alStack_40[0] = param_1;
      _objc_msgSendSuper2(alStack_40,PTR_s_actionForLayer_forKey__1125992a0,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  func_0x0001090c0ea8();
  func_0x0001090c0ec8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 1090c0de4; end: 1090c0def; -[SCNeoPlayerVideoView videoGravity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090c0de4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127818fc);
}



/* Entry: 1090c0df0; end: 1090c0dfb; -[SCNeoPlayerVideoView videoLayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1090c0df0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112781900);
}



/* Entry: 1090c0dfc; end: 1090c0e0b; -[SCNeoPlayerVideoView resizeScaleSyncEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1090c0dfc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112781910);
}


