/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10141ffec; end: 101420037; -[SCSpectaclesPairingFullscreenMediaView backButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10141ffec(long param_1)

{
  param_1 = param_1 + _DAT_112d7e318;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e318();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101420038; end: 101420083; -[SCSpectaclesPairingFullscreenMediaView primaryButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420038(long param_1)

{
  param_1 = param_1 + _DAT_112d7e318;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e31c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 101420084; end: 1014200cf; -[SCSpectaclesPairingFullscreenMediaView secondaryButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420084(long param_1)

{
  param_1 = param_1 + _DAT_112d7e318;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e320();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 1014200d0; end: 10142012f; -[SCSpectaclesPairingFullscreenMediaView initWithFrame:] */

void FUN_1014200d0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesPairingUtils.PairingFullscreenMediaView",0x33,"init(frame:)",0xc,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014200fc);
  (*pcVar1)();
}



/* Entry: 101420130; end: 10142021b; -[SCSpectaclesPairingFullscreenMediaView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010142015c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010142018c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014201ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014201cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014201b0) */
/* WARNING: Removing unreachable block (ram,0x000101420190) */
/* WARNING: Removing unreachable block (ram,0x000101420160) */
/* WARNING: Removing unreachable block (ram,0x0001014201d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420130(long param_1)

{
  func_0x0001014201f8(param_1 + _DAT_112d7e318);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7e358));
  return;
}



/* Entry: 10142021c; end: 10142023b;  */

void FUN_10142021c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4948);
  return;
}



/* Entry: 10142023c; end: 101420283;  */

void FUN_10142023c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_109025108;
  (*(code *)&UNK_109025108)();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    puVar2 = (undefined *)0xe000000000000000;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lRam0000000112d7e3d0 = lVar1;
  puRam0000000112d7e3d8 = puVar2;
  return;
}



/* Entry: 101420284; end: 1014202ef;  */

void FUN_101420284(long param_1,code *param_2,long *param_3,undefined8 *param_4)

{
  long lVar1;
  
  (*param_2)();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    param_2 = (code *)0xe000000000000000;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  *param_3 = lVar1;
  *param_4 = param_2;
  return;
}



/* Entry: 1014202f0; end: 101420367;  */

void FUN_1014202f0(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101420458(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 101420368; end: 101420433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420368(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20 + _DAT_112d7e318;
  func_0x000107c61614(lVar3,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7e320) = 0;
  lVar1 = _DAT_112d7e328;
  FUN_10141ea70();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  lVar1 = _DAT_112d7e330;
  FUN_10141ece0();
  *(long *)(unaff_x20 + lVar1) = lVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e338) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e340) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e348) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e350) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSpectaclesPairingUtils/PairingFullscreenMediaView.swift",0x39,2,0x87,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101420434);
  (*pcVar2)();
}



/* Entry: 101420434; end: 101420457;  */

void FUN_101420434(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    FUN_10141e9c0();
    func_0x000107c61170(lVar1);
    func_0x000107c61174(param_1);
    FUN_1014204d8(param_1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101420458; end: 101420497;  */

void FUN_101420458(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101420498; end: 1014204d7;  */

void FUN_101420498(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c610f8();
  FUN_1014205fc(param_1,param_2);
  return;
}



/* Entry: 1014204d8; end: 1014205d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014204d8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d7e3e8);
    puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    func_0x000107c457a0();
    puVar3 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
    func_0x000107c61168();
    func_0x000107c4e99c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d7e3f0);
    *(undefined **)(unaff_x20 + _DAT_112d7e3f0) = puVar3;
    func_0x000107c61170(uVar4);
    lVar1 = _DAT_112d7e3e0;
    func_0x000107c61428(unaff_x20 + _DAT_112d7e3e0,auStack_58,0,0);
    if (*(char *)(unaff_x20 + lVar1) == '\x01') {
      func_0x000107c4e868(uVar5);
    }
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c130d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112d7e3e8),
             PTR_s_replaceCurrentItemWithPlayerItem_112629d78,0);
  return;
}



/* Entry: 1014205d4; end: 1014205fb; +[_TtC24SCSpectaclesPairingUtils16PlayerLooperView layerClass] */

void FUN_1014205d4(void)

{
  FUN_101420904(0,0x112d50dc0,&PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 1014205fc; end: 101420903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014205fc(undefined *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7e400);
  *puVar1 = 0xd00000000000001e;
  puVar1[1] = 0x800000010ef3e3e0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7e3f0) = 0;
  lVar2 = _DAT_112d7e408;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined1 *)(unaff_x20 + _DAT_112d7e3e0) = 1;
  puVar3 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___AVQueuePlayer_1126de0c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    uVar4 = *puVar1;
    uVar9 = puVar1[1];
    func_0x000107c61434(uVar9);
    func_0x000107c5fadc(uVar4,uVar9);
    func_0x000107c6142c(uVar9);
    puVar5 = puVar3;
    func_0x000107c4f7ec();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar4);
  }
  lVar2 = _DAT_112d7e3e8;
  *(undefined **)(unaff_x20 + _DAT_112d7e3e8) = puVar5;
  func_0x000107c5a604(0);
  func_0x000107c57764(*(undefined8 *)(unaff_x20 + lVar2));
  puVar6 = &stack0xffffffffffffffa0;
  func_0x000107c61154(0,0,0,0,puVar6,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c5a050();
  puVar7 = puVar6;
  func_0x000107c4aba4(puVar6);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(puVar7,puVar3,0,0,0);
  func_0x000107c57500();
  func_0x000107c61170(puVar7);
  puVar7 = puVar6;
  func_0x000107c4aba4(puVar6);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
  func_0x000107c61168(PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00);
  func_0x000107c61490(puVar7,puVar3,0,0,0);
  func_0x000107c5a51c();
  func_0x000107c61170(puVar7);
  uVar4 = param_2;
  func_0x000107c5e370(param_2);
  func_0x000107c61180();
  puVar3 = &UNK_1103b53c0;
  func_0x000107c613fc(&UNK_1103b53c0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,puVar6);
  func_0x000107c61170(puVar6);
  pcStack_70 = FUN_101420b48;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100c1de60;
  puStack_78 = &UNK_1103b53d8;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar9 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(uVar9);
  return puVar6;
}



/* Entry: 101420904; end: 1014209cb;  */

void FUN_101420904(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014209cc; end: 101420a8b; -[_TtC24SCSpectaclesPairingUtils16PlayerLooperView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014209cc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7e400);
  *puVar1 = 0xd00000000000001e;
  puVar1[1] = 0x800000010ef3e3e0;
  *(undefined8 *)(param_1 + _DAT_112d7e3f0) = 0;
  lVar2 = _DAT_112d7e408;
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  *(undefined1 *)(param_1 + _DAT_112d7e3e0) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCSpectaclesPairingUtils/PlayerLooperView.swift",0x2f,2,0x55,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101420a8c);
  (*pcVar3)();
}



/* Entry: 101420a8c; end: 101420aeb; -[_TtC24SCSpectaclesPairingUtils16PlayerLooperView initWithFrame:] */

void FUN_101420a8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSpectaclesPairingUtils.PlayerLooperView",0x29,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101420ab8);
  (*pcVar1)();
}



/* Entry: 101420aec; end: 101420b47; -[_TtC24SCSpectaclesPairingUtils16PlayerLooperView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101420b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101420b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420aec(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7e400 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7e3e8));
  return;
}



/* Entry: 101420b48; end: 101420b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420b48(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112d7e3e0;
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + _DAT_112d7e3e0,auStack_50,0,0);
    if (*(char *)(lVar2 + lVar1) == '\x01') {
      func_0x000107c4e868(*(undefined8 *)(lVar2 + _DAT_112d7e3e8));
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101420b6c; end: 101420b8b;  */

