/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1008d388c; end: 1008d388f; -[SCFeatureLensFeedImpl configureWithView:] */

void FUN_1008d388c(void)

{
  return;
}



/* Entry: 1008d3890; end: 1008d38f7; -[SCFeatureLensFeedImpl setReplyParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d3890(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112742864);
  *(undefined8 *)(param_1 + _DAT_112742864) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1008d38f8; end: 1008d39cf;  */

void FUN_1008d38f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126c7a80;
    func_0x000107c610f4(PTR_PTR_1126c7a80);
    uVar1 = *(undefined8 *)(param_1 + 200);
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    uVar3 = *(undefined8 *)(param_1 + 0x188);
    func_0x000107c43a50(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x000107c5b038(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c509bc();
    func_0x000107c46c30(puVar7,param_2,uVar1,uVar2,uVar3,uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1008d39d0; end: 1008d39d7; -[SCFriendmojiServices friendmojiPresenter] */

undefined8 FUN_1008d39d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1008d39d8; end: 1008d3b1f; -[SCFeatureRecipientNameImpl initWithGroupsDataFetcher:userInfoProvider:friendmojiPresenter:usesRuntimeViewfinderGeometry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1008d39d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_1126eff50;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = PTR_PTR_1126ae720;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741034) = param_6;
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741038);
    *(undefined **)((long)puVar1 + (long)_DAT_112741038) = puVar2;
    func_0x000107c61170(uVar3);
    lVar4 = (long)_DAT_11274103c;
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008d3b20; end: 1008d3f13; -[SCFeatureRecipientNameImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1008d3b20(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                   undefined8 param_5,ulong param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  lVar5 = param_4;
  func_0x000107c3c808();
  uVar4 = (uint)lVar5;
  if (uVar4 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = param_6;
    func_0x000107c3f240();
    func_0x000107c61180();
  }
  lVar22 = (long)_DAT_112741044;
  if (*(char *)(param_4 + lVar22) == '\x01') {
    uVar6 = param_4 + _DAT_112741048;
    func_0x000107c61148();
    bVar1 = uVar6 != param_6;
    func_0x000107c61170();
    if (*(char *)(param_4 + lVar22) != '\x01') goto LAB_1008d3be8;
    bVar2 = *(byte *)(param_4 + _DAT_11274104c) != uVar4;
  }
  else {
    bVar1 = false;
LAB_1008d3be8:
    bVar2 = false;
  }
  if (uVar4 != 0) {
    lVar7 = *(long *)(param_4 + _DAT_112741040);
    func_0x000107c40808();
    if (lVar7 != 0) {
      uVar6 = param_4 + _DAT_112741050;
      func_0x000107c61148();
      bVar3 = uVar6 != uVar21;
      func_0x000107c61170();
      goto LAB_1008d3c28;
    }
  }
  bVar3 = false;
LAB_1008d3c28:
  if ((bVar1 || bVar2) || (bVar3)) {
    func_0x000107c3b428(param_4);
  }
  uVar8 = *(undefined8 *)(param_4 + _DAT_112741038);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4977c(param_6);
  if (uVar4 == 0) {
    func_0x000107c5a050(uVar8);
    func_0x000107c438d4(param_6);
    uVar24 = 0xc061800000000000;
    func_0x000107c51768(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c54b80(0x4051800000000000,uVar24,param_3 + -140.0,0x4051800000000000,uVar8);
  }
  else {
    lVar23 = (long)_DAT_112741040;
    lVar7 = *(long *)(param_4 + lVar23);
    func_0x000107c40808();
    if (lVar7 == 0) {
      func_0x000107c5a050(uVar8);
      uVar24 = uVar8;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar6 = uVar21;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      uVar9 = uVar24;
      func_0x000107c40280();
      func_0x000107c61180();
      uVar10 = uVar8;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar11 = param_6;
      func_0x000107c4acb0();
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c40284(0x4051800000000000);
      func_0x000107c61180();
      uVar13 = uVar8;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar14 = param_6;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      uVar15 = uVar13;
      func_0x000107c40284(0xc051800000000000);
      func_0x000107c61180();
      uVar16 = uVar8;
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar17 = uVar16;
      func_0x000107c40290(0x4051800000000000);
      func_0x000107c61180();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c();
      func_0x000107c61180();
      uVar20 = *(undefined8 *)(param_4 + lVar23);
      *(undefined **)(param_4 + lVar23) = puVar18;
      func_0x000107c61170(uVar20);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar24);
      func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    }
    func_0x000107c611a0(param_4 + _DAT_112741050,uVar21);
  }
  func_0x000107c611a0(param_4 + _DAT_112741048,param_6);
  *(char *)(param_4 + _DAT_11274104c) = (char)lVar5;
  *(undefined1 *)(param_4 + lVar22) = 1;
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return param_6;
  }
  func_0x000107c60e78();
  return (ulong)*(byte *)(param_6 + (long)_DAT_112741034);
}



/* Entry: 1008d3f14; end: 1008d3f23; -[SCFeatureRecipientNameImpl _shouldUseRuntimeViewfinderGeometry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1008d3f14(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112741034);
}



/* Entry: 1008d3f24; end: 1008d3f87;  */

void FUN_1008d3f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8678;
  func_0x000107c610f4(PTR_PTR_1126c8678);
  func_0x000107c469c0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c520f4();
  func_0x000107c550d8(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008d3f88; end: 1008d41eb; -[SCRecipientNameReplyView initWithFrame:groupsDataFetcher:userInfoProvider:] */

/* WARNING: Possible PIC construction at 0x0001008d403c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d41a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d4238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d41a4) */
/* WARNING: Removing unreachable block (ram,0x0001008d41e8) */
/* WARNING: Removing unreachable block (ram,0x0001008d41bc) */
/* WARNING: Removing unreachable block (ram,0x0001008d4184) */
/* WARNING: Removing unreachable block (ram,0x0001008d4174) */
/* WARNING: Removing unreachable block (ram,0x0001008d4164) */
/* WARNING: Removing unreachable block (ram,0x0001008d4078) */
/* WARNING: Removing unreachable block (ram,0x0001008d4058) */
/* WARNING: Removing unreachable block (ram,0x0001008d4040) */
/* WARNING: Removing unreachable block (ram,0x0001008d423c) */
/* WARNING: Removing unreachable block (ram,0x0001008d4248) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d3f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_88;
  
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_a0 = PTR_PTR_1126eff58;
  puVar1 = &uStack_a8;
  uStack_a8 = param_5;
  func_0x000107c61154(param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000107c61170(param_8);
  }
  else {
    lVar3 = (long)_DAT_112741054;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    param_7 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 1008d41ec; end: 1008d426f; -[SCCameraOverlayView insertSubview:atIndexInFrontOfLiveDisplay:] */

/* WARNING: Possible PIC construction at 0x0001008d4238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d423c) */
/* WARNING: Removing unreachable block (ram,0x0001008d4248) */

void FUN_1008d41ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c4b1a0(param_1);
  func_0x000107c61180();
  func_0x000107c5c42c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1008d4270; end: 1008d42a3; -[SCCameraOverlayView _insertSubview:atIndex:] */

void FUN_1008d4270(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f83c8;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_insertSubview_atIndex__1125f75f8);
  return;
}



/* Entry: 1008d42a4; end: 1008d49a3; -[SCFeatureRecipientNameImpl setReplyConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d42a4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined *puStack_398;
  undefined *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined *puStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined8 *puStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined8 uStack_320;
  undefined1 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined8 *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_2c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  puStack_b0 = &UNK_106182540;
  puStack_a8 = &UNK_106182550;
  uStack_a0 = 0;
  puStack_1e8 = &uStack_e8;
  uStack_e8 = 0;
  uStack_d8 = 0x2020000000;
  uStack_d0 = 0;
  puStack_268 = &uStack_118;
  uStack_118 = 0;
  uStack_108 = 0x3032000000;
  puStack_100 = &UNK_106182540;
  puStack_f8 = &UNK_106182550;
  uStack_f0 = 0;
  puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_138 = 0xc2000000;
  puStack_130 = &UNK_106182558;
  puStack_128 = &UNK_110911d98;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  puStack_158 = &UNK_106182590;
  puStack_150 = &UNK_11084eb40;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  puStack_180 = &UNK_1061825c8;
  puStack_178 = &UNK_110911dc8;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  puStack_1a8 = &UNK_106182600;
  puStack_1a0 = &UNK_110911df8;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  puStack_1d0 = &UNK_106182638;
  puStack_1c8 = &UNK_11084dda0;
  puStack_210 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_208 = 0xc2000000;
  puStack_200 = &UNK_106182670;
  puStack_1f8 = &UNK_110911e28;
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  puStack_228 = &UNK_1061826f0;
  puStack_220 = &UNK_110911e58;
  puStack_260 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_258 = 0xc2000000;
  puStack_250 = &UNK_106182728;
  puStack_248 = &UNK_11084eb70;
  puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_288 = 0xc2000000;
  puStack_280 = &UNK_106182760;
  puStack_278 = &UNK_11090f298;
  puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2b0 = 0xc2000000;
  puStack_2a8 = &UNK_1061827d4;
  puStack_2a0 = &UNK_110911e88;
  puStack_2e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2d8 = 0xc2000000;
  puStack_2d0 = &UNK_10618280c;
  puStack_2c8 = &UNK_110911eb8;
  puStack_298 = puStack_2c0;
  puStack_270 = puStack_2c0;
  puStack_240 = puStack_2c0;
  puStack_218 = puStack_2c0;
  puStack_1f0 = puStack_2c0;
  puStack_1c0 = puStack_2c0;
  puStack_198 = puStack_2c0;
  puStack_170 = puStack_2c0;
  puStack_148 = puStack_2c0;
  puStack_120 = puStack_2c0;
  puStack_110 = puStack_268;
  puStack_e0 = puStack_1e8;
  puStack_c0 = puStack_2c0;
  func_0x000107c4c590(param_3);
  puVar1 = (undefined *)puStack_c0[5];
  func_0x000107c4e004();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c501dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  lVar3 = puStack_c0[5];
  func_0x000107c4e004();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c50210();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = puStack_c0[5];
  func_0x000107c501f8();
  uStack_310 = 0;
  uStack_300 = 0x3032000000;
  puStack_2f8 = &UNK_106182540;
  puStack_2f0 = &UNK_106182550;
  uStack_2e8 = 0;
  uStack_330 = 0;
  uStack_320 = 0x2020000000;
  uStack_318 = 0;
  puStack_348 = &uStack_350;
  uStack_350 = 0;
  uStack_340 = 0x2020000000;
  uStack_338 = 0;
  uVar5 = puStack_c0[5];
  puStack_328 = &uStack_330;
  puStack_308 = &uStack_310;
  func_0x000107c501d8();
  func_0x000107c61180();
  puStack_378 = puVar6;
  uStack_370 = 0xc2000000;
  puStack_368 = &UNK_106182844;
  puStack_360 = &UNK_110842b58;
  puStack_3a8 = puVar6;
  uStack_3a0 = 0xc2000000;
  puStack_398 = &UNK_10618287c;
  puStack_390 = &UNK_11084ae98;
  ppuVar9 = &puStack_3a8;
  puStack_388 = &uStack_330;
  puStack_380 = &uStack_310;
  puStack_358 = &uStack_310;
  func_0x000107c4c79c();
  func_0x000107c61170(uVar5);
  if ((lVar3 == 4) || ((puVar2 != (undefined *)0x0 && (puStack_308[5] != 0)))) {
    if ((puStack_110[5] != 0) && (lVar3 = lVar4, func_0x000107c4adac(), lVar3 != 0)) {
      puVar1 = PTR_PTR_1126ba270;
      func_0x000107c610f4();
      puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c421a4(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      func_0x000107c5c9e4();
      func_0x000107c45d58();
      func_0x000107c61170(puVar6);
      lVar7 = *(long *)(param_1 + _DAT_11274103c);
      func_0x000107c5c734();
      func_0x000107c61180();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar1;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c5c0c4(puStack_110[5]);
      lVar3 = lVar7;
      func_0x000107c4215c();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar7);
      lVar7 = lVar3;
      func_0x000107c4adac();
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (lVar7 != 0) {
        puVar8 = puVar2;
        func_0x000107c2aac8();
        func_0x000107c61180();
        func_0x000107c51804();
        func_0x000107c61180();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar8);
        puVar2 = puVar6;
      }
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar1);
    }
    puVar6 = PTR_PTR_1126c8680;
    func_0x000107c610f4(PTR_PTR_1126c8680);
    ppuVar9 = (undefined **)puStack_308[5];
    func_0x000107c465f0();
    lVar3 = (long)_DAT_112741038;
    uVar5 = *(undefined8 *)(param_1 + lVar3);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    func_0x000107c5a588();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar6);
    uVar10 = (ulong)*(byte *)(puStack_e0 + 3);
    uVar5 = *(undefined8 *)(param_1 + lVar3);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c550d8();
  }
  else {
    *(undefined1 *)(puStack_e0 + 3) = 1;
    uVar5 = *(undefined8 *)(param_1 + _DAT_112741038);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar10 = 1;
    func_0x000107c550d8();
  }
  func_0x000107c61170(uVar5);
  func_0x000107c60bcc(&uStack_350,8);
  func_0x000107c60bcc(&uStack_330,8);
  func_0x000107c60bcc(&uStack_310,8);
  func_0x000107c61170(uStack_2e8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c60bcc(&uStack_118,8);
  func_0x000107c61170(uStack_f0);
  func_0x000107c60bcc(&uStack_e8,8);
  func_0x000107c60bcc(&uStack_c8,8);
  func_0x000107c61170(uStack_a0);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bcc(&uStack_118,8);
  func_0x000107c60bcc(&uStack_e8,8);
  func_0x000107c60bcc(&uStack_c8,8);
  func_0x000107c60bd8();
  func_0x000107c61174(uVar10);
  uVar5 = *(undefined8 *)(param_3 + _DAT_11273ebfc);
  *(ulong *)(param_3 + _DAT_11273ebfc) = uVar10;
  func_0x000107c61170(uVar5);
  *(undefined ***)(param_3 + _DAT_11273ec00) = ppuVar9;
  return;
}



/* Entry: 1008d49a4; end: 1008d49f7; -[SCFeatureMusicImpl setReplyConfiguration:cameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d49a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273ebfc);
  *(undefined8 *)(param_1 + _DAT_11273ebfc) = param_3;
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + _DAT_11273ec00) = param_4;
  return;
}



/* Entry: 1008d49f8; end: 1008d4aa7; -[SCMainCameraViewController setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d49f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c3f300();
  func_0x000107c61170(lVar1);
  puStack_38 = PTR_PTR_1126f8338;
  lStack_40 = param_1;
  func_0x000107c61154(&lStack_40,PTR_s_setCameraViewType__11263b800,param_3);
  if (lVar2 != param_3) {
    lVar2 = (long)_DAT_112762314;
    lVar1 = param_1 + lVar2;
    func_0x000107c61148(lVar1);
    func_0x000107c5055c();
    func_0x000107c61170(lVar1);
    param_1 = param_1 + lVar2;
    func_0x000107c61148(param_1);
    func_0x000107c5e0fc();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1008d4aa8; end: 1008d4b2f; -[SCCameraViewController setCameraViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d4aa8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127624bc;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x000107c3f300();
  if (lVar1 == param_3) {
    return;
  }
  func_0x000107c5312c(*(undefined8 *)(param_1 + lVar3),param_2,param_3);
  lVar1 = param_1;
  func_0x000107c4b064(param_1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x000107c3f300(uVar2);
  func_0x000107c5d4f8(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1008d4b30; end: 1008d4bb3; -[SCMainCameraViewController previewPresenterDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d4b30(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1;
  func_0x000107c3f0bc();
  func_0x000107c61180();
  lVar3 = (long)_DAT_112762314;
  lVar2 = param_1 + lVar3;
  func_0x000107c61148(lVar2);
  func_0x000107c52ff8();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar2 = param_1 + lVar3;
  func_0x000107c61148(lVar2);
  func_0x000107c53064();
  func_0x000107c61170(lVar2);
  func_0x000107c61148(param_1 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d4bb4; end: 1008d4bbf; -[SCCameraPreviewPresenterImpl setCameraFeatureCatalog:] */

void FUN_1008d4bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b0,param_3);
  return;
}



