/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b75f30; end: 101b76083;  */

void FUN_101b75f30(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  puVar3 = &UNK_11044d700;
  func_0x000107c613fc(&UNK_11044d700,0x18,7);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618(lVar4);
  func_0x000107c61614(puVar3 + 0x10,lVar4);
  func_0x000107c61170(lVar4);
  puVar5 = &UNK_11044d7e8;
  func_0x000107c613fc(&UNK_11044d7e8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101b76084;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  uStack_68 = 0x101b760d4;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_10006eb60;
  puStack_70 = &UNK_11044d800;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_60;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c604(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar3);
  puVar3 = puVar5;
  func_0x000107c61544(puVar5,"",0x5e,100,0x4b,1);
  func_0x000107c61574(puVar5);
  if ((int)puVar3 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b76084);
  (*pcVar2)();
}



/* Entry: 101b76084; end: 101b760f3;  */

void FUN_101b76084(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101b75a10();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b760f4; end: 101b7620b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b760f4(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112e05f40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112e05f48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f50) = 0;
  lVar1 = _DAT_112e05f58;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112e05f60;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f68) = 0;
  lVar1 = _DAT_112e05f70;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112e05f78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e05f88) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapFriendCompassImplementation/MapFriendCompassView.swift",0x39,2,0x51,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b7620c);
  (*pcVar2)();
}



/* Entry: 101b7620c; end: 101b76223;  */

void FUN_101b7620c(long param_1,long param_2)

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



/* Entry: 101b76224; end: 101b762d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b76224(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_58;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&lStack_58);
  uVar4 = *(undefined8 *)(lStack_58 + _DAT_113091b70);
  FUN_101b77fbc();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  FUN_101b764a0(uVar3,uVar2,uVar1,uVar4);
  func_0x000107c61170(lStack_58);
  *param_1 = uVar3;
  return;
}



/* Entry: 101b762d8; end: 101b76447;  */

void FUN_101b762d8(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010134166c(0,4,0);
  uVar3 = *(ulong *)(puVar4 + 0x10);
  uVar5 = *(ulong *)(puVar4 + 0x18);
  uVar6 = uVar5 >> 1;
  lVar1 = uVar3 + 1;
  if (uVar6 <= uVar3) {
    func_0x00010134166c(1 < uVar5,lVar1,1);
    uVar5 = *(ulong *)(puVar4 + 0x18);
    uVar6 = uVar5 >> 1;
  }
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + uVar3 * 8 + 0x20) = 0x41aee62800000000;
  lVar2 = uVar3 + 2;
  if ((long)uVar6 < lVar2) {
    func_0x00010134166c(1 < uVar5,lVar2,1);
    uVar5 = *(ulong *)(puVar4 + 0x18);
    uVar6 = uVar5 >> 1;
  }
  *(long *)(puVar4 + 0x10) = lVar2;
  *(undefined8 *)(puVar4 + lVar1 * 8 + 0x20) = 0x41c2064200000000;
  lVar1 = uVar3 + 3;
  if ((long)uVar6 < lVar1) {
    func_0x00010134166c(1 < uVar5,lVar1,1);
  }
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + lVar2 * 8 + 0x20) = 0x41e34fd900000000;
  lVar2 = uVar3 + 4;
  if ((long)(*(ulong *)(puVar4 + 0x18) >> 1) < lVar2) {
    func_0x00010134166c(1 < *(ulong *)(puVar4 + 0x18),lVar2,1);
  }
  *(long *)(puVar4 + 0x10) = lVar2;
  *(undefined8 *)(puVar4 + lVar1 * 8 + 0x20) = 0x41f34fd900000000;
  puRam00000001134882f8 = puVar4;
  return;
}



/* Entry: 101b76448; end: 101b7649f;  */

void FUN_101b76448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_101b764a0(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 101b764a0; end: 101b76cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101b764a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  uStack_a8 = param_4;
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = _DAT_112e05fe0;
  (**(code **)(lVar10 + 0x68))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar3);
  puVar4 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar5 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f000f00);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar10 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = _DAT_112e05fe8;
  puStack_a0 = (undefined *)((ulong)puStack_a0 & 0xffffffffffffff00);
  func_0x0001000285a8(0x112d61fd8,&UNK_10d927f90);
  func_0x000107c613fc();
  ppuVar6 = &puStack_a0;
  func_0x00010042e6a0();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar6;
  lVar1 = _DAT_112e05ff0;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112e05ff8) = 2;
  *(undefined1 *)(unaff_x20 + _DAT_112e06000) = 2;
  func_0x000100083b20(&puStack_a0);
  puVar4 = puStack_a0;
  puVar7 = puStack_a0;
  func_0x000107c4ec94();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  *(undefined **)(unaff_x20 + _DAT_112e06008) = puVar4;
  func_0x000100083b20(&puStack_a0);
  puVar4 = puStack_a0;
  puVar7 = puStack_a0;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  *(undefined **)(unaff_x20 + _DAT_112e06010) = puVar4;
  func_0x000100083b20(&puStack_a0);
  puVar4 = puStack_a0;
  puVar7 = puStack_a0;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar5 = uStack_a8;
  if (puVar7 != (undefined *)0x0) {
    *(undefined **)(unaff_x20 + _DAT_112e06018) = puVar7;
    *(undefined8 *)(unaff_x20 + _DAT_112e06020) = uStack_a8;
    puVar4 = PTR_s_init_1125d9248;
    func_0x000107c615f0(uStack_a8);
    puVar8 = &stack0xffffffffffffff90;
    func_0x000107c61154(puVar8,puVar4);
    uVar9 = *(undefined8 *)(puVar8 + _DAT_112e05fe0);
    puVar4 = &UNK_11044d8e8;
    func_0x000107c613fc(&UNK_11044d8e8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,puVar8);
    uStack_80 = 0x101b7682c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11044d900;
    ppuVar6 = &puStack_a0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_78;
    func_0x000107c61174(puVar8);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar9);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(puVar8);
    func_0x000107c61574(param_1);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c615e8(uVar5);
    return puVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b7682c);
  (*pcVar2)();
}



/* Entry: 101b76cd4; end: 101b76cef;  */

void FUN_101b76cd4(long param_1,long param_2)

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



/* Entry: 101b76cf0; end: 101b76d6b; -[_TtC41MapNavBarTooltipComplianceServiceProvider33MapNavBarTooltipComplianceChecker tooltipShouldShowObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b76cf0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  code *pcVar3;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c61174(param_1);
  pcVar2 = FUN_101b76d6c;
  func_0x0001000bfde0(FUN_101b76d6c,0,uVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar3);
  return;
}



/* Entry: 101b76d6c; end: 101b76da3;  */

