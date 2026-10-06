/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c10638; end: 102c10753; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Possible PIC construction at 0x000102c10680: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c10684) */

void FUN_102c10638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c10ce8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c10754; end: 102c1077b; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController teardown] */

void FUN_102c10754(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102c106a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c1077c; end: 102c10783; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController layerViewContainerOption] */

undefined8 FUN_102c1077c(void)

{
  return 2;
}



/* Entry: 102c10784; end: 102c107ff; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:] */

undefined8
FUN_102c10784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  FUN_102c10d84(param_3,param_5,param_6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return param_3;
}



/* Entry: 102c10800; end: 102c10853;  */

void FUN_102c10800(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102c10854();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c10854; end: 102c10947;  */

/* WARNING: Possible PIC construction at 0x000102c108a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1092c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c108a8) */
/* WARNING: Removing unreachable block (ram,0x000102c10914) */
/* WARNING: Removing unreachable block (ram,0x000102c108e8) */
/* WARNING: Removing unreachable block (ram,0x000102c10918) */
/* WARNING: Removing unreachable block (ram,0x000102c10930) */

void FUN_102c10854(void)

{
  undefined8 unaff_x20;
  
  func_0x000107c41060();
  func_0x000107c61180();
  func_0x000107c5f9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102c10948; end: 102c109a7; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController initWithNibName:bundle:] */

void FUN_102c10948(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesOperaInteractionButtonsLayerImpl.MemoriesOperaInteractionButtonsLayerViewController"
                      ,0x5b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c10974);
  (*pcVar1)();
}



/* Entry: 102c109a8; end: 102c109ef; -[_TtC40MemoriesOperaInteractionButtonsLayerImpl50MemoriesOperaInteractionButtonsLayerViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c109c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c109c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c109a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eff398));
  return;
}



/* Entry: 102c109f0; end: 102c10a0f;  */

void FUN_102c109f0(void)

{
  func_0x000107c61168(&PTR_PTR_112eff3f0);
  return;
}



/* Entry: 102c10a10; end: 102c10b27;  */