/* Entry: 1008d4bc0; end: 1008d4bcb; -[SCCameraPreviewPresenterImpl setCameraPreviewPresenterDelegate:] */

void FUN_1008d4bc0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x1b8,param_3);
  return;
}



/* Entry: 1008d4bcc; end: 1008d53ab; -[SCCameraPreviewPresenterImpl previewPresenter] */

void FUN_1008d4bcc(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined *puVar44;
  undefined8 uVar45;
  
  puVar16 = param_1;
  func_0x000107c3f188();
  func_0x000107c61180();
  puVar17 = puVar16;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  puVar44 = puVar17;
  func_0x000107c4f174();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  if (puVar44 == (undefined *)0x0) {
    puVar16 = param_1 + 0x18;
    func_0x000107c61148();
    func_0x000107c61170();
    if (puVar16 == (undefined *)0x0) {
      puVar44 = (undefined *)0x0;
    }
    else {
      puVar16 = param_1;
      func_0x000107c3f0bc();
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c41e68();
      func_0x000107c61180();
      puVar18 = puVar17;
      func_0x000107c42e38();
      func_0x000107c61180();
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      puVar16 = puVar18;
      func_0x000107c41e90();
      uVar1 = 0x1b;
      if (((ulong)puVar16 & 0xfffffffffffffffd) != 9) {
        uVar1 = 4;
      }
      puVar44 = PTR_PTR_1126c8150;
      func_0x000107c610f4();
      puVar19 = param_1;
      func_0x000107c3f0bc();
      func_0x000107c61180();
      puVar20 = puVar19;
      func_0x000107c4192c();
      func_0x000107c61180();
      puVar21 = puVar20;
      func_0x000107c42e38();
      func_0x000107c61180();
      uVar41 = *(undefined8 *)(param_1 + 0xb0);
      uVar34 = *(undefined8 *)(param_1 + 0x80);
      uVar35 = *(undefined8 *)(param_1 + 0x10);
      puVar16 = param_1 + 0x18;
      func_0x000107c61148();
      uVar2 = *(undefined8 *)(param_1 + 0x38);
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      puVar17 = param_1 + 0x60;
      func_0x000107c61148();
      puVar22 = param_1 + 0x68;
      func_0x000107c61148();
      uVar36 = *(undefined8 *)(param_1 + 0x78);
      uVar3 = *(undefined8 *)(param_1 + 0x88);
      uVar10 = *(undefined8 *)(param_1 + 0x90);
      uVar37 = *(undefined8 *)(param_1 + 0x98);
      uVar23 = *(undefined8 *)(param_1 + 0x58);
      func_0x000107c4008c();
      func_0x000107c61180();
      uVar42 = *(undefined8 *)(param_1 + 0xa8);
      uVar38 = *(undefined8 *)(param_1 + 0xd0);
      uVar4 = *(undefined8 *)(param_1 + 0xe0);
      uVar11 = *(undefined8 *)(param_1 + 0xe8);
      uVar5 = *(undefined8 *)(param_1 + 0xc0);
      uVar12 = *(undefined8 *)(param_1 + 200);
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      uVar13 = *(undefined8 *)(param_1 + 0x108);
      uVar39 = *(undefined8 *)(param_1 + 0x128);
      uVar43 = *(undefined8 *)(param_1 + 0x138);
      uVar7 = *(undefined8 *)(param_1 + 0x150);
      uVar14 = *(undefined8 *)(param_1 + 0x158);
      uVar40 = *(undefined8 *)(param_1 + 0x160);
      puVar24 = param_1;
      func_0x000107c3f188();
      func_0x000107c61180();
      puVar25 = puVar24;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar26 = puVar25;
      func_0x000107c3f300();
      puVar27 = param_1;
      func_0x000107c3f188();
      func_0x000107c61180();
      puVar28 = puVar27;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar29 = puVar28;
      func_0x000107c519ac();
      uVar8 = *(undefined8 *)(param_1 + 0x178);
      uVar15 = *(undefined8 *)(param_1 + 0x180);
      uVar30 = *(undefined8 *)(param_1 + 0x198);
      func_0x000107c4b320();
      func_0x000107c61180();
      puVar31 = param_1 + 0x170;
      func_0x000107c61148();
      uVar45 = *(undefined8 *)(param_1 + 0x1a0);
      puVar32 = param_1;
      func_0x000107c3f188();
      func_0x000107c61180();
      puVar33 = puVar32;
      func_0x000107c4f158();
      func_0x000107c61180();
      func_0x000107c46558(puVar44,param_2,puVar21,uVar41,uVar34,uVar35,puVar16,uVar2,uVar9,puVar17,
                          puVar22,uVar36,uVar3,uVar10,uVar37,uVar23,uVar42,uVar12,uVar38,uVar4,
                          uVar11,uVar5,uVar6,uVar1,uVar13,uVar39,uVar43,uVar7,uVar14,uVar40,puVar26,
                          puVar29,uVar8,uVar15,uVar30,puVar31,uVar45,puVar33,
                          *(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400),
                          *(undefined8 *)(param_1 + 0x1a8));
      func_0x000107c61170(puVar33);
      func_0x000107c61170(puVar32);
      func_0x000107c61170(puVar31);
      func_0x000107c61170(uVar30);
      func_0x000107c61170(puVar28);
      func_0x000107c61170(puVar27);
      func_0x000107c61170(puVar25);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(uVar23);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar21);
      func_0x000107c61170(puVar20);
      func_0x000107c61170(puVar19);
      puVar16 = param_1;
      func_0x000107c3f188();
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar22 = puVar17;
      func_0x000107c3f300();
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      if (puVar22 == (undefined *)0x9) {
        puVar16 = puVar44;
        func_0x000107c4f0dc(puVar44);
        func_0x000107c61180();
        func_0x000107c563f0(0x3fe2000000000000);
        func_0x000107c61170(puVar16);
        puVar16 = puVar44;
        func_0x000107c4f0dc(puVar44);
        func_0x000107c61180();
        func_0x000107c55604();
        func_0x000107c61170(puVar16);
      }
      puVar16 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      func_0x000107c519ac();
      func_0x0001005d3b6c();
      puVar22 = puVar44;
      func_0x000107c4f0dc(puVar44);
      func_0x000107c61180();
      func_0x000107c530e0();
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      puVar16 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar22 = puVar17;
      func_0x000107c519ac();
      func_0x0001005d3b6c();
      FUN_1008b71f4();
      func_0x000107c61180();
      puVar31 = puVar44;
      func_0x000107c4c014(puVar44);
      func_0x000107c61180();
      func_0x000107c530e0();
      func_0x000107c61170(puVar31);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      puVar16 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c3f284();
      func_0x000107c61180();
      func_0x000107c4d534();
      puVar22 = puVar44;
      func_0x000107c4f0dc(puVar44);
      func_0x000107c61180();
      func_0x000107c5304c();
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      puVar16 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      func_0x000107c3f300();
      puVar22 = puVar44;
      func_0x000107c4f0dc(puVar44);
      func_0x000107c61180();
      func_0x000107c5266c();
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      puVar16 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar22 = puVar17;
      func_0x000107c501d0();
      func_0x000107c61180();
      puVar31 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar19 = puVar31;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      puVar20 = puVar19;
      func_0x000107c3f300();
      func_0x000107c57d50(puVar44,param_2,puVar22,puVar20);
      func_0x000107c61170(puVar19);
      func_0x000107c61170(puVar31);
      func_0x000107c61170(puVar22);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      puVar16 = puVar18;
      func_0x000107c499a0();
      if ((int)puVar16 != 0) {
        puVar16 = puVar18;
        func_0x000107c4f168();
        func_0x000107c61180();
        func_0x000107c61170();
        if (puVar16 != (undefined *)0x0) {
          puVar16 = puVar18;
          func_0x000107c4f168();
          func_0x000107c61180();
          puVar17 = puVar16;
          func_0x000107c5b364();
          func_0x000107c61170(puVar16);
          if (puVar17 != (undefined *)0xffffffffffffffff) {
            func_0x000107c59428(puVar44,param_2,puVar17);
          }
        }
      }
      puVar16 = puVar44;
      func_0x000107c4f0dc(puVar44);
      func_0x000107c61180();
      func_0x000107c55740();
      func_0x000107c61170(puVar16);
      if (param_1[0xb9] == '\x01') {
        puVar16 = puVar44;
        func_0x000107c4f0dc(puVar44);
        func_0x000107c61180();
        func_0x000107c59258();
        func_0x000107c61170(puVar16);
        puVar16 = puVar44;
        func_0x000107c4f0dc(puVar44);
        func_0x000107c61180();
        func_0x000107c596d0();
        func_0x000107c61170(puVar16);
      }
      func_0x000107c3c5c0(param_1,param_2,puVar44);
      func_0x000107c5dca0(param_1,param_2,puVar44);
      puVar16 = param_1;
      func_0x000107c3f188(param_1);
      func_0x000107c61180();
      puVar17 = puVar16;
      func_0x000107c5bcc0();
      func_0x000107c61180();
      func_0x000107c577c4();
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      param_1[0xb8] = 0;
      func_0x000107c61170(puVar18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar44);
  return;
}



/* Entry: 1008d53ac; end: 1008d53c3; -[SCCameraPreviewPresenterImpl cameraPreviewPresenterDelegate] */

void FUN_1008d53ac(long param_1)

{
  func_0x000107c61148(param_1 + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d53c4; end: 1008d53db; -[SCCameraPreviewPresenterImpl cameraFeatureCatalog] */

void FUN_1008d53c4(long param_1)

{
  func_0x000107c61148(param_1 + 0x1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d53dc; end: 1008d53e3; -[SCMutablePublicCameraFeatureCatalog deviceMotionCapture] */

undefined8 FUN_1008d53dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1008d53e4; end: 1008d5447; -[SCCameraViewController previewLensesInfoProvider] */

void FUN_1008d53e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4b064();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c3f118();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4f158();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008d5448; end: 1008d544b; -[SCCameraViewControllerLensDelegateHandler cameraLensesCoordinator] */

void FUN_1008d5448(void)

{
  return;
}



/* Entry: 1008d544c; end: 1008d54cb; -[SCCameraViewControllerLensDelegateHandler previewLensesInfoProvider] */

void FUN_1008d544c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0xc0);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c4f158();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1008d54cc; end: 1008d54e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d54cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar11 = *(long *)(unaff_x20 + 0x30);
  uVar1 = uVar4;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  FUN_1008d5824(0);
  func_0x000107c610f8();
  FUN_1008d5844();
  FUN_1000285a8(0x112ee3fd8,&UNK_10dbcc510);
  uVar2 = *(undefined8 *)(*(long *)(lVar10 + _DAT_11307d010) + _DAT_11307d050);
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1000bda74();
  func_0x000107c61170(uVar2);
  FUN_1000285a8(0x112ee3fe0,&UNK_10db0f070);
  func_0x000107c4b254();
  func_0x000107c61180();
  uVar2 = uVar12;
  FUN_1000bda74();
  func_0x000107c61170(uVar12);
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c4b5a0();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(lVar11 + _DAT_1130813f0);
  lVar6 = 0;
  FUN_1008d595c();
  lVar11 = lVar6;
  func_0x000107c610f8();
  lVar10 = _DAT_112ee3fe8;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar11 + lVar10) = puVar7;
  lVar10 = _DAT_112ee3ff0;
  puStack_a0 = (undefined *)0x0;
  FUN_1000285a8(0x112d55258,&UNK_10d91c3a0);
  func_0x000107c613fc();
  ppuVar8 = &puStack_a0;
  FUN_10006c248();
  *(undefined ***)(lVar11 + lVar10) = ppuVar8;
  *(undefined8 *)(lVar11 + _DAT_112ee3ff8) = uVar3;
  *(undefined8 *)(lVar11 + _DAT_112ee4000) = uVar2;
  *(undefined8 *)(lVar11 + _DAT_112ee4008) = uVar4;
  *(undefined8 *)(lVar11 + _DAT_112ee4010) = uVar5;
  *(undefined8 *)(lVar11 + _DAT_112ee4018) = uVar12;
  puVar7 = PTR_s_init_1125d9248;
  lStack_70 = lVar11;
  lStack_68 = lVar6;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(uVar5);
  func_0x000107c6157c(uVar12);
  plVar9 = &lStack_70;
  func_0x000107c61154(plVar9,puVar7);
  uVar12 = *(undefined8 *)((long)plVar9 + _DAT_112ee4008);
  puVar7 = &UNK_11058b1b0;
  func_0x000107c613fc(&UNK_11058b1b0,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar9);
  pcStack_80 = FUN_100b7031c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100b5ebe4;
  puStack_88 = &UNK_11058b1c8;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar7);
  func_0x000107c5dc64(uVar12);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(plVar9);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar5);
  lVar11 = 0;
  FUN_1008d5980();
  lVar10 = lVar11;
  func_0x000107c610f8();
  *(undefined8 *)(lVar10 + _DAT_112ee3ea0) = uVar1;
  *(long **)(lVar10 + _DAT_112ee3ea8) = plVar9;
  lStack_b0 = lVar10;
  lStack_a8 = lVar11;
  func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008d54e4; end: 1008d5823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d54e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar1 = param_1;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  FUN_1008d5824(0);
  func_0x000107c610f8();
  FUN_1008d5844();
  FUN_1000285a8(0x112ee3fd8,&UNK_10dbcc510);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + _DAT_11307d010) + _DAT_11307d050);
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_1000bda74();
  func_0x000107c61170(uVar2);
  FUN_1000285a8(0x112ee3fe0,&UNK_10db0f070);
  func_0x000107c4b254();
  func_0x000107c61180();
  uVar2 = param_3;
  FUN_1000bda74();
  func_0x000107c61170(param_3);
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c4b5a0();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_5 + _DAT_1130813f0);
  lVar4 = 0;
  FUN_1008d595c();
  lVar8 = lVar4;
  func_0x000107c610f8();
  lVar9 = _DAT_112ee3fe8;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar9) = puVar5;
  lVar9 = _DAT_112ee3ff0;
  puStack_a0 = (undefined *)0x0;
  FUN_1000285a8(0x112d55258,&UNK_10d91c3a0);
  func_0x000107c613fc();
  ppuVar6 = &puStack_a0;
  FUN_10006c248();
  *(undefined ***)(lVar8 + lVar9) = ppuVar6;
  *(undefined8 *)(lVar8 + _DAT_112ee3ff8) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112ee4000) = uVar2;
  *(undefined8 *)(lVar8 + _DAT_112ee4008) = param_1;
  *(undefined8 *)(lVar8 + _DAT_112ee4010) = param_4;
  *(undefined8 *)(lVar8 + _DAT_112ee4018) = uVar10;
  puVar5 = PTR_s_init_1125d9248;
  lStack_70 = lVar8;
  lStack_68 = lVar4;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_4);
  func_0x000107c6157c(uVar10);
  plVar7 = &lStack_70;
  func_0x000107c61154(plVar7,puVar5);
  uVar10 = *(undefined8 *)((long)plVar7 + _DAT_112ee4008);
  puVar5 = &UNK_11058b1b0;
  func_0x000107c613fc(&UNK_11058b1b0,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,plVar7);
  pcStack_80 = FUN_100b7031c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x100b5ebe4;
  puStack_88 = &UNK_11058b1c8;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  func_0x000107c5dc64(uVar10);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(plVar7);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_4);
  lVar8 = 0;
  FUN_1008d5980();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112ee3ea0) = uVar1;
  *(long **)(lVar9 + _DAT_112ee3ea8) = plVar7;
  lStack_b0 = lVar9;
  lStack_a8 = lVar8;
  func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1008d5824; end: 1008d5843;  */

