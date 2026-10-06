/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c4aae4; end: 108c4aaeb; -[SCNAtlasFollowerData bitmojiAvatarId] */

undefined8 FUN_108c4aae4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c4aaec; end: 108c4aaf3; -[SCNAtlasFollowerData bitmojiSelfieId] */

undefined8 FUN_108c4aaec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c4aaf4; end: 108c4aafb; -[SCNAtlasFollowerData snapLogoUrl] */

undefined8 FUN_108c4aaf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108c4aafc; end: 108c4ab03; -[SCNAtlasFollowerData followedTimeInEpochMillis] */

undefined8 FUN_108c4aafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 108c4ab04; end: 108c4ab4f; -[SCNAtlasFollowerData .cxx_destruct] */

void FUN_108c4ab04(long param_1)

{
  func_0x000108c4ab58(param_1 + 0x30);
  func_0x000108c4ab58(param_1 + 0x28);
  func_0x000108c4ab58(param_1 + 0x20);
  func_0x000108c4ab58(param_1 + 0x18);
  func_0x000108c4ab58(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c4ab50; end: 108c4ab5f;  */

void FUN_108c4ab50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c4ab60; end: 108c4ac03; -[SCNAtlasGetFollowersRequest initWithCursor:] */

undefined1 * FUN_108c4ab60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126fdee8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c4ac04; end: 108c4ac0b; -[SCNAtlasGetFollowersRequest cursor] */

undefined8 FUN_108c4ac04(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108c4ac0c; end: 108c4ac17; -[SCNAtlasGetFollowersRequest .cxx_destruct] */

void FUN_108c4ac0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c4ac18; end: 108c4acf3; -[SCNAtlasGetFollowersResponse initWithFollowers:cursor:] */

undefined1 *
FUN_108c4ac18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c4acf4; end: 108c4acfb; -[SCNAtlasGetFollowersResponse followers] */

undefined8 FUN_108c4acf4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108c4acfc; end: 108c4ad03; -[SCNAtlasGetFollowersResponse cursor] */

undefined8 FUN_108c4acfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c4ad04; end: 108c4ad33; -[SCNAtlasGetFollowersResponse .cxx_destruct] */

void FUN_108c4ad04(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c4ad34; end: 108c4ad7f; -[SCNAtlasSaturnCacheStateData initWithState:version:] */

void FUN_108c4ad34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126fdef8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 108c4ad80; end: 108c4ad87; -[SCNAtlasSaturnCacheStateData state] */

undefined8 FUN_108c4ad80(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108c4ad88; end: 108c4ad8f; -[SCNAtlasSaturnCacheStateData version] */

undefined8 FUN_108c4ad88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c4ad90; end: 108c4ae8f; -[SCNAtlasSaturnCalendarEventData initWithTitle:emoji:startTimeInEpochSeconds:durationInSeconds:cacheTtlExpiryInSeconds:] */

undefined1 *
FUN_108c4ad90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126fdf00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c4ae90; end: 108c4ae97; -[SCNAtlasSaturnCalendarEventData title] */

undefined8 FUN_108c4ae90(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108c4ae98; end: 108c4ae9f; -[SCNAtlasSaturnCalendarEventData emoji] */

undefined8 FUN_108c4ae98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108c4aea0; end: 108c4aea7; -[SCNAtlasSaturnCalendarEventData startTimeInEpochSeconds] */

undefined8 FUN_108c4aea0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108c4aea8; end: 108c4aeaf; -[SCNAtlasSaturnCalendarEventData durationInSeconds] */

undefined8 FUN_108c4aea8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108c4aeb0; end: 108c4aeb7; -[SCNAtlasSaturnCalendarEventData cacheTtlExpiryInSeconds] */

undefined8 FUN_108c4aeb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108c4aeb8; end: 108c4aee7; -[SCNAtlasSaturnCalendarEventData .cxx_destruct] */

void FUN_108c4aeb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108c4aee8; end: 108c4af3f;  */

void FUN_108c4aee8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110aba1a0;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108c4c31c();
    } while (extraout_w10 != 0);
  }
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000108c4c31c();
    } while (extraout_w10_00 != 0);
  }
  return;
}



/* Entry: 108c4af40; end: 108c4b047;  */

void FUN_108c4af40(undefined8 param_1,long param_2)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_31;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_2 + 8) == 0) || (*(long *)(param_2 + 0x18) == 0)) {
    func_0x00010882ab84(&lStack_30);
    uStack_31 = 0;
    func_0x000108654058(uStack_28,&uStack_28,&uStack_31);
    lStack_40 = lStack_30;
    if (lStack_30 != 0) {
      do {
        func_0x000108c4c120();
      } while (extraout_w10_00 != 0);
    }
    FUN_108c4b048(param_1,&lStack_40);
    func_0x000107c27f9c(&lStack_40);
    func_0x00010882abd0(&lStack_30);
  }
  else {
    lVar1 = param_2;
    func_0x000107c3a5c0();
    FUN_108c4b238(&lStack_30,param_2,lVar1);
    lStack_48 = lStack_30;
    if (lStack_30 != 0) {
      do {
        func_0x000108c4c120();
      } while (extraout_w10 != 0);
    }
    FUN_108c4b048(param_1,&lStack_48);
    func_0x000107c27f9c(&lStack_48);
    func_0x000107c27f9c(&lStack_30);
  }
  return;
}



/* Entry: 108c4b048; end: 108c4b1c3;  */