void FUN_101b76d6c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 101b76da4; end: 101b76dc7; -[_TtC41MapNavBarTooltipComplianceServiceProvider33MapNavBarTooltipComplianceChecker tooltipTextForSharingLocation] */

void FUN_101b76da4(long param_1)

{
  code *pcVar1;
  
  func_0x000106875394();
  func_0x000107c61180();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b76dc8);
  (*pcVar1)();
}



/* Entry: 101b76dc8; end: 101b76e7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b76dc8(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e05fe0);
  puVar1 = &UNK_11044d8e8;
  func_0x000107c613fc(&UNK_11044d8e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_101b77074;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11044d928;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101b76e80; end: 101b77073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b76e80(double param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + _DAT_112e06018);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c4c388();
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77038);
        (*pcVar1)();
      }
      func_0x000107c56254(lVar4);
      func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar6 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7703c);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77040);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77044);
        (*pcVar1)();
      }
      lVar3 = lVar4;
      func_0x000107c56250();
      iVar2 = (int)lVar3;
      func_0x000109022344();
      if (iVar2 != 0) {
        func_0x000109022344();
        if (iVar2 == 0) {
          lVar3 = lRam00000001134882f8;
          if (lRam00000001134882f0 != -1) {
            func_0x000107c61568(0x1134882f0,FUN_101b762d8);
            lVar3 = lRam00000001134882f8;
          }
        }
        else {
          lVar3 = lRam0000000113488308;
          if (lRam0000000113488300 != -1) {
            func_0x000107c61568(0x113488300,FUN_101b77fdc);
            lVar3 = lRam0000000113488308;
          }
        }
        if (*(long *)(lVar3 + 0x10) <= lVar5 + 1) {
          FUN_101b7707c();
        }
      }
      func_0x000107c61170(param_2);
      param_2 = lVar4;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101b77074; end: 101b7707b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b77074(double param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + _DAT_112e06018);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c4c388();
      if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77038);
        (*pcVar1)();
      }
      func_0x000107c56254(lVar5);
      func_0x000107c5eea0(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c5ee8c();
      (**(code **)(lVar7 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7703c);
        (*pcVar1)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77040);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77044);
        (*pcVar1)();
      }
      lVar3 = lVar5;
      func_0x000107c56250();
      iVar2 = (int)lVar3;
      func_0x000109022344();
      if (iVar2 != 0) {
        func_0x000109022344();
        if (iVar2 == 0) {
          lVar3 = lRam00000001134882f8;
          if (lRam00000001134882f0 != -1) {
            func_0x000107c61568(0x1134882f0,FUN_101b762d8);
            lVar3 = lRam00000001134882f8;
          }
        }
        else {
          lVar3 = lRam0000000113488308;
          if (lRam0000000113488300 != -1) {
            func_0x000107c61568(0x113488300,FUN_101b77fdc);
            lVar3 = lRam0000000113488308;
          }
        }
        if (*(long *)(lVar3 + 0x10) <= lVar6 + 1) {
          FUN_101b7707c();
        }
      }
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 101b7707c; end: 101b7719f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7707c(double param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = *(long *)(unaff_x20 + _DAT_112e06018);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar4 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b77198);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b7719c);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b771a0);
      (*pcVar1)();
    }
    func_0x000107c56250(lVar3);
    func_0x000107c56254(lVar3);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101b771a0; end: 101b771c7; -[_TtC41MapNavBarTooltipComplianceServiceProvider33MapNavBarTooltipComplianceChecker recordTooltipWasShown] */

void FUN_101b771a0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b76dc8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b771c8; end: 101b771e7;  */

void FUN_101b771c8(void)

{
  return;
}



/* Entry: 101b771e8; end: 101b7743f;  */

void FUN_101b771e8(void)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x180);
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lFTu_11034ff68
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 400) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101b77440;
                    /* WARNING: Could not recover jumptable at 0x00010bdb929c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss13withTaskGroup2of9returning9isolation4bodyq_xm_q_mScA_pSgYiq_ScGyxGzYaXEtYas8SendableRzr0_lF_11034ff60
    )();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  func_0x000107c615ac(unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
  *(long *)(unaff_x22 + 0x168) = unaff_x22 + 0x10;
  lVar5 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xf;
  uVar4 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar4);
  lVar5 = 0;
  func_0x000107c5fd0c();
  pcVar10 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  (*pcVar10)(uVar4,1,1,lVar5);
  puVar6 = &UNK_11044d9a8;
  func_0x000107c613fc(&UNK_11044d9a8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = uVar9;
  *(undefined8 *)(puVar6 + 0x28) = uVar7;
  func_0x000107c615f0(uVar9);
  func_0x000107c61174();
  FUN_10175ad14(uVar4,&UNK_10d9d94d0,puVar6);
  func_0x0001000abe54(uVar4);
  func_0x000107c615c0(uVar4);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar8);
  (*pcVar10)();
  puVar6 = &UNK_11044d9d0;
  func_0x000107c613fc(&UNK_11044d9d0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = uVar1;
  *(undefined8 *)(puVar6 + 0x28) = uVar7;
  func_0x000107c61174(uVar7);
  func_0x000107c615f0(uVar1);
  FUN_10175ad14(uVar8,&UNK_10d9d94e0,puVar6);
  func_0x0001000abe54(uVar8);
  func_0x000107c615c0(uVar8);
  plVar3 = (long *)(ulong)*(uint *)(PTR___sScG22awaitAllRemainingTasksyyYaFTu_11034fbe0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar3;
  func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b77488;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScG22awaitAllRemainingTasksyyYaF_11034fbd8)();
  return;
}



/* Entry: 101b77440; end: 101b7750b;  */

void FUN_101b77440(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7750c,0,0);
  return;
}



/* Entry: 101b7750c; end: 101b775cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7750c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112e05fe0);
  puVar1 = &UNK_11044d8e8;
  func_0x000107c613fc(&UNK_11044d8e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,lVar3);
  *(code **)(unaff_x22 + 0x158) = FUN_101b78348;
  *(undefined **)(unaff_x22 + 0x160) = puVar1;
  *(undefined **)(unaff_x22 + 0x138) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x140) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x148) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x150) = &UNK_11044d9e8;
  lVar3 = unaff_x22 + 0x138;
  func_0x000107c60bc4(lVar3);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x160));
  func_0x000107c4e524(uVar2);
  func_0x000107c60bd0(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000101b775cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b775d0; end: 101b77637;  */

void FUN_101b775d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77638,0,0);
  return;
}



/* Entry: 101b77638; end: 101b77763;  */

