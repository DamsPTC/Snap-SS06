/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105286424; end: 1052864ab;  */

void FUN_105286424(undefined8 *param_1)

{
  int iVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_10528bee4(&uStack_40,lStack_28 + 0x18);
  iVar1 = (int)lStack_28 + 0x28;
  func_0x00010b9a9518();
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  *(int *)(param_1 + 3) = iVar1;
  func_0x000100100fec(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052864ac; end: 1052865db;  */

undefined8 FUN_1052864ac(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818420 & 1) == 0) {
    iVar1 = 0x13818420;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ExternalContentReference");
      pcVar2 = "reference";
      func_0x0001003a83dc(auStack_68,"reference");
      FUN_10528c00c();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "appOrigin";
      func_0x0001003a83dc(auStack_70,"appOrigin");
      FUN_1052865dc();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818410,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x113818420);
    }
  }
  FUN_105286634(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818410;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbb40 & 1) == 0) {
    iVar1 = 0x130cbb40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbb30);
      ___cxa_guard_release(0x1130cbb40);
    }
  }
  return 0x1130cbb30;
}



/* Entry: 1052865dc; end: 105286633;  */

undefined8 FUN_1052865dc(void)

{
  int iVar1;
  
  if ((bRam00000001130cbb40 & 1) == 0) {
    iVar1 = 0x130cbb40;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbb30);
      ___cxa_guard_release(0x1130cbb40);
    }
  }
  return 0x1130cbb30;
}



/* Entry: 105286634; end: 105286647;  */

void FUN_105286634(void)

{
  return;
}



/* Entry: 105286648; end: 10528674b;  */

undefined1 * FUN_105286648(undefined8 param_1,undefined8 *param_2)

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
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528674c();
  func_0x0001003b2110(auStack_68,0x113818430);
  uStack_58 = *param_2;
  uStack_50 = 5;
  uStack_48 = *(undefined1 *)(param_2 + 1);
  uStack_40 = 7;
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
  FUN_10528687c(uStack_38);
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
  pcStack_78 = FUN_10528674c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818438 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818438;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_FailedRetrievedMessageResult");
      pcVar4 = "serverMessageId";
      func_0x0001003a83dc(auStack_d8,"serverMessageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "isRetryable";
      func_0x0001003a83dc(auStack_e0,"isRetryable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818428,auStack_d0,0,auStack_c8,2);
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
      puVar3 = (undefined1 *)0x113818438;
      ___cxa_guard_release(0x113818438);
    }
  }
  FUN_10528687c(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818428;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 10528674c; end: 10528687b;  */

undefined8 FUN_10528674c(undefined8 param_1,int param_2)

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
  if ((bRam0000000113818438 & 1) == 0) {
    param_1 = 0x113818438;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_FailedRetrievedMessageResult");
      pcVar1 = "serverMessageId";
      func_0x0001003a83dc(auStack_68,"serverMessageId");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "isRetryable";
      func_0x0001003a83dc(auStack_70,"isRetryable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818428,auStack_60,0,auStack_58,2);
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
      param_1 = 0x113818438;
      ___cxa_guard_release(0x113818438);
    }
  }
  FUN_10528687c(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818428;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 10528687c; end: 10528688f;  */

void FUN_10528687c(void)

{
  return;
}



/* Entry: 105286890; end: 105286af3;  */

undefined1 * FUN_105286890(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [8];
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [8];
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [8];
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [8];
  undefined1 auStack_320 [8];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined2 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined4 uStack_108;
  undefined2 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105286af4();
  func_0x0001003b2110(auStack_158,0x113818448);
  FUN_10529dd1c(auStack_148,param_2);
  uStack_138 = *(undefined8 *)(param_2 + 0x18);
  uStack_130 = 5;
  FUN_105282834(auStack_128,param_2 + 0x20);
  func_0x000105280820(auStack_118,param_2 + 0x38);
  uStack_108 = *(undefined4 *)(param_2 + 0x58);
  uStack_100 = 4;
  if (*(char *)(param_2 + 0x60) == '\x01') {
    uStack_f8 = CONCAT44(uStack_f8._4_4_,*(undefined4 *)(param_2 + 0x5c));
    uStack_f0 = 4;
  }
  else {
    uStack_f8 = 0;
    uStack_f0 = 1;
  }
  uStack_ef = 0;
  FUN_105286ec4(auStack_e8,param_2 + 0x68);
  FUN_10528b78c(auStack_d8,param_2 + 0x180);
  FUN_1052828f4(auStack_c8,param_2 + 0x1c0);
  FUN_105295508(auStack_b8,param_2 + 0x208);
  uStack_a8 = *(undefined8 *)(param_2 + 0x230);
  uStack_70 = 5;
  uStack_a0 = uStack_70;
  if (*(char *)(param_2 + 0x238) == '\0') {
    uStack_a0 = 1;
    uStack_a8 = 0;
  }
  uStack_9f = 0;
  uStack_98 = *(undefined4 *)(param_2 + 0x240);
  uStack_90 = 4;
  func_0x00010528080c(auStack_88,param_2 + 0x248);
  uStack_78 = *(undefined8 *)(param_2 + 0x268);
  if (*(char *)(param_2 + 0x270) == '\0') {
    uStack_70 = 1;
    uStack_78 = 0;
  }
  uStack_6f = 0;
  func_0x000105282908(auStack_68,param_2 + 0x278);
  func_0x00010528291c(auStack_58,param_2 + 0x358);
  func_0x000104bdb9bc(auStack_150,auStack_158,auStack_148,0x10);
  lVar8 = 0xf0;
  do {
    func_0x00010b9a8d98(auStack_148 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_158);
  puVar6 = auStack_150;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_150;
  func_0x000104bdbf78();
  FUN_105286eb0(uStack_48);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar8 = -0x100;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar5 = (int)puVar6;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_158);
  __Unwind_Resume(puVar2);
  uStack_198 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9830 & 1) == 0) {
    puVar2 = (undefined1 *)0x1136b9830;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_320,"_djinni_record_FeedEntry");
      pcVar4 = "conversationId";
      func_0x0001003a83dc(auStack_328,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_318,auStack_328,pcVar4);
      pcVar4 = "lastEventUpdateTimestamp";
      func_0x0001003a83dc(auStack_330,"lastEventUpdateTimestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_300,auStack_330,pcVar4);
      pcVar4 = "participants";
      func_0x0001003a83dc(auStack_338,"participants");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_2e8,auStack_338,pcVar4);
      pcVar4 = "conversationTitle";
      func_0x0001003a83dc(auStack_340,"conversationTitle");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_2d0,auStack_340,pcVar4);
      pcVar4 = "conversationType";
      func_0x0001003a83dc(auStack_348,"conversationType");
      func_0x000104bef548();
      func_0x0001003b1b50(auStack_2b8,auStack_348,pcVar4);
      pcVar4 = "conversationSubType";
      func_0x0001003a83dc(auStack_350,"conversationSubType");
      FUN_1052829a0();
      func_0x0001003b1b50(auStack_2a0,auStack_350,pcVar4);
      pcVar4 = "displayInfo";
      func_0x0001003a83dc(auStack_358,"displayInfo");
      FUN_105287070();
      func_0x0001003b1b50(auStack_288,auStack_358,pcVar4);
      pcVar4 = "interactionInfo";
      func_0x0001003a83dc(auStack_360,"interactionInfo");
      FUN_10528b8e4();
      func_0x0001003b1b50(auStack_270,auStack_360,pcVar4);
      pcVar4 = "streakMetadata";
      func_0x0001003a83dc(auStack_368,"streakMetadata");
      FUN_105282944();
      func_0x0001003b1b50(auStack_258,auStack_368,pcVar4);
      pcVar4 = "notificationSettings";
      func_0x0001003a83dc(auStack_370,"notificationSettings");
      FUN_105295644();
      func_0x0001003b1b50(auStack_240,auStack_370,pcVar4);
      pcVar4 = "pinnedTimestampMs";
      func_0x0001003a83dc(auStack_378,"pinnedTimestampMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_228,auStack_378,pcVar4);
      pcVar4 = "categoryType";
      func_0x0001003a83dc(auStack_380,"categoryType");
      func_0x000104bf8944();
      func_0x0001003b1b50(auStack_210,auStack_380,pcVar4);
      pcVar4 = "categoryId";
      func_0x0001003a83dc(auStack_388,"categoryId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_1f8,auStack_388,pcVar4);
      pcVar4 = "sequenceId";
      func_0x0001003a83dc(auStack_390);
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_1e0,auStack_390,pcVar4);
      pcVar4 = "conversationSubTypeMetadata";
      func_0x0001003a83dc(auStack_398,"conversationSubTypeMetadata");
      FUN_1052829fc();
      func_0x0001003b1b50(auStack_1c8,auStack_398,pcVar4);
      pcVar4 = "conversationInvitationMetadata";
      func_0x0001003a83dc(auStack_3a0);
      FUN_105282a58();
      func_0x0001003b1b50(auStack_1b0,auStack_3a0,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818440,auStack_320,0,auStack_318,0x10);
      lVar8 = 0x168;
      do {
        func_0x0001003b1c5c(auStack_318 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_3a0);
      func_0x0001003a8c94(auStack_398);
      func_0x0001003a8c94(auStack_390);
      func_0x0001003a8c94(auStack_388);
      func_0x0001003a8c94(auStack_380);
      func_0x0001003a8c94(auStack_378);
      func_0x0001003a8c94(auStack_370);
      func_0x0001003a8c94(auStack_368);
      func_0x0001003a8c94(auStack_360);
      func_0x0001003a8c94(auStack_358);
      func_0x0001003a8c94(auStack_350);
      func_0x0001003a8c94(auStack_348);
      func_0x0001003a8c94(auStack_340);
      func_0x0001003a8c94(auStack_338);
      func_0x0001003a8c94(auStack_330);
      func_0x0001003a8c94(auStack_328);
      func_0x0001003a8c94(auStack_320);
      puVar2 = (undefined1 *)0x1136b9830;
      ___cxa_guard_release(0x1136b9830);
    }
  }
  FUN_105286eb0(uStack_198);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (iVar5 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    return puVar2;
  }
  return (undefined1 *)0x113818440;
}



/* Entry: 105286af4; end: 105286eaf;  */

