/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1052982dc; end: 10529840b;  */

undefined8 *
FUN_1052982dc(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  undefined1 auStack_4a0 [8];
  undefined8 uStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_450 [8];
  undefined1 auStack_448 [8];
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [8];
  undefined1 auStack_410 [24];
  undefined1 auStack_3f8 [24];
  undefined1 auStack_3e0 [24];
  undefined1 auStack_3c8 [24];
  undefined1 auStack_3b0 [24];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined8 uStack_248;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined4 uStack_1e8;
  undefined2 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_180;
  undefined1 auStack_178 [16];
  undefined1 uStack_168;
  undefined2 uStack_160;
  undefined8 uStack_158;
  undefined2 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138189e0 & 1) == 0) {
    param_1 = (undefined8 *)0x1138189e0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_QuotedMessage");
      pcVar2 = "status";
      func_0x0001003a83dc(auStack_68,"status");
      FUN_10529842c();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "content";
      func_0x0001003a83dc(auStack_70,"content");
      FUN_105298484();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar7 = 0;
      param_4 = 2;
      func_0x000104bdbd44(0x1138189d0,auStack_60,0,auStack_58,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = (undefined8 *)0x1138189e0;
      ___cxa_guard_release();
    }
  }
  FUN_1052984fc(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1138189d0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 0x45) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105298770();
  func_0x0001003b2110(auStack_208,0x1136b9a78);
  func_0x000108b80a1c(auStack_1f8,param_1);
  uStack_1e8 = *(undefined4 *)(param_1 + 3);
  uStack_1e0 = 4;
  func_0x00010528cbb4(auStack_1d8,param_1 + 4);
  func_0x000105290520(auStack_1c8,param_1 + 8);
  FUN_105290534(auStack_1b8,param_1 + 0xc);
  FUN_10529dd1c(auStack_1a8,param_1 + 0xf);
  uStack_190 = 5;
  uStack_198 = param_1[0x12];
  uStack_188 = param_1[0x13];
  uStack_180 = 5;
  FUN_10529dd1c(auStack_178,param_1 + 0x14);
  uStack_168 = *(undefined1 *)(param_1 + 0x17);
  uStack_160 = 7;
  uStack_158 = param_1[0x18];
  uStack_150 = 5;
  func_0x000105280820(auStack_148,param_1 + 0x19);
  FUN_105282834(auStack_138,param_1 + 0x1d);
  func_0x00010528cba0(auStack_128,param_1 + 0x20);
  if (*(char *)((long)param_1 + 0x144) == '\x01') {
    uStack_118 = CONCAT44(uStack_118._4_4_,*(undefined4 *)(param_1 + 0x28));
    uStack_110 = 4;
  }
  else {
    uStack_118 = 0;
    uStack_110 = 1;
  }
  uStack_10f = 0;
  func_0x00010528cbdc(auStack_108,param_1 + 0x29);
  func_0x0001052905e0(auStack_f8,param_1 + 0x2d);
  func_0x0001052905f4(auStack_e8,param_1 + 0x33);
  FUN_105292f00(auStack_d8,param_1 + 0x38);
  uVar7 = 0x13;
  func_0x000104bdb9bc(&uStack_200,auStack_208,auStack_1f8);
  lVar8 = 0x120;
  do {
    func_0x00010b9a8d98(auStack_1f8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_208);
  puVar5 = &uStack_200;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = &uStack_200;
  func_0x000104bdbf78();
  FUN_105298d98(uStack_c8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_d8;
  lVar8 = -0x130;
  do {
    func_0x00010b9a8d98(puVar4);
    uVar6 = (undefined4)uVar7;
    puVar4 = puVar4 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_208);
  __Unwind_Resume();
  uStack_248 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9a68 & 1) == 0) {
    puVar3 = (undefined8 *)0x1136b9a68;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_418,"_djinni_record_QuotedMessageContent");
      pcVar2 = "content";
      func_0x0001003a83dc(auStack_420,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_410,auStack_420,pcVar2);
      pcVar2 = "contentType";
      func_0x0001003a83dc(auStack_428,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_3f8,auStack_428,pcVar2);
      pcVar2 = "remoteMediaReferences";
      func_0x0001003a83dc(auStack_430,"remoteMediaReferences");
      FUN_10528cd00();
      func_0x0001003b1b50(auStack_3e0,auStack_430,pcVar2);
      pcVar2 = "localMediaReferences";
      func_0x0001003a83dc(auStack_438,"localMediaReferences");
      FUN_105290608();
      func_0x0001003b1b50(auStack_3c8,auStack_438,pcVar2);
      pcVar2 = "thumbnailIndexLists";
      func_0x0001003a83dc(auStack_440,"thumbnailIndexLists");
      FUN_105290664();
      func_0x0001003b1b50(auStack_3b0,auStack_440,pcVar2);
      pcVar2 = "conversationId";
      func_0x0001003a83dc(auStack_448,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_398,auStack_448,pcVar2);
      pcVar2 = "messageId";
      func_0x0001003a83dc(auStack_450,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_380,auStack_450,pcVar2);
      pcVar2 = "orderKey";
      func_0x0001003a83dc(&uStack_458,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_368,&uStack_458,pcVar2);
      pcVar2 = "senderId";
      func_0x0001003a83dc(&uStack_460,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_350,&uStack_460,pcVar2);
      pcVar2 = "isSaved";
      func_0x0001003a83dc(&uStack_468,"isSaved");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_338,&uStack_468,pcVar2);
      pcVar2 = "createdAt";
      func_0x0001003a83dc(&puStack_470,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_320,&puStack_470,pcVar2);
      pcVar2 = "analyticsMessageId";
      func_0x0001003a83dc(&uStack_478,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_308,&uStack_478,pcVar2);
      pcVar2 = "openedBy";
      func_0x0001003a83dc(&uStack_480,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_2f0,&uStack_480,pcVar2);
      pcVar2 = "messageTypeMetadata";
      func_0x0001003a83dc(&puStack_488);
      FUN_10528cca4();
      func_0x0001003b1b50(auStack_2d8,&puStack_488,pcVar2);
      pcVar2 = "snapPostOpenViewingState";
      func_0x0001003a83dc(&puStack_490,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_2c0,&puStack_490,pcVar2);
      pcVar2 = "snapModeInfo";
      func_0x0001003a83dc(&uStack_498);
      FUN_10528cdb8();
      func_0x0001003b1b50(auStack_2a8,&uStack_498,pcVar2);
      pcVar2 = "publicGroupMessageMetadata";
      func_0x0001003a83dc(auStack_4a0);
      FUN_1052906c0();
      func_0x0001003b1b50(auStack_290,auStack_4a0,pcVar2);
      pcVar2 = "massSnapMessageMetadata";
      func_0x0001003a83dc(&puStack_4a8);
      FUN_10529071c();
      func_0x0001003b1b50(auStack_278,&puStack_4a8,pcVar2);
      pcVar2 = "pollMetadata";
      func_0x0001003a83dc(&uStack_4b0);
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_260,&uStack_4b0,pcVar2);
      puVar4 = auStack_410;
      puVar5 = (undefined8 *)0x0;
      param_4 = 0x13;
      func_0x000104bdbd44(0x1136b9a70,auStack_418,0,puVar4,0x13);
      lVar8 = 0x1b0;
      do {
        func_0x0001003b1c5c(auStack_410 + lVar8);
        uVar6 = SUB84(puVar4,0);
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(&uStack_4b0);
      func_0x0001003a8c94(&puStack_4a8);
      func_0x0001003a8c94(auStack_4a0);
      func_0x0001003a8c94(&uStack_498);
      func_0x0001003a8c94(&puStack_490);
      func_0x0001003a8c94(&puStack_488);
      func_0x0001003a8c94(&uStack_480);
      func_0x0001003a8c94(&uStack_478);
      func_0x0001003a8c94(&puStack_470);
      func_0x0001003a8c94(&uStack_468);
      func_0x0001003a8c94(&uStack_460);
      func_0x0001003a8c94(&uStack_458);
      func_0x0001003a8c94(auStack_450);
      func_0x0001003a8c94(auStack_448);
      func_0x0001003a8c94(auStack_440);
      func_0x0001003a8c94(auStack_438);
      func_0x0001003a8c94(auStack_430);
      func_0x0001003a8c94(auStack_428);
      func_0x0001003a8c94(auStack_420);
      func_0x0001003a8c94(auStack_418);
      puVar3 = (undefined8 *)0x1136b9a68;
      ___cxa_guard_release();
    }
  }
  FUN_105298d98(uStack_248);
  if ((bool)uVar1) {
    return (undefined8 *)0x1136b9a70;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  uVar7 = *puVar5;
  puVar3[1] = puVar5[1];
  *puVar3 = uVar7;
  puVar3[2] = puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar3 + 3) = uVar6;
  func_0x000100699ef0(puVar3 + 4,param_4);
  func_0x00010069957c(puVar3 + 8,param_5);
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  uVar7 = *param_6;
  puVar3[0xd] = param_6[1];
  puVar3[0xc] = uVar7;
  puVar3[0xe] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  uVar7 = *param_7;
  puVar3[0x10] = param_7[1];
  puVar3[0xf] = uVar7;
  puVar3[0x11] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  puVar3[0x12] = param_8;
  puVar3[0x13] = uStack_4b0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x14] = 0;
  uVar7 = *puStack_4a8;
  puVar3[0x15] = puStack_4a8[1];
  puVar3[0x14] = uVar7;
  puVar3[0x16] = puStack_4a8[2];
  *puStack_4a8 = 0;
  puStack_4a8[1] = 0;
  puStack_4a8[2] = 0;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  *(undefined1 *)(puVar3 + 0x17) = auStack_4a0[0];
  puVar3[0x18] = uStack_498;
  *(undefined1 *)(puVar3 + 0x1c) = 0;
  if (*(char *)(puStack_490 + 3) == '\x01') {
    uVar9 = puStack_490[1];
    uVar7 = *puStack_490;
    puVar3[0x1b] = puStack_490[2];
    puVar3[0x1a] = uVar9;
    puVar3[0x19] = uVar7;
    puStack_490[1] = 0;
    puStack_490[2] = 0;
    *puStack_490 = 0;
    *(undefined1 *)(puVar3 + 0x1c) = 1;
  }
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  uVar7 = *puStack_488;
  puVar3[0x1e] = puStack_488[1];
  puVar3[0x1d] = uVar7;
  puVar3[0x1f] = puStack_488[2];
  *puStack_488 = 0;
  puStack_488[1] = 0;
  puStack_488[2] = 0;
  func_0x000100699f98(puVar3 + 0x20,uStack_480);
  puVar3[0x28] = uStack_478;
  uVar7 = *puStack_470;
  uVar10 = puStack_470[3];
  uVar9 = puStack_470[2];
  puVar3[0x2a] = puStack_470[1];
  puVar3[0x29] = uVar7;
  puVar3[0x2c] = uVar10;
  puVar3[0x2b] = uVar9;
  func_0x000100699fd4(puVar3 + 0x2d,uStack_468);
  func_0x00010069a010(puVar3 + 0x33,uStack_460);
  func_0x00010069aaa0(puVar3 + 0x38,uStack_458);
  return puVar3;
}



/* Entry: 10529840c; end: 10529842b;  */