void FUN_102c10a10(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong unaff_x20;
  double dVar4;
  
  puVar2 = &stack0xffffffffffffffa0;
  uVar1 = unaff_x20;
  dVar4 = param_1;
  func_0x000107c4a690();
  if ((((int)uVar1 != 0) && (uVar1 = unaff_x20, func_0x000107c49eac(), (uVar1 & 1) == 0)) &&
     (func_0x000107c3dc40(), 0.01 < dVar4)) {
    func_0x000102c10cc8();
    func_0x000107c61154(param_1,param_2,&stack0xffffffffffffffa0,PTR_s_hitTest_withEvent__1125d6850,
                        param_3);
    func_0x000107c61180();
    if (puVar2 != (undefined1 *)0x0) {
      FUN_102c10e7c(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c61174();
      func_0x000107c61174();
      puVar3 = puVar2;
      func_0x000107c60118(puVar2,unaff_x20);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(unaff_x20);
      if (((ulong)puVar3 & 1) != 0) {
        func_0x000107c61170(puVar2);
      }
    }
  }
  return;
}



/* Entry: 102c10b28; end: 102c10b9f; -[_TtC40MemoriesOperaInteractionButtonsLayerImplP33_5E71F230CE39857D982383006FBE318015PassthroughView hitTest:withEvent:] */

void FUN_102c10b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  FUN_102c10a10(param_1,param_2,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 102c10ba0; end: 102c10c0f; -[_TtC40MemoriesOperaInteractionButtonsLayerImplP33_5E71F230CE39857D982383006FBE318015PassthroughView initWithFrame:] */

void FUN_102c10ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  func_0x000102c10cc8();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102c10c10; end: 102c10c93; -[_TtC40MemoriesOperaInteractionButtonsLayerImplP33_5E71F230CE39857D982383006FBE318015PassthroughView initWithCoder:] */

undefined1 * FUN_102c10c10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = 0;
  func_0x000102c10cc8();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102c10c94; end: 102c10ce7;  */

void FUN_102c10c94(void)

{
  func_0x000102c10cc8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c10ce8; end: 102c10d83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c10ce8(long param_1)

{
  byte bVar1;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  byte bStack_31;
  long lVar2;
  
  if (param_1 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112eff398) == 0) {
      FUN_102c0fc34();
    }
    lVar5 = *(long *)(unaff_x20 + _DAT_112eff3a0);
    if (lVar5 != 0) {
      lVar2 = lVar5;
      func_0x000107c6157c();
      bVar1 = (byte)lVar2;
      FUN_102c101ec();
      puVar3 = &UNK_10db32908;
      func_0x000107c614e0(&UNK_10db32908);
      puVar4 = &UNK_10db32930;
      func_0x000107c614e0(&UNK_10db32930);
      bStack_31 = bVar1 & 1;
      func_0x000107c5f210(&bStack_31,lVar5,puVar3,puVar4);
    }
    FUN_102c10358();
  }
  return;
}



/* Entry: 102c10d84; end: 102c10e2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c10d84(int param_1,int param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  if (((param_2 == -1) && (param_1 == 5)) &&
     (uVar1 = *(ulong *)(unaff_x20 + _DAT_112eff398), uVar1 != 0)) {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (uVar1 != 0) {
      if (param_3 == 0) {
        func_0x000107c61170();
      }
      else {
        func_0x000107c4b8b8(param_3);
        uVar2 = uVar1;
        func_0x000107c3ec60();
        func_0x000107c609a4();
        func_0x000107c61170(uVar1);
        if ((uVar2 & 1) != 0) {
          return 1;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}



/* Entry: 102c10e30; end: 102c10e37;  */

void FUN_102c10e30(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102c10854();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102c10e38; end: 102c10e7b;  */

void FUN_102c10e38(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eff480 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102c0e2c0(0xff);
  puVar2 = &UNK_10db32628;
  func_0x000107c61520(&UNK_10db32628,uVar1);
  puRam0000000112eff480 = puVar2;
  return;
}



/* Entry: 102c10e7c; end: 102c10f47;  */

void FUN_102c10e7c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c10f48; end: 102c10fbf;  */

void FUN_102c10f48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dbd4(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126ac168;
  func_0x000107c610f8();
  func_0x000107c4944c();
  func_0x000107c61170(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102c10fc0; end: 102c10fcf;  */

undefined1  [16] FUN_102c10fc0(void)

{
  return ZEXT816(0x1105b1e38);
}



/* Entry: 102c10fd0; end: 102c1101b;  */

void FUN_102c10fd0(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c1101c,param_1);
  return;
}



/* Entry: 102c1101c; end: 102c11093;  */

void FUN_102c1101c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c3d874(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  puVar2 = PTR_PTR_1126ac170;
  func_0x000107c610f8();
  func_0x000107c45630();
  func_0x000107c615e8(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 102c11094; end: 102c110a3;  */

undefined1  [16] FUN_102c11094(void)

{
  return ZEXT816(0x1105b1f00);
}



/* Entry: 102c110a4; end: 102c110ef;  */

void FUN_102c110a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff030,&UNK_10db32270);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c11180,param_1);
  return;
}



/* Entry: 102c110f0; end: 102c1117f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c110f0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = 0;
  FUN_102c1147c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112eff490) = uVar1;
  plVar4 = &lStack_48;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102c11180; end: 102c11197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c11180(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + _DAT_113083868);
  func_0x000107c61174();
  func_0x000107c61170(lStack_38);
  lVar2 = 0;
  FUN_102c1147c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112eff490) = uVar1;
  plVar4 = &lStack_48;
  lStack_48 = lVar3;
  lStack_40 = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  *param_1 = (long)plVar4;
  return;
}



/* Entry: 102c11198; end: 102c111e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c11198(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eff490) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c111e4; end: 102c11347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c111e4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long *aplStack_90 [10];
  long lStack_40;
  long lStack_38;
  
  puVar6 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (*(long *)(param_1 + _DAT_112f0a4d0) == 0xb) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eff490);
    lVar1 = 0;
    func_0x000102c115d8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    lVar2 = 0;
    FUN_102c11e8c();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112eff580) = 0;
    *(undefined8 *)(lVar3 + _DAT_112eff570) = 0;
    *(undefined8 *)(lVar3 + _DAT_112eff568) = 0;
    plVar4 = (long *)(lVar3 + _DAT_112eff578);
    *plVar4 = lVar1;
    plVar4[1] = (long)&PTR_DAT_1105b1fd8;
    puVar6 = PTR_s_init_1125d9248;
    lStack_40 = lVar3;
    lStack_38 = lVar2;
    func_0x000107c61174(uVar7);
    plVar4 = &lStack_40;
    func_0x000107c61154(plVar4,puVar6);
    puVar5 = (undefined *)0x112d6aae0;
    func_0x0001000285a8(0x112d6aae0,&UNK_10d92e060);
    func_0x000107c61534();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    puVar6 = puVar5;
    aplStack_90[0] = plVar4;
    FUN_102c11348();
    func_0x000107c61174(plVar4);
    func_0x000107c602d4(puVar5 + 0x20,aplStack_90,lVar2,puVar6);
    puVar6 = puVar5;
    func_0x00010090a6c0(puVar5);
    func_0x000107c61588(puVar5);
    func_0x0001007bbff0(puVar5 + 0x20);
    func_0x000107c61170(plVar4);
  }
  return puVar6;
}



/* Entry: 102c11348; end: 102c1138b;  */

void FUN_102c11348(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eff498 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_102c11e8c(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam0000000112eff498 = puVar2;
  return;
}



/* Entry: 102c1138c; end: 102c1140b; -[_TtC21CreateSongOperaPlugin32ChatToSongOperaPluginRegistrator registerPlaylistPluginsWithContext:] */

void FUN_102c1138c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c111e4(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = uVar1;
  func_0x000107c5fe08(uVar1,PTR___ss11AnyHashableVN_11034e448,PTR___ss11AnyHashableVSHsWP_11034e450)
  ;
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c1140c; end: 102c1146b; -[_TtC21CreateSongOperaPlugin32ChatToSongOperaPluginRegistrator init] */

void FUN_102c1140c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateSongOperaPlugin.ChatToSongOperaPluginRegistrator",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c11438);
  (*pcVar1)();
}



/* Entry: 102c1146c; end: 102c1147b; -[_TtC21CreateSongOperaPlugin32ChatToSongOperaPluginRegistrator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1146c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eff490));
  return;
}



/* Entry: 102c1147c; end: 102c1149b;  */

void FUN_102c1147c(void)

{
  func_0x000107c61168(&PTR_PTR_112896d00);
  return;
}



/* Entry: 102c1149c; end: 102c115b3;  */

/* WARNING: Possible PIC construction at 0x000102c11514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c1155c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c1153c) */
/* WARNING: Removing unreachable block (ram,0x000102c11518) */
/* WARNING: Removing unreachable block (ram,0x000102c11560) */
/* WARNING: Removing unreachable block (ram,0x000102c11580) */
/* WARNING: Removing unreachable block (ram,0x000102c11594) */

void FUN_102c1149c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bc9b0;
  func_0x000107c610f8(PTR_PTR_1126bc9b0);
  func_0x000107c453e4();
  func_0x000107c57394();
  uVar2 = 0x59414c504f545541;
  func_0x000107c5fadc(0x59414c504f545541,0xe800000000000000);
  func_0x000107c58e30(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102c115b4; end: 102c115f7;  */

void FUN_102c115b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c115f8; end: 102c1168f; -[SCChatToSongPlaybackPlugin registeredEventsForOperaSession] */

void FUN_102c115f8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  puVar2[3] = 6;
  puVar2[2] = 3;
  puVar3 = puVar2;
  func_0x000103bb6b44();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb6d50();
  puVar3 = (undefined8 *)puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = puVar3;
  func_0x000107c61434();
  func_0x000103bb9c70();
  uVar1 = puVar3[1];
  puVar2[8] = *puVar3;
  puVar2[9] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102c11690; end: 102c117a7;  */

/* WARNING: Possible PIC construction at 0x000102c11824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11ae4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11940: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c11c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c11bc8) */
/* WARNING: Removing unreachable block (ram,0x000102c11c18) */
/* WARNING: Removing unreachable block (ram,0x000102c11cf4) */
/* WARNING: Removing unreachable block (ram,0x000102c11ddc) */
/* WARNING: Removing unreachable block (ram,0x000102c11d1c) */
/* WARNING: Removing unreachable block (ram,0x000102c11d6c) */
/* WARNING: Removing unreachable block (ram,0x000102c11d70) */
/* WARNING: Removing unreachable block (ram,0x000102c11d74) */
/* WARNING: Removing unreachable block (ram,0x000102c11d78) */
/* WARNING: Removing unreachable block (ram,0x000102c11944) */
/* WARNING: Removing unreachable block (ram,0x000102c11a14) */
/* WARNING: Removing unreachable block (ram,0x000102c11ae8) */
/* WARNING: Removing unreachable block (ram,0x000102c11acc) */
/* WARNING: Removing unreachable block (ram,0x000102c11af4) */
/* WARNING: Removing unreachable block (ram,0x000102c11928) */
/* WARNING: Removing unreachable block (ram,0x000102c11828) */
/* WARNING: Removing unreachable block (ram,0x000102c11838) */
/* WARNING: Removing unreachable block (ram,0x000102c11864) */
/* WARNING: Removing unreachable block (ram,0x000102c1187c) */
/* WARNING: Removing unreachable block (ram,0x000102c1189c) */
/* WARNING: Removing unreachable block (ram,0x000102c118a0) */
/* WARNING: Removing unreachable block (ram,0x000102c118a4) */
/* WARNING: Removing unreachable block (ram,0x000102c118b0) */
/* WARNING: Removing unreachable block (ram,0x000102c118d8) */
/* WARNING: Removing unreachable block (ram,0x000102c118dc) */
/* WARNING: Removing unreachable block (ram,0x000102c11a38) */
/* WARNING: Removing unreachable block (ram,0x000102c118e8) */
/* WARNING: Removing unreachable block (ram,0x000102c11a44) */
/* WARNING: Removing unreachable block (ram,0x000102c11a58) */
/* WARNING: Removing unreachable block (ram,0x000102c11a5c) */
/* WARNING: Removing unreachable block (ram,0x000102c11a80) */
/* WARNING: Removing unreachable block (ram,0x000102c11ad4) */
/* WARNING: Removing unreachable block (ram,0x000102c11af8) */
/* WARNING: Removing unreachable block (ram,0x000102c11a8c) */
/* WARNING: Removing unreachable block (ram,0x000102c11ae0) */
/* WARNING: Removing unreachable block (ram,0x000102c11ab4) */
/* WARNING: Removing unreachable block (ram,0x000102c11910) */
/* WARNING: Removing unreachable block (ram,0x000102c11dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c11690(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1;
  func_0x000103bb6b44();
  plVar5 = (long *)*plVar6;
  if ((plVar5 == param_1 && plVar6[1] == param_2) ||
     (func_0x000107c605b8(plVar5,plVar6[1],param_1,param_2,0), ((ulong)plVar5 & 1) != 0)) {
    if (param_3 != (long *)0x0) {
      uVar9 = *(ulong *)((long)param_3 + _DAT_11307abc8);
      FUN_102c122d8(param_3,param_4);
      if (*(long *)(uVar9 + 0x10) != 0) {
        lVar7 = *param_3;
        uVar3 = param_3[1];
        func_0x000107c61434(uVar3);
        func_0x000107c61434(uVar9);
        uVar8 = uVar3;
        func_0x000100029284(lVar7);
        if ((uVar8 & 1) != 0) {
          func_0x0001000bb420(*(long *)(uVar9 + 0x38) + lVar7 * 0x20,&uStack_70);
          uVar9 = uVar3;
        }
        goto code_r0x000107c6142c;
      }
    }
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    func_0x00010006e7f4(&uStack_70);
    lVar7 = _DAT_112eff568;
    lVar10 = *(long *)(unaff_x20 + _DAT_112eff580);
    if (lVar10 == 0) {
      return;
    }
    dVar11 = *(double *)(unaff_x20 + _DAT_112eff568);
    *(undefined8 *)(unaff_x20 + _DAT_112eff580) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112eff570) = 0;
    *(undefined8 *)(unaff_x20 + lVar7) = 0;
    uVar1 = *(undefined8 *)(lVar10 + _DAT_112eff5b0);
    uVar9 = ((undefined8 *)(lVar10 + _DAT_112eff5b0))[1];
    uVar2 = *(undefined8 *)(lVar10 + _DAT_112eff5b8);
    uVar4 = ((undefined8 *)(lVar10 + _DAT_112eff5b8))[1];
    dVar12 = 0.0;
    if (0.0 < dVar11) {
      dVar12 = dVar11;
    }
    func_0x000107c61434(uVar9);
    func_0x000107c61434(uVar4);
    FUN_102c1149c(dVar12 / 1000.0,uVar1,uVar9,uVar2,uVar4);
    func_0x000107c61170(lVar10);
  }
  else {
    func_0x000103bb6d50();
    plVar6 = (long *)*plVar5;
    lVar7 = _DAT_112eff570;
    if ((plVar6 != param_1 || plVar5[1] != param_2) &&
       (func_0x000107c605b8(plVar6,plVar5[1],param_1,param_2,0), lVar7 = _DAT_112eff570,
       ((ulong)plVar6 & 1) == 0)) {
      func_0x000103bb9c70();
      plVar5 = (long *)*plVar6;
      if (((plVar5 != param_1) || (lVar7 = _DAT_112eff568, plVar6[1] != param_2)) &&
         (func_0x000107c605b8(plVar5,plVar6[1],param_1,param_2,0), lVar7 = _DAT_112eff568,
         ((ulong)plVar5 & 1) == 0)) {
        return;
      }
    }
    if (*(long *)(unaff_x20 + _DAT_112eff580) == 0) {
      return;
    }
    plVar6 = (long *)(*(long *)(unaff_x20 + _DAT_112eff580) + _DAT_112eff5c0);
    lVar10 = *plVar6;
    uVar9 = plVar6[1];
    func_0x000107c61434(*(undefined8 *)(unaff_x20 + lVar7),uVar9);
    FUN_102c11f44();
    if (param_3 != (long *)0x0) {
      lVar7 = *(long *)((long)param_3 + _DAT_112eff5c0);
      uVar3 = ((long *)((long)param_3 + _DAT_112eff5c0))[1];
      func_0x000107c61434(uVar3);
      func_0x000107c61170(param_3);
      if (lVar7 == lVar10 && uVar3 == uVar9) {
        func_0x000107c6142c(uVar3);
      }
      else {
        func_0x000107c605b8(lVar7,uVar3,lVar10,uVar9,0);
        uVar9 = uVar3;
      }
    }
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}



/* Entry: 102c117a8; end: 102c11c33;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c117a8(undefined8 param_1,long *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  long *plVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  long alStack_78 [5];
  
  if (param_2 == (long *)0x0) {
LAB_102c11930:
    alStack_78[2] = 0;
    alStack_78[1] = 0;
    alStack_78[4] = 0;
    alStack_78[3] = 0;
  }
  else {
    lVar8 = *(long *)((long)param_2 + _DAT_11307abc8);
    FUN_102c122d8();
    if (*(long *)(lVar8 + 0x10) == 0) goto LAB_102c11930;
    lVar10 = *param_2;
    uVar6 = param_2[1];
    func_0x000107c61434(uVar6);
    func_0x000107c61434(lVar8);
    uVar7 = uVar6;
    func_0x000100029284(lVar10);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(lVar8);
      alStack_78[2] = 0;
      alStack_78[1] = 0;
      alStack_78[4] = 0;
      alStack_78[3] = 0;
      func_0x000107c6142c(uVar6);
    }
    else {
      func_0x0001000bb420(*(long *)(lVar8 + 0x38) + lVar10 * 0x20,alStack_78 + 1);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(lVar8);
      if (alStack_78[4] != 0) {
        uVar4 = 0;
        FUN_102c122b8(0);
        plVar5 = alStack_78;
        func_0x000107c6147c(plVar5,alStack_78 + 1,PTR___sypN_11034f1a8 + 8,uVar4,6);
        lVar8 = _DAT_112eff580;
        if (((ulong)plVar5 & 1) != 0) {
          if ((*(long *)(unaff_x20 + _DAT_112eff580) == 0) ||
             ((plVar9 = *(long **)(alStack_78[0] + _DAT_112eff5c0),
              plVar5 = (long *)(*(long *)(unaff_x20 + _DAT_112eff580) + _DAT_112eff5c0),
              plVar9 != (long *)*plVar5 ||
              ((long *)(alStack_78[0] + _DAT_112eff5c0))[1] != plVar5[1] &&
              (func_0x000107c605b8(), ((ulong)plVar9 & 1) == 0)))) {
            param_1 = *(undefined8 *)(unaff_x20 + _DAT_112eff568);
            FUN_102c11cf4();
            plVar9 = *(long **)(unaff_x20 + lVar8);
            *(long *)(unaff_x20 + lVar8) = alStack_78[0];
            func_0x000107c61174(alStack_78[0]);
            func_0x000107c61170();
          }
          if ((param_3 == 0) || (func_0x000103bb6dfc(), *(long *)(param_3 + 0x10) == 0)) {
            param_1 = 0;
            alStack_78[2] = 0;
            alStack_78[1] = 0;
            alStack_78[4] = 0;
            alStack_78[3] = 0;
          }
          else {
            lVar8 = *plVar9;
            uVar6 = plVar9[1];
            func_0x000107c61434(uVar6);
            func_0x000107c61434(param_3);
            uVar7 = uVar6;
            func_0x000100029284(lVar8);
            if ((uVar7 & 1) == 0) {
              func_0x000107c6142c(param_3);
              param_1 = 0;
              alStack_78[2] = 0;
              alStack_78[1] = 0;
              alStack_78[4] = 0;
              alStack_78[3] = 0;
            }
            else {
              func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar8 * 0x20,alStack_78 + 1);
              func_0x000107c6142c(uVar6);
              uVar6 = param_3;
            }
            func_0x000107c6142c(uVar6);
          }
          FUN_102c11eac(alStack_78 + 1);
          plVar5 = alStack_78 + 1;
          uVar4 = param_1;
          func_0x00010006e7f4();
          *(undefined8 *)(unaff_x20 + _DAT_112eff570) = param_1;
          if ((param_3 == 0) || (func_0x000103bb6fe0(), *(long *)(param_3 + 0x10) == 0)) {
            uVar4 = 0;
            alStack_78[2] = 0;
            alStack_78[1] = 0;
            alStack_78[4] = 0;
            alStack_78[3] = 0;
          }
          else {
            lVar8 = *plVar5;
            uVar6 = plVar5[1];
            func_0x000107c61434(param_3);
            func_0x000107c61434(uVar6);
            uVar7 = uVar6;
            func_0x000100029284(lVar8);
            if ((uVar7 & 1) == 0) {
              func_0x000107c6142c(param_3);
              uVar4 = 0;
              alStack_78[2] = 0;
              alStack_78[1] = 0;
              alStack_78[4] = 0;
              alStack_78[3] = 0;
            }
            else {
              func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar8 * 0x20,alStack_78 + 1);
              func_0x000107c6142c(uVar6);
              uVar6 = param_3;
            }
            func_0x000107c6142c(uVar6);
          }
          FUN_102c11eac(alStack_78 + 1);
          func_0x000107c61170(alStack_78[0]);
          func_0x00010006e7f4(alStack_78 + 1);
          *(undefined8 *)(unaff_x20 + _DAT_112eff568) = uVar4;
          return;
        }
        goto LAB_102c1195c;
      }
    }
  }
  func_0x00010006e7f4(alStack_78 + 1);
LAB_102c1195c:
  lVar8 = _DAT_112eff568;
  lVar10 = *(long *)(unaff_x20 + _DAT_112eff580);
  if (lVar10 != 0) {
    dVar11 = *(double *)(unaff_x20 + _DAT_112eff568);
    *(undefined8 *)(unaff_x20 + _DAT_112eff580) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112eff570) = 0;
    *(undefined8 *)(unaff_x20 + lVar8) = 0;
    uVar4 = *(undefined8 *)(lVar10 + _DAT_112eff5b0);
    uVar2 = ((undefined8 *)(lVar10 + _DAT_112eff5b0))[1];
    uVar1 = *(undefined8 *)(lVar10 + _DAT_112eff5b8);
    uVar3 = ((undefined8 *)(lVar10 + _DAT_112eff5b8))[1];
    dVar12 = 0.0;
    if (0.0 < dVar11) {
      dVar12 = dVar11;
    }
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar3);
    FUN_102c1149c(dVar12 / 1000.0,uVar4,uVar2,uVar1,uVar3);
    func_0x000107c61170(lVar10);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102c11c34; end: 102c11cef; -[SCChatToSongPlaybackPlugin operaViewDidSendEvent:page:params:] */

/* WARNING: Possible PIC construction at 0x000102c11cd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c11cd8) */

void FUN_102c11c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5f9e8(param_5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102c11690(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102c11cf0; end: 102c11cf3; -[SCChatToSongPlaybackPlugin setPlaylistItemController:] */

void FUN_102c11cf0(void)

{
  return;
}



/* Entry: 102c11cf4; end: 102c11df3;  */

/* WARNING: Possible PIC construction at 0x000102c11dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c11dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c11cf4(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  double dVar6;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_112eff580);
  if (lVar5 != 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112eff580) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112eff570) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112eff568) = 0;
    uVar1 = *(undefined8 *)(lVar5 + _DAT_112eff5b0);
    uVar3 = ((undefined8 *)(lVar5 + _DAT_112eff5b0))[1];
    uVar2 = *(undefined8 *)(lVar5 + _DAT_112eff5b8);
    uVar4 = ((undefined8 *)(lVar5 + _DAT_112eff5b8))[1];
    dVar6 = 0.0;
    if (0.0 < param_1) {
      dVar6 = param_1;
    }
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    FUN_102c1149c(dVar6 / 1000.0,uVar1,uVar3,uVar2,uVar4);
    func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  return;
}



/* Entry: 102c11df4; end: 102c11e53; -[SCChatToSongPlaybackPlugin init] */

void FUN_102c11df4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateSongOperaPlugin.ChatToSongPlaybackPlugin",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c11e20);
  (*pcVar1)();
}



/* Entry: 102c11e54; end: 102c11e8b; -[SCChatToSongPlaybackPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c11e54(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eff578));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eff580));
  return;
}



/* Entry: 102c11e8c; end: 102c11eab;  */

void FUN_102c11e8c(void)

{
  func_0x000107c61168(&PTR_PTR_112896dc0);
  return;
}



/* Entry: 102c11eac; end: 102c11f43;  */

double FUN_102c11eac(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100672b50(param_2,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    puVar2 = &uStack_58;
    func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      func_0x000107c4223c(uStack_58);
      func_0x000107c61170(uStack_58);
      goto LAB_102c11f24;
    }
  }
  param_1 = 0.0;
LAB_102c11f24:
  dVar3 = 0.0;
  if (0.0 < param_1) {
    dVar3 = param_1;
  }
  return dVar3;
}



/* Entry: 102c11f44; end: 102c1203f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c11f44(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if (param_1 != (long *)0x0) {
    lVar6 = *(long *)((long)param_1 + _DAT_11307abc8);
    FUN_102c122d8();
    if (*(long *)(lVar6 + 0x10) != 0) {
      lVar2 = *param_1;
      uVar1 = param_1[1];
      func_0x000107c61434(uVar1);
      func_0x000107c61434(lVar6);
      uVar5 = uVar1;
      func_0x000100029284(lVar2);
      if ((uVar5 & 1) == 0) {
        func_0x000107c6142c(lVar6);
        uStack_48 = 0;
        uStack_50 = 0;
        lStack_38 = 0;
        uStack_40 = 0;
        func_0x000107c6142c(uVar1);
      }
      else {
        func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar2 * 0x20,&uStack_50);
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(lVar6);
        if (lStack_38 != 0) {
          uVar3 = 0;
          FUN_102c122b8(0);
          puVar4 = &uStack_58;
          func_0x000107c6147c(puVar4,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar3,6);
          if ((int)puVar4 != 0) {
            return uStack_58;
          }
          return 0;
        }
      }
      goto LAB_102c12020;
    }
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_102c12020:
  func_0x00010006e7f4(&uStack_50);
  return 0;
}



/* Entry: 102c12040; end: 102c1204b; -[SCAISongPlaybackMetadata aiSongInfoJSON] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12040(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eff5b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eff5b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c1204c; end: 102c12057; -[SCAISongPlaybackMetadata musicTrackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1204c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eff5b8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eff5b8))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c12058; end: 102c12063; -[SCAISongPlaybackMetadata pageId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12058(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112eff5c0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112eff5c0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102c12064; end: 102c120ab;  */

void FUN_102c12064(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102c120ac; end: 102c12147;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c120ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff5b0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff5b8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eff5c0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c12148; end: 102c12203; -[SCAISongPlaybackMetadata initWithAiSongInfoJSON:musicTrackId:pageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar3 = param_2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112eff5b0);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eff5b8);
  *puVar1 = param_4;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eff5c0);
  *puVar1 = param_5;
  puVar1[1] = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c12204; end: 102c12263; -[SCAISongPlaybackMetadata init] */

void FUN_102c12204(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreateSongOperaKeys.AISongPlaybackMetadata",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c12230);
  (*pcVar1)();
}



/* Entry: 102c12264; end: 102c122b7; -[SCAISongPlaybackMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c12284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c12288) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12264(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112eff5b0 + 8))
  ;
  return;
}



/* Entry: 102c122b8; end: 102c122d7;  */

void FUN_102c122b8(void)

{
  func_0x000107c61168(&PTR_PTR_112896e98);
  return;
}



/* Entry: 102c122d8; end: 102c122e3;  */

undefined * FUN_102c122d8(void)

{
  return &UNK_1105b2020;
}



/* Entry: 102c122e4; end: 102c1230f; +[SCCreateSongOperaPagePropertyKeys aiSongPlaybackMetadata] */

void FUN_102c122e4(void)

{
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0fef30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102c12310; end: 102c1234b; -[SCCreateSongOperaPagePropertyKeys init] */

void FUN_102c12310(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c1234c; end: 102c1237f;  */

void FUN_102c1234c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c12380; end: 102c12383; -[SCCreateSongOperaPagePropertyKeys .cxx_destruct] */

void FUN_102c12380(void)

{
  return;
}



/* Entry: 102c12384; end: 102c123a3;  */

void FUN_102c12384(void)

{
  func_0x000107c61168(&PTR_PTR_112896f68);
  return;
}



/* Entry: 102c123a4; end: 102c123ef;  */

void FUN_102c123a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112eff618,&UNK_10db32b10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102c123f0,param_1);
  return;
}



/* Entry: 102c123f0; end: 102c1248f;  */

void FUN_102c123f0(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c4f668();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126ac178;
    func_0x000107c610f8(PTR_PTR_1126ac178);
    func_0x000107c481dc();
    func_0x000107c61170(lVar2);
    puVar4 = PTR_PTR_1126ac180;
    func_0x000107c610f8();
    func_0x000107c465c8();
    func_0x000107c61170(puVar3);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c12490);
  (*pcVar1)();
}



/* Entry: 102c12490; end: 102c1249f;  */

undefined1  [16] FUN_102c12490(void)

{
  return ZEXT816(0x1105b20e8);
}



/* Entry: 102c124a0; end: 102c1251f;  */

void FUN_102c124a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff038,&UNK_10db322a0);
  puVar1 = &UNK_1105b21b0;
  func_0x000107c613fc(&UNK_1105b21b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102c12520,puVar1);
  return;
}