void FUN_108c4b048(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 **ppuVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined8 *puVar3;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  
  puVar1 = (undefined8 *)0xa0;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_110aba260;
  puVar3 = puVar1 + 3;
  puVar1[4] = 0x3cb0b1bb;
  *puVar3 = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0x32aaaba7;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puStack_a0 = puVar3;
  puStack_98 = puVar1;
  puStack_90 = puVar3;
  puStack_88 = puVar1;
  do {
    func_0x000108c4c31c();
  } while (extraout_w10 != 0);
  ppuStack_a8 = &PTR_FUN_110aba1f8;
  puStack_80 = puVar3;
  puStack_78 = puVar1;
  do {
    func_0x000108c4c31c();
  } while (extraout_w10_00 != 0);
  do {
    func_0x000108c4c31c();
  } while (extraout_w10_01 != 0);
  *param_1 = puVar3;
  param_1[1] = puVar1;
  ppuVar2 = &puStack_80;
  func_0x000108c3d890(ppuVar2);
  func_0x000107c3a5c0();
  lStack_e0 = *param_2;
  puStack_d0 = puVar3;
  puStack_c8 = puVar1;
  puStack_b8 = puVar1;
  puStack_c0 = puVar3;
  if (lStack_e0 != 0) {
    do {
      func_0x000108c4c120();
      puStack_d0 = puStack_a0;
      puStack_c8 = puStack_98;
      puStack_b8 = puStack_88;
      puStack_c0 = puStack_90;
    } while (extraout_w10_02 != 0);
  }
  puStack_a0 = (undefined8 *)0x0;
  puStack_98 = (undefined8 *)0x0;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  ppuStack_d8 = &PTR_FUN_110aba1f8;
  FUN_108c4bab8(&puStack_80,&lStack_e0);
  FUN_108c4b7d8(auStack_b0,&puStack_80,ppuVar2);
  FUN_108c4bb0c(&puStack_80);
  FUN_108c4bb0c(&lStack_e0);
  func_0x000107c27f9c(auStack_b0);
  FUN_108c4b658(&ppuStack_a8);
  return;
}



/* Entry: 108c4b1c4; end: 108c4b21f;  */

undefined8 FUN_108c4b1c4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar1 = 0;
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x20))();
      (**(code **)(**(long **)(param_1 + 0x18) + 0x38))();
      uVar1 = 1;
    }
  }
  return uVar1;
}



/* Entry: 108c4b220; end: 108c4b223;  */

undefined8 * FUN_108c4b220(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba1a0;
  func_0x000108c4b564(param_1 + 3);
  func_0x000108c4b58c(param_1 + 1);
  return param_1;
}



/* Entry: 108c4b224; end: 108c4b237;  */

void FUN_108c4b224(void)