void FUN_101b77638(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  code *pcVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar4 = 0;
  func_0x000107c5fd0c();
  pcVar7 = *(code **)(*(long *)(lVar4 + -8) + 0x38);
  (*pcVar7)(uVar3,1,1,lVar4);
  puVar5 = &UNK_11044da98;
  func_0x000107c613fc(&UNK_11044da98,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x000107c615f0(uVar2);
  func_0x000107c61174();
  FUN_10175ad14(uVar3,&UNK_10d9d9500,puVar5);
  func_0x0001000abe54(uVar3);
  (*pcVar7)(uVar3,1,1,lVar4);
  puVar5 = &UNK_11044dac0;
  func_0x000107c613fc(&UNK_11044dac0,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar6;
  func_0x000107c61174(uVar6);
  func_0x000107c615f0(uVar1);
  FUN_10175ad14(uVar3,&UNK_10d9d9508,puVar5);
  func_0x0001000abe54(uVar3);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101b77760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b77764; end: 101b7777b;  */

void FUN_101b77764(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x98) = in_x4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7777c,0,0);
  return;
}



/* Entry: 101b7777c; end: 101b77827;  */

void FUN_101b7777c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101b77828;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,1);
  uVar3 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_101b778cc;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11044da60;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  func_0x000107c42904(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101b77828; end: 101b7787f;  */

void FUN_101b77828(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101b77880;
  }
  else {
    pcVar1 = FUN_101b77888;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b77880; end: 101b77887;  */

void FUN_101b77880(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b77884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b77888; end: 101b778cb;  */

void FUN_101b77888(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101b778c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b778cc; end: 101b77957;  */

void FUN_101b778cc(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0x20);
  func_0x0001006732c8(puVar1,*(undefined8 *)(param_1 + 0x38));
  uVar4 = *puVar1;
  if (param_2 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(uVar4,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(uVar4);
  return;
}



/* Entry: 101b77958; end: 101b77973;  */

void FUN_101b77958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77974,0,0);
  return;
}



/* Entry: 101b77974; end: 101b77a4b;  */

void FUN_101b77974(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x80);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101b77a4c;
  lVar2 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar2,0);
  puVar3 = &UNK_11044da20;
  func_0x000107c613fc(&UNK_11044da20,0x18,7);
  puVar4 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar3 + 0x10) = lVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x101b78350;
  *(undefined **)(unaff_x22 + 0x78) = puVar3;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1010ca3e8;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11044da38;
  func_0x000107c60bc4(puVar4);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c43188(uVar1);
  func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101b77a4c; end: 101b77a7f;  */

void FUN_101b77a4c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101b77a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Entry: 101b77a80; end: 101b77a97;  */

void FUN_101b77a80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77a98,0,0);
  return;
}



/* Entry: 101b77a98; end: 101b77b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b77a98(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x40,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112e05fe0);
    puVar1 = &UNK_11044d8e8;
    func_0x000107c613fc(&UNK_11044d8e8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar2);
    puVar4 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x101b78880;
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1000f6b44;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_11044db00;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c4e524(uVar3);
    func_0x000107c60bd0(puVar4);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000101b77b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b77b90; end: 101b77c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b77b90(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  uVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_101b77c18();
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(uVar1 + _DAT_112e05fe8);
      uStack_39 = 1;
      func_0x000107c6157c(uVar3);
      func_0x0001007d6d78(&uStack_39);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101b77c18; end: 101b77eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b77c18(void)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112e06010);
  if (uVar9 != 0) {
    uVar5 = uVar9;
    func_0x000107c615f0();
    func_0x000107c3e488();
    if (uVar5 != 0) {
      ppuVar6 = &PTR____CFConstantStringClassReference_110f72698;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
      uVar5 = uVar9;
      func_0x000107c49ff8();
      func_0x000107c615e8(uVar9);
      func_0x000107c61170(ppuVar6);
      if ((int)uVar5 == 0) {
        return;
      }
      uVar9 = *(ulong *)(unaff_x20 + _DAT_112e06008);
      if (uVar9 == 0) {
        return;
      }
      uVar5 = uVar9;
      func_0x000107c615f0();
      iVar3 = (int)uVar5;
      func_0x000107c448a0();
      if (iVar3 != 0) {
        uVar5 = uVar9;
        func_0x000107c4ec80();
        func_0x000107c61180();
        if (uVar5 != 0) {
          uVar7 = uVar5;
          func_0x000107c443c8();
          func_0x000107c615e8(uVar9);
          func_0x000107c61170(uVar5);
          if ((uVar7 & 1) != 0) {
            return;
          }
          uVar9 = *(ulong *)(unaff_x20 + _DAT_112e06018);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (uVar9 == 0) {
            return;
          }
          func_0x000107c4c384();
          uVar5 = uVar9;
          func_0x000107c4c388();
          uVar7 = uVar5;
          func_0x000109022344();
          iVar3 = (int)uVar7;
          if ((uVar7 & 1) == 0) {
            lVar8 = lRam00000001134882f8;
            if (lRam00000001134882f0 != -1) {
              iVar3 = 0x134882f0;
              func_0x000107c61568(0x1134882f0,FUN_101b762d8);
              lVar8 = lRam00000001134882f8;
            }
          }
          else {
            lVar8 = lRam0000000113488308;
            if (lRam0000000113488300 != -1) {
              iVar3 = 0x13488300;
              func_0x000107c61568(0x113488300,FUN_101b77fdc);
              lVar8 = lRam0000000113488308;
            }
          }
          if (*(long *)(lVar8 + 0x10) <= (long)uVar5) {
            func_0x000107c61170(uVar9);
            return;
          }
          func_0x000109022344();
          if (iVar3 == 0) {
            if (lRam00000001134882f0 != -1) {
              func_0x000107c61568(0x1134882f0,FUN_101b762d8);
            }
            plVar1 = (long *)0x1134882f8;
          }
          else {
            if (lRam0000000113488300 != -1) {
              func_0x000107c61568(0x113488300,FUN_101b77fdc);
            }
            plVar1 = (long *)0x113488308;
          }
          if (-1 < (long)uVar5) {
            if (uVar5 < *(ulong *)(*plVar1 + 0x10)) {
              func_0x000107c5eea0(&stack0xffffffffffffffa0 +
                                  -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
              func_0x000107c5ee8c();
              func_0x000107c61170(uVar9);
              (**(code **)(lVar10 + 8))
                        (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4
                        );
              return;
            }
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101b77ec0);
            (*pcVar2)();
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b77e34);
          (*pcVar2)();
        }
      }
    }
    func_0x000107c615e8(uVar9);
  }
  return;
}



/* Entry: 101b77ef0; end: 101b77f23;  */

void FUN_101b77ef0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b77f24; end: 101b77f33;  */

undefined1  [16] FUN_101b77f24(void)

{
  return ZEXT816(0x11044d960);
}



