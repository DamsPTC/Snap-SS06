/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024e12dc; end: 1024e1313;  */

void FUN_1024e12dc(undefined8 param_1)

{
  if (lRam0000000112ea18a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ded48);
  return;
}



/* Entry: 1024e1314; end: 1024e1403;  */

void FUN_1024e1314(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = &UNK_10dab3e50;
  lVar1 = 0x13f;
  func_0x0001024e13b0();
  if (param_2 < 0x40) {
    lStack_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = &UNK_10dab3e68;
    puStack_60 = puStack_68;
    puStack_58 = puStack_68;
    puStack_50 = puStack_68;
    puStack_48 = puStack_68;
    puStack_40 = puStack_68;
    puStack_38 = puStack_68;
    puStack_30 = puStack_68;
    func_0x000107c61630(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 1024e1404; end: 1024e14d3; -[_TtC32FriendingInterstitialOperaPlugin29FriendingInterstitialCardView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

bool FUN_1024e1404(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c61168(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c6148c(in_x3,puVar1);
  return in_x3 != 0;
}



/* Entry: 1024e14d4; end: 1024e1727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e14d4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar3 = unaff_x20 + _DAT_112ea1828;
  *(undefined8 *)(lVar3 + 8) = 0;
  func_0x000107c61614(lVar3,0);
  lVar3 = _DAT_113804720;
  lVar2 = 0;
  FUN_1024de864();
  lVar3 = unaff_x20 + lVar3;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,1,1,lVar2);
  lVar2 = _DAT_112ea1830;
  FUN_1024df728();
  *(long *)(unaff_x20 + lVar2) = lVar3;
  lVar3 = _DAT_112ea1838;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c5af88(puVar5);
  func_0x000107c61180();
  func_0x000107c59c78(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c59c74(puVar4);
  func_0x000107c61170(puVar4);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  lVar3 = _DAT_112ea1840;
  func_0x0001024df7fc();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_112ea1848;
  func_0x0001024df89c();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_112ea1850;
  func_0x0001024df93c();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_112ea1858;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4000000000000000,puVar4);
  func_0x000107c52610(puVar4);
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  lVar3 = _DAT_112ea1860;
  FUN_1024df9dc();
  *(undefined **)(unaff_x20 + lVar3) = puVar5;
  lVar3 = _DAT_112ea1868;
  puVar4 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  func_0x000107c55260(puVar4);
  func_0x000107c5a050(puVar4);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1870) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FriendingInterstitialOperaPlugin/FriendingInterstitialCardView.swift",0x44,2,
                      0x96,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e1728);
  (*pcVar1)();
}



/* Entry: 1024e1728; end: 1024e175f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e1728(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (param_1 != 0) {
      puVar1 = (ulong *)(lVar3 + _DAT_113804720);
      func_0x000107c61428(puVar1,auStack_70,0,0);
      lVar4 = 0;
      FUN_1024de864();
      puVar5 = puVar1;
      (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar1,1,lVar4);
      if ((int)puVar5 == 0) {
        uVar6 = *puVar1;
        if ((uVar6 == uVar2 && puVar1[1] == uVar7) ||
           (func_0x000107c605b8(uVar6,puVar1[1],uVar2,uVar7,0), (uVar6 & 1) != 0)) {
          uVar8 = *(undefined8 *)(lVar3 + _DAT_112ea1830);
          func_0x000107c61174(param_1);
          func_0x000107c55258(uVar8);
          func_0x000107c550d8(*(undefined8 *)(lVar3 + _DAT_112ea1838));
          func_0x000107c61170(lVar3);
        }
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1024e1760; end: 1024e17c3;  */

undefined8 FUN_1024e1760(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024e17c4; end: 1024e1aaf;  */

void FUN_1024e17c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined **)(unaff_x20 + 0x28) = puVar2;
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + 0x30) = puVar2;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x58) = puVar1;
  FUN_1024dd938();
  *(undefined **)(unaff_x20 + 0x60) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000107c615f0(param_1);
  func_0x000107c615f0(param_2);
  uVar6 = param_1;
  func_0x000107c4e4ec();
  func_0x000107c61180();
  puVar2 = &UNK_110517570;
  puVar3 = puVar2;
  func_0x000107c613fc(&UNK_110517570,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1024e40ec;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101218f4c;
  puStack_88 = &UNK_1105175d8;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar3 = puStack_78;
  func_0x000107c6157c();
  func_0x000107c61574(puVar3);
  uVar5 = uVar6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar5;
  func_0x000107c61170(uVar6);
  uVar6 = param_1;
  func_0x000107c5c400();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c613fc(&UNK_110517570,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_80 = (code *)0x1024e4110;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101218f4c;
  puStack_88 = &UNK_110517600;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar5;
  func_0x000107c61170(uVar6);
  uVar6 = param_3;
  func_0x000107c3ef54();
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_110517570,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c61574();
  pcStack_80 = (code *)0x1024e4118;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10104e6fc;
  puStack_88 = &UNK_110517628;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  func_0x000107c61574(puStack_78);
  uVar5 = uVar6;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar5;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1024e1ab0; end: 1024e1d57;  */

void FUN_1024e1ab0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *apuStack_48 [3];
  
  apuStack_48[0] = (undefined *)0x0;
  uVar2 = 0;
  FUN_1024e4120(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc50(param_1,apuStack_48,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (apuStack_48[0] != (undefined *)0x0) {
    puVar1 = apuStack_48[0];
  }
  func_0x000107c61428(param_2 + 0x10,apuStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c6142c(puVar1);
  }
  else {
    func_0x000107c4b940(*(undefined8 *)(param_2 + 0x20));
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined **)(param_2 + 0x28) = puVar1;
    func_0x000107c61434(puVar1);
    func_0x000107c6142c(uVar2);
    func_0x000107c5d278(*(undefined8 *)(param_2 + 0x20));
    FUN_1024e1d58();
    func_0x000107c6142c(puVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1024e1d58; end: 1024e1ec7;  */

void FUN_1024e1d58(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  ppuVar8 = (undefined **)*unaff_x20;
  uVar5 = unaff_x20[0xb];
  func_0x000107c4b940(uVar5);
  func_0x000107c61428(unaff_x20 + 0xc,auStack_58,0,0);
  lVar7 = unaff_x20[0xc];
  ppuVar6 = *(undefined ***)(lVar7 + 0x10);
  ppuVar2 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppuVar6 != (undefined **)0x0) {
    func_0x000107c61434(lVar7);
    ppuVar2 = ppuVar6;
    FUN_1024e7f30(ppuVar6,0);
    ppuVar3 = &puStack_88;
    func_0x0001024e3c90(ppuVar3,ppuVar2 + 4,ppuVar6,lVar7);
    FUN_1024e4160(puStack_88,uStack_80,puStack_78,puStack_70,uStack_68);
    if (ppuVar3 != ppuVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e1dec);
      (*pcVar1)();
    }
  }
  func_0x000107c5d278(uVar5);
  if (ppuVar2[2] != (undefined *)0x0) {
    uVar5 = 0;
    func_0x000107c60714(ppuVar8,0);
    puVar4 = &UNK_110517660;
    func_0x000107c613fc(&UNK_110517660,0x18,7);
    *(undefined ***)(puVar4 + 0x10) = ppuVar2;
    uStack_68 = 0x1024e4168;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    puStack_70 = &UNK_110517678;
    ppuVar2 = &puStack_88;
    puStack_60 = puVar4;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_60);
    func_0x000107c5fb28(ppuVar8,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000100162d98(ppuVar8 + 4,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    ppuVar2 = ppuVar8;
  }
  func_0x000107c61574(ppuVar2);
  return;
}



/* Entry: 1024e1ec8; end: 1024e1f17;  */

void FUN_1024e1ec8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = (code *)puVar4[-1];
      uVar2 = *puVar4;
      func_0x000107c6157c(uVar2);
      (*pcVar1)();
      func_0x000107c61574(uVar2);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 1024e1f18; end: 1024e1fe7;  */

void FUN_1024e1f18(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c4218c();
  }
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    func_0x000107c4218c();
  }
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    func_0x000107c4218c();
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 1024e1fe8; end: 1024e22c3;  */

ulong FUN_1024e1fe8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = param_2;
  func_0x000107c4b940(uVar10);
  uVar13 = *(ulong *)(unaff_x20 + 0x28);
  uVar6 = *(ulong *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61434(uVar13);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar9);
  func_0x000107c5d278(uVar10);
  if (uVar13 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar11 = uVar13;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e2138);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar13 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
        uVar8 = uVar7;
      }
      else {
        uVar3 = uVar12;
        uVar8 = uVar13;
        func_0x00010103193c();
      }
      uVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e2134);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar7 = uVar8;
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        if ((uVar5 == param_1) && (uVar8 == param_2)) goto LAB_1024e2240;
        uVar7 = uVar8;
        func_0x000107c605b8(uVar5,uVar8,param_1,param_2,0);
        func_0x000107c6142c(uVar8);
        if ((uVar5 & 1) != 0) goto LAB_1024e2254;
      }
      func_0x000107c61170(uVar3);
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar11);
  }
  if (uVar6 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar11 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar11 != 0) {
    uVar12 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e226c);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar6 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
        uVar8 = uVar7;
      }
      else {
        uVar3 = uVar12;
        uVar8 = uVar6;
        func_0x00010103193c();
      }
      uVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e2268);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar7 = uVar8;
      if (uVar4 != 0) {
        uVar5 = uVar4;
        func_0x000107c5faec();
        func_0x000107c61170(uVar4);
        if ((uVar5 == param_1) && (uVar8 == param_2)) goto LAB_1024e2240;
        uVar7 = uVar8;
        func_0x000107c605b8(uVar5,uVar8,param_1,param_2,0);
        func_0x000107c6142c(uVar8);
        if ((uVar5 & 1) != 0) goto LAB_1024e2254;
      }
      func_0x000107c61170(uVar3);
      uVar12 = uVar12 + 1;
    } while (uVar1 != uVar11);
  }
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar13);
  uVar3 = 0;
LAB_1024e2298:
  func_0x000107c6142c(uVar9);
  return uVar3;
LAB_1024e2240:
  func_0x000107c6142c(uVar6);
  uVar6 = uVar13;
  uVar13 = uVar8;
LAB_1024e2254:
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar13);
  goto LAB_1024e2298;
}



/* Entry: 1024e22c4; end: 1024e2383;  */

ulong FUN_1024e22c4(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  func_0x000107c3db54();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1024e4120(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  uVar3 = uVar1;
  func_0x000107c5fc54(uVar1,uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = uVar3;
  func_0x0001024e3de0(uVar3,param_1);
  func_0x000107c6142c(uVar3);
  if (uVar1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar1) {
      uVar3 = uVar1;
    }
    func_0x000107c60480(uVar3);
  }
  func_0x000107c6142c(uVar1);
  return uVar3;
}



/* Entry: 1024e2384; end: 1024e25c7;  */

void FUN_1024e2384(ulong *param_1,ulong param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar7 = (undefined4)((ulong)param_3 >> 0x20);
  uVar6 = (undefined4)param_3;
  uVar2 = param_2;
  func_0x000107c5db08();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar8 = 0;
    uVar9 = 0xe000000000000000;
  }
  else {
    uVar8 = uVar2;
    func_0x000107c5faec();
    uVar9 = CONCAT44(uVar7,uVar6);
    func_0x000107c61170(uVar2);
  }
  uVar2 = param_2;
  func_0x000107c42120();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uVar13 = 0;
    uVar12 = 0xe000000000000000;
  }
  else {
    uVar13 = uVar2;
    func_0x000107c5faec();
    uVar12 = CONCAT44(uVar7,uVar6);
    func_0x000107c61170(uVar2);
  }
  uVar2 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar2 == 0) {
    uStack_80 = 0xe000000000000000;
    uStack_78 = 0;
  }
  else {
    uStack_78 = uVar2;
    func_0x000107c5faec();
    uStack_80 = CONCAT44(uVar7,uVar6);
    func_0x000107c61170(uVar2);
  }
  uVar2 = uVar13 & 0xffffffffffff;
  if ((uVar12 & 0x2000000000000000) != 0) {
    uVar2 = uVar12 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(uVar12);
    func_0x000107c61434(uVar9);
    uVar12 = uVar9;
    uVar13 = uVar8;
  }
  lVar3 = 0;
  FUN_1024de864();
  FUN_1024e25c8((long)param_1 + (long)*(int *)(lVar3 + 0x1c),param_2);
  uVar4 = param_2;
  FUN_1024e41f0();
  uVar2 = CONCAT44(uVar7,uVar6);
  uVar14 = param_2;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar14 == 0) {
LAB_1024e2500:
    uVar10 = 0;
    uVar14 = 0;
  }
  else {
    uVar5 = uVar14;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar14);
    if (uVar5 == 0) goto LAB_1024e2500;
    uVar10 = uVar5;
    func_0x000107c5faec();
    uVar14 = CONCAT44(uVar7,uVar6);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar5 = param_2;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (uVar5 != 0) {
      uVar11 = uVar5;
      func_0x000107c5faec();
      uVar15 = CONCAT44(uVar7,uVar6);
      func_0x000107c61170(uVar5);
      goto LAB_1024e2560;
    }
  }
  uVar11 = 0;
  uVar15 = 0;