undefined8 *
FUN_10529840c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined1 auStack_430 [8];
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [8];
  undefined1 auStack_3c0 [8];
  undefined1 auStack_3b8 [8];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined8 uStack_1d8;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined4 uStack_178;
  undefined2 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 uStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  if (*(char *)(param_2 + 0x45) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105298770();
  func_0x0001003b2110(auStack_198,0x1136b9a78);
  func_0x000108b80a1c(auStack_188,param_2);
  uStack_178 = *(undefined4 *)(param_2 + 3);
  uStack_170 = 4;
  func_0x00010528cbb4(auStack_168,param_2 + 4);
  func_0x000105290520(auStack_158,param_2 + 8);
  FUN_105290534(auStack_148,param_2 + 0xc);
  FUN_10529dd1c(auStack_138,param_2 + 0xf);
  uStack_120 = 5;
  uStack_128 = param_2[0x12];
  uStack_118 = param_2[0x13];
  uStack_110 = 5;
  FUN_10529dd1c(auStack_108,param_2 + 0x14);
  uStack_f8 = *(undefined1 *)(param_2 + 0x17);
  uStack_f0 = 7;
  uStack_e8 = param_2[0x18];
  uStack_e0 = 5;
  func_0x000105280820(auStack_d8,param_2 + 0x19);
  FUN_105282834(auStack_c8,param_2 + 0x1d);
  func_0x00010528cba0(auStack_b8,param_2 + 0x20);
  if (*(char *)((long)param_2 + 0x144) == '\x01') {
    uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(param_2 + 0x28));
    uStack_a0 = 4;
  }
  else {
    uStack_a8 = 0;
    uStack_a0 = 1;
  }
  uStack_9f = 0;
  func_0x00010528cbdc(auStack_98,param_2 + 0x29);
  func_0x0001052905e0(auStack_88,param_2 + 0x2d);
  func_0x0001052905f4(auStack_78,param_2 + 0x33);
  FUN_105292f00(auStack_68,param_2 + 0x38);
  uVar7 = 0x13;
  func_0x000104bdb9bc(&uStack_190,auStack_198,auStack_188);
  lVar8 = 0x120;
  do {
    func_0x00010b9a8d98(auStack_188 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_198);
  puVar5 = &uStack_190;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_190;
  func_0x000104bdbf78();
  FUN_105298d98(uStack_58);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_68;
  lVar8 = -0x130;
  do {
    func_0x00010b9a8d98(puVar3);
    uVar6 = (undefined4)uVar7;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_198);
  __Unwind_Resume();
  uStack_1d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9a68 & 1) == 0) {
    puVar2 = (undefined8 *)0x1136b9a68;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_3a8,"_djinni_record_QuotedMessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_3b0,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_3a0,auStack_3b0,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_3b8,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_388,auStack_3b8,pcVar4);
      pcVar4 = "remoteMediaReferences";
      func_0x0001003a83dc(auStack_3c0,"remoteMediaReferences");
      FUN_10528cd00();
      func_0x0001003b1b50(auStack_370,auStack_3c0,pcVar4);
      pcVar4 = "localMediaReferences";
      func_0x0001003a83dc(auStack_3c8,"localMediaReferences");
      FUN_105290608();
      func_0x0001003b1b50(auStack_358,auStack_3c8,pcVar4);
      pcVar4 = "thumbnailIndexLists";
      func_0x0001003a83dc(auStack_3d0,"thumbnailIndexLists");
      FUN_105290664();
      func_0x0001003b1b50(auStack_340,auStack_3d0,pcVar4);
      pcVar4 = "conversationId";
      func_0x0001003a83dc(auStack_3d8,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_328,auStack_3d8,pcVar4);
      pcVar4 = "messageId";
      func_0x0001003a83dc(auStack_3e0,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_310,auStack_3e0,pcVar4);
      pcVar4 = "orderKey";
      func_0x0001003a83dc(&uStack_3e8,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_2f8,&uStack_3e8,pcVar4);
      pcVar4 = "senderId";
      func_0x0001003a83dc(&uStack_3f0,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_2e0,&uStack_3f0,pcVar4);
      pcVar4 = "isSaved";
      func_0x0001003a83dc(&uStack_3f8,"isSaved");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_2c8,&uStack_3f8,pcVar4);
      pcVar4 = "createdAt";
      func_0x0001003a83dc(&puStack_400,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_2b0,&puStack_400,pcVar4);
      pcVar4 = "analyticsMessageId";
      func_0x0001003a83dc(&uStack_408,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_298,&uStack_408,pcVar4);
      pcVar4 = "openedBy";
      func_0x0001003a83dc(&uStack_410,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_280,&uStack_410,pcVar4);
      pcVar4 = "messageTypeMetadata";
      func_0x0001003a83dc(&puStack_418,"messageTypeMetadata");
      FUN_10528cca4();
      func_0x0001003b1b50(auStack_268,&puStack_418,pcVar4);
      pcVar4 = "snapPostOpenViewingState";
      func_0x0001003a83dc(&puStack_420,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_250,&puStack_420,pcVar4);
      pcVar4 = "snapModeInfo";
      func_0x0001003a83dc(&uStack_428,"snapModeInfo");
      FUN_10528cdb8();
      func_0x0001003b1b50(auStack_238,&uStack_428,pcVar4);
      pcVar4 = "publicGroupMessageMetadata";
      func_0x0001003a83dc(auStack_430,"publicGroupMessageMetadata");
      FUN_1052906c0();
      func_0x0001003b1b50(auStack_220,auStack_430,pcVar4);
      pcVar4 = "massSnapMessageMetadata";
      func_0x0001003a83dc(&puStack_438,"massSnapMessageMetadata");
      FUN_10529071c();
      func_0x0001003b1b50(auStack_208,&puStack_438,pcVar4);
      pcVar4 = "pollMetadata";
      func_0x0001003a83dc(&uStack_440,"pollMetadata");
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_1f0,&uStack_440,pcVar4);
      puVar3 = auStack_3a0;
      puVar5 = (undefined8 *)0x0;
      param_5 = 0x13;
      func_0x000104bdbd44(0x1136b9a70,auStack_3a8,0,puVar3,0x13);
      lVar8 = 0x1b0;
      do {
        func_0x0001003b1c5c(auStack_3a0 + lVar8);
        uVar6 = SUB84(puVar3,0);
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(&uStack_440);
      func_0x0001003a8c94(&puStack_438);
      func_0x0001003a8c94(auStack_430);
      func_0x0001003a8c94(&uStack_428);
      func_0x0001003a8c94(&puStack_420);
      func_0x0001003a8c94(&puStack_418);
      func_0x0001003a8c94(&uStack_410);
      func_0x0001003a8c94(&uStack_408);
      func_0x0001003a8c94(&puStack_400);
      func_0x0001003a8c94(&uStack_3f8);
      func_0x0001003a8c94(&uStack_3f0);
      func_0x0001003a8c94(&uStack_3e8);
      func_0x0001003a8c94(auStack_3e0);
      func_0x0001003a8c94(auStack_3d8);
      func_0x0001003a8c94(auStack_3d0);
      func_0x0001003a8c94(auStack_3c8);
      func_0x0001003a8c94(auStack_3c0);
      func_0x0001003a8c94(auStack_3b8);
      func_0x0001003a8c94(auStack_3b0);
      func_0x0001003a8c94(auStack_3a8);
      puVar2 = (undefined8 *)0x1136b9a68;
      ___cxa_guard_release();
    }
  }
  FUN_105298d98(uStack_1d8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1136b9a70;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar7 = *puVar5;
  puVar2[1] = puVar5[1];
  *puVar2 = uVar7;
  puVar2[2] = puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar2 + 3) = uVar6;
  func_0x000100699ef0(puVar2 + 4,param_5);
  func_0x00010069957c(puVar2 + 8,param_6);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar7 = *param_7;
  puVar2[0xd] = param_7[1];
  puVar2[0xc] = uVar7;
  puVar2[0xe] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  uVar7 = *param_8;
  puVar2[0x10] = param_8[1];
  puVar2[0xf] = uVar7;
  puVar2[0x11] = param_8[2];
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  puVar2[0x12] = param_9;
  puVar2[0x13] = uStack_440;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x14] = 0;
  uVar7 = *puStack_438;
  puVar2[0x15] = puStack_438[1];
  puVar2[0x14] = uVar7;
  puVar2[0x16] = puStack_438[2];
  *puStack_438 = 0;
  puStack_438[1] = 0;
  puStack_438[2] = 0;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  *(undefined1 *)(puVar2 + 0x17) = auStack_430[0];
  puVar2[0x18] = uStack_428;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  if (*(char *)(puStack_420 + 3) == '\x01') {
    uVar9 = puStack_420[1];
    uVar7 = *puStack_420;
    puVar2[0x1b] = puStack_420[2];
    puVar2[0x1a] = uVar9;
    puVar2[0x19] = uVar7;
    puStack_420[1] = 0;
    puStack_420[2] = 0;
    *puStack_420 = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 1;
  }
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  uVar7 = *puStack_418;
  puVar2[0x1e] = puStack_418[1];
  puVar2[0x1d] = uVar7;
  puVar2[0x1f] = puStack_418[2];
  *puStack_418 = 0;
  puStack_418[1] = 0;
  puStack_418[2] = 0;
  func_0x000100699f98(puVar2 + 0x20,uStack_410);
  puVar2[0x28] = uStack_408;
  uVar7 = *puStack_400;
  uVar10 = puStack_400[3];
  uVar9 = puStack_400[2];
  puVar2[0x2a] = puStack_400[1];
  puVar2[0x29] = uVar7;
  puVar2[0x2c] = uVar10;
  puVar2[0x2b] = uVar9;
  func_0x000100699fd4(puVar2 + 0x2d,uStack_3f8);
  func_0x00010069a010(puVar2 + 0x33,uStack_3f0);
  func_0x00010069aaa0(puVar2 + 0x38,uStack_3e8);
  return puVar2;
}



/* Entry: 10529842c; end: 105298483;  */

undefined8 FUN_10529842c(void)

{
  int iVar1;
  
  if ((bRam00000001130cc1a0 & 1) == 0) {
    iVar1 = 0x130cc1a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc190);
      ___cxa_guard_release(0x1130cc1a0);
    }
  }
  return 0x1130cc190;
}



/* Entry: 105298484; end: 1052984df;  */

undefined8 FUN_105298484(void)

{
  int iVar1;
  
  if ((bRam00000001130cc1b8 & 1) == 0) {
    iVar1 = 0x130cc1b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105298770();
      func_0x00010b990784(0x1130cc1a8);
      ___cxa_guard_release(0x1130cc1b8);
    }
  }
  return 0x1130cc1a8;
}



/* Entry: 1052984e0; end: 1052984fb;  */

void FUN_1052984e0(long param_1)

{
  func_0x000104be6fd0();
  *(undefined1 *)(param_1 + 0x228) = 1;
  return;
}



/* Entry: 1052984fc; end: 10529850f;  */

void FUN_1052984fc(void)

{
  return;
}



/* Entry: 105298510; end: 10529876f;  */

undefined8 *
FUN_105298510(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined8 param_9)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined1 auStack_430 [8];
  undefined8 uStack_428;
  undefined8 *puStack_420;
  undefined8 *puStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [8];
  undefined1 auStack_3d0 [8];
  undefined1 auStack_3c8 [8];
  undefined1 auStack_3c0 [8];
  undefined1 auStack_3b8 [8];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined8 uStack_1d8;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined4 uStack_178;
  undefined2 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined2 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 uStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105298770();
  func_0x0001003b2110(auStack_198,0x1136b9a78);
  func_0x000108b80a1c(auStack_188,param_2);
  uStack_178 = *(undefined4 *)(param_2 + 0x18);
  uStack_170 = 4;
  func_0x00010528cbb4(auStack_168,param_2 + 0x20);
  func_0x000105290520(auStack_158,param_2 + 0x40);
  FUN_105290534(auStack_148,param_2 + 0x60);
  FUN_10529dd1c(auStack_138,param_2 + 0x78);
  uStack_120 = 5;
  uStack_128 = *(undefined8 *)(param_2 + 0x90);
  uStack_118 = *(undefined8 *)(param_2 + 0x98);
  uStack_110 = 5;
  FUN_10529dd1c(auStack_108,param_2 + 0xa0);
  uStack_f8 = *(undefined1 *)(param_2 + 0xb8);
  uStack_f0 = 7;
  uStack_e8 = *(undefined8 *)(param_2 + 0xc0);
  uStack_e0 = 5;
  func_0x000105280820(auStack_d8,param_2 + 200);
  FUN_105282834(auStack_c8,param_2 + 0xe8);
  func_0x00010528cba0(auStack_b8,param_2 + 0x100);
  if (*(char *)(param_2 + 0x144) == '\x01') {
    uStack_a8 = CONCAT44(uStack_a8._4_4_,*(undefined4 *)(param_2 + 0x140));
    uStack_a0 = 4;
  }
  else {
    uStack_a8 = 0;
    uStack_a0 = 1;
  }
  uStack_9f = 0;
  func_0x00010528cbdc(auStack_98,param_2 + 0x148);
  func_0x0001052905e0(auStack_88,param_2 + 0x168);
  func_0x0001052905f4(auStack_78,param_2 + 0x198);
  FUN_105292f00(auStack_68,param_2 + 0x1c0);
  uVar7 = 0x13;
  func_0x000104bdb9bc(&uStack_190,auStack_198,auStack_188);
  lVar8 = 0x120;
  do {
    func_0x00010b9a8d98(auStack_188 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_198);
  puVar5 = &uStack_190;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_190;
  func_0x000104bdbf78();
  FUN_105298d98(uStack_58);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_68;
  lVar8 = -0x130;
  do {
    func_0x00010b9a8d98(puVar3);
    uVar6 = (undefined4)uVar7;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_198);
  __Unwind_Resume();
  uStack_1d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9a68 & 1) == 0) {
    puVar2 = (undefined8 *)0x1136b9a68;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_3a8,"_djinni_record_QuotedMessageContent");
      pcVar4 = "content";
      func_0x0001003a83dc(auStack_3b0,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_3a0,auStack_3b0,pcVar4);
      pcVar4 = "contentType";
      func_0x0001003a83dc(auStack_3b8,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_388,auStack_3b8,pcVar4);
      pcVar4 = "remoteMediaReferences";
      func_0x0001003a83dc(auStack_3c0,"remoteMediaReferences");
      FUN_10528cd00();
      func_0x0001003b1b50(auStack_370,auStack_3c0,pcVar4);
      pcVar4 = "localMediaReferences";
      func_0x0001003a83dc(auStack_3c8,"localMediaReferences");
      FUN_105290608();
      func_0x0001003b1b50(auStack_358,auStack_3c8,pcVar4);
      pcVar4 = "thumbnailIndexLists";
      func_0x0001003a83dc(auStack_3d0,"thumbnailIndexLists");
      FUN_105290664();
      func_0x0001003b1b50(auStack_340,auStack_3d0,pcVar4);
      pcVar4 = "conversationId";
      func_0x0001003a83dc(auStack_3d8,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_328,auStack_3d8,pcVar4);
      pcVar4 = "messageId";
      func_0x0001003a83dc(auStack_3e0,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_310,auStack_3e0,pcVar4);
      pcVar4 = "orderKey";
      func_0x0001003a83dc(&uStack_3e8,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_2f8,&uStack_3e8,pcVar4);
      pcVar4 = "senderId";
      func_0x0001003a83dc(&uStack_3f0,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_2e0,&uStack_3f0,pcVar4);
      pcVar4 = "isSaved";
      func_0x0001003a83dc(&uStack_3f8,"isSaved");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_2c8,&uStack_3f8,pcVar4);
      pcVar4 = "createdAt";
      func_0x0001003a83dc(&puStack_400,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_2b0,&puStack_400,pcVar4);
      pcVar4 = "analyticsMessageId";
      func_0x0001003a83dc(&uStack_408,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_298,&uStack_408,pcVar4);
      pcVar4 = "openedBy";
      func_0x0001003a83dc(&uStack_410,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_280,&uStack_410,pcVar4);
      pcVar4 = "messageTypeMetadata";
      func_0x0001003a83dc(&puStack_418,"messageTypeMetadata");
      FUN_10528cca4();
      func_0x0001003b1b50(auStack_268,&puStack_418,pcVar4);
      pcVar4 = "snapPostOpenViewingState";
      func_0x0001003a83dc(&puStack_420,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_250,&puStack_420,pcVar4);
      pcVar4 = "snapModeInfo";
      func_0x0001003a83dc(&uStack_428,"snapModeInfo");
      FUN_10528cdb8();
      func_0x0001003b1b50(auStack_238,&uStack_428,pcVar4);
      pcVar4 = "publicGroupMessageMetadata";
      func_0x0001003a83dc(auStack_430,"publicGroupMessageMetadata");
      FUN_1052906c0();
      func_0x0001003b1b50(auStack_220,auStack_430,pcVar4);
      pcVar4 = "massSnapMessageMetadata";
      func_0x0001003a83dc(&puStack_438,"massSnapMessageMetadata");
      FUN_10529071c();
      func_0x0001003b1b50(auStack_208,&puStack_438,pcVar4);
      pcVar4 = "pollMetadata";
      func_0x0001003a83dc(&uStack_440,"pollMetadata");
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_1f0,&uStack_440,pcVar4);
      puVar3 = auStack_3a0;
      puVar5 = (undefined8 *)0x0;
      param_5 = 0x13;
      func_0x000104bdbd44(0x1136b9a70,auStack_3a8,0,puVar3,0x13);
      lVar8 = 0x1b0;
      do {
        func_0x0001003b1c5c(auStack_3a0 + lVar8);
        uVar6 = SUB84(puVar3,0);
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(&uStack_440);
      func_0x0001003a8c94(&puStack_438);
      func_0x0001003a8c94(auStack_430);
      func_0x0001003a8c94(&uStack_428);
      func_0x0001003a8c94(&puStack_420);
      func_0x0001003a8c94(&puStack_418);
      func_0x0001003a8c94(&uStack_410);
      func_0x0001003a8c94(&uStack_408);
      func_0x0001003a8c94(&puStack_400);
      func_0x0001003a8c94(&uStack_3f8);
      func_0x0001003a8c94(&uStack_3f0);
      func_0x0001003a8c94(&uStack_3e8);
      func_0x0001003a8c94(auStack_3e0);
      func_0x0001003a8c94(auStack_3d8);
      func_0x0001003a8c94(auStack_3d0);
      func_0x0001003a8c94(auStack_3c8);
      func_0x0001003a8c94(auStack_3c0);
      func_0x0001003a8c94(auStack_3b8);
      func_0x0001003a8c94(auStack_3b0);
      func_0x0001003a8c94(auStack_3a8);
      puVar2 = (undefined8 *)0x1136b9a68;
      ___cxa_guard_release();
    }
  }
  FUN_105298d98(uStack_1d8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1136b9a70;
  }
  ___stack_chk_fail();
  if ((int)puVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  uVar7 = *puVar5;
  puVar2[1] = puVar5[1];
  *puVar2 = uVar7;
  puVar2[2] = puVar5[2];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(puVar2 + 3) = uVar6;
  func_0x000100699ef0(puVar2 + 4,param_5);
  func_0x00010069957c(puVar2 + 8,param_6);
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  uVar7 = *param_7;
  puVar2[0xd] = param_7[1];
  puVar2[0xc] = uVar7;
  puVar2[0xe] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  uVar7 = *param_8;
  puVar2[0x10] = param_8[1];
  puVar2[0xf] = uVar7;
  puVar2[0x11] = param_8[2];
  *param_8 = 0;
  param_8[1] = 0;
  param_8[2] = 0;
  puVar2[0x12] = param_9;
  puVar2[0x13] = uStack_440;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x14] = 0;
  uVar7 = *puStack_438;
  puVar2[0x15] = puStack_438[1];
  puVar2[0x14] = uVar7;
  puVar2[0x16] = puStack_438[2];
  *puStack_438 = 0;
  puStack_438[1] = 0;
  puStack_438[2] = 0;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  *(undefined1 *)(puVar2 + 0x17) = auStack_430[0];
  puVar2[0x18] = uStack_428;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  if (*(char *)(puStack_420 + 3) == '\x01') {
    uVar9 = puStack_420[1];
    uVar7 = *puStack_420;
    puVar2[0x1b] = puStack_420[2];
    puVar2[0x1a] = uVar9;
    puVar2[0x19] = uVar7;
    puStack_420[1] = 0;
    puStack_420[2] = 0;
    *puStack_420 = 0;
    *(undefined1 *)(puVar2 + 0x1c) = 1;
  }
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  uVar7 = *puStack_418;
  puVar2[0x1e] = puStack_418[1];
  puVar2[0x1d] = uVar7;
  puVar2[0x1f] = puStack_418[2];
  *puStack_418 = 0;
  puStack_418[1] = 0;
  puStack_418[2] = 0;
  func_0x000100699f98(puVar2 + 0x20,uStack_410);
  puVar2[0x28] = uStack_408;
  uVar7 = *puStack_400;
  uVar10 = puStack_400[3];
  uVar9 = puStack_400[2];
  puVar2[0x2a] = puStack_400[1];
  puVar2[0x29] = uVar7;
  puVar2[0x2c] = uVar10;
  puVar2[0x2b] = uVar9;
  func_0x000100699fd4(puVar2 + 0x2d,uStack_3f8);
  func_0x00010069a010(puVar2 + 0x33,uStack_3f0);
  func_0x00010069aaa0(puVar2 + 0x38,uStack_3e8);
  return puVar2;
}