void FUN_1008d5824(void)

{
  func_0x000107c61168(&PTR_PTR_1128823a0);
  return;
}



/* Entry: 1008d5844; end: 1008d5947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1008d5844(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ee3ed8) = 0;
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  puVar2 = &UNK_11058b0c0;
  func_0x000107c613fc(&UNK_11058b0c0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,puVar1);
  pcStack_50 = FUN_100b70294;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x100b5ebe4;
  puStack_58 = &UNK_11058b0d8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c5dc64(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1008d5948; end: 1008d595b;  */

void FUN_1008d5948(long param_1,long param_2)

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



/* Entry: 1008d595c; end: 1008d597b;  */

void FUN_1008d595c(void)

{
  func_0x000107c61168(&PTR_PTR_112882460);
  return;
}



/* Entry: 1008d597c; end: 1008d597f;  */

void FUN_1008d597c(long param_1,long param_2)

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



/* Entry: 1008d5980; end: 1008d599f;  */

void FUN_1008d5980(void)

{
  func_0x000107c61168(&PTR_PTR_1128822d8);
  return;
}



/* Entry: 1008d59a0; end: 1008d59b3;  */

void FUN_1008d59a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1008d59b4; end: 1008d59f7;  */

void FUN_1008d59b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1008d59f8; end: 1008d5a03; -[_TtC27LensesCameraIntegrationImpl37LensesCameraLensesFeaturesCoordinator previewLensesInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008d59f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee3ea8;
  func_0x000107c61428(param_1 + _DAT_112ee3ea8,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d5a04; end: 1008d5a47;  */

void FUN_1008d5a04(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d5a48; end: 1008d631b; -[SCPreviewPresenterImpl initWithDeviceMotionCaptureFeatureProvider:cameraSnapModelServices:lensLogger:coreCameraLogger:sendflowScopeExposer:snapchattersDataFetcher:deviceMotionManager:cameraHardwareResource:deviceCapacityAnalyzer:previewFilterDataProviderFactory:circumstanceEngine:complianceEngine:appStartExperimentReader:cameraConfiguration:appLifecycleEvent:previewABServices:snapEditorTweakServices:snapEditorScopeExposer:snapEditorScopeServices:lensPreviewConfiguringServices:deckServices:snapSource:checkInOptionFetcher:aiLensDataProvider:miniCameraContainerProvider:locationProvider:userLocationPermissionsManager:temporaryFileWriter:cameraViewType:scopedCameraType:friendsFeedLoggingServices:conversationIdServices:lensPlusTierService:cameraModeActivationController:lensVenueInfoProvider:previewLensesInfoProvider:ucoServices:sendFlowScopeBuilderServices:bitmojiLensContextServices:] */

undefined8 *
FUN_1008d5a48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined4 param_25,undefined4 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined4 param_41,undefined4 param_42,undefined8 param_43,undefined8 param_44)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
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
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  puStack_70 = PTR_PTR_1126efc38;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[4];
    puVar1[4] = param_43;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c4258;
    func_0x000107c610fc();
    uVar2 = puVar1[0x36];
    puVar1[0x36] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c8178;
    func_0x000107c610f4();
    func_0x000107c46554();
    uVar2 = puVar1[0x37];
    puVar1[0x37] = puVar3;
    func_0x000107c61170(uVar2);
    uVar12 = puVar1[0x37];
    uVar2 = param_10;
    func_0x000107c5c734(param_10);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3f630();
    func_0x000107c61180();
    uVar5 = param_10;
    func_0x000107c5c734(param_10);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c40794();
    uVar8 = param_10;
    func_0x000107c5c734(param_10);
    func_0x000107c61180();
    uVar9 = uVar8;
    func_0x000107c4c238();
    func_0x000107c61180();
    func_0x000107c5bb2c(uVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_15;
    func_0x000107c61170(uVar2);
    puVar10 = PTR_PTR_1126afee0;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar11 = puVar1;
    func_0x000107c61158();
    func_0x000107c60b14();
    func_0x000107c61180();
    func_0x000107c60b18();
    func_0x000107c61180();
    func_0x000107c51804(puVar3);
    func_0x000107c61180();
    func_0x000107c46120();
    uVar2 = puVar1[0x35];
    puVar1[0x35] = puVar10;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar11);
    func_0x000107c59428(puVar1[0x35]);
    func_0x000107c5312c(puVar1[0x35]);
    func_0x000107c58c90(puVar1[0x35]);
    uVar2 = 8;
    FUN_1008cc2b4(8);
    func_0x000107c61180();
    func_0x000107c59558(puVar1[0x36]);
    func_0x000107c61170(uVar2);
    func_0x000107c5947c(puVar1[0x35]);
    func_0x0001008e3740();
    func_0x000107c563f0(puVar1[0x35]);
    func_0x000107c3c730(puVar1);
    func_0x000107c58c10(puVar1[0x35]);
    func_0x000107c5a530(puVar1[0x35]);
    uVar2 = param_28;
    func_0x000107c5c734(param_28);
    func_0x000107c61180();
    func_0x000107c525a4(puVar1[0x35]);
    func_0x000107c61170(uVar2);
    func_0x000107c55c14(puVar1[0x35]);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126c8180;
    func_0x000107c3f080();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0xe,param_10);
    func_0x000107c611a0(puVar1 + 0xf,param_11);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x11,param_7);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x16,param_23);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x22,param_24);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_29;
    func_0x000107c61170(uVar2);
    puVar1[0x2a] = param_33;
    puVar1[0x2b] = param_34;
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_37;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x32,param_38);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_40;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 0x33,param_44);
  }
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
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