void FUN_101420b6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4a58);
  return;
}



/* Entry: 101420b8c; end: 101420b97; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin name] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420b8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7e438);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7e438))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101420b98; end: 101420ba3; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin scriptString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420b98(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7e440);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112d7e440))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101420ba4; end: 101420beb;  */

void FUN_101420ba4(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101420bec; end: 101420bfb; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin injectionTime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101420bec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112d7e448);
}



/* Entry: 101420bfc; end: 101420c43; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin callbackNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420bfc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d7e450);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101420c44; end: 101420c4b; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin forMainFrameOnly] */

undefined8 FUN_101420c44(void)

{
  return 0;
}



/* Entry: 101420c4c; end: 101420f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101420c4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puStack_60 = (undefined *)0x0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(uStack_58);
  puStack_60 = (undefined *)0xd000000000000015;
  uStack_58 = 0x800000010ef3e620;
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112d7e460),
                      ((undefined8 *)(unaff_x20 + _DAT_112d7e460))[1]);
  func_0x000107c5fb78(0x3b2927,0xe300000000000000);
  uVar1 = uStack_58;
  puVar2 = puStack_60;
  func_0x000107c5fadc(puStack_60,uStack_58);
  func_0x000107c6142c(uVar1);
  pcStack_40 = FUN_101420fc0;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101420ff8;
  puStack_48 = &UNK_1103b54a0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c42a80(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101420f34; end: 101420fbf; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin userContentController:didReceive:webView:] */

/* WARNING: Possible PIC construction at 0x000101420f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101420fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101420f98) */
/* WARNING: Removing unreachable block (ram,0x000101420fa8) */

void FUN_101420f34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_101421830(param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101420fc0; end: 101420ff7;  */

void FUN_101420fc0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6d58;
  func_0x000107c610f8(PTR_PTR_1126a6d58);
  func_0x000107c453e4();
  func_0x000107bc15b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101420ff8; end: 10142109b;  */

void FUN_101420ff8(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long alStack_50 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    lVar3 = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
  }
  else {
    lVar3 = param_2;
    func_0x000107c614f0();
  }
  alStack_50[0] = param_2;
  alStack_50[3] = lVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(alStack_50,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
  FUN_101421a44(alStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 10142109c; end: 1014211a7;  */

void FUN_10142109c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  lVar1 = 0;
  func_0x000107c5f804();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  lVar1 = 0;
  func_0x000107c5ec24();
  *(long *)(unaff_x22 + 200) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xe8) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  lVar1 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014211a8,0,0);
  return;
}



/* Entry: 1014211a8; end: 10142168b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014211a8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *pcVar15;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x70,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 == 0) goto LAB_101421410;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar14 = *(undefined8 *)(unaff_x22 + 200);
  lVar11 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c5ec14(uVar7,0xd00000000000001d,0x800000010ef3e660);
  pcVar15 = *(code **)(lVar11 + 0x30);
  (*pcVar15)(uVar7,1,uVar14);
  if ((int)uVar7 == 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar11 = 0x112d70260;
    func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
    lVar2 = 0;
    func_0x000107c5ebbc();
    lVar8 = *(long *)(*(long *)(lVar2 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
    uVar13 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    func_0x000107c613fc(lVar11,uVar13 + lVar8 * 3,uVar5 | 7);
    *(undefined8 *)(lVar11 + 0x18) = 6;
    *(undefined8 *)(lVar11 + 0x10) = 3;
    lVar2 = lVar11 + uVar13;
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112d7e460);
    uVar9 = ((undefined8 *)(lVar6 + _DAT_112d7e460))[1];
    func_0x000107c61434(uVar9);
    func_0x000107c5ebb0(lVar2,0x64696973,0xe400000000000000,uVar7,uVar9);
    func_0x000107c6142c(uVar9);
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112d7e468);
    uVar9 = ((undefined8 *)(lVar6 + _DAT_112d7e468))[1];
    func_0x000107c61434(uVar9);
    func_0x000107c5ebb0(lVar2 + lVar8,0x73646970,0xe400000000000000,uVar7,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c5ebb0(lVar2 + lVar8 * 2,0x3163,0xe200000000000000,uVar14,uVar10);
    func_0x000107c5ebc8(lVar11);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = uVar9;
  (*pcVar15)(uVar9,1,uVar12);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar11 = *(long *)(unaff_x22 + 0xf0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  if ((int)uVar7 == 0) {
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    (**(code **)(lVar2 + 0x10))(uVar7,uVar9,uVar12);
    func_0x000107c5ebe8(uVar10);
    (**(code **)(lVar2 + 8))(uVar7,uVar12);
    (**(code **)(lVar11 + 0x30))(uVar10,1,uVar14);
    if ((int)uVar10 == 1) {
      func_0x000107c61170(lVar6);
      goto LAB_1014213e0;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
    (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
              (uVar14,*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x0001000d224c(unaff_x22 + 0x88);
    lVar11 = *(long *)(unaff_x22 + 0x88);
    if (lVar11 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0xf0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xf8),*(undefined8 *)(unaff_x22 + 0xe8));
      func_0x000107c61170(lVar6);
    }
    else {
      func_0x000107c5ed90();
      *(code **)(unaff_x22 + 0x30) = FUN_10142168c;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(code **)(unaff_x22 + 0x20) = FUN_101365b04;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_1103b5518;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar2);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
      lVar8 = lVar11;
      func_0x000107c3ecec(lVar11);
      func_0x000107c61180();
      func_0x000107c60bd0(lVar2);
      func_0x000107c61170(uVar14);
      func_0x000107c615e8(lVar11);
      uVar5 = 0;
      func_0x000107c61544(0,"",0x80,0x60,0x20,1);
      func_0x000107c61574(0);
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10142168c);
        (*pcVar15)();
      }
      func_0x0001000d224c(unaff_x22 + 0x90);
      lVar2 = *(long *)(unaff_x22 + 0x90);
      lVar11 = lVar8;
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x22 + 0xb8);
        lVar4 = *(long *)(unaff_x22 + 0xc0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
        func_0x0001000295c4(0);
        (**(code **)(lVar3 + 0x68))
                  (lVar4,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,
                   uVar14);
        lVar11 = lVar4;
        func_0x000107c5fff0(lVar4);
        (**(code **)(lVar3 + 8))(lVar4,uVar14);
        *(code **)(unaff_x22 + 0x60) = FUN_101421690;
        *(undefined8 *)(unaff_x22 + 0x68) = 0;
        *(undefined **)(unaff_x22 + 0x40) = puVar1;
        *(undefined8 *)(unaff_x22 + 0x48) = 0x42000000;
        *(code **)(unaff_x22 + 0x50) = FUN_101365b40;
        *(undefined **)(unaff_x22 + 0x58) = &UNK_1103b5540;
        lVar3 = unaff_x22 + 0x40;
        func_0x000107c60bc4(lVar3);
        lVar4 = lVar2;
        func_0x000107c5c2f4(lVar2);
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        func_0x000107c60bd0(lVar3);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar4);
      }
      func_0x000107c61170(lVar6);
      lVar6 = *(long *)(unaff_x22 + 0xf0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
      func_0x000107c61170(lVar11);
      (**(code **)(lVar6 + 8))(uVar14,uVar7);
    }
  }
  else {
    func_0x000107c61170(lVar6);
    (**(code **)(lVar11 + 0x38))(uVar10,1,1,uVar14);
LAB_1014213e0:
    FUN_101421a44(*(undefined8 *)(unaff_x22 + 0xe0),0x112d36580,&UNK_10d9016d0);
  }
  FUN_101421a44(*(undefined8 *)(unaff_x22 + 0x100),0x112d4b5b0,&UNK_10d912140);
LAB_101421410:
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x100));
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101421464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10142168c; end: 10142168f;  */

