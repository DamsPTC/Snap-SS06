/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090aa404; end: 1090aa46f; -[SCNeoPlayerCPP setVolume:] */

void FUN_1090aa404(undefined8 param_1,long param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  
  func_0x0001090adafc();
  if (param_2 != 0) {
    func_0x0001090ad954();
    func_0x0001090adb08();
    (**(code **)(extraout_x8_00 + 0x40))(param_1);
    func_0x0001090ad848();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2241b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)(extraout_x8 + 0x10),PTR_s_setVolume__112666a90);
  return;
}



/* Entry: 1090aa470; end: 1090aa477; -[SCNeoPlayerCPP videoGravity] */

void FUN_1090aa470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29a3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_videoGravity_112684320);
  return;
}



/* Entry: 1090aa478; end: 1090aa47f; -[SCNeoPlayerCPP setVideoGravity:] */

void FUN_1090aa478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2218b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setVideoGravity__112666050);
  return;
}



/* Entry: 1090aa480; end: 1090aa857; -[SCNeoPlayerCPP setCurrentItem:] */

void FUN_1090aa480(void)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long extraout_x8_04;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w12;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long alStack_120 [3];
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_58;
  
  func_0x0001090ad978();
  func_0x0001090ad740();
  uStack_58 = extraout_x8;
  func_0x0001090ad838();
  func_0x0001090ad7a0();
  func_0x0001090ad914();
  uVar1 = *(ulong *)(unaff_x20 + 0x20) == unaff_x19;
  if ((bool)uVar1) goto LAB_1090aa78c;
  if ((*(ulong *)(unaff_x20 + 0x20) != 0) &&
     ((*(long *)(unaff_x20 + 0x60) != 0 || (*(long *)(unaff_x20 + 0x58) != 0)))) {
    func_0x00010bf539e0();
    pcStack_88 = FUN_1090ac1d0;
    ppuStack_80 = &PTR_DAT_110ad8180;
    FUN_1090ec4c8();
    func_0x0001090ad78c(ppuStack_80);
  }
  func_0x0001090ad7a8();
  if (unaff_x19 == 0) {
LAB_1090aa530:
    uStack_f8 = 0;
  }
  else {
    _objc_opt_class(PTR_PTR_1126dd4b8);
    uVar2 = unaff_x19;
    _objc_opt_isKindOfClass();
    if ((uVar2 & 1) == 0) goto LAB_1090aa530;
    func_0x0001090ad7a8();
    uStack_f8 = unaff_x19;
  }
  func_0x0001090ad778();
  func_0x0001090ad878();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(ulong *)(unaff_x20 + 0x20) = uStack_f8;
  _objc_release(uVar3);
  func_0x00010bf539e0();
  FUN_1090ac278();
  if (uStack_f8 != 0) {
    alStack_120[0] = 0;
    lStack_100 = 0;
    if (*(long *)(unaff_x20 + 0x60) != 0) {
      func_0x00010c11de00(*(undefined8 *)(unaff_x20 + 0x70));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090ad9a8();
      uStack_f0 = 0;
      if (lStack_108 != 0) {
        do {
          func_0x0001090ad828();
          uStack_f0 = extraout_x8_00;
        } while (extraout_w11 != 0);
      }
      FUN_1090aa858(alStack_120,&uStack_f0);
      FUN_1090ac2d8(&uStack_f0);
      FUN_1090ac860(&lStack_108);
      func_0x0001090ad850();
    }
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      func_0x00010c11de00(*(undefined8 *)(unaff_x20 + 0x70));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090ad9a8();
      uStack_f0 = 0;
      if (lStack_108 != 0) {
        do {
          func_0x0001090ad828();
          uStack_f0 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      FUN_1090aa858(&lStack_100,&uStack_f0);
      FUN_1090ac2d8(&uStack_f0);
      FUN_1090ac860(&lStack_108);
      func_0x0001090ad850();
    }
    if (alStack_120[0] != 0 || lStack_100 != 0) {
      func_0x00010bf539e0(*(undefined8 *)(unaff_x20 + 0x20));
      uStack_a8 = 0;
      if (alStack_120[0] != 0) {
        do {
          func_0x0001090ad828();
          uStack_a8 = extraout_x8_02;
        } while (extraout_w11_01 != 0);
      }
      uStack_a0 = 0;
      uStack_f0 = uStack_a8;
      if (lStack_100 != 0) {
        do {
          func_0x0001090ad9f8();
          uStack_a8 = extraout_x8_03;
          uStack_a0 = extraout_x9;
        } while (extraout_w12 != 0);
      }
      uStack_b8 = 0x1090ac89c;
      ppuStack_b0 = &PTR_FUN_110ad8240;
      uStack_f0 = 0;
      ppuStack_e8 = (undefined **)0x0;
      FUN_1090ec4c8();
      func_0x0001090ada8c(ppuStack_b0);
      FUN_1090aa884(&uStack_f0);
    }
    FUN_1090ac2d8(&lStack_100);
    FUN_1090ac2d8(alStack_120);
  }
  FUN_1090ea214(*(undefined8 *)(unaff_x20 + 0x28),&uStack_f8);
  if (*(long *)(unaff_x20 + 8) != 0) {
    alStack_120[2] = 0;
    if (((uStack_f8 != 0) && (alStack_120[2] = *(long *)(uStack_f8 + 0x40), alStack_120[2] != 0)) &&
       (*(long *)(alStack_120[2] + 0x10) != 0)) {
      do {
        func_0x0001090ad93c();
        alStack_120[2] = extraout_x8_04;
      } while (extraout_w11_02 != 0);
    }
    func_0x0001090f1630();
    FUN_1090958e8(alStack_120 + 2);
  }
  if (uStack_f8 != 0) {
    func_0x00010c067d80();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x00010bf539e0(uVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    _objc_retain(uVar4);
    _objc_retain(unaff_x19);
    uStack_f0 = 0x1090ac98c;
    ppuStack_e8 = &PTR_DAT_110ad8260;
    alStack_120[0] = 0;
    alStack_120[1] = 0;
    uStack_e0 = uVar4;
    func_0x0001090ecff0(uVar3,&uStack_f0);
    (*(code *)*ppuStack_e8)(&ppuStack_e8);
    func_0x0001090aa8ac(alStack_120);
    func_0x0001090ad850();
  }
  FUN_1090ac2a8(&uStack_f8);
  func_0x0001090ad820();
LAB_1090aa78c:
  func_0x0001090ad7fc();
  func_0x0001090ad798();
  func_0x0001090ad778();
  func_0x0001090ad6dc(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    FUN_1090ac2d8(&lStack_100);
    FUN_1090ac2d8(alStack_120);
    FUN_1090ac2a8(&uStack_f8);
    func_0x0001090ad820();
    func_0x0001090ad7fc();
    func_0x0001090ad798();
    func_0x0001090ad778();
    func_0x0001090adaac();
    func_0x0001090ada20();
    if (!(bool)uVar1) {
      func_0x0001090ad8f4();
      FUN_1090ac238();
    }
    return;
  }
  return;
}



/* Entry: 1090aa858; end: 1090aa883;  */

void FUN_1090aa858(void)

{
  undefined1 in_ZR;
  
  func_0x0001090ada20();
  if (!(bool)in_ZR) {
    func_0x0001090ad8f4();
    FUN_1090ac238();
  }
  return;
}



/* Entry: 1090aa884; end: 1090aa8d7;  */

undefined8 FUN_1090aa884(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1090ac2d8(param_1 + 8);
  func_0x0001090ad7b0(param_1);
  FUN_1090ac238();
  return unaff_x19;
}



/* Entry: 1090aa8d8; end: 1090aa907; -[SCNeoPlayerCPP currentItem] */

void FUN_1090aa8d8(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001090ad934();
  func_0x0001090ad92c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x20);
  func_0x0001090ad7a0();
  func_0x0001090ad8d8();
  func_0x0001090ad778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090aa908; end: 1090aa927; -[SCNeoPlayerCPP view] */

void FUN_1090aa908(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001090ad7a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090aa928; end: 1090aa957; -[SCNeoPlayerCPP audioSampleBufferProcessor] */

void FUN_1090aa928(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001090ad934();
  func_0x0001090ad92c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x60);
  func_0x0001090ad7a0();
  func_0x0001090ad8d8();
  func_0x0001090ad778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090aa958; end: 1090aaaab; -[SCNeoPlayerCPP setAudioSampleBufferProcessor:] */

void FUN_1090aa958(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  int extraout_w11;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  long alStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x0001090ad978();
  func_0x0001090ad740();
  uStack_38 = extraout_x8;
  func_0x0001090ad838();
  func_0x0001090ad7a0();
  func_0x0001090ad914();
  uVar1 = *(long *)(unaff_x20 + 0x60) == unaff_x19;
  if (!(bool)uVar1) {
    if ((*(long *)(unaff_x20 + 0x60) != 0) && (*(long *)(unaff_x20 + 0x20) != 0)) {
      func_0x00010bf539e0();
      func_0x0001090adacc(FUN_1090aca00);
      func_0x0001090ad78c(uStack_60);
    }
    func_0x0001090ad7a8();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    *(long *)(unaff_x20 + 0x60) = unaff_x19;
    _objc_release(uVar2);
    if ((unaff_x19 != 0) && (*(long *)(unaff_x20 + 0x20) != 0)) {
      func_0x00010bf539e0();
      func_0x00010c11de00(*(undefined8 *)(unaff_x20 + 0x70));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090ad888();
      func_0x0001090ad820();
      func_0x00010bf539e0(*(undefined8 *)(unaff_x20 + 0x20));
      if (alStack_a0[0] != 0) {
        do {
          func_0x0001090ad828();
        } while (extraout_w11 != 0);
      }
      func_0x0001090ad8a8();
      func_0x0001090ad78c(uStack_90);
      FUN_1090ac860(auStack_a8);
      FUN_1090ac860(alStack_a0);
    }
  }
  func_0x0001090ad7fc();
  func_0x0001090ad798();
  func_0x0001090ad778();
  func_0x0001090ad6dc(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x0001090ad95c();
    FUN_1090ac860();
    func_0x0001090ad7fc();
    func_0x0001090ad798();
    func_0x0001090ad778();
    func_0x0001090ad870();
    func_0x0001090ad934();
    func_0x0001090ad92c();
    uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
    func_0x0001090ad7a0();
    func_0x0001090ad8d8();
    func_0x0001090ad778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1090aaaac; end: 1090aaadb; -[SCNeoPlayerCPP videoSampleBufferProcessor] */

void FUN_1090aaaac(void)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x0001090ad934();
  func_0x0001090ad92c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
  func_0x0001090ad7a0();
  func_0x0001090ad8d8();
  func_0x0001090ad778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1090aaadc; end: 1090aab83; -[SCNeoPlayerCPP videoRendererPerformanceMetricsProvider] */

void FUN_1090aaadc(void)

{
  long unaff_x19;
  long lVar1;
  long lStack_40;
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x0001090ad934();
  func_0x0001090ad92c();
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 == 0) {
    FUN_1090acaa8(&lStack_40,*(undefined8 *)(*(long *)(unaff_x19 + 8) + 0x38));
    lStack_30 = 0;
    if (lStack_40 != 0) {
      lStack_30 = lStack_40 + 0x20;
    }
    uStack_28 = uStack_38;
    lStack_40 = 0;
    uStack_38 = 0;
    FUN_109104b68(&lStack_30);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001090ada98();
    func_0x0001090acb30(&lStack_40);
  }
  else {
    func_0x0001090ad7a0();
  }
  func_0x0001090ad8d8();
  func_0x0001090ad778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1090aab84; end: 1090aacd7; -[SCNeoPlayerCPP setVideoSampleBufferProcessor:] */

void FUN_1090aab84(long ****param_1,undefined8 param_2,long ****param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long lVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x8_02;
  int extraout_w10;
  int extraout_w11;
  int extraout_w12;
  long unaff_x19;
  long unaff_x20;
  long ****pppplVar8;
  long ****pppplVar9;
  long lStack_170;
  long lStack_168;
  long ***ppplStack_160;
  long ***ppplStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  code *pcStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_f8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  long **applStack_a0 [2];
  undefined8 uStack_90;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x0001090ad978();
  func_0x0001090ad740();
  uStack_38 = extraout_x8;
  func_0x0001090ad838();
  func_0x0001090ad7a0();
  func_0x0001090ad914();
  uVar3 = *(long *)(unaff_x20 + 0x58) == unaff_x19;
  if (!(bool)uVar3) {
    if ((*(long *)(unaff_x20 + 0x58) != 0) && (*(long *)(unaff_x20 + 0x20) != 0)) {
      func_0x00010bf539e0();
      func_0x0001090adacc(FUN_1090acb58);
      func_0x0001090ad78c(uStack_60);
    }
    func_0x0001090ad7a8();
    param_1 = *(long *****)(unaff_x20 + 0x58);
    *(long *)(unaff_x20 + 0x58) = unaff_x19;
    _objc_release();
    if ((unaff_x19 != 0) && (param_1 = (long ****)0x0, *(long *)(unaff_x20 + 0x20) != 0)) {
      func_0x00010bf539e0();
      func_0x00010c11de00(*(undefined8 *)(unaff_x20 + 0x70));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001090ad888();
      func_0x0001090ad820();
      func_0x00010bf539e0(*(undefined8 *)(unaff_x20 + 0x20));
      if ((long ***)applStack_a0[0] != (long ***)0x0) {
        do {
          func_0x0001090ad828();
        } while (extraout_w11 != 0);
      }
      func_0x0001090ad8a8();
      func_0x0001090ad78c(uStack_90);
      FUN_1090ac860(auStack_a8);
      param_1 = (long ****)applStack_a0;
      FUN_1090ac860();
    }
  }
  func_0x0001090ad7fc();
  func_0x0001090ad798();
  func_0x0001090ad778();
  func_0x0001090ad6dc(uStack_38);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001090ad95c();
    FUN_1090ac860();
    func_0x0001090ad7fc();
    func_0x0001090ad798();
    func_0x0001090ad778();
    func_0x0001090ad870();
    pcStack_b8 = FUN_1090aacd8;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x0001090ad740();
    uStack_f8 = extraout_x8_00;
    func_0x0001090ad838();
    pppplVar4 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = pppplVar4 == param_3;
    pppplVar5 = pppplVar4;
    if (!(bool)uVar3) {
      pppplVar8 = param_1 + 6;
      pppplVar5 = (long ****)0x0;
      if (*pppplVar8 != (long ***)0x0) {
        func_0x0001090ad99c();
        (*extraout_x8_01)();
        pppplVar5 = pppplVar8;
        FUN_1090aa11c();
      }
      if (param_3 == (long ****)0x0) {
        ppplStack_130 = (long ***)0x0;
        FUN_1090e9ff0(param_1[5],&ppplStack_130);
        pppplVar5 = &ppplStack_130;
        FUN_1090ac188();
      }
      else {
        func_0x0001090ad984();
        _objc_retain(param_1);
        func_0x0001090ad7a8();
        pppplVar9 = pppplVar5 + 1;
        *pppplVar9 = (long ***)0x1;
        *pppplVar5 = (long ***)&PTR_DAT_110ad8310;
        _objc_initWeak(pppplVar5 + 2,param_1);
        _objc_initWeak(pppplVar5 + 3,param_3);
        func_0x0001090ad778();
        func_0x0001090ad850();
        ppplVar6 = param_1[5];
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
          if (bVar2) {
            *pppplVar9 = (long ***)((long)*pppplVar9 + 1);
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        ppplStack_138 = (long ***)pppplVar5;
        ppplStack_130 = (long ***)pppplVar5;
        FUN_1090e9ff0(ppplVar6,&ppplStack_138);
        FUN_1090ac188(&ppplStack_138);
        uStack_118 = 0;
        if ((long ****)ppplStack_130 != (long ****)0x0) {
          do {
            func_0x0001090ad9f8();
            uStack_118 = extraout_x8_02;
          } while (extraout_w12 != 0);
        }
        pcStack_128 = FUN_1090ad194;
        ppuStack_120 = &PTR_FUN_110ad83d0;
        uStack_140 = 0;
        FUN_1090e9f4c(&ppplStack_138);
        ppplVar6 = *pppplVar8;
        *pppplVar8 = ppplStack_138;
        FUN_1090ac17c(ppplVar6);
        FUN_1090ac17c(0);
        func_0x0001090ada8c(ppuStack_120);
        FUN_1090ad158(&uStack_140);
        pppplVar5 = &ppplStack_130;
        FUN_1090ad158();
      }
    }
    func_0x0001090ad798();
    func_0x0001090ad778();
    func_0x0001090ad6dc(uStack_f8);
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      func_0x0001090ad798();
      func_0x0001090ad778();
      func_0x0001090ad870();
      pcStack_148 = FUN_1090aaea8;
      ppplStack_160 = (long ***)pppplVar4;
      ppplStack_158 = (long ***)param_3;
      ppuStack_150 = &puStack_c0;
      func_0x0001090ea05c(&lStack_170,pppplVar5[5]);
      if (lStack_170 == 0) {
        lVar7 = 0;
      }
      else {
        ___dynamic_cast(lStack_170,&PTR_DAT_110ad8388,&PTR_DAT_110ad8370,0);
        lVar7 = lStack_170;
        if (lStack_170 != 0) {
          do {
            func_0x0001090ad9e8();
          } while (extraout_w10 != 0);
        }
      }
      lStack_168 = lVar7;
      FUN_1090ac188(&lStack_170);
      if (lVar7 != 0) {
        FUN_1090aaf38(lVar7);
        _objc_retainAutoreleasedReturnValue();
      }
      FUN_1090ad158(&lStack_168);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 1090aacd8; end: 1090aaea7; -[SCNeoPlayerCPP setDelegate:] */

void FUN_1090aacd8(long ****param_1,undefined8 param_2,long ****param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ***ppplVar6;
  long lVar7;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined8 extraout_x8_01;
  int extraout_w10;
  int extraout_w12;
  long ****pppplVar8;
  long ****pppplVar9;
  long lStack_c0;
  long lStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  
  func_0x0001090ad740();
  uStack_48 = extraout_x8;
  func_0x0001090ad838();
  pppplVar4 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = pppplVar4 == param_3;
  pppplVar5 = pppplVar4;
  if (!(bool)uVar3) {
    pppplVar8 = param_1 + 6;
    pppplVar5 = (long ****)0x0;
    if (*pppplVar8 != (long ***)0x0) {
      func_0x0001090ad99c();
      (*extraout_x8_00)();
      pppplVar5 = pppplVar8;
      FUN_1090aa11c();
    }
    if (param_3 == (long ****)0x0) {
      ppplStack_80 = (long ***)0x0;
      FUN_1090e9ff0(param_1[5],&ppplStack_80);
      pppplVar5 = &ppplStack_80;
      FUN_1090ac188();
    }
    else {
      func_0x0001090ad984();
      _objc_retain(param_1);
      func_0x0001090ad7a8();
      pppplVar9 = pppplVar5 + 1;
      *pppplVar9 = (long ***)0x1;
      *pppplVar5 = (long ***)&PTR_DAT_110ad8310;
      _objc_initWeak(pppplVar5 + 2,param_1);
      _objc_initWeak(pppplVar5 + 3,param_3);
      func_0x0001090ad778();
      func_0x0001090ad850();
      ppplVar6 = param_1[5];
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppplVar9,0x10);
        if (bVar2) {
          *pppplVar9 = (long ***)((long)*pppplVar9 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      ppplStack_88 = (long ***)pppplVar5;
      ppplStack_80 = (long ***)pppplVar5;
      FUN_1090e9ff0(ppplVar6,&ppplStack_88);
      FUN_1090ac188(&ppplStack_88);
      uStack_68 = 0;
      if ((long ****)ppplStack_80 != (long ****)0x0) {
        do {
          func_0x0001090ad9f8();
          uStack_68 = extraout_x8_01;
        } while (extraout_w12 != 0);
      }
      pcStack_78 = FUN_1090ad194;
      ppuStack_70 = &PTR_FUN_110ad83d0;
      uStack_90 = 0;
      FUN_1090e9f4c(&ppplStack_88);
      ppplVar6 = *pppplVar8;
      *pppplVar8 = ppplStack_88;
      FUN_1090ac17c(ppplVar6);
      FUN_1090ac17c(0);
      func_0x0001090ada8c(ppuStack_70);
      FUN_1090ad158(&uStack_90);
      pppplVar5 = &ppplStack_80;
      FUN_1090ad158();
    }
  }
  func_0x0001090ad798();
  func_0x0001090ad778();
  func_0x0001090ad6dc(uStack_48);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x0001090ad798();
    func_0x0001090ad778();
    func_0x0001090ad870();
    pcStack_98 = FUN_1090aaea8;
    ppplStack_b0 = (long ***)pppplVar4;
    ppplStack_a8 = (long ***)param_3;
    puStack_a0 = &stack0xfffffffffffffff0;
    func_0x0001090ea05c(&lStack_c0,pppplVar5[5]);
    if (lStack_c0 == 0) {
      lVar7 = 0;
    }
    else {
      ___dynamic_cast(lStack_c0,&PTR_DAT_110ad8388,&PTR_DAT_110ad8370,0);
      lVar7 = lStack_c0;
      if (lStack_c0 != 0) {
        do {
          func_0x0001090ad9e8();
        } while (extraout_w10 != 0);
      }
    }
    lStack_b8 = lVar7;
    FUN_1090ac188(&lStack_c0);
    if (lVar7 != 0) {
      FUN_1090aaf38(lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    FUN_1090ad158(&lStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar7);
    return;
  }
  return;
}



/* Entry: 1090aaea8; end: 1090aaf37; -[SCNeoPlayerCPP delegate] */

void FUN_1090aaea8(long param_1)

{
  long lVar1;
  int extraout_w10;
  long lStack_30;
  long lStack_28;
  
  func_0x0001090ea05c(&lStack_30,*(undefined8 *)(param_1 + 0x28));
  if (lStack_30 == 0) {
    lVar1 = 0;
  }
  else {
    ___dynamic_cast(lStack_30,&PTR_DAT_110ad8388,&PTR_DAT_110ad8370,0);
    lVar1 = lStack_30;
    if (lStack_30 != 0) {
      do {
        func_0x0001090ad9e8();
      } while (extraout_w10 != 0);
    }
  }
  lStack_28 = lVar1;
  FUN_1090ac188(&lStack_30);
  if (lVar1 != 0) {
    FUN_1090aaf38(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  FUN_1090ad158(&lStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1090aaf38; end: 1090aaf4f;  */

void FUN_1090aaf38(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090aaf50; end: 1090aaf6f; -[SCNeoPlayerCPP state] */

long FUN_1090aaf50(long param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x118) - 1;
  lVar1 = 0;
  if (uVar2 < 5) {
    lVar1 = (ulong)uVar2 + 1;
  }
  return lVar1;
}



/* Entry: 1090aaf70; end: 1090ab083; -[SCNeoPlayerCPP setSubtitleDelegate:] */

void FUN_1090aaf70(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  long unaff_x20;
  long *plVar5;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  func_0x0001090ad978();
  func_0x0001090ad838();
  func_0x0001090ad7a0();
  func_0x0001090ad914();
  lVar3 = unaff_x20 + 0x68;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar3 != unaff_x19) {
    puVar4 = (undefined8 *)(unaff_x20 + 0x68);
    _objc_storeWeak();
    if (unaff_x19 == 0) {
      puStack_48 = (undefined8 *)0x0;
      func_0x0001090ada5c();
      FUN_1090ad63c(&puStack_48);
    }
    else {
      func_0x0001090ad984();
      func_0x0001090ad7a0();
      func_0x0001090ad7a8();
      plVar5 = puVar4 + 1;
      *plVar5 = 1;
      *puVar4 = &PTR_FUN_110ad8400;
      _objc_initWeak(puVar4 + 2);
      _objc_initWeak(puVar4 + 3);
      func_0x0001090ad778();
      func_0x0001090ad798();
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = *plVar5 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puStack_50 = puVar4;
      puStack_48 = puVar4;
      func_0x0001090ada5c();
      FUN_1090ad63c(&puStack_48);
      FUN_1090ad600(&puStack_50);
    }
  }
  func_0x0001090ad7fc();
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ab084; end: 1090ab0b7; -[SCNeoPlayerCPP subtitleDelegate] */

void FUN_1090ab084(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001090ad934();
  func_0x0001090ad92c();
  lVar1 = unaff_x19 + 0x68;
  _objc_loadWeakRetained(lVar1);
  func_0x0001090ad8d8();
  func_0x0001090ad778();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1090ab0b8; end: 1090ab0c3; -[SCNeoPlayerCPP setSubtitlesEnabled:] */

void FUN_1090ab0b8(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebcd0();
  if (((param_3 & 1) != 0) || (*(long *)(lVar1 + 0xe0) != 0)) {
    func_0x0001090eac28(lVar1);
    func_0x0001090faf04();
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090ab0c4; end: 1090ab0cb; -[SCNeoPlayerCPP areSubtitlesEnabled] */

long FUN_1090ab0c4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebcd0();
  lVar1 = *(long *)(lVar1 + 0xe0);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    func_0x0001090faedc();
  }
  func_0x0001090ebd88();
  return lVar1;
}



/* Entry: 1090ab0cc; end: 1090ab0d3; -[SCNeoPlayerCPP refreshSubtitleState] */

void FUN_1090ab0cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebcd0();
  lVar2 = *(long *)(lVar1 + 0xe0);
  if (((lVar2 != 0) && (*(long *)(lVar1 + 0xc0) != 0)) && (func_0x0001090faedc(), (int)lVar2 != 0))
  {
    uVar3 = *(undefined8 *)(lVar1 + 0xc0);
    func_0x0001090ebe68(uVar3);
    func_0x0001090fae14(*(undefined8 *)(lVar1 + 0xe0),uVar3,param_2,1);
  }
  func_0x0001090ebd88();
  return;
}



/* Entry: 1090ab0d4; end: 1090ab0db; -[SCNeoPlayerCPP loopEnabled] */

undefined1 FUN_1090ab0d4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x0001090ebdac();
  uVar1 = *(undefined1 *)(lVar2 + 0x125);
  __ZNSt3__15mutex6unlockEv(lVar2 + 0x18);
  return uVar1;
}



/* Entry: 1090ab0dc; end: 1090ab0e7; -[SCNeoPlayerCPP setLoopEnabled:] */

void FUN_1090ab0dc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x0001090ebdac();
  *(undefined1 *)(lVar1 + 0x125) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(lVar1 + 0x18);
  return;
}



/* Entry: 1090ab0e8; end: 1090ab123; -[SCNeoPlayerCPP playerOutput:didFailWithError:] */

void FUN_1090ab0e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_109095b5c(auStack_28,param_4);
  func_0x0001090eb010(uVar1,auStack_28);
  func_0x000104bda93c(auStack_28);
  return;
}



/* Entry: 1090ab124; end: 1090ab127; -[SCNeoPlayerCPP playerOutputDidEnqueueSampleBuffer:] */

void FUN_1090ab124(void)

{
  return;
}



/* Entry: 1090ab128; end: 1090ab29f; -[SCNeoPlayerCPP setSubtitlesUrl:] */

void FUN_1090ab128(void)

{
  undefined **ppuVar1;
  long *plVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [16];
  long *aplStack_50 [2];
  
  func_0x0001090ad978();
  func_0x0001090ad838();
  func_0x0001090ad7a0();
  func_0x0001090ad914();
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    if (unaff_x19 == 0) {
      func_0x00010bf539e0();
      aplStack_50[0] = (long *)0x0;
      func_0x0001090ec8ec();
      FUN_1090ad684(aplStack_50);
    }
    else {
      func_0x00010c072e60();
      ppuVar1 = &PTR_PTR_1126dd4b0;
      if ((int)unaff_x19 == 0) {
        ppuVar1 = &PTR_PTR_1126dd378;
      }
      func_0x00010c22ba80(*ppuVar1);
      _objc_retainAutoreleasedReturnValue();
      FUN_10910225c(aplStack_50);
      plVar2 = aplStack_50[0];
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      FUN_109095bd4(auStack_68);
      (**(code **)(*plVar2 + 0x10))(auStack_60,plVar2,auStack_68);
      func_0x000107c278f4(auStack_68);
      func_0x0001090ad818();
      func_0x00010bf539e0(*(undefined8 *)(unaff_x20 + 0x20));
      func_0x0001090ec98c();
      FUN_10909c860(auStack_60);
      FUN_109095890(aplStack_50);
      func_0x0001090ad820();
    }
  }
  func_0x0001090ad7fc();
  func_0x0001090ad798();
  func_0x0001090ad778();
  return;
}



/* Entry: 1090ab2a0; end: 1090ab2a7; -[SCNeoPlayerCPP playerItemFactory] */

undefined8 FUN_1090ab2a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1090ab2a8; end: 1090ab31f; -[SCNeoPlayerCPP .cxx_destruct] */

undefined8 FUN_1090ab2a8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001090ad840(param_1 + 0x78);
  func_0x0001090ad840(param_1 + 0x70);
  _objc_destroyWeak(param_1 + 0x68);
  func_0x0001090ad840(param_1 + 0x60);
  func_0x0001090ad840(param_1 + 0x58);
  func_0x0001090ad840(param_1 + 0x50);
  FUN_1090ad2bc(param_1 + 0x30);
  FUN_1090ab72c(param_1 + 0x28);
  func_0x0001090ad840(param_1 + 0x20);
  func_0x0001090ad840(param_1 + 0x18);
  func_0x0001090ad840(param_1 + 0x10);
  func_0x0001090ad7b0(param_1 + 8);
  FUN_1090ab488();
  return unaff_x19;
}



/* Entry: 1090ab320; end: 1090ab32b; -[SCNeoPlayerCPP .cxx_construct] */

void FUN_1090ab320(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



/* Entry: 1090ab32c; end: 1090ab3bf;  */

void FUN_1090ab32c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = SUB81(&uStack_30,0);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001090ad99c();
    (*extraout_x8)();
    uStack_30 = uVar2;
    uStack_28 = param_2;
    func_0x0001090ada74();
    func_0x0001090fbf10(&uStack_30,param_1 + 0x78);
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x99) = uVar1;
  return;
}



/* Entry: 1090ab3c0; end: 1090ab3d7;  */

void FUN_1090ab3c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ab3d8; end: 1090ab3fb;  */

void FUN_1090ab3d8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ab3fc; end: 1090ab41f;  */

void FUN_1090ab3fc(void)

{
  func_0x0001090ad7b0();
  FUN_1090ab3d8();
  return;
}



/* Entry: 1090ab420; end: 1090ab43f;  */

void FUN_1090ab420(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000104bda93c();
  }
  return;
}



/* Entry: 1090ab440; end: 1090ab487;  */

long FUN_1090ab440(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1090ab488; end: 1090ab493;  */

void FUN_1090ab488(long param_1)

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



/* Entry: 1090ab494; end: 1090ab4d3;  */

void FUN_1090ab494(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001090ad984();
  FUN_1090cbfac();
  *param_1 = puVar1;
  return;
}



/* Entry: 1090ab4d4; end: 1090ab4f7;  */

void FUN_1090ab4d4(void)

{
  func_0x0001090ad7b0();
  FUN_1090ab4f8();
  return;
}



/* Entry: 1090ab4f8; end: 1090ab51b;  */

void FUN_1090ab4f8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ab51c; end: 1090ab53f;  */

void FUN_1090ab51c(void)

{
  func_0x0001090ad7b0();
  FUN_1090ab540();
  return;
}



/* Entry: 1090ab540; end: 1090ab567;  */

void FUN_1090ab540(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ab568; end: 1090ab57b;  */

void FUN_1090ab568(void)

{
  func_0x0001090ab5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ab57c; end: 1090ab583;  */

void FUN_1090ab57c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090ad7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090ab584; end: 1090ab5a7;  */

void FUN_1090ab584(void)

{
  func_0x0001090ad7b0();
  FUN_1090ab5a8();
  return;
}



/* Entry: 1090ab5a8; end: 1090ab5db;  */

void FUN_1090ab5a8(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ab5dc; end: 1090ab5ef;  */

void FUN_1090ab5dc(void)

{
  FUN_1090ab608();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ab5f0; end: 1090ab607;  */

void FUN_1090ab5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long **pplVar3;
  long *plVar4;
  long *plStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  (**(code **)(**(long **)(lVar1 + 0x48) + 0x28))();
  (**(code **)(**(long **)(lVar1 + 0x50) + 0x28))(*(long **)(lVar1 + 0x50),param_2,param_3);
  pplVar3 = &plStack_40;
  if (*(float *)(lVar1 + 0x30) == 0.0) {
                    /* WARNING: Could not recover jumptable at 0x0001090f1408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x50) + 0x38))(0);
    return;
  }
  plVar2 = *(long **)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x20))();
  plVar4 = *(long **)(lVar1 + 0x50);
  lVar1 = lVar1 + 0x60;
  plStack_40 = plVar2;
  uStack_38 = param_2;
  func_0x0001090fbf64(&plStack_40,lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001090f1468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x40))(0x3f800000,plVar4,plVar2,param_2,pplVar3,lVar1);
  return;
}



/* Entry: 1090ab608; end: 1090ab673;  */

undefined8 * FUN_1090ab608(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad7d80;
  func_0x0001090ab468(param_1 + 4);
  *param_1 = &PTR_FUN_110ad8f78;
  _dispatch_release(param_1[3]);
  FUN_1090cc7b4(param_1 + 2);
  return param_1;
}



/* Entry: 1090ab674; end: 1090ab6cf;  */

void FUN_1090ab674(long *param_1,long param_2,long param_3)

{
  int extraout_w10;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 0x10) == 0 || (*(long *)(*(long *)(param_2 + 0x10) + 8) == -1)))) {
    lStack_20 = param_2;
    lStack_18 = param_3;
    if (param_3 != 0) {
      do {
        func_0x0001090ad7bc();
      } while (extraout_w10 != 0);
    }
    func_0x000107c278e4(param_2 + 8,&lStack_20);
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090ab6d0; end: 1090ab6d3;  */

void FUN_1090ab6d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7e08;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ab6d4; end: 1090ab6e7;  */

void FUN_1090ab6d4(void)

{
  func_0x0001090ab720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ab6e8; end: 1090ab6ef;  */

void FUN_1090ab6e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090ad7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090ab6f0; end: 1090ab713;  */

void FUN_1090ab6f0(void)

{
  func_0x0001090ad7b0();
  FUN_1090ab714();
  return;
}



/* Entry: 1090ab714; end: 1090ab72b;  */

void FUN_1090ab714(long param_1)

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



/* Entry: 1090ab72c; end: 1090ab74b;  */

void FUN_1090ab72c(void)

{
  func_0x0001090ad7b0();
  FUN_1090ab74c();
  return;
}



/* Entry: 1090ab74c; end: 1090ab75b;  */

void FUN_1090ab74c(long param_1)

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



/* Entry: 1090ab75c; end: 1090ab76f;  */

void FUN_1090ab75c(void)

{
  FUN_1090ab7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ab770; end: 1090ab7ab;  */

void FUN_1090ab770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1090caae4(auStack_38,param_2,param_3);
  func_0x00010c157260(uVar1);
  return;
}



/* Entry: 1090ab7ac; end: 1090ab7b3;  */

void FUN_1090ab7ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1e7650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_setRate__1126577b8);
  return;
}



/* Entry: 1090ab7b4; end: 1090ab817;  */

undefined8 * FUN_1090ab7b4(undefined8 *param_1)

{
  _objc_release(param_1[4]);
  *param_1 = &PTR_FUN_110ad8f78;
  _dispatch_release(param_1[3]);
  FUN_1090cc7b4(param_1 + 2);
  return param_1;
}



/* Entry: 1090ab818; end: 1090ab81b;  */

void FUN_1090ab818(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ab81c; end: 1090ab82f;  */

void FUN_1090ab81c(void)

{
  FUN_1090ac0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ab830; end: 1090ab837;  */

void FUN_1090ab830(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090ad7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090ab838; end: 1090ab8df;  */

undefined8 * FUN_1090ab838(undefined8 *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  
  _objc_retain(param_2);
  func_0x0001090ad878();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ad7ff8;
  func_0x0001090ad7a0();
  param_1[3] = param_2;
  uVar1 = 0;
  if (*param_3 != 0) {
    do {
      func_0x0001090ad828();
      uVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  param_1[4] = uVar1;
  param_1[5] = param_4;
  param_1[6] = 0x32aaaba7;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x13) = 0x100;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  func_0x0001090ad798();
  return param_1;
}



/* Entry: 1090ab8e0; end: 1090ab8e3;  */

undefined8 * FUN_1090ab8e0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad7ff8;
  FUN_1090abdec(param_1 + 0x12);
  FUN_1090ab3fc(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 6);
  _objc_release(param_1[5]);
  FUN_1090a94d4(param_1 + 4);
  _objc_release(param_1[3]);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090ab8e4; end: 1090ab8f7;  */

void FUN_1090ab8e4(void)

{
  FUN_1090abd90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ab8f8; end: 1090ab93b;  */

void FUN_1090ab8f8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar1 = 0x68766331;
  if (iVar3 != 0x68657631) {
    iVar1 = iVar3;
  }
  iVar2 = 0x61616320;
  if (iVar3 != 0x6d703461) {
    iVar2 = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c263570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_supportsCodec__112676780,iVar2);
  return;
}



/* Entry: 1090ab93c; end: 1090abc0b;  */

long * FUN_1090ab93c(long *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar8;
  long **pplVar9;
  long *plVar10;
  long **pplStack_a8;
  long **pplStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  plVar7 = param_2;
  func_0x0001090ad740();
  uStack_68 = extraout_x8;
  FUN_1090cae24(&lStack_78,plVar7);
  uVar4 = lStack_78 == 1;
  if (!(bool)uVar4) {
    func_0x0001090abefc(&plStack_88,param_1);
    if (plStack_88 != (long *)0x0) {
      (**(code **)(*plStack_88 + 0x28))(plStack_88,param_1,&plStack_70);
    }
    FUN_1090ab3fc(&plStack_88);
    goto LAB_1090abb78;
  }
  (**(code **)(*param_1 + 0x70))(param_1);
  func_0x0001090ad9c0();
  param_2 = (long *)*param_2;
  func_0x0001090f3568();
  uVar4 = (char)param_1[0x11] == '\x01';
  plStack_88 = param_2;
  plStack_80 = plStack_70;
  if ((bool)uVar4) {
    func_0x0001090ada74();
    pplVar5 = &plStack_88;
    func_0x0001090fbef4(pplVar5,param_1 + 0xf);
    if ((int)pplVar5 != 0) goto LAB_1090ab9d4;
    func_0x0001090ada74();
    param_2 = (long *)param_1[0xf];
    plVar7 = (long *)param_1[0x10];
  }
  else {
LAB_1090ab9d4:
    param_1[0x10] = (long)plStack_80;
    param_1[0xf] = (long)plStack_88;
    *(undefined1 *)(param_1 + 0x11) = 1;
    plVar7 = plStack_70;
  }
  FUN_1090ab32c(param_1);
  if ((*(byte *)((long)param_1 + 0x99) & 1) == 0) {
    plVar8 = param_1 + 0x12;
    plVar6 = (long *)*plVar8;
    if (plVar6 == (long *)0x0) {
      (**(code **)(*(long *)param_1[4] + 0x58))(&plStack_88);
      FUN_1090abe1c(plVar8,&plStack_88);
      pplVar5 = &plStack_88;
      FUN_1090abdec();
      plVar6 = (long *)*plVar8;
      func_0x0001090ad984();
      pplVar9 = pplVar5 + 1;
      *pplVar9 = (long *)0x1;
      *pplVar5 = (long *)&PTR_FUN_110ad7cd8;
      plStack_98 = param_1;
      if (param_1[1] == 0) {
        plVar10 = (long *)param_1[2];
        plStack_90 = plVar10;
        if (plVar10 != (long *)0x0) {
          do {
            func_0x0001090ad7bc();
          } while (extraout_w10_00 != 0);
          pplVar5[2] = param_1;
          pplVar5[3] = plVar10;
          goto LAB_1090abb08;
        }
        pplVar5[2] = param_1;
        pplVar5[3] = (long *)0x0;
      }
      else {
        func_0x000107c278f0(&plStack_88);
        if (plStack_88 == (long *)0x0) {
          plStack_98 = (long *)0x0;
          plStack_90 = (long *)0x0;
          plStack_80 = (long *)0x0;
          plVar10 = (long *)0x0;
        }
        else {
          plStack_90 = plStack_80;
          plVar10 = param_1;
          if (plStack_80 != (long *)0x0) {
            do {
              func_0x0001090ad7bc();
            } while (extraout_w10 != 0);
          }
        }
        func_0x000107c278ec(&plStack_88);
        pplVar5[2] = plVar10;
        pplVar5[3] = plStack_80;
        if (plStack_80 != (long *)0x0) {
LAB_1090abb08:
          do {
            func_0x0001090ad7bc();
          } while (extraout_w10_01 != 0);
        }
      }
      FUN_1090ab440(&plStack_98);
      pplStack_a8 = pplVar5;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pplVar9,0x10);
        if (bVar3) {
          *pplVar9 = (long *)((long)*pplVar9 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pplStack_a0 = pplVar5;
      (**(code **)(*plVar6 + 0x20))(plVar6,&pplStack_a0);
      FUN_1090abf40(&pplStack_a0);
      FUN_1090abf88(&pplStack_a8);
      plVar6 = (long *)*plVar8;
    }
    (**(code **)(*plVar6 + 0x28))(plVar6,param_2,plVar7);
  }
  func_0x0001090adac4();
  func_0x0001090ad804();
LAB_1090abb78:
  plVar7 = &lStack_78;
  FUN_1090ac030();
  func_0x0001090ad6dc(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    FUN_1090abf40(&pplStack_a0);
    FUN_1090abf88(&pplStack_a8);
    func_0x0001090ad804();
    FUN_1090ac030(&lStack_78);
    func_0x0001090ad860();
    func_0x0001090adae4();
    bVar1 = *(byte *)((long)param_1 + 0x99);
    func_0x0001090ad804();
    return (long *)(ulong)bVar1;
  }
  return plVar7;
}



/* Entry: 1090abc0c; end: 1090abc33;  */

undefined1 FUN_1090abc0c(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x0001090adae4();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x99);
  func_0x0001090ad804();
  return uVar1;
}



/* Entry: 1090abc34; end: 1090abccb;  */

void FUN_1090abc34(undefined8 param_1,long *param_2)

{
  long *unaff_x19;
  
  func_0x0001090adae4();
  if (unaff_x19[0xe] != *param_2) {
    if ((char)unaff_x19[0x13] == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x13) = 0;
      (**(code **)(*unaff_x19 + 0x78))();
    }
    func_0x0001090ad994();
    func_0x0001090ab380(unaff_x19 + 0xe,param_2);
    func_0x0001090adac4();
  }
  func_0x0001090ad804();
  return;
}



/* Entry: 1090abccc; end: 1090abcd7;  */

void FUN_1090abccc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c221610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_setVideoEnabled__112665fa8,param_2);
  return;
}



/* Entry: 1090abcd8; end: 1090abd1b;  */

void FUN_1090abcd8(long param_1)

{
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x18));
  func_0x0001090ad9c0();
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  *(undefined1 *)(param_1 + 0x99) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x30);
  return;
}



/* Entry: 1090abd1c; end: 1090abd27;  */

void FUN_1090abd1c(void)

{
  return;
}



/* Entry: 1090abd28; end: 1090abd6b;  */

void FUN_1090abd28(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  
  dStack_40 = (double)(float)*param_2;
  dStack_38 = (double)(float)((ulong)*param_2 >> 0x20);
  dStack_30 = (double)(float)param_2[1];
  dStack_28 = (double)(float)((ulong)param_2[1] >> 0x20);
  dStack_20 = (double)(float)param_2[2];
  dStack_18 = (double)(float)((ulong)param_2[2] >> 0x20);
  func_0x00010c222200((double)param_3,(double)param_4,*(undefined8 *)(param_1 + 0x18),param_2,
                      &dStack_40);
  return;
}



/* Entry: 1090abd6c; end: 1090abd8f;  */

void FUN_1090abd6c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf964f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_enqueueVideoSampleBuffer__1125c32e0,param_2);
  return;
}



/* Entry: 1090abd90; end: 1090abdeb;  */

undefined8 * FUN_1090abd90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad7ff8;
  FUN_1090abdec(param_1 + 0x12);
  FUN_1090ab3fc(param_1 + 0xe);
  __ZNSt3__15mutexD1Ev(param_1 + 6);
  _objc_release(param_1[5]);
  FUN_1090a94d4(param_1 + 4);
  _objc_release(param_1[3]);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090abdec; end: 1090abe0f;  */

void FUN_1090abdec(void)

{
  func_0x0001090ad7b0();
  FUN_1090abe10();
  return;
}



/* Entry: 1090abe10; end: 1090abe1b;  */

void FUN_1090abe10(long param_1)

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



/* Entry: 1090abe1c; end: 1090abe47;  */

void FUN_1090abe1c(void)

{
  undefined1 in_ZR;
  
  func_0x0001090ada20();
  if (!(bool)in_ZR) {
    func_0x0001090ad8f4();
    FUN_1090abe10();
  }
  return;
}



/* Entry: 1090abe48; end: 1090abf3f;  */

void FUN_1090abe48(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long *plStack_28;
  
  if ((param_2 == 0) ||
     (plVar1 = param_1, (**(code **)(*param_1 + 0x28))(), ((ulong)plVar1 & 1) != 0)) {
    if ((char)param_1[0x13] == '\x01') {
      *(undefined1 *)(param_1 + 0x13) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001090abe9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x78))(param_1);
      return;
    }
  }
  else if ((*(byte *)(param_1 + 0x13) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x13) = 1;
    func_0x0001090ad80c();
    uStack_40 = 0xc0000000;
    pcStack_38 = FUN_1090abfc4;
    puStack_30 = &UNK_110848088;
    plStack_28 = param_1;
    (**(code **)(*param_1 + 0x80))(param_1,auStack_48,param_1[5]);
  }
  return;
}



/* Entry: 1090abf40; end: 1090abf63;  */

void FUN_1090abf40(void)

{
  func_0x0001090ad7b0();
  FUN_1090abf64();
  return;
}



/* Entry: 1090abf64; end: 1090abf87;  */

void FUN_1090abf64(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090abf88; end: 1090abfc3;  */

void FUN_1090abf88(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
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
      func_0x0001090ad71c();
    }
  }
  return;
}



/* Entry: 1090abfc4; end: 1090ac02f;  */

void FUN_1090abfc4(long param_1)

{
  code *extraout_x8;
  long lStack_28;
  
  func_0x0001090abefc(&lStack_28,*(undefined8 *)(param_1 + 0x20));
  if (lStack_28 != 0) {
    func_0x0001090ad99c();
    (*extraout_x8)();
  }
  func_0x0001090ad9c0();
  func_0x0001090adac4();
  func_0x0001090ad804();
  func_0x0001090ad994();
  return;
}



/* Entry: 1090ac030; end: 1090ac053;  */

long * FUN_1090ac030(long *param_1)

{
  long *unaff_x19;
  
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return unaff_x19;
  }
  if (*param_1 == 1) {
    FUN_1090ac078();
    return param_1 + 1;
  }
  return param_1;
}