/* Entry: 1008d631c; end: 1008d633b; -[SCSnapEditorCommonLoggingParams init] */

void FUN_1008d631c(void)

{
  FUN_1008d633c(PTR_PTR_1127099a8);
  return;
}



/* Entry: 1008d633c; end: 1008d634f;  */

void FUN_1008d633c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1008d6350; end: 1008d639f; -[SCValdiMarshallableObject init] */

long FUN_1008d6350(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_1008d63a0();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x0001003a77d8();
    func_0x000107c61180();
    func_0x0001003af050();
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x0001003af060();
    func_0x000107c3dbe0(uVar2,param_2,lVar1);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return param_1;
}



/* Entry: 1008d63a0; end: 1008d63bb;  */

void FUN_1008d63a0(undefined8 param_1)

{
  undefined8 uStack0000000000000000;
  undefined *puStack0000000000000008;
  
  puStack0000000000000008 = PTR_PTR_11270c058;
  uStack0000000000000000 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 1008d63bc; end: 1008d6417; -[SCValdiMarshallableObjectRegistry allocateStorageForClass:] */

void FUN_1008d63bc(void)

{
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 uStack_28;
  
  FUN_1003a7f28();
  FUN_1003af0e0();
  func_0x0001003b2e00();
  FUN_1008d6bc8();
  func_0x0001008d6bd4();
  func_0x0001003a8294(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001008d6bd4();
  func_0x000107c39ff8();
  *extraout_x8 = &PTR_DAT_110d55ae0;
  extraout_x8[1] = &PTR_DAT_110d56ba8;
  extraout_x8[2] = 0;
  *(undefined1 *)(extraout_x8 + 3) = 0;
  return;
}



/* Entry: 1008d6418; end: 1008d643b; +[SCSnapEditorCommonLoggingParams valdiMarshallableObjectDescriptor] */

void FUN_1008d6418(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d55ae0;
  param_1[1] = &PTR_DAT_110d56ba8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1008d643c; end: 1008d6463;  */

void FUN_1008d643c(void)

{
  FUN_1008d6464();
  FUN_1008d6474();
  func_0x0001003b1994();
  FUN_1003b12a0();
  return;
}



/* Entry: 1008d6464; end: 1008d6473;  */

void FUN_1008d6464(void)

{
  return;
}



/* Entry: 1008d6474; end: 1008d64a7;  */

void FUN_1008d6474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_1003adc98();
  func_0x0001003adca4(param_1,5,param_3,param_4,auStack_28);
  func_0x0001003adcb0();
  return;
}



/* Entry: 1008d64a8; end: 1008d64b3;  */

void FUN_1008d64a8(void)

{
  return;
}



/* Entry: 1008d64b4; end: 1008d64d3;  */

void FUN_1008d64b4(long param_1)

{
  FUN_1003b1988();
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
  return;
}



/* Entry: 1008d64d4; end: 1008d6513;  */

undefined2 * FUN_1008d64d4(undefined2 *param_1,undefined2 *param_2)

{
  if (param_1 != param_2) {
    FUN_1003ae7e0();
    FUN_1008d6514();
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    func_0x0001003addd4();
  }
  return param_1;
}



/* Entry: 1008d6514; end: 1008d655b;  */

long * FUN_1008d6514(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    lVar2 = *param_2;
    *param_2 = 0;
    plVar1 = (long *)*param_1;
    *param_1 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))();
    }
  }
  return param_1;
}