void FUN_10142168c(void)

{
  return;
}



/* Entry: 101421690; end: 1014216c7;  */

void FUN_101421690(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a6d58;
  func_0x000107c610f8(PTR_PTR_1126a6d58);
  func_0x000107c453e4();
  func_0x000107bc162c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1014216c8; end: 101421727; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin init] */

void FUN_1014216c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PixelMatchingInjectionScriptPlugin.PixelMatchingInjectionScriptPlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014216f4);
  (*pcVar1)();
}



/* Entry: 101421728; end: 1014217bf; -[_TtC34PixelMatchingInjectionScriptPlugin34PixelMatchingInjectionScriptPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001014217a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014217a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421728(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7e438 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7e440 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7e450));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7e460 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d7e468 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7e470));
  return;
}



/* Entry: 1014217c0; end: 10142182f;  */

void FUN_1014217c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4b38);
  return;
}



/* Entry: 101421830; end: 10142197f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421830(long *param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long unaff_x23;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112d7e468))[1];
  uVar9 = *(ulong *)(unaff_x20 + _DAT_112d7e468) & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar9 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar9 == 0) {
    return;
  }
  plVar7 = param_1;
  lVar4 = param_2;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  plVar8 = plVar7;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000103c54dec();
  if (plVar8 == (long *)*plVar7 && lVar4 == plVar7[1]) {
    func_0x000107c6142c(lVar4);
  }
  else {
    lVar10 = lVar4;
    func_0x000107c605b8();
    func_0x000107c6142c(lVar4);
    if (((ulong)plVar8 & 1) == 0) {
      plVar7 = param_1;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      plVar8 = plVar7;
      func_0x000107c5faec();
      func_0x000107c61170();
      func_0x000103c54df8();
      if ((plVar8 == (long *)*plVar7) && (lVar10 == plVar7[1])) {
        func_0x000107c6142c(lVar10);
      }
      else {
        func_0x000107c605b8(plVar8,lVar10,(long *)*plVar7,plVar7[1],0);
        func_0x000107c6142c(lVar10);
        if (((ulong)plVar8 & 1) == 0) {
          return;
        }
      }
      func_0x000107c3eb80(param_1);
      func_0x000107c61180();
      func_0x000107c60234(&pcStack_50);
      func_0x000107c615e8(param_1);
      uVar6 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar2 = PTR___sypN_11034f1a8;
      ppuVar3 = &puStack_60;
      func_0x000107c6147c(ppuVar3,&pcStack_50,PTR___sypN_11034f1a8 + 8,uVar6,6);
      puVar5 = puStack_60;
      if (((ulong)ppuVar3 & 1) != 0) {
        if (*(long *)(puStack_60 + 0x10) == 0) {
          puStack_48 = (undefined *)0x0;
          pcStack_50 = (code *)0x0;
          unaff_x23 = 0;
        }
        else {
          func_0x000107c61434(puStack_60);
          uVar9 = 0;
          lVar4 = -0x2ffffffffffffff0;
          func_0x000100029284(0xd000000000000010);
          if ((uVar9 & 1) == 0) {
            func_0x000107c6142c(puVar5);
            puStack_48 = (undefined *)0x0;
            pcStack_50 = (code *)0x0;
            unaff_x23 = 0;
          }
          else {
            func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar4 * 0x20,&pcStack_50);
            func_0x000107c6142c(puVar5);
          }
        }
        func_0x000107c6142c(puVar5);
        if (unaff_x23 == 0) {
          FUN_101421a44(&pcStack_50,0x112d387f8,&UNK_10d902650);
        }
        else {
          ppuVar3 = &puStack_60;
          func_0x000107c6147c(ppuVar3,&pcStack_50,puVar2 + 8,PTR___sSSN_11034da80,6);
          if (((ulong)ppuVar3 & 1) != 0) {
            puVar2 = &UNK_1103b54d8;
            func_0x000107c613fc(&UNK_1103b54d8,0x18,7);
            func_0x000107c61614(puVar2 + 0x10,unaff_x20);
            puVar5 = &UNK_1103b5500;
            func_0x000107c613fc(&UNK_1103b5500,0x28,7);
            *(undefined **)(puVar5 + 0x10) = puVar2;
            *(undefined **)(puVar5 + 0x18) = puStack_60;
            *(undefined8 *)(puVar5 + 0x20) = uStack_58;
            uVar6 = 6;
            func_0x0001001ca524(6,0,8,3,0,0,&UNK_10d93c698,puVar5,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(puVar5);
            func_0x000107c61574(uVar6);
          }
        }
      }
      return;
    }
  }
  ppuVar3 = &puStack_60;
  puStack_60 = (undefined *)0x0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(uStack_58);
  puStack_60 = (undefined *)0xd000000000000015;
  uStack_58 = 0x800000010ef3e620;
  func_0x000107c5fb78(*(undefined8 *)(unaff_x20 + _DAT_112d7e460),
                      ((undefined8 *)(unaff_x20 + _DAT_112d7e460))[1]);
  func_0x000107c5fb78(0x3b2927,0xe300000000000000);
  uVar6 = uStack_58;
  puVar2 = puStack_60;
  func_0x000107c5fadc(puStack_60,uStack_58);
  func_0x000107c6142c(uVar6);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101420ff8;
  puStack_48 = &UNK_1103b54a0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c42a80(param_2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101421980; end: 10142199b;  */

void FUN_101421980(long param_1,long param_2)

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



/* Entry: 10142199c; end: 101421a07;  */

void FUN_10142199c(void)

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
  plVar4 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101421a08;
  plVar4[0x14] = lVar1;
  plVar4[0x15] = lVar5;
  plVar4[0x13] = lVar2;
  lVar2 = 0;
  func_0x000107c5f804();
  plVar4[0x16] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x17] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar3;
  lVar2 = 0;
  func_0x000107c5ec24();
  plVar4[0x19] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x1a] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1b] = uVar3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1c] = uVar3;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar4[0x1d] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0x1e] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1f] = uVar3;
  lVar2 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014211a8,0,0);
  return;
}



/* Entry: 101421a08; end: 101421a43;  */

void FUN_101421a08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101421a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101421a44; end: 101421a83;  */