/* Entry: 105298770; end: 105298bb7;  */

undefined8 *
FUN_105298770(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined1 auStack_290 [8];
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9a68 & 1) == 0) {
    param_1 = (undefined8 *)0x1136b9a68;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_208,"_djinni_record_QuotedMessageContent");
      pcVar1 = "content";
      func_0x0001003a83dc(auStack_210,"content");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_200,auStack_210,pcVar1);
      pcVar1 = "contentType";
      func_0x0001003a83dc(auStack_218,"contentType");
      func_0x000104bef7b8();
      func_0x0001003b1b50(auStack_1e8,auStack_218,pcVar1);
      pcVar1 = "remoteMediaReferences";
      func_0x0001003a83dc(auStack_220,"remoteMediaReferences");
      FUN_10528cd00();
      func_0x0001003b1b50(auStack_1d0,auStack_220,pcVar1);
      pcVar1 = "localMediaReferences";
      func_0x0001003a83dc(auStack_228,"localMediaReferences");
      FUN_105290608();
      func_0x0001003b1b50(auStack_1b8,auStack_228,pcVar1);
      pcVar1 = "thumbnailIndexLists";
      func_0x0001003a83dc(auStack_230,"thumbnailIndexLists");
      FUN_105290664();
      func_0x0001003b1b50(auStack_1a0,auStack_230,pcVar1);
      pcVar1 = "conversationId";
      func_0x0001003a83dc(auStack_238,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_188,auStack_238,pcVar1);
      pcVar1 = "messageId";
      func_0x0001003a83dc(auStack_240,"messageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_170,auStack_240,pcVar1);
      pcVar1 = "orderKey";
      func_0x0001003a83dc(&uStack_248,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_158,&uStack_248,pcVar1);
      pcVar1 = "senderId";
      func_0x0001003a83dc(&uStack_250,"senderId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_140,&uStack_250,pcVar1);
      pcVar1 = "isSaved";
      func_0x0001003a83dc(&uStack_258,"isSaved");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_128,&uStack_258,pcVar1);
      pcVar1 = "createdAt";
      func_0x0001003a83dc(&puStack_260,"createdAt");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_110,&puStack_260,pcVar1);
      pcVar1 = "analyticsMessageId";
      func_0x0001003a83dc(&uStack_268,"analyticsMessageId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_f8,&uStack_268,pcVar1);
      pcVar1 = "openedBy";
      func_0x0001003a83dc(&uStack_270,"openedBy");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_e0,&uStack_270,pcVar1);
      pcVar1 = "messageTypeMetadata";
      func_0x0001003a83dc(&puStack_278,"messageTypeMetadata");
      FUN_10528cca4();
      func_0x0001003b1b50(auStack_c8,&puStack_278,pcVar1);
      pcVar1 = "snapPostOpenViewingState";
      func_0x0001003a83dc(&puStack_280,"snapPostOpenViewingState");
      FUN_105292f20();
      func_0x0001003b1b50(auStack_b0,&puStack_280,pcVar1);
      pcVar1 = "snapModeInfo";
      func_0x0001003a83dc(&uStack_288,"snapModeInfo");
      FUN_10528cdb8();
      func_0x0001003b1b50(auStack_98,&uStack_288,pcVar1);
      pcVar1 = "publicGroupMessageMetadata";
      func_0x0001003a83dc(auStack_290,"publicGroupMessageMetadata");
      FUN_1052906c0();
      func_0x0001003b1b50(auStack_80,auStack_290,pcVar1);
      pcVar1 = "massSnapMessageMetadata";
      func_0x0001003a83dc(&puStack_298,"massSnapMessageMetadata");
      FUN_10529071c();
      func_0x0001003b1b50(auStack_68,&puStack_298,pcVar1);
      pcVar1 = "pollMetadata";
      func_0x0001003a83dc(&uStack_2a0,"pollMetadata");
      FUN_105292f7c();
      func_0x0001003b1b50(auStack_50,&uStack_2a0,pcVar1);
      puVar2 = auStack_200;
      param_2 = (undefined8 *)0x0;
      param_4 = 0x13;
      func_0x000104bdbd44(0x1136b9a70,auStack_208,0,puVar2,0x13);
      lVar3 = 0x1b0;
      do {
        func_0x0001003b1c5c(auStack_200 + lVar3);
        param_3 = SUB84(puVar2,0);
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(&uStack_2a0);
      func_0x0001003a8c94(&puStack_298);
      func_0x0001003a8c94(auStack_290);
      func_0x0001003a8c94(&uStack_288);
      func_0x0001003a8c94(&puStack_280);
      func_0x0001003a8c94(&puStack_278);
      func_0x0001003a8c94(&uStack_270);
      func_0x0001003a8c94(&uStack_268);
      func_0x0001003a8c94(&puStack_260);
      func_0x0001003a8c94(&uStack_258);
      func_0x0001003a8c94(&uStack_250);
      func_0x0001003a8c94(&uStack_248);
      func_0x0001003a8c94(auStack_240);
      func_0x0001003a8c94(auStack_238);
      func_0x0001003a8c94(auStack_230);
      func_0x0001003a8c94(auStack_228);
      func_0x0001003a8c94(auStack_220);
      func_0x0001003a8c94(auStack_218);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      param_1 = (undefined8 *)0x1136b9a68;
      ___cxa_guard_release();
    }
  }
  FUN_105298d98(uStack_38);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1136b9a70;
  }
  ___stack_chk_fail();
  if ((int)param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  func_0x000100699ef0(param_1 + 4,param_4);
  func_0x00010069957c(param_1 + 8,param_5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar4 = *param_6;
  param_1[0xd] = param_6[1];
  param_1[0xc] = uVar4;
  param_1[0xe] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar4 = *param_7;
  param_1[0x10] = param_7[1];
  param_1[0xf] = uVar4;
  param_1[0x11] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_1[0x12] = param_8;
  param_1[0x13] = uStack_2a0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  uVar4 = *puStack_298;
  param_1[0x15] = puStack_298[1];
  param_1[0x14] = uVar4;
  param_1[0x16] = puStack_298[2];
  *puStack_298 = 0;
  puStack_298[1] = 0;
  puStack_298[2] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x17) = auStack_290[0];
  param_1[0x18] = uStack_288;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(puStack_280 + 3) == '\x01') {
    uVar5 = puStack_280[1];
    uVar4 = *puStack_280;
    param_1[0x1b] = puStack_280[2];
    param_1[0x1a] = uVar5;
    param_1[0x19] = uVar4;
    puStack_280[1] = 0;
    puStack_280[2] = 0;
    *puStack_280 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar4 = *puStack_278;
  param_1[0x1e] = puStack_278[1];
  param_1[0x1d] = uVar4;
  param_1[0x1f] = puStack_278[2];
  *puStack_278 = 0;
  puStack_278[1] = 0;
  puStack_278[2] = 0;
  func_0x000100699f98(param_1 + 0x20,uStack_270);
  param_1[0x28] = uStack_268;
  uVar4 = *puStack_260;
  uVar6 = puStack_260[3];
  uVar5 = puStack_260[2];
  param_1[0x2a] = puStack_260[1];
  param_1[0x29] = uVar4;
  param_1[0x2c] = uVar6;
  param_1[0x2b] = uVar5;
  func_0x000100699fd4(param_1 + 0x2d,uStack_258);
  func_0x00010069a010(param_1 + 0x33,uStack_250);
  func_0x00010069aaa0(param_1 + 0x38,uStack_248);
  return param_1;
}



/* Entry: 105298bb8; end: 105298d97;  */

undefined8 *
FUN_105298bb8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 *param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 *param_14,undefined8 *param_15,undefined8 param_16,
             undefined8 param_17,undefined8 *param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  func_0x000100699ef0(param_1 + 4,param_4);
  func_0x00010069957c(param_1 + 8,param_5);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = *param_6;
  param_1[0xd] = param_6[1];
  param_1[0xc] = uVar1;
  param_1[0xe] = param_6[2];
  *param_6 = 0;
  param_6[1] = 0;
  param_6[2] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = *param_7;
  param_1[0x10] = param_7[1];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_7[2];
  *param_7 = 0;
  param_7[1] = 0;
  param_7[2] = 0;
  param_1[0x12] = param_8;
  param_1[0x13] = param_9;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = 0;
  uVar1 = *param_10;
  param_1[0x15] = param_10[1];
  param_1[0x14] = uVar1;
  param_1[0x16] = param_10[2];
  *param_10 = 0;
  param_10[1] = 0;
  param_10[2] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x17) = param_11;
  param_1[0x18] = param_13;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  if (*(char *)(param_14 + 3) == '\x01') {
    uVar2 = param_14[1];
    uVar1 = *param_14;
    param_1[0x1b] = param_14[2];
    param_1[0x1a] = uVar2;
    param_1[0x19] = uVar1;
    param_14[1] = 0;
    param_14[2] = 0;
    *param_14 = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar1 = *param_15;
  param_1[0x1e] = param_15[1];
  param_1[0x1d] = uVar1;
  param_1[0x1f] = param_15[2];
  *param_15 = 0;
  param_15[1] = 0;
  param_15[2] = 0;
  func_0x000100699f98(param_1 + 0x20,param_16);
  param_1[0x28] = param_17;
  uVar1 = *param_18;
  uVar3 = param_18[3];
  uVar2 = param_18[2];
  param_1[0x2a] = param_18[1];
  param_1[0x29] = uVar1;
  param_1[0x2c] = uVar3;
  param_1[0x2b] = uVar2;
  func_0x000100699fd4(param_1 + 0x2d,param_19);
  func_0x00010069a010(param_1 + 0x33,param_20);
  func_0x00010069aaa0(param_1 + 0x38,param_21);
  return param_1;
}



/* Entry: 105298d98; end: 105298dab;  */

void FUN_105298d98(void)

{
  return;
}



/* Entry: 105298dac; end: 105298ed7;  */

undefined1 * FUN_105298dac(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105298ed8();
  func_0x0001003b2110(auStack_78,0x1138189f0);
  FUN_105299108(auStack_68,param_2);
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  uStack_50 = 5;
  if (*(char *)(param_2 + 0x38) == '\0') {
    uStack_50 = 1;
    uStack_58 = 0;
  }
  uStack_4f = 0;
  auStack_48[0] = *(undefined1 *)(param_2 + 0x40);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  FUN_105299038(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_88 = FUN_105298ed8;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138189f8 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138189f8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_Reaction");
      pcVar5 = "reactionContent";
      func_0x0001003a83dc(auStack_100,"reactionContent");
      FUN_10529921c();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "reactionId";
      func_0x0001003a83dc(auStack_108,"reactionId");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "unread";
      func_0x0001003a83dc(auStack_110,"unread");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138189e8,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar4 = (undefined1 *)0x1138189f8;
      ___cxa_guard_release(0x1138189f8);
    }
  }
  FUN_105299038(uStack_a8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return puVar4;
  }
  return (undefined1 *)0x1138189e8;
}