LAB_1024e2560:
  *param_1 = uStack_78;
  param_1[1] = uStack_80;
  param_1[2] = uVar13;
  param_1[3] = uVar12;
  param_1[4] = uVar8;
  param_1[5] = uVar9;
  *(char *)((long)param_1 + (long)*(int *)(lVar3 + 0x20)) = (char)param_3;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar4;
  puVar1[1] = uVar2;
  puVar1 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  *puVar1 = uVar10;
  puVar1[1] = uVar14;
  param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  *param_1 = uVar11;
  param_1[1] = uVar15;
  return;
}



/* Entry: 1024e25c8; end: 1024e2693;  */

/* WARNING: Possible PIC construction at 0x0001024e2660: Changing call to branch */

void FUN_1024e25c8(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar1 = param_2;
    func_0x000107c4f3b8();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar1 = param_3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c5edd0(param_1,uVar2,param_3);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
      return;
    }
  }
  lVar3 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x0001024e2690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
  return;
}



/* Entry: 1024e2694; end: 1024e351b;  */

undefined1  [16]
FUN_1024e2694(undefined *param_1,ulong param_2,undefined *param_3,undefined *param_4)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  ulong uVar25;
  long lVar26;
  undefined1 auVar27 [16];
  ulong auStack_130 [2];
  undefined *puStack_120;
  ulong uStack_118;
  undefined *puStack_110;
  ulong *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_70;
  
  lVar7 = 0;
  uStack_118 = param_2;
  FUN_1024de864();
  lVar26 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar21 = (ulong *)((long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  auStack_130[1] = (long)puVar21 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = ((long)puVar21 - extraout_x12) - extraout_x12_00;
  uVar20 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4b940(uVar20);
  puVar17 = *(undefined **)(unaff_x20 + 0x28);
  puVar13 = *(undefined **)(unaff_x20 + 0x30);
  lVar18 = *(long *)(unaff_x20 + 0x38);
  func_0x000107c61434(puVar17);
  puStack_120 = puVar13;
  func_0x000107c61434(puVar13);
  lStack_d0 = lVar18;
  func_0x000107c61434(lVar18);
  func_0x000107c5d278(uVar20);
  puVar13 = puVar17;
  func_0x0001024e3de0();
  if ((ulong)puVar13 >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar22 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar13) {
      puVar22 = puVar13;
    }
    func_0x000107c60480();
  }
  if ((long)puVar22 < (long)uStack_118) {
    func_0x000107c6142c(lStack_d0);
    func_0x000107c6142c(puStack_120);
    func_0x000107c6142c(puVar17);
LAB_1024e3170:
    func_0x000107c6142c(puVar13);
  }
  else {
    puStack_108 = puVar21;
    puStack_e8 = puVar17;
    if (puVar22 == (undefined *)0x0) {
      func_0x000107c6142c(puVar13);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      param_3 = (undefined *)0x0;
      FUN_1024ec104(0,(ulong)puVar22 & ((long)puVar22 >> 0x3f ^ 0xffffffffffffffffU));
      if ((long)puVar22 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34c8);
        (*pcVar5)();
      }
      puVar24 = (undefined *)0x0;
      puVar14 = puStack_b8;
      do {
        if (((ulong)puVar13 & 0xc000000000000001) == 0) {
          puVar17 = *(undefined **)(puVar13 + (long)puVar24 * 8 + 0x20);
          func_0x000107c61174(puVar17);
        }
        else {
          puVar17 = puVar24;
          func_0x00010103193c(puVar24,puVar13);
        }
        FUN_1024e2384(lVar7);
        func_0x000107c61170(puVar17);
        uVar15 = *(ulong *)(puVar14 + 0x10);
        puStack_b8 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar15) {
          param_3 = (undefined *)0x1;
          FUN_1024ec104(1 < *(ulong *)(puVar14 + 0x18),uVar15 + 1);
        }
        puVar14 = puStack_b8;
        puVar24 = puVar24 + 1;
        *(ulong *)(puStack_b8 + 0x10) = uVar15 + 1;
        param_1 = puStack_b8 +
                  *(long *)(lVar26 + 0x48) * uVar15 +
                  ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff));
        FUN_1024e4170(lVar7);
        puVar17 = puStack_e8;
      } while (puVar22 != puVar24);
      func_0x000107c6142c(puVar13);
    }
    puVar13 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
    if ((ulong)puVar17 >> 0x3e == 0) {
      puVar22 = *(undefined **)(puVar13 + 0x10);
      puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar22 = puVar13;
      if ((undefined *)0x7fffffffffffffff < puVar17) {
        puVar22 = puVar17;
      }
      func_0x000107c60480();
      puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar24;
    lStack_e0 = lVar26;
    if (puVar22 != (undefined *)0x0) {
      puVar16 = param_1;
      puVar10 = (undefined *)0x0;
      puVar11 = puVar17;
      do {
        while( true ) {
          if (((ulong)puVar17 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar13 + 0x10) <= puVar10) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e2a14);
              (*pcVar5)();
            }
            puVar8 = *(undefined **)(puVar11 + (long)puVar10 * 8 + 0x20);
            func_0x000107c61174();
            param_1 = puVar16;
          }
          else {
            puVar8 = puVar10;
            param_1 = puVar11;
            func_0x00010103193c();
          }
          if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e2a10);
            (*pcVar5)();
          }
          puVar23 = puVar10 + 1;
          func_0x000107c61174();
          puVar9 = puVar8;
          func_0x000107c5d984();
          func_0x000107c61180();
          if (puVar9 == (undefined *)0x0) break;
          puVar10 = puVar9;
          func_0x000107c5faec();
          puVar16 = param_1;
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar9);
          puVar11 = puVar24;
          func_0x000107c61558();
          puVar8 = puVar24;
          if (((ulong)puVar11 & 1) == 0) {
            puVar16 = (undefined *)(*(long *)(puVar24 + 0x10) + 1);
            puVar8 = (undefined *)0x0;
            param_3 = (undefined *)0x1;
            func_0x0001000d182c();
            param_4 = puVar24;
          }
          uVar15 = *(ulong *)(puVar8 + 0x10);
          puVar24 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
            puVar24 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            param_3 = (undefined *)0x1;
            puVar16 = (undefined *)(uVar15 + 1);
            func_0x0001000d182c();
            param_4 = puVar8;
          }
          *(undefined **)(puVar24 + 0x10) = (undefined *)(uVar15 + 1);
          *(undefined **)(puVar24 + uVar15 * 0x10 + 0x20) = puVar10;
          *(undefined **)(puVar24 + uVar15 * 0x10 + 0x28) = param_1;
          param_1 = puVar16;
          puVar10 = puVar23;
          puVar11 = puStack_e8;
          if (puVar23 == puVar22) goto LAB_1024e2a4c;
        }
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar8);
        puVar16 = param_1;
        puVar10 = puVar10 + 1;
      } while (puVar23 != puVar22);
    }