/* Entry: 1008d655c; end: 1008d6563;  */

void FUN_1008d655c(void)

{
  return;
}



/* Entry: 1008d6564; end: 1008d658b;  */

void FUN_1008d6564(void)

{
  FUN_1008d6464();
  FUN_1008d658c();
  func_0x0001003b1994();
  FUN_1003b12a0();
  return;
}



/* Entry: 1008d658c; end: 1008d65bf;  */

void FUN_1008d658c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_1003adc98();
  func_0x0001003adca4(param_1,6,param_3,param_4,auStack_28);
  func_0x0001003adcb0();
  return;
}



/* Entry: 1008d65c0; end: 1008d65e7;  */

void FUN_1008d65c0(void)

{
  FUN_1008d6464();
  FUN_1008d65e8();
  func_0x0001003b1994();
  FUN_1003b12a0();
  return;
}



/* Entry: 1008d65e8; end: 1008d661b;  */

void FUN_1008d65e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_28 [8];
  
  FUN_1003adc98();
  func_0x0001003adca4(param_1,4,param_3,param_4,auStack_28);
  func_0x0001003adcb0();
  return;
}



/* Entry: 1008d661c; end: 1008d669f;  */

void FUN_1008d661c(uint param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [16];
  byte bStack_28;
  
  FUN_1003b0a5c();
  FUN_1008d66a0();
  if ((param_1 & 1) == 0) {
    func_0x000107c3a1fc();
  }
  else {
    func_0x0001008d66a8(auStack_38);
    if (((bStack_28 & 1) == 0) || (FUN_1003b10cc(), (param_1 & 1) == 0)) {
      func_0x000107c3a1fc();
    }
    else {
      if ((bStack_28 & 1) == 0) {
        func_0x000104bdc2c8();
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d6690);
        (*pcVar1)();
      }
      FUN_1003b126c();
      FUN_1008d66b0();
      func_0x0001003b127c();
      FUN_1003b12a0();
    }
    func_0x0001003b12d4();
  }
  return;
}