/* Entry: 102c12520; end: 102c125fb;  */

void FUN_102c12520(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  lVar3 = lStack_48;
  func_0x000107c42ea0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x000107c49cd8();
    if ((int)lVar3 != 0) {
      func_0x000100083b20(&lStack_48);
      uVar2 = 0;
      func_0x000102c135c0(0);
      func_0x000107c610f8();
      lVar3 = lStack_48;
      func_0x000102c131c8(lStack_48,uVar2);
      func_0x000107c615e8(lVar1);
      goto LAB_102c125e0;
    }
    func_0x000107c615e8(lVar1);
  }
  lVar3 = 0;
LAB_102c125e0:
  *param_1 = lVar3;
  return;
}



/* Entry: 102c125fc; end: 102c1260b;  */

undefined1  [16] FUN_102c125fc(void)

{
  return ZEXT816(0x1105b21d8);
}



/* Entry: 102c1260c; end: 102c12677; -[_TtC42SCLensStoryOperaLayerViewControllerFactory18LensStoryOperaView initWithFrame:] */

void FUN_102c1260c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102c12678; end: 102c126f3; -[_TtC42SCLensStoryOperaLayerViewControllerFactory18LensStoryOperaView initWithCoder:] */

undefined1 * FUN_102c12678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 102c126f4; end: 102c12747;  */