/* Entry: 101b77f34; end: 101b77fbb; -[_TtC41MapNavBarTooltipComplianceServiceProvider33MapNavBarTooltipComplianceChecker .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b77f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b77f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b77f34(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e06008));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e06010));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e06018));
  return;
}



/* Entry: 101b77fbc; end: 101b77fdb;  */

void FUN_101b77fbc(void)

{
  func_0x000107c61168(&PTR_PTR_1127faf28);
  return;
}



/* Entry: 101b77fdc; end: 101b7814b;  */

void FUN_101b77fdc(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010134166c(0,4,0);
  uVar3 = *(ulong *)(puVar4 + 0x10);
  uVar5 = *(ulong *)(puVar4 + 0x18);
  uVar6 = uVar5 >> 1;
  lVar1 = uVar3 + 1;
  if (uVar6 <= uVar3) {
    func_0x00010134166c(1 < uVar5,lVar1,1);
    uVar5 = *(ulong *)(puVar4 + 0x18);
    uVar6 = uVar5 >> 1;
  }
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + uVar3 * 8 + 0x20) = 0x40d3880000000000;
  lVar2 = uVar3 + 2;
  if ((long)uVar6 < lVar2) {
    func_0x00010134166c(1 < uVar5,lVar2,1);
    uVar5 = *(ulong *)(puVar4 + 0x18);
    uVar6 = uVar5 >> 1;
  }
  *(long *)(puVar4 + 0x10) = lVar2;
  *(undefined8 *)(puVar4 + lVar1 * 8 + 0x20) = 0x40e3880000000000;
  lVar1 = uVar3 + 3;
  if ((long)uVar6 < lVar1) {
    func_0x00010134166c(1 < uVar5,lVar1,1);
  }
  *(long *)(puVar4 + 0x10) = lVar1;
  *(undefined8 *)(puVar4 + lVar2 * 8 + 0x20) = 0x40ed4c0000000000;
  lVar2 = uVar3 + 4;
  if ((long)(*(ulong *)(puVar4 + 0x18) >> 1) < lVar2) {
    func_0x00010134166c(1 < *(ulong *)(puVar4 + 0x18),lVar2,1);
  }
  *(long *)(puVar4 + 0x10) = lVar2;
  *(undefined8 *)(puVar4 + lVar1 * 8 + 0x20) = 0x40f3880000000000;
  puRam0000000113488308 = puVar4;
  return;
}



/* Entry: 101b7814c; end: 101b7818b;  */

void FUN_101b7814c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b78188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b7818c; end: 101b781ef;  */

void FUN_101b7818c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x1a0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101b781f0;
  plVar5[0x30] = lVar2;
  plVar5[0x31] = lVar4;
  plVar5[0x2e] = lVar1;
  plVar5[0x2f] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b771e8,0,0);
  return;
}



/* Entry: 101b781f0; end: 101b7822b;  */

void FUN_101b781f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b78228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b7822c; end: 101b78293;  */

void FUN_101b7822c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101b78868;
  plVar4[4] = lVar1;
  plVar4[5] = lVar5;
  plVar4[2] = param_2;
  plVar4[3] = lVar2;
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[6] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77638,0,0);
  return;
}



/* Entry: 101b78294; end: 101b782e3;  */

void FUN_101b78294(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b7886c;
  plVar3[0x12] = lVar1;
  plVar3[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7777c,0,0);
  return;
}



/* Entry: 101b782e4; end: 101b78347;  */

void FUN_101b782e4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b78870;
  plVar3[0x11] = lVar1;
  plVar3[0x12] = lVar2;
  plVar3[0x10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77974,0,0);
  return;
}



/* Entry: 101b78348; end: 101b7836f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b78348(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 uStack_39;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  uVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_101b77c18();
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(uVar1 + _DAT_112e05fe8);
      uStack_39 = 1;
      func_0x000107c6157c(uVar3);
      func_0x0001007d6d78(&uStack_39);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 101b78370; end: 101b783bf;  */

void FUN_101b78370(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b78874;
  plVar3[0x12] = lVar1;
  plVar3[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7777c,0,0);
  return;
}



/* Entry: 101b783c0; end: 101b783f3;  */

void FUN_101b783c0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b783f4; end: 101b78457;  */

void FUN_101b783f4(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101b78878;
  plVar3[0x11] = lVar1;
  plVar3[0x12] = lVar2;
  plVar3[0x10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77974,0,0);
  return;
}



/* Entry: 101b78458; end: 101b7850b;  */