/* Entry: 1008d66a0; end: 1008d66af;  */

ulong FUN_1008d66a0(ulong param_1)

{
  ulong uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x0001003b0a68();
  if ((uVar1 & 1) == 0) {
    uStack_40 = 0x3c;
    uStack_38 = 0;
    FUN_1003a91d4(&UNK_10f7d0f42);
    FUN_1003a9204(auStack_58);
    func_0x000107c3a330();
    func_0x000107c31098(param_1);
    func_0x000107c3a324();
  }
  return uVar1;
}



/* Entry: 1008d66b0; end: 1008d6707;  */

void FUN_1008d66b0(undefined8 param_1)

{
  int extraout_w11;
  undefined8 uStack_30;
  
  FUN_1008d6708();
  FUN_1008d6714();
  if (uStack_30 != 0) {
    do {
      func_0x0001003b1898();
    } while (extraout_w11 != 0);
  }
  func_0x0001008d6778();
  func_0x0001003adca4(param_1,0xe);
  func_0x0001003adcb0();
  func_0x0001008d6784();
  return;
}



/* Entry: 1008d6708; end: 1008d6713;  */

void FUN_1008d6708(void)

{
  return;
}



/* Entry: 1008d6714; end: 1008d6737;  */

void FUN_1008d6714(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008d6738();
  FUN_1008d6748();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1008d6738; end: 1008d6747;  */

void FUN_1008d6738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 1008d6748; end: 1008d676f;  */

void FUN_1008d6748(void)

{
  FUN_1003b1850();
  FUN_1008d6770();
  return;
}



/* Entry: 1008d6770; end: 1008d678b;  */

void FUN_1008d6770(undefined8 param_1,undefined8 *param_2,undefined2 *param_3)

{
  undefined8 *puVar1;
  undefined8 in_x9;
  
  puVar1 = param_2 + 2;
  *param_2 = in_x9;
  param_2[1] = param_1;
  FUN_1003adda4();
  puVar1[1] = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_3 + 4) = 0;
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 0;
  FUN_1003adb50();
  return;
}



/* Entry: 1008d678c; end: 1008d67af;  */

void FUN_1008d678c(void)

{
  FUN_1003b18d4();
  FUN_1008d67b0();
  return;
}



/* Entry: 1008d67b0; end: 1008d680b;  */

void FUN_1008d67b0(long *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010b992198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1008d680c; end: 1008d6857;  */

void FUN_1008d680c(void)

{
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x25;
  
  func_0x0001008d67e8();
  FUN_1008d6858();
  FUN_1008d68cc();
  func_0x0001008d6920();
  FUN_1008d6950();
  *unaff_x23 = *unaff_x22 + unaff_x25;
  return;
}



/* Entry: 1008d6858; end: 1008d68b7;  */

ulong FUN_1008d6858(long param_1,long param_2)

{
  ulong extraout_x8;
  ulong uVar1;
  ulong uVar2;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x10;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0x555555555555555 - uVar1 < (param_2 - uVar1) + *(long *)(param_1 + 8)) {
    func_0x000107c60ebc();
    uVar1 = extraout_x8;
    uVar2 = extraout_x9;
    uVar3 = extraout_x10;
  }
  else {
    if (uVar1 >> 0x3d == 0) {
      uVar2 = (uVar1 << 3) / 5;
    }
    else {
      uVar2 = uVar1 << 3;
      if (4 < uVar1 >> 0x3d) {
        uVar2 = 0xffffffffffffffff;
      }
    }
    uVar1 = *(long *)(param_1 + 8) + param_2;
    uVar3 = 0x555555555555555;
  }
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  if (uVar1 <= uVar2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1008d68b8; end: 1008d68cb;  */

ulong FUN_1008d68b8(ulong param_1)

{
  ulong in_x9;
  ulong in_x10;
  
  if (in_x10 <= in_x9) {
    in_x9 = in_x10;
  }
  if (param_1 <= in_x9) {
    param_1 = in_x9;
  }
  return param_1;
}



/* Entry: 1008d68cc; end: 1008d6913;  */

void FUN_1008d68cc(undefined8 param_1,ulong param_2)

{
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if (0x555555555555555 < param_2) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1008d68f0;
    func_0x000107c60ebc();
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  }
  if (0x555555555555555 < param_2) {
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x00010772e264();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 1008d6914; end: 1008d694f;  */

void FUN_1008d6914(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
  return;
}



/* Entry: 1008d6950; end: 1008d699f;  */

void FUN_1008d6950(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x23;
  
  func_0x0001008d693c();
  FUN_1008d69a0();
  func_0x0001008d69c4();
  FUN_1008d69dc();
  if (unaff_x23 != 0) {
    func_0x0001008d6aec(param_1,param_2,*(undefined8 *)(unaff_x20 + 8));
    FUN_1003b1fb8();
    func_0x0001008d6af8();
    func_0x0001003b2018();
  }
  func_0x0001008d6b08();
  FUN_1008d6b20();
  return;
}



/* Entry: 1008d69a0; end: 1008d69db;  */

void FUN_1008d69a0(void)

{
  return;
}



/* Entry: 1008d69dc; end: 1008d6a23;  */

void FUN_1008d69dc(void)

{
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  func_0x0001008d693c();
  FUN_1008d6a24();
  FUN_1008d6a44();
  FUN_1003b1c30();
  FUN_1008d6a80();
  FUN_1008d6a44();
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  FUN_1008d6a9c(&stack0x00000008);
  return;
}



/* Entry: 1008d6a24; end: 1008d6a43;  */

void FUN_1008d6a24(void)

{
  return;
}



/* Entry: 1008d6a44; end: 1008d6a7f;  */

void FUN_1008d6a44(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    FUN_1003b1c30(param_4,param_2);
    param_4 = param_4 + 0x18;
  }
  return;
}



/* Entry: 1008d6a80; end: 1008d6a9b;  */

void FUN_1008d6a80(void)

{
  return;
}



/* Entry: 1008d6a9c; end: 1008d6ad7;  */

void FUN_1008d6a9c(long param_1)

{
  long *unaff_x19;
  
  func_0x0001008d6a90();
  while (param_1 != unaff_x19[1]) {
    FUN_1003b1c5c();
    param_1 = *unaff_x19 + 0x18;
    *unaff_x19 = param_1;
  }
  return;
}



/* Entry: 1008d6ad8; end: 1008d6b1f;  */

void FUN_1008d6ad8(void)

{
  return;
}



/* Entry: 1008d6b20; end: 1008d6b4b;  */

void FUN_1008d6b20(long param_1)

{
  undefined1 in_ZR;
  
  func_0x0001008d6a90();
  if ((param_1 != 0) && (func_0x000107c34b8c(), !(bool)in_ZR)) {
    func_0x000107c60e14();
  }
  return;
}



/* Entry: 1008d6b4c; end: 1008d6b73;  */

void FUN_1008d6b4c(void)

{
  return;
}



/* Entry: 1008d6b74; end: 1008d6b8f;  */

void FUN_1008d6b74(undefined8 *param_1)

{
  FUN_1003ad6cc(param_1,*param_1);
  return;
}



/* Entry: 1008d6b90; end: 1008d6ba7;  */

void FUN_1008d6b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_2 + 1;
  uVar2 = *puVar1;
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *puVar1 = 0;
  FUN_1003b2ff8(puVar1);
  func_0x0001003b2b60();
  return;
}



/* Entry: 1008d6ba8; end: 1008d6bc7;  */

void FUN_1008d6ba8(undefined8 *param_1)

{
  func_0x0001003af70c(*param_1);
  FUN_1003acf94();
  return;
}



/* Entry: 1008d6bc8; end: 1008d6bf3;  */

long FUN_1008d6bc8(void)

{
  long lVar1;
  long in_stack_00000010;
  
  lVar1 = *(long *)(in_stack_00000010 + 0x38) << 3;
  func_0x000107c610a0(lVar1);
  func_0x000107c60ee4();
  return lVar1;
}



/* Entry: 1008d6bf4; end: 1008d6cf3; -[SCRecordingMetadataProvider initWithDeviceMotionCaptureFeatureProvider:] */

undefined8 * FUN_1008d6bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126efc70;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    func_0x000107c61170(uVar2);
    *(undefined2 *)(puVar1 + 6) = 0;
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c60a40(&uStack_58,0xffffffffffffffff,1);
    *(undefined8 *)((long)puVar1 + 0x3c) = uStack_50;
    *(undefined8 *)((long)puVar1 + 0x34) = uStack_58;
    *(undefined8 *)((long)puVar1 + 0x44) = uStack_48;
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1008d6cf4; end: 1008d6e87; -[SCRecordingMetadataProvider startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_1008d6cf4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61144(auStack_68,param_1);
  if (*(long *)(param_1 + 0x50) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar1;
    func_0x000107c61170(uVar5);
    uVar5 = param_5;
    func_0x000107c5c734(param_5);
    func_0x000107c61180();
    uVar2 = uVar5;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5d58c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    uVar4 = uVar3;
    func_0x000107c5c320(uVar3);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61120(auStack_70);
  }
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008d6e88; end: 1008d6e8f; -[SCPreviewConfiguration initWithContext:circumstanceEngine:] */

void FUN_1008d6e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0041b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContext_circumstanceEngi_1125dea30,param_3,param_4,1);
  return;
}