{
  FUN_108c4b528();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4b238; end: 108c4b2cb;  */

void FUN_108c4b238(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  __Znwm();
  *puVar1 = FUN_108c4bf88;
  puVar1[1] = FUN_108c4c09c;
  puVar1[4] = param_2;
  func_0x000108653f98(puVar1 + 2);
  func_0x000108653ba0(param_1,puVar1 + 2);
  puVar1[5] = param_3;
  *(undefined1 *)(puVar1 + 7) = 0;
  func_0x000108c4c310(*(undefined8 *)(*(long *)*param_3 + 0x10));
  return;
}



/* Entry: 108c4b2cc; end: 108c4b527;  */

void FUN_108c4b2cc(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  byte *pbVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  ulong uVar6;
  ulong extraout_x8_03;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  
  lVar9 = *param_2;
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  *puVar2 = FUN_108c4be00;
  puVar2[1] = FUN_108c4bf5c;
  puVar2[6] = lVar9;
  func_0x000108653f98(puVar2 + 2);
  func_0x000108653ba0(param_1,puVar2 + 2);
  plVar3 = *(long **)(lVar9 + 8);
  func_0x000108c4c2dc();
  func_0x000108c4c280();
  do {
    func_0x000108c4c120();
  } while (extraout_w10 != 0);
  func_0x000108c4c244(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 7) = 0;
    func_0x000108c4c208();
    if (*plVar3 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar9 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000108c4c140();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x000108c4c1dc();
        plVar5 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x000108c4c340();
        if ((bool)in_ZR) {
          func_0x000108c4c150();
          func_0x000108c4c0d0();
          func_0x000108c4c0e0();
          plRam000000011340e280 = plVar3;
          *(long **)(lVar9 + 0x90) = plVar3;
        }
        func_0x000108c4c32c();
        goto LAB_108c4b4a0;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108c4c1cc();
  lVar9 = puVar2[6];
  func_0x000108c4c180();
  func_0x000108c4c168();
  pbVar4 = *(byte **)(lVar9 + 0x18);
  func_0x000108c4c2dc();
  func_0x000108c4c280();
  do {
    func_0x000108c4c120();
  } while (extraout_w10_02 != 0);
  func_0x000108c4c244(puVar2[4]);
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 7) = 1;
    func_0x000108c4c208();
    lVar8 = *(long *)pbVar4;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *(long *)pbVar4;
    }
    plVar3 = (long *)(lVar9 + 0x10);
    do {
      if (*plVar3 == 0) {
        func_0x000108c4c140();
        plVar3 = extraout_x8_02;
        uVar1 = extraout_w10_04;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x000108c4c1dc();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        pbVar10 = *(byte **)(lVar9 + 0x90);
        uVar6 = (ulong)pbVar10[1];
        if (pbVar10[1] == *pbVar10) {
          func_0x000108c4c150();
          func_0x000108c4c0d0();
          func_0x000108c4c0e0();
          *(byte **)(pbVar10 + 8) = pbVar4;
          *(byte **)(lVar9 + 0x90) = pbVar4;
          uVar6 = extraout_x8_03;
          pbVar10 = pbVar4;
        }
        uVar6 = uVar6 & 0xffffffff;
        pbVar4 = pbVar10 + uVar6 * 0x18 + 0x10;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        *(undefined8 **)(pbVar10 + uVar6 * 0x18 + 0x18) = puVar2;
        *(long *)(pbVar10 + uVar6 * 0x18 + 0x20) = lVar8;
LAB_108c4b4a0:
        func_0x000108c4c228();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x000108c4c1cc();
  func_0x000108c4c180();
  func_0x000108c4c168();
  func_0x000108c4c2a4();
  func_0x000108c4c160();
  func_0x000108c4c188();
  return;
}



/* Entry: 108c4b528; end: 108c4b5b3;  */

undefined8 * FUN_108c4b528(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba1a0;
  func_0x000108c4b564(param_1 + 3);
  func_0x000108c4b58c(param_1 + 1);
  return param_1;
}



/* Entry: 108c4b5b4; end: 108c4b5b7;  */

undefined8 * FUN_108c4b5b4(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110aba240;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c4b704(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000108c3d890(param_1 + 3);
  func_0x000108c3d890(param_1 + 1);
  return param_1;
}



/* Entry: 108c4b5b8; end: 108c4b5cb;  */

void FUN_108c4b5b8(void)

{
  FUN_108c4b658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4b5cc; end: 108c4b5cf;  */

undefined8 * FUN_108c4b5cc(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110aba240;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c4b704(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000108c3d890(param_1 + 3);
  func_0x000108c3d890(param_1 + 1);
  return param_1;
}



/* Entry: 108c4b5d0; end: 108c4b5e3;  */

void FUN_108c4b5d0(void)

{
  FUN_108c4b658();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4b5e4; end: 108c4b5e7;  */

void FUN_108c4b5e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4b5e8; end: 108c4b5fb;  */

void FUN_108c4b5e8(void)

{
  FUN_108c4b644();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4b5fc; end: 108c4b643;  */

void FUN_108c4b5fc(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variableD1Ev_110346608)(param_1 + 0x20);
  return;
}



/* Entry: 108c4b644; end: 108c4b657;  */

void FUN_108c4b644(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4b658; end: 108c4b703;  */

undefined8 * FUN_108c4b658(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110aba240;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_108c4b704(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  func_0x000108c3d890(param_1 + 3);
  func_0x000108c3d890(param_1 + 1);
  return param_1;
}



/* Entry: 108c4b704; end: 108c4b7d7;  */

void FUN_108c4b704(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  alStack_30[0] = 0;
  alStack_30[1] = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_108c3d9c4(auStack_40,param_1 + 8,&uStack_50);
  FUN_108c3da20(alStack_30,auStack_40);
  func_0x000108c4c1bc();
  func_0x000108c4c1ac();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x38);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x78,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x80);
  *(undefined8 *)(alStack_30[0] + 0x80) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x38);
  if (plVar2 == (long *)0x0) {
    func_0x000108c4c2cc(alStack_30[0]);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x000108c4c1e8();
  }
  func_0x000108c3d890(alStack_30);
  return;
}



/* Entry: 108c4b7d8; end: 108c4b86b;  */

void FUN_108c4b7d8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *puVar1 = FUN_108c4bcb8;
  puVar1[1] = FUN_108c4bdc8;
  FUN_108c4bab8(puVar1 + 4,param_1);
  func_0x000107c27f94(puVar1 + 2);
  func_0x000108c4c298();
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  func_0x000108c4c310(*(undefined8 *)(*(long *)*param_2 + 0x10));
  return;
}



/* Entry: 108c4b86c; end: 108c4bab7;  */

void FUN_108c4b86c(undefined8 *param_1)

{
  uint uVar1;
  ushort *puVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  byte *pbVar4;
  uint extraout_w8;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_60 [16];
  ushort *puStack_50;
  undefined8 uStack_48;
  
  puVar3 = (undefined8 *)0x50;
  __Znwm();
  *puVar3 = FUN_108c4bb34;
  puVar3[1] = FUN_108c4bc90;
  puVar3[8] = param_1;
  plVar9 = puVar3 + 2;
  func_0x000107c27f94();
  func_0x000108c4c298();
  pbVar7 = (byte *)(puVar3 + 6);
  *(undefined8 *)pbVar7 = *param_1;
  do {
    func_0x000108c4c120();
  } while (extraout_w10 != 0);
  func_0x000108c4c244(*(undefined8 *)pbVar7);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar3 + 9) = 0;
    lVar8 = puVar3[6];
    func_0x000108c4c130();
    if (*plVar9 == 0) {
      func_0x000107c3a5c0();
    }
    plVar5 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x000108c4c140();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_01;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x000108c4c1dc();
        plVar5 = extraout_x8;
        uVar1 = extraout_w10_00;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x000108c4c340();
        if ((bool)in_ZR) {
          func_0x000108c4c150();
          func_0x000108c4c0d0();
          func_0x000108c4c0e0();
          puVar3[7] = plVar9;
          *(long **)(lVar8 + 0x90) = plVar9;
        }
        func_0x000108c4c32c();
        func_0x000108c4c228();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  pbVar4 = pbVar7;
  func_0x0001086c1de4();
  puStack_50 = (ushort *)0x0;
  uStack_48 = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  func_0x000108c4c2ec(auStack_60);
  FUN_108c3da20(&puStack_50,auStack_60);
  func_0x000108c4c1ac();
  func_0x000108c4c1c4();
  puVar2 = puStack_50;
  __ZNSt3__15mutex4lockEv(puStack_50 + 0x1c);
  *puStack_50 = *pbVar4 | 0x100;
  plVar9 = *(long **)(puStack_50 + 0x40);
  puStack_50[0x40] = 0;
  puStack_50[0x41] = 0;
  puStack_50[0x42] = 0;
  puStack_50[0x43] = 0;
  __ZNSt3__15mutex6unlockEv(puVar2 + 0x1c);
  if (plVar9 == (long *)0x0) {
    func_0x000108c4c2cc(puStack_50);
  }
  else {
    (**(code **)(*plVar9 + 0x10))(plVar9,&puStack_50);
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  func_0x000108c4c1bc();
  func_0x000107c27f9c(pbVar7);
  func_0x000108c4c290();
  func_0x000108c4c160();
  func_0x000108c4c188();
  return;
}



/* Entry: 108c4bab8; end: 108c4bae3;  */

undefined8 * FUN_108c4bab8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  FUN_108c4bae4(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 108c4bae4; end: 108c4bb0b;  */

void FUN_108c4bae4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *param_1 = &PTR_FUN_110aba1f8;
  return;
}



/* Entry: 108c4bb0c; end: 108c4bb33;  */

undefined8 * FUN_108c4bb0c(undefined8 *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  
  FUN_108c4b658(param_1 + 1);
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)(plVar5 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar4 & 0x1fffffffc) == 4) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0,param_1);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return param_1;
}



/* Entry: 108c4bb34; end: 108c4bc8f;  */

void FUN_108c4bb34(long param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  long *plVar3;
  ushort *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pbVar2 = (byte *)(param_1 + 0x30);
  func_0x0001086c1de4();
  puStack_50 = (ushort *)0x0;
  uStack_48 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  func_0x000108c4c2ec(auStack_40);
  FUN_108c3da20(&puStack_50,auStack_40);
  func_0x000108c4c1bc();
  func_0x000108c4c1c4();
  puVar1 = puStack_50;
  __ZNSt3__15mutex4lockEv(puStack_50 + 0x1c);
  *puStack_50 = *pbVar2 | 0x100;
  plVar3 = *(long **)(puStack_50 + 0x40);
  puStack_50[0x40] = 0;
  puStack_50[0x41] = 0;
  puStack_50[0x42] = 0;
  puStack_50[0x43] = 0;
  __ZNSt3__15mutex6unlockEv(puVar1 + 0x1c);
  if (plVar3 == (long *)0x0) {
    func_0x000108c4c2cc(puStack_50);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3,&puStack_50);
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  func_0x000108c4c1ac();
  func_0x000108c4c1b4();
  func_0x000108c4c290();
  func_0x000108c4c160();
  func_0x000108c4c188();
  return;
}



/* Entry: 108c4bc90; end: 108c4bcb7;  */

void FUN_108c4bc90(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x30);
  func_0x000108c4c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c4bcb8; end: 108c4bdc7;  */

void FUN_108c4bcb8(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c4b86c(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x000108c4c120();
    } while (extraout_w10 != 0);
    func_0x000108c4c244(*(undefined8 *)(param_1 + 0x50));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x60) = 1;
      lVar4 = *(long *)(param_1 + 0x50);
      func_0x000108c4c130();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar2 = (long *)(lVar4 + 0x10);
      do {
        if (*plVar2 == 0) {
          func_0x000108c4c140();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c4c1dc();
          plVar2 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c4c190();
          if ((bool)in_ZR) {
            func_0x000108c4c150();
            func_0x000108c4c0d0();
            func_0x000108c4c0e0();
            func_0x000108c4c270();
          }
          func_0x000108c4c0f4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000107c28834(param_1 + 0x50);
  func_0x000108c4c2bc();
  func_0x000108c4c2e4();
  func_0x000108c4c290();
  func_0x000108c4c160();
  func_0x000108c4c2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c4bdc8; end: 108c4bdff;  */

void FUN_108c4bdc8(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\x01') {
    func_0x000108c4c2bc();
    func_0x000108c4c2e4();
  }
  func_0x000108c4c160();
  func_0x000108c4c2c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c4be00; end: 108c4bf5b;  */

void FUN_108c4be00(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    func_0x000108c4c1cc();
    lVar4 = *(long *)(param_1 + 0x30);
    func_0x000108c4c180();
    func_0x000108c4c168();
    plVar2 = *(long **)(lVar4 + 0x18);
    func_0x000108c4c2dc();
    func_0x000108c4c280();
    do {
      func_0x000108c4c120();
    } while (extraout_w10 != 0);
    func_0x000108c4c244(*(undefined8 *)(param_1 + 0x20));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x000108c4c130();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar2 = (long *)(lVar4 + 0x10);
      do {
        if (*plVar2 == 0) {
          func_0x000108c4c140();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c4c1dc();
          plVar2 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c4c190();
          if ((bool)in_ZR) {
            func_0x000108c4c150();
            func_0x000108c4c0d0();
            func_0x000108c4c0e0();
            func_0x000108c4c270();
          }
          func_0x000108c4c0f4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x000108c4c1cc();
  func_0x000108c4c180();
  func_0x000108c4c168();
  func_0x000108c4c2b0();
  func_0x000108c4c160();
  func_0x000108c4c188();
  return;
}



/* Entry: 108c4bf5c; end: 108c4bf87;  */

void FUN_108c4bf5c(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x000108c4c168();
  func_0x000108c4c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c4bf88; end: 108c4c09b;  */

void FUN_108c4bf88(long param_1)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *extraout_x8_00;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    plVar2 = (long *)(param_1 + 0x20);
    FUN_108c4b2cc(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
    do {
      func_0x000108c4c120();
    } while (extraout_w10 != 0);
    func_0x000108c4c244(*(undefined8 *)(param_1 + 0x28));
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      lVar4 = *(long *)(param_1 + 0x28);
      func_0x000108c4c130();
      if (*plVar2 == 0) {
        func_0x000107c3a5c0();
      }
      plVar2 = (long *)(lVar4 + 0x10);
      do {
        if (*plVar2 == 0) {
          func_0x000108c4c140();
          plVar2 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar3 = extraout_w11_00;
        }
        else {
          func_0x000108c4c1dc();
          plVar2 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar3 = extraout_w11;
        }
        if ((uVar3 & 1) != 0) {
          func_0x000108c4c190();
          if ((bool)in_ZR) {
            func_0x000108c4c150();
            func_0x000108c4c0d0();
            func_0x000108c4c0e0();
            func_0x000108c4c270();
          }
          func_0x000108c4c0f4();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  lVar4 = param_1 + 0x28;
  func_0x0001086c1de4(lVar4);
  func_0x000108653be8(param_1 + 0x10,lVar4);
  func_0x000108c4c168();
  func_0x000108c4c1b4();
  func_0x000108c4c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c4c09c; end: 108c4c0cf;  */

void FUN_108c4c09c(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x000108c4c168();
    func_0x000108c4c1b4();
  }
  func_0x000108c4c160();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 108c4c0d0; end: 108c4c42f;  */

void FUN_108c4c0d0(void)

{
  int unaff_w23;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(unaff_w23 * 0x18 + 0x10);
  return;
}



/* Entry: 108c4c430; end: 108c4c537;  */

void FUN_108c4c430(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108c4d914();
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 8);
    puVar1 = (undefined8 *)0x50;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_FUN_110aba318;
    if (lVar2 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10 != 0);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_00 != 0);
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_01 != 0);
    }
    puVar1[3] = &PTR_FUN_110abace8;
    uStack_40 = 0;
    uStack_38 = 0;
    puVar1[5] = uVar6;
    puVar1[4] = uVar4;
    puVar1[7] = uVar7;
    puVar1[6] = uVar5;
    puVar1[9] = uVar9;
    puVar1[8] = uVar8;
    func_0x000108c4d900();
    func_0x000108c4d8f0();
    func_0x000108c4b58c(&uStack_40);
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0x48);
    *(undefined8 **)(unaff_x20 + 0x48) = puVar1 + 3;
    *(undefined8 **)(unaff_x20 + 0x50) = puVar1;
    func_0x000108c3e3e8(&uStack_40);
    lVar2 = *(long *)(unaff_x20 + 0x48);
  }
  lVar3 = *(long *)(unaff_x20 + 0x50);
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x000108c4d838();
    } while (extraout_w10_02 != 0);
  }
  return;
}



/* Entry: 108c4c538; end: 108c4c83f;  */

void FUN_108c4c538(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  long *unaff_x19;
  long unaff_x20;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long alStack_68 [4];
  undefined8 uStack_48;
  
  func_0x000108c4d914();
  func_0x000108c4d898();
  lVar6 = param_1[0xb];
  uStack_48 = extraout_x8;
  if (lVar6 == 0) {
    puVar3 = (undefined8 *)0x228;
    __Znwm();
    plVar8 = puVar3 + 1;
    *plVar8 = 0;
    puVar3[2] = 0;
    *puVar3 = &PTR_DAT_110aba368;
    puVar4 = puVar3 + 3;
    puVar11 = *(undefined8 **)(unaff_x20 + 0x20);
    puVar9 = *(undefined8 **)(unaff_x20 + 0x18);
    puStack_80 = puVar9;
    puStack_78 = puVar11;
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10 != 0);
    }
    func_0x000108c4d920();
    puStack_90 = puVar9;
    puStack_88 = puVar11;
    if (extraout_x8_00 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_00 != 0);
    }
    FUN_108c6347c(puVar4,&puStack_80,&puStack_90);
    func_0x000108c4cad0(&puStack_90);
    func_0x000108c4d8e8();
    puStack_78 = (undefined8 *)puVar3[4];
    if ((puStack_78 == (undefined8 *)0x0) ||
       (in_ZR = *(long *)((long)puStack_78 + 8) == -1, (bool)in_ZR)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar8 = puVar3 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puStack_80 = (undefined8 *)puVar3[3];
      puVar3[3] = puVar3 + 3;
      puVar3[4] = puVar3;
      puStack_a0 = puVar4;
      puStack_98 = puVar3;
      puStack_90 = puVar4;
      puStack_88 = puVar3;
      FUN_108c4d70c(&puStack_80);
      func_0x000108c4cb18(&puStack_90);
    }
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    puStack_78 = *(undefined8 **)(unaff_x20 + 0xa0);
    puStack_80 = *(undefined8 **)(unaff_x20 + 0x98);
    *(undefined8 **)(unaff_x20 + 0x98) = puVar4;
    *(undefined8 **)(unaff_x20 + 0xa0) = puVar3;
    func_0x000108c4cb18(&puStack_80);
    func_0x000108c4cb18(&puStack_a0);
    puVar4 = (undefined8 *)0x70;
    __Znwm();
    plVar8 = puVar4 + 1;
    *plVar8 = 0;
    puVar4[2] = 0;
    *puVar4 = &PTR_FUN_110aba3b8;
    puStack_78 = *(undefined8 **)(unaff_x20 + 0x20);
    puStack_80 = *(undefined8 **)(unaff_x20 + 0x18);
    if (*(long *)(unaff_x20 + 0x20) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_01 != 0);
    }
    puVar9 = *(undefined8 **)(unaff_x20 + 0x30);
    puVar3 = *(undefined8 **)(unaff_x20 + 0x28);
    puStack_90 = puVar3;
    puStack_88 = puVar9;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_02 != 0);
    }
    func_0x000108c4d920();
    puStack_a0 = puVar3;
    puStack_98 = puVar9;
    if (extraout_x8_01 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_03 != 0);
    }
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x98);
    if (*(long *)(unaff_x20 + 0xa0) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_04 != 0);
    }
    puVar3 = puVar4 + 3;
    func_0x000108c4e528(puVar3,&puStack_80,&puStack_90,&puStack_a0,&uStack_b0);
    func_0x000108c4cb18(&uStack_b0);
    func_0x000108c4d900();
    func_0x000108c4d8f0();
    func_0x000108c4d8e8();
    puStack_78 = (undefined8 *)puVar4[5];
    if ((puStack_78 == (undefined8 *)0x0) ||
       (in_ZR = *(long *)((long)puStack_78 + 8) == -1, (bool)in_ZR)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar8 = puVar4 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = *plVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      puStack_80 = (undefined8 *)puVar4[4];
      puVar4[4] = puVar3;
      puVar4[5] = puVar4;
      puStack_a0 = puVar3;
      puStack_98 = puVar4;
      puStack_90 = puVar3;
      puStack_88 = puVar4;
      FUN_108c4d75c(&puStack_80);
      func_0x000108c4d780(&puStack_90);
    }
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    puStack_78 = *(undefined8 **)(unaff_x20 + 0x60);
    puStack_80 = *(undefined8 **)(unaff_x20 + 0x58);
    *(undefined8 **)(unaff_x20 + 0x58) = puVar3;
    *(undefined8 **)(unaff_x20 + 0x60) = puVar4;
    func_0x000108c3e40c(&puStack_80);
    func_0x000108c4d780(&puStack_a0);
    plVar8 = *(long **)(unaff_x20 + 0x88);
    FUN_108c640a0(alStack_68,*(undefined8 *)(unaff_x20 + 0x98));
    (**(code **)(*plVar8 + 0x28))(plVar8,alStack_68);
    param_1 = alStack_68;
    func_0x000108c4d7a4();
    lVar6 = *(long *)(unaff_x20 + 0x58);
  }
  lVar7 = *(long *)(unaff_x20 + 0x60);
  *unaff_x19 = lVar6;
  unaff_x19[1] = lVar7;
  if (lVar7 != 0) {
    do {
      func_0x000108c4d838();
    } while (extraout_w10_05 != 0);
  }
  func_0x000108c4d868(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    plVar8 = alStack_68;
    func_0x000108c4d7a4();
    func_0x000108c4d890();
    func_0x000108c4d914();
    lVar6 = plVar8[0xd];
    if (lVar6 == 0) {
      puVar5 = &UNK_10f50e0bb;
      func_0x000107c30184(&UNK_10f50e0bb,0x21,100);
      puVar4 = (undefined8 *)0xc8;
      __Znwm();
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = &PTR_FUN_110aba408;
      uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
      uStack_100 = uVar10;
      uStack_f8 = uVar12;
      if (*(long *)(unaff_x20 + 0x30) != 0) {
        do {
          func_0x000108c4d838();
        } while (extraout_w10_06 != 0);
      }
      func_0x000108c4d920();
      uStack_110 = uVar10;
      uStack_108 = uVar12;
      if (extraout_x8_02 != 0) {
        do {
          func_0x000108c4d838();
        } while (extraout_w10_07 != 0);
      }
      func_0x000108c5f524(puVar4 + 3,&uStack_100,&uStack_110,puVar5);
      func_0x000108c4cad0(&uStack_110);
      func_0x000108c4caf4(&uStack_100);
      uStack_f8 = *(undefined8 *)(unaff_x20 + 0x70);
      uStack_100 = *(undefined8 *)(unaff_x20 + 0x68);
      *(undefined8 **)(unaff_x20 + 0x68) = puVar4 + 3;
      *(undefined8 **)(unaff_x20 + 0x70) = puVar4;
      func_0x000108c3e430(&uStack_100);
      lVar6 = *(long *)(unaff_x20 + 0x68);
    }
    lVar7 = *(long *)(unaff_x20 + 0x70);
    *param_1 = lVar6;
    param_1[1] = lVar7;
    if (lVar7 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_08 != 0);
    }
    return;
  }
  return;
}