undefined8 FUN_101421a44(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101421a84; end: 101421a93;  */

void FUN_101421a84(long param_1,long param_2)

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



/* Entry: 101421a94; end: 101421ad7;  */

void FUN_101421a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170(param_3);
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101421ad8; end: 101421d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421ad8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long lStack_70;
  long lStack_68;
  
  lVar18 = *(long *)(unaff_x20 + 0x10);
  lVar15 = *(long *)(lVar18 + _DAT_112fbae08);
  if (lVar15 != 0) {
    lVar16 = ((undefined8 *)(lVar15 + _DAT_11308b510))[1];
    if (lVar16 != 0) {
      uVar14 = *(undefined8 *)(lVar15 + _DAT_11308b510);
      uVar1 = *(undefined8 *)(lVar15 + _DAT_11308b508);
      uVar2 = ((undefined8 *)(lVar15 + _DAT_11308b508))[1];
      func_0x0001000285a8(0x112d7e4b0,&UNK_10d93c6b0);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x18);
      func_0x000107c61174();
      func_0x000107c61434(lVar16);
      func_0x000107c61434(uVar2);
      uVar5 = uVar17;
      func_0x000107c44f4c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x0001000bda74();
      func_0x000107c61170(uVar5);
      func_0x0001000285a8(0x112d7e4b8,&UNK_10d951260);
      func_0x000107c44f60();
      func_0x000107c61180();
      uVar7 = uVar17;
      func_0x0001000bda74();
      func_0x000107c61170(uVar17);
      lVar8 = 0;
      FUN_1014217c0();
      lVar9 = lVar8;
      func_0x000107c610f8();
      puVar10 = (undefined8 *)(lVar9 + _DAT_112d7e438);
      *puVar10 = 0x616d5f6c65786970;
      puVar10[1] = 0xee00676e69686374;
      puVar10 = (undefined8 *)(lVar9 + _DAT_112d7e440);
      *puVar10 = 0;
      puVar10[1] = 0xe000000000000000;
      *(undefined8 *)(lVar9 + _DAT_112d7e448) = 1;
      lVar4 = _DAT_112d7e450;
      puVar10 = (undefined8 *)0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      puVar10[3] = 4;
      puVar10[2] = 2;
      puVar11 = puVar10;
      func_0x000103c54dec();
      puVar12 = (undefined8 *)puVar11[1];
      puVar10[4] = *puVar11;
      puVar10[5] = puVar12;
      func_0x000107c61434();
      func_0x000103c54df8();
      uVar5 = puVar12[1];
      puVar10[6] = *puVar12;
      puVar10[7] = uVar5;
      *(undefined8 **)(lVar9 + lVar4) = puVar10;
      *(undefined1 *)(lVar9 + _DAT_112d7e458) = 0;
      puVar10 = (undefined8 *)(lVar9 + _DAT_112d7e460);
      *puVar10 = uVar1;
      puVar10[1] = uVar2;
      puVar10 = (undefined8 *)(lVar9 + _DAT_112d7e468);
      *puVar10 = uVar14;
      puVar10[1] = lVar16;
      *(undefined8 *)(lVar9 + _DAT_112d7e470) = uVar6;
      *(undefined8 *)(lVar9 + _DAT_112d7e478) = uVar7;
      puVar3 = PTR_s_init_1125d9248;
      lStack_70 = lVar9;
      lStack_68 = lVar8;
      func_0x000107c61434();
      plVar13 = &lStack_70;
      func_0x000107c61154(plVar13,puVar3);
      func_0x000107c4fba8(*(undefined8 *)(lVar18 + _DAT_112fbae18));
      func_0x000107c61170(lVar15);
      func_0x000107c61170(plVar13);
    }
  }
  return;
}



/* Entry: 101421d64; end: 101421d8f;  */

void FUN_101421d64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101421d90; end: 101421daf;  */

void FUN_101421d90(void)

{
  FUN_101421ad8();
  return;
}



/* Entry: 101421db0; end: 101421db7;  */

undefined8 FUN_101421db0(void)

{
  return 0;
}



/* Entry: 101421db8; end: 101421dd7;  */

void FUN_101421db8(void)

{
  func_0x000107c61168(&PTR_PTR_112d7e500);
  return;
}



/* Entry: 101421dd8; end: 101421de3; -[SCPixelMatchingInjectionScriptPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421dd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e568;
  func_0x000107c61428(param_1 + _DAT_112d7e568,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101421de4; end: 101421def; -[SCPixelMatchingInjectionScriptPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421de4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e568;
  func_0x000107c61428(param_1 + _DAT_112d7e568,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101421df0; end: 101421dfb; -[SCPixelMatchingInjectionScriptPluginEntryPoint networkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421df0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e570;
  func_0x000107c61428(param_1 + _DAT_112d7e570,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101421dfc; end: 101421e07; -[SCPixelMatchingInjectionScriptPluginEntryPoint setNetworkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e570;
  func_0x000107c61428(param_1 + _DAT_112d7e570,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101421e08; end: 101421e13; -[SCPixelMatchingInjectionScriptPluginEntryPoint webBrowsingConfigService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421e08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7e578;
  func_0x000107c61428(param_1 + _DAT_112d7e578,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101421e14; end: 101421e57;  */

void FUN_101421e14(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101421e58; end: 101421e63; -[SCPixelMatchingInjectionScriptPluginEntryPoint setWebBrowsingConfigService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101421e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7e578;
  func_0x000107c61428(param_1 + _DAT_112d7e578,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101421e64; end: 101421eb7;  */

void FUN_101421e64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101421eb8; end: 101421fcb;  */

/* WARNING: Possible PIC construction at 0x000101421f58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101421f68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101421f5c) */
/* WARNING: Removing unreachable block (ram,0x000101421f6c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101421eb8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d5ec();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5e1c0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_101421db8();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x10) = lVar1;
        *(long *)(lVar3 + 0x18) = lVar2;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        FUN_101421ad8();
        lVar1 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101421fcc; end: 101421ff3; -[SCPixelMatchingInjectionScriptPluginEntryPoint begin] */

void FUN_101421fcc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101421eb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101421ff4; end: 101422037; -[SCPixelMatchingInjectionScriptPluginEntryPoint end] */

void FUN_101421ff4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101422038; end: 101422247;  */

void FUN_101422038(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == 0x536b726f7774656e) && (param_3 == -0x108c9a9c96898d9b)) ||
       (func_0x000107c605b8(0x536b726f7774656e,0xef73656369767265,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c56a70();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef10d5a80)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000018,0x800000010ef2a580,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PixelMatchingInjectionScriptPlugin/SCPixelMatchingInjectionScriptPluginEntryPoint.swift"
                              ,0x57,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101422248);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a680();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101422248; end: 1014222f3; -[SCPixelMatchingInjectionScriptPluginEntryPoint setValue:forIvarName:] */

void FUN_101422248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_101422038(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1014222f4; end: 10142237b; -[SCPixelMatchingInjectionScriptPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014222f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7e568,0);
  func_0x000107c61614(param_1 + _DAT_112d7e570,0);
  func_0x000107c61614(param_1 + _DAT_112d7e578,0);
  *(undefined8 *)(param_1 + _DAT_112d7e580) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10142237c; end: 1014223af;  */

void FUN_10142237c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1014223b0; end: 101422407; -[SCPixelMatchingInjectionScriptPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014223b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7e568);
  func_0x000107c61610(param_1 + _DAT_112d7e570);
  func_0x000107c61610(param_1 + _DAT_112d7e578);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7e580));
  return;
}



/* Entry: 101422408; end: 101422427;  */

void FUN_101422408(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4c38);
  return;
}



/* Entry: 101422428; end: 101422487; -[_TtC27ExternalAppNavigationPlugin27ExternalAppNavigationPlugin init] */

void FUN_101422428(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalAppNavigationPlugin.ExternalAppNavigationPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101422454);
  (*pcVar1)();
}