undefined8 FUN_105286af4(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [8];
  undefined1 auStack_1f0 [8];
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
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
  if ((bRam00000001136b9830 & 1) == 0) {
    param_1 = 0x1136b9830;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_1c0,"_djinni_record_FeedEntry");
      pcVar1 = "conversationId";
      func_0x0001003a83dc(auStack_1c8,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_1b8,auStack_1c8,pcVar1);
      pcVar1 = "lastEventUpdateTimestamp";
      func_0x0001003a83dc(auStack_1d0,"lastEventUpdateTimestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_1a0,auStack_1d0,pcVar1);
      pcVar1 = "participants";
      func_0x0001003a83dc(auStack_1d8,"participants");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_188,auStack_1d8,pcVar1);
      pcVar1 = "conversationTitle";
      func_0x0001003a83dc(auStack_1e0,"conversationTitle");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_170,auStack_1e0,pcVar1);
      pcVar1 = "conversationType";
      func_0x0001003a83dc(auStack_1e8,"conversationType");
      func_0x000104bef548();
      func_0x0001003b1b50(auStack_158,auStack_1e8,pcVar1);
      pcVar1 = "conversationSubType";
      func_0x0001003a83dc(auStack_1f0,"conversationSubType");
      FUN_1052829a0();
      func_0x0001003b1b50(auStack_140,auStack_1f0,pcVar1);
      pcVar1 = "displayInfo";
      func_0x0001003a83dc(auStack_1f8,"displayInfo");
      FUN_105287070();
      func_0x0001003b1b50(auStack_128,auStack_1f8,pcVar1);
      pcVar1 = "interactionInfo";
      func_0x0001003a83dc(auStack_200,"interactionInfo");
      FUN_10528b8e4();
      func_0x0001003b1b50(auStack_110,auStack_200,pcVar1);
      pcVar1 = "streakMetadata";
      func_0x0001003a83dc(auStack_208,"streakMetadata");
      FUN_105282944();
      func_0x0001003b1b50(auStack_f8,auStack_208,pcVar1);
      pcVar1 = "notificationSettings";
      func_0x0001003a83dc(auStack_210,"notificationSettings");
      FUN_105295644();
      func_0x0001003b1b50(auStack_e0,auStack_210,pcVar1);
      pcVar1 = "pinnedTimestampMs";
      func_0x0001003a83dc(auStack_218,"pinnedTimestampMs");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_c8,auStack_218,pcVar1);
      pcVar1 = "categoryType";
      func_0x0001003a83dc(auStack_220,"categoryType");
      func_0x000104bf8944();
      func_0x0001003b1b50(auStack_b0,auStack_220,pcVar1);
      pcVar1 = "categoryId";
      func_0x0001003a83dc(auStack_228,"categoryId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_98,auStack_228,pcVar1);
      pcVar1 = "sequenceId";
      func_0x0001003a83dc(auStack_230);
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_80,auStack_230,pcVar1);
      pcVar1 = "conversationSubTypeMetadata";
      func_0x0001003a83dc(auStack_238,"conversationSubTypeMetadata");
      FUN_1052829fc();
      func_0x0001003b1b50(auStack_68,auStack_238,pcVar1);
      pcVar1 = "conversationInvitationMetadata";
      func_0x0001003a83dc(auStack_240);
      FUN_105282a58();
      func_0x0001003b1b50(auStack_50,auStack_240,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818440,auStack_1c0,0,auStack_1b8,0x10);
      lVar3 = 0x168;
      do {
        func_0x0001003b1c5c(auStack_1b8 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_240);
      func_0x0001003a8c94(auStack_238);
      func_0x0001003a8c94(auStack_230);
      func_0x0001003a8c94(auStack_228);
      func_0x0001003a8c94(auStack_220);
      func_0x0001003a8c94(auStack_218);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      func_0x0001003a8c94(auStack_200);
      func_0x0001003a8c94(auStack_1f8);
      func_0x0001003a8c94(auStack_1f0);
      func_0x0001003a8c94(auStack_1e8);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      param_1 = 0x1136b9830;
      ___cxa_guard_release(0x1136b9830);
    }
  }
  FUN_105286eb0(uStack_38);
  if ((bool)in_ZR) {
    return 0x113818440;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105286eb0; end: 105286ec3;  */

void FUN_105286eb0(void)

{
  return;
}



/* Entry: 105286ec4; end: 10528706f;  */

undefined1 * FUN_105286ec4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_280 [8];
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined8 uStack_138;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 uStack_88;
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105287070();
  func_0x0001003b2110(auStack_f8,0x113818458);
  uStack_e8 = *param_2;
  uStack_e0 = 5;
  FUN_105282834(auStack_d8,param_2 + 1);
  FUN_105282834(auStack_c8,param_2 + 4);
  FUN_10528080c(auStack_b8,param_2 + 7);
  FUN_10528080c(auStack_a8,param_2 + 0xb);
  FUN_1052874f0(auStack_98,param_2 + 0xf);
  uStack_88 = *(undefined1 *)(param_2 + 0x20);
  uStack_80 = 7;
  uStack_78 = *(undefined1 *)((long)param_2 + 0x101);
  uStack_70 = 7;
  uStack_68 = *(undefined1 *)((long)param_2 + 0x102);
  uStack_60 = 7;
  func_0x000105282930(auStack_58,(long)param_2 + 0x104);
  func_0x000104bdb9bc(auStack_f0,auStack_f8,&uStack_e8,10);
  lVar8 = 0x90;
  do {
    func_0x00010b9a8d98((long)&uStack_e8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_f8);
  puVar6 = auStack_f0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_f0;
  func_0x000104bdbf78();
  FUN_105287318(uStack_48);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_58;
  lVar8 = -0xa0;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar5 = (int)puVar6;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_f8);
  __Unwind_Resume(puVar2);
  uStack_138 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001136b9838 & 1) == 0) {
    puVar2 = (undefined1 *)0x1136b9838;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_230,"_djinni_record_FeedEntryDisplayInfo");
      pcVar4 = "displayTimestamp";
      func_0x0001003a83dc(auStack_238,"displayTimestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_228,auStack_238,pcVar4);
      pcVar4 = "lastUpdateActorUserIds";
      func_0x0001003a83dc(auStack_240,"lastUpdateActorUserIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_210,auStack_240,pcVar4);
      pcVar4 = "lastSenderUserIds";
      func_0x0001003a83dc(auStack_248,"lastSenderUserIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_1f8,auStack_248,pcVar4);
      pcVar4 = "feedItemCreatorId";
      func_0x0001003a83dc(auStack_250,"feedItemCreatorId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_1e0,auStack_250,pcVar4);
      pcVar4 = "feedItemMutatedMessageSenderId";
      func_0x0001003a83dc(auStack_258,"feedItemMutatedMessageSenderId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_1c8,auStack_258,pcVar4);
      pcVar4 = "feedItem";
      func_0x0001003a83dc(auStack_260,"feedItem");
      FUN_105287640();
      func_0x0001003b1b50(auStack_1b0,auStack_260,pcVar4);
      pcVar4 = "viewed";
      func_0x0001003a83dc(auStack_268,"viewed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_198,auStack_268,pcVar4);
      pcVar4 = "isFriendLinkPending";
      func_0x0001003a83dc(auStack_270,"isFriendLinkPending");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_180,auStack_270,pcVar4);
      pcVar4 = "isLocked";
      func_0x0001003a83dc(auStack_278,"isLocked");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_168,auStack_278,pcVar4);
      pcVar4 = "activityData";
      func_0x0001003a83dc(auStack_280,"activityData");
      FUN_105282ab4();
      func_0x0001003b1b50(auStack_150,auStack_280,pcVar4);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818450,auStack_230,0,auStack_228,10);
      lVar8 = 0xd8;
      do {
        func_0x0001003b1c5c(auStack_228 + lVar8);
        iVar5 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_280);
      func_0x0001003a8c94(auStack_278);
      func_0x0001003a8c94(auStack_270);
      func_0x0001003a8c94(auStack_268);
      func_0x0001003a8c94(auStack_260);
      func_0x0001003a8c94(auStack_258);
      func_0x0001003a8c94(auStack_250);
      func_0x0001003a8c94(auStack_248);
      func_0x0001003a8c94(auStack_240);
      func_0x0001003a8c94(auStack_238);
      func_0x0001003a8c94(auStack_230);
      puVar2 = (undefined1 *)0x1136b9838;
      ___cxa_guard_release(0x1136b9838);
    }
  }
  FUN_105287318(uStack_138);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818450;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar2;
}



/* Entry: 105287070; end: 105287317;  */