LAB_1024e2a4c:
    puVar22 = puVar24;
    func_0x000100403a6c();
    func_0x000107c6142c(puVar24);
    puVar13 = puStack_120;
    puVar17 = (undefined *)((ulong)puStack_120 & 0xffffffffffffff8);
    if ((ulong)puStack_120 >> 0x3e == 0) {
      puVar24 = *(undefined **)(puVar17 + 0x10);
    }
    else {
      puVar24 = puVar17;
      if ((undefined *)0x7fffffffffffffff < puStack_120) {
        puVar24 = puStack_120;
      }
      func_0x000107c60480();
    }
    lVar7 = lStack_e0;
    func_0x000107c61434(puVar13);
    if (puVar24 != (undefined *)0x0) {
      puVar16 = (undefined *)0x0;
      uStack_f8 = (ulong)puVar13 & 0xc000000000000001;
      puStack_100 = puVar13 + 0x20;
      lStack_d8 = lStack_d0 + 0x38;
      puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puStack_110 = puVar17;
LAB_1024e2ae0:
      if (uStack_f8 == 0) {
        if (*(undefined **)(puVar17 + 0x10) <= puVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e2f0c);
          (*pcVar5)();
        }
        puVar13 = *(undefined **)(puStack_100 + (long)puVar16 * 8);
        func_0x000107c61174();
      }
      else {
        puVar13 = puVar16;
        param_1 = puStack_120;
        func_0x00010103193c();
      }
      bVar6 = SCARRY8((long)puVar16,1);
      puVar16 = puVar16 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e2f08);
        (*pcVar5)();
      }
      puVar11 = puVar13;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar10 = param_1;
      if (puVar11 == (undefined *)0x0) {
LAB_1024e2cd4:
        func_0x000107c61170(puVar13);
        param_1 = puVar10;
      }
      else {
        puVar8 = puVar11;
        func_0x000107c5faec();
        puVar10 = param_1;
        func_0x000107c61170(puVar11);
        uVar15 = (ulong)puVar8 & 0xffffffffffff;
        if (((ulong)param_1 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)param_1 >> 0x38 & 0xf;
        }
        if (uVar15 != 0) {
          if (*(long *)(puVar22 + 0x10) != 0) {
            func_0x000107c6068c(&puStack_b8,*(undefined8 *)(puVar22 + 0x28));
            ppuVar12 = &puStack_b8;
            puVar10 = puVar8;
            param_3 = param_1;
            func_0x000107c5fb58();
            func_0x000107c606a8();
            uVar15 = -1L << ((ulong)(byte)puVar22[0x20] & 0x3f);
            uVar19 = (ulong)ppuVar12 & (uVar15 ^ 0xffffffffffffffff);
            if ((*(ulong *)(puVar22 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0) {
              do {
                plVar1 = (long *)(*(long *)(puVar22 + 0x30) + uVar19 * 0x10);
                puVar17 = (undefined *)*plVar1;
                puVar10 = (undefined *)plVar1[1];
                if ((puVar17 == puVar8 && puVar10 == param_1) ||
                   (param_3 = puVar8, param_4 = param_1, func_0x000107c605b8(),
                   ((ulong)puVar17 & 1) != 0)) goto LAB_1024e2cdc;
                uVar19 = uVar19 + 1 & ~uVar15;
              } while ((*(ulong *)(puVar22 + (uVar19 >> 6) * 8 + 0x38) >> (uVar19 & 0x3f) & 1) != 0)
              ;
            }
          }
          lVar7 = lStack_d0;
          if (*(long *)(lStack_d0 + 0x10) != 0) {
            func_0x000107c6068c(&puStack_b8,*(undefined8 *)(lStack_d0 + 0x28));
            ppuVar12 = &puStack_b8;
            puVar10 = puVar8;
            param_3 = param_1;
            func_0x000107c5fb58();
            func_0x000107c606a8();
            uVar15 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
            uVar19 = (ulong)ppuVar12 & (uVar15 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lStack_d8 + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0) {
              do {
                plVar1 = (long *)(*(long *)(lStack_d0 + 0x30) + uVar19 * 0x10);
                puVar17 = (undefined *)*plVar1;
                puVar10 = (undefined *)plVar1[1];
                if ((puVar17 == puVar8 && puVar10 == param_1) ||
                   (param_3 = puVar8, param_4 = param_1, func_0x000107c605b8(),
                   ((ulong)puVar17 & 1) != 0)) goto LAB_1024e2cdc;
                uVar19 = uVar19 + 1 & ~uVar15;
              } while ((*(ulong *)(lStack_d8 + (uVar19 >> 6) * 8) >> (uVar19 & 0x3f) & 1) != 0);
            }
          }
          func_0x000107c6142c(param_1);
          puVar11 = puVar13;
          func_0x000107c49ac4();
          lVar7 = lStack_e0;
          puVar17 = puStack_110;
          if ((int)puVar11 == 0) {
            puVar11 = puVar13;
            func_0x000107c452e8();
            func_0x000107c61180();
            if (puVar11 != (undefined *)0x0) {
              puVar8 = puVar11;
              func_0x000107c49dec();
              func_0x000107c61170(puVar11);
              if (((ulong)puVar8 & 1) != 0) goto LAB_1024e2cd4;
            }
            puVar8 = puVar13;
            func_0x000107c439a8();
            func_0x000107c61180();
            puVar11 = puStack_f0;
            if (puVar8 == (undefined *)0x0) {
              puVar17 = puStack_f0;
              func_0x000107c61558();
              puStack_70 = puVar11;
              if (((ulong)puVar17 & 1) == 0) {
                puVar10 = (undefined *)(*(long *)(puVar11 + 0x10) + 1);
                param_3 = (undefined *)0x1;
                func_0x0001010673e4(0);
              }
              uVar15 = *(ulong *)(puStack_70 + 0x10);
              if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar15) {
                param_3 = (undefined *)0x1;
                puVar10 = (undefined *)(uVar15 + 1);
                func_0x0001010673e4(1 < *(ulong *)(puStack_70 + 0x18));
              }
              *(undefined **)(puStack_70 + 0x10) = (undefined *)(uVar15 + 1);
              *(undefined **)(puStack_70 + uVar15 * 8 + 0x20) = puVar13;
              param_1 = puVar10;
              puVar17 = puStack_110;
              puStack_f0 = puStack_70;
              goto joined_r0x0001024e2d78;
            }
            func_0x000107c61170(puVar13);
            puVar13 = puVar8;
          }
          goto LAB_1024e2cd4;
        }
        func_0x000107c61170(puVar13);
        func_0x000107c6142c(param_1);
        param_1 = puVar10;
        lVar7 = lStack_e0;
      }
      goto joined_r0x0001024e2d78;
    }
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1024e2db8:
    func_0x000107c6142c(puVar22);
    func_0x000107c6142c(lStack_d0);
    func_0x000107c6142c(puStack_e8);
    func_0x000107c61430(puStack_120,2);
    puVar17 = puStack_f0;
    if (((long)puStack_f0 < 0) || (((ulong)puStack_f0 >> 0x3e & 1) != 0)) {
      puVar13 = puStack_f0;
      func_0x000107c60480();
      if (puVar13 == (undefined *)0x0) goto LAB_1024e2f38;
LAB_1024e2df4:
      puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      param_3 = (undefined *)0x0;
      FUN_1024ec104(0,(ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU));
      uVar15 = auStack_130[1];
      if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34cc);
        (*pcVar5)();
      }
      puVar24 = (undefined *)0x0;
      puVar16 = puVar17;
      puVar22 = puStack_b8;
      do {
        if (((ulong)puVar17 & 0xc000000000000001) == 0) {
          puVar16 = *(undefined **)(puVar16 + (long)puVar24 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar16 = puVar24;
          func_0x00010103193c();
        }
        puVar10 = puVar16;
        func_0x000107c452e8();
        func_0x000107c61180();
        if (puVar10 != (undefined *)0x0) {
          func_0x000107c61170();
        }
        FUN_1024e2384(uVar15,puVar16,puVar10 == (undefined *)0x0);
        func_0x000107c61170(puVar16);
        uVar19 = *(ulong *)(puVar22 + 0x10);
        puStack_b8 = puVar22;
        if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar19) {
          param_3 = (undefined *)0x1;
          FUN_1024ec104(1 < *(ulong *)(puVar22 + 0x18),uVar19 + 1);
        }
        puVar22 = puStack_b8;
        puVar24 = puVar24 + 1;
        *(ulong *)(puStack_b8 + 0x10) = uVar19 + 1;
        FUN_1024e4170(uVar15,puStack_b8 +
                             *(long *)(lVar7 + 0x48) * uVar19 +
                             ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff)));
        puVar16 = puStack_f0;
      } while (puVar13 != puVar24);
      func_0x000107c61574(puStack_f0);
    }
    else {
      puVar13 = *(undefined **)(puStack_f0 + 0x10);
      if (puVar13 != (undefined *)0x0) goto LAB_1024e2df4;
LAB_1024e2f38:
      func_0x000107c61574();
      puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    puVar13 = (undefined *)(uStack_118 & ((long)uStack_118 >> 0x3f ^ 0xffffffffffffffffU));
    puVar17 = puVar14;
    FUN_1024e4cbc(puVar13,puVar14);
    if (((ulong)param_4 & 1) == 0) {
      func_0x000107c61434(puVar14);
LAB_1024e2f74:
      puVar24 = puVar13;
      FUN_1024ec3b8(puVar13,puVar17);
      puVar16 = param_3;
      puVar10 = param_4;
LAB_1024e3010:
      func_0x000107c615e8(puVar13);
      puVar17 = puVar24;
    }
    else {
      uVar20 = 0;
      puVar16 = param_3;
      puVar10 = param_4;
      func_0x000107c605fc(0);
      func_0x000107c615f4(puVar13,2);
      func_0x000107c61434(puVar14);
      puVar24 = puVar13;
      func_0x000107c61480(puVar13,uVar20);
      if (puVar24 == (undefined *)0x0) {
        func_0x000107c615e8(puVar13);
        puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar18 = *(long *)(puVar24 + 0x10);
      func_0x000107c61574();
      if (SBORROW8((ulong)param_4 >> 1,(long)param_3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34d0);
        (*pcVar5)();
      }
      if (lVar18 != ((ulong)param_4 >> 1) - (long)param_3) {
        func_0x000107c615e8();
        goto LAB_1024e2f74;
      }
      puVar17 = puVar13;
      func_0x000107c61480(puVar13,uVar20);
      func_0x000107c615e8(puVar13);
      puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar17 == (undefined *)0x0) goto LAB_1024e3010;
    }
    puVar24 = *(undefined **)(puVar17 + 0x10);
    puVar13 = (undefined *)0x0;
    if (puVar24 < (undefined *)0x4) {
      puVar13 = (undefined *)(4 - (long)puVar24);
    }
    puVar11 = puVar22;
    FUN_1024e4cbc(puVar13,puVar22);
    if (((ulong)puVar10 & 1) == 0) {
      func_0x000107c61434(puVar22);
LAB_1024e3050:
      puVar8 = puVar13;
      FUN_1024ec3b8(puVar13,puVar11);
      puVar9 = puVar16;
      puVar23 = puVar10;
LAB_1024e30f0:
      func_0x000107c615e8(puVar13);
      puVar16 = puVar8;
    }
    else {
      uVar20 = 0;
      puVar9 = puVar16;
      puVar23 = puVar10;
      func_0x000107c605fc(0);
      func_0x000107c615f4(puVar13,2);
      func_0x000107c61434(puVar22);
      puVar8 = puVar13;
      func_0x000107c61480(puVar13,uVar20);
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c615e8(puVar13);
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar7 = *(long *)(puVar8 + 0x10);
      func_0x000107c61574();
      if (SBORROW8((ulong)puVar10 >> 1,(long)puVar16)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34d4);
        (*pcVar5)();
      }
      if (lVar7 != ((ulong)puVar10 >> 1) - (long)puVar16) {
        func_0x000107c615e8();
        lVar7 = lStack_e0;
        goto LAB_1024e3050;
      }
      puVar16 = puVar13;
      func_0x000107c61480(puVar13,uVar20);
      func_0x000107c615e8(puVar13);
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar7 = lStack_e0;
      if (puVar16 == (undefined *)0x0) goto LAB_1024e30f0;
    }
    puStack_b8 = puVar17;
    func_0x000107c6157c(puVar17);
    func_0x000107c6157c(puVar16);
    FUN_1024e3808();
    puVar13 = puStack_b8;
    uVar15 = *(ulong *)(puStack_b8 + 0x10);
    func_0x000107c61574(puVar17);
    if (uVar15 < 4) {
      func_0x000107c6142c(puVar14);
      func_0x000107c6142c(puVar22);
      func_0x000107c61574(puVar16);
      goto LAB_1024e3170;
    }
    FUN_1024e351c(puVar24,puVar14);
    if (((ulong)puVar23 & 1) == 0) {
LAB_1024e3140:
      puVar11 = puVar24;
      FUN_1024ec3b8();
      puVar14 = puVar9;
      puVar10 = puVar23;
LAB_1024e3224:
      puVar21 = puStack_108;
      func_0x000107c615e8(puVar24);
      puVar17 = puVar11;
    }
    else {
      uVar20 = 0;
      puVar14 = puVar9;
      puVar10 = puVar23;
      func_0x000107c605fc(0);
      puVar17 = puVar24;
      func_0x000107c615f4(puVar24,2);
      func_0x000107c61480();
      if (puVar17 == (undefined *)0x0) {
        func_0x000107c615e8(puVar24);
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar18 = *(long *)(puVar17 + 0x10);
      func_0x000107c61574();
      if (SBORROW8((ulong)puVar23 >> 1,(long)puVar9)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34ec);
        (*pcVar5)();
      }
      if (lVar18 != ((ulong)puVar23 >> 1) - (long)puVar9) {
        func_0x000107c615e8();
        goto LAB_1024e3140;
      }
      puVar17 = puVar24;
      func_0x000107c61480(puVar24,uVar20);
      func_0x000107c615e8(puVar24);
      puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar21 = puStack_108;
      if (puVar17 == (undefined *)0x0) goto LAB_1024e3224;
    }
    puVar24 = *(undefined **)(puVar16 + 0x10);
    func_0x000107c61574(puVar16);
    FUN_1024e351c(puVar24,puVar22);
    if (((ulong)puVar10 & 1) == 0) {
LAB_1024e324c:
      puVar14 = puVar24;
      FUN_1024ec3b8(puVar24);
LAB_1024e32e0:
      func_0x000107c615e8(puVar24);
      puVar22 = puVar14;
    }
    else {
      uVar20 = 0;
      func_0x000107c605fc(0);
      puVar22 = puVar24;
      func_0x000107c615f4(puVar24,2);
      func_0x000107c61480();
      if (puVar22 == (undefined *)0x0) {
        func_0x000107c615e8(puVar24);
        puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      lVar18 = *(long *)(puVar22 + 0x10);
      func_0x000107c61574();
      if (SBORROW8((ulong)puVar10 >> 1,(long)puVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34f0);
        (*pcVar5)();
      }
      if (lVar18 != ((ulong)puVar10 >> 1) - (long)puVar14) {
        func_0x000107c615e8();
        puVar21 = puStack_108;
        goto LAB_1024e324c;
      }
      puVar22 = puVar24;
      func_0x000107c61480(puVar24,uVar20);
      func_0x000107c615e8(puVar24);
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar21 = puStack_108;
      if (puVar22 == (undefined *)0x0) goto LAB_1024e32e0;
    }
    puStack_b8 = puVar17;
    FUN_1024e3808(puVar22);
    puVar17 = puStack_b8;
    puStack_70 = PTR___swiftEmptySetSingleton_11034f1d8;
    puStack_b8 = puVar13;
    FUN_1024e3808(puVar17);
    puVar13 = puStack_b8;
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar15 = *(ulong *)(puStack_b8 + 0x10);
    if (uVar15 != 0) {
      uVar19 = 0;
      do {
        if (*(ulong *)(puVar13 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e34c4);
          (*pcVar5)();
        }
        uVar25 = (ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff);
        lVar7 = *(long *)(lVar7 + 0x48);
        func_0x0001024e1440(puVar13 + lVar7 * uVar19 + uVar25,puVar21);
        uVar2 = *puVar21;
        uVar4 = puVar21[1];
        uVar3 = uVar2 & 0xffffffffffff;
        if ((uVar4 & 0x2000000000000000) != 0) {
          uVar3 = uVar4 >> 0x38 & 0xf;
        }
        if (uVar3 == 0) {
LAB_1024e332c:
          puVar21 = puStack_108;
          func_0x0001024e41b4(puStack_108);
        }
        else {
          func_0x000107c61434(uVar4);
          ppuVar12 = &puStack_b8;
          func_0x000100403b00(ppuVar12,uVar2,uVar4);
          func_0x000107c6142c(uStack_b0);
          if (((ulong)ppuVar12 & 1) == 0) goto LAB_1024e332c;
          puVar22 = puVar17;
          func_0x000107c61558();
          if (((ulong)puVar22 & 1) == 0) {
            FUN_1024ec104(0,*(long *)(puVar17 + 0x10) + 1,1);
          }
          uVar3 = *(ulong *)(puVar17 + 0x10);
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar3) {
            FUN_1024ec104(1 < *(ulong *)(puVar17 + 0x18),uVar3 + 1,1);
          }
          puVar21 = puStack_108;
          *(ulong *)(puVar17 + 0x10) = uVar3 + 1;
          FUN_1024e4170(puStack_108,puVar17 + uVar3 * lVar7 + uVar25);
        }
        uVar19 = uVar19 + 1;
        lVar7 = lStack_e0;
      } while (uVar15 != uVar19);
    }
    func_0x000107c6142c(puVar13);
    uVar15 = *(ulong *)(puVar17 + 0x10);
    puVar13 = puVar17;
    if (uVar15 < 5) {
      func_0x000107c6157c(puVar17);
    }
    else {
      func_0x000107c6157c();
      FUN_1024ec3b8();
      func_0x000107c61574(puVar17);
      uVar15 = *(ulong *)(puVar13 + 0x10);
    }
    func_0x000107c6142c(puStack_70);
    if (3 < uVar15) goto LAB_1024e317c;
    func_0x000107c61574(puVar17);
    func_0x000107c61574(puVar13);
  }
  puVar13 = (undefined *)0x0;
  puVar17 = (undefined *)0x0;