/* Entry: 1008d6e90; end: 1008d7043; -[SCPreviewConfiguration initWithContext:circumstanceEngine:filtersEnabled:] */

undefined1 *
FUN_1008d6e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_58 = PTR_PTR_1126fe290;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 0xa0) = 1;
    *(undefined8 *)((long)puVar1 + 0x2d8) = 0x7fffffffffffffff;
    puVar2 = (undefined1 *)puVar1;
    FUN_10011df08();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar2;
    func_0x000107c61170();
    FUN_10011df08();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar6;
    func_0x000107c61170(uVar7);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    func_0x000107c61170(uVar6);
    func_0x000107c61174(param_4);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    func_0x000107c61170(uVar6);
    *(undefined8 *)((long)puVar1 + 0x128) = 0;
    puVar3 = PTR_PTR_1126c8180;
    func_0x000107c3f080();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5e688();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5e494();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = puVar5;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x238);
    *(undefined **)((long)puVar1 + 0x238) = puVar3;
    func_0x000107c61170(uVar6);
    *(undefined8 *)((long)puVar1 + 0x178) = 0x3fe2000000000000;
    *(undefined8 *)((long)puVar1 + 0x1c8) = 0xffffffffffffffff;
    *(undefined1 *)((long)puVar1 + 0x80) = param_5;
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008d7044; end: 1008d705f; +[SCCameraCommonParametersBuilder cameraCommonParameters] */

void FUN_1008d7044(void)

{
  func_0x000107c610fc(PTR_PTR_1126c8180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d7060; end: 1008d7067; -[SCCameraCommonParametersBuilder withLowLightStatus:] */

void FUN_1008d7060(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x60) = param_3;
  return;
}



/* Entry: 1008d7068; end: 1008d706f; -[SCCameraCommonParametersBuilder withCaptureSource:] */

void FUN_1008d7068(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1008d7070; end: 1008d7167; -[SCCameraCommonParametersBuilder build] */

void FUN_1008d7070(long param_1)

{
  func_0x000107c610f4(PTR_PTR_1126dba58);
  func_0x000107c4695c(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0xa8),
                      *(undefined4 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008d7168; end: 1008d7423; -[SCCameraCommonParameters initWithFingerDownCaptureEnabled:flashOn:flashMode:handsFree:handsFreeActivationType:isShutterSoundEnabled:lowLightBoostEnabledBeforeCapture:withZooming:zoomingLevel:exposureBias:cameraFlipsWhileRecording:cameraMode:captureSource:gridModeState:lowLightStatus:ringFlashColor:ringFlashSize:ringFlashAutoEnableTooltipShown:ringFlashAutoEnable:cameraFlipActionDuringCapture:toneModeAdjustedImageDiff:toneModeFineTuningValue:toneModeSliderValue:toneModeToneMappingParams:recordingSpeed:ringStyle:videoStabilizationMode:backCameraDeviceType:lensPosition:zoomFactorsRange:preCaptureZoomLevel:zoomLevelGroup:captureZoomSource:isAspectRatioButtonActivated:isDeviceInMotion:motionValue:brightnessValue:activeMicrophoneMode:preferredMicrophoneMode:lastPreferredMicrophoneMode:isContinuousCapture:] */

undefined8 *
FUN_1008d7168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
             undefined8 param_13,undefined1 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined4 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined4 param_26,undefined4 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined4 param_36,
             undefined4 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined1 param_42)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_33);
  puStack_b0 = PTR_PTR_1126fe300;
  puVar1 = &uStack_b8;
  uStack_b8 = param_9;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined1 *)((long)puVar1 + 9) = param_12;
    *(undefined1 *)((long)puVar1 + 10) = param_14;
    puVar1[4] = param_13;
    puVar1[5] = param_15;
    *(undefined1 *)((long)puVar1 + 0xb) = param_16;
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_17;
    *(undefined1 *)((long)puVar1 + 0xd) = param_17._1_1_;
    puVar1[6] = param_1;
    uVar2 = param_19;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[8] = param_20;
    puVar1[9] = param_21;
    puVar1[10] = param_22;
    puVar1[0xb] = param_23;
    puVar1[0xc] = param_24;
    puVar1[0xd] = param_25;
    puVar1[0xe] = param_2;
    *(undefined1 *)((long)puVar1 + 0xe) = (undefined1)param_26;
    *(undefined1 *)((long)puVar1 + 0xf) = param_26._1_1_;
    uVar2 = param_28;
    func_0x000107c40794();
    uVar3 = puVar1[0xf];
    puVar1[0xf] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x10] = param_3;
    puVar1[0x11] = param_4;
    puVar1[0x12] = param_5;
    uVar2 = param_29;
    func_0x000107c40794();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x14] = param_6;
    puVar1[0x15] = param_30;
    puVar1[0x16] = param_31;
    puVar1[0x17] = param_32;
    *(undefined4 *)((long)puVar1 + 0x14) = param_7;
    uVar2 = param_33;
    func_0x000107c40794();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    func_0x000107c61170(uVar3);
    puVar1[0x19] = param_8;
    puVar1[0x1a] = param_34;
    puVar1[0x1b] = param_35;
    *(undefined1 *)(puVar1 + 2) = (undefined1)param_36;
    *(undefined1 *)((long)puVar1 + 0x11) = param_36._1_1_;
    *(undefined4 *)(puVar1 + 3) = param_37;
    puVar1[0x1c] = param_38;
    puVar1[0x1d] = param_39;
    puVar1[0x1e] = param_40;
    puVar1[0x1f] = param_41;
    *(undefined1 *)((long)puVar1 + 0x12) = param_42;
  }
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_19);
  return puVar1;
}



/* Entry: 1008d7424; end: 1008d746b; -[SCCameraCommonParametersBuilder .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001008d743c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008d7454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008d7440) */
/* WARNING: Removing unreachable block (ram,0x0001008d7458) */

void FUN_1008d7424(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0xd0,0);
  return;
}



/* Entry: 1008d746c; end: 1008d74ab; -[SCPreviewConfiguration setSnapPageSource:] */

void FUN_1008d746c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x218) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1218),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x218) = param_3;
  }
  return;
}



/* Entry: 1008d74ac; end: 1008d74bb; -[SCPreviewConfiguration _shouldUpdateKeyWithName:] */

byte FUN_1008d74ac(long param_1)

{
  return (*(byte *)(param_1 + 8) ^ 0xff) & 1;
}



/* Entry: 1008d74bc; end: 1008d74fb; -[SCPreviewConfiguration setCameraViewType:] */

void FUN_1008d74bc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x148) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1238),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x148) = param_3;
  }
  return;
}



/* Entry: 1008d74fc; end: 1008d753b; -[SCPreviewConfiguration setScopedCameraType:] */

void FUN_1008d74fc(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((*(long *)(param_1 + 0x150) != param_3) &&
     (func_0x000107c3c7ec(iVar1,param_2,&PTR____CFConstantStringClassReference_110ef1258),
     iVar1 != 0)) {
    *(long *)(param_1 + 0x150) = param_3;
  }
  return;
}



/* Entry: 1008d753c; end: 1008d7973;  */