/* Entry: 105298ed8; end: 105299037;  */

undefined8 FUN_105298ed8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138189f8 & 1) == 0) {
    param_1 = 0x1138189f8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_Reaction");
      pcVar1 = "reactionContent";
      func_0x0001003a83dc(auStack_80,"reactionContent");
      FUN_10529921c();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar1);
      pcVar1 = "reactionId";
      func_0x0001003a83dc(auStack_88,"reactionId");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar1);
      pcVar1 = "unread";
      func_0x0001003a83dc(auStack_90,"unread");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138189e8,auStack_78,0,auStack_70,3);
      lVar3 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = 0x1138189f8;
      ___cxa_guard_release(0x1138189f8);
    }
  }
  FUN_105299038(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138189e8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105299038; end: 10529904b;  */

void FUN_105299038(void)

{
  return;
}



/* Entry: 10529904c; end: 105299107;  */

void FUN_10529904c(long *param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  char cStack_40;
  long lStack_38;
  
  func_0x00010b9a97d0(&lStack_38);
  lVar1 = lStack_38 + 0x18;
  func_0x000104bedf58();
  func_0x000104bf102c(&lStack_58,lStack_38 + 0x28);
  *param_1 = lVar1;
  param_1[1] = param_3 & 0xff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (cStack_40 == '\x01') {
    param_1[3] = lStack_50;
    param_1[2] = lStack_58;
    param_1[4] = lStack_48;
    lStack_50 = 0;
    lStack_48 = 0;
    lStack_58 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  func_0x0001001148fc(&lStack_58);
  func_0x000104bdbf78(&lStack_38);
  return;
}



/* Entry: 105299108; end: 10529921b;  */

undefined1 * FUN_105299108(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529921c();
  func_0x0001003b2110(auStack_68,0x113818a08);
  uStack_58 = *param_2;
  uStack_50 = 5;
  if (*(char *)(param_2 + 1) == '\0') {
    uStack_50 = 1;
    uStack_58 = 0;
  }
  uStack_4f = 0;
  func_0x000105280820(auStack_48,param_2 + 2);
  func_0x000104bdb9bc(auStack_60,auStack_68,&uStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529934c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10529921c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar7;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818a10 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818a10;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_ReactionContent");
      pcVar4 = "intentionType";
      func_0x0001003a83dc(auStack_d8,"intentionType");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "emoji";
      func_0x0001003a83dc(auStack_e0,"emoji");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818a00,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x113818a10;
      ___cxa_guard_release(0x113818a10);
    }
  }
  FUN_10529934c(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return puVar3;
  }
  return (undefined1 *)0x113818a00;
}



/* Entry: 10529921c; end: 10529934b;  */

undefined8 FUN_10529921c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818a10 & 1) == 0) {
    param_1 = 0x113818a10;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ReactionContent");
      pcVar1 = "intentionType";
      func_0x0001003a83dc(auStack_68,"intentionType");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "emoji";
      func_0x0001003a83dc(auStack_70,"emoji");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818a00,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818a10;
      ___cxa_guard_release(0x113818a10);
    }
  }
  FUN_10529934c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818a00;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529934c; end: 10529935f;  */

void FUN_10529934c(void)

{
  return;
}



/* Entry: 105299360; end: 10529947b;  */

undefined1 * FUN_105299360(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529947c();
  func_0x0001003b2110(auStack_88,0x113818a20);
  FUN_1052810a4(auStack_78,param_2);
  func_0x000105280820(auStack_68,param_2 + 0x20);
  uStack_58 = *(undefined4 *)(param_2 + 0x40);
  uStack_50 = 4;
  uStack_48 = *(undefined1 *)(param_2 + 0x44);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar6 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_80;
  func_0x000104bdbf78();
  FUN_1052996d0(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  __Unwind_Resume(puVar3);
  pcStack_98 = FUN_10529947c;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar8;
  puStack_a8 = puVar3;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818a28 & 1) == 0) {
    iVar2 = 0x13818a28;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_RemoteMediaInfo");
      pcVar4 = "contentObject";
      func_0x0001003a83dc(auStack_128,"contentObject");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar4);
      pcVar4 = "legacyMediaId";
      func_0x0001003a83dc(auStack_130,"legacyMediaId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar4);
      pcVar4 = "mediaType";
      func_0x0001003a83dc(auStack_138,"mediaType");
      FUN_105299608();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar4);
      pcVar4 = "hasAudio";
      func_0x0001003a83dc(auStack_140,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818a18,auStack_120,0,auStack_118,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_118 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      ___cxa_guard_release(0x113818a28);
    }
  }
  FUN_1052996d0(uStack_b8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818a18;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc1d0 & 1) == 0) {
    iVar5 = 0x130cc1d0;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      func_0x00010b990e20(0x1130cc1c0);
      ___cxa_guard_release(0x1130cc1d0);
    }
  }
  return (undefined1 *)0x1130cc1c0;
}



/* Entry: 10529947c; end: 105299607;  */

undefined8 FUN_10529947c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818a28 & 1) == 0) {
    iVar1 = 0x13818a28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_RemoteMediaInfo");
      pcVar2 = "contentObject";
      func_0x0001003a83dc(auStack_98,"contentObject");
      FUN_1052810e0();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "legacyMediaId";
      func_0x0001003a83dc(auStack_a0,"legacyMediaId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "mediaType";
      func_0x0001003a83dc(auStack_a8,"mediaType");
      FUN_105299608();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "hasAudio";
      func_0x0001003a83dc(auStack_b0,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818a18,auStack_90,0,auStack_88,4);
      lVar4 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      ___cxa_guard_release(0x113818a28);
    }
  }
  FUN_1052996d0(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818a18;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc1d0 & 1) == 0) {
    iVar1 = 0x130cc1d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc1c0);
      ___cxa_guard_release(0x1130cc1d0);
    }
  }
  return 0x1130cc1c0;
}



/* Entry: 105299608; end: 10529965f;  */

undefined8 FUN_105299608(void)

{
  int iVar1;
  
  if ((bRam00000001130cc1d0 & 1) == 0) {
    iVar1 = 0x130cc1d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc1c0);
      ___cxa_guard_release(0x1130cc1d0);
    }
  }
  return 0x1130cc1c0;
}



/* Entry: 105299660; end: 1052996cf;  */

void FUN_105299660(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001006b78fc();
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(char *)(param_3 + 3) == '\x01') {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    *(undefined8 *)(param_1 + 0x30) = param_3[2];
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  *(undefined4 *)(param_1 + 0x40) = param_4;
  *(undefined1 *)(param_1 + 0x44) = param_5;
  return;
}



/* Entry: 1052996d0; end: 1052996e3;  */

void FUN_1052996d0(void)

{
  return;
}



/* Entry: 1052996e4; end: 1052997eb;  */

undefined1 * FUN_1052996e4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined4 auStack_48 [2];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052997ec();
  func_0x0001003b2110(auStack_68,0x113818a38);
  FUN_10529dd1c(auStack_58,param_2);
  auStack_48[0] = *(undefined4 *)(param_2 + 0x18);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529991c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -4;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_1052997ec;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818a40 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818a40;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_ReplayMetadata");
      pcVar5 = "userId";
      func_0x0001003a83dc(auStack_d8,"userId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "count";
      func_0x0001003a83dc(auStack_e0,"count");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818a30,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818a40;
      ___cxa_guard_release(0x113818a40);
    }
  }
  FUN_10529991c(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818a30;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 1052997ec; end: 10529991b;  */

undefined8 FUN_1052997ec(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818a40 & 1) == 0) {
    param_1 = 0x113818a40;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ReplayMetadata");
      pcVar1 = "userId";
      func_0x0001003a83dc(auStack_68,"userId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "count";
      func_0x0001003a83dc(auStack_70,"count");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818a30,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818a40;
      ___cxa_guard_release(0x113818a40);
    }
  }
  FUN_10529991c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818a30;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529991c; end: 10529992f;  */

void FUN_10529991c(void)

{
  return;
}



/* Entry: 105299930; end: 105299b2b;  */

void FUN_105299930(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x000105299fa4();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818a48);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818a48) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_105299980;
  if ((bRam0000000113818a78 & 1) == 0) goto LAB_1052999a0;
  while( true ) {
    func_0x000108b80888(0x113818a68);
LAB_105299980:
    func_0x000105299f80(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052999a0:
    iVar2 = 0x13818a78;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_105299bc8();
      pcVar3 = "onSuccess";
      func_0x0001003a83dc(&uStack_90,"onSuccess");
      func_0x0001003b166c(auStack_b0);
      FUN_105299ec8();
      puVar4 = auStack_78;
      func_0x0001003adcc0(puVar4,pcVar3);
      FUN_105299f24();
      func_0x0001003adcc0(auStack_68,puVar4);
      func_0x000104bdbd48(auStack_a0,auStack_b0,auStack_78,2);
      uStack_58 = uStack_90;
      uStack_90 = 0;
      func_0x0001003aef98(auStack_50,auStack_a0);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_b8,"onError");
      func_0x0001003b166c(auStack_d8);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_88,pcVar3);
      func_0x000104bdbd48(auStack_c8,auStack_d8,auStack_88,1);
      uStack_40 = uStack_b8;
      uStack_b8 = 0;
      func_0x0001003aef98(auStack_38,auStack_c8);
      func_0x000104bdbd44(0x113818a68,0x113818a80,1,&uStack_58,2);
      lVar5 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar5 + -8);
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != -0x18);
      func_0x000105299f94(auStack_c8);
      func_0x000105299f94(auStack_88);
      func_0x000105299f94(auStack_d8);
      func_0x0001003a8c94(&uStack_b8);
      func_0x000105299f94(auStack_a0);
      lVar5 = 0x18;
      do {
        func_0x0001003adc18(auStack_78 + lVar5);
        lVar5 = lVar5 + -0x10;
        in_ZR = lVar5 == -8;
      } while (!(bool)in_ZR);
      func_0x000105299f94(auStack_b0);
      func_0x0001003a8c94(&uStack_90);
      ___cxa_guard_release(0x113818a78);
    }
  }
  return;
}



/* Entry: 105299b2c; end: 105299bc7;  */

undefined8 FUN_105299b2c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818a60 & 1) == 0) {
    iVar4 = 0x13818a60;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_105299bc8();
      lStack_20 = lRam0000000113818a80;
      if (lRam0000000113818a80 != 0) {
        piVar1 = (int *)(lRam0000000113818a80 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113818a50,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818a60);
    }
  }
  return 0x113818a50;
}



/* Entry: 105299bc8; end: 105299c1b;  */

void FUN_105299bc8(void)

{
  int iVar1;
  
  if ((bRam0000000113818a88 & 1) == 0) {
    iVar1 = 0x13818a88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818a80,"_djinni_interface_RetrieveMessagesByServerIdCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818a88);
      return;
    }
  }
  return;
}



/* Entry: 105299c1c; end: 105299dfb;  */

undefined4 * FUN_105299c1c(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_e8 [16];
  undefined4 auStack_d8 [2];
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined4 auStack_78 [4];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  
  plVar6 = param_2;
  func_0x000105299fa4();
  uStack_58 = extraout_x8;
  func_0x00010b9abe10(&lStack_80,(plVar6[1] - *plVar6) / 0x5f8);
  lVar8 = 0;
  lVar10 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)((param_2[1] - *param_2) / 0x5f8); uVar9 = uVar9 + 1) {
    FUN_105295250(auStack_90,*param_2 + lVar8);
    func_0x00010b9a9020(lStack_80 + lVar10,auStack_90);
    func_0x00010b9a8d98(auStack_90);
    lVar10 = lVar10 + 0x10;
    lVar8 = lVar8 + 0x5f8;
  }
  func_0x00010b9a8f84(auStack_78,&lStack_80);
  func_0x000105299f9c();
  func_0x00010b9abe10(&lStack_80,param_3[1] - *param_3 >> 4);
  lVar10 = 0x18;
  for (uVar9 = 0; uVar9 < (ulong)(param_3[1] - *param_3 >> 4); uVar9 = uVar9 + 1) {
    FUN_105286648(auStack_90,*param_3 + lVar10 + -0x18);
    func_0x00010b9a9020(lStack_80 + lVar10,auStack_90);
    func_0x00010b9a8d98(auStack_90);
    lVar10 = lVar10 + 0x10;
  }
  func_0x00010b9a8f84(auStack_68,&lStack_80);
  func_0x000105299f9c();
  uVar7 = 0;
  func_0x000104be6a78(auStack_a0,param_1 + 8,0,auStack_78,2);
  func_0x00010b9a8d98(auStack_a0);
  lVar10 = 0x10;
  do {
    puVar3 = (undefined4 *)((long)auStack_78 + lVar10);
    func_0x00010b9a8d98();
    lVar10 = lVar10 + -0x10;
    bVar1 = lVar10 == -0x10;
  } while (!bVar1);
  func_0x000105299f80(uStack_58);
  if (bVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_68;
  lVar10 = -0x20;
  do {
    func_0x00010b9a8d98(puVar4);
    auStack_d8[0] = (undefined4)uVar7;
    puVar4 = puVar4 + -0x10;
    lVar10 = lVar10 + 0x10;
    uVar2 = lVar10 == 0;
  } while (!(bool)uVar2);
  puVar5 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_a8 = FUN_105299dfc;
  lStack_c0 = lVar10;
  puStack_b8 = puVar3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000105299fa4();
  uStack_d0 = 4;
  uStack_c8 = extraout_x8_00;
  func_0x000104be6a78(auStack_e8,puVar5 + 2,1,auStack_d8,1);
  func_0x00010b9a8d98(auStack_e8);
  puVar3 = auStack_d8;
  func_0x00010b9a8d98();
  func_0x000105299f80(uStack_c8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b9a8d98(auStack_d8);
    __Unwind_Resume(puVar3);
    func_0x000105299fb4();
    return puVar3;
  }
  return puVar3;
}



/* Entry: 105299dfc; end: 105299e7b;  */

undefined4 * FUN_105299dfc(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  auStack_38[0] = param_2;
  func_0x000105299fa4();
  uStack_30 = 4;
  uStack_28 = extraout_x8;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98();
  func_0x000105299f80(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  func_0x000105299fb4();
  return puVar1;
}



/* Entry: 105299e7c; end: 105299ebb;  */

void FUN_105299e7c(void)

{
  func_0x000105299fb4();
  return;
}



/* Entry: 105299ebc; end: 105299ec7;  */

undefined8 * FUN_105299ebc(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 105299ec8; end: 105299f23;  */

undefined8 FUN_105299ec8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc1e8 & 1) == 0) {
    iVar1 = 0x130cc1e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105295368();
      func_0x00010b990868(0x1130cc1d8);
      ___cxa_guard_release(0x1130cc1e8);
    }
  }
  return 0x1130cc1d8;
}