/* Entry: 101422488; end: 101422533; -[_TtC27ExternalAppNavigationPlugin27ExternalAppNavigationPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101422488(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7e5b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d7e5b8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7e5c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d7e5c8));
  func_0x000101424adc(param_1 + _DAT_112d7e5d0,0x112d7e768,&UNK_10d93c7c0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7e5d8));
  func_0x000101424b1c(param_1 + _DAT_112d7e5e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112d7e5e8 + 8))
  ;
  return;
}



/* Entry: 101422534; end: 1014233bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101422534(undefined8 param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar2 = 0x112d36580;
  uStack_70 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = (long)&uStack_70 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = uVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  uVar8 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar9 = param_2;
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c5eaf0(uVar5);
  (**(code **)(lVar7 + 8))(lVar6,lVar2);
  uVar9 = uVar5;
  (**(code **)(lVar11 + 0x30))(uVar5,1,lVar3);
  if ((int)uVar9 == 1) {
    func_0x000101424adc(uVar5,0x112d36580,&UNK_10d9016d0);
    return 1;
  }
  (**(code **)(lVar11 + 0x20))(uVar8,uVar5,lVar3);
  func_0x000107c5c744();
  func_0x000107c61180();
  if (param_2 != 0) {
    uVar9 = param_2;
    func_0x000107c4a028();
    func_0x000107c61170(param_2);
    if ((int)uVar9 == 0) goto LAB_1014227f4;
    puVar1 = (ulong *)(unaff_x20 + _DAT_112d7e5e8);
    uVar9 = puVar1[1];
    if (uVar9 != 0) {
      uVar10 = *puVar1;
      uVar4 = uVar9;
      func_0x000107c61434();
      param_2 = uVar5;
      func_0x000107c5ed70();
      if ((uVar10 == uVar4) && (uVar9 == param_2)) {
        func_0x000107c6142c(uVar9);
        func_0x000107c6142c(param_2);
LAB_101422740:
        (**(code **)(lVar11 + 8))(uVar8,lVar3);
        uVar9 = puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        func_0x000107c6142c(uVar9);
        return 1;
      }
      func_0x000107c605b8(uVar10,uVar9,uVar4,param_2,0);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(param_2);
      if ((uVar10 & 1) != 0) goto LAB_101422740;
    }
    func_0x0001000d224c(&uStack_68);
    if (uStack_68 != 0) {
      func_0x000107c5ed90();
      uVar9 = uStack_68;
      func_0x000107c4a6c4();
      func_0x000107c615e8(uStack_68);
      func_0x000107c61170(param_2);
      if ((uVar9 & 1) != 0) {
        func_0x000101422828(uVar8);
        goto LAB_1014227dc;
      }
    }
    uVar9 = uVar8;
    func_0x000101422a8c();
    if ((uVar9 & 1) != 0) {
      func_0x000101422f0c(uVar8,uStack_70);
LAB_1014227dc:
      (**(code **)(lVar11 + 8))(uVar8,lVar3);
      return 0;
    }
  }
LAB_1014227f4:
  (**(code **)(lVar11 + 8))(uVar8,lVar3);
  return 1;
}



/* Entry: 1014233bc; end: 101423433; -[_TtC27ExternalAppNavigationPlugin27ExternalAppNavigationPlugin webView:decidePolicyForNavigationAction:] */

undefined8
FUN_1014233bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101422534(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101423434; end: 10142372f;  */

undefined * FUN_101423434(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined1 uStack_169;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    uVar4 = 0x112d37798;
    func_0x0001000285a8(0x112d37798,&UNK_10d902e10);
    func_0x000107c60498(puVar11,uVar4);
    puVar12 = puVar11;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  func_0x000107c6157c(puVar12);
  func_0x000107c61434(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar14 << 6;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      uStack_168 = *puVar9;
      uVar4 = puVar9[1];
      uVar1 = *(undefined1 *)(*(long *)(param_1 + 0x38) + uVar6);
      uStack_160 = uVar4;
      func_0x000107c61438(uVar4,2);
      func_0x000107c6147c(&uStack_158,&uStack_168,PTR___sSSN_11034da80,
                          PTR___ss11AnyHashableVN_11034e448,7);
      uStack_169 = uVar1;
      func_0x000107c6147c(auStack_130,&uStack_169,PTR___sSbN_11034dd40,PTR___sypN_11034f1a8 + 8,7);
      func_0x000107c6142c(uVar4);
      if (lStack_140 == 0) {
        func_0x000107c61574(param_1);
        func_0x000101424adc(&uStack_158,0x112d55e70,&UNK_10d92d170);
        func_0x000107c61574(puVar12);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101423730);
        (*pcVar2)();
      }
      uStack_108 = uStack_150;
      uStack_110 = uStack_158;
      lStack_f8 = lStack_140;
      uStack_100 = uStack_148;
      uStack_f0 = uStack_138;
      func_0x000100102924(auStack_130,auStack_e8);
      uStack_98 = uStack_108;
      uStack_a0 = uStack_110;
      lStack_88 = lStack_f8;
      uStack_90 = uStack_100;
      uStack_80 = uStack_f0;
      func_0x000100102924(auStack_e8,auStack_c0);
      uVar5 = *(ulong *)(puVar12 + 0x28);
      func_0x000107c602c4();
      uVar10 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar5 = uVar7 + 1;
          if ((uVar5 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101423704);
            (*pcVar2)();
          }
          uVar7 = 0;
          if (uVar5 != uVar6) {
            uVar7 = uVar5;
          }
          bVar3 = (bool)(uVar5 == uVar6 | bVar3);
        } while (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar12 + uVar7 * 8 + 0x40);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar12 + uVar7 + 0x40)
      ;
      puVar9 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar6 * 0x28);
      puVar9[1] = uStack_98;
      *puVar9 = uStack_a0;
      puVar9[3] = lStack_88;
      puVar9[2] = uStack_90;
      puVar9[4] = uStack_80;
      func_0x000100102924(auStack_c0,*(long *)(puVar12 + 0x38) + uVar6 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar3 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101423700);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  func_0x000107c61574(puVar12);
  func_0x000107c61574(param_1);
  return puVar12;
}



/* Entry: 101423730; end: 10142393b;  */

/* WARNING: Possible PIC construction at 0x0001014237b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014237c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014238d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101423898) */
/* WARNING: Removing unreachable block (ram,0x0001014238b8) */
/* WARNING: Removing unreachable block (ram,0x00010142385c) */
/* WARNING: Removing unreachable block (ram,0x000101423860) */
/* WARNING: Removing unreachable block (ram,0x00010142381c) */
/* WARNING: Removing unreachable block (ram,0x000101423874) */
/* WARNING: Removing unreachable block (ram,0x00010142383c) */
/* WARNING: Removing unreachable block (ram,0x0001014237c8) */
/* WARNING: Removing unreachable block (ram,0x0001014237cc) */
/* WARNING: Removing unreachable block (ram,0x0001014237b8) */
/* WARNING: Removing unreachable block (ram,0x0001014238d8) */
/* WARNING: Removing unreachable block (ram,0x000101423904) */
/* WARNING: Removing unreachable block (ram,0x0001014238dc) */