undefined8 ***
FUN_1008d753c(undefined8 ***param_1,undefined8 ***param_2,undefined8 **param_3,char *param_4,
             undefined8 **param_5)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 ***pppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 ***pppuVar11;
  undefined8 **ppuVar12;
  undefined8 ***pppuVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 **ppuStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 **ppuStack_108;
  undefined8 **appuStack_100 [4];
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 ***pppuStack_d0;
  undefined8 *puStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 **ppuStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_1 + 0xc;
  pppuVar6 = param_2;
  FUN_100460448(pppuVar5);
  if (param_1[0x6d] == (undefined8 **)0x0) {
    pppuVar11 = (undefined8 ***)((long)param_1 + 0x371);
    ppuVar8 = (undefined8 **)(ulong)*(byte *)(param_1 + 0x6e);
  }
  else {
    pppuVar11 = (undefined8 ***)param_1[0x6f];
    ppuVar8 = param_1[0x6e];
  }
  ppuVar14 = *param_2;
  if (ppuVar14 == (undefined8 **)0x0) {
    ppuVar12 = param_1[3];
    if (ppuVar12 == (undefined8 **)0x0) {
      pppuVar1 = param_1 + 0x6d;
      ppuVar12 = param_1[0x25];
      if (ppuVar12 == (undefined8 **)0x0) {
        ppuVar12 = (undefined8 **)0x0;
      }
      else {
        ppuVar9 = (undefined8 **)0x0;
        pppuVar7 = (undefined8 ***)((long)pppuVar11 + (long)ppuVar8);
        do {
          ppuVar8 = param_1[0x24] + (long)ppuVar9 * 4;
          auStack_d8 = (undefined1  [8])ppuVar8[1];
          puStack_e0 = *ppuVar8;
          puStack_c8 = ppuVar8[3];
          pppuStack_d0 = (undefined8 ***)ppuVar8[2];
          puVar10 = (undefined8 *)((ulong)auStack_d8 & 0xff);
          if (puStack_e0 != (undefined8 *)0x0) {
            puVar10 = (undefined8 *)auStack_d8;
          }
          if (puVar10 != (undefined8 *)0x0) {
            pppuVar13 = (undefined8 ***)(auStack_d8 + 1);
            if (puStack_e0 != (undefined8 *)0x0) {
              pppuVar13 = pppuStack_d0;
            }
            do {
              puStack_110 = (undefined8 *)((long)pppuVar7 - (long)pppuVar11);
              puStack_118 = puVar10;
              FUN_100460448(param_1 + 4);
              ppuVar12 = param_1[2];
              param_3 = &puStack_118;
              param_5 = &puStack_110;
              pppuVar6 = pppuVar13;
              param_4 = (char *)pppuVar11;
              FUN_1008d7974();
              func_0x000100466b80(param_1 + 4);
              puVar3 = puStack_118;
              if ((int)ppuVar12 != 0) {
                func_0x000104ae1b68();
                param_4 = "Decryption error: %s";
                pppuVar6 = (undefined8 ***)0x132;
                param_3 = (undefined8 **)0x2;
                FUN_1004686cc(
                             "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/secure_endpoint.cc"
                             );
                goto LAB_1008d77ac;
              }
              pppuVar11 = (undefined8 ***)((long)pppuVar11 + (long)puStack_110);
              if (pppuVar11 == pppuVar7) {
                ppuStack_98 = param_1[0x6e];
                ppuStack_a0 = *pppuVar1;
                ppuStack_88 = param_1[0x70];
                ppuStack_90 = param_1[0x6f];
                FUN_1005a7ec4(param_1[0x22],&ppuStack_a0);
                pppuVar6 = (undefined8 ***)0x2000;
                param_3 = (undefined8 **)0x2000;
                FUN_10074169c(&ppuStack_c0,param_1 + 0x9a);
                param_1[0x6e] = ppuStack_b8;
                *pppuVar1 = ppuStack_c0;
                param_1[0x70] = ppuStack_a8;
                param_1[0x6f] = ppuStack_b0;
                if (*pppuVar1 == (undefined8 **)0x0) {
                  ppuVar8 = (undefined8 **)(ulong)*(byte *)(param_1 + 0x6e);
                  pppuVar11 = (undefined8 ***)((long)param_1 + 0x371);
                }
                else {
                  ppuVar8 = param_1[0x6e];
                  pppuVar11 = (undefined8 ***)param_1[0x6f];
                }
                pppuVar7 = (undefined8 ***)((long)pppuVar11 + (long)ppuVar8);
                bVar4 = true;
              }
              else {
                bVar4 = puStack_110 != (undefined8 *)0x0;
              }
              pppuVar13 = (undefined8 ***)((long)pppuVar13 + (long)puVar3);
              puVar10 = (undefined8 *)((long)puVar10 - (long)puVar3);
            } while ((bVar4) || (puVar10 != (undefined8 *)0x0));
            ppuVar12 = param_1[0x25];
          }
          ppuVar9 = (undefined8 **)(ulong)((int)ppuVar9 + 1);
        } while (ppuVar9 < ppuVar12);
        ppuVar12 = (undefined8 **)0x0;
      }
LAB_1008d77ac:
      if (*pppuVar1 == (undefined8 **)0x0) {
        pppuVar7 = (undefined8 ***)((long)param_1 + 0x371);
      }
      else {
        pppuVar7 = (undefined8 ***)param_1[0x6f];
      }
      if (pppuVar11 != pppuVar7) {
        ppuVar8 = param_1[0x22];
        FUN_100727068(appuStack_100,pppuVar1,(long)pppuVar11 - (long)pppuVar7);
        pppuVar6 = appuStack_100;
        FUN_1005a70c4(ppuVar8);
      }
    }
    else {
      ppuStack_a0 = (undefined8 **)CONCAT44(ppuStack_a0._4_4_,1);
      pppuVar6 = param_1 + 0x23;
      param_3 = param_1[0x22];
      param_4 = (char *)&ppuStack_a0;
      func_0x000104ae1c54();
      iVar2 = (int)ppuStack_a0;
      if ((int)ppuStack_a0 < 2) {
        iVar2 = 1;
      }
      if ((int)ppuVar12 != 0) {
        iVar2 = 1;
      }
      *(int *)((long)param_1 + 0x4fc) = iVar2;
    }
  }
  else {
    FUN_1005a7050(param_1[0x22]);
    param_4 = (char *)&ppuStack_a0;
    param_3 = (undefined8 **)0x12;
    param_5 = (undefined8 **)0x1;
    func_0x000104aba878(&ppuStack_108,2,"Secure read failed");
    pppuVar6 = &ppuStack_108;
    FUN_1008d7c04(param_1);
    if (((ulong)ppuStack_108 & 1) != 0) {
      FUN_10084dad0();
    }
    ppuVar12 = (undefined8 **)0x0;
  }
  func_0x000100466b80();
  if (ppuVar14 == (undefined8 **)0x0) {
    FUN_1005a7050(param_1 + 0x23);
    if ((int)ppuVar12 == 0) {
      ppuStack_148 = (undefined8 **)0x0;
      pppuVar6 = &ppuStack_148;
      FUN_1008d7c04();
      pppuVar5 = param_1;
    }
    else {
      FUN_1005a7050(param_1[0x22]);
      uStack_138 = 0;
      uStack_130 = 0;
      puStack_140 = (undefined8 *)0x0;
      param_4 = (char *)&ppuStack_c0;
      param_5 = &puStack_140;
      param_3 = (undefined8 **)0xd;
      func_0x000104ab5920(&puStack_128,2,"Unwrap failed");
      func_0x000104ad56e4(&ppuStack_120,&puStack_128,ppuVar12);
      pppuVar6 = &ppuStack_120;
      FUN_1008d7c04(param_1);
      if (((ulong)ppuStack_120 & 1) != 0) {
        FUN_10084dad0();
      }
      if (((ulong)puStack_128 & 1) != 0) {
        FUN_10084dad0();
      }
      ppuStack_a0 = &puStack_140;
      pppuVar5 = &ppuStack_a0;
      func_0x000100482b64();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78();
    if ((int)pppuVar6 == 0) {
      func_0x000107c60bd8(pppuVar5);
    }
    func_0x000104bd46a0();
    if (pppuVar5 == (undefined8 ***)0x0) {
      return (undefined8 ***)0x2;
    }
    pppuVar11 = (undefined8 ***)0x2;
    if ((((param_5 != (undefined8 **)0x0) && ((undefined8 ***)param_4 != (undefined8 ***)0x0)) &&
        (param_3 != (undefined8 **)0x0)) &&
       ((pppuVar6 != (undefined8 ***)0x0 && (*pppuVar5 != (undefined8 **)0x0)))) {
      UNRECOVERED_JUMPTABLE = (code *)(*pppuVar5)[2];
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001008d79a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(pppuVar5);
        return pppuVar5;
      }
      pppuVar11 = (undefined8 ***)0x6;
    }
    return pppuVar11;
  }
  return pppuVar5;
}