undefined8 FUN_105287070(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
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
  if ((bRam00000001136b9838 & 1) == 0) {
    param_1 = 0x1136b9838;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_130,"_djinni_record_FeedEntryDisplayInfo");
      pcVar1 = "displayTimestamp";
      func_0x0001003a83dc(auStack_138,"displayTimestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_128,auStack_138,pcVar1);
      pcVar1 = "lastUpdateActorUserIds";
      func_0x0001003a83dc(auStack_140,"lastUpdateActorUserIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_110,auStack_140,pcVar1);
      pcVar1 = "lastSenderUserIds";
      func_0x0001003a83dc(auStack_148,"lastSenderUserIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_f8,auStack_148,pcVar1);
      pcVar1 = "feedItemCreatorId";
      func_0x0001003a83dc(auStack_150,"feedItemCreatorId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_e0,auStack_150,pcVar1);
      pcVar1 = "feedItemMutatedMessageSenderId";
      func_0x0001003a83dc(auStack_158,"feedItemMutatedMessageSenderId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_c8,auStack_158,pcVar1);
      pcVar1 = "feedItem";
      func_0x0001003a83dc(auStack_160,"feedItem");
      FUN_105287640();
      func_0x0001003b1b50(auStack_b0,auStack_160,pcVar1);
      pcVar1 = "viewed";
      func_0x0001003a83dc(auStack_168,"viewed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_98,auStack_168,pcVar1);
      pcVar1 = "isFriendLinkPending";
      func_0x0001003a83dc(auStack_170,"isFriendLinkPending");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_80,auStack_170,pcVar1);
      pcVar1 = "isLocked";
      func_0x0001003a83dc(auStack_178,"isLocked");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_68,auStack_178,pcVar1);
      pcVar1 = "activityData";
      func_0x0001003a83dc(auStack_180,"activityData");
      FUN_105282ab4();
      func_0x0001003b1b50(auStack_50,auStack_180,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818450,auStack_130,0,auStack_128,10);
      lVar3 = 0xd8;
      do {
        func_0x0001003b1c5c(auStack_128 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_180);
      func_0x0001003a8c94(auStack_178);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      param_1 = 0x1136b9838;
      ___cxa_guard_release(0x1136b9838);
    }
  }
  FUN_105287318(uStack_38);
  if ((bool)in_ZR) {
    return 0x113818450;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105287318; end: 10528732b;  */

void FUN_105287318(void)

{
  return;
}



/* Entry: 10528732c; end: 1052873f7;  */

undefined1 * FUN_10528732c(undefined8 param_1,undefined8 param_2)

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
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052873f8();
  func_0x0001003b2110(auStack_48,0x113818468);
  FUN_10529dd1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_1052874dc(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_1052873f8;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818470 & 1) == 0) {
    puVar1 = (undefined1 *)0x113818470;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_FeedEntryIdentifier");
      pcVar2 = "conversationId";
      func_0x0001003a83dc(auStack_90,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x113818460,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x113818470;
      ___cxa_guard_release(0x113818470);
    }
  }
  FUN_1052874dc(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818460;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 1052873f8; end: 1052874db;  */

undefined8 FUN_1052873f8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818470 & 1) == 0) {
    param_1 = 0x113818470;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_FeedEntryIdentifier");
      pcVar1 = "conversationId";
      func_0x0001003a83dc(auStack_40,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x113818460,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x113818470;
      ___cxa_guard_release(0x113818470);
    }
  }
  FUN_1052874dc(uStack_18);
  if ((bool)in_ZR) {
    return 0x113818460;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052874dc; end: 1052874ef;  */

void FUN_1052874dc(void)

{
  return;
}



/* Entry: 1052874f0; end: 10528763f;  */

undefined4 * FUN_1052874f0(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar9;
  long lVar10;
  undefined1 auStack_450 [8];
  undefined1 auStack_448 [8];
  undefined1 auStack_440 [8];
  undefined1 auStack_438 [8];
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [8];
  undefined1 auStack_420 [8];
  undefined1 auStack_418 [24];
  undefined1 auStack_400 [24];
  undefined1 auStack_3e8 [24];
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined8 uStack_388;
  undefined1 *puStack_380;
  undefined4 *puStack_378;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined1 auStack_358 [8];
  undefined4 auStack_350 [2];
  undefined1 auStack_348 [8];
  undefined2 uStack_340;
  undefined1 uStack_338;
  undefined2 uStack_330;
  undefined1 uStack_328;
  undefined2 uStack_320;
  undefined1 uStack_318;
  undefined2 uStack_310;
  undefined1 uStack_308;
  undefined2 uStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined1 uStack_2ef;
  undefined8 uStack_2e8;
  undefined1 *puStack_2e0;
  long lStack_2d8;
  undefined8 uStack_2d0;
  undefined4 *puStack_2c8;
  undefined8 ***pppuStack_2c0;
  code *pcStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [8];
  undefined1 auStack_290 [8];
  undefined1 auStack_288 [8];
  undefined4 auStack_280 [6];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  long lStack_200;
  undefined4 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [8];
  undefined4 auStack_1d0 [2];
  undefined4 auStack_1c8 [2];
  undefined2 uStack_1c0;
  undefined1 uStack_1b8;
  undefined2 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined8 uStack_178;
  undefined1 *puStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined4 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined4 auStack_118 [6];
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
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105287640();
  func_0x0001003b2110(auStack_88,0x113818480);
  FUN_1052877cc(auStack_78,param_2);
  func_0x0001052877e0(auStack_68,param_2 + 0x48);
  func_0x0001052877f4(auStack_58,param_2 + 0x70);
  func_0x000105287808(auStack_48,param_2 + 0x7c);
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar10 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  func_0x00010528799c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar9 = -0x40;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar7 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_98 = FUN_105287640;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  lStack_b0 = lVar9;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818488 & 1) == 0) {
    puVar4 = (undefined4 *)0x113818488;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_FeedItem");
      pcVar5 = "snap";
      func_0x0001003a83dc(auStack_128,"snap");
      FUN_10528781c();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "chat";
      func_0x0001003a83dc(auStack_130,"chat");
      FUN_105287878();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "call";
      func_0x0001003a83dc(auStack_138,"call");
      FUN_1052878d4();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "conversation";
      func_0x0001003a83dc(auStack_140,"conversation");
      FUN_105287930();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      puVar2 = auStack_118;
      uVar8 = 0;
      func_0x000104bdbd44(0x113818478,auStack_120,0,auStack_118,4);
      lVar9 = 0x48;
      do {
        func_0x0001003b1c5c((long)puVar2 + lVar9);
        iVar7 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar4 = (undefined4 *)0x113818488;
      ___cxa_guard_release();
      uVar8 = 0xffffffffffffffe8;
    }
  }
  func_0x00010528799c(uStack_b8);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818478;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 0x10) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_148 = FUN_1052877cc;
  uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_170 = auStack_78;
  lStack_168 = lVar10;
  uStack_160 = uVar8;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_a0;
  FUN_10529b64c();
  func_0x0001003b2110(auStack_1d8,0x113818b88);
  uStack_1c0 = 4;
  auStack_1c8[0] = *puVar4;
  uStack_1b8 = *(undefined1 *)(puVar4 + 1);
  uStack_1b0 = 7;
  FUN_10529b808(auStack_1a8,puVar4 + 2);
  if (*(char *)(puVar4 + 0xb) == '\x01') {
    uStack_198 = CONCAT44(uStack_198._4_4_,puVar4[10]);
    uStack_190 = 4;
  }
  else {
    uStack_198 = 0;
    uStack_190 = 1;
  }
  uStack_18f = 0;
  uStack_188 = *(undefined8 *)(puVar4 + 0xc);
  uStack_180 = 5;
  if (*(char *)(puVar4 + 0xe) == '\0') {
    uStack_180 = 1;
    uStack_188 = 0;
  }
  uStack_17f = 0;
  func_0x000104bdb9bc(auStack_1d0,auStack_1d8,auStack_1c8,5);
  lVar10 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_1c8 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = auStack_1d0;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = auStack_1d0;
  func_0x000104bdbf78();
  FUN_10529b990(uStack_178);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_188;
  lVar9 = -0x50;
  do {
    func_0x00010b9a8d98(puVar6);
    iVar7 = (int)puVar4;
    puVar6 = puVar6 + -2;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10529b64c;
  uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = 0;
  lStack_200 = lVar9;
  puStack_1f8 = puVar2;
  pppuStack_1f0 = &ppuStack_150;
  if ((bRam0000000113818b90 & 1) == 0) {
    puVar4 = (undefined4 *)0x113818b90;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_288,"_djinni_record_SnapItem");
      pcVar5 = "state";
      func_0x0001003a83dc(auStack_290,"state");
      FUN_10529b828();
      func_0x0001003b1b50(auStack_280,auStack_290,pcVar5);
      pcVar5 = "hasAudio";
      func_0x0001003a83dc(auStack_298,"hasAudio");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_268,auStack_298,pcVar5);
      pcVar5 = "comboSnapItemInfo";
      func_0x0001003a83dc(auStack_2a0,"comboSnapItemInfo");
      FUN_10529b880();
      func_0x0001003b1b50(auStack_250,auStack_2a0,pcVar5);
      pcVar5 = "snapModeState";
      func_0x0001003a83dc(auStack_2a8,"snapModeState");
      FUN_10529b8dc();
      func_0x0001003b1b50(auStack_238,auStack_2a8,pcVar5);
      pcVar5 = "unviewedSnapCount";
      func_0x0001003a83dc(auStack_2b0,"unviewedSnapCount");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_220,auStack_2b0,pcVar5);
      puVar2 = auStack_280;
      uVar8 = 0;
      func_0x000104bdbd44(0x113818b80,auStack_288,0,auStack_280,5);
      lVar9 = 0x60;
      do {
        func_0x0001003b1c5c((undefined1 *)((long)puVar2 + lVar9));
        iVar7 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_2b0);
      func_0x0001003a8c94(auStack_2a8);
      func_0x0001003a8c94(auStack_2a0);
      func_0x0001003a8c94(auStack_298);
      func_0x0001003a8c94(auStack_290);
      func_0x0001003a8c94(auStack_288);
      puVar4 = (undefined4 *)0x113818b90;
      ___cxa_guard_release();
      uVar8 = 0xffffffffffffffe8;
    }
  }
  FUN_10529b990(uStack_208);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818b80;
  }
  ___stack_chk_fail();
  if (iVar7 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 6) != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return puVar4;
  }
  pcStack_2b8 = FUN_10529b808;
  uStack_2e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_2e0 = auStack_78;
  lStack_2d8 = lVar10;
  uStack_2d0 = uVar8;
  puStack_2c8 = puVar2;
  pppuStack_2c0 = &pppuStack_1f0;
  FUN_105281578();
  func_0x0001003b2110(auStack_358,0x113818280);
  auStack_348[0] = *(undefined1 *)puVar4;
  uStack_340 = 7;
  uStack_338 = *(undefined1 *)((long)puVar4 + 1);
  uStack_330 = 7;
  uStack_328 = *(undefined1 *)((long)puVar4 + 2);
  uStack_320 = 7;
  uStack_318 = *(undefined1 *)((long)puVar4 + 3);
  uStack_310 = 7;
  uStack_308 = *(undefined1 *)(puVar4 + 1);
  uStack_300 = 7;
  uStack_2f8 = *(undefined8 *)(puVar4 + 2);
  uStack_2f0 = 5;
  if (*(char *)(puVar4 + 4) == '\0') {
    uStack_2f0 = 1;
    uStack_2f8 = 0;
  }
  uStack_2ef = 0;
  func_0x000104bdb9bc(auStack_350,auStack_358,auStack_348,6);
  lVar10 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_348 + lVar10);
    lVar10 = lVar10 + -0x10;
    uVar1 = lVar10 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_358);
  puVar4 = auStack_350;
  func_0x00010b9a8f60(extraout_x8_00);
  puVar2 = auStack_350;
  func_0x000104bdbf78();
  FUN_105281760(uStack_2e8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    lVar10 = 0x50;
    do {
      func_0x00010b9a8d98(auStack_348 + lVar10);
      iVar7 = (int)puVar4;
      lVar10 = lVar10 + -0x10;
      uVar1 = lVar10 == -0x10;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_358);
    puVar4 = puVar2;
    __Unwind_Resume(puVar2);
    pcStack_368 = FUN_105281578;
    uStack_388 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puStack_380 = auStack_348;
    puStack_378 = puVar2;
    pppuStack_370 = &pppuStack_2c0;
    if ((bRam0000000113818288 & 1) == 0) {
      puVar4 = (undefined4 *)0x113818288;
      ___cxa_guard_acquire();
      if ((int)puVar4 != 0) {
        func_0x0001003a83dc(auStack_420,"_djinni_record_ComboSnapItem");
        pcVar5 = "hasNewChat";
        func_0x0001003a83dc(auStack_428,"hasNewChat");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_418,auStack_428,pcVar5);
        pcVar5 = "hasNewReaction";
        func_0x0001003a83dc(auStack_430,"hasNewReaction");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_400,auStack_430,pcVar5);
        pcVar5 = "showSnapIconFirst";
        func_0x0001003a83dc(auStack_438,"showSnapIconFirst");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_3e8,auStack_438,pcVar5);
        pcVar5 = "hasMultipleNewSnaps";
        func_0x0001003a83dc(auStack_440,"hasMultipleNewSnaps");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_3d0,auStack_440,pcVar5);
        pcVar5 = "hasMultipleNewChats";
        func_0x0001003a83dc(auStack_448,"hasMultipleNewChats");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_3b8,auStack_448,pcVar5);
        pcVar5 = "unreadChatCount";
        func_0x0001003a83dc(auStack_450,"unreadChatCount");
        func_0x000104bef438();
        func_0x0001003b1b50(auStack_3a0,auStack_450,pcVar5);
        uVar8 = 0;
        func_0x000104bdbd44(0x113818278,auStack_420,0,auStack_418,6);
        lVar10 = 0x78;
        do {
          func_0x0001003b1c5c(auStack_418 + lVar10);
          iVar7 = (int)uVar8;
          lVar10 = lVar10 + -0x18;
          uVar1 = lVar10 == -0x18;
        } while (!(bool)uVar1);
        func_0x0001003a8c94(auStack_450);
        func_0x0001003a8c94(auStack_448);
        func_0x0001003a8c94(auStack_440);
        func_0x0001003a8c94(auStack_438);
        func_0x0001003a8c94(auStack_430);
        func_0x0001003a8c94(auStack_428);
        func_0x0001003a8c94(auStack_420);
        puVar4 = (undefined4 *)0x113818288;
        ___cxa_guard_release(0x113818288);
      }
    }
    FUN_105281760(uStack_388);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      if (iVar7 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      return puVar4;
    }
    return (undefined4 *)0x113818278;
  }
  return puVar2;
}



/* Entry: 105287640; end: 1052877cb;  */