/* Entry: 108c4c840; end: 108c4c93b;  */

void FUN_108c4c840(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000108c4d914();
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 == 0) {
    puVar1 = &UNK_10f50e0bb;
    func_0x000107c30184(&UNK_10f50e0bb,0x21,100);
    puVar2 = (undefined8 *)0xc8;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110aba408;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_50 = uVar5;
    uStack_48 = uVar6;
    if (*(long *)(unaff_x20 + 0x30) != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10 != 0);
    }
    func_0x000108c4d920();
    uStack_60 = uVar5;
    uStack_58 = uVar6;
    if (extraout_x8 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108c5f524(puVar2 + 3,&uStack_50,&uStack_60,puVar1);
    func_0x000108c4cad0(&uStack_60);
    func_0x000108c4caf4(&uStack_50);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_50 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined8 **)(unaff_x20 + 0x68) = puVar2 + 3;
    *(undefined8 **)(unaff_x20 + 0x70) = puVar2;
    func_0x000108c3e430(&uStack_50);
    lVar3 = *(long *)(unaff_x20 + 0x68);
  }
  lVar4 = *(long *)(unaff_x20 + 0x70);
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x000108c4d838();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 108c4c93c; end: 108c4ca17;  */

void FUN_108c4c93c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000108c4d914();
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x30);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    puVar1 = (undefined8 *)0x40;
    uVar5 = uVar4;
    uVar7 = uVar6;
    __Znwm();
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = &PTR_DAT_110aba458;
    if (lVar2 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10 != 0);
    }
    func_0x000108c4d920();
    if (extraout_x8 != 0) {
      do {
        func_0x000108c4d838();
      } while (extraout_w10_00 != 0);
    }
    puVar1[3] = &PTR_FUN_110abadb0;
    uStack_40 = 0;
    uStack_38 = 0;
    puVar1[5] = uVar6;
    puVar1[4] = uVar4;
    puVar1[7] = uVar7;
    puVar1[6] = uVar5;
    func_0x000108c4d900();
    func_0x000108c4d8f0();
    uStack_38 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0x78);
    *(undefined8 **)(unaff_x20 + 0x78) = puVar1 + 3;
    *(undefined8 **)(unaff_x20 + 0x80) = puVar1;
    func_0x000108c3e454(&uStack_40);
    lVar2 = *(long *)(unaff_x20 + 0x78);
  }
  lVar3 = *(long *)(unaff_x20 + 0x80);
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar3;
  if (lVar3 != 0) {
    do {
      func_0x000108c4d838();
    } while (extraout_w10_01 != 0);
  }
  return;
}