LAB_1024e317c:
  auVar27._8_8_ = puVar17;
  auVar27._0_8_ = puVar13;
  return auVar27;
LAB_1024e2cdc:
  func_0x000107c61170(puVar13);
  func_0x000107c6142c(param_1);
  param_1 = puVar10;
  puVar17 = puStack_110;
  lVar7 = lStack_e0;
joined_r0x0001024e2d78:
  if (puVar16 == puVar24) goto LAB_1024e2db8;
  goto LAB_1024e2ae0;
}



/* Entry: 1024e351c; end: 1024e3587;  */

undefined8 FUN_1024e351c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    FUN_1024de864();
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e3588);
  (*pcVar1)();
}



/* Entry: 1024e3588; end: 1024e3717;  */

long FUN_1024e3588(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar2 = &UNK_110517548;
  func_0x000107c613fc(&UNK_110517548,0x18,7);
  plVar9 = (long *)(puVar2 + 0x10);
  *plVar9 = 0;
  puVar3 = &UNK_110517570;
  func_0x000107c613fc(&UNK_110517570,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_110517598;
  func_0x000107c613fc(&UNK_110517598,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  lVar5 = 0;
  FUN_1024df708();
  func_0x000107c613fc();
  *(code **)(lVar5 + 0x10) = FUN_1024e37e0;
  *(undefined **)(lVar5 + 0x18) = puVar4;
  func_0x000107c61428(plVar9,auStack_68,1,0);
  *plVar9 = lVar5;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c6157c(puVar2);
  func_0x000107c4b940(uVar8);
  lVar10 = *plVar9;
  if (lVar10 != 0) {
    puVar3 = &UNK_1105175c0;
    func_0x000107c613fc(&UNK_1105175c0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    func_0x000107c61428(unaff_x20 + 0x60,auStack_80,0x21,0);
    func_0x000107c6157c(param_2);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
    func_0x000107c61558(uVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
    *(undefined8 *)(unaff_x20 + 0x60) = 0x8000000000000000;
    FUN_1024ed19c(FUN_1024e37e8,puVar3,lVar10,uVar6);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar7;
    func_0x000107c614a8(auStack_80);
    func_0x000107c5d278(uVar8);
    func_0x000107c61574(puVar2);
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e3718);
  (*pcVar1)();
}



/* Entry: 1024e3718; end: 1024e37df;  */

void FUN_1024e3718(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c4b940(*(undefined8 *)(param_1 + 0x58));
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e37e0);
      (*pcVar1)();
    }
    puVar2 = auStack_78;
    func_0x000107c61428(param_1 + 0x60,puVar2,0x21,0);
    FUN_1024e3918(lVar3);
    func_0x000107c614a8(auStack_78);
    FUN_1024e39a8(lVar3,puVar2);
    func_0x000107c5d278(*(undefined8 *)(param_1 + 0x58));
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1024e37e0; end: 1024e37e7;  */

void FUN_1024e37e0(void)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar2 + 0x58));
    func_0x000107c61428(lVar4 + 0x10,auStack_60,0,0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e37e0);
      (*pcVar1)();
    }
    puVar3 = auStack_78;
    func_0x000107c61428(lVar2 + 0x60,puVar3,0x21,0);
    FUN_1024e3918(lVar4);
    func_0x000107c614a8(auStack_78);
    FUN_1024e39a8(lVar4,puVar3);
    func_0x000107c5d278(*(undefined8 *)(lVar2 + 0x58));
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1024e37e8; end: 1024e3807;  */

void FUN_1024e37e8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024e3808; end: 1024e3917;  */

void FUN_1024e3808(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar3 = *unaff_x20;
  lVar5 = *(long *)(lVar3 + 0x10);
  if (SCARRY8(lVar5,uVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e390c);
    (*pcVar1)();
  }
  lVar6 = lVar3;
  func_0x000107c61558();
  if (((int)lVar6 == 0) ||
     (uVar2 = *(ulong *)(lVar3 + 0x18) >> 1, (long)uVar2 < (long)(lVar5 + uVar4))) {
    FUN_1024e80b0();
    uVar2 = *(ulong *)(lVar6 + 0x18) >> 1;
    lVar5 = *(long *)(param_1 + 0x10);
    lVar3 = lVar6;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x10);
  }
  if (lVar5 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e3910);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *(long *)(lVar3 + 0x10);
    lVar5 = 0;
    FUN_1024de864();
    if (uVar2 - lVar6 < uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e3914);
      (*pcVar1)();
    }
    uVar2 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar2 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
    func_0x000107c6140c(lVar3 + uVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * lVar6,
                        param_1 + uVar2,uVar4,lVar5);
    func_0x000107c6142c(param_1);
    if (uVar4 != 0) {
      if (SCARRY8(*(long *)(lVar3 + 0x10),uVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e3918);
        (*pcVar1)();
      }
      *(ulong *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + uVar4;
    }
  }
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 1024e3918; end: 1024e39a7;  */

undefined1  [16] FUN_1024e3918(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  func_0x0001000a7158();
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1024ed6b0();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_1024e39b8(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1024e39a8; end: 1024e39b7;  */

void FUN_1024e39a8(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1024e39b8; end: 1024e40eb;  */

void FUN_1024e39b8(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      puVar2 = (undefined8 *)(lVar4 + uVar8 * 8);
      func_0x000107c60688(uVar7,*puVar2);
      uVar7 = uVar7 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar7 || (long)uVar7 <= (long)param_1) {
LAB_1024e3a80:
          puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar2 + 1 <= puVar3 || param_1 != uVar8)) {
            *puVar3 = *puVar2;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x10);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x10);
          if (((long)param_1 < (long)uVar8) || (puVar3 + 2 <= puVar2 || param_1 != uVar8)) {
            uVar10 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar10;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar7 && (long)uVar7 <= (long)param_1) goto LAB_1024e3a80;
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e3b24);
  (*pcVar5)();
}



/* Entry: 1024e40ec; end: 1024e411f;  */

void FUN_1024e40ec(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined *apuStack_48 [3];
  
  apuStack_48[0] = (undefined *)0x0;
  uVar2 = 0;
  FUN_1024e4120(0,0x112d4ed88,&PTR_PTR_1126b15c8);
  func_0x000107c5fc50(param_1,apuStack_48,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (apuStack_48[0] != (undefined *)0x0) {
    puVar1 = apuStack_48[0];
  }
  func_0x000107c61428(unaff_x20 + 0x10,apuStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    func_0x000107c6142c(puVar1);
  }
  else {
    func_0x000107c4b940(*(undefined8 *)(lVar3 + 0x20));
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined **)(lVar3 + 0x28) = puVar1;
    func_0x000107c61434(puVar1);
    func_0x000107c6142c(uVar2);
    func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x20));
    FUN_1024e1d58();
    func_0x000107c6142c(puVar1);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1024e4120; end: 1024e415f;  */