undefined4 * FUN_105287640(undefined4 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  undefined1 auStack_3c0 [8];
  undefined1 auStack_3b8 [8];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [8];
  undefined1 auStack_3a0 [8];
  undefined1 auStack_398 [8];
  undefined1 auStack_390 [8];
  undefined1 auStack_388 [24];
  undefined1 auStack_370 [24];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined8 uStack_2f8;
  undefined1 *puStack_2f0;
  undefined4 *puStack_2e8;
  undefined8 ***pppuStack_2e0;
  code *pcStack_2d8;
  undefined1 auStack_2c8 [8];
  undefined4 auStack_2c0 [2];
  undefined1 auStack_2b8 [8];
  undefined2 uStack_2b0;
  undefined1 uStack_2a8;
  undefined2 uStack_2a0;
  undefined1 uStack_298;
  undefined2 uStack_290;
  undefined1 uStack_288;
  undefined2 uStack_280;
  undefined1 uStack_278;
  undefined2 uStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined8 uStack_258;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
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
  long lStack_170;
  undefined4 *puStack_168;
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [8];
  undefined4 auStack_140 [2];
  undefined4 auStack_138 [2];
  undefined2 uStack_130;
  undefined1 uStack_128;
  undefined2 uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
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
  if ((bRam0000000113818488 & 1) == 0) {
    param_1 = (undefined4 *)0x113818488;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_FeedItem");
      pcVar2 = "snap";
      func_0x0001003a83dc(auStack_98,"snap");
      FUN_10528781c();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "chat";
      func_0x0001003a83dc(auStack_a0,"chat");
      FUN_105287878();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "call";
      func_0x0001003a83dc(auStack_a8,"call");
      FUN_1052878d4();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "conversation";
      func_0x0001003a83dc(auStack_b0,"conversation");
      FUN_105287930();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818478,auStack_90,0,auStack_88,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_88 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = (undefined4 *)0x113818488;
      ___cxa_guard_release();
    }
  }
  func_0x00010528799c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined4 *)0x113818478;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 0x10) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_b8 = FUN_1052877cc;
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10529b64c();
  func_0x0001003b2110(auStack_148,0x113818b88);
  auStack_138[0] = *param_1;
  uStack_130 = 4;
  uStack_128 = *(undefined1 *)(param_1 + 1);
  uStack_120 = 7;
  FUN_10529b808(auStack_118,param_1 + 2);
  if (*(char *)(param_1 + 0xb) == '\x01') {
    uStack_108 = CONCAT44(uStack_108._4_4_,param_1[10]);
    uStack_100 = 4;
  }
  else {
    uStack_108 = 0;
    uStack_100 = 1;
  }
  uStack_ff = 0;
  uStack_f8 = *(undefined8 *)(param_1 + 0xc);
  uStack_f0 = 5;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uStack_f0 = 1;
    uStack_f8 = 0;
  }
  uStack_ef = 0;
  func_0x000104bdb9bc(auStack_140,auStack_148,auStack_138,5);
  lVar8 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_138 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_148);
  puVar5 = auStack_140;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_140;
  func_0x000104bdbf78();
  FUN_10529b990(uStack_e8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    puVar4 = &uStack_f8;
    lVar8 = -0x50;
    do {
      func_0x00010b9a8d98(puVar4);
      iVar6 = (int)puVar5;
      puVar4 = puVar4 + -2;
      lVar8 = lVar8 + 0x10;
      uVar1 = lVar8 == 0;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_148);
    puVar5 = puVar3;
    __Unwind_Resume();
    pcStack_158 = FUN_10529b64c;
    uStack_178 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    lStack_170 = lVar8;
    puStack_168 = puVar3;
    ppuStack_160 = &puStack_c0;
    if ((bRam0000000113818b90 & 1) == 0) {
      puVar5 = (undefined4 *)0x113818b90;
      ___cxa_guard_acquire();
      if ((int)puVar5 != 0) {
        func_0x0001003a83dc(auStack_1f8,"_djinni_record_SnapItem");
        pcVar2 = "state";
        func_0x0001003a83dc(auStack_200,"state");
        FUN_10529b828();
        func_0x0001003b1b50(auStack_1f0,auStack_200,pcVar2);
        pcVar2 = "hasAudio";
        func_0x0001003a83dc(auStack_208,"hasAudio");
        func_0x000104bef4f0();
        func_0x0001003b1b50(auStack_1d8,auStack_208,pcVar2);
        pcVar2 = "comboSnapItemInfo";
        func_0x0001003a83dc(auStack_210,"comboSnapItemInfo");
        FUN_10529b880();
        func_0x0001003b1b50(auStack_1c0,auStack_210,pcVar2);
        pcVar2 = "snapModeState";
        func_0x0001003a83dc(auStack_218,"snapModeState");
        FUN_10529b8dc();
        func_0x0001003b1b50(auStack_1a8,auStack_218,pcVar2);
        pcVar2 = "unviewedSnapCount";
        func_0x0001003a83dc(auStack_220,"unviewedSnapCount");
        func_0x000104bef438();
        func_0x0001003b1b50(auStack_190,auStack_220,pcVar2);
        uVar7 = 0;
        func_0x000104bdbd44(0x113818b80,auStack_1f8,0,auStack_1f0,5);
        lVar8 = 0x60;
        do {
          func_0x0001003b1c5c(auStack_1f0 + lVar8);
          iVar6 = (int)uVar7;
          lVar8 = lVar8 + -0x18;
          uVar1 = lVar8 == -0x18;
        } while (!(bool)uVar1);
        func_0x0001003a8c94(auStack_220);
        func_0x0001003a8c94(auStack_218);
        func_0x0001003a8c94(auStack_210);
        func_0x0001003a8c94(auStack_208);
        func_0x0001003a8c94(auStack_200);
        func_0x0001003a8c94(auStack_1f8);
        puVar5 = (undefined4 *)0x113818b90;
        ___cxa_guard_release();
      }
    }
    FUN_10529b990(uStack_178);
    if ((bool)uVar1) {
      return (undefined4 *)0x113818b80;
    }
    ___stack_chk_fail();
    if (iVar6 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    if (*(char *)(puVar5 + 6) != '\x01') {
      *(undefined2 *)(extraout_x8_00 + 1) = 1;
      *extraout_x8_00 = 0;
      return puVar5;
    }
    pcStack_228 = FUN_10529b808;
    uStack_258 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_230 = &ppuStack_160;
    FUN_105281578();
    func_0x0001003b2110(auStack_2c8,0x113818280);
    auStack_2b8[0] = *(undefined1 *)puVar5;
    uStack_2b0 = 7;
    uStack_2a8 = *(undefined1 *)((long)puVar5 + 1);
    uStack_2a0 = 7;
    uStack_298 = *(undefined1 *)((long)puVar5 + 2);
    uStack_290 = 7;
    uStack_288 = *(undefined1 *)((long)puVar5 + 3);
    uStack_280 = 7;
    uStack_278 = *(undefined1 *)(puVar5 + 1);
    uStack_270 = 7;
    uStack_268 = *(undefined8 *)(puVar5 + 2);
    uStack_260 = 5;
    if (*(char *)(puVar5 + 4) == '\0') {
      uStack_260 = 1;
      uStack_268 = 0;
    }
    uStack_25f = 0;
    func_0x000104bdb9bc(auStack_2c0,auStack_2c8,auStack_2b8,6);
    lVar8 = 0x50;
    do {
      func_0x00010b9a8d98(auStack_2b8 + lVar8);
      lVar8 = lVar8 + -0x10;
      uVar1 = lVar8 == -0x10;
    } while (!(bool)uVar1);
    func_0x0001003b1f60(auStack_2c8);
    puVar5 = auStack_2c0;
    func_0x00010b9a8f60(extraout_x8_00);
    puVar3 = auStack_2c0;
    func_0x000104bdbf78();
    FUN_105281760(uStack_258);
    if (!(bool)uVar1) {
      ___stack_chk_fail();
      lVar8 = 0x50;
      do {
        func_0x00010b9a8d98(auStack_2b8 + lVar8);
        iVar6 = (int)puVar5;
        lVar8 = lVar8 + -0x10;
        uVar1 = lVar8 == -0x10;
      } while (!(bool)uVar1);
      func_0x0001003b1f60(auStack_2c8);
      puVar5 = puVar3;
      __Unwind_Resume(puVar3);
      pcStack_2d8 = FUN_105281578;
      uStack_2f8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      puStack_2f0 = auStack_2b8;
      puStack_2e8 = puVar3;
      pppuStack_2e0 = &pppuStack_230;
      if ((bRam0000000113818288 & 1) == 0) {
        puVar5 = (undefined4 *)0x113818288;
        ___cxa_guard_acquire();
        if ((int)puVar5 != 0) {
          func_0x0001003a83dc(auStack_390,"_djinni_record_ComboSnapItem");
          pcVar2 = "hasNewChat";
          func_0x0001003a83dc(auStack_398,"hasNewChat");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_388,auStack_398,pcVar2);
          pcVar2 = "hasNewReaction";
          func_0x0001003a83dc(auStack_3a0,"hasNewReaction");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_370,auStack_3a0,pcVar2);
          pcVar2 = "showSnapIconFirst";
          func_0x0001003a83dc(auStack_3a8,"showSnapIconFirst");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_358,auStack_3a8,pcVar2);
          pcVar2 = "hasMultipleNewSnaps";
          func_0x0001003a83dc(auStack_3b0,"hasMultipleNewSnaps");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_340,auStack_3b0,pcVar2);
          pcVar2 = "hasMultipleNewChats";
          func_0x0001003a83dc(auStack_3b8,"hasMultipleNewChats");
          func_0x000104bef4f0();
          func_0x0001003b1b50(auStack_328,auStack_3b8,pcVar2);
          pcVar2 = "unreadChatCount";
          func_0x0001003a83dc(auStack_3c0,"unreadChatCount");
          func_0x000104bef438();
          func_0x0001003b1b50(auStack_310,auStack_3c0,pcVar2);
          uVar7 = 0;
          func_0x000104bdbd44(0x113818278,auStack_390,0,auStack_388,6);
          lVar8 = 0x78;
          do {
            func_0x0001003b1c5c(auStack_388 + lVar8);
            iVar6 = (int)uVar7;
            lVar8 = lVar8 + -0x18;
            uVar1 = lVar8 == -0x18;
          } while (!(bool)uVar1);
          func_0x0001003a8c94(auStack_3c0);
          func_0x0001003a8c94(auStack_3b8);
          func_0x0001003a8c94(auStack_3b0);
          func_0x0001003a8c94(auStack_3a8);
          func_0x0001003a8c94(auStack_3a0);
          func_0x0001003a8c94(auStack_398);
          func_0x0001003a8c94(auStack_390);
          puVar5 = (undefined4 *)0x113818288;
          ___cxa_guard_release(0x113818288);
        }
      }
      FUN_105281760(uStack_2f8);
      if (!(bool)uVar1) {
        ___stack_chk_fail();
        if (iVar6 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        return puVar5;
      }
      return (undefined4 *)0x113818278;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 1052877cc; end: 10528781b;  */

undefined4 * FUN_1052877cc(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
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
  undefined4 *puStack_238;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined1 auStack_218 [8];
  undefined4 auStack_210 [2];
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
  undefined4 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined4 auStack_90 [2];
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
  
  if (*(char *)(param_2 + 0x10) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
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
    puVar4 = (undefined4 *)0x113818b90;
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
      puVar4 = (undefined4 *)0x113818b90;
      ___cxa_guard_release();
    }
  }
  FUN_10529b990(uStack_c8);
  if ((bool)uVar1) {
    return (undefined4 *)0x113818b80;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 6) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_178 = FUN_10529b808;
  uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_180 = &puStack_b0;
  FUN_105281578();
  func_0x0001003b2110(auStack_218,0x113818280);
  auStack_208[0] = *(undefined1 *)puVar4;
  uStack_200 = 7;
  uStack_1f8 = *(undefined1 *)((long)puVar4 + 1);
  uStack_1f0 = 7;
  uStack_1e8 = *(undefined1 *)((long)puVar4 + 2);
  uStack_1e0 = 7;
  uStack_1d8 = *(undefined1 *)((long)puVar4 + 3);
  uStack_1d0 = 7;
  uStack_1c8 = *(undefined1 *)(puVar4 + 1);
  uStack_1c0 = 7;
  uStack_1b8 = *(undefined8 *)(puVar4 + 2);
  uStack_1b0 = 5;
  if (*(char *)(puVar4 + 4) == '\0') {
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
      puVar4 = (undefined4 *)0x113818288;
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
        puVar4 = (undefined4 *)0x113818288;
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
    return (undefined4 *)0x113818278;
  }
  return puVar2;
}



/* Entry: 10528781c; end: 105287877;  */

undefined8 FUN_10528781c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbb58 & 1) == 0) {
    iVar1 = 0x130cbb58;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529b64c();
      func_0x00010b990784(0x1130cbb48);
      ___cxa_guard_release(0x1130cbb58);
    }
  }
  return 0x1130cbb48;
}



/* Entry: 105287878; end: 1052878d3;  */

undefined8 FUN_105287878(void)

{
  int iVar1;
  
  if ((bRam00000001130cbb70 & 1) == 0) {
    iVar1 = 0x130cbb70;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105280ac4();
      func_0x00010b990784(0x1130cbb60);
      ___cxa_guard_release(0x1130cbb70);
    }
  }
  return 0x1130cbb60;
}



/* Entry: 1052878d4; end: 10528792f;  */

undefined8 FUN_1052878d4(void)

{
  int iVar1;
  
  if ((bRam00000001130cbb88 & 1) == 0) {
    iVar1 = 0x130cbb88;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10527fdf0();
      func_0x00010b990784(0x1130cbb78);
      ___cxa_guard_release(0x1130cbb88);
    }
  }
  return 0x1130cbb78;
}



/* Entry: 105287930; end: 10528798b;  */

undefined8 FUN_105287930(void)

{
  int iVar1;
  
  if ((bRam00000001130cbba0 & 1) == 0) {
    iVar1 = 0x130cbba0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528343c();
      func_0x00010b990784(0x1130cbb90);
      ___cxa_guard_release(0x1130cbba0);
    }
  }
  return 0x1130cbb90;
}



/* Entry: 10528798c; end: 1052879af;  */

void FUN_10528798c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052879b0; end: 105287ab3;  */

undefined1 * FUN_1052879b0(undefined8 param_1,undefined8 *param_2)

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
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105287ab4();
  func_0x0001003b2110(auStack_68,0x113818498);
  uStack_58 = *param_2;
  uStack_50 = 5;
  uStack_48 = *(undefined1 *)(param_2 + 1);
  uStack_40 = 7;
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
  FUN_105287be4(uStack_38);
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
  pcStack_78 = FUN_105287ab4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138184a0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138184a0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_FeedPaginationUpdate");
      pcVar4 = "timestamp";
      func_0x0001003a83dc(auStack_d8,"timestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "hasMore";
      func_0x0001003a83dc(auStack_e0,"hasMore");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818490,auStack_d0,0,auStack_c8,2);
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
      puVar3 = (undefined1 *)0x1138184a0;
      ___cxa_guard_release(0x1138184a0);
    }
  }
  FUN_105287be4(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818490;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 105287ab4; end: 105287be3;  */

undefined8 FUN_105287ab4(undefined8 param_1,int param_2)

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
  if ((bRam00000001138184a0 & 1) == 0) {
    param_1 = 0x1138184a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_FeedPaginationUpdate");
      pcVar1 = "timestamp";
      func_0x0001003a83dc(auStack_68,"timestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "hasMore";
      func_0x0001003a83dc(auStack_70,"hasMore");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818490,auStack_60,0,auStack_58,2);
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
      param_1 = 0x1138184a0;
      ___cxa_guard_release(0x1138184a0);
    }
  }
  FUN_105287be4(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818490;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105287be4; end: 105287bf7;  */

void FUN_105287be4(void)

{
  return;
}



/* Entry: 105287bf8; end: 105287d37;  */

undefined1 * FUN_105287bf8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
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
  undefined4 auStack_68 [2];
  undefined2 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105287d38();
  func_0x0001003b2110(auStack_78,0x1138184b0);
  auStack_68[0] = *param_2;
  uStack_60 = 4;
  FUN_10528080c(auStack_58,param_2 + 2);
  if (*(char *)(param_2 + 0xb) == '\x01') {
    uStack_48 = CONCAT44(uStack_48._4_4_,param_2[10]);
    uStack_40 = 4;
  }
  else {
    uStack_48 = 0;
    uStack_40 = 1;
  }
  uStack_3f = 0;
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar9 = 0x20;
  do {
    func_0x00010b9a8d98((long)auStack_68 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar7 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_70;
  func_0x000104bdbf78();
  FUN_105287fa4(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = &uStack_48;
  lVar9 = -0x30;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)puVar7;
    puVar4 = puVar4 + -2;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_105287d38;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar9;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam00000001138184b8 & 1) == 0) {
    iVar2 = 0x138184b8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_FeedRequestErrorMetadata");
      pcVar5 = "triggerType";
      func_0x0001003a83dc(auStack_100,"triggerType");
      FUN_105287e98();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "trackingId";
      func_0x0001003a83dc(auStack_108,"trackingId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "analyticsScenario";
      func_0x0001003a83dc(auStack_110,"analyticsScenario");
      FUN_105287ef0();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar8 = 0;
      func_0x000104bdbd44(0x1138184a8,auStack_f8,0,auStack_f0,3);
      lVar9 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar9);
        iVar6 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      ___cxa_guard_release(0x1138184b8);
    }
  }
  FUN_105287fa4(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138184a8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbbb8 & 1) == 0) {
    iVar6 = 0x130cbbb8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010b990e20(0x1130cbba8);
      ___cxa_guard_release(0x1130cbbb8);
    }
  }
  return (undefined1 *)0x1130cbba8;
}