void FUN_101423730(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6300;
  func_0x000107c61168();
  func_0x000107c4467c();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    if (param_1 != 0) {
      return;
    }
    puVar1 = PTR_PTR_1126d6d78;
    func_0x000107c610f8(PTR_PTR_1126d6d78);
    func_0x000107c45528();
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c5a26c(puVar1);
  }
  else if (param_1 != 0) {
    FUN_101424504(0);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(param_1);
    func_0x000107c60118(puVar1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10142393c; end: 101423d2b;  */

void FUN_10142393c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar14 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_88 = (long)&uStack_90 - extraout_x8;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  uVar10 = ((long)&uStack_90 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = 0x112d4b5b0;
  puVar8 = &UNK_10d912140;
  uStack_90 = uVar10;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = uVar10 - extraout_x8_01;
  uVar2 = 0;
  func_0x000107c5ec24();
  lVar12 = *(long *)(uVar2 - 8);
  uVar10 = uVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lStack_78 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edc8();
  if (puVar8 == (undefined *)0x0) {
LAB_101423b1c:
                    /* WARNING: Could not recover jumptable at 0x000101423b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x38))(param_1,1,1,lVar1);
    return;
  }
  puVar5 = puVar8;
  uStack_80 = param_2;
  func_0x000107c5fb1c();
  func_0x000107c6142c(puVar8);
  if ((uVar10 == 0x697261666173) && (puVar5 == (undefined *)0xe600000000000000)) {
    func_0x000107c6142c(0xe600000000000000);
  }
  else {
    param_5 = -0x1a00000000000000;
    func_0x000107c605b8(uVar10,puVar5,0x697261666173,0xe600000000000000,0);
    func_0x000107c6142c(puVar5);
    if ((uVar10 & 1) == 0) goto LAB_101423b1c;
  }
  func_0x000107c5ebe4(lVar14,uStack_80,1);
  lVar3 = lVar14;
  (**(code **)(lVar12 + 0x30))(lVar14,1,uVar2);
  lVar6 = lStack_78;
  if ((int)lVar3 == 1) {
    func_0x000101424adc(lVar14,0x112d4b5b0,&UNK_10d912140);
  }
  else {
    lVar3 = lStack_78;
    (**(code **)(lVar12 + 0x20))(lStack_78,lVar14,uVar2);
    func_0x000107c5ebf4();
    lVar4 = lVar3;
    func_0x000107c5fb5c();
    if (lVar4 < 2) {
      (**(code **)(lVar12 + 8))(lVar6,uVar2);
      func_0x000107c6142c(lVar14);
    }
    else {
      uVar9 = 1;
      lVar6 = lVar14;
      FUN_1011a7878(1,lVar3,lVar14);
      func_0x000107c6142c(lVar14);
      func_0x000107c5fb2c(uVar9,lVar3,lVar6,param_5);
      func_0x000107c6142c();
      uStack_70 = uVar9;
      lStack_68 = lVar3;
      FUN_100e8b654();
      puVar5 = PTR___sSSN_11034da80;
      func_0x000107c60208(PTR___sSSN_11034da80);
      func_0x000107c6142c(lVar3);
      lVar14 = lStack_88;
      puVar8 = (undefined *)0x0;
      if (param_5 != 0) {
        puVar8 = puVar5;
      }
      lVar6 = -0x2000000000000000;
      if (param_5 != 0) {
        lVar6 = param_5;
      }
      func_0x000107c5edd0(lStack_88,puVar8,lVar6);
      func_0x000107c6142c(lVar6);
      lVar6 = lVar14;
      (**(code **)(lVar13 + 0x30))(lVar14,1,lVar1);
      uVar10 = uStack_90;
      if ((int)lVar6 == 1) {
        (**(code **)(lVar12 + 8))(lStack_78,uVar2);
        func_0x000101424adc(lVar14,0x112d36580,&UNK_10d9016d0);
      }
      else {
        pcVar11 = *(code **)(lVar13 + 0x20);
        uVar7 = uStack_90;
        (*pcVar11)(uStack_90,lVar14,lVar1);
        func_0x000103c4ef04();
        (**(code **)(lVar12 + 8))(lStack_78,uVar2);
        if ((uVar7 & 1) != 0) {
          (*pcVar11)(param_1,uVar10,lVar1);
          pcVar11 = *(code **)(lVar13 + 0x38);
          uVar9 = 0;
          goto LAB_101423c90;
        }
        (**(code **)(lVar13 + 8))(uVar10,lVar1);
      }
    }
  }
  pcVar11 = *(code **)(lVar13 + 0x38);
  uVar9 = 1;
LAB_101423c90:
  (*pcVar11)(param_1,uVar9,1,lVar1);
  return;
}



/* Entry: 101423d2c; end: 10142408f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101423d2c(ulong param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = -(lVar11 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) == 0) {
    if ((param_4 & 1) != 0) {
      puVar8 = auStack_68;
      func_0x000107c61428(param_2 + 0x10,puVar8,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 != 0) {
        lVar4 = param_2;
        func_0x000107c5ed70();
        plVar1 = (long *)(param_2 + _DAT_112d7e5e8);
        lVar12 = plVar1[1];
        *plVar1 = lVar4;
        plVar1[1] = (long)puVar8;
        func_0x000107c61170(param_2);
        func_0x000107c6142c(lVar12);
      }
      (**(code **)(lVar14 + 0x10))(auStack_80 + lVar10,param_3,lVar2);
      uVar9 = (ulong)*(byte *)(lVar14 + 0x50);
      uVar13 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
      puVar5 = &UNK_1103b5710;
      func_0x000107c613fc(&UNK_1103b5710,uVar13 + lVar11,uVar9 | 7);
      *(undefined8 *)(puVar5 + 0x10) = param_5;
      (**(code **)(lVar14 + 0x20))(puVar5 + uVar13,auStack_80 + lVar10,lVar2);
      puVar6 = &UNK_1103b5738;
      func_0x000107c613fc(&UNK_1103b5738,0x20,7);
      *(undefined **)(puVar6 + 0x10) = &UNK_10d93c778;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      func_0x000107c6157c(param_5);
      uVar3 = 0x112d7e678;
      func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
      *(undefined8 *)((long)auStack_90 + lVar10) = uVar3;
      uVar3 = 6;
      func_0x0001001ca524(6,0,8,3,0,0,&UNK_10d93c788,puVar6);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar3);
    }
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
    lVar2 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar11 = lVar2 + _DAT_112d7e5e0;
      func_0x000107c61618();
      func_0x000107c61170(lVar2);
      if (lVar11 != 0) {
        func_0x000107c5ed90();
        func_0x000107c41c40(lVar11);
        func_0x000107c615e8(lVar11);
        func_0x000107c61170(lVar2);
      }
    }
    puVar5 = &UNK_1103b5760;
    func_0x000107c613fc(&UNK_1103b5760,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10d93c7a0;
    *(long *)(puVar5 + 0x18) = param_2;
    func_0x000107c6157c(param_2);
    uVar3 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    *(undefined8 *)((long)auStack_90 + lVar10) = uVar3;
    uVar3 = 6;
    uVar7 = 0;
    func_0x0001001ca524(6,0,8,3,0,0,&UNK_10d93c7b0,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar3);
    puVar5 = PTR_PTR_1126d6d78;
    func_0x000107c610f8(PTR_PTR_1126d6d78);
    func_0x000107c45528();
    puVar6 = puVar5;
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
    func_0x000107c5a26c(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar10 = *(long *)(param_2 + _DAT_112d7e5d8);
      func_0x000107c615f0(lVar10);
      func_0x000107c61170(param_2);
      if (lVar10 != 0) {
        func_0x000107c4b9c4(lVar10);
        func_0x000107c615e8(lVar10);
      }
    }
    puVar6 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107bc1794();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 101424090; end: 10142411f;  */

void FUN_101424090(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  func_0x000101424b40(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101424120,uVar2,uVar3);
  return;
}



/* Entry: 101424120; end: 1014241af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101424120(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d7e5e0;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c420b4(lVar2);
      func_0x000107c615e8(lVar2);
      uVar3 = 0;
      goto LAB_10142419c;
    }
  }
  uVar3 = 1;
LAB_10142419c:
                    /* WARNING: Could not recover jumptable at 0x0001014241ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1014241b0; end: 1014241f3;  */

void FUN_1014241b0(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0001014241f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1014241f4; end: 1014242d3;  */

void FUN_1014241f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  lVar2 = 0;
  func_0x000107c5eb08();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar5;
  uVar5 = 0x112d45220;
  func_0x000101424b40(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014242d4,uVar4,uVar5);
  return;
}



/* Entry: 1014242d4; end: 1014243cf;  */

void FUN_1014242d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(unaff_x22 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x10))
              (uVar3,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c5eaec(uVar1,0x404e000000000000,uVar3,0);
    func_0x000107c5eae0();
    (**(code **)(lVar5 + 8))(uVar1,uVar2);
    lVar5 = lVar4;
    func_0x000107c4b768(lVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001014243cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5);
  return;
}



/* Entry: 1014243d0; end: 101424427;  */

void FUN_1014243d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101424428;
                    /* WARNING: Could not recover jumptable at 0x000101424424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 101424428; end: 10142446b;  */

void FUN_101424428(undefined8 param_1)

{
  undefined8 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined8 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000101424468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10142446c; end: 10142448b;  */

void FUN_10142446c(void)

{
  func_0x000107c61168(&PTR_PTR_1127d4d08);
  return;
}



/* Entry: 10142448c; end: 1014244e7;  */

/* WARNING: Possible PIC construction at 0x0001014237b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014237c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014238d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101423900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101423898) */
/* WARNING: Removing unreachable block (ram,0x0001014238b8) */
/* WARNING: Removing unreachable block (ram,0x00010142385c) */
/* WARNING: Removing unreachable block (ram,0x000101423860) */
/* WARNING: Removing unreachable block (ram,0x00010142381c) */
/* WARNING: Removing unreachable block (ram,0x000101423874) */
/* WARNING: Removing unreachable block (ram,0x00010142383c) */
/* WARNING: Removing unreachable block (ram,0x0001014237c8) */
/* WARNING: Removing unreachable block (ram,0x0001014237cc) */
/* WARNING: Removing unreachable block (ram,0x0001014237b8) */
/* WARNING: Removing unreachable block (ram,0x0001014238d8) */
/* WARNING: Removing unreachable block (ram,0x000101423904) */
/* WARNING: Removing unreachable block (ram,0x0001014238dc) */

void FUN_10142448c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  lVar2 = unaff_x20 + uVar4;
  puVar1 = PTR_PTR_1126b6300;
  func_0x000107c61168(PTR_PTR_1126b6300,lVar2,*(undefined8 *)(unaff_x20 + uVar3),
                      *(undefined8 *)(unaff_x20 + (uVar3 + 0xf & 0xffffffffffffff8)));
  func_0x000107c4467c();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    if (param_1 != 0) {
      return;
    }
    puVar1 = PTR_PTR_1126d6d78;
    func_0x000107c610f8(PTR_PTR_1126d6d78);
    func_0x000107c45528();
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
    func_0x000107c5a26c(puVar1);
  }
  else if (param_1 != 0) {
    FUN_101424504(0);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(param_1);
    func_0x000107c60118(puVar1,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1014244e8; end: 101424503;  */

void FUN_1014244e8(long param_1,long param_2)

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



/* Entry: 101424504; end: 101424547;  */

void FUN_101424504(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7e668 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6300;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d7e668 = puVar1;
  return;
}



/* Entry: 101424548; end: 1014247bb;  */

undefined8 FUN_101424548(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  func_0x000107c5edbc();
  if (param_2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar8 = param_2;
    func_0x000107c5fb1c();
    func_0x000107c6142c(param_2);
    uVar14 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    uVar6 = uVar14;
    func_0x000100111634();
    func_0x000107c61408(uVar14 + 0x20,0xb,PTR___sSSN_11034da80);
    puVar11 = (ulong *)(uVar6 + 0x38);
    uVar9 = -1L << ((ulong)*(byte *)(uVar6 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if (-uVar9 < 0x40) {
      uVar14 = ~(-1L << (-uVar9 & 0x3f));
    }
    uVar14 = uVar14 & *puVar11;
    func_0x000107c61434(uVar6);
    lVar12 = 0;
    uVar2 = uVar14;
    lVar3 = lVar12;
    do {
      while (lVar13 = lVar3, uVar15 = uVar2, uVar14 == 0) {
        bVar5 = SCARRY8(lVar12,1);
        lVar12 = lVar12 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014247bc);
          (*pcVar4)();
        }
        if ((long)(0x3f - uVar9 >> 6) <= lVar12) {
          func_0x000107c6142c(uVar8);
          FUN_10109bac0(uVar6,puVar11,~uVar9,lVar13,0);
          uVar10 = 0;
          goto LAB_10142478c;
        }
        uVar2 = uVar15;
        lVar3 = lVar13;
        uVar14 = puVar11[lVar12];
      }
      uVar2 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar1 = (ulong *)(*(long *)(uVar6 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                        lVar12 * 0x400);
      uVar2 = *puVar1;
      uVar16 = puVar1[1];
      if ((param_1 == uVar2 && uVar8 == uVar16) ||
         (uVar7 = param_1, func_0x000107c605b8(param_1,uVar8,uVar2,uVar16,0), (uVar7 & 1) != 0)) {
        func_0x000107c61434(uVar16);
        func_0x000107c6142c(uVar8);
        FUN_10109bac0(uVar6,puVar11,~uVar9,lVar13,uVar15);
        func_0x000107c6142c(uVar6);
        goto LAB_101424788;
      }
      uVar14 = uVar14 - 1 & uVar14;
      func_0x000107c61434(uVar16);
      func_0x000107c5fb78(uVar2,uVar16);
      uVar7 = 0;
      func_0x000107c5fbb8(0x2e,0xe100000000000000,param_1,uVar8);
      func_0x000107c6142c(0xe100000000000000);
      func_0x000107c6142c(uVar16);
      uVar2 = uVar14;
      lVar3 = lVar12;
    } while ((uVar7 & 1) == 0);
    func_0x000107c6142c(uVar8);
    FUN_10109bac0(uVar6,puVar11,~uVar9,lVar13,uVar15);
    uVar16 = uVar6;
LAB_101424788:
    uVar10 = 1;
    uVar6 = uVar16;
LAB_10142478c:
    func_0x000107c6142c(uVar6);
  }
  return uVar10;
}



/* Entry: 1014247bc; end: 10142481f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014247bc(ulong param_1)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar7 = 0;
  func_0x000107c5ede0();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar12 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
  uVar11 = uVar12 + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  bVar2 = *(byte *)(unaff_x20 + uVar11);
  uVar10 = *(undefined8 *)(unaff_x20 + (uVar11 & 0xfffffffffffffff8) + 8);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = -(lVar14 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) == 0) {
    if ((bVar2 & 1) != 0) {
      puVar9 = auStack_68;
      func_0x000107c61428(lVar7 + 0x10,puVar9,0,0);
      lVar7 = lVar7 + 0x10;
      func_0x000107c61618();
      if (lVar7 != 0) {
        lVar4 = lVar7;
        func_0x000107c5ed70();
        plVar1 = (long *)(lVar7 + _DAT_112d7e5e8);
        lVar15 = plVar1[1];
        *plVar1 = lVar4;
        plVar1[1] = (long)puVar9;
        func_0x000107c61170(lVar7);
        func_0x000107c6142c(lVar15);
      }
      (**(code **)(lVar16 + 0x10))(auStack_80 + lVar13,unaff_x20 + uVar12,lVar3);
      uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
      uVar12 = uVar11 + 0x18 & (uVar11 ^ 0xffffffffffffffff);
      puVar5 = &UNK_1103b5710;
      func_0x000107c613fc(&UNK_1103b5710,uVar12 + lVar14,uVar11 | 7);
      *(undefined8 *)(puVar5 + 0x10) = uVar10;
      (**(code **)(lVar16 + 0x20))(puVar5 + uVar12,auStack_80 + lVar13,lVar3);
      puVar6 = &UNK_1103b5738;
      func_0x000107c613fc(&UNK_1103b5738,0x20,7);
      *(undefined **)(puVar6 + 0x10) = &UNK_10d93c778;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      func_0x000107c6157c(uVar10);
      uVar10 = 0x112d7e678;
      func_0x0001000285a8(0x112d7e678,&UNK_10d93c790);
      *(undefined8 *)((long)auStack_90 + lVar13) = uVar10;
      uVar10 = 6;
      func_0x0001001ca524(6,0,8,3,0,0,&UNK_10d93c788,puVar6);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(uVar10);
    }
  }
  else {
    func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
    lVar3 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar14 = lVar3 + _DAT_112d7e5e0;
      func_0x000107c61618();
      func_0x000107c61170(lVar3);
      if (lVar14 != 0) {
        func_0x000107c5ed90();
        func_0x000107c41c40(lVar14);
        func_0x000107c615e8(lVar14);
        func_0x000107c61170(lVar3);
      }
    }
    puVar5 = &UNK_1103b5760;
    func_0x000107c613fc(&UNK_1103b5760,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_10d93c7a0;
    *(long *)(puVar5 + 0x18) = lVar7;
    func_0x000107c6157c(lVar7);
    uVar10 = 0x112d518a8;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    *(undefined8 *)((long)auStack_90 + lVar13) = uVar10;
    uVar10 = 6;
    uVar8 = 0;
    func_0x0001001ca524(6,0,8,3,0,0,&UNK_10d93c7b0,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar10);
    puVar5 = PTR_PTR_1126d6d78;
    func_0x000107c610f8(PTR_PTR_1126d6d78);
    func_0x000107c45528();
    puVar6 = puVar5;
    func_0x000107c5ed70();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
    func_0x000107c5a26c(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61428(lVar7 + 0x10,auStack_80,0,0);
    lVar7 = lVar7 + 0x10;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar13 = *(long *)(lVar7 + _DAT_112d7e5d8);
      func_0x000107c615f0(lVar13);
      func_0x000107c61170(lVar7);
      if (lVar13 != 0) {
        func_0x000107c4b9c4(lVar13);
        func_0x000107c615e8(lVar13);
      }
    }
    puVar6 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    func_0x000107bc1794();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 101424820; end: 10142488f;  */

void FUN_101424820(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = 0;
  func_0x000107c5ede0();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101424890;
  plVar5[5] = lVar4;
  plVar5[6] = unaff_x20 + (uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff));
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar5[7] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[8] = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[9] = uVar6;
  lVar4 = 0;
  func_0x000107c5eb08();
  plVar5[10] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar5[0xb] = lVar4;
  uVar6 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar6;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar5[0xd] = lVar4;
  uVar3 = 0x112d45220;
  func_0x000101424b40(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1014242d4,lVar2,uVar3);
  return;
}



/* Entry: 101424890; end: 1014248d3;  */

void FUN_101424890(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001014248d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 1014248d4; end: 101424943;  */

void FUN_1014248d4(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101424944;
  plVar5[2] = param_1;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_101424428;
                    /* WARNING: Could not recover jumptable at 0x000101424424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 101424944; end: 101424a0b;  */

void FUN_101424944(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010142497c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101424a0c; end: 101424a7b;  */

void FUN_101424a0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101424b88;
  FUN_100ffbb74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101424a7c; end: 101424a93;  */

int FUN_101424a7c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101424a94; end: 101424b7f;  */

undefined8 FUN_101424a94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101424b80; end: 101424b8b;  */

void FUN_101424b80(long param_1,long param_2)

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



/* Entry: 101424b8c; end: 101424be3;  */

void FUN_101424b8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  return;
}



/* Entry: 101424be4; end: 101424eef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101424be4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
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
  undefined1 auStack_148 [24];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  plVar11 = &lStack_220;
  uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_11308d048);
  func_0x0001000285a8(0x112d7df50,&UNK_10d93c7d0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c(uVar12);
  func_0x000107c414e4();
  func_0x000107c61180();
  uVar5 = uVar13;
  func_0x0001000bda74();
  func_0x000107c61170(uVar13);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar14 = *(long *)(unaff_x20 + 0x10);
    if (*(long *)(lVar14 + _DAT_11307c378) == 0) {
      FUN_101424ef0(&uStack_130);
    }
    else {
      func_0x000107c61174();
      func_0x000104657bfc(&uStack_210);
      FUN_101424fac(&uStack_210);
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_78 = uStack_158;
      uStack_80 = uStack_160;
      uStack_70 = uStack_150;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      uStack_a0 = uStack_180;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      uStack_128 = uStack_208;
      uStack_130 = uStack_210;
      uStack_118 = uStack_1f8;
      uStack_120 = uStack_200;
    }
    lVar7 = _DAT_11307c390;
    uVar13 = *(undefined8 *)(lVar14 + _DAT_11307c3a0);
    func_0x000107c61428(lVar14 + _DAT_11307c390,auStack_148,0,0);
    lVar7 = lVar14 + lVar7;
    func_0x000107c61618(lVar7);
    puVar8 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c615f0(uVar13);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    lVar9 = 0;
    FUN_10142446c();
    lVar10 = lVar9;
    func_0x000107c610f8();
    lVar3 = _DAT_112d7e5e0;
    func_0x000107c61614(lVar10 + _DAT_112d7e5e0,0);
    puVar1 = (undefined8 *)(lVar10 + _DAT_112d7e5e8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar10 + _DAT_112d7e5b0) = uVar12;
    *(undefined8 *)(lVar10 + _DAT_112d7e5b8) = uVar5;
    *(long *)(lVar10 + _DAT_112d7e5c0) = lVar6;
    puVar1 = (undefined8 *)(lVar10 + _DAT_112d7e5d0);
    puVar1[1] = uStack_128;
    *puVar1 = uStack_130;
    puVar1[7] = uStack_f8;
    puVar1[6] = uStack_100;
    puVar1[9] = uStack_e8;
    puVar1[8] = uStack_f0;
    puVar1[3] = uStack_118;
    puVar1[2] = uStack_120;
    puVar1[5] = uStack_108;
    puVar1[4] = uStack_110;
    puVar1[0xf] = uStack_b8;
    puVar1[0xe] = uStack_c0;
    puVar1[0x11] = uStack_a8;
    puVar1[0x10] = uStack_b0;
    puVar1[0xb] = uStack_d8;
    puVar1[10] = uStack_e0;
    puVar1[0xd] = uStack_c8;
    puVar1[0xc] = uStack_d0;
    puVar1[0x18] = uStack_70;
    puVar1[0x15] = uStack_88;
    puVar1[0x14] = uStack_90;
    puVar1[0x17] = uStack_78;
    puVar1[0x16] = uStack_80;
    puVar1[0x13] = uStack_98;
    puVar1[0x12] = uStack_a0;
    *(undefined8 *)(lVar10 + _DAT_112d7e5d8) = uVar13;
    *(undefined **)(lVar10 + _DAT_112d7e5c8) = puVar8;
    func_0x000107c61604(lVar10 + lVar3,lVar7);
    func_0x000107c6157c(uVar12);
    func_0x000107c615f0(uVar13);
    func_0x000107c6157c(uVar5);
    func_0x000107c615f0(lVar6);
    FUN_101424f14(&uStack_130,&uStack_210);
    puVar2 = PTR_s_init_1125d9248;
    lStack_220 = lVar10;
    lStack_218 = lVar9;
    func_0x000107c61174(puVar8);
    func_0x000107c61154(&lStack_220,puVar2);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(puVar8);
    func_0x000107c615e8(lVar7);
    func_0x000101424f64(&uStack_130);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(uVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c4fba8(*(undefined8 *)(lVar14 + _DAT_11307c388));
    func_0x000107c61170(plVar11);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101424ef0);
  (*pcVar4)();
}



/* Entry: 101424ef0; end: 101424f13;  */

void FUN_101424ef0(undefined8 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}