/* Entry: 105299f24; end: 105299f7f;  */

undefined8 FUN_105299f24(void)

{
  int iVar1;
  
  if ((bRam00000001130cc200 & 1) == 0) {
    iVar1 = 0x130cc200;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528674c();
      func_0x00010b990868(0x1130cc1f0);
      ___cxa_guard_release(0x1130cc200);
    }
  }
  return 0x1130cc1f0;
}



/* Entry: 105299f80; end: 105299fbf;  */

void FUN_105299f80(void)

{
  return;
}



/* Entry: 105299fc0; end: 10529a0ef;  */

void FUN_105299fc0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [224];
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x00010b9a97d0(&lStack_38);
  func_0x000104bdbf60(auStack_50,lStack_38 + 0x18);
  lVar1 = lStack_38 + 0x28;
  func_0x00010b9a9518(lVar1);
  FUN_105281774(auStack_130,lStack_38 + 0x38);
  func_0x000104bf102c(auStack_150,lStack_38 + 0x48);
  FUN_10529a0f0(auStack_170,lStack_38 + 0x58);
  FUN_10529a0f0(auStack_190,lStack_38 + 0x68);
  FUN_10529a3a0(param_1,auStack_50,lVar1,auStack_130,auStack_150,auStack_170,auStack_190);
  func_0x000104bee748(auStack_190);
  func_0x000104bee748(auStack_170);
  func_0x0001001148fc(auStack_150);
  func_0x00010066d68c(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  func_0x000104bdbf78(&lStack_38);
  return;
}



/* Entry: 10529a0f0; end: 10529a15b;  */

void FUN_10529a0f0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  bVar1 = 1 < *(byte *)(param_2 + 8);
  if (bVar1) {
    func_0x000104bede38(&uStack_40);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    func_0x0001005fb56c(&uStack_40);
  }
  else {
    *(undefined1 *)param_1 = 0;
  }
  *(bool *)(param_1 + 3) = bVar1;
  return;
}



/* Entry: 10529a15c; end: 10529a343;  */

undefined8 FUN_10529a15c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818aa0 & 1) == 0) {
    iVar1 = 0x13818aa0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_SendMessageAnalytics");
      pcVar2 = "source";
      func_0x0001003a83dc(auStack_c8,"source");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar2);
      pcVar2 = "recipientCount";
      func_0x0001003a83dc(auStack_d0,"recipientCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar2);
      pcVar2 = "conversationSubTypeMetadata";
      func_0x0001003a83dc(auStack_d8,"conversationSubTypeMetadata");
      FUN_1052829fc();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar2);
      pcVar2 = "conversationTitle";
      func_0x0001003a83dc(auStack_e0,"conversationTitle");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar2);
      pcVar2 = "oneOnOneConversationIds";
      func_0x0001003a83dc(auStack_e8,"oneOnOneConversationIds");
      FUN_10529a344();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar2);
      pcVar2 = "groupConversationIds";
      func_0x0001003a83dc(auStack_f0,"groupConversationIds");
      FUN_10529a344();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818a90,auStack_c0,0,auStack_b8,6);
      lVar4 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      ___cxa_guard_release(0x113818aa0);
    }
  }
  FUN_10529a448(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818a90;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc218 & 1) == 0) {
    iVar1 = 0x130cc218;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bef3dc();
      func_0x00010b990784(0x1130cc208);
      ___cxa_guard_release(0x1130cc218);
    }
  }
  return 0x1130cc208;
}



/* Entry: 10529a344; end: 10529a39f;  */

undefined8 FUN_10529a344(void)

{
  int iVar1;
  
  if ((bRam00000001130cc218 & 1) == 0) {
    iVar1 = 0x130cc218;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bef3dc();
      func_0x00010b990784(0x1130cc208);
      ___cxa_guard_release(0x1130cc218);
    }
  }
  return 0x1130cc208;
}



/* Entry: 10529a3a0; end: 10529a447;  */

undefined8 *
FUN_10529a3a0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = param_3;
  func_0x00010066f0b4(param_1 + 4,param_4);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[0x22] = param_5[2];
    param_1[0x21] = uVar2;
    param_1[0x20] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0x23) = 1;
  }
  FUN_10528d0b0(param_1 + 0x24,param_6);
  FUN_10528d0b0(param_1 + 0x28,param_7);
  return param_1;
}



/* Entry: 10529a448; end: 10529a45b;  */

void FUN_10529a448(void)

{
  return;
}



/* Entry: 10529a45c; end: 10529a677;  */

void FUN_10529a45c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818aa8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818aa8) = 1;
  if ((bVar1 & 1) != 0) goto LAB_10529a4b8;
  if ((bRam0000000113818ad8 & 1) == 0) goto LAB_10529a4dc;
  while( true ) {
    func_0x000108b80888(0x113818ac8);
LAB_10529a4b8:
    func_0x00010529a8c8(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10529a4dc:
    iVar2 = 0x13818ad8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10529a714();
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_98,"onError");
      func_0x0001003b166c(auStack_b8);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_90,pcVar3);
      func_0x000104bdbd48(auStack_a8,auStack_b8,auStack_90,1);
      uStack_80 = uStack_98;
      uStack_98 = 0;
      func_0x0001003aef98(auStack_78,auStack_a8);
      func_0x0001003a83dc(&uStack_c0,"onQueued");
      func_0x0001003b166c(auStack_e0);
      func_0x00010529a8bc(auStack_d0,auStack_e0);
      uStack_68 = uStack_c0;
      uStack_c0 = 0;
      func_0x0001003aef98(auStack_60,auStack_d0);
      func_0x0001003a83dc(&uStack_e8,"onSuccess");
      func_0x0001003b166c(auStack_108);
      func_0x00010529a8bc(auStack_f8,auStack_108);
      uStack_50 = uStack_e8;
      uStack_e8 = 0;
      func_0x0001003aef98(auStack_48,auStack_f8);
      func_0x000104bdbd44(0x113818ac8,0x113818ae0,1,&uStack_80,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x00010529a89c(auStack_f8);
      func_0x00010529a89c(auStack_108);
      func_0x0001003a8c94(&uStack_e8);
      func_0x00010529a89c(auStack_d0);
      func_0x00010529a89c(auStack_e0);
      func_0x0001003a8c94(&uStack_c0);
      func_0x00010529a89c(auStack_a8);
      func_0x00010529a89c(auStack_90);
      func_0x00010529a89c(auStack_b8);
      func_0x0001003a8c94(&uStack_98);
      ___cxa_guard_release(0x113818ad8);
    }
  }
  return;
}



/* Entry: 10529a678; end: 10529a713;  */

undefined8 FUN_10529a678(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818ac0 & 1) == 0) {
    iVar4 = 0x13818ac0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10529a714();
      lStack_20 = lRam0000000113818ae0;
      if (lRam0000000113818ae0 != 0) {
        piVar1 = (int *)(lRam0000000113818ae0 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113818ab0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818ac0);
    }
  }
  return 0x113818ab0;
}



/* Entry: 10529a714; end: 10529a767;  */

void FUN_10529a714(void)

{
  int iVar1;
  
  if ((bRam0000000113818ae8 & 1) == 0) {
    iVar1 = 0x13818ae8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818ae0,"_djinni_interface_SendMessageCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818ae8);
      return;
    }
  }
  return;
}



/* Entry: 10529a768; end: 10529a7ef;  */

void FUN_10529a768(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = 4;
  auStack_38[0] = param_2;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98(puVar1);
  func_0x00010529a8c8(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10529a7f0;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010529a8b0(auStack_70,puVar1 + 2,1);
  func_0x00010b9a8d98(auStack_70);
  return;
}



/* Entry: 10529a7f0; end: 10529a84f;  */

void FUN_10529a7f0(long param_1)

{
  undefined1 auStack_20 [16];
  
  func_0x00010529a8b0(auStack_20,param_1 + 8,1);
  func_0x00010b9a8d98(auStack_20);
  return;
}



/* Entry: 10529a850; end: 10529a88f;  */

void FUN_10529a850(void)

{
  func_0x00010529a8a4();
  return;
}



/* Entry: 10529a890; end: 10529a8db;  */

undefined8 * FUN_10529a890(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 10529a8dc; end: 10529a9e3;  */

undefined1 * FUN_10529a8dc(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529a9e4();
  func_0x0001003b2110(auStack_68,0x113818af8);
  FUN_10529dd1c(auStack_58,param_2);
  uStack_48 = *(undefined8 *)(param_2 + 0x18);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529ab14(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10529a9e4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818b00 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818b00;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_ServerMessageIdentifier");
      pcVar5 = "serverConversationId";
      func_0x0001003a83dc(auStack_d8,"serverConversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "serverMessageId";
      func_0x0001003a83dc(auStack_e0,"serverMessageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818af0,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x113818b00;
      ___cxa_guard_release(0x113818b00);
    }
  }
  FUN_10529ab14(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818af0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10529a9e4; end: 10529ab13;  */

undefined8 FUN_10529a9e4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818b00 & 1) == 0) {
    param_1 = 0x113818b00;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ServerMessageIdentifier");
      pcVar1 = "serverConversationId";
      func_0x0001003a83dc(auStack_68,"serverConversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "serverMessageId";
      func_0x0001003a83dc(auStack_70,"serverMessageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818af0,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818b00;
      ___cxa_guard_release(0x113818b00);
    }
  }
  FUN_10529ab14(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818af0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529ab14; end: 10529ab27;  */

void FUN_10529ab14(void)

{
  return;
}



/* Entry: 10529ab28; end: 10529ab6b;  */

long FUN_10529ab28(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(lVar1);
  func_0x000104bdbf78(&lStack_28);
  return lVar1;
}



/* Entry: 10529ab6c; end: 10529ac33;  */

undefined1 * FUN_10529ab6c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529ac34();
  func_0x0001003b2110(auStack_48,0x113818b10);
  auStack_38[0] = *param_2;
  uStack_30 = 4;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar4 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_40;
  func_0x000104bdbf78(puVar2);
  FUN_10529ad70(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar2);
  pcStack_58 = FUN_10529ac34;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818b18 & 1) == 0) {
    iVar1 = 0x13818b18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_ShareMetadata");
      pcVar3 = "storyMediaState";
      func_0x0001003a83dc(auStack_90,"storyMediaState");
      FUN_10529ad18();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar3);
      iVar4 = 0;
      func_0x000104bdbd44(0x113818b08,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      ___cxa_guard_release(0x113818b18);
    }
  }
  FUN_10529ad70(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818b08;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc230 & 1) == 0) {
    iVar4 = 0x130cc230;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010b990e20(0x1130cc220);
      ___cxa_guard_release(0x1130cc230);
    }
  }
  return (undefined1 *)0x1130cc220;
}



/* Entry: 10529ac34; end: 10529ad17;  */

undefined8 FUN_10529ac34(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818b18 & 1) == 0) {
    iVar1 = 0x13818b18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_ShareMetadata");
      pcVar2 = "storyMediaState";
      func_0x0001003a83dc(auStack_40,"storyMediaState");
      FUN_10529ad18();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar2);
      param_2 = 0;
      func_0x000104bdbd44(0x113818b08,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      ___cxa_guard_release(0x113818b18);
    }
  }
  FUN_10529ad70(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818b08;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc230 & 1) == 0) {
    iVar1 = 0x130cc230;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc220);
      ___cxa_guard_release(0x1130cc230);
    }
  }
  return 0x1130cc220;
}



/* Entry: 10529ad18; end: 10529ad6f;  */

undefined8 FUN_10529ad18(void)

{
  int iVar1;
  
  if ((bRam00000001130cc230 & 1) == 0) {
    iVar1 = 0x130cc230;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc220);
      ___cxa_guard_release(0x1130cc230);
    }
  }
  return 0x1130cc220;
}



/* Entry: 10529ad70; end: 10529ad83;  */

void FUN_10529ad70(void)

{
  return;
}



/* Entry: 10529ad84; end: 10529ae4b;  */

undefined1 * FUN_10529ad84(undefined8 param_1,undefined1 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529ae4c();
  func_0x0001003b2110(auStack_48,0x113818b28);
  auStack_38[0] = *param_2;
  uStack_30 = 7;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10529af30(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10529ae4c;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818b30 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818b30;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_SnapDisplayInfo");
      pcVar2 = "hasAudio";
      func_0x0001003a83dc(auStack_90,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818b20,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818b30;
      ___cxa_guard_release(0x113818b30);
    }
  }
  FUN_10529af30(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818b20;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10529ae4c; end: 10529af2f;  */

undefined8 FUN_10529ae4c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818b30 & 1) == 0) {
    param_1 = 0x113818b30;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_SnapDisplayInfo");
      pcVar1 = "hasAudio";
      func_0x0001003a83dc(auStack_40,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818b20,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818b30;
      ___cxa_guard_release(0x113818b30);
    }
  }
  FUN_10529af30(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818b20;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529af30; end: 10529af43;  */

void FUN_10529af30(void)

{
  return;
}



/* Entry: 10529af44; end: 10529b117;  */

void FUN_10529af44(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  func_0x00010529b4ac();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818b38);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818b38) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_10529af94;
  if ((bRam0000000113818b68 & 1) == 0) goto LAB_10529afb4;
  while( true ) {
    func_0x000108b80888(0x113818b58);
LAB_10529af94:
    func_0x00010529b490(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10529afb4:
    iVar2 = 0x13818b68;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10529b1b4();
      pcVar3 = "onSuccess";
      func_0x0001003a83dc(&uStack_80,"onSuccess");
      func_0x0001003b166c(auStack_a0);
      FUN_10529b3dc();
      func_0x0001003adcc0(auStack_68,pcVar3);
      func_0x000104bdbd48(auStack_90,auStack_a0,auStack_68,1);
      uStack_58 = uStack_80;
      uStack_80 = 0;
      func_0x0001003aef98(auStack_50,auStack_90);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_a8,"onError");
      func_0x0001003b166c(auStack_c8);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_78,pcVar3);
      func_0x000104bdbd48(auStack_b8,auStack_c8,auStack_78,1);
      uStack_40 = uStack_a8;
      uStack_a8 = 0;
      func_0x0001003aef98(auStack_38,auStack_b8);
      func_0x000104bdbd44(0x113818b58,0x113818b70,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x00010529b4a4(auStack_b8);
      func_0x00010529b4a4(auStack_78);
      func_0x00010529b4a4(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x00010529b4a4(auStack_90);
      func_0x00010529b4a4(auStack_68);
      func_0x00010529b4a4(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818b68);
    }
  }
  return;
}