/* Entry: 105287d38; end: 105287e97;  */

undefined8 FUN_105287d38(undefined8 param_1,int param_2)

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
  if ((bRam00000001138184b8 & 1) == 0) {
    iVar1 = 0x138184b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_FeedRequestErrorMetadata");
      pcVar2 = "triggerType";
      func_0x0001003a83dc(auStack_80,"triggerType");
      FUN_105287e98();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "trackingId";
      func_0x0001003a83dc(auStack_88,"trackingId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "analyticsScenario";
      func_0x0001003a83dc(auStack_90,"analyticsScenario");
      FUN_105287ef0();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138184a8,auStack_78,0,auStack_70,3);
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
      ___cxa_guard_release(0x1138184b8);
    }
  }
  FUN_105287fa4(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138184a8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbbb8 & 1) == 0) {
    iVar1 = 0x130cbbb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbba8);
      ___cxa_guard_release(0x1130cbbb8);
    }
  }
  return 0x1130cbba8;
}



/* Entry: 105287e98; end: 105287eef;  */

undefined8 FUN_105287e98(void)

{
  int iVar1;
  
  if ((bRam00000001130cbbb8 & 1) == 0) {
    iVar1 = 0x130cbbb8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbba8);
      ___cxa_guard_release(0x1130cbbb8);
    }
  }
  return 0x1130cbba8;
}



/* Entry: 105287ef0; end: 105287f4b;  */

undefined8 FUN_105287ef0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbbd0 & 1) == 0) {
    iVar1 = 0x130cbbd0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105287f4c();
      func_0x00010b990784(0x1130cbbc0);
      ___cxa_guard_release(0x1130cbbd0);
    }
  }
  return 0x1130cbbc0;
}



/* Entry: 105287f4c; end: 105287fa3;  */

undefined8 FUN_105287f4c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbbe8 & 1) == 0) {
    iVar1 = 0x130cbbe8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbbd8);
      ___cxa_guard_release(0x1130cbbe8);
    }
  }
  return 0x1130cbbd8;
}



/* Entry: 105287fa4; end: 105287fb7;  */

void FUN_105287fa4(void)

{
  return;
}



/* Entry: 105287fb8; end: 105287feb;  */

uint FUN_105287fb8(long param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = 1 < *(byte *)(param_1 + 8);
  if (bVar1) {
    func_0x00010b9a9608();
    uVar2 = (uint)param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 | (uint)bVar1 << 8;
}



/* Entry: 105287fec; end: 10528817b;  */

undefined8 * FUN_105287fec(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  long lVar9;
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined2 uStack_1c0;
  undefined1 uStack_1b8;
  undefined2 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  long lStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528817c();
  func_0x0001003b2110(auStack_98,0x1138184c8);
  if (param_2[1] == '\x01') {
    uStack_88 = CONCAT71(uStack_88._1_7_,*param_2);
    uStack_80 = 7;
  }
  else {
    uStack_88 = 0;
    uStack_80 = 1;
  }
  uStack_7f = 0;
  if (param_2[8] == '\x01') {
    uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(param_2 + 4));
    uStack_70 = 4;
  }
  else {
    uStack_78 = 0;
    uStack_70 = 1;
  }
  uStack_6f = 0;
  FUN_105282834(auStack_68,param_2 + 0x10);
  FUN_105288338(auStack_58,param_2 + 0x28);
  func_0x00010528834c(auStack_48,param_2 + 0x40);
  func_0x000104bdb9bc(&uStack_90,auStack_98,&uStack_88,5);
  lVar9 = 0x40;
  do {
    func_0x00010b9a8d98((long)&uStack_88 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar4 = &uStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_90;
  func_0x000104bdbf78();
  func_0x0001052884e0(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x50;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_a8 = FUN_10528817c;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  lStack_c0 = lVar8;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138184d0 & 1) == 0) {
    puVar4 = (undefined8 *)0x1138184d0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_FeedUpdateMetadata");
      pcVar5 = "streamingUpdateEnd";
      func_0x0001003a83dc(auStack_150,"streamingUpdateEnd");
      FUN_105288360();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar5);
      pcVar5 = "feedUpdateTriggerType";
      func_0x0001003a83dc(auStack_158,"feedUpdateTriggerType");
      FUN_1052883bc();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar5);
      pcVar5 = "updateOperationIds";
      func_0x0001003a83dc(auStack_160,"updateOperationIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar5);
      pcVar5 = "paginationUpdate";
      func_0x0001003a83dc(auStack_168,"paginationUpdate");
      FUN_105288418();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar5);
      pcVar5 = "feedUpdateTypeMetadata";
      func_0x0001003a83dc(auStack_170,"feedUpdateTypeMetadata");
      FUN_105288474();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar5);
      puVar2 = auStack_140;
      uVar7 = 0;
      func_0x000104bdbd44(0x1138184c0,auStack_148,0,auStack_140,5);
      lVar8 = 0x60;
      do {
        func_0x0001003b1c5c((long)puVar2 + lVar8);
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
      puVar4 = (undefined8 *)0x1138184d0;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x0001052884e0(uStack_c8);
  if ((bool)uVar1) {
    return (undefined8 *)0x1138184c0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(puVar4 + 2) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_178 = FUN_105288338;
  uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = &uStack_88;
  lStack_198 = lVar9;
  uStack_190 = uVar7;
  puStack_188 = puVar2;
  ppuStack_180 = &puStack_b0;
  FUN_105287ab4();
  func_0x0001003b2110(auStack_1d8,0x113818498);
  uStack_1c8 = *puVar4;
  uStack_1c0 = 5;
  uStack_1b8 = *(undefined1 *)(puVar4 + 1);
  uStack_1b0 = 7;
  func_0x000104bdb9bc(&uStack_1d0,auStack_1d8,&uStack_1c8,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_1c8 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = &uStack_1d0;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = &uStack_1d0;
  func_0x000104bdbf78();
  FUN_105287be4(uStack_1a8);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_1c8 + lVar9);
    iVar6 = (int)puVar4;
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1d8);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_1e8 = FUN_105287ab4;
  uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_200 = &uStack_1c8;
  puStack_1f8 = puVar2;
  pppuStack_1f0 = &ppuStack_180;
  if ((bRam00000001138184a0 & 1) == 0) {
    puVar4 = (undefined8 *)0x1138184a0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_240,"_djinni_record_FeedPaginationUpdate");
      pcVar5 = "timestamp";
      func_0x0001003a83dc(auStack_248,"timestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_238,auStack_248,pcVar5);
      pcVar5 = "hasMore";
      func_0x0001003a83dc(auStack_250,"hasMore");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_220,auStack_250,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818490,auStack_240,0,auStack_238,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_238 + lVar9);
        iVar6 = (int)uVar7;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_250);
      func_0x0001003a8c94(auStack_248);
      func_0x0001003a8c94(auStack_240);
      puVar4 = (undefined8 *)0x1138184a0;
      ___cxa_guard_release(0x1138184a0);
    }
  }
  FUN_105287be4(uStack_208);
  if ((bool)uVar1) {
    return (undefined8 *)0x113818490;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10528817c; end: 105288337;  */

undefined8 * FUN_10528817c(undefined8 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *extraout_x8;
  long lVar7;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_118;
  undefined2 uStack_110;
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
  if ((bRam00000001138184d0 & 1) == 0) {
    param_1 = (undefined8 *)0x1138184d0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_FeedUpdateMetadata");
      pcVar4 = "streamingUpdateEnd";
      func_0x0001003a83dc(auStack_b0,"streamingUpdateEnd");
      FUN_105288360();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar4);
      pcVar4 = "feedUpdateTriggerType";
      func_0x0001003a83dc(auStack_b8,"feedUpdateTriggerType");
      FUN_1052883bc();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar4);
      pcVar4 = "updateOperationIds";
      func_0x0001003a83dc(auStack_c0,"updateOperationIds");
      func_0x000104bef3dc();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar4);
      pcVar4 = "paginationUpdate";
      func_0x0001003a83dc(auStack_c8,"paginationUpdate");
      FUN_105288418();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar4);
      pcVar4 = "feedUpdateTypeMetadata";
      func_0x0001003a83dc(auStack_d0,"feedUpdateTypeMetadata");
      FUN_105288474();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138184c0,auStack_a8,0,auStack_a0,5);
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
      param_1 = (undefined8 *)0x1138184d0;
      ___cxa_guard_release();
    }
  }
  func_0x0001052884e0(uStack_28);
  if ((bool)in_ZR) {
    return (undefined8 *)0x1138184c0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (*(char *)(param_1 + 2) != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_d8 = FUN_105288338;
  uStack_108 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_e0 = &stack0xfffffffffffffff0;
  FUN_105287ab4();
  func_0x0001003b2110(auStack_138,0x113818498);
  uStack_128 = *param_1;
  uStack_120 = 5;
  uStack_118 = *(undefined1 *)(param_1 + 1);
  uStack_110 = 7;
  func_0x000104bdb9bc(&uStack_130,auStack_138,&uStack_128,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_128 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar3 = &uStack_130;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = &uStack_130;
  func_0x000104bdbf78();
  FUN_105287be4(uStack_108);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_128 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_148 = FUN_105287ab4;
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = &uStack_128;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_e0;
  if ((bRam00000001138184a0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1138184a0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_1a0,"_djinni_record_FeedPaginationUpdate");
      pcVar4 = "timestamp";
      func_0x0001003a83dc(auStack_1a8,"timestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_198,auStack_1a8,pcVar4);
      pcVar4 = "hasMore";
      func_0x0001003a83dc(auStack_1b0,"hasMore");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_180,auStack_1b0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818490,auStack_1a0,0,auStack_198,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_198 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      func_0x0001003a8c94(auStack_1a0);
      puVar3 = (undefined8 *)0x1138184a0;
      ___cxa_guard_release(0x1138184a0);
    }
  }
  FUN_105287be4(uStack_168);
  if ((bool)uVar1) {
    return (undefined8 *)0x113818490;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 105288338; end: 10528835f;  */

undefined8 * FUN_105288338(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  undefined8 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (*(char *)(param_2 + 2) != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105287ab4();
  func_0x0001003b2110(auStack_68,0x113818498);
  uStack_58 = *param_2;
  uStack_50 = 5;
  uStack_48 = *(undefined1 *)(param_2 + 1);
  uStack_40 = 7;
  func_0x000104bdb9bc(&uStack_60,auStack_68,&uStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)&uStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = &uStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = &uStack_60;
  func_0x000104bdbf78();
  FUN_105287be4(uStack_38);
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
  pcStack_78 = FUN_105287ab4;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &uStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138184a0 & 1) == 0) {
    puVar3 = (undefined8 *)0x1138184a0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_FeedPaginationUpdate");
      pcVar4 = "timestamp";
      func_0x0001003a83dc(auStack_d8,"timestamp");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "hasMore";
      func_0x0001003a83dc(auStack_e0,"hasMore");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818490,auStack_d0,0,auStack_c8,2);
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
      puVar3 = (undefined8 *)0x1138184a0;
      ___cxa_guard_release(0x1138184a0);
    }
  }
  FUN_105287be4(uStack_98);
  if ((bool)uVar1) {
    return (undefined8 *)0x113818490;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 105288360; end: 1052883bb;  */

undefined8 FUN_105288360(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc48 & 1) == 0) {
    iVar1 = 0x130cbc48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x000104bef4f0();
      func_0x00010b990784(0x1130cbc38);
      ___cxa_guard_release(0x1130cbc48);
    }
  }
  return 0x1130cbc38;
}



/* Entry: 1052883bc; end: 105288417;  */

undefined8 FUN_1052883bc(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc00 & 1) == 0) {
    iVar1 = 0x130cbc00;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105287e98();
      func_0x00010b990784(0x1130cbbf0);
      ___cxa_guard_release(0x1130cbc00);
    }
  }
  return 0x1130cbbf0;
}



/* Entry: 105288418; end: 105288473;  */

undefined8 FUN_105288418(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc18 & 1) == 0) {
    iVar1 = 0x130cbc18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105287ab4();
      func_0x00010b990784(0x1130cbc08);
      ___cxa_guard_release(0x1130cbc18);
    }
  }
  return 0x1130cbc08;
}



/* Entry: 105288474; end: 1052884cf;  */

undefined8 FUN_105288474(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc30 & 1) == 0) {
    iVar1 = 0x130cbc30;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528860c();
      func_0x00010b990784(0x1130cbc20);
      ___cxa_guard_release(0x1130cbc30);
    }
  }
  return 0x1130cbc20;
}