void FUN_1024e4120(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1024e4160; end: 1024e416f;  */

void FUN_1024e4160(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1024e4170; end: 1024e41ef;  */

undefined8 FUN_1024e4170(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1024de864();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1024e41f0; end: 1024e43c3;  */

void FUN_1024e41f0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = param_1;
  func_0x000107c40328();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x000107c5c3fc();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar6 = uVar1;
      func_0x000107c5c3dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar1);
      if (uVar6 != 0) {
        uVar1 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        uVar1 = uVar1 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar1 = param_2 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          return;
        }
        func_0x000107c6142c(param_2);
      }
    }
    func_0x000107c452e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c3d888();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (uVar1 != 0) {
        uVar6 = uVar1;
        func_0x000107c5faec();
        func_0x000107c61170(uVar1);
        uVar1 = uVar6 & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar1 = param_2 >> 0x38 & 0xf;
        }
        if (uVar1 == 0) {
          func_0x000107c6142c(param_2);
        }
      }
    }
  }
  else {
    func_0x000107c61170();
    lVar2 = -0x2fffffffffffffea;
    func_0x000107c5fadc(0xd000000000000016,0x800000010f0a6c70);
    uVar3 = 0xd000000000000015;
    func_0x000107c5fadc(0xd000000000000015,0x800000010f0a6c00);
    uVar4 = 0;
    func_0x000107c5fe40(0);
    lVar5 = lVar2;
    func_0x0001000f6108(lVar2,uVar3,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    if (lVar5 != 0) {
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 1024e43c4; end: 1024e43db;  */

void FUN_1024e43c4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024e43dc; end: 1024e452f;  */

/* WARNING: Possible PIC construction at 0x0001024e4498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e44a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e44ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e44fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e44ac) */
/* WARNING: Removing unreachable block (ram,0x0001024e4500) */
/* WARNING: Removing unreachable block (ram,0x0001024e44b4) */
/* WARNING: Removing unreachable block (ram,0x0001024e452c) */
/* WARNING: Removing unreachable block (ram,0x0001024e44dc) */
/* WARNING: Removing unreachable block (ram,0x0001024e449c) */
/* WARNING: Removing unreachable block (ram,0x0001024e44f0) */

void FUN_1024e43dc(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126c5820;
  func_0x000107c61168();
  func_0x000107c3d588();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c5fadc(0x656372756f73,0xe600000000000000);
    uVar1 = 0x646e756f6274756f;
    if (param_1 != '\x01') {
      uVar1 = 0x646e756f626e69;
    }
    uVar2 = 0xe800000000000000;
    if (param_1 != '\x01') {
      uVar2 = 0xe700000000000000;
    }
    func_0x000107c5fadc(uVar1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c5e508(puVar3);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 1024e4530; end: 1024e45db;  */

/* WARNING: Possible PIC construction at 0x0001024e45a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e45b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e45a4) */

void FUN_1024e4530(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126c5820;
  func_0x000107c61168();
  func_0x000107c3e408();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    puVar2 = puVar3;
    func_0x000107c43a24();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e45dc);
      (*pcVar1)();
    }
    func_0x000107c45314();
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1024e45dc; end: 1024e47af;  */

/* WARNING: Possible PIC construction at 0x0001024e4718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e4728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e476c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e477c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e472c) */
/* WARNING: Removing unreachable block (ram,0x0001024e4780) */
/* WARNING: Removing unreachable block (ram,0x0001024e4734) */
/* WARNING: Removing unreachable block (ram,0x0001024e47ac) */
/* WARNING: Removing unreachable block (ram,0x0001024e475c) */
/* WARNING: Removing unreachable block (ram,0x0001024e471c) */
/* WARNING: Removing unreachable block (ram,0x0001024e4770) */

void FUN_1024e45dc(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR_PTR_1126c5820;
  func_0x000107c61168();
  func_0x000107c3e40c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    return;
  }
  func_0x000107c5fadc(0x6e6f73616572,0xe600000000000000);
  uVar5 = 0x636165725f706163;
  uVar1 = 0xeb00000000646568;
  if (param_1 != 3) {
    uVar5 = 0xd000000000000011;
    uVar1 = 0x800000010f0a6c90;
  }
  uVar2 = 0xeb00000000726564;
  uVar3 = 0x69766f72705f6f6e;
  if (param_1 != 2) {
    uVar2 = uVar1;
    uVar3 = uVar5;
  }
  uVar5 = 0xeb0000000064656c;
  uVar1 = 0x62616e655f746f6e;
  if (param_1 != 0) {
    uVar5 = 0xee007473696c7961;
    uVar1 = 0x6c705f7974706d65;
  }
  if (param_1 < 2) {
    uVar2 = uVar5;
    uVar3 = uVar1;
  }
  func_0x000107c5fadc(uVar3,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5e508(puVar4);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1024e47b0; end: 1024e49b3;  */

/* WARNING: Possible PIC construction at 0x0001024e4820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e4830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e4824) */

void FUN_1024e47b0(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR_PTR_1126c5820;
  func_0x000107c61168();
  func_0x000107c5b114();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  puVar3 = *(undefined **)(unaff_x20 + 0x10);
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61174();
    func_0x000107c61174(puVar2);
    puVar2 = puVar3;
    func_0x000107c43a24();
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e485c);
      (*pcVar1)();
    }
    func_0x000107c45314();
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1024e49b4; end: 1024e49f7;  */

void FUN_1024e49b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024e49f8; end: 1024e4a27;  */

void FUN_1024e49f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1024e4a28; end: 1024e4a2f; -[SCFriendingInterstitialLayer type] */

undefined8 FUN_1024e4a28(void)

{
  return 0x19;
}



/* Entry: 1024e4a30; end: 1024e4a47; -[SCFriendingInterstitialLayer layerViewControllerClass] */

void FUN_1024e4a30(void)

{
  FUN_1024ea990(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1024e4a48; end: 1024e4a4f; -[SCFriendingInterstitialLayer layerContentType] */

undefined8 FUN_1024e4a48(void)

{
  return 1;
}



/* Entry: 1024e4a50; end: 1024e4b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1024e4a50(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar2 = &lStack_58;
    func_0x000107c6147c(plVar2,auStack_50,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar1 = *(long *)(unaff_x20 + _DAT_112ea1b00);
      if (lVar1 == *(long *)(lStack_58 + _DAT_112ea1b00) &&
          ((long *)(unaff_x20 + _DAT_112ea1b00))[1] == ((long *)(lStack_58 + _DAT_112ea1b00))[1]) {
        func_0x000107c61170(lStack_58);
        uVar3 = 1;
      }
      else {
        func_0x000107c605b8();
        uVar3 = (uint)lVar1;
        func_0x000107c61170(lStack_58);
      }
      goto LAB_1024e4af8;
    }
  }
  uVar3 = 0;
LAB_1024e4af8:
  return uVar3 & 1;
}



/* Entry: 1024e4b20; end: 1024e4b9f; -[SCFriendingInterstitialLayer isEqual:] */

uint FUN_1024e4b20(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_1024e4a50(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1024e4ba0; end: 1024e4bff; -[SCFriendingInterstitialLayer init] */

void FUN_1024e4ba0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendingInterstitialOperaPlugin.FriendingInterstitialLayer",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e4bcc);
  (*pcVar1)();
}



/* Entry: 1024e4c00; end: 1024e4c9b; -[SCFriendingInterstitialLayer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024e4c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e4c68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e4c44) */
/* WARNING: Removing unreachable block (ram,0x0001024e4c6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e4c00(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1b00 + 8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ea1b08));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ea1b10));
  return;
}



/* Entry: 1024e4c9c; end: 1024e4cbb;  */

void FUN_1024e4c9c(void)

{
  func_0x000107c61168(&PTR_PTR_1128495d0);
  return;
}



/* Entry: 1024e4cbc; end: 1024e4d2b;  */

undefined8 FUN_1024e4cbc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    FUN_1024de864();
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e4d2c);
  (*pcVar1)();
}



/* Entry: 1024e4d2c; end: 1024e4e83;  */

undefined * FUN_1024e4d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0x33);
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c61170(puVar1);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 1024e4e84; end: 1024e508b;  */

undefined * FUN_1024e4e84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5af9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = puVar2;
    func_0x000107c45154();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c55260(puVar1,param_2,puVar5,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e34(puVar1,param_2,puVar3,0);
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
    func_0x000107c5c600(0x402e000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_110345c48);
    func_0x000107c61180();
    func_0x000107c54adc(puVar3,param_2,puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61174(puVar1);
  func_0x000107c5af88(puVar2,param_2,0x18);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4036000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c53810(0,0x4032000000000000,0,0x4036000000000000,puVar1);
  func_0x000107c55268(0,0xc010000000000000,0,0x4010000000000000,puVar1);
  func_0x000107c59e38(0,0x4010000000000000,0,0xc010000000000000,puVar1);
  func_0x000107c5a050(puVar1,param_2,0);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1024e508c; end: 1024e5173;  */

undefined * FUN_1024e508c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fd3333333333333);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c52b50(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x3fe0000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  func_0x000107c550d8(puVar1,param_2,1);
  return puVar1;
}



/* Entry: 1024e5174; end: 1024e54e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024e5174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112ea1b88;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined **)(unaff_x20 + _DAT_112ea1b90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1b98) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea1ba0);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar1 = _DAT_112ea1ba8;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4018000000000000,puVar3);
  func_0x000107c52610(puVar3);
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ea1bb0;
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112ea1bb8;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  puVar5 = puVar4;
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar5);
  puVar5 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ea1bc0;
  FUN_1024e4d2c();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112ea1bc8;
  func_0x0001024e4dd8();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112ea1bd0;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4030000000000000,puVar3);
  func_0x000107c54280(puVar3);
  func_0x000107c5a050(puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ea1bd8;
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4030000000000000,puVar3);
  func_0x000107c54280(puVar3);
  puVar5 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ea1be0;
  FUN_1024e4e84();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1be8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1bf0) = 0;
  lVar1 = _DAT_112ea1bf8;
  FUN_1024e508c();
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112ea1c00;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5e2ac(puVar4);
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1c08) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1024e54e8();
  func_0x000107c61170(puVar6);
  return puVar6;
}



/* Entry: 1024e54e8; end: 1024e6217;  */

/* WARNING: Possible PIC construction at 0x0001024e5534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e55b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e55c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e55dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5644: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e56d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e56e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e56f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e578c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e58e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e590c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e59bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e59f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5a3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5bd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5c88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e5ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e6054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e60ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e6100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e6140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e6184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e61a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e6188) */
/* WARNING: Removing unreachable block (ram,0x0001024e6144) */
/* WARNING: Removing unreachable block (ram,0x0001024e6104) */
/* WARNING: Removing unreachable block (ram,0x0001024e60b0) */
/* WARNING: Removing unreachable block (ram,0x0001024e6058) */
/* WARNING: Removing unreachable block (ram,0x0001024e5ffc) */
/* WARNING: Removing unreachable block (ram,0x0001024e5fa8) */
/* WARNING: Removing unreachable block (ram,0x0001024e5f54) */
/* WARNING: Removing unreachable block (ram,0x0001024e5efc) */
/* WARNING: Removing unreachable block (ram,0x0001024e5ea4) */
/* WARNING: Removing unreachable block (ram,0x0001024e5e48) */
/* WARNING: Removing unreachable block (ram,0x0001024e5df0) */
/* WARNING: Removing unreachable block (ram,0x0001024e5d98) */
/* WARNING: Removing unreachable block (ram,0x0001024e5d3c) */
/* WARNING: Removing unreachable block (ram,0x0001024e5ce4) */
/* WARNING: Removing unreachable block (ram,0x0001024e5c8c) */
/* WARNING: Removing unreachable block (ram,0x0001024e5c34) */
/* WARNING: Removing unreachable block (ram,0x0001024e5bdc) */
/* WARNING: Removing unreachable block (ram,0x0001024e5b84) */
/* WARNING: Removing unreachable block (ram,0x0001024e5b30) */
/* WARNING: Removing unreachable block (ram,0x0001024e5afc) */
/* WARNING: Removing unreachable block (ram,0x0001024e5abc) */
/* WARNING: Removing unreachable block (ram,0x0001024e5a64) */
/* WARNING: Removing unreachable block (ram,0x0001024e5a40) */
/* WARNING: Removing unreachable block (ram,0x0001024e59fc) */
/* WARNING: Removing unreachable block (ram,0x0001024e59c0) */
/* WARNING: Removing unreachable block (ram,0x0001024e5968) */
/* WARNING: Removing unreachable block (ram,0x0001024e5910) */
/* WARNING: Removing unreachable block (ram,0x0001024e58ec) */
/* WARNING: Removing unreachable block (ram,0x0001024e5790) */
/* WARNING: Removing unreachable block (ram,0x0001024e5778) */
/* WARNING: Removing unreachable block (ram,0x0001024e5768) */
/* WARNING: Removing unreachable block (ram,0x0001024e56fc) */
/* WARNING: Removing unreachable block (ram,0x0001024e56e8) */
/* WARNING: Removing unreachable block (ram,0x0001024e56d8) */
/* WARNING: Removing unreachable block (ram,0x0001024e566c) */
/* WARNING: Removing unreachable block (ram,0x0001024e5658) */
/* WARNING: Removing unreachable block (ram,0x0001024e5648) */
/* WARNING: Removing unreachable block (ram,0x0001024e55e0) */
/* WARNING: Removing unreachable block (ram,0x0001024e55cc) */
/* WARNING: Removing unreachable block (ram,0x0001024e55bc) */
/* WARNING: Removing unreachable block (ram,0x0001024e5538) */
/* WARNING: Removing unreachable block (ram,0x0001024e61ac) */

void FUN_1024e54e8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1024e6218; end: 1024e6237; -[_TtC32FriendingInterstitialOperaPlugin30FriendingInterstitialLayerView initWithFrame:] */

void FUN_1024e6218(void)

{
  FUN_1024e5174();
  return;
}



/* Entry: 1024e6238; end: 1024e625f; -[_TtC32FriendingInterstitialOperaPlugin30FriendingInterstitialLayerView initWithCoder:] */

void FUN_1024e6238(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1024e8818();
  return;
}



/* Entry: 1024e6260; end: 1024e6a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e6260(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  uint uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  ulong uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  lStack_d0 = param_1;
  FUN_1024de864();
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puStack_a0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c0 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  *(char *)(unaff_x20 + _DAT_112ea1b98) = (char)param_2;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea1ba0);
  uVar8 = *puVar2;
  uVar4 = puVar2[1];
  *puVar2 = param_3;
  puVar2[1] = param_4;
  uStack_b4 = param_2;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  FUN_1024e7b0c(param_3,param_4);
  func_0x0001024e1734(uVar8,uVar4);
  lVar6 = _DAT_112ea1b90;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1b90,auStack_78,1,0);
  uVar13 = *(ulong *)(unaff_x20 + lVar6);
  if (uVar13 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar14 = uVar13;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar13);
  if (uVar14 != 0) {
    uVar16 = 0;
    do {
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e64cc);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(uVar13 + uVar16 * 8 + 0x20);
        func_0x000107c61174(uVar7);
      }
      else {
        uVar7 = uVar16;
        FUN_1024e8488(uVar16,uVar13);
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e63d0);
        (*pcVar5)();
      }
      uVar17 = uVar16 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar7);
      uVar16 = uVar16 + 1;
    } while (uVar17 != uVar14);
  }
  func_0x000107c6142c(uVar13);
  uVar16 = *(ulong *)(unaff_x20 + _DAT_112ea1bd0);
  uVar13 = uVar16;
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar8 = 0;
  FUN_1024e8cb8(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar14 = uVar13;
  func_0x000107c5fc54(uVar13,uVar8);
  func_0x000107c61170(uVar13);
  lStack_d8 = lVar19;
  uStack_c8 = uVar8;
  if (uVar14 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar13 = uVar14;
    }
    func_0x000107c60480();
  }
  if (uVar13 != 0) {
    uVar7 = 0;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e64d4);
          (*pcVar5)();
        }
        uVar17 = *(ulong *)(uVar14 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar17);
      }
      else {
        uVar17 = uVar7;
        FUN_1024e8624(uVar7,uVar14,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      uVar12 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e64d0);
        (*pcVar5)();
      }
      func_0x000107c4fe94(uVar16);
      func_0x000107c4ff34(uVar17);
      func_0x000107c61170(uVar17);
      uVar7 = uVar7 + 1;
    } while (uVar12 != uVar13);
  }
  func_0x000107c6142c(uVar14);
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112ea1bd8);
  uVar13 = uVar7;
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar13);
  uStack_98 = uVar7;
  if (uVar14 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar13 = uVar14;
    }
    func_0x000107c60480();
  }
  if (uVar13 != 0) {
    uVar7 = 0;
    do {
      if ((uVar14 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e65e0);
          (*pcVar5)();
        }
        uVar17 = *(ulong *)(uVar14 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar17);
      }
      else {
        uVar17 = uVar7;
        FUN_1024e8624(uVar7,uVar14,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d360b0);
      }
      uVar12 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e65dc);
        (*pcVar5)();
      }
      func_0x000107c4fe94(uStack_98);
      func_0x000107c4ff34(uVar17);
      func_0x000107c61170(uVar17);
      uVar7 = uVar7 + 1;
    } while (uVar12 != uVar13);
  }
  func_0x000107c6142c(uVar14);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined **)(unaff_x20 + lVar6) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar8);
  lVar10 = lStack_d0;
  lVar19 = lStack_d8;
  uVar14 = *(ulong *)(lStack_d0 + 0x10);
  uVar13 = uVar14;
  if (3 < uVar14) {
    uVar13 = 4;
  }
  if (uVar14 != 0) {
    lVar18 = lStack_d0 +
             ((ulong)*(byte *)(lStack_d8 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lStack_d8 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = 0;
    FUN_1024e12dc();
    func_0x000107c614e8();
    lVar19 = *(long *)(lVar19 + 0x48);
    func_0x000107c61434(lVar10);
    puVar15 = puStack_a0;
    do {
      lVar10 = lStack_c0;
      func_0x0001024e1440(lVar18,lStack_c0);
      FUN_1024e4170(lVar10,puVar15);
      lVar10 = lVar9;
      func_0x000107c610f8();
      func_0x000107c453e4();
      FUN_1024e064c(puVar15,uStack_b4 & 1,uStack_b0,uStack_a8);
      *(undefined ***)(lVar10 + _DAT_112ea1828 + 8) = &PTR_DAT_1105176a8;
      func_0x000107c61604();
      func_0x000107c61428(unaff_x20 + lVar6,auStack_90,0x21,0);
      func_0x000107c61174();
      func_0x0001024e8030();
      uVar17 = *(ulong *)(unaff_x20 + lVar6);
      uVar12 = uVar17 & 0xffffffffffffff8;
      uVar14 = *(ulong *)(uVar12 + 0x10);
      uVar7 = uVar17;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar14) {
        uVar7 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_1024e8240(uVar7,uVar14 + 1,1,uVar17,FUN_1024ed0dc,FUN_1024e12dc);
        uVar12 = uVar7 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar14 + 1;
      *(long *)(uVar12 + uVar14 * 8 + 0x20) = lVar10;
      *(ulong *)(unaff_x20 + lVar6) = uVar7;
      func_0x000107c614a8(auStack_90);
      func_0x000107c61170(lVar10);
      puVar15 = puStack_a0;
      func_0x0001024e41b4(puStack_a0);
      lVar18 = lVar18 + lVar19;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    func_0x000107c6142c(lStack_d0);
  }
  uVar13 = *(ulong *)(unaff_x20 + lVar6);
  if (uVar13 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar14 = uVar13;
    }
    func_0x000107c60480();
  }
  uVar7 = uStack_98;
  func_0x000107c61434(uVar13);
  if (uVar14 != 0) {
    uVar17 = 0;
    do {
      if ((uVar13 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e69f8);
          (*pcVar5)();
        }
        uVar12 = *(ulong *)(uVar13 + uVar17 * 8 + 0x20);
        func_0x000107c61174(uVar12);
      }
      else {
        uVar12 = uVar17;
        FUN_1024e8488(uVar17,uVar13);
      }
      uVar1 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e69f4);
        (*pcVar5)();
      }
      uVar3 = uVar16;
      if ((uVar17 & 1) != 0) {
        uVar3 = uVar7;
      }
      func_0x000107c3d5b4(uVar3);
      func_0x000107c61170(uVar12);
      uVar17 = uVar17 + 1;
    } while (uVar1 != uVar14);
  }
  func_0x000107c6142c(uVar13);
  uVar13 = uVar16;
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar13);
  if (uVar14 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar13 = uVar14;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar14);
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  while (PTR__OBJC_CLASS___UIView_1126aec20 = puVar11, (long)uVar13 < 2) {
    func_0x000107c610f8(puVar11);
    func_0x000107c453e4();
    func_0x000107c550d8();
    func_0x000107c3d5b4(uVar16);
    func_0x000107c61170(puVar11);
    uVar13 = uVar16;
    func_0x000107c3e158();
    func_0x000107c61180();
    uVar14 = uVar13;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar13);
    if (uVar14 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar13 = uVar14;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar14);
    puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  }
  uVar13 = uVar7;
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c5fc54();
  func_0x000107c61170(uVar13);
  if (uVar14 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar14 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar14) {
      uVar13 = uVar14;
    }
    func_0x000107c60480();
  }
  func_0x000107c6142c(uVar14);
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  while ((long)uVar13 < 2) {
    PTR__OBJC_CLASS___UIView_1126aec20 = puVar11;
    func_0x000107c610f8(puVar11);
    func_0x000107c453e4();
    func_0x000107c550d8();
    func_0x000107c3d5b4(uVar7);
    func_0x000107c61170(puVar11);
    uVar13 = uVar7;
    func_0x000107c3e158();
    func_0x000107c61180();
    uVar14 = uVar13;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar13);
    if (uVar14 >> 0x3e == 0) {
      uVar13 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar13 = uVar14 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar14) {
        uVar13 = uVar14;
      }
      func_0x000107c60480();
    }
    func_0x000107c6142c(uVar14);
    puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  }
  PTR__OBJC_CLASS___UIView_1126aec20 = puVar11;
  return;
}



/* Entry: 1024e6a40; end: 1024e6cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e6a40(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea1b90;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1b90,auStack_48,0,0);
  uVar4 = *(ulong *)(unaff_x20 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar3 = uVar4;
    }
    func_0x000107c60480();
  }
  if ((long)param_1 < (long)uVar3) {
    func_0x000107c61428(unaff_x20 + lVar1,auStack_60,0x20,0);
    uVar4 = *(ulong *)(unaff_x20 + lVar1);
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e6b44);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e6b48);
        (*pcVar2)();
      }
      param_1 = *(ulong *)(uVar4 + param_1 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_1024e8488();
    }
    func_0x000107c614a8(auStack_60);
    lVar1 = _DAT_112ea1860;
    func_0x000107c58dd8(*(undefined8 *)(param_1 + _DAT_112ea1860));
    func_0x000107c5a378(*(undefined8 *)(param_1 + lVar1));
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1024e6cdc; end: 1024e6fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e6cdc(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = 0;
  FUN_1024de864();
  lVar12 = *(long *)(lVar3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = _DAT_112ea1b90;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1b90,auStack_88,0,0);
  uVar9 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar9 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar4 = uVar9;
    }
    func_0x000107c60480();
  }
  if ((long)param_1 < (long)uVar4) {
    func_0x000107c61428(unaff_x20 + lVar3,&puStack_b8,0x20,0);
    uVar9 = *(ulong *)(unaff_x20 + lVar3);
    if ((uVar9 & 0xc000000000000001) == 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e6f9c);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e6fa4);
        (*pcVar2)();
      }
      param_1 = *(ulong *)(uVar9 + param_1 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_1024e8488();
    }
    func_0x000107c614a8(&puStack_b8);
    *(undefined1 *)(param_1 + _DAT_112ea1870) = 1;
    if (SCARRY8(*(long *)(unaff_x20 + _DAT_112ea1be8),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e6fa0);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + _DAT_112ea1be8) = *(long *)(unaff_x20 + _DAT_112ea1be8) + 1;
    *(undefined1 *)(unaff_x20 + _DAT_112ea1bf0) = 1;
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1105177f0;
    func_0x000107c613fc(&UNK_1105177f0,0x18,7);
    *(ulong *)(puVar6 + 0x10) = param_1;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_1024e8c08;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_110517808;
    ppuVar7 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_90;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x0001024e1440(param_2,auStack_c0 + -(lVar10 + 0xfU & 0xfffffffffffffff0));
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar11 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
    uVar4 = lVar10 + uVar11 + 7 & 0xfffffffffffffff8;
    puVar6 = &UNK_110517840;
    func_0x000107c613fc(&UNK_110517840,uVar4 + 8,uVar9 | 7);
    *(ulong *)(puVar6 + 0x10) = param_1;
    FUN_1024e4170(auStack_c0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),puVar6 + uVar11);
    *(long *)(puVar6 + uVar4) = unaff_x20;
    pcStack_98 = FUN_1024e8c14;
    puStack_b8 = puVar1;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_100288f10;
    puStack_a0 = &UNK_110517858;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar6;
    func_0x000107c60bc4(ppuVar8);
    puVar6 = puStack_90;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd0(0x3fc70a3d70a3d70a,puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1024e6fa4; end: 1024e7147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e6fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  uVar3 = *(undefined1 *)(param_4 + _DAT_112ea1b98);
  uVar1 = *(undefined8 *)(param_4 + _DAT_112ea1ba0);
  uVar2 = ((undefined8 *)(param_4 + _DAT_112ea1ba0))[1];
  FUN_1024e7b0c(uVar1,uVar2);
  FUN_1024e064c(param_3,uVar3,uVar1,uVar2);
  func_0x0001024e1734(uVar1,uVar2);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = &UNK_110517890;
  func_0x000107c613fc(&UNK_110517890,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1024e8c68;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105178a8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1105178e0;
  func_0x000107c613fc(&UNK_1105178e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(long *)(puVar6 + 0x18) = param_4;
  pcStack_60 = (code *)0x1024e8c74;
  puStack_80 = puVar4;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105178f8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar6);
  func_0x000107c3dcd0(0x3fc70a3d70a3d70a,puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 1024e7148; end: 1024e724f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e7148(long param_1)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112ea1b90;
  func_0x000107c61428(param_1 + _DAT_112ea1b90,auStack_68,0,0);
  uVar4 = *(ulong *)(param_1 + lVar1);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar4);
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e7238);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar6;
        FUN_1024e8488(uVar6,uVar4);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e7210);
        (*pcVar2)();
      }
      uVar7 = uVar6 + 1;
      func_0x000107c526c0(0);
      func_0x000107c61170(uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar7 != uVar5);
  }
  func_0x000107c6142c(uVar4);
  return;
}



/* Entry: 1024e7250; end: 1024e74df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e7250(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar8 = _DAT_112ea1b98;
  lVar7 = _DAT_112ea1b90;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1024e74dc);
    (*pcVar9)();
  }
  if (param_2 != 0) {
    if (*(ulong *)(param_4 + 0x10) < param_2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1024e74e0);
      (*pcVar9)();
    }
    puVar2 = (undefined8 *)(param_3 + _DAT_112ea1ba0);
    lVar10 = 0;
    FUN_1024de864();
    lVar10 = *(long *)(lVar10 + -8);
    uVar16 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar18 = 0;
    do {
      func_0x000107c61428(param_3 + lVar7,&puStack_a0,0x20,0);
      uVar15 = *(ulong *)(param_3 + lVar7);
      if ((uVar15 & 0xc000000000000001) == 0) {
        if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1024e74d4);
          (*pcVar9)();
        }
        if (*(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1024e74d8);
          (*pcVar9)();
        }
        uVar15 = *(ulong *)(uVar15 + uVar18 * 8 + 0x20);
        func_0x000107c61174(uVar15);
      }
      else {
        uVar15 = uVar18;
        FUN_1024e8488(uVar18);
      }
      uVar1 = uVar18 + 1;
      func_0x000107c614a8(&puStack_a0);
      lVar17 = *(long *)(lVar10 + 0x48);
      uVar5 = *(undefined1 *)(param_3 + lVar8);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      FUN_1024e7b0c(uVar3,uVar4);
      FUN_1024e064c(param_4 + (uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff)) + lVar17 * uVar18,
                    uVar5,uVar3,uVar4);
      func_0x0001024e1734(uVar3,uVar4);
      func_0x000107c61170(uVar15);
      uVar18 = uVar1;
    } while (param_2 != uVar1);
  }
  puVar11 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar12 = &UNK_110517750;
  func_0x000107c613fc(&UNK_110517750,0x20,7);
  *(ulong *)(puVar12 + 0x10) = param_2;
  *(long *)(puVar12 + 0x18) = param_3;
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x1024e8808;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110517768;
  ppuVar13 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4(ppuVar13);
  puVar12 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar12);
  puVar12 = &UNK_1105177a0;
  func_0x000107c613fc(&UNK_1105177a0,0x20,7);
  *(ulong *)(puVar12 + 0x10) = param_2;
  *(long *)(puVar12 + 0x18) = param_3;
  uStack_80 = 0x1024e8810;
  puStack_a0 = puVar6;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100288f10;
  puStack_88 = &UNK_1105177b8;
  ppuVar14 = &puStack_a0;
  puStack_78 = puVar12;
  func_0x000107c60bc4(ppuVar14);
  puVar12 = puStack_78;
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar12);
  func_0x000107c3dcd0(0x3fc70a3d70a3d70a,puVar11);
  func_0x000107c60bd0(ppuVar14);
  func_0x000107c60bd0(ppuVar13);
  return;
}



/* Entry: 1024e74e0; end: 1024e7683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e74e0(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ea1b90;
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e75ac);
    (*pcVar2)();
  }
  if (param_1 != 0) {
    uVar4 = 0;
    do {
      func_0x000107c61428(param_2 + lVar1,auStack_58,0x20,0);
      uVar3 = *(ulong *)(param_2 + lVar1);
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e75a8);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(uVar3 + uVar4 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar4;
        FUN_1024e8488(uVar4);
      }
      uVar4 = uVar4 + 1;
      func_0x000107c614a8(auStack_58);
      func_0x000107c526c0(0x3ff0000000000000,uVar3);
      func_0x000107c61170(uVar3);
    } while (param_1 != uVar4);
  }
  return;
}



/* Entry: 1024e7684; end: 1024e7823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e7684(double param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  dVar6 = param_1;
  FUN_1024e7824();
  if (0.0 < param_1) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea1bf8);
    func_0x000107c550d8(uVar5);
    func_0x000107c4abfc();
    func_0x000107c3ec60(uVar5);
    func_0x000107c609b0();
    uVar7 = 0;
    func_0x000107c54b80(0,0,0,dVar6,*(undefined8 *)(unaff_x20 + _DAT_112ea1c00));
    func_0x000107c3ec60(uVar5);
    func_0x000107c609cc();
    puVar1 = &UNK_1105176d8;
    func_0x000107c613fc(&UNK_1105176d8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_110517700;
    func_0x000107c613fc(&UNK_110517700,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = uVar7;
    *(double *)(puVar2 + 0x20) = dVar6;
    puVar3 = PTR__OBJC_CLASS___UIViewPropertyAnimator_1126b0db0;
    func_0x000107c610f8();
    pcStack_70 = FUN_1024e87e0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110517718;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    puVar2 = puStack_68;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c4670c(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar1);
    func_0x000107c5ba5c(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea1c08);
    *(undefined **)(unaff_x20 + _DAT_112ea1c08) = puVar3;
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1024e7824; end: 1024e78b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e7824(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ea1c08;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea1c08);
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5bcc0();
    if (lVar3 == 1) {
      func_0x000107c5be08(lVar2);
    }
    func_0x000107c61170(lVar2);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar4);
  func_0x000107c54b80(0,0,0,0,*(undefined8 *)(unaff_x20 + _DAT_112ea1c00));
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112ea1bf8),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 1024e78b8; end: 1024e794f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e78b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112ea1c00);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
    func_0x000107c54b80(0,0,param_1,param_2,uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1024e7950; end: 1024e79bb; -[_TtC32FriendingInterstitialOperaPlugin30FriendingInterstitialLayerView didTapShuffle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e7950(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + _DAT_112ea1bf0) & 1) == 0) {
    lVar1 = param_1 + _DAT_112ea1b88;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1024eaef4();
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1024e79bc; end: 1024e79ef;  */

void FUN_1024e79bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024e79f0; end: 1024e7aeb; -[_TtC32FriendingInterstitialOperaPlugin30FriendingInterstitialLayerView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024e7a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e7a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e7a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e7aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e7ac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e7aa4) */
/* WARNING: Removing unreachable block (ram,0x0001024e7a84) */
/* WARNING: Removing unreachable block (ram,0x0001024e7a64) */
/* WARNING: Removing unreachable block (ram,0x0001024e7a44) */
/* WARNING: Removing unreachable block (ram,0x0001024e7ac4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e79f0(long param_1)

{
  FUN_1024e8b4c(param_1 + _DAT_112ea1b88);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea1b90));
  func_0x0001024e1734(*(undefined8 *)(param_1 + _DAT_112ea1ba0),
                      ((undefined8 *)(param_1 + _DAT_112ea1ba0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea1ba8));
  return;
}



/* Entry: 1024e7aec; end: 1024e7b0b;  */

void FUN_1024e7aec(void)

{
  func_0x000107c61168(&PTR_PTR_1128496e8);
  return;
}



/* Entry: 1024e7b0c; end: 1024e7b33;  */

void FUN_1024e7b0c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1024e7b34; end: 1024e7f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e7b34(ulong param_1,code *param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  code *pcStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112ea18b8;
  pcStack_a0 = param_2;
  func_0x0001000285a8(0x112ea18b8,&UNK_10dab3e80);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  lVar4 = 0;
  FUN_1024de864();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = _DAT_112ea1b90;
  lStack_98 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112ea1b90,auStack_78,0,0);
  uVar10 = *(ulong *)(unaff_x20 + lVar3);
  uVar7 = uVar10 & 0xffffffffffffff8;
  if (uVar10 >> 0x3e == 0) {
    uVar11 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar11 = uVar7;
    if (0x7fffffffffffffff < uVar10) {
      uVar11 = uVar10;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar10);
  uVar9 = 0;
  while( true ) {
    if (uVar11 == uVar9) {
      func_0x000107c6142c(uVar10);
      return;
    }
    if ((uVar10 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e7d48);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar10 + uVar9 * 8 + 0x20);
    }
    else {
      uVar6 = uVar9;
      FUN_1024e8488(uVar9,uVar10);
      uStack_a8 = uVar6;
      func_0x000107c615e8();
      uVar6 = uStack_a8;
    }
    if (uVar6 == param_1) break;
    bVar2 = SCARRY8(uVar9,1);
    uVar9 = uVar9 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e7d4c);
      (*pcVar1)();
    }
  }
  func_0x000107c6142c(uVar10);
  lVar3 = _DAT_113804720;
  func_0x000107c61428(param_1 + _DAT_113804720,auStack_90,0,0);
  func_0x0001024e8b70(param_1 + lVar3,puVar8);
  puVar5 = puVar8;
  (**(code **)(lVar12 + 0x30))(puVar8,1,lVar4);
  lVar3 = lStack_98;
  if ((int)puVar5 == 1) {
    func_0x0001024e8bc0(puVar8);
    return;
  }
  FUN_1024e4170(puVar8,lStack_98);
  lVar4 = unaff_x20 + _DAT_112ea1b88;
  func_0x000107c61618();
  if (lVar4 != 0) {
    (*pcStack_a0)();
    func_0x000107c615e8(lVar4);
  }
  func_0x0001024e41b4(lVar3);
  return;
}



/* Entry: 1024e7f30; end: 1024e80af;  */

undefined * FUN_1024e7f30(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d9de78;
    func_0x0001000285a8(0x112d9de78,&UNK_10dbfb6a0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Entry: 1024e80b0; end: 1024e822b;  */

undefined * FUN_1024e80b0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1024e822c);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112ea1c38;
    func_0x0001000285a8(0x112ea1c38,&UNK_10dab4050);
    lVar5 = 0;
    FUN_1024de864();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024e8224);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1024e8228);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_1024de864();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1024e822c; end: 1024e823f;  */

ulong FUN_1024e822c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e8380);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001024e7fb0(uVar2,uVar4,0x1024ed180);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e837c);
      (*pcVar1)();
    }
    func_0x0001024e8380(0,uVar2,uVar3 + 0x20,param_4,0x102dccbd8);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1024e8240; end: 1024e8487;  */