/* Entry: 10529b118; end: 10529b1b3;  */

undefined8 FUN_10529b118(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818b50 & 1) == 0) {
    iVar4 = 0x13818b50;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10529b1b4();
      lStack_20 = lRam0000000113818b70;
      if (lRam0000000113818b70 != 0) {
        piVar1 = (int *)(lRam0000000113818b70 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113818b40,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818b50);
    }
  }
  return 0x113818b40;
}



/* Entry: 10529b1b4; end: 10529b207;  */

void FUN_10529b1b4(void)

{
  int iVar1;
  
  if ((bRam0000000113818b78 & 1) == 0) {
    iVar1 = 0x13818b78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818b70,"_djinni_interface_SnapInteractionCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818b78);
      return;
    }
  }
  return;
}



/* Entry: 10529b208; end: 10529b30f;  */

undefined4 * FUN_10529b208(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_c8 [16];
  undefined4 auStack_b8 [2];
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [16];
  undefined4 auStack_70 [2];
  undefined2 uStack_68;
  long lStack_60;
  undefined4 auStack_58 [4];
  undefined8 uStack_48;
  
  plVar6 = param_2;
  func_0x00010529b4ac();
  uStack_48 = extraout_x8;
  func_0x00010b9abe10(&lStack_60,plVar6[1] - *plVar6 >> 2);
  uVar7 = 0;
  lVar8 = 0x18;
  while( true ) {
    uVar1 = param_2[1] - *param_2 >> 2;
    uVar2 = uVar7 == uVar1;
    if (uVar1 <= uVar7) break;
    auStack_70[0] = *(undefined4 *)(*param_2 + uVar7 * 4);
    uStack_68 = 4;
    func_0x00010b9a9020(lStack_60 + lVar8,auStack_70);
    func_0x00010b9a8d98(auStack_70);
    uVar7 = uVar7 + 1;
    lVar8 = lVar8 + 0x10;
  }
  func_0x00010b9a8f84(auStack_58,&lStack_60);
  func_0x000104bddf38(&lStack_60);
  uVar5 = 0;
  func_0x000104be6a78(auStack_80,param_1 + 8,0,auStack_58,1);
  func_0x00010b9a8d98(auStack_80);
  puVar3 = auStack_58;
  func_0x00010b9a8d98();
  func_0x00010529b490(uStack_48);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_58);
  puVar4 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_10529b310;
  plStack_a0 = param_2;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x00010529b4ac();
  uStack_b0 = 4;
  auStack_b8[0] = uVar5;
  uStack_a8 = extraout_x8_00;
  func_0x000104be6a78(auStack_c8,puVar4 + 2,1,auStack_b8,1);
  func_0x00010b9a8d98(auStack_c8);
  puVar3 = auStack_b8;
  func_0x00010b9a8d98();
  func_0x00010529b490(uStack_a8);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_b8);
  __Unwind_Resume(puVar3);
  func_0x00010529b4bc();
  return puVar3;
}



/* Entry: 10529b310; end: 10529b38f;  */

undefined4 * FUN_10529b310(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  auStack_38[0] = param_2;
  func_0x00010529b4ac();
  uStack_30 = 4;
  uStack_28 = extraout_x8;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98();
  func_0x00010529b490(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  func_0x00010529b4bc();
  return puVar1;
}



/* Entry: 10529b390; end: 10529b3cf;  */

void FUN_10529b390(void)

{
  func_0x00010529b4bc();
  return;
}



/* Entry: 10529b3d0; end: 10529b3db;  */

undefined8 * FUN_10529b3d0(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 10529b3dc; end: 10529b437;  */

undefined8 FUN_10529b3dc(void)

{
  int iVar1;
  
  if ((bRam00000001130cc248 & 1) == 0) {
    iVar1 = 0x130cc248;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529b438();
      func_0x00010b990868(0x1130cc238);
      ___cxa_guard_release(0x1130cc248);
    }
  }
  return 0x1130cc238;
}



/* Entry: 10529b438; end: 10529b48f;  */

undefined8 FUN_10529b438(void)

{
  int iVar1;
  
  if ((bRam00000001130cc260 & 1) == 0) {
    iVar1 = 0x130cc260;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc250);
      ___cxa_guard_release(0x1130cc260);
    }
  }
  return 0x1130cc250;
}



/* Entry: 10529b490; end: 10529b4c7;  */

void FUN_10529b490(void)

{
  return;
}



/* Entry: 10529b4c8; end: 10529b64b;  */

undefined1 * FUN_10529b4c8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_310 [8];
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined8 uStack_248;
  undefined1 *puStack_240;
  undefined1 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined2 uStack_200;
  undefined1 uStack_1f8;
  undefined2 uStack_1f0;
  undefined1 uStack_1e8;
  undefined2 uStack_1e0;
  undefined1 uStack_1d8;
  undefined2 uStack_1d0;
  undefined1 uStack_1c8;
  undefined2 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529b64c();
  func_0x0001003b2110(auStack_98,0x113818b88);
  auStack_88[0] = *param_2;
  uStack_80 = 4;
  uStack_78 = *(undefined1 *)(param_2 + 1);
  uStack_70 = 7;
  FUN_10529b808(auStack_68,param_2 + 2);
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uStack_58 = CONCAT44(uStack_58._4_4_,param_2[10]);
    uStack_50 = 4;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 1;
  }
  uStack_4f = 0;
  uStack_48 = *(undefined8 *)(param_2 + 0xc);
  uStack_40 = 5;
  if (*(char *)(param_2 + 0xe) == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_90,auStack_98,auStack_88,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_88 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar4 = auStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_90;
  func_0x000104bdbf78();
  FUN_10529b990(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x50;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10529b64c;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_c0 = lVar8;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818b90 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818b90;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_SnapItem");
      pcVar5 = "state";
      func_0x0001003a83dc(auStack_150,"state");
      FUN_10529b828();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar5);
      pcVar5 = "hasAudio";
      func_0x0001003a83dc(auStack_158,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar5);
      pcVar5 = "comboSnapItemInfo";
      func_0x0001003a83dc(auStack_160,"comboSnapItemInfo");
      FUN_10529b880();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar5);
      pcVar5 = "snapModeState";
      func_0x0001003a83dc(auStack_168,"snapModeState");
      FUN_10529b8dc();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar5);
      pcVar5 = "unviewedSnapCount";
      func_0x0001003a83dc(auStack_170,"unviewedSnapCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818b80,auStack_148,0,auStack_140,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar4 = (undefined1 *)0x113818b90;
      ___cxa_guard_release();
    }
  }
  FUN_10529b990(uStack_c8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    if (puVar4[0x18] != '\x01') {
      *(undefined2 *)(extraout_x8 + 1) = 1;
      *extraout_x8 = 0;
      return puVar4;
    }
    pcStack_178 = FUN_10529b808;
    uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_180 = &puStack_b0;
    FUN_105281578();
    func_0x0001003b2110(auStack_218,0x113818280);
    auStack_208[0] = *puVar4;
    uStack_200 = 7;
    uStack_1f8 = puVar4[1];
    uStack_1f0 = 7;
    uStack_1e8 = puVar4[2];
    uStack_1e0 = 7;
    uStack_1d8 = puVar4[3];
    uStack_1d0 = 7;
    uStack_1c8 = puVar4[4];
    uStack_1c0 = 7;
    uStack_1b8 = *(undefined8 *)(puVar4 + 8);
    uStack_1b0 = 5;
    if (puVar4[0x10] == '\0') {
      uStack_1b0 = 1;
      uStack_1b8 = 0;
    }
    uStack_1af = 0;
    func_0x000104bdb9bc(auStack_210,auStack_218,auStack_208,6);
    lVar8 = 0x50;
    do {
      func_0x00010b9a8d98(auStack_208 + lVar8);
      lVar8 = lVar8 + -0x10;
      uVar1 = lVar8 == -0x10;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_218);
    puVar4 = auStack_210;
    func_0x00010b9a8f60(extraout_x8);
    puVar2 = auStack_210;
    func_0x000104bdbf78();
    FUN_105281760(uStack_1a8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      lVar8 = 0x50;
      do {
        func_0x00010b9a8d98(auStack_208 + lVar8);
        iVar6 = (int)puVar4;
        lVar8 = lVar8 + -0x10;
        uVar1 = lVar8 == -0x10;
      } while (!(bool)uVar1);
      func_0x0001003b1f60(auStack_218);
      puVar4 = puVar2;
      __Unwind_Resume(puVar2);
      pcStack_228 = FUN_105281578;
      uStack_248 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puStack_240 = auStack_208;
      puStack_238 = puVar2;
      pppuStack_230 = &ppuStack_180;
      if ((bRam0000000113818288 & 1) == 0) {
        puVar4 = (undefined1 *)0x113818288;
        ___cxa_guard_acquire();
        if ((int)puVar4 != 0) {
          func_0x0001003a83dc(auStack_2e0,"_djinni_record_ComboSnapItem");
          pcVar5 = "hasNewChat";
          func_0x0001003a83dc(auStack_2e8,"hasNewChat");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_2d8,auStack_2e8,pcVar5);
          pcVar5 = "hasNewReaction";
          func_0x0001003a83dc(auStack_2f0,"hasNewReaction");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_2c0,auStack_2f0,pcVar5);
          pcVar5 = "showSnapIconFirst";
          func_0x0001003a83dc(auStack_2f8,"showSnapIconFirst");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_2a8,auStack_2f8,pcVar5);
          pcVar5 = "hasMultipleNewSnaps";
          func_0x0001003a83dc(auStack_300,"hasMultipleNewSnaps");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_290,auStack_300,pcVar5);
          pcVar5 = "hasMultipleNewChats";
          func_0x0001003a83dc(auStack_308,"hasMultipleNewChats");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_278,auStack_308,pcVar5);
          pcVar5 = "unreadChatCount";
          func_0x0001003a83dc(auStack_310,"unreadChatCount");
          func_0x000104bef438();
          func_0x0001003b1b50(auStack_260,auStack_310,pcVar5);
          uVar7 = 0;
          func_0x000104bdbd44(0x113818278,auStack_2e0,0,auStack_2d8,6);
          lVar8 = 0x78;
          do {
            func_0x0001003b1c5c(auStack_2d8 + lVar8);
            iVar6 = (int)uVar7;
            lVar8 = lVar8 + -0x18;
            uVar1 = lVar8 == -0x18;
          } while (!(bool)uVar1);
          func_0x0001003a8c94(auStack_310);
          func_0x0001003a8c94(auStack_308);
          func_0x0001003a8c94(auStack_300);
          func_0x0001003a8c94(auStack_2f8);
          func_0x0001003a8c94(auStack_2f0);
          func_0x0001003a8c94(auStack_2e8);
          func_0x0001003a8c94(auStack_2e0);
          puVar4 = (undefined1 *)0x113818288;
          ___cxa_guard_release(0x113818288);
        }
      }
      FUN_105281760(uStack_248);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        if (iVar6 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        return puVar4;
      }
      return (undefined1 *)0x113818278;
    }
    return puVar2;
  }
  return (undefined1 *)0x113818b80;
}



/* Entry: 10529b64c; end: 10529b807;  */

undefined1 * FUN_10529b64c(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined8 uStack_1a8;
  undefined1 *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined2 uStack_160;
  undefined1 uStack_158;
  undefined2 uStack_150;
  undefined1 uStack_148;
  undefined2 uStack_140;
  undefined1 uStack_138;
  undefined2 uStack_130;
  undefined1 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined8 uStack_108;
  undefined1 *puStack_e0;
  code *pcStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818b90 & 1) == 0) {
    param_1 = (undefined1 *)0x113818b90;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_SnapItem");
      pcVar4 = "state";
      func_0x0001003a83dc(auStack_b0,"state");
      FUN_10529b828();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar4);
      pcVar4 = "hasAudio";
      func_0x0001003a83dc(auStack_b8,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar4);
      pcVar4 = "comboSnapItemInfo";
      func_0x0001003a83dc(auStack_c0,"comboSnapItemInfo");
      FUN_10529b880();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar4);
      pcVar4 = "snapModeState";
      func_0x0001003a83dc(auStack_c8,"snapModeState");
      FUN_10529b8dc();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar4);
      pcVar4 = "unviewedSnapCount";
      func_0x0001003a83dc(auStack_d0,"unviewedSnapCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818b80,auStack_a8,0,auStack_a0,5);
      lVar7 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar7);
        param_2 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        in_ZR = lVar7 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = (undefined1 *)0x113818b90;
      ___cxa_guard_release();
    }
  }
  FUN_10529b990(uStack_28);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818b80;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (param_1[0x18] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_d8 = FUN_10529b808;
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_105281578();
  func_0x0001003b2110(auStack_178,0x113818280);
  auStack_168[0] = *param_1;
  uStack_160 = 7;
  uStack_158 = param_1[1];
  uStack_150 = 7;
  uStack_148 = param_1[2];
  uStack_140 = 7;
  uStack_138 = param_1[3];
  uStack_130 = 7;
  uStack_128 = param_1[4];
  uStack_120 = 7;
  uStack_118 = *(undefined8 *)(param_1 + 8);
  uStack_110 = 5;
  if (param_1[0x10] == '\0') {
    uStack_110 = 1;
    uStack_118 = 0;
  }
  uStack_10f = 0;
  func_0x000104bdb9bc(auStack_170,auStack_178,auStack_168,6);
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_168 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_178);
  puVar3 = auStack_170;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = auStack_170;
  func_0x000104bdbf78();
  FUN_105281760(uStack_108);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar7 = 0x50;
    do {
      func_0x00010b9a8d98(auStack_168 + lVar7);
      iVar5 = (int)puVar3;
      lVar7 = lVar7 + -0x10;
      uVar1 = lVar7 == -0x10;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_178);
    puVar3 = puVar2;
    __Unwind_Resume(puVar2);
    pcStack_188 = FUN_105281578;
    uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puStack_1a0 = auStack_168;
    puStack_198 = puVar2;
    ppuStack_190 = &puStack_e0;
    if ((bRam0000000113818288 & 1) == 0) {
      puVar3 = (undefined1 *)0x113818288;
      ___cxa_guard_acquire();
      if ((int)puVar3 != 0) {
        func_0x0001003a83dc(auStack_240,"_djinni_record_ComboSnapItem");
        pcVar4 = "hasNewChat";
        func_0x0001003a83dc(auStack_248,"hasNewChat");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_238,auStack_248,pcVar4);
        pcVar4 = "hasNewReaction";
        func_0x0001003a83dc(auStack_250,"hasNewReaction");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_220,auStack_250,pcVar4);
        pcVar4 = "showSnapIconFirst";
        func_0x0001003a83dc(auStack_258,"showSnapIconFirst");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_208,auStack_258,pcVar4);
        pcVar4 = "hasMultipleNewSnaps";
        func_0x0001003a83dc(auStack_260,"hasMultipleNewSnaps");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_1f0,auStack_260,pcVar4);
        pcVar4 = "hasMultipleNewChats";
        func_0x0001003a83dc(auStack_268,"hasMultipleNewChats");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_1d8,auStack_268,pcVar4);
        pcVar4 = "unreadChatCount";
        func_0x0001003a83dc(auStack_270,"unreadChatCount");
        func_0x000104bef438();
        func_0x0001003b1b50(auStack_1c0,auStack_270,pcVar4);
        uVar6 = 0;
        func_0x000104bdbd44(0x113818278,auStack_240,0,auStack_238,6);
        lVar7 = 0x78;
        do {
          func_0x0001003b1c5c(auStack_238 + lVar7);
          iVar5 = (int)uVar6;
          lVar7 = lVar7 + -0x18;
          uVar1 = lVar7 == -0x18;
        } while (!(bool)uVar1);
        func_0x0001003a8c94(auStack_270);
        func_0x0001003a8c94(auStack_268);
        func_0x0001003a8c94(auStack_260);
        func_0x0001003a8c94(auStack_258);
        func_0x0001003a8c94(auStack_250);
        func_0x0001003a8c94(auStack_248);
        func_0x0001003a8c94(auStack_240);
        puVar3 = (undefined1 *)0x113818288;
        ___cxa_guard_release(0x113818288);
      }
    }
    FUN_105281760(uStack_1a8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar5 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      return puVar3;
    }
    return (undefined1 *)0x113818278;
  }
  return puVar2;
}