/* Entry: 1090ac054; end: 1090ac077;  */

undefined8 FUN_1090ac054(undefined8 param_1)

{
  FUN_1090ac078();
  return param_1;
}



/* Entry: 1090ac078; end: 1090ac09f;  */

void FUN_1090ac078(long param_1)

{
  undefined8 *unaff_x19;
  
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    _CFRelease();
    *unaff_x19 = 0;
  }
  return;
}



/* Entry: 1090ac0a0; end: 1090ac0ab;  */

void FUN_1090ac0a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad7ee0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ac0ac; end: 1090ac0cf;  */

void FUN_1090ac0ac(long param_1)

{
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 1090ac0d0; end: 1090ac0d3;  */

void FUN_1090ac0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad8090;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090ac0d4; end: 1090ac0e7;  */

void FUN_1090ac0d4(void)

{
  func_0x0001090ac14c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ac0e8; end: 1090ac0f3;  */

void FUN_1090ac0e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090ad7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090ac0f4; end: 1090ac107;  */

void FUN_1090ac0f4(void)

{
  FUN_1090abd90();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090ac108; end: 1090ac157;  */

void FUN_1090ac108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_canEnqueueAudioSampleBuffer_1125a8bf0);
  return;
}



/* Entry: 1090ac158; end: 1090ac17b;  */

void FUN_1090ac158(long param_1)

{
  func_0x0001090ad7b0();
  if (param_1 != 0) {
    func_0x000107c3105c();
  }
  return;
}



/* Entry: 1090ac17c; end: 1090ac187;  */

void FUN_1090ac17c(long param_1)

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



/* Entry: 1090ac188; end: 1090ac1ab;  */

void FUN_1090ac188(void)

{
  func_0x0001090ad7b0();
  FUN_1090ac1ac();
  return;
}



/* Entry: 1090ac1ac; end: 1090ac1cf;  */

void FUN_1090ac1ac(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001090ad70c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090ac1d0; end: 1090ac237;  */

/* WARNING: Possible PIC construction at 0x0001090ac1e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001090ac1e8) */

undefined8 * FUN_1090ac1d0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = param_1 + 2;
  func_0x0001090ad7b0();
  if (puVar4 != (undefined8 *)0x0) {
    *param_1 = 0;
    plVar1 = puVar4 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      func_0x0001090ad71c();
    }
  }
  return param_1;
}