/* Entry: 108c4ca18; end: 108c4ca1b;  */

undefined8 * FUN_108c4ca18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba2b0;
  func_0x000108c4cb18(param_1 + 0x13);
  func_0x000108c4caac(param_1 + 0x11);
  func_0x000108c3e454(param_1 + 0xf);
  func_0x000108c3e430(param_1 + 0xd);
  func_0x000108c3e40c(param_1 + 0xb);
  func_0x000108c3e3e8(param_1 + 9);
  func_0x000108c4cad0(param_1 + 7);
  func_0x000108c4caf4(param_1 + 5);
  func_0x000108c4b564(param_1 + 3);
  func_0x000108c4b58c(param_1 + 1);
  return param_1;
}



/* Entry: 108c4ca1c; end: 108c4ca2f;  */

void FUN_108c4ca1c(void)

{
  FUN_108c4ca30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4ca30; end: 108c4cb3b;  */

undefined8 * FUN_108c4ca30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba2b0;
  func_0x000108c4cb18(param_1 + 0x13);
  func_0x000108c4caac(param_1 + 0x11);
  func_0x000108c3e454(param_1 + 0xf);
  func_0x000108c3e430(param_1 + 0xd);
  func_0x000108c3e40c(param_1 + 0xb);
  func_0x000108c3e3e8(param_1 + 9);
  func_0x000108c4cad0(param_1 + 7);
  func_0x000108c4caf4(param_1 + 5);
  func_0x000108c4b564(param_1 + 3);
  func_0x000108c4b58c(param_1 + 1);
  return param_1;
}