/* Entry: 10529b808; end: 10529b827;  */

undefined1 * FUN_10529b808(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined2 uStack_90;
  undefined1 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  if (param_2[0x18] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105281578();
  func_0x0001003b2110(auStack_a8,0x113818280);
  auStack_98[0] = *param_2;
  uStack_90 = 7;
  uStack_88 = param_2[1];
  uStack_80 = 7;
  uStack_78 = param_2[2];
  uStack_70 = 7;
  uStack_68 = param_2[3];
  uStack_60 = 7;
  uStack_58 = param_2[4];
  uStack_50 = 7;
  uStack_48 = *(undefined8 *)(param_2 + 8);
  uStack_40 = 5;
  if (param_2[0x10] == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_a0,auStack_a8,auStack_98,6);
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar3 = auStack_a0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_a0;
  func_0x000104bdbf78();
  FUN_105281760(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar7 = 0x50;
    do {
      func_0x00010b9a8d98(auStack_98 + lVar7);
      iVar5 = (int)puVar3;
      lVar7 = lVar7 + -0x10;
      uVar1 = lVar7 == -0x10;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_a8);
    puVar3 = puVar2;
    __Unwind_Resume(puVar2);
    pcStack_b8 = FUN_105281578;
    uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puStack_d0 = auStack_98;
    puStack_c8 = puVar2;
    puStack_c0 = &stack0xfffffffffffffff0;
    if ((bRam0000000113818288 & 1) == 0) {
      puVar3 = (undefined1 *)0x113818288;
      ___cxa_guard_acquire();
      if ((int)puVar3 != 0) {
        func_0x0001003a83dc(auStack_170,"_djinni_record_ComboSnapItem");
        pcVar4 = "hasNewChat";
        func_0x0001003a83dc(auStack_178,"hasNewChat");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_168,auStack_178,pcVar4);
        pcVar4 = "hasNewReaction";
        func_0x0001003a83dc(auStack_180,"hasNewReaction");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_150,auStack_180,pcVar4);
        pcVar4 = "showSnapIconFirst";
        func_0x0001003a83dc(auStack_188,"showSnapIconFirst");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_138,auStack_188,pcVar4);
        pcVar4 = "hasMultipleNewSnaps";
        func_0x0001003a83dc(auStack_190,"hasMultipleNewSnaps");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_120,auStack_190,pcVar4);
        pcVar4 = "hasMultipleNewChats";
        func_0x0001003a83dc(auStack_198,"hasMultipleNewChats");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_108,auStack_198,pcVar4);
        pcVar4 = "unreadChatCount";
        func_0x0001003a83dc(auStack_1a0,"unreadChatCount");
        func_0x000104bef438();
        func_0x0001003b1b50(auStack_f0,auStack_1a0,pcVar4);
        uVar6 = 0;
        func_0x000104bdbd44(0x113818278,auStack_170,0,auStack_168,6);
        lVar7 = 0x78;
        do {
          func_0x0001003b1c5c(auStack_168 + lVar7);
          iVar5 = (int)uVar6;
          lVar7 = lVar7 + -0x18;
          uVar1 = lVar7 == -0x18;
        } while (!(bool)uVar1);
        func_0x0001003a8c94(auStack_1a0);
        func_0x0001003a8c94(auStack_198);
        func_0x0001003a8c94(auStack_190);
        func_0x0001003a8c94(auStack_188);
        func_0x0001003a8c94(auStack_180);
        func_0x0001003a8c94(auStack_178);
        func_0x0001003a8c94(auStack_170);
        puVar3 = (undefined1 *)0x113818288;
        ___cxa_guard_release(0x113818288);
      }
    }
    FUN_105281760(uStack_d8);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar5 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      return puVar3;
    }
    return (undefined1 *)0x113818278;
  }
  return puVar2;
}



/* Entry: 10529b828; end: 10529b87f;  */

undefined8 FUN_10529b828(void)

{
  int iVar1;
  
  if ((bRam00000001130cc278 & 1) == 0) {
    iVar1 = 0x130cc278;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc268);
      ___cxa_guard_release(0x1130cc278);
    }
  }
  return 0x1130cc268;
}



/* Entry: 10529b880; end: 10529b8db;  */

undefined8 FUN_10529b880(void)

{
  int iVar1;
  
  if ((bRam00000001130cc290 & 1) == 0) {
    iVar1 = 0x130cc290;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105281578();
      func_0x00010b990784(0x1130cc280);
      ___cxa_guard_release(0x1130cc290);
    }
  }
  return 0x1130cc280;
}



/* Entry: 10529b8dc; end: 10529b937;  */

undefined8 FUN_10529b8dc(void)

{
  int iVar1;
  
  if ((bRam00000001130cc2a8 & 1) == 0) {
    iVar1 = 0x130cc2a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529b938();
      func_0x00010b990784(0x1130cc298);
      ___cxa_guard_release(0x1130cc2a8);
    }
  }
  return 0x1130cc298;
}



/* Entry: 10529b938; end: 10529b98f;  */

undefined8 FUN_10529b938(void)

{
  int iVar1;
  
  if ((bRam00000001130cc2c0 & 1) == 0) {
    iVar1 = 0x130cc2c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc2b0);
      ___cxa_guard_release(0x1130cc2c0);
    }
  }
  return 0x1130cc2b0;
}



/* Entry: 10529b990; end: 10529b9a3;  */

void FUN_10529b990(void)

{
  return;
}



/* Entry: 10529b9a4; end: 10529ba13;  */

void FUN_10529b9a4(short *param_1,undefined8 param_2,ulong param_3)

{
  short sVar1;
  long lVar2;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  sVar1 = (short)lStack_28 + 0x18;
  FUN_105287fb8();
  lVar2 = lStack_28 + 0x28;
  func_0x000104bedf58();
  *param_1 = sVar1;
  *(long *)(param_1 + 4) = lVar2;
  *(ulong *)(param_1 + 8) = param_3 & 0xff;
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10529ba14; end: 10529bb47;  */

undefined1 * FUN_10529ba14(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529bb48();
  func_0x0001003b2110(auStack_68,0x113818ba0);
  if (param_2[1] == '\x01') {
    uStack_58 = CONCAT71(uStack_58._1_7_,*param_2);
    uStack_50 = 7;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 1;
  }
  uStack_4f = 0;
  uStack_48 = *(undefined8 *)(param_2 + 8);
  uStack_40 = 5;
  if (param_2[0x10] == '\0') {
    uStack_40 = 1;
    uStack_48 = 0;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_60,auStack_68,&uStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_10529bc78(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_10529bb48;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818ba8 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818ba8;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_SnapModeInfo");
      pcVar4 = "oneTimeOnlySnap";
      func_0x0001003a83dc(auStack_d8,"oneTimeOnlySnap");
      FUN_105288360();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "selfDestructSnapDurationMs";
      func_0x0001003a83dc(auStack_e0,"selfDestructSnapDurationMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818b98,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x113818ba8;
      ___cxa_guard_release(0x113818ba8);
    }
  }
  FUN_10529bc78(uStack_98);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return puVar3;
  }
  return (undefined1 *)0x113818b98;
}



/* Entry: 10529bb48; end: 10529bc77;  */

undefined8 FUN_10529bb48(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818ba8 & 1) == 0) {
    param_1 = 0x113818ba8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_SnapModeInfo");
      pcVar1 = "oneTimeOnlySnap";
      func_0x0001003a83dc(auStack_68,"oneTimeOnlySnap");
      FUN_105288360();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "selfDestructSnapDurationMs";
      func_0x0001003a83dc(auStack_70,"selfDestructSnapDurationMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818b98,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x113818ba8;
      ___cxa_guard_release(0x113818ba8);
    }
  }
  FUN_10529bc78(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818b98;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529bc78; end: 10529bc8b;  */

void FUN_10529bc78(void)

{
  return;
}



/* Entry: 10529bc8c; end: 10529bccf;  */

long FUN_10529bc8c(void)

{
  long lVar1;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  lVar1 = lStack_28 + 0x18;
  func_0x00010b9a9518(lVar1);
  func_0x000104bdbf78(&lStack_28);
  return lVar1;
}



/* Entry: 10529bcd0; end: 10529bd97;  */

undefined1 * FUN_10529bcd0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529bd98();
  func_0x0001003b2110(auStack_48,0x113818bb8);
  auStack_38[0] = *param_2;
  uStack_30 = 4;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_10529be7c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10529bd98;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818bc0 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818bc0;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_SnapReplyMetadata");
      pcVar2 = "storyMediaState";
      func_0x0001003a83dc(auStack_90,"storyMediaState");
      FUN_10529ad18();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818bb0,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818bc0;
      ___cxa_guard_release(0x113818bc0);
    }
  }
  FUN_10529be7c(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818bb0;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10529bd98; end: 10529be7b;  */

undefined8 FUN_10529bd98(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818bc0 & 1) == 0) {
    param_1 = 0x113818bc0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_SnapReplyMetadata");
      pcVar1 = "storyMediaState";
      func_0x0001003a83dc(auStack_40,"storyMediaState");
      FUN_10529ad18();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818bb0,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818bc0;
      ___cxa_guard_release(0x113818bc0);
    }
  }
  FUN_10529be7c(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818bb0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10529be7c; end: 10529be8f;  */

void FUN_10529be7c(void)

{
  return;
}



/* Entry: 10529be90; end: 10529bf5f;  */

void FUN_10529be90(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_10529dcb8(auStack_40,lStack_28 + 0x18);
  func_0x000108b8099c(auStack_58,lStack_28 + 0x28);
  lVar1 = lStack_28 + 0x38;
  func_0x00010b9a9518(lVar1);
  func_0x000104bf102c(auStack_78,lStack_28 + 0x48);
  FUN_10529c144(param_1,auStack_40,auStack_58,lVar1,auStack_78);
  func_0x0001001148fc(auStack_78);
  func_0x000100100fec(auStack_58);
  func_0x000100100fec(auStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 10529bf60; end: 10529c0eb;  */

undefined8 FUN_10529bf60(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818bd8 & 1) == 0) {
    iVar1 = 0x13818bd8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_StoryId");
      pcVar2 = "storyId";
      func_0x0001003a83dc(auStack_98,"storyId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "storyData";
      func_0x0001003a83dc(auStack_a0,"storyData");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "storyType";
      func_0x0001003a83dc(auStack_a8,"storyType");
      FUN_10529c0ec();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "mediaId";
      func_0x0001003a83dc(auStack_b0,"mediaId");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818bc8,auStack_90,0,auStack_88,4);
      lVar4 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      ___cxa_guard_release(0x113818bd8);
    }
  }
  func_0x00010529c1c4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818bc8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc2d8 & 1) == 0) {
    iVar1 = 0x130cc2d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc2c8);
      ___cxa_guard_release(0x1130cc2d8);
    }
  }
  return 0x1130cc2c8;
}



/* Entry: 10529c0ec; end: 10529c143;  */

undefined8 FUN_10529c0ec(void)

{
  int iVar1;
  
  if ((bRam00000001130cc2d8 & 1) == 0) {
    iVar1 = 0x130cc2d8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc2c8);
      ___cxa_guard_release(0x1130cc2d8);
    }
  }
  return 0x1130cc2c8;
}



/* Entry: 10529c144; end: 10529c1d7;  */

void FUN_10529c144(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar1;
  param_1[5] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 6) = param_4;
  *(undefined1 *)(param_1 + 10) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    param_1[9] = param_5[2];
    param_1[8] = uVar2;
    param_1[7] = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



/* Entry: 10529c1d8; end: 10529c31b;  */