void FUN_102c126f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c12748; end: 102c1282f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c12748(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112eff660;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112eff660);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102c12830; end: 102c128ab; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12830(long param_1)

{
  code *pcVar1;
  
  *(undefined1 *)(param_1 + _DAT_112eff658) = 0;
  *(undefined8 *)(param_1 + _DAT_112eff660) = 0;
  *(undefined8 *)(param_1 + _DAT_112eff668) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCLensStoryOperaLayerViewControllerFactory/LensStoryOperaLayerViewController.swift"
                      ,0x52,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c128ac);
  (*pcVar1)();
}



/* Entry: 102c128ac; end: 102c1290b; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController loadView] */

/* WARNING: Possible PIC construction at 0x000102c128f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c128fc) */

void FUN_102c128ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102c12728(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4(uVar1);
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c1290c; end: 102c12a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1290c(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  func_0x000102c127c4();
  uVar3 = 0;
  func_0x0001005f57cc(0);
  func_0x00010450b144();
  func_0x000107c4d664(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x000102c12748();
    func_0x000107c3d6fc(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    lVar5 = *(long *)(unaff_x20 + _DAT_112eff650);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      func_0x000107c4fc64();
      func_0x000107c615e8(lVar5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c12a08);
  (*pcVar1)();
}



/* Entry: 102c12a08; end: 102c12a2f; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController viewDidLoad] */

void FUN_102c12a08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c1290c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c12a30; end: 102c12b13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12a30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = _DAT_112eff658;
  if ((*(byte *)(unaff_x20 + _DAT_112eff658) & 1) == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112eff648);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4aba4();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c12b10);
        (*pcVar2)();
      }
      lVar5 = lVar4;
      FUN_102c1a514();
      func_0x000107c61170(lVar4);
      lVar4 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102c12b14);
        (*pcVar2)();
      }
      lVar6 = lVar4;
      func_0x000102c127c4();
      func_0x000107c3e2b0(lVar3,param_2,lVar4,lVar6,lVar5);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar6);
      func_0x000107c615e8(lVar3);
      *(undefined1 *)(unaff_x20 + lVar1) = 1;
    }
  }
  return;
}