/* Entry: 1052884d0; end: 1052884f3;  */

void FUN_1052884d0(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 1052884f4; end: 10528860b;  */

undefined1 * FUN_1052884f4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined8 uStack_198;
  long lStack_190;
  undefined1 *puStack_188;
  undefined1 ***pppuStack_180;
  code *pcStack_178;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined2 uStack_150;
  undefined1 auStack_148 [16];
  undefined4 uStack_138;
  undefined2 uStack_130;
  undefined1 auStack_128 [8];
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
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
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528860c();
  func_0x0001003b2110(auStack_68,0x1138184e0);
  FUN_10528873c(auStack_58,param_2);
  func_0x000105288750(auStack_48,param_2 + 0x78);
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
  func_0x00010528882c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_78 = FUN_10528860c;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138184e8 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138184e8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_FeedUpdateTypeMetadata");
      pcVar5 = "syncMetadata";
      func_0x0001003a83dc(auStack_d8,"syncMetadata");
      FUN_105288764();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "prefetchMetadata";
      func_0x0001003a83dc(auStack_e0,"prefetchMetadata");
      FUN_1052887c0();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138184d8,auStack_d0,0,auStack_c8,2);
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
      puVar4 = (undefined1 *)0x1138184e8;
      ___cxa_guard_release();
    }
  }
  func_0x00010528882c(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138184d8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (puVar4[0x70] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_e8 = FUN_10528873c;
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &puStack_80;
  FUN_10529d6b4();
  func_0x0001003b2110(auStack_168,0x113818c78);
  auStack_158[0] = *puVar4;
  uStack_150 = 7;
  FUN_10529cccc(auStack_148,puVar4 + 8);
  uStack_138 = *(undefined4 *)(puVar4 + 0x68);
  uStack_130 = 4;
  auStack_128[0] = puVar4[0x6c];
  uStack_120 = 7;
  func_0x000104bdb9bc(auStack_160,auStack_168,auStack_158,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_158 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_168);
  puVar4 = auStack_160;
  func_0x00010b9a8f60(extraout_x8);
  puVar2 = auStack_160;
  func_0x000104bdbf78();
  FUN_10529d840(uStack_118);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_128;
  lVar8 = -0x40;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_168);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_178 = FUN_10529d6b4;
  uStack_198 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = lVar8;
  puStack_188 = puVar2;
  pppuStack_180 = &ppuStack_f0;
  if ((bRam0000000113818c80 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818c80;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_200,"_djinni_record_SyncFeedUpdateMetadata");
      pcVar5 = "resetFeed";
      func_0x0001003a83dc(auStack_208,"resetFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1f8,auStack_208,pcVar5);
      pcVar5 = "syncMetadata";
      func_0x0001003a83dc(auStack_210,"syncMetadata");
      FUN_10529ce1c();
      func_0x0001003b1b50(auStack_1e0,auStack_210,pcVar5);
      pcVar5 = "analyticsScenario";
      func_0x0001003a83dc(auStack_218,"analyticsScenario");
      FUN_105287f4c();
      func_0x0001003b1b50(auStack_1c8,auStack_218,pcVar5);
      pcVar5 = "queryTriggered";
      func_0x0001003a83dc(auStack_220,"queryTriggered");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1b0,auStack_220,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818c70,auStack_200,0,auStack_1f8,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_1f8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_220);
      func_0x0001003a8c94(auStack_218);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      func_0x0001003a8c94(auStack_200);
      puVar4 = (undefined1 *)0x113818c80;
      ___cxa_guard_release(0x113818c80);
    }
  }
  FUN_10529d840(uStack_198);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818c70;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 10528860c; end: 10528873b;  */

undefined1 * FUN_10528860c(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  long lStack_120;
  undefined1 *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined2 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138184e8 & 1) == 0) {
    param_1 = (undefined1 *)0x1138184e8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_FeedUpdateTypeMetadata");
      pcVar2 = "syncMetadata";
      func_0x0001003a83dc(auStack_68,"syncMetadata");
      FUN_105288764();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "prefetchMetadata";
      func_0x0001003a83dc(auStack_70,"prefetchMetadata");
      FUN_1052887c0();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138184d8,auStack_60,0,auStack_58,2);
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
      param_1 = (undefined1 *)0x1138184e8;
      ___cxa_guard_release();
    }
  }
  func_0x00010528882c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138184d8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (param_1[0x70] != '\x01') {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_78 = FUN_10528873c;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_10529d6b4();
  func_0x0001003b2110(auStack_f8,0x113818c78);
  auStack_e8[0] = *param_1;
  uStack_e0 = 7;
  FUN_10529cccc(auStack_d8,param_1 + 8);
  uStack_c8 = *(undefined4 *)(param_1 + 0x68);
  uStack_c0 = 4;
  auStack_b8[0] = param_1[0x6c];
  uStack_b0 = 7;
  func_0x000104bdb9bc(auStack_f0,auStack_f8,auStack_e8,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_e8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_f8);
  puVar5 = auStack_f0;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_f0;
  func_0x000104bdbf78();
  FUN_10529d840(uStack_a8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_b8;
  lVar8 = -0x40;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)puVar5;
    puVar4 = puVar4 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_f8);
  puVar5 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_108 = FUN_10529d6b4;
  uStack_128 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_120 = lVar8;
  puStack_118 = puVar3;
  ppuStack_110 = &puStack_80;
  if ((bRam0000000113818c80 & 1) == 0) {
    puVar5 = (undefined1 *)0x113818c80;
    ___cxa_guard_acquire();
    if ((int)puVar5 != 0) {
      func_0x0001003a83dc(auStack_190,"_djinni_record_SyncFeedUpdateMetadata");
      pcVar2 = "resetFeed";
      func_0x0001003a83dc(auStack_198,"resetFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_188,auStack_198,pcVar2);
      pcVar2 = "syncMetadata";
      func_0x0001003a83dc(auStack_1a0,"syncMetadata");
      FUN_10529ce1c();
      func_0x0001003b1b50(auStack_170,auStack_1a0,pcVar2);
      pcVar2 = "analyticsScenario";
      func_0x0001003a83dc(auStack_1a8,"analyticsScenario");
      FUN_105287f4c();
      func_0x0001003b1b50(auStack_158,auStack_1a8,pcVar2);
      pcVar2 = "queryTriggered";
      func_0x0001003a83dc(auStack_1b0,"queryTriggered");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_140,auStack_1b0,pcVar2);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818c70,auStack_190,0,auStack_188,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(auStack_188 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      func_0x0001003a8c94(auStack_1a0);
      func_0x0001003a8c94(auStack_198);
      func_0x0001003a8c94(auStack_190);
      puVar5 = (undefined1 *)0x113818c80;
      ___cxa_guard_release(0x113818c80);
    }
  }
  FUN_10529d840(uStack_128);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818c70;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar5;
}



/* Entry: 10528873c; end: 105288763;  */

undefined1 * FUN_10528873c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
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
  undefined1 auStack_78 [8];
  undefined2 uStack_70;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  if (param_2[0x70] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10529d6b4();
  func_0x0001003b2110(auStack_88,0x113818c78);
  auStack_78[0] = *param_2;
  uStack_70 = 7;
  FUN_10529cccc(auStack_68,param_2 + 8);
  uStack_58 = *(undefined4 *)(param_2 + 0x68);
  uStack_50 = 4;
  auStack_48[0] = param_2[0x6c];
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_10529d840(uStack_38);
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
  __Unwind_Resume(puVar2);
  pcStack_98 = FUN_10529d6b4;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_b0 = lVar8;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818c80 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818c80;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_SyncFeedUpdateMetadata");
      pcVar5 = "resetFeed";
      func_0x0001003a83dc(auStack_128,"resetFeed");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "syncMetadata";
      func_0x0001003a83dc(auStack_130,"syncMetadata");
      FUN_10529ce1c();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "analyticsScenario";
      func_0x0001003a83dc(auStack_138,"analyticsScenario");
      FUN_105287f4c();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "queryTriggered";
      func_0x0001003a83dc(auStack_140,"queryTriggered");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818c70,auStack_120,0,auStack_118,4);
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
      puVar4 = (undefined1 *)0x113818c80;
      ___cxa_guard_release(0x113818c80);
    }
  }
  FUN_10529d840(uStack_b8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818c70;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105288764; end: 1052887bf;  */

undefined8 FUN_105288764(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc60 & 1) == 0) {
    iVar1 = 0x130cbc60;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529d6b4();
      func_0x00010b990784(0x1130cbc50);
      ___cxa_guard_release(0x1130cbc60);
    }
  }
  return 0x1130cbc50;
}



/* Entry: 1052887c0; end: 10528881b;  */

undefined8 FUN_1052887c0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc78 & 1) == 0) {
    iVar1 = 0x130cbc78;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105297260();
      func_0x00010b990784(0x1130cbc68);
      ___cxa_guard_release(0x1130cbc78);
    }
  }
  return 0x1130cbc68;
}



/* Entry: 10528881c; end: 10528883f;  */

void FUN_10528881c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105288840; end: 105288a0f;  */

void FUN_105288840(ulong param_1)

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
  
  func_0x000105288c58();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138184f0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138184f0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_105288890;
  if ((bRam0000000113818520 & 1) == 0) goto LAB_1052888ac;
  while( true ) {
    func_0x000108b80888(0x113818510);
LAB_105288890:
    func_0x000105288c30();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052888ac:
    iVar2 = 0x13818520;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_105288aac();
      pcVar3 = "onFetchConversationComplete";
      func_0x0001003a83dc(&uStack_80,"onFetchConversationComplete");
      func_0x0001003b166c(auStack_a0);
      FUN_105281d50();
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
      func_0x000104bdbd44(0x113818510,0x113818528,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000105288c48(auStack_b8);
      func_0x000105288c48(auStack_78);
      func_0x000105288c48(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x000105288c48(auStack_90);
      func_0x000105288c48(auStack_68);
      func_0x000105288c48(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818520);
    }
  }
  return;
}



/* Entry: 105288a10; end: 105288aab;  */

undefined8 FUN_105288a10(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818508 & 1) == 0) {
    iVar4 = 0x13818508;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_105288aac();
      lStack_20 = lRam0000000113818528;
      if (lRam0000000113818528 != 0) {
        piVar1 = (int *)(lRam0000000113818528 + 8);
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
      func_0x0001003ad9a4(0x1138184f8,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818508);
    }
  }
  return 0x1138184f8;
}



/* Entry: 105288aac; end: 105288aff;  */

void FUN_105288aac(void)

{
  int iVar1;
  
  if ((bRam0000000113818530 & 1) == 0) {
    iVar1 = 0x13818530;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818528,"_djinni_interface_FetchConversationCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818530);
      return;
    }
  }
  return;
}



/* Entry: 105288b00; end: 105288b77;  */