ulong FUN_1024e8240(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e8380);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  func_0x0001024e7fb0(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e837c);
      (*pcVar1)();
    }
    func_0x0001024e8380(0,uVar2,uVar3 + 0x20,param_4,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1024e8488; end: 1024e8623;  */

ulong FUN_1024e8488(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e8558);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e855c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1024e12dc(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_1024e12dc(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001d,0x800000010f0a6cf0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e8624);
  (*pcVar2)();
}



/* Entry: 1024e8624; end: 1024e87df;  */

ulong FUN_1024e8624(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e8708);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e870c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_1024e8cb8(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1024e87e0);
  (*pcVar2)();
}



/* Entry: 1024e87e0; end: 1024e8817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e87e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112ea1c00);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c54b80(0,0,uVar3,uVar4,uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1024e8818; end: 1024e8b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e8818(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112ea1b88;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined **)(unaff_x20 + _DAT_112ea1b90) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1b98) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112ea1ba0);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar1 = _DAT_112ea1ba8;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4018000000000000,puVar4);
  func_0x000107c52610(puVar4);
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112ea1bb0;
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c5af9c();
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61180();
  func_0x000107c53840();
  func_0x000107c5a050(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar5;
  lVar1 = _DAT_112ea1bb8;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a100();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  puVar6 = puVar5;
  func_0x000107c5af88(puVar5);
  func_0x000107c61180();
  func_0x000107c59c78(puVar4);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  puVar6 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112ea1bc0;
  FUN_1024e4d2c();
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  lVar1 = _DAT_112ea1bc8;
  func_0x0001024e4dd8();
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  lVar1 = _DAT_112ea1bd0;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4030000000000000,puVar4);
  func_0x000107c54280(puVar4);
  func_0x000107c5a050(puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112ea1bd8;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c52b2c();
  func_0x000107c59594(0x4030000000000000,puVar4);
  func_0x000107c54280(puVar4);
  puVar6 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112ea1be0;
  FUN_1024e4e84();
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1be8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1bf0) = 0;
  lVar1 = _DAT_112ea1bf8;
  FUN_1024e508c();
  *(undefined **)(unaff_x20 + lVar1) = puVar6;
  lVar1 = _DAT_112ea1c00;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5e2ac(puVar5);
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1c08) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FriendingInterstitialOperaPlugin/FriendingInterstitialLayerView.swift",0x45,2
                      ,0xb8,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1024e8b4c);
  (*pcVar3)();
}



/* Entry: 1024e8b4c; end: 1024e8c07;  */