/* Entry: 108c4cb3c; end: 108c4cb3f;  */

void FUN_108c4cb3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba318;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4cb40; end: 108c4cb53;  */

void FUN_108c4cb40(void)

{
  func_0x000108c4cb5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4cb54; end: 108c4cb6b;  */

void FUN_108c4cb54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4d864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4cb6c; end: 108c4cb7f;  */

void FUN_108c4cb6c(void)

{
  FUN_108c4cc20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4cb80; end: 108c4cc1f;  */

undefined8 FUN_108c4cb80(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 unaff_x19;
  
  plVar1 = *(long **)(param_1 + 0x210);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x200) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar1 = *(long **)(param_1 + 0x1e8);
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x198);
  FUN_108c4cc34(param_1 + 0xb8);
  func_0x000108c3f498(param_1 + 0x90);
  __ZNSt3__15mutexD1Ev(param_1 + 0x50);
  func_0x000108c4cad0(param_1 + 0x38);
  func_0x000108c4b564(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x000108c4d884();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 108c4cc20; end: 108c4cc33;  */

void FUN_108c4cc20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4cc34; end: 108c4cc73;  */

undefined8 * FUN_108c4cc34(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aba4a8;
  FUN_108c4cd58(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 108c4cc74; end: 108c4cc87;  */

void FUN_108c4cc74(void)

{
  FUN_108c4cc34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4cc88; end: 108c4ccff;  */

long FUN_108c4cc88(long param_1)

{
  long lVar1;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lStack_30 = param_1 + 8;
  uStack_28 = 1;
  __ZNSt3__119__shared_mutex_base4lockEv();
  lStack_38 = *(long *)(param_1 + 0xd8);
  *(long *)(param_1 + 0xd8) = lStack_38 + 1;
  FUN_108c4ce30(param_1 + 0xb0,&lStack_38);
  FUN_108c4ce64();
  lVar1 = lStack_38;
  func_0x000104c305a0(&lStack_30);
  return lVar1;
}



/* Entry: 108c4cd00; end: 108c4cd57;  */

void FUN_108c4cd00(long param_1,undefined8 param_2)

{
  long lStack_38;
  undefined1 uStack_30;
  undefined8 uStack_28;
  
  lStack_38 = param_1 + 8;
  uStack_30 = 1;
  uStack_28 = param_2;
  __ZNSt3__119__shared_mutex_base4lockEv();
  FUN_108c4d4f8(param_1 + 0xb0,&uStack_28);
  func_0x000104c305a0(&lStack_38);
  return;
}



/* Entry: 108c4cd58; end: 108c4ce17;  */

long FUN_108c4cd58(long param_1)

{
  func_0x000108c4cd80(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_108c4ce18(param_1,0);
  return param_1;
}



/* Entry: 108c4ce18; end: 108c4ce2f;  */

void FUN_108c4ce18(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c4ce30; end: 108c4ce63;  */

long FUN_108c4ce30(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_108c4cec0(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x18;
}



/* Entry: 108c4ce64; end: 108c4cebf;  */

undefined1  [16] FUN_108c4ce64(ulong *param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *aplStack_a8 [3];
  long alStack_48 [4];
  undefined8 uStack_28;
  
  func_0x000108c4d898();
  uStack_28 = extraout_x8;
  func_0x000108c4d384(alStack_48);
  puVar3 = param_1;
  FUN_108c4d3dc(alStack_48);
  plVar2 = alStack_48;
  func_0x000108c4cdb8();
  func_0x000108c4d868(uStack_28);
  if ((bool)in_ZR) {
    auVar12._8_8_ = puVar3;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  ___stack_chk_fail();
  uVar9 = *puVar3;
  uVar11 = plVar2[1];
  if (uVar11 != 0) {
    uVar5 = uVar11 - 1;
    if ((uVar11 & uVar5) == 0) {
      unaff_x23 = uVar5 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar7 = 0;
        if (uVar11 != 0) {
          uVar7 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar7 * uVar11;
      }
    }
    plVar10 = *(long **)(*plVar2 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_108c4cf6c;
          uVar7 = plVar10[1];
          if (uVar7 != uVar9) break;
          if (plVar10[2] == uVar9) {
            uVar4 = 0;
            goto LAB_108c4d094;
          }
        }
        if ((uVar11 & uVar5) == 0) {
          uVar7 = uVar7 & uVar5;
        }
        else if (uVar11 <= uVar7) {
          uVar1 = 0;
          if (uVar11 != 0) {
            uVar1 = uVar7 / uVar11;
          }
          uVar7 = uVar7 - uVar1 * uVar11;
        }
      } while (uVar7 == unaff_x23);
    }
  }
LAB_108c4cf6c:
  FUN_108c4d0bc(aplStack_a8,plVar2,uVar9);
  if ((uVar11 == 0) || (*(float *)(plVar2 + 4) * (float)uVar11 < (float)(plVar2[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar11) {
      uVar5 = (ulong)((uVar11 & uVar11 - 1) != 0);
    }
    uVar5 = uVar5 | uVar11 << 1;
    uVar11 = (ulong)((float)(plVar2[3] + 1) / *(float *)(plVar2 + 4));
    if (uVar5 <= uVar11) {
      uVar5 = uVar11;
    }
    func_0x000108c4d10c(plVar2,uVar5);
    uVar11 = plVar2[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar5 * uVar11;
      }
    }
  }
  plVar10 = aplStack_a8[0];
  lVar6 = *plVar2;
  plVar8 = *(long **)(lVar6 + unaff_x23 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = plVar2 + 2;
    *aplStack_a8[0] = *plVar8;
    *plVar8 = (long)aplStack_a8[0];
    *(long **)(lVar6 + unaff_x23 * 8) = plVar8;
    if (*aplStack_a8[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_a8[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar9 = uVar9 & uVar11 - 1;
      }
      else if (uVar11 <= uVar9) {
        uVar5 = 0;
        if (uVar11 != 0) {
          uVar5 = uVar9 / uVar11;
        }
        uVar9 = uVar9 - uVar5 * uVar11;
      }
      *(long **)(lVar6 + uVar9 * 8) = aplStack_a8[0];
    }
  }
  else {
    *aplStack_a8[0] = *plVar8;
    *plVar8 = (long)aplStack_a8[0];
  }
  aplStack_a8[0] = (long *)0x0;
  plVar2[3] = plVar2[3] + 1;
  func_0x000108c4d8c0();
  uVar4 = 1;
LAB_108c4d094:
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = plVar10;
  return auVar13;
}



/* Entry: 108c4cec0; end: 108c4d0bb;  */

undefined1  [16] FUN_108c4cec0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong unaff_x23;
  undefined1 auVar10 [16];
  long *aplStack_58 [3];
  
  uVar7 = *param_2;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar3 = uVar9 - 1;
    if ((uVar9 & uVar3) == 0) {
      unaff_x23 = uVar3 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar5 * uVar9;
      }
    }
    plVar8 = *(long **)(*param_1 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_108c4cf6c;
          uVar5 = plVar8[1];
          if (uVar5 != uVar7) break;
          if (plVar8[2] == uVar7) {
            uVar2 = 0;
            goto LAB_108c4d094;
          }
        }
        if ((uVar9 & uVar3) == 0) {
          uVar5 = uVar5 & uVar3;
        }
        else if (uVar9 <= uVar5) {
          uVar1 = 0;
          if (uVar9 != 0) {
            uVar1 = uVar5 / uVar9;
          }
          uVar5 = uVar5 - uVar1 * uVar9;
        }
      } while (uVar5 == unaff_x23);
    }
  }
LAB_108c4cf6c:
  FUN_108c4d0bc(aplStack_58,param_1,uVar7);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar9) {
      uVar3 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar3 = uVar3 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar9) {
      uVar3 = uVar9;
    }
    func_0x000108c4d10c(param_1,uVar3);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x23 = uVar9 - 1 & uVar7;
    }
    else {
      unaff_x23 = uVar7;
      if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        unaff_x23 = uVar7 - uVar3 * uVar9;
      }
    }
  }
  plVar8 = aplStack_58[0];
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
    *(long **)(lVar4 + unaff_x23 * 8) = plVar6;
    if (*aplStack_58[0] != 0) {
      uVar7 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar7 = uVar7 & uVar9 - 1;
      }
      else if (uVar9 <= uVar7) {
        uVar3 = 0;
        if (uVar9 != 0) {
          uVar3 = uVar7 / uVar9;
        }
        uVar7 = uVar7 - uVar3 * uVar9;
      }
      *(long **)(lVar4 + uVar7 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar6;
    *plVar6 = (long)aplStack_58[0];
  }
  aplStack_58[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  func_0x000108c4d8c0();
  uVar2 = 1;
LAB_108c4d094:
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = plVar8;
  return auVar10;
}



/* Entry: 108c4d0bc; end: 108c4d1d3;  */

void FUN_108c4d0bc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  puVar1[2] = *(undefined8 *)*param_5;
  puVar1[6] = 0;
  return;
}