undefined1 * FUN_105288b00(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x000105288c58();
  FUN_1052817c0(auStack_38,param_2);
  uVar2 = 0;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x000105288c50();
  func_0x000105288c30();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105288c50();
    __Unwind_Resume(puVar1);
    func_0x000105288c58();
    uStack_80 = 4;
    auStack_88[0] = uVar2;
    func_0x000104be6a78(auStack_98,puVar1 + 8,1,auStack_88,1);
    puVar1 = auStack_98;
    func_0x00010b9a8d98();
    func_0x000105288c50();
    func_0x000105288c30();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105288c50();
      __Unwind_Resume(puVar1);
      func_0x000105288c68();
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 105288b78; end: 105288be3;  */

undefined1 * FUN_105288b78(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  
  auStack_38[0] = param_2;
  func_0x000105288c58();
  uStack_30 = 4;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x000105288c50();
  func_0x000105288c30();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000105288c50();
  __Unwind_Resume(puVar1);
  func_0x000105288c68();
  return puVar1;
}



/* Entry: 105288be4; end: 105288c23;  */

void FUN_105288be4(void)

{
  func_0x000105288c68();
  return;
}



/* Entry: 105288c24; end: 105288c7f;  */

undefined8 * FUN_105288c24(undefined8 *param_1)

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



/* Entry: 105288c80; end: 105288ef7;  */

void FUN_105288c80(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x0001052891e8();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1136b9840);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1136b9840) = 1;
  uStack_38 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_105288cd4;
  if ((bRam00000001136b9848 & 1) == 0) goto LAB_105288cf8;
  while( true ) {
    func_0x000108b80888(0x1136b9850);
LAB_105288cd4:
    func_0x0001052891d4(uStack_38);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_105288cf8:
    iVar2 = 0x136b9848;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_105288f94();
      func_0x0001003a83dc(&uStack_c8,"onServerRequest");
      func_0x0001003b166c(auStack_e8);
      func_0x000104bdbd48(auStack_d8,auStack_e8,0,0);
      uStack_80 = uStack_c8;
      uStack_c8 = 0;
      func_0x0001003aef98(auStack_78,auStack_d8);
      pcVar3 = "onFetchConversationWithMessagesComplete";
      func_0x0001003a83dc(&uStack_f0,"onFetchConversationWithMessagesComplete");
      func_0x0001003b166c(auStack_110);
      FUN_105281d50();
      puVar4 = auStack_b0;
      func_0x0001003adcc0(puVar4,pcVar3);
      func_0x000104be7878();
      puVar5 = auStack_a0;
      func_0x0001003adcc0(puVar5,puVar4);
      func_0x000104bef4f0();
      func_0x0001003adcc0(auStack_90,puVar5);
      func_0x000104bdbd48(auStack_100,auStack_110,auStack_b0,3);
      uStack_68 = uStack_f0;
      uStack_f0 = 0;
      func_0x0001003aef98(auStack_60,auStack_100);
      puVar6 = &DAT_10f6846a0;
      func_0x0001003a83dc(&uStack_118,&DAT_10f6846a0);
      func_0x0001003b166c(auStack_138);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_c0,puVar6);
      func_0x000104bdbd48(auStack_128,auStack_138,auStack_c0,1);
      uStack_50 = uStack_118;
      uStack_118 = 0;
      func_0x0001003aef98(auStack_48,auStack_128);
      func_0x000104bdbd44(0x1136b9850,0x113818550,1,&uStack_80,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_78 + lVar7 + -8);
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x18);
      func_0x0001052891cc(auStack_128);
      func_0x0001052891cc(auStack_c0);
      func_0x0001052891cc(auStack_138);
      func_0x0001003a8c94(&uStack_118);
      func_0x0001052891cc(auStack_100);
      lVar7 = 0x28;
      do {
        func_0x0001003adc18(auStack_b0 + lVar7);
        lVar7 = lVar7 + -0x10;
        in_ZR = lVar7 == -8;
      } while (!(bool)in_ZR);
      func_0x0001052891cc(auStack_110);
      func_0x0001003a8c94(&uStack_f0);
      func_0x0001052891cc(auStack_d8);
      func_0x0001052891cc(auStack_e8);
      func_0x0001003a8c94(&uStack_c8);
      ___cxa_guard_release(0x1136b9848);
    }
  }
  return;
}



/* Entry: 105288ef8; end: 105288f93;  */

undefined8 FUN_105288ef8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818548 & 1) == 0) {
    iVar4 = 0x13818548;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_105288f94();
      lStack_20 = lRam0000000113818550;
      if (lRam0000000113818550 != 0) {
        piVar1 = (int *)(lRam0000000113818550 + 8);
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
      func_0x0001003ad9a4(0x113818538,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818548);
    }
  }
  return 0x113818538;
}



/* Entry: 105288f94; end: 10528901f;  */

void FUN_105288f94(void)

{
  int iVar1;
  
  if ((bRam0000000113818558 & 1) == 0) {
    iVar1 = 0x13818558;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818550,"_djinni_interface_FetchConversationWithMessagesCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818558);
      return;
    }
  }
  return;
}



/* Entry: 105289020; end: 105289107;  */

undefined1 * FUN_105289020(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar6;
  undefined1 auStack_c8 [16];
  undefined4 auStack_b8 [2];
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001052891e8();
  uStack_38 = extraout_x8;
  FUN_1052817c0(auStack_68,param_2);
  func_0x000104be6c64(auStack_58,param_3);
  uStack_40 = 7;
  uVar5 = 1;
  auStack_48[0] = param_4;
  func_0x000104be6a78(auStack_78,param_1 + 8,1,auStack_68,3);
  func_0x00010b9a8d98(auStack_78);
  lVar6 = 0x20;
  do {
    puVar3 = auStack_68 + lVar6;
    func_0x00010b9a8d98();
    lVar6 = lVar6 + -0x10;
    bVar1 = lVar6 == -0x10;
  } while (!bVar1);
  func_0x0001052891d4(uStack_38);
  if (bVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar6 = -0x30;
  do {
    func_0x00010b9a8d98(puVar4);
    auStack_b8[0] = (undefined4)uVar5;
    puVar4 = puVar4 + -0x10;
    lVar6 = lVar6 + 0x10;
    uVar2 = lVar6 == 0;
  } while (!(bool)uVar2);
  puVar4 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_88 = FUN_105289108;
  lStack_a0 = lVar6;
  puStack_98 = puVar3;
  puStack_90 = &stack0xfffffffffffffff0;
  func_0x0001052891e8();
  uStack_b0 = 4;
  uStack_a8 = extraout_x8_00;
  func_0x000104be6a78(auStack_c8,puVar4 + 8,2,auStack_b8,1);
  puVar3 = auStack_c8;
  func_0x00010b9a8d98();
  func_0x0001052891f8();
  func_0x0001052891d4(uStack_a8);
  if ((bool)uVar2) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x0001052891f8();
  __Unwind_Resume(puVar3);
  func_0x000105289200();
  return puVar3;
}



/* Entry: 105289108; end: 10528917f;  */

undefined1 * FUN_105289108(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  auStack_38[0] = param_2;
  func_0x0001052891e8();
  uStack_30 = 4;
  uStack_28 = extraout_x8;
  func_0x000104be6a78(auStack_48,param_1 + 8,2,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x0001052891f8();
  func_0x0001052891d4(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001052891f8();
  __Unwind_Resume(puVar1);
  func_0x000105289200();
  return puVar1;
}



/* Entry: 105289180; end: 1052891bf;  */

void FUN_105289180(void)

{
  func_0x000105289200();
  return;
}



/* Entry: 1052891c0; end: 10528920b;  */

undefined8 * FUN_1052891c0(undefined8 *param_1)

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



/* Entry: 10528920c; end: 1052893df;  */

void FUN_10528920c(ulong param_1)

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
  
  func_0x00010528973c();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818560);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818560) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_10528925c;
  if ((bRam0000000113818590 & 1) == 0) goto LAB_10528927c;
  while( true ) {
    func_0x000108b80888(0x113818580);
LAB_10528925c:
    func_0x000105289720(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10528927c:
    iVar2 = 0x13818590;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10528947c();
      pcVar3 = "onFetchConversationsComplete";
      func_0x0001003a83dc(&uStack_80,"onFetchConversationsComplete");
      func_0x0001003b166c(auStack_a0);
      FUN_1052896c4();
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
      func_0x000104bdbd44(0x113818580,0x113818598,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000105289734(auStack_b8);
      func_0x000105289734(auStack_78);
      func_0x000105289734(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x000105289734(auStack_90);
      func_0x000105289734(auStack_68);
      func_0x000105289734(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818590);
    }
  }
  return;
}



/* Entry: 1052893e0; end: 10528947b;  */

undefined8 FUN_1052893e0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818578 & 1) == 0) {
    iVar4 = 0x13818578;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10528947c();
      lStack_20 = lRam0000000113818598;
      if (lRam0000000113818598 != 0) {
        piVar1 = (int *)(lRam0000000113818598 + 8);
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
      func_0x0001003ad9a4(0x113818568,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818578);
    }
  }
  return 0x113818568;
}



/* Entry: 10528947c; end: 1052894cf;  */

void FUN_10528947c(void)

{
  int iVar1;
  
  if ((bRam00000001138185a0 & 1) == 0) {
    iVar1 = 0x138185a0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818598,"_djinni_interface_FetchConversationsCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138185a0);
      return;
    }
  }
  return;
}



/* Entry: 1052894d0; end: 1052895f7;  */

undefined4 * FUN_1052894d0(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c8 [16];
  undefined4 auStack_b8 [2];
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined4 auStack_58 [4];
  undefined8 uStack_48;
  
  plVar6 = param_2;
  func_0x00010528973c();
  uStack_48 = extraout_x8;
  func_0x00010b9abe10(&lStack_60,(plVar6[1] - *plVar6) / 0x428);
  lVar7 = 0;
  uVar8 = 0;
  lVar9 = 0x18;
  while( true ) {
    uVar1 = (param_2[1] - *param_2) / 0x428;
    uVar2 = uVar8 == uVar1;
    if (uVar1 <= uVar8) break;
    FUN_1052817c0(auStack_70,*param_2 + lVar7);
    func_0x00010b9a9020(lStack_60 + lVar9,auStack_70);
    func_0x00010b9a8d98(auStack_70);
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
    lVar7 = lVar7 + 0x428;
  }
  func_0x00010b9a8f84(auStack_58,&lStack_60);
  func_0x000104bddf38(&lStack_60);
  uVar5 = 0;
  func_0x000104be6a78(auStack_80,param_1 + 8,0,auStack_58,1);
  func_0x00010b9a8d98(auStack_80);
  puVar3 = auStack_58;
  func_0x00010b9a8d98();
  func_0x000105289720(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b9a8d98(auStack_58);
    puVar4 = puVar3;
    __Unwind_Resume(puVar3);
    pcStack_88 = FUN_1052895f8;
    plStack_a0 = param_2;
    puStack_98 = puVar3;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010528973c();
    uStack_b0 = 4;
    auStack_b8[0] = uVar5;
    uStack_a8 = extraout_x8_00;
    func_0x000104be6a78(auStack_c8,puVar4 + 2,1,auStack_b8,1);
    func_0x00010b9a8d98(auStack_c8);
    puVar3 = auStack_b8;
    func_0x00010b9a8d98();
    func_0x000105289720(uStack_a8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x00010b9a8d98(auStack_b8);
      __Unwind_Resume(puVar3);
      func_0x00010528974c();
      return puVar3;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 1052895f8; end: 105289677;  */

undefined4 * FUN_1052895f8(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  auStack_38[0] = param_2;
  func_0x00010528973c();
  uStack_30 = 4;
  uStack_28 = extraout_x8;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98();
  func_0x000105289720(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  func_0x00010528974c();
  return puVar1;
}



/* Entry: 105289678; end: 1052896b7;  */

void FUN_105289678(void)

{
  func_0x00010528974c();
  return;
}



/* Entry: 1052896b8; end: 1052896c3;  */

undefined8 * FUN_1052896b8(undefined8 *param_1)

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



/* Entry: 1052896c4; end: 10528971f;  */

undefined8 FUN_1052896c4(void)

{
  int iVar1;
  
  if ((bRam00000001130cbc90 & 1) == 0) {
    iVar1 = 0x130cbc90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105281d50();
      func_0x00010b990868(0x1130cbc80);
      ___cxa_guard_release(0x1130cbc90);
    }
  }
  return 0x1130cbc80;
}



/* Entry: 105289720; end: 105289757;  */

void FUN_105289720(void)

{
  return;
}



/* Entry: 105289758; end: 105289927;  */

void FUN_105289758(ulong param_1)

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
  
  func_0x000105289b70();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138185a8);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138185a8) = 1;
  if ((bVar1 & 1) != 0) goto LAB_1052897a8;
  if ((bRam00000001138185d8 & 1) == 0) goto LAB_1052897c4;
  while( true ) {
    func_0x000108b80888(0x1138185c8);
LAB_1052897a8:
    func_0x000105289b48();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_1052897c4:
    iVar2 = 0x138185d8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_1052899c4();
      pcVar3 = "onFetchMessagesComplete";
      func_0x0001003a83dc(&uStack_80,"onFetchMessagesComplete");
      func_0x0001003b166c(auStack_a0);
      func_0x000104be7878();
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
      func_0x000104bdbd44(0x1138185c8,0x1138185e0,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000105289b60(auStack_b8);
      func_0x000105289b60(auStack_78);
      func_0x000105289b60(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x000105289b60(auStack_90);
      func_0x000105289b60(auStack_68);
      func_0x000105289b60(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x1138185d8);
    }
  }
  return;
}



/* Entry: 105289928; end: 1052899c3;  */

undefined8 FUN_105289928(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam00000001138185c0 & 1) == 0) {
    iVar4 = 0x138185c0;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_1052899c4();
      lStack_20 = lRam00000001138185e0;
      if (lRam00000001138185e0 != 0) {
        piVar1 = (int *)(lRam00000001138185e0 + 8);
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
      func_0x0001003ad9a4(0x1138185b0,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x1138185c0);
    }
  }
  return 0x1138185b0;
}



/* Entry: 1052899c4; end: 105289a17;  */

void FUN_1052899c4(void)

{
  int iVar1;
  
  if ((bRam00000001138185e8 & 1) == 0) {
    iVar1 = 0x138185e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138185e0,"_djinni_interface_FetchMessagesCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138185e8);
      return;
    }
  }
  return;
}



/* Entry: 105289a18; end: 105289a8f;  */