undefined8 FUN_1024e8b4c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1024e8c08; end: 1024e8c13;  */

void FUN_1024e8c08(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1024e8c14; end: 1024e8c67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e8c14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar9 = 0;
  FUN_1024de864();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  uVar11 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar9 + -8) + 0x40) + uVar11 + 7 & 0xffffffffffffff8));
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  uVar3 = *(undefined1 *)(lVar9 + _DAT_112ea1b98);
  uVar1 = *(undefined8 *)(lVar9 + _DAT_112ea1ba0);
  uVar2 = ((undefined8 *)(lVar9 + _DAT_112ea1ba0))[1];
  FUN_1024e7b0c(uVar1,uVar2);
  FUN_1024e064c(unaff_x20 + uVar11,uVar3,uVar1,uVar2);
  func_0x0001024e1734(uVar1,uVar2);
  puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar6 = &UNK_110517890;
  func_0x000107c613fc(&UNK_110517890,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1024e8c68;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1105178a8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1105178e0;
  func_0x000107c613fc(&UNK_1105178e0,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  *(long *)(puVar6 + 0x18) = lVar9;
  pcStack_60 = (code *)0x1024e8c74;
  puStack_80 = puVar4;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1105178f8;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c61174(uVar10);
  func_0x000107c61174(lVar9);
  func_0x000107c61574(puVar6);
  func_0x000107c3dcd0(0x3fc70a3d70a3d70a,puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  return;
}



/* Entry: 1024e8c68; end: 1024e8cb7;  */

void FUN_1024e8c68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1024e8cb8; end: 1024e8cf7;  */

void FUN_1024e8cb8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1024e8cf8; end: 1024e8d33;  */

void FUN_1024e8cf8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024e8d34; end: 1024e8e67;  */

undefined8 FUN_1024e8d34(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      func_0x000100cf6ba0(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1024e8e68);
  (*pcVar5)();
}



/* Entry: 1024e8e68; end: 1024e8e77; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e8e68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112ea1c40));
  return;
}



/* Entry: 1024e8e78; end: 1024e8e7f; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8 FUN_1024e8e78(void)

{
  return 0;
}



/* Entry: 1024e8e80; end: 1024e8f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e8e80(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar2);
    lVar3 = *(long *)(unaff_x20 + _DAT_112ea1c40);
    *(undefined ***)(lVar3 + _DAT_112ea1b88 + 8) = &PTR_DAT_110517978;
    func_0x000107c61604();
    func_0x000107c550d8(lVar3);
    FUN_1024e8f58();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e8f58);
  (*pcVar1)();
}



/* Entry: 1024e8f58; end: 1024e90ef;  */

/* WARNING: Possible PIC construction at 0x0001024e8fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024e909c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001024e8fa8) */
/* WARNING: Removing unreachable block (ram,0x0001024e9020) */
/* WARNING: Removing unreachable block (ram,0x0001024e90c0) */
/* WARNING: Removing unreachable block (ram,0x0001024e9034) */
/* WARNING: Removing unreachable block (ram,0x0001024e90d4) */
/* WARNING: Removing unreachable block (ram,0x0001024e9088) */
/* WARNING: Removing unreachable block (ram,0x0001024e90a0) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e8f58(void)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c615f0(*(undefined8 *)(unaff_x20 + _DAT_112ea1b08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e90f0);
  (*pcVar1)();
}



/* Entry: 1024e90f0; end: 1024e9117; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController viewDidLoad] */

void FUN_1024e90f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024e8e80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024e9118; end: 1024e91eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e9118(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidFullyAppear_112684c88);
  lVar2 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e91e8);
    (*pcVar1)();
  }
  lVar2 = *(long *)(lVar2 + _DAT_112ea1b48);
  func_0x000107c61170();
  if ((0 < lVar2) && ((*(byte *)(unaff_x20 + _DAT_112ea1c80) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + _DAT_112ea1c80) = 1;
    func_0x000107c4aba4();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1024e91ec);
      (*pcVar1)();
    }
    lVar2 = *(long *)(unaff_x20 + _DAT_112ea1b48);
    func_0x000107c61170();
    FUN_1024e7684((double)lVar2);
  }
  return;
}