/* Entry: 108c4d1d4; end: 108c4d2cf;  */

void FUN_108c4d1d4(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_108c4d2d0(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_108c4d2e8(plVar3);
    FUN_108c4d2d0(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 108c4d2d0; end: 108c4d2e7;  */

void FUN_108c4d2d0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c4d2e8; end: 108c4d303;  */

long FUN_108c4d2e8(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  FUN_108c4d328();
  return param_1;
}



/* Entry: 108c4d304; end: 108c4d327;  */

undefined8 FUN_108c4d304(undefined8 param_1)

{
  FUN_108c4d328(param_1,0);
  return param_1;
}



/* Entry: 108c4d328; end: 108c4d33f;  */

void FUN_108c4d328(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x000108c4cdb8(lVar1 + 0x18);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 108c4d340; end: 108c4d3db;  */

void FUN_108c4d340(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x000108c4cdb8(param_2 + 0x18);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 108c4d3dc; end: 108c4d4f7;  */

void FUN_108c4d3dc(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 extraout_x8;
  long *plVar6;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long alStack_40 [3];
  undefined8 uStack_28;
  
  plVar3 = alStack_40;
  func_0x000108c4d898();
  uVar1 = param_2 == param_1;
  plVar4 = param_2;
  uStack_28 = extraout_x8;
  if (!(bool)uVar1) {
    plVar2 = (long *)param_1[3];
    plVar6 = (long *)param_2[3];
    plVar4 = param_1;
    if (plVar2 == param_1) {
      uVar1 = plVar6 == param_2;
      if ((bool)uVar1) {
        func_0x000108c4d908();
        (*extraout_x8_00)();
        func_0x000108c4d850(param_1[3]);
        param_1[3] = 0;
        func_0x000108c4d908(param_2[3]);
        (*extraout_x8_01)();
        func_0x000108c4d850(param_2[3]);
        param_2[3] = 0;
        param_1[3] = (long)param_1;
        func_0x000108c4d8f8(*(undefined8 *)(alStack_40[0] + 0x18),alStack_40);
        (**(code **)(alStack_40[0] + 0x20))();
      }
      else {
        plVar4 = param_2;
        func_0x000108c4d908();
        func_0x000108c4d8f8();
        plVar3 = (long *)param_1[3];
        func_0x000108c4d850();
        param_1[3] = param_2[3];
      }
      param_2[3] = (long)param_2;
      param_1 = plVar3;
    }
    else {
      uVar1 = plVar6 == param_2;
      if ((bool)uVar1) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        plVar3 = (long *)param_2[3];
        func_0x000108c4d850();
        param_2[3] = param_1[3];
        param_1[3] = (long)param_1;
        param_1 = plVar3;
      }
      else {
        param_1[3] = (long)plVar6;
        param_2[3] = (long)plVar2;
        param_1 = plVar2;
        plVar4 = param_2;
      }
    }
  }
  iVar5 = (int)plVar4;
  func_0x000108c4d868(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  plVar4 = param_1;
  FUN_108c4d528();
  if (plVar4 != (long *)0x0) {
    FUN_108c4d5c4(param_1,plVar4);
  }
  return;
}



/* Entry: 108c4d4f8; end: 108c4d527;  */

void FUN_108c4d4f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_108c4d528();
  if (lVar1 != 0) {
    FUN_108c4d5c4(param_1,lVar1);
  }
  return;
}



/* Entry: 108c4d528; end: 108c4d5c3;  */

long FUN_108c4d528(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = *param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar4 & uVar5;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (plVar2[2] == uVar4) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 108c4d5c4; end: 108c4d5ef;  */

undefined8 FUN_108c4d5c4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_108c4d5f0(auStack_38);
  func_0x000108c4d8c0();
  return uVar1;
}



/* Entry: 108c4d5f0; end: 108c4d70b;  */

void FUN_108c4d5f0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108c4d6a4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_108c4d6a4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_108c4d6a4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 108c4d70c; end: 108c4d72f;  */

void FUN_108c4d70c(long param_1)

{
  func_0x000108c4d884();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108c4d730; end: 108c4d733;  */

void FUN_108c4d730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba3b8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4d734; end: 108c4d747;  */

void FUN_108c4d734(void)

{
  func_0x000108c4d750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4d748; end: 108c4d75b;  */

void FUN_108c4d748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4d864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4d75c; end: 108c4d7df;  */

void FUN_108c4d75c(long param_1)

{
  func_0x000108c4d884();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 108c4d7e0; end: 108c4d7e3;  */

void FUN_108c4d7e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aba408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c4d7e4; end: 108c4d7f7;  */

void FUN_108c4d7e4(void)

{
  func_0x000108c4d800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4d7f8; end: 108c4d80f;  */

void FUN_108c4d7f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4d864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c4d810; end: 108c4d823;  */

void FUN_108c4d810(void)

{
  func_0x000108c4d82c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c4d824; end: 108c4d92b;  */

void FUN_108c4d824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c4d864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