undefined1 * FUN_105289a18(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x000105289b70();
  func_0x000104be6c64(auStack_38,param_2);
  uVar2 = 0;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x000105289b68();
  func_0x000105289b48();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105289b68();
    __Unwind_Resume(puVar1);
    func_0x000105289b70();
    uStack_80 = 4;
    auStack_88[0] = uVar2;
    func_0x000104be6a78(auStack_98,puVar1 + 8,1,auStack_88,1);
    puVar1 = auStack_98;
    func_0x00010b9a8d98();
    func_0x000105289b68();
    func_0x000105289b48();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105289b68();
      __Unwind_Resume(puVar1);
      func_0x000105289b80();
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 105289a90; end: 105289afb;  */

undefined1 * FUN_105289a90(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  
  auStack_38[0] = param_2;
  func_0x000105289b70();
  uStack_30 = 4;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x000105289b68();
  func_0x000105289b48();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000105289b68();
  __Unwind_Resume(puVar1);
  func_0x000105289b80();
  return puVar1;
}



/* Entry: 105289afc; end: 105289b3b;  */

void FUN_105289afc(void)

{
  func_0x000105289b80();
  return;
}



/* Entry: 105289b3c; end: 105289b97;  */

undefined8 * FUN_105289b3c(undefined8 *param_1)

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



/* Entry: 105289b98; end: 105289d67;  */

void FUN_105289b98(ulong param_1)

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
  
  func_0x000105289fb0();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x1138185f0);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x1138185f0) = 1;
  if ((bVar1 & 1) != 0) goto LAB_105289be8;
  if ((bRam0000000113818620 & 1) == 0) goto LAB_105289c04;
  while( true ) {
    func_0x000108b80888(0x113818610);
LAB_105289be8:
    func_0x000105289f88();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_105289c04:
    iVar2 = 0x13818620;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_105289e04();
      pcVar3 = "onFetchServerIdentifierComplete";
      func_0x0001003a83dc(&uStack_80,"onFetchServerIdentifierComplete");
      func_0x0001003b166c(auStack_a0);
      FUN_10529a9e4();
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
      func_0x000104bdbd44(0x113818610,0x113818628,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x000105289fa0(auStack_b8);
      func_0x000105289fa0(auStack_78);
      func_0x000105289fa0(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x000105289fa0(auStack_90);
      func_0x000105289fa0(auStack_68);
      func_0x000105289fa0(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818620);
    }
  }
  return;
}



/* Entry: 105289d68; end: 105289e03;  */

undefined8 FUN_105289d68(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818608 & 1) == 0) {
    iVar4 = 0x13818608;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_105289e04();
      lStack_20 = lRam0000000113818628;
      if (lRam0000000113818628 != 0) {
        piVar1 = (int *)(lRam0000000113818628 + 8);
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
      func_0x0001003ad9a4(0x1138185f8,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818608);
    }
  }
  return 0x1138185f8;
}



/* Entry: 105289e04; end: 105289e57;  */

void FUN_105289e04(void)

{
  int iVar1;
  
  if ((bRam0000000113818630 & 1) == 0) {
    iVar1 = 0x13818630;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818628,"_djinni_interface_FetchServerMessageIdentifierCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818630);
      return;
    }
  }
  return;
}



/* Entry: 105289e58; end: 105289ecf;  */

undefined1 * FUN_105289e58(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x000105289fb0();
  FUN_10529a8dc(auStack_38,param_2);
  uVar2 = 0;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x000105289fa8();
  func_0x000105289f88();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000105289fa8();
    __Unwind_Resume(puVar1);
    func_0x000105289fb0();
    uStack_80 = 4;
    auStack_88[0] = uVar2;
    func_0x000104be6a78(auStack_98,puVar1 + 8,1,auStack_88,1);
    puVar1 = auStack_98;
    func_0x00010b9a8d98();
    func_0x000105289fa8();
    func_0x000105289f88();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x000105289fa8();
      __Unwind_Resume(puVar1);
      func_0x000105289fc0();
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 105289ed0; end: 105289f3b;  */

undefined1 * FUN_105289ed0(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  
  auStack_38[0] = param_2;
  func_0x000105289fb0();
  uStack_30 = 4;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x000105289fa8();
  func_0x000105289f88();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x000105289fa8();
  __Unwind_Resume(puVar1);
  func_0x000105289fc0();
  return puVar1;
}



/* Entry: 105289f3c; end: 105289f7b;  */

void FUN_105289f3c(void)

{
  func_0x000105289fc0();
  return;
}



/* Entry: 105289f7c; end: 105289fd7;  */

undefined8 * FUN_105289f7c(undefined8 *param_1)

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



/* Entry: 105289fd8; end: 10528a1a7;  */

void FUN_105289fd8(ulong param_1)

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
  
  func_0x00010528a3f0();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818638);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818638) = 1;
  if ((bVar1 & 1) != 0) goto LAB_10528a028;
  if ((bRam0000000113818668 & 1) == 0) goto LAB_10528a044;
  while( true ) {
    func_0x000108b80888(0x113818658);
LAB_10528a028:
    func_0x00010528a3c8();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10528a044:
    iVar2 = 0x13818668;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10528a244();
      pcVar3 = "onSuccess";
      func_0x0001003a83dc(&uStack_80,"onSuccess");
      func_0x0001003b166c(auStack_a0);
      FUN_105281d50();
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
      func_0x000104bdbd44(0x113818658,0x113818670,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x00010528a3e0(auStack_b8);
      func_0x00010528a3e0(auStack_78);
      func_0x00010528a3e0(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x00010528a3e0(auStack_90);
      func_0x00010528a3e0(auStack_68);
      func_0x00010528a3e0(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818668);
    }
  }
  return;
}



/* Entry: 10528a1a8; end: 10528a243;  */

undefined8 FUN_10528a1a8(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818650 & 1) == 0) {
    iVar4 = 0x13818650;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10528a244();
      lStack_20 = lRam0000000113818670;
      if (lRam0000000113818670 != 0) {
        piVar1 = (int *)(lRam0000000113818670 + 8);
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
      func_0x0001003ad9a4(0x113818640,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818650);
    }
  }
  return 0x113818640;
}



/* Entry: 10528a244; end: 10528a297;  */

void FUN_10528a244(void)

{
  int iVar1;
  
  if ((bRam0000000113818678 & 1) == 0) {
    iVar1 = 0x13818678;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818670,"_djinni_interface_GetConversationCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818678);
      return;
    }
  }
  return;
}



/* Entry: 10528a298; end: 10528a30f;  */

undefined1 * FUN_10528a298(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x00010528a3f0();
  FUN_1052817c0(auStack_38,param_2);
  uVar2 = 0;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x00010528a3e8();
  func_0x00010528a3c8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010528a3e8();
    __Unwind_Resume(puVar1);
    func_0x00010528a3f0();
    uStack_80 = 4;
    auStack_88[0] = uVar2;
    func_0x000104be6a78(auStack_98,puVar1 + 8,1,auStack_88,1);
    puVar1 = auStack_98;
    func_0x00010b9a8d98();
    func_0x00010528a3e8();
    func_0x00010528a3c8();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010528a3e8();
      __Unwind_Resume(puVar1);
      func_0x00010528a400();
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 10528a310; end: 10528a37b;  */

undefined1 * FUN_10528a310(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  
  auStack_38[0] = param_2;
  func_0x00010528a3f0();
  uStack_30 = 4;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x00010528a3e8();
  func_0x00010528a3c8();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010528a3e8();
  __Unwind_Resume(puVar1);
  func_0x00010528a400();
  return puVar1;
}



/* Entry: 10528a37c; end: 10528a3bb;  */

void FUN_10528a37c(void)

{
  func_0x00010528a400();
  return;
}



/* Entry: 10528a3bc; end: 10528a417;  */

undefined8 * FUN_10528a3bc(undefined8 *param_1)

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



/* Entry: 10528a418; end: 10528a5eb;  */

void FUN_10528a418(ulong param_1)

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
  
  func_0x00010528a948();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818680);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818680) = 1;
  uStack_28 = extraout_x8;
  if ((bVar1 & 1) != 0) goto LAB_10528a468;
  if ((bRam00000001138186b0 & 1) == 0) goto LAB_10528a488;
  while( true ) {
    func_0x000108b80888(0x1138186a0);
LAB_10528a468:
    func_0x00010528a92c(uStack_28);
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_10528a488:
    iVar2 = 0x138186b0;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_10528a688();
      pcVar3 = "onSuccess";
      func_0x0001003a83dc(&uStack_80,"onSuccess");
      func_0x0001003b166c(auStack_a0);
      FUN_10528a8d0();
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
      func_0x000104bdbd44(0x1138186a0,0x1138186b8,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x00010528a940(auStack_b8);
      func_0x00010528a940(auStack_78);
      func_0x00010528a940(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x00010528a940(auStack_90);
      func_0x00010528a940(auStack_68);
      func_0x00010528a940(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x1138186b0);
    }
  }
  return;
}



/* Entry: 10528a5ec; end: 10528a687;  */

undefined8 FUN_10528a5ec(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818698 & 1) == 0) {
    iVar4 = 0x13818698;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_10528a688();
      lStack_20 = lRam00000001138186b8;
      if (lRam00000001138186b8 != 0) {
        piVar1 = (int *)(lRam00000001138186b8 + 8);
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
      func_0x0001003ad9a4(0x113818688,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818698);
    }
  }
  return 0x113818688;
}



/* Entry: 10528a688; end: 10528a6db;  */

void FUN_10528a688(void)

{
  int iVar1;
  
  if ((bRam00000001138186c0 & 1) == 0) {
    iVar1 = 0x138186c0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x1138186b8,"_djinni_interface_GetOneOnOneConversationIdsCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x1138186c0);
      return;
    }
  }
  return;
}



/* Entry: 10528a6dc; end: 10528a803;  */

undefined4 * FUN_10528a6dc(long param_1,long *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c8 [16];
  undefined4 auStack_b8 [2];
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined4 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined4 auStack_58 [4];
  undefined8 uStack_48;
  
  plVar6 = param_2;
  func_0x00010528a948();
  uStack_48 = extraout_x8;
  func_0x00010b9abe10(&lStack_60,(plVar6[1] - *plVar6) / 0x30);
  lVar7 = 0;
  uVar8 = 0;
  lVar9 = 0x18;
  while( true ) {
    uVar1 = (param_2[1] - *param_2) / 0x30;
    uVar2 = uVar8 == uVar1;
    if (uVar1 <= uVar8) break;
    FUN_10529ded8(auStack_70,*param_2 + lVar7);
    func_0x00010b9a9020(lStack_60 + lVar9,auStack_70);
    func_0x00010b9a8d98(auStack_70);
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 0x10;
    lVar7 = lVar7 + 0x30;
  }
  func_0x00010b9a8f84(auStack_58,&lStack_60);
  func_0x000104bddf38(&lStack_60);
  uVar5 = 0;
  func_0x000104be6a78(auStack_80,param_1 + 8,0,auStack_58,1);
  func_0x00010b9a8d98(auStack_80);
  puVar3 = auStack_58;
  func_0x00010b9a8d98();
  func_0x00010528a92c(uStack_48);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010b9a8d98(auStack_58);
    puVar4 = puVar3;
    __Unwind_Resume(puVar3);
    pcStack_88 = FUN_10528a804;
    plStack_a0 = param_2;
    puStack_98 = puVar3;
    puStack_90 = &stack0xfffffffffffffff0;
    func_0x00010528a948();
    uStack_b0 = 4;
    auStack_b8[0] = uVar5;
    uStack_a8 = extraout_x8_00;
    func_0x000104be6a78(auStack_c8,puVar4 + 2,1,auStack_b8,1);
    func_0x00010b9a8d98(auStack_c8);
    puVar3 = auStack_b8;
    func_0x00010b9a8d98();
    func_0x00010528a92c(uStack_a8);
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      func_0x00010b9a8d98(auStack_b8);
      __Unwind_Resume(puVar3);
      func_0x00010528a958();
      return puVar3;
    }
    return puVar3;
  }
  return puVar3;
}



/* Entry: 10528a804; end: 10528a883;  */

undefined4 * FUN_10528a804(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined4 *puVar1;
  undefined8 extraout_x8;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  auStack_38[0] = param_2;
  func_0x00010528a948();
  uStack_30 = 4;
  uStack_28 = extraout_x8;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  func_0x00010b9a8d98(auStack_48);
  puVar1 = auStack_38;
  func_0x00010b9a8d98();
  func_0x00010528a92c(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  __Unwind_Resume(puVar1);
  func_0x00010528a958();
  return puVar1;
}



/* Entry: 10528a884; end: 10528a8c3;  */

void FUN_10528a884(void)

{
  func_0x00010528a958();
  return;
}



/* Entry: 10528a8c4; end: 10528a8cf;  */

undefined8 * FUN_10528a8c4(undefined8 *param_1)

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



/* Entry: 10528a8d0; end: 10528a92b;  */

undefined8 FUN_10528a8d0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbca8 & 1) == 0) {
    iVar1 = 0x130cbca8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10529dff0();
      func_0x00010b990868(0x1130cbc98);
      ___cxa_guard_release(0x1130cbca8);
    }
  }
  return 0x1130cbc98;
}