/* Entry: 102c12b14; end: 102c12bbf; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController viewWillAppear:] */

void FUN_102c12b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000102c127c4();
  func_0x0001005f57cc(0);
  func_0x00010450b1b8(param_3);
  func_0x000107c4d664(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  FUN_102c12a30();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c12bc0; end: 102c12bd3; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController viewDidAppear:] */

void FUN_102c12bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,puVar1,param_3);
  func_0x000102c127c4();
  func_0x0001005f57cc(0);
  (*(code *)&SUB_10450b23c)(param_3);
  func_0x000107c4d664(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c12bd4; end: 102c12be7; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController viewWillDisappear:] */

void FUN_102c12bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillDisappear__112685438;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,puVar1,param_3);
  func_0x000102c127c4();
  func_0x0001005f57cc(0);
  (*(code *)&SUB_10450b2bc)(param_3);
  func_0x000107c4d664(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c12be8; end: 102c12bfb; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController viewDidDisappear:] */

void FUN_102c12be8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,puVar1,param_3);
  func_0x000102c127c4();
  func_0x0001005f57cc(0);
  (*(code *)&SUB_10450b3c8)(param_3);
  func_0x000107c4d664(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c12bfc; end: 102c12cab;  */

void FUN_102c12bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = &uStack_50;
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar3 = *param_4;
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_50,uVar3,param_3);
  func_0x000102c127c4();
  func_0x0001005f57cc(0);
  (*param_5)(param_3);
  func_0x000107c4d664(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c12cac; end: 102c12d37; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c12cac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_teardown_112678538;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  *(undefined1 *)(param_1 + _DAT_112eff658) = 0;
  lVar2 = *(long *)(param_1 + _DAT_112eff648);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff60();
    func_0x000107c615e8(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c12d38; end: 102c13027;  */

/* WARNING: Possible PIC construction at 0x000102c12d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c12dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c12e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c12f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c12ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c12f8c) */
/* WARNING: Removing unreachable block (ram,0x000102c12e10) */
/* WARNING: Removing unreachable block (ram,0x000102c12fb8) */
/* WARNING: Removing unreachable block (ram,0x000102c12e14) */
/* WARNING: Removing unreachable block (ram,0x000102c12dc4) */
/* WARNING: Removing unreachable block (ram,0x000102c12df4) */
/* WARNING: Removing unreachable block (ram,0x000102c12df8) */
/* WARNING: Removing unreachable block (ram,0x000102c12e90) */
/* WARNING: Removing unreachable block (ram,0x000102c13024) */
/* WARNING: Removing unreachable block (ram,0x000102c12e94) */
/* WARNING: Removing unreachable block (ram,0x000102c12dfc) */
/* WARNING: Removing unreachable block (ram,0x000102c13020) */
/* WARNING: Removing unreachable block (ram,0x000102c12e00) */
/* WARNING: Removing unreachable block (ram,0x000102c12d90) */
/* WARNING: Removing unreachable block (ram,0x000102c1301c) */
/* WARNING: Removing unreachable block (ram,0x000102c12da4) */
/* WARNING: Removing unreachable block (ram,0x000102c12ea4) */
/* WARNING: Removing unreachable block (ram,0x000102c12fc0) */
/* WARNING: Removing unreachable block (ram,0x000102c12fc4) */
/* WARNING: Removing unreachable block (ram,0x000102c12ea8) */
/* WARNING: Removing unreachable block (ram,0x000102c12f24) */

void FUN_102c12d38(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c4b8b8(param_1,param_2,unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 102c13028; end: 102c13077; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController handleTapIn:] */

/* WARNING: Possible PIC construction at 0x000102c13060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c13064) */

void FUN_102c13028(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102c12d38(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c13078; end: 102c130a3; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102c13078(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaLayerViewControllerFactory.LensStoryOperaViewController",0x47
                      ,
                      "init(configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:)"
                      ,0x56,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c130a4);
  (*pcVar1)();
}



/* Entry: 102c130a4; end: 102c13103; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController initWithNibName:bundle:] */

void FUN_102c130a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaLayerViewControllerFactory.LensStoryOperaViewController",0x47
                      ,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c130d0);
  (*pcVar1)();
}



/* Entry: 102c13104; end: 102c1315b; -[_TtC42SCLensStoryOperaLayerViewControllerFactory28LensStoryOperaViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c13120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c13140: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c13124) */
/* WARNING: Removing unreachable block (ram,0x000102c13144) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c13104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eff648));
  return;
}



/* Entry: 102c1315c; end: 102c1317b;  */

void FUN_102c1315c(void)

{
  func_0x000107c61168(&PTR_PTR_112eff6b0);
  return;
}



/* Entry: 102c1317c; end: 102c13213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c1317c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eff730) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102c13214; end: 102c132b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c13214(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112eff730);
  func_0x000107c4b380();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c49bc8();
  if ((int)lVar2 != 0) {
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4ff60();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      goto LAB_102c13290;
    }
  }
  func_0x000107c61170(lVar1);
LAB_102c13290:
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102c132b8; end: 102c132db; -[_TtC42SCLensStoryOperaLayerViewControllerFactory40LensStoryOperaLayerViewControllerFactory dealloc] */

void FUN_102c132b8(void)

{
  func_0x000107c61174();
  FUN_102c13214();
  return;
}



/* Entry: 102c132dc; end: 102c132eb; -[_TtC42SCLensStoryOperaLayerViewControllerFactory40LensStoryOperaLayerViewControllerFactory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c132dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eff730));
  return;
}



/* Entry: 102c132ec; end: 102c1336f; -[_TtC42SCLensStoryOperaLayerViewControllerFactory40LensStoryOperaLayerViewControllerFactory supportedLayers] */

void FUN_102c132ec(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = 0x112eff120;
  func_0x0001000285a8(0x112eff120,&UNK_10db32400);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 0;
  FUN_102c1aa10();
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112eff150;
  func_0x0001000285a8(0x112eff150,&UNK_10db32440);
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,uVar2);
  func_0x000107c61574(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 102c13370; end: 102c134bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102c13370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_60;
  long lStack_58;
  
  plVar6 = &lStack_60;
  uVar3 = 0;
  FUN_102c1aa10(0);
  func_0x000107c61480(param_1,uVar3);
  if (param_1 == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112eff730);
    uVar3 = uVar7;
    func_0x000107c4b380();
    func_0x000107c61180();
    func_0x000107c4b384();
    func_0x000107c61180();
    lVar4 = 0;
    FUN_102c1315c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined1 *)(lVar5 + _DAT_112eff658) = 0;
    *(undefined8 *)(lVar5 + _DAT_112eff660) = 0;
    *(undefined8 *)(lVar5 + _DAT_112eff668) = 0;
    *(undefined8 *)(lVar5 + _DAT_112eff648) = uVar3;
    *(undefined8 *)(lVar5 + _DAT_112eff650) = uVar7;
    puVar1 = PTR_s_initWithConfiguration_layerViewC_1125de030;
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c61174(uVar3);
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_60,puVar1,param_2,param_3,param_4,param_5);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102c134bc);
      (*pcVar2)();
    }
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
  }
  return (undefined1 *)plVar6;
}



/* Entry: 102c134bc; end: 102c13593; -[_TtC42SCLensStoryOperaLayerViewControllerFactory40LensStoryOperaLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_102c134bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102c13370(param_3,param_4,param_5,param_6,param_7);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102c13594; end: 102c135df; -[_TtC42SCLensStoryOperaLayerViewControllerFactory40LensStoryOperaLayerViewControllerFactory init] */

void FUN_102c13594(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensStoryOperaLayerViewControllerFactory.LensStoryOperaLayerViewControllerFactory"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c135c0);
  (*pcVar1)();
}



/* Entry: 102c135e0; end: 102c1378b;  */

void FUN_102c135e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eff030,&UNK_10db32270);
  puVar1 = &UNK_1105b2348;
  func_0x000107c613fc(&UNK_1105b2348,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(0x102c13678,puVar1);
  return;
}



/* Entry: 102c1378c; end: 102c1379b;  */

undefined1  [16] FUN_102c1378c(void)

{
  return ZEXT816(0x1105b2370);
}



/* Entry: 102c1379c; end: 102c137eb;  */

void FUN_102c1379c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112eff760 != 0) {
    return;
  }
  puVar1 = &UNK_1105b2438;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112eff760 = param_1;
  return;
}