undefined4 * FUN_10529c1d8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  undefined4 *puStack_200;
  undefined4 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [8];
  undefined4 auStack_1d0 [2];
  undefined4 auStack_1c8 [2];
  undefined2 uStack_1c0;
  undefined8 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 uStack_1a8;
  undefined2 uStack_1a0;
  undefined1 uStack_198;
  undefined2 uStack_190;
  undefined8 uStack_188;
  undefined2 uStack_180;
  undefined8 uStack_178;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined4 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined4 auStack_80 [2];
  undefined4 auStack_78 [2];
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529c31c();
  func_0x0001003b2110(auStack_88,0x113818be8);
  auStack_78[0] = *param_2;
  uStack_70 = 4;
  uStack_68 = *(undefined8 *)(param_2 + 2);
  uStack_60 = 5;
  FUN_10529c4a8(auStack_58,param_2 + 4);
  auStack_48[0] = *(undefined1 *)(param_2 + 0xe);
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98((long)auStack_78 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_10529c524(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x40;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_98 = FUN_10529c31c;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar8;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818bf0 & 1) == 0) {
    puVar4 = (undefined4 *)0x113818bf0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_StreakMetadata");
      pcVar5 = "count";
      func_0x0001003a83dc(auStack_128,"count");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "expirationTimestampMs";
      func_0x0001003a83dc(auStack_130,"expirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "expiredStreak";
      func_0x0001003a83dc(auStack_138,"expiredStreak");
      FUN_10529c4c8();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "isFrozen";
      func_0x0001003a83dc(auStack_140,"isFrozen");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818be0,auStack_120,0,auStack_118,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_118 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar4 = (undefined4 *)0x113818bf0;
      ___cxa_guard_release();
    }
  }
  FUN_10529c524(uStack_b8);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818be0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 8) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_148 = FUN_10529c4a8;
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_150 = &puStack_a0;
  FUN_105285284();
  func_0x0001003b2110(auStack_1d8,0x1138183e8);
  auStack_1c8[0] = *puVar4;
  uStack_1c0 = 4;
  uStack_1b8 = *(undefined8 *)(puVar4 + 2);
  uStack_1b0 = 5;
  uStack_1a8 = *(undefined1 *)(puVar4 + 4);
  uStack_1a0 = 7;
  uStack_198 = *(undefined1 *)((long)puVar4 + 0x11);
  uStack_190 = 7;
  uStack_188 = *(undefined8 *)(puVar4 + 6);
  uStack_180 = 5;
  func_0x000104bdb9bc(auStack_1d0,auStack_1d8,auStack_1c8,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_1c8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = auStack_1d0;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = auStack_1d0;
  func_0x000104bdbf78();
  FUN_105285440(uStack_178);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_1c8 + lVar8);
    iVar6 = (int)puVar4;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_1e8 = FUN_105285284;
  uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = auStack_1c8;
  puStack_1f8 = puVar2;
  pppuStack_1f0 = &ppuStack_150;
  if ((bRam00000001138183f0 & 1) == 0) {
    puVar4 = (undefined4 *)0x1138183f0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_288,"_djinni_record_ExpiredStreakMetadata");
      pcVar5 = "streakCount";
      func_0x0001003a83dc(auStack_290,"streakCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_280,auStack_290,pcVar5);
      pcVar5 = "timestampMs";
      func_0x0001003a83dc(auStack_298,"timestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_268,auStack_298,pcVar5);
      pcVar5 = "isRestorable";
      func_0x0001003a83dc(auStack_2a0,"isRestorable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_250,auStack_2a0,pcVar5);
      pcVar5 = "isRestorableExtended";
      func_0x0001003a83dc(auStack_2a8,"isRestorableExtended");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_238,auStack_2a8,pcVar5);
      pcVar5 = "restoreExpirationTimestampMs";
      func_0x0001003a83dc(auStack_2b0,"restoreExpirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_220,auStack_2b0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138183e0,auStack_288,0,auStack_280,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_280 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_2b0);
      func_0x0001003a8c94(auStack_2a8);
      func_0x0001003a8c94(auStack_2a0);
      func_0x0001003a8c94(auStack_298);
      func_0x0001003a8c94(auStack_290);
      func_0x0001003a8c94(auStack_288);
      puVar4 = (undefined4 *)0x1138183f0;
      ___cxa_guard_release(0x1138183f0);
    }
  }
  FUN_105285440(uStack_208);
  if ((bool)uVar1) {
    return (undefined4 *)0x1138183e0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10529c31c; end: 10529c4a7;  */

undefined4 * FUN_10529c31c(undefined4 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 uStack_178;
  undefined4 *puStack_170;
  undefined4 *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [8];
  undefined4 auStack_140 [2];
  undefined4 auStack_138 [2];
  undefined2 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_118;
  undefined2 uStack_110;
  undefined1 uStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f8;
  undefined2 uStack_f0;
  undefined8 uStack_e8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818bf0 & 1) == 0) {
    param_1 = (undefined4 *)0x113818bf0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_StreakMetadata");
      pcVar4 = "count";
      func_0x0001003a83dc(auStack_98,"count");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar4);
      pcVar4 = "expirationTimestampMs";
      func_0x0001003a83dc(auStack_a0,"expirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar4);
      pcVar4 = "expiredStreak";
      func_0x0001003a83dc(auStack_a8,"expiredStreak");
      FUN_10529c4c8();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar4);
      pcVar4 = "isFrozen";
      func_0x0001003a83dc(auStack_b0,"isFrozen");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818be0,auStack_90,0,auStack_88,4);
      lVar7 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar7);
        param_2 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        in_ZR = lVar7 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = (undefined4 *)0x113818bf0;
      ___cxa_guard_release();
    }
  }
  FUN_10529c524(uStack_28);
  if ((bool)in_ZR) {
    return (undefined4 *)0x113818be0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 8) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_b8 = FUN_10529c4a8;
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_105285284();
  func_0x0001003b2110(auStack_148,0x1138183e8);
  auStack_138[0] = *param_1;
  uStack_130 = 4;
  uStack_128 = *(undefined8 *)(param_1 + 2);
  uStack_120 = 5;
  uStack_118 = *(undefined1 *)(param_1 + 4);
  uStack_110 = 7;
  uStack_108 = *(undefined1 *)((long)param_1 + 0x11);
  uStack_100 = 7;
  uStack_f8 = *(undefined8 *)(param_1 + 6);
  uStack_f0 = 5;
  func_0x000104bdb9bc(auStack_140,auStack_148,auStack_138,5);
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_138 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_148);
  puVar3 = auStack_140;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = auStack_140;
  func_0x000104bdbf78();
  FUN_105285440(uStack_e8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_138 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_148);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_158 = FUN_105285284;
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = auStack_138;
  puStack_168 = puVar2;
  ppuStack_160 = &puStack_c0;
  if ((bRam00000001138183f0 & 1) == 0) {
    puVar3 = (undefined4 *)0x1138183f0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_1f8,"_djinni_record_ExpiredStreakMetadata");
      pcVar4 = "streakCount";
      func_0x0001003a83dc(auStack_200,"streakCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1f0,auStack_200,pcVar4);
      pcVar4 = "timestampMs";
      func_0x0001003a83dc(auStack_208,"timestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_1d8,auStack_208,pcVar4);
      pcVar4 = "isRestorable";
      func_0x0001003a83dc(auStack_210,"isRestorable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1c0,auStack_210,pcVar4);
      pcVar4 = "isRestorableExtended";
      func_0x0001003a83dc(auStack_218,"isRestorableExtended");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1a8,auStack_218,pcVar4);
      pcVar4 = "restoreExpirationTimestampMs";
      func_0x0001003a83dc(auStack_220,"restoreExpirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_190,auStack_220,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138183e0,auStack_1f8,0,auStack_1f0,5);
      lVar7 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_1f0 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_220);
      func_0x0001003a8c94(auStack_218);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      func_0x0001003a8c94(auStack_200);
      func_0x0001003a8c94(auStack_1f8);
      puVar3 = (undefined4 *)0x1138183f0;
      ___cxa_guard_release(0x1138183f0);
    }
  }
  FUN_105285440(uStack_178);
  if ((bool)uVar1) {
    return (undefined4 *)0x1138183e0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10529c4a8; end: 10529c4c7;  */

undefined4 * FUN_10529c4a8(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined4 auStack_90 [2];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 8) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105285284();
  func_0x0001003b2110(auStack_98,0x1138183e8);
  auStack_88[0] = *param_2;
  uStack_80 = 4;
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_70 = 5;
  uStack_68 = *(undefined1 *)(param_2 + 4);
  uStack_60 = 7;
  uStack_58 = *(undefined1 *)((long)param_2 + 0x11);
  uStack_50 = 7;
  uStack_48 = *(undefined8 *)(param_2 + 6);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_90,auStack_98,auStack_88,5);
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_88 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = auStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_90;
  func_0x000104bdbf78();
  FUN_105285440(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_88 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_a8 = FUN_105285284;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = auStack_88;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138183f0 & 1) == 0) {
    puVar3 = (undefined4 *)0x1138183f0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_ExpiredStreakMetadata");
      pcVar4 = "streakCount";
      func_0x0001003a83dc(auStack_150,"streakCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar4);
      pcVar4 = "timestampMs";
      func_0x0001003a83dc(auStack_158,"timestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar4);
      pcVar4 = "isRestorable";
      func_0x0001003a83dc(auStack_160,"isRestorable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar4);
      pcVar4 = "isRestorableExtended";
      func_0x0001003a83dc(auStack_168,"isRestorableExtended");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar4);
      pcVar4 = "restoreExpirationTimestampMs";
      func_0x0001003a83dc(auStack_170,"restoreExpirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138183e0,auStack_148,0,auStack_140,5);
      lVar7 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar3 = (undefined4 *)0x1138183f0;
      ___cxa_guard_release(0x1138183f0);
    }
  }
  FUN_105285440(uStack_c8);
  if ((bool)uVar1) {
    return (undefined4 *)0x1138183e0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10529c4c8; end: 10529c523;  */

undefined8 FUN_10529c4c8(void)

{
  int iVar1;
  
  if ((bRam00000001130cc2f0 & 1) == 0) {
    iVar1 = 0x130cc2f0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105285284();
      func_0x00010b990784(0x1130cc2e0);
      ___cxa_guard_release(0x1130cc2f0);
    }
  }
  return 0x1130cc2e0;
}



/* Entry: 10529c524; end: 10529c537;  */

void FUN_10529c524(void)

{
  return;
}



/* Entry: 10529c538; end: 10529c663;  */

undefined1 * FUN_10529c538(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529c664();
  func_0x0001003b2110(auStack_78,0x113818c00);
  auStack_68[0] = *param_2;
  uStack_60 = 7;
  uStack_58 = param_2[1];
  uStack_50 = 7;
  if (param_2[8] == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,*(undefined4 *)(param_2 + 4));
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar6 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_70;
  func_0x000104bdbf78();
  FUN_10529c878(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    iVar5 = (int)puVar6;
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_10529c664;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = auStack_68;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818c08 & 1) == 0) {
    iVar2 = 0x13818c08;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_StreamingResponseMetadata");
      pcVar4 = "completeResponseSeenInChat";
      func_0x0001003a83dc(auStack_100,"completeResponseSeenInChat");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar4);
      pcVar4 = "isComplete";
      func_0x0001003a83dc(auStack_108,"isComplete");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar4);
      pcVar4 = "completionReason";
      func_0x0001003a83dc(auStack_110,"completionReason");
      FUN_10529c7c4();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818bf8,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      ___cxa_guard_release(0x113818c08);
    }
  }
  FUN_10529c878(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818bf8;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc308 & 1) == 0) {
    iVar5 = 0x130cc308;
    ___cxa_guard_acquire();
    if (iVar5 != 0) {
      FUN_10529c820();
      func_0x00010b990784(0x1130cc2f8);
      ___cxa_guard_release(0x1130cc308);
    }
  }
  return (undefined1 *)0x1130cc2f8;
}



/* Entry: 10529c664; end: 10529c7c3;  */

undefined8 FUN_10529c664(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818c08 & 1) == 0) {
    iVar1 = 0x13818c08;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_StreamingResponseMetadata");
      pcVar2 = "completeResponseSeenInChat";
      func_0x0001003a83dc(auStack_80,"completeResponseSeenInChat");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "isComplete";
      func_0x0001003a83dc(auStack_88,"isComplete");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "completionReason";
      func_0x0001003a83dc(auStack_90,"completionReason");
      FUN_10529c7c4();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818bf8,auStack_78,0,auStack_70,3);
      lVar4 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      ___cxa_guard_release(0x113818c08);
    }
  }
  FUN_10529c878(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818bf8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cc308 & 1) == 0) {
    iVar1 = 0x130cc308;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529c820();
      func_0x00010b990784(0x1130cc2f8);
      ___cxa_guard_release(0x1130cc308);
    }
  }
  return 0x1130cc2f8;
}



/* Entry: 10529c7c4; end: 10529c81f;  */

undefined8 FUN_10529c7c4(void)

{
  int iVar1;
  
  if ((bRam00000001130cc308 & 1) == 0) {
    iVar1 = 0x130cc308;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529c820();
      func_0x00010b990784(0x1130cc2f8);
      ___cxa_guard_release(0x1130cc308);
    }
  }
  return 0x1130cc2f8;
}



/* Entry: 10529c820; end: 10529c877;  */

undefined8 FUN_10529c820(void)

{
  int iVar1;
  
  if ((bRam00000001130cc320 & 1) == 0) {
    iVar1 = 0x130cc320;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cc310);
      ___cxa_guard_release(0x1130cc320);
    }
  }
  return 0x1130cc310;
}



/* Entry: 10529c878; end: 10529c88b;  */

void FUN_10529c878(void)

{
  return;
}



/* Entry: 10529c88c; end: 10529ca5b;  */

void FUN_10529c88c(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x00010529cca4();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818c10);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818c10) = 1;
  if ((bVar1 & 1) != 0) goto LAB_10529c8dc;
  if ((bRam0000000113818c40 & 1) == 0) goto LAB_10529c8f8;
  while( true ) {
    func_0x000108b80888(0x113818c30);
LAB_10529c8dc:
    func_0x00010529cc7c();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10529c8f8:
    iVar2 = 0x13818c40;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10529caf8();
      pcVar3 = "onComplete";
      func_0x0001003a83dc(&uStack_80,"onComplete");
      func_0x0001003b166c(auStack_a0);
      FUN_1052843d8();
      func_0x0001003adcc0(auStack_68,pcVar3);
      func_0x000104bdbd48(auStack_90,auStack_a0,auStack_68,1);
      uStack_58 = uStack_80;
      uStack_80 = 0;
      func_0x0001003aef98(auStack_50,auStack_90);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_a8,"onError");
      func_0x0001003b166c(auStack_c8);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_78,pcVar3);
      func_0x000104bdbd48(auStack_b8,auStack_c8,auStack_78,1);
      uStack_40 = uStack_a8;
      uStack_a8 = 0;
      func_0x0001003aef98(auStack_38,auStack_b8);
      func_0x000104bdbd44(0x113818c30,0x113818c48,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x00010529cc94(auStack_b8);
      func_0x00010529cc94(auStack_78);
      func_0x00010529cc94(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x00010529cc94(auStack_90);
      func_0x00010529cc94(auStack_68);
      func_0x00010529cc94(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818c40);
    }
  }
  return;
}