/* Entry: 1024e91ec; end: 1024e929b; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController viewDidFullyAppear] */

void FUN_1024e91ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024e9118();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024e929c; end: 1024e934b; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController pause] */

void FUN_1024e929c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001024e9214();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024e934c; end: 1024e9373; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController resume] */

void FUN_1024e934c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001024e92c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1024e9374; end: 1024e93e3; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e9374(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidFullyDisappear_112684ca8;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  *(undefined1 *)(param_1 + _DAT_112ea1c80) = 0;
  FUN_1024e7824();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1024e93e4; end: 1024e94f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e93e4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea1c48);
  *(undefined **)(unaff_x20 + _DAT_112ea1c48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar3);
  lVar2 = _DAT_112ea1c50;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1c50,auStack_48,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(unaff_x20 + _DAT_112ea1c58) = 0;
  lVar2 = _DAT_112ea1c60;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1c60,auStack_60,1,0);
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x000107c6142c(uVar3);
  lVar2 = _DAT_112ea1c68;
  func_0x000107c61428(unaff_x20 + _DAT_112ea1c68,auStack_78,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = puVar1;
  func_0x000107c6142c(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c70) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c78) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c80) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea1c40);
  FUN_1024e7824();
  func_0x000107c550d8(uVar3);
  return;
}



/* Entry: 1024e94f4; end: 1024e96ab; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController updateViewWithPreviousLayer:currentLayer:] */

void FUN_1024e94f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_updateViewWithPreviousLayer_curr_112680a50;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,puVar1,param_3,param_4);
  FUN_1024e93e4();
  FUN_1024e8f58();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1024e96ac; end: 1024ea447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024e96ac(long param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long alStack_c0 [3];
  undefined1 auStack_a8 [24];
  undefined *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  FUN_1024de864();
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)((long)alStack_c0 + lVar5);
  lVar6 = unaff_x20;
  func_0x000107c4aba4();
  func_0x000107c61180();
  if (lVar6 != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ea1c48);
    *(undefined8 *)(unaff_x20 + _DAT_112ea1c48) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar10);
    lVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ea1c40);
    uVar3 = *(undefined1 *)(lVar6 + _DAT_112ea1b50);
    uVar10 = *(undefined8 *)(lVar6 + _DAT_112ea1b18);
    uVar7 = ((undefined8 *)(lVar6 + _DAT_112ea1b18))[1];
    FUN_1024e7b0c(uVar10,uVar7);
    FUN_1024e6260(param_1,uVar3,uVar10,uVar7);
    func_0x0001024e1734(uVar10,uVar7);
    lVar13 = *(long *)(param_1 + 0x10);
    uVar10 = 0;
    FUN_1024ec4e0(0,lVar13);
    lVar4 = _DAT_112ea1c50;
    func_0x000107c61428(unaff_x20 + _DAT_112ea1c50,auStack_78,1,0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = uVar10;
    func_0x000107c6142c(uVar7);
    *(long *)(unaff_x20 + _DAT_112ea1c58) = lVar13;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar13 != 0) {
      apuStack_90[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      alStack_c0[1] = lVar11;
      alStack_c0[2] = lVar6;
      func_0x000100403514(0,lVar13,0);
      param_1 = param_1 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff));
      lVar14 = *(long *)(lVar14 + 0x48);
      do {
        puVar9 = apuStack_90[0];
        func_0x0001024e1440(param_1,puVar12);
        uVar10 = *puVar12;
        uVar7 = *(undefined8 *)((long)alStack_c0 + lVar5 + 8);
        func_0x000107c61434(uVar7);
        func_0x0001024e41b4(puVar12);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        apuStack_90[0] = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(apuStack_90[0] + 0x10) = uVar1 + 1;
        *(undefined8 *)(apuStack_90[0] + uVar1 * 0x10 + 0x20) = uVar10;
        *(undefined8 *)(apuStack_90[0] + uVar1 * 0x10 + 0x28) = uVar7;
        param_1 = param_1 + lVar14;
        lVar13 = lVar13 + -1;
        puVar9 = apuStack_90[0];
        lVar11 = alStack_c0[1];
        lVar6 = alStack_c0[2];
      } while (lVar13 != 0);
    }
    puVar8 = puVar9;
    func_0x000100403a6c();
    func_0x000107c6142c(puVar9);
    lVar5 = _DAT_112ea1c60;
    func_0x000107c61428(unaff_x20 + _DAT_112ea1c60,apuStack_90,1,0);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined **)(unaff_x20 + lVar5) = puVar8;
    func_0x000107c6142c(uVar10);
    lVar5 = _DAT_112ea1c68;
    func_0x000107c61428(unaff_x20 + _DAT_112ea1c68,auStack_a8,1,0);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar5);
    *(undefined **)(unaff_x20 + lVar5) = PTR___swiftEmptySetSingleton_11034f1d8;
    func_0x000107c6142c(uVar10);
    func_0x000107c550d8(lVar11);
    lVar5 = _DAT_112ea1c78;
    if ((*(byte *)(unaff_x20 + _DAT_112ea1c78) & 1) == 0) {
      lVar14 = unaff_x20;
      func_0x000107c4aba4();
      func_0x000107c61180();
      if (lVar14 != 0) {
        *(undefined1 *)(unaff_x20 + lVar5) = 1;
        pcVar2 = *(code **)(lVar14 + _DAT_112ea1b20);
        uVar10 = ((undefined8 *)(lVar14 + _DAT_112ea1b20))[1];
        func_0x000107c6157c(uVar10);
        (*pcVar2)();
        func_0x000107c61170(lVar14);
        func_0x000107c61574(uVar10);
      }
    }
    func_0x0001024e99a8();
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 1024ea448; end: 1024ea59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1024ea448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112ea1c40;
  uVar3 = 0;
  FUN_1024e7aec();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112ea1c48) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112ea1c50) = puVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1c58) = 0;
  puVar1 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112ea1c60) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + _DAT_112ea1c68) = puVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c70) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c78) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112ea1c80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea1c88) = 0;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithConfiguration_layerViewC_1125de030,
                      param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar4);
  }
  return puVar4;
}



/* Entry: 1024ea59c; end: 1024ea74b; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_1024ea59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  FUN_1024ea448(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1024ea74c; end: 1024ea8bb; -[_TtC32FriendingInterstitialOperaPlugin40FriendingInterstitialLayerViewController initWithNibName:bundle:] */

void FUN_1024ea74c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  func_0x0001024ea610(param_3,param_2,param_4);
  return;
}