void FUN_101b78458(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11044d8e8;
    func_0x000107c613fc(&UNK_11044d8e8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    func_0x0001001ca524(0x42,0,0x3c,4,0,0,&UNK_10d9d9518,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574();
    func_0x000107c61574(puVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b7850c; end: 101b78553;  */

void FUN_101b7850c(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101b7887c;
  plVar1[0xb] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b77a98,0,0);
  return;
}



/* Entry: 101b78554; end: 101b786f7;  */

void FUN_101b78554(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = &UNK_11044d8e8;
  func_0x000107c613fc(&UNK_11044d8e8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,uVar9);
  puVar5 = &UNK_11044db88;
  func_0x000107c613fc(&UNK_11044db88,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101b786f8;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_101b78780;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10103b938;
  puStack_68 = &UNK_11044dba0;
  puStack_58 = puVar5;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_60 = FUN_101b771c8;
  puStack_58 = (undefined *)0x0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10103b93c;
  puStack_68 = &UNK_11044dbc8;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c4c600(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x76,0x98,0x30,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101b786f4);
    (*pcVar3)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x76,0xa2,0x2a,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101b786f8);
  (*pcVar3)();
}



/* Entry: 101b786f8; end: 101b7877f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b786f8(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e06000;
  if (lVar2 != 0) {
    if (((*(byte *)(lVar2 + _DAT_112e06000) != 2) && ((*(byte *)(lVar2 + _DAT_112e06000) & 1) == 0))
       && (param_1 == 1)) {
      FUN_101b7707c();
    }
    *(bool *)(lVar2 + lVar1) = param_1 == 1;
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101b78780; end: 101b7879f;  */

void FUN_101b78780(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b787a0; end: 101b7881f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b787a0(ulong param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c443c8();
    lVar1 = _DAT_112e05ff8;
    if (((*(byte *)(lVar2 + _DAT_112e05ff8) & 1) != 0) && ((param_1 & 1) == 0)) {
      FUN_101b7707c();
    }
    *(char *)(lVar2 + lVar1) = (char)param_1;
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101b78820; end: 101b78883;  */

void FUN_101b78820(long param_1,long param_2)

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



/* Entry: 101b78884; end: 101b78943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b78884(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar2 = param_2;
  FUN_101b7ad0c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e06058;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101b7a190();
  puStack_48 = puVar4;
  func_0x0001000285a8(0x112e06060,&UNK_10d9d9528);
  func_0x000107c613fc();
  ppuVar5 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar1) = ppuVar5;
  *(long *)(lVar3 + _DAT_112e06068) = param_2;
  puVar4 = PTR_s_init_1125d9248;
  lStack_58 = lVar3;
  lStack_50 = lVar2;
  func_0x000107c6157c(param_2);
  plVar6 = &lStack_58;
  func_0x000107c61154(plVar6,puVar4);
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 101b78944; end: 101b7894b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b78944(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_58 [16];
  undefined *puStack_48;
  
  lVar2 = unaff_x20;
  FUN_101b7ad0c();
  func_0x000107c610f8();
  lVar1 = _DAT_112e06058;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101b7a190();
  puStack_48 = puVar3;
  func_0x0001000285a8(0x112e06060,&UNK_10d9d9528);
  func_0x000107c613fc();
  ppuVar4 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(lVar2 + lVar1) = ppuVar4;
  *(long *)(lVar2 + _DAT_112e06068) = unaff_x20;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  puVar5 = auStack_58;
  func_0x000107c61154(puVar5,puVar3);
  *param_1 = (long)puVar5;
  return;
}



/* Entry: 101b7894c; end: 101b789f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7894c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 auStack_58 [8];
  undefined *puStack_48;
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e06058;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101b7a190();
  puStack_48 = puVar2;
  func_0x0001000285a8(0x112e06060,&UNK_10d9d9528);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e06068) = param_1;
  func_0x000107c61154(auStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b789f8; end: 101b78a7f;  */

undefined1  [16] FUN_101b789f8(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    func_0x000107c61434(param_3);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar3 = 1;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6142c(param_3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 101b78a80; end: 101b78b57; -[_TtC42MapPlaceCategoryIconResolverImplementation28MapPlaceCategoryIconResolver categoryIconUrlForVenueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b78a80(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000107c5faec(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e06058);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x0001000c74f0(&uStack_48);
  func_0x000107c61574(uVar2);
  uVar1 = param_2;
  FUN_101b789f8(param_3,param_2,uStack_48);
  func_0x000107c6142c(uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (uVar1 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x000107c5fadc(param_3,uVar1);
    FUN_101b7b218(param_3,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101b78b58; end: 101b78bbb;  */

void FUN_101b78b58(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b78bbc;
                    /* WARNING: Could not recover jumptable at 0x000101b78bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b7a7ec(param_1);
  return;
}



/* Entry: 101b78bbc; end: 101b78c43;  */

void FUN_101b78bbc(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b78bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101b78c44; end: 101b78d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b78c44(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar1 = lVar3;
  func_0x000107c4e7e4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xd0) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar2;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101b78d8c;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar2 = 0x112e06098;
    func_0x0001000285a8(0x112e06098,&UNK_10d9d9658);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    *(long *)(unaff_x22 + 0x98) = lVar1;
    *(undefined **)(unaff_x22 + 0x78) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
    *(code **)(unaff_x22 + 0x88) = FUN_101b7963c;
    *(undefined **)(unaff_x22 + 0x90) = &UNK_11044de40;
    func_0x000107c43020(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000101b78d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b78d8c; end: 101b78de3;  */

void FUN_101b78d8c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xe0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101b78de4;
  }
  else {
    pcVar1 = FUN_101b78eac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101b78de4; end: 101b78eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b78de4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  lVar2 = *(long *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar4 = uVar5;
  FUN_101b7a2a0();
  func_0x000107c6142c(uVar5);
  uVar5 = *(undefined8 *)(lVar2 + _DAT_112e06058);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000107c6157c(uVar5);
  func_0x000100075034(FUN_101b7b244,(undefined8 *)(unaff_x22 + 0x50),PTR___sytN_11034f1b0 + 8);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101b78ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101b78eac; end: 101b78f17;  */

void FUN_101b78eac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000101b78f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101b78f18; end: 101b7905f; -[_TtC42MapPlaceCategoryIconResolverImplementation28MapPlaceCategoryIconResolver resolveCategoryIconsForVenueIds:source:completionHandler:] */

void FUN_101b78f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11044ddd8;
  func_0x000107c613fc(&UNK_11044ddd8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11044de00;
  func_0x000107c613fc(&UNK_11044de00,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9d9630;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11044de28;
  func_0x000107c613fc(&UNK_11044de28,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9d9638;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9d9640,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101b79060; end: 101b790ef;  */

void FUN_101b79060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  func_0x000107c5fc54(param_1,PTR___sSSN_11034da80);
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  plVar1 = (long *)0x90;
  func_0x000107c61174(param_4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b790f0;
                    /* WARNING: Could not recover jumptable at 0x000101b790ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b7a7ec(param_1);
  return;
}



/* Entry: 101b790f0; end: 101b7918b;  */

void FUN_101b790f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar4 + 0x20);
  lVar1 = *(long *)(lVar4 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(uVar2);
  uVar3 = param_1;
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(param_1);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101b79188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 101b7918c; end: 101b791fb;  */

void FUN_101b7918c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b791fc;
                    /* WARNING: Could not recover jumptable at 0x000101b791f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b7aa28(param_1,param_2);
  return;
}



/* Entry: 101b791fc; end: 101b79247;  */

void FUN_101b791fc(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b79244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 101b79248; end: 101b7938f; -[_TtC42MapPlaceCategoryIconResolverImplementation28MapPlaceCategoryIconResolver resolveCategoryIconForVenueId:source:completionHandler:] */

void FUN_101b79248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11044dd60;
  func_0x000107c613fc(&UNK_11044dd60,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11044dd88;
  func_0x000107c613fc(&UNK_11044dd88,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9d95f8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11044ddb0;
  func_0x000107c613fc(&UNK_11044ddb0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9d9608;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9d9618,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101b79390; end: 101b79423;  */

void FUN_101b79390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  func_0x000107c5faec();
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  plVar1 = (long *)0x50;
  func_0x000107c61174(param_4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101b79424;
                    /* WARNING: Could not recover jumptable at 0x000101b79420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101b7aa28(param_1,param_2);
  return;
}



/* Entry: 101b79424; end: 101b794c7;  */

void FUN_101b79424(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x20);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(*(long *)(lVar4 + 0x10),param_1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000101b794c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101b794c8; end: 101b7963b;  */

void FUN_101b794c8(undefined8 *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar8 = *(ulong *)(param_3 + 0x10);
  if (uVar8 != 0) {
    uVar11 = 0;
    do {
      uVar2 = uVar11;
      if (uVar11 <= uVar8) {
        uVar2 = uVar8;
      }
      puVar12 = (ulong *)(param_3 + 0x28 + uVar11 * 0x10);
      uVar11 = uVar11 + 1;
      while( true ) {
        if (uVar11 - uVar2 == 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b7963c);
          (*pcVar5)();
        }
        uVar1 = puVar12[-1];
        uVar3 = *puVar12;
        lVar9 = *param_2;
        lVar10 = *(long *)(lVar9 + 0x10);
        func_0x000107c61434(uVar3);
        if (lVar10 == 0) goto LAB_101b79590;
        func_0x000107c61434(lVar9);
        uVar7 = uVar3;
        func_0x000100029284(uVar1);
        if ((uVar7 & 1) == 0) break;
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(lVar9);
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 2;
        if (uVar11 - uVar8 == 1) goto LAB_101b79610;
      }
      func_0x000107c6142c(lVar9);
LAB_101b79590:
      puVar6 = puVar4;
      func_0x000107c61558();
      if (((ulong)puVar6 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar4 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
        func_0x000100403514(1 < *(ulong *)(puVar4 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
      *(ulong *)(puVar4 + uVar2 * 0x10 + 0x20) = uVar1;
      *(ulong *)(puVar4 + uVar2 * 0x10 + 0x28) = uVar3;
    } while (uVar11 != uVar8);
  }
LAB_101b79610:
  *param_1 = puVar4;
  return;
}



/* Entry: 101b7963c; end: 101b796fb;  */

void FUN_101b7963c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_101b7b268(0);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 101b796fc; end: 101b79a2f;  */

void FUN_101b796fc(ulong *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 uVar17;
  
  puVar13 = (undefined *)*param_1;
  if (2000 < *(ulong *)(puVar13 + 0x10)) {
    func_0x000107c6142c(puVar13);
    puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    *param_1 = (ulong)PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  lVar12 = *(long *)(param_2 + 0x10);
  if (lVar12 != 0) {
    puVar16 = (ulong *)(param_2 + 0x28);
    do {
      uVar3 = puVar16[-1];
      uVar5 = *puVar16;
      lVar15 = *(long *)(param_3 + 0x10);
      func_0x000107c61434(uVar5);
      if (lVar15 == 0) {
LAB_101b7986c:
        func_0x000107c61558();
        puVar14 = (undefined *)*param_1;
        uVar8 = uVar3;
        uVar10 = uVar5;
        func_0x000100029284();
        uVar9 = (ulong)~(uint)uVar10 & 1;
        lVar15 = *(long *)(puVar14 + 0x10) + uVar9;
        if (SCARRY8(*(long *)(puVar14 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101b79a14);
          (*pcVar7)();
        }
        if (*(long *)(puVar14 + 0x18) < lVar15) {
          FUN_101b79ee4(lVar15,puVar13);
          uVar8 = uVar3;
          uVar9 = uVar5;
          func_0x000100029284();
          if (((uint)uVar10 & 1) != ((uint)uVar9 & 1)) {
LAB_101b79a20:
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101b79a30);
            (*pcVar7)();
          }
        }
        else if (((ulong)puVar13 & 1) == 0) {
          FUN_101b79d6c();
        }
        if ((uVar10 & 1) != 0) {
          puVar1 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 0x10);
          uVar17 = puVar1[1];
          *puVar1 = 0;
          puVar1[1] = 0;
          goto LAB_101b79770;
        }
        *(ulong *)(puVar14 + (uVar8 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar14 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar15 = *(long *)(puVar14 + 0x10);
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101b79a18);
          (*pcVar7)();
        }
LAB_101b799ac:
        *(long *)(puVar14 + 0x10) = lVar15 + 1;
      }
      else {
        func_0x000107c61434(param_3);
        uVar8 = uVar3;
        uVar10 = uVar5;
        func_0x000100029284();
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(param_3);
          puVar13 = (undefined *)*param_1;
          goto LAB_101b7986c;
        }
        puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + uVar8 * 0x10);
        uVar4 = *puVar1;
        uVar6 = puVar1[1];
        func_0x000107c61434();
        func_0x000107c6142c(param_3);
        uVar9 = *param_1;
        func_0x000107c61558();
        puVar14 = (undefined *)*param_1;
        uVar8 = uVar3;
        uVar10 = uVar5;
        func_0x000100029284();
        uVar11 = (ulong)~(uint)uVar10 & 1;
        lVar15 = *(long *)(puVar14 + 0x10) + uVar11;
        if (SCARRY8(*(long *)(puVar14 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101b79a1c);
          (*pcVar7)();
        }
        if (*(long *)(puVar14 + 0x18) < lVar15) {
          FUN_101b79ee4(lVar15,uVar9);
          uVar8 = uVar3;
          uVar9 = uVar5;
          func_0x000100029284();
          if (((uint)uVar10 & 1) != ((uint)uVar9 & 1)) goto LAB_101b79a20;
        }
        else if ((uVar9 & 1) == 0) {
          FUN_101b79d6c();
        }
        if ((uVar10 & 1) == 0) {
          *(ulong *)(puVar14 + (uVar8 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar14 + (uVar8 >> 6) * 8 + 0x40) | 1L << (uVar8 & 0x3f);
          puVar2 = (ulong *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x10);
          *puVar2 = uVar3;
          puVar2[1] = uVar5;
          puVar1 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar6;
          lVar15 = *(long *)(puVar14 + 0x10);
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x101b79a20);
            (*pcVar7)();
          }
          goto LAB_101b799ac;
        }
        puVar1 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar8 * 0x10);
        uVar17 = puVar1[1];
        *puVar1 = uVar4;
        puVar1[1] = uVar6;
LAB_101b79770:
        func_0x000107c6142c(uVar5);
        func_0x000107c6142c(uVar17);
      }
      *param_1 = (ulong)puVar14;
      puVar16 = puVar16 + 2;
      lVar12 = lVar12 + -1;
      puVar13 = puVar14;
    } while (lVar12 != 0);
  }
  return;
}



/* Entry: 101b79a30; end: 101b79c57;  */

void FUN_101b79a30(undefined8 *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  *param_1 = puVar9;
  lVar17 = *(long *)(param_3 + 0x10);
  if (lVar17 != 0) {
    lVar15 = *param_2;
    puVar16 = (ulong *)(param_3 + 0x28);
    do {
      if (*(long *)(lVar15 + 0x10) != 0) {
        uVar4 = puVar16[-1];
        uVar6 = *puVar16;
        func_0x000107c61434(uVar6);
        func_0x000107c61434(lVar15);
        uVar10 = uVar4;
        uVar12 = uVar6;
        func_0x000100029284();
        if ((uVar12 & 1) == 0) {
          func_0x000107c6142c(lVar15);
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar10 * 0x10);
          uVar5 = *puVar1;
          lVar7 = puVar1[1];
          func_0x000107c61434(lVar7);
          func_0x000107c6142c(lVar15);
          if (lVar7 != 0) {
            puVar11 = puVar9;
            func_0x000107c61558();
            uVar10 = uVar4;
            uVar12 = uVar6;
            func_0x000100029284();
            uVar13 = (ulong)~(uint)uVar12 & 1;
            lVar2 = *(long *)(puVar9 + 0x10) + uVar13;
            if (SCARRY8(*(long *)(puVar9 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x101b79c44);
              (*pcVar8)();
            }
            if (*(long *)(puVar9 + 0x18) < lVar2) {
              func_0x0001001833c8(lVar2,puVar11);
              uVar10 = uVar4;
              uVar13 = uVar6;
              func_0x000100029284();
              if (((uint)uVar12 & 1) != ((uint)uVar13 & 1)) {
                func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101b79c58);
                (*pcVar8)();
              }
joined_r0x000101b79bc0:
              if ((uVar12 & 1) != 0) goto LAB_101b79b8c;
LAB_101b79bc4:
              *(ulong *)(puVar9 + (uVar10 >> 6) * 8 + 0x40) =
                   *(ulong *)(puVar9 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
              puVar3 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
              *puVar3 = uVar4;
              puVar3[1] = uVar6;
              puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x10);
              *puVar1 = uVar5;
              puVar1[1] = lVar7;
              if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x101b79c48);
                (*pcVar8)();
              }
              *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
            }
            else {
              if (((ulong)puVar11 & 1) == 0) {
                func_0x000100184498();
                goto joined_r0x000101b79bc0;
              }
              if ((uVar12 & 1) == 0) goto LAB_101b79bc4;
LAB_101b79b8c:
              puVar1 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x10);
              uVar14 = puVar1[1];
              *puVar1 = uVar5;
              puVar1[1] = lVar7;
              func_0x000107c6142c(uVar6);
              func_0x000107c6142c(uVar14);
            }
            *param_1 = puVar9;
            goto LAB_101b79a9c;
          }
        }
        func_0x000107c6142c(uVar6);
      }
LAB_101b79a9c:
      puVar16 = puVar16 + 2;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  return;
}



/* Entry: 101b79c58; end: 101b79cb7; -[_TtC42MapPlaceCategoryIconResolverImplementation28MapPlaceCategoryIconResolver init] */

void FUN_101b79c58(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPlaceCategoryIconResolverImplementation.MapPlaceCategoryIconResolver",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b79c84);
  (*pcVar1)();
}



/* Entry: 101b79cb8; end: 101b79cef; -[_TtC42MapPlaceCategoryIconResolverImplementation28MapPlaceCategoryIconResolver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b79cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b79cd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b79cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e06068));
  return;
}



/* Entry: 101b79cf0; end: 101b79d6b;  */

void FUN_101b79cf0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101b79d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101b79d6c; end: 101b79ee3;  */

void FUN_101b79d6c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  func_0x0001000285a8(0x112e060a0,&UNK_10d9d9660);
  lVar13 = *unaff_x20;
  lVar7 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar13 || lVar1 + uVar9 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x40);
    if (uVar9 == 0) goto LAB_101b79e48;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        lVar12 = (LZCOUNT(uVar11) | lVar14 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar12);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar12);
        uVar8 = puVar3[1];
        uVar16 = puVar3[1];
        uVar15 = *puVar3;
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar12);
        puVar2[1] = uVar16;
        *puVar2 = uVar15;
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar5);
        if (uVar9 != 0) break;
LAB_101b79e48:
        do {
          lVar12 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101b79ee4);
            (*pcVar6)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_101b79ebc;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_101b79ebc:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101b79ee4; end: 101b7a29f;  */

void FUN_101b79ee4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_a8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e060a0;
  func_0x0001000285a8(0x112e060a0,&UNK_10d9d9660);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_101b7a15c:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b7a18c);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_101b7a15c;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    lVar10 = (LZCOUNT(uVar9) | lVar18 << 6) * 0x10;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + lVar10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar10);
    uVar20 = puVar2[1];
    uVar19 = *puVar2;
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(puVar2[1]);
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101b7a190);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 0x10);
    puVar2[1] = uVar20;
    *puVar2 = uVar19;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 101b7a2a0; end: 101b7a577;  */

undefined * FUN_101b7a2a0(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined1 auStack_a8 [72];
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar18 = (ulong *)(param_1 + 0x40);
  uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if (-uVar15 < 0x40) {
    uVar19 = ~(-1L << (-uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *puVar18;
  func_0x000107c61434();
  lVar10 = 0;
  lVar11 = lVar10;
  while( true ) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1 & uVar19) {
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar10 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar17 = *(ulong *)(*(long *)(param_1 + 0x38) + uVar12 * 8);
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar12 = uVar17;
      func_0x000107c3f704();
      func_0x000107c61180();
      uVar7 = uVar12;
      func_0x000107c5faec();
      uVar9 = param_2;
      func_0x000107c61170(uVar12);
      uVar12 = uVar7 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar12 = param_2 >> 0x38 & 0xf;
      }
      if ((uVar12 == 0) || (uVar12 = uVar17, func_0x000107c49c30(), (uVar12 & 1) != 0)) {
        func_0x000107c6142c(uVar3);
        func_0x000107c6142c(param_2);
      }
      else {
        uVar12 = *(ulong *)(puVar4 + 0x10);
        if (uVar12 < *(ulong *)(puVar4 + 0x18)) {
          func_0x000107c61434(uVar3);
          func_0x000107c61174(uVar17);
        }
        else {
          func_0x000107c61434(uVar3);
          func_0x000107c61174(uVar17);
          func_0x0001001833c8(uVar12 + 1,1);
        }
        func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar4 + 0x28));
        puVar8 = auStack_a8;
        uVar9 = uVar2;
        func_0x000107c5fb58(puVar8,uVar2,uVar3);
        func_0x000107c606a8();
        uVar16 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
        uVar14 = (ulong)puVar8 & (uVar16 ^ 0xffffffffffffffff);
        uVar13 = uVar14 >> 6;
        uVar12 = -1L << (uVar14 & 0x3f) &
                 (*(ulong *)(puVar4 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar12 == 0) {
          bVar6 = false;
          uVar12 = 0x3f - uVar16 >> 6;
          do {
            uVar14 = uVar13 + 1;
            if ((uVar14 == uVar12) && (bVar6)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101b7a578);
              (*pcVar5)();
            }
            uVar13 = 0;
            if (uVar14 != uVar12) {
              uVar13 = uVar14;
            }
            bVar6 = (bool)(uVar14 == uVar12 | bVar6);
          } while (*(ulong *)(puVar4 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar12 = ~*(ulong *)(puVar4 + uVar13 * 8 + 0x40);
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
        }
        else {
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar4 + uVar13 + 0x40) =
             1L << (uVar12 & 0x3f) | *(ulong *)(puVar4 + uVar13 + 0x40);
        puVar1 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar12 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1 = (ulong *)(*(long *)(puVar4 + 0x38) + uVar12 * 0x10);
        *puVar1 = uVar7;
        puVar1[1] = param_2;
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        func_0x000107c6142c(uVar3);
        func_0x000107c61170(uVar17);
      }
      func_0x000107c61170(uVar17);
      lVar11 = lVar10;
      param_2 = uVar9;
    }
    bVar6 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101b7a574);
      (*pcVar5)();
    }
    if ((long)(0x3f - uVar15 >> 6) <= lVar10) break;
    uVar19 = puVar18[lVar10];
  }
  FUN_101b7b260(param_1,puVar18,~uVar15,lVar11,0);
  return puVar4;
}



/* Entry: 101b7a578; end: 101b7a7eb;  */

void FUN_101b7a578(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7a7d8);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7a7ec);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7a7dc);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101b7a7d4);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101b7a7ec; end: 101b7a803;  */

void FUN_101b7a7ec(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7a804,0,0);
  return;
}



/* Entry: 101b7a804; end: 101b7a947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7a804(void)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar2 = _DAT_112e06058;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(lVar7 + _DAT_112e06058);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c6157c(uVar5);
  uVar6 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  func_0x000100075034(unaff_x22 + 0x28,0x101b7b2ac,unaff_x22 + 0x10,uVar6);
  func_0x000107c61574(uVar5);
  lVar4 = *(long *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  uVar5 = *(undefined8 *)(lVar7 + lVar2);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  func_0x000107c6157c(uVar5);
  uVar6 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  func_0x000100075034(unaff_x22 + 0x48,0x101b7b2c4,unaff_x22 + 0x30,uVar6);
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  func_0x000107c61574(uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
  if (*(long *)(lVar4 + 0x10) != 0) {
    plVar3 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101b7a948;
    lVar7 = *(long *)(unaff_x22 + 0x58);
    plVar3[0x17] = lVar4;
    plVar3[0x18] = lVar7;
    func_0x000107c614f0();
    plVar3[0x19] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b78c44,0,0);
    return;
  }
  func_0x000107c6142c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000101b7a944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 101b7a948; end: 101b7a9a3;  */

void FUN_101b7a948(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7a9a4,0,0);
  return;
}



/* Entry: 101b7a9a4; end: 101b7aa27;  */

void FUN_101b7a9a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 auStack_38 [2];
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = uVar2;
  func_0x000107c61558(uVar2);
  auStack_38[0] = uVar2;
  FUN_101b7a578(uVar4,&UNK_101391c9c,0,uVar3,auStack_38);
  func_0x000107c6142c(uVar4);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101b7aa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(auStack_38[0]);
  return;
}



/* Entry: 101b7aa28; end: 101b7aa43;  */

void FUN_101b7aa28(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7aa44,0,0);
  return;
}



/* Entry: 101b7aa44; end: 101b7ac03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b7aa44(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = _DAT_112e06058;
  lVar8 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(lVar8 + _DAT_112e06058);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(unaff_x22 + 0x10);
  func_0x000107c61574(uVar4);
  lVar5 = *(long *)(unaff_x22 + 0x10);
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_101b78c00:
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000107c6142c(lVar5);
    lVar6 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0x38) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    *(undefined8 *)(lVar6 + 0x20) = uVar4;
    *(undefined8 *)(lVar6 + 0x28) = uVar2;
    plVar7 = (long *)0xf0;
    func_0x000107c61434(uVar2);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x40) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101b7ac04;
    lVar5 = *(long *)(unaff_x22 + 0x30);
    plVar7[0x17] = lVar6;
    plVar7[0x18] = lVar5;
    func_0x000107c614f0();
    plVar7[0x19] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101b78c44,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c61434(lVar5);
  func_0x000100029284(uVar4);
  func_0x000107c6142c(lVar5);
  if ((uVar3 & 1) == 0) goto LAB_101b78c00;
  func_0x000107c6142c(lVar5);
  uVar4 = *(undefined8 *)(lVar8 + lVar6);
  func_0x000107c6157c(uVar4);
  func_0x0001000c74f0(unaff_x22 + 0x18);
  func_0x000107c61574(uVar4);
  lVar6 = *(long *)(unaff_x22 + 0x18);
  if (*(long *)(lVar6 + 0x10) == 0) {
    func_0x000107c6142c(lVar6);
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x20);
    uVar3 = *(ulong *)(unaff_x22 + 0x28);
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((uVar3 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar5 * 0x10);
      uVar4 = *puVar1;
      lVar5 = puVar1[1];
      func_0x000107c61434(lVar5);
      func_0x000107c61430(lVar6,2);
      uVar2 = 0;
      if (lVar5 != 0) {
        uVar2 = uVar4;
      }
      goto LAB_101b7abe8;
    }
    func_0x000107c61430(lVar6,2);
  }
  lVar5 = 0;
  uVar2 = 0;
LAB_101b7abe8:
                    /* WARNING: Could not recover jumptable at 0x000101b7ac00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,lVar5);
  return;
}



/* Entry: 101b7ac04; end: 101b7ac5b;  */

void FUN_101b7ac04(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  *(undefined8 *)(lVar2 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101b7ac5c,0,0);
  return;
}



/* Entry: 101b7ac5c; end: 101b7acfb;  */

void FUN_101b7ac5c(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x48);
  if (*(long *)(lVar5 + 0x10) == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x20);
    uVar3 = *(ulong *)(unaff_x22 + 0x28);
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    lVar5 = *(long *)(unaff_x22 + 0x48);
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x10);
      uVar4 = *puVar1;
      uVar6 = puVar1[1];
      func_0x000107c61434(uVar6);
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c6142c(lVar5);
                    /* WARNING: Could not recover jumptable at 0x000101b7acf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar6);
  return;
}



/* Entry: 101b7acfc; end: 101b7ad0b;  */

undefined1  [16] FUN_101b7acfc(void)

{
  return ZEXT816(0x11044dcb0);
}



/* Entry: 101b7ad0c; end: 101b7ad2b;  */

void FUN_101b7ad0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb028);
  return;
}



/* Entry: 101b7ad2c; end: 101b7ad33;  */

void FUN_101b7ad2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101b7ad34; end: 101b7ada3;  */

undefined8 * FUN_101b7ad34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}


