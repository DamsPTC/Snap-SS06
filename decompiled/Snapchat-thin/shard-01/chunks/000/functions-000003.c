/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bf426c; end: 100bf4337;  */

undefined1 FUN_100bf426c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c61174();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x000107c4c710(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  func_0x000107c60bcc(&uStack_40,8);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100bf4338; end: 100bf433f; -[SCFriendsFeedActiveMessageData isConversationDoNotDisturbEnabled] */

undefined1 FUN_100bf4338(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100bf4340; end: 100bf436f; -[SCPageLoadMetricManagerImpl dataLoadEnd:] */

void FUN_100bf4340(undefined8 param_1)

{
  func_0x000107c3c0a0();
  func_0x000107c61180();
  func_0x000107c41240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bf4370; end: 100bf4413; -[SCPageLoadMetric dataLoadEnd] */

void FUN_100bf4370(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  
  uVar1 = param_2;
  func_0x000107c3cd8c();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x000107c6071c();
  func_0x000107c427fc(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c611ec(param_2 + 0x3c);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d954(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bd8(*(undefined8 *)(param_2 + 8),param_3,puVar2,
                      &PTR____CFConstantStringClassReference_110e4c378);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_2 + 0x3c);
  return;
}



/* Entry: 100bf4414; end: 100bf4483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100bf4414(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  FUN_100bf4484(param_1,unaff_x20 + _DAT_112fec9c0);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 100bf4484; end: 100bf44c7;  */

long FUN_100bf4484(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100bf44c8; end: 100bf44cf;  */

void FUN_100bf44c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100bf44d0; end: 100bf4503;  */

void FUN_100bf44d0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf4504; end: 100bf452f; -[SCPageLoadTrace endDataLoad] */

void FUN_100bf4504(long param_1,undefined8 param_2)

{
  func_0x000107c42880(param_1,param_2,*(undefined8 *)(param_1 + 0x38),2);
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



/* Entry: 100bf4530; end: 100bf45bb;  */

void FUN_100bf4530(undefined8 param_1)

{
  if (lRam0000000112e328c0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e693ca8);
  return;
}



/* Entry: 100bf45bc; end: 100bf4637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf45bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  uVar1 = *(undefined8 *)(param_5 + _DAT_113091b70);
  func_0x000107c615f0(uVar1);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_6;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 100bf4638; end: 100bf4657;  */

void FUN_100bf4638(void)

{
  func_0x000107c61168(&PTR_PTR_112e327f8);
  return;
}



/* Entry: 100bf4658; end: 100bf4717;  */

void FUN_100bf4658(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  FUN_100bf4638();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  ppuStack_58 = &PTR_DAT_11048e518;
  alStack_78[0] = lVar8;
  lStack_60 = lVar7;
  func_0x0001002c333c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar6);
  func_0x000100bf4bc0(alStack_78);
  return;
}



/* Entry: 100bf4718; end: 100bf48ff;  */

ulong FUN_100bf4718(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar1 = param_2;
  func_0x000107c4e760();
  func_0x000107c61180();
  uVar2 = param_3;
  func_0x000107c4e760();
  func_0x000107c61180();
  if ((uVar1 == 0) || (uVar2 != 0)) {
    if ((uVar1 == 0) && (uVar2 != 0)) {
      uVar7 = 1;
    }
    else if ((uVar1 == 0) || (uVar2 == 0)) {
      uVar3 = param_2;
      FUN_100bf4908();
      func_0x000107c61180();
      uVar4 = param_3;
      FUN_100bf4908();
      func_0x000107c61180();
      uVar7 = param_2;
      func_0x000107c3d17c();
      func_0x000107c61180();
      uVar5 = uVar7;
      FUN_100bf4a30();
      func_0x000107c61170(uVar7);
      uVar7 = param_3;
      func_0x000107c3d17c();
      func_0x000107c61180();
      uVar6 = uVar7;
      FUN_100bf4a30();
      func_0x000107c61170(uVar7);
      if (((uVar5 & 1) == 0) && ((uVar6 & 1) != 0)) {
        uVar7 = 1;
      }
      else if ((((uint)uVar5 ^ 1 | (uint)uVar6) & 1) == 0) {
        uVar7 = 0xffffffffffffffff;
      }
      else if (((((uint)uVar5 & (uint)uVar6 & 1) != 0) || (uVar3 == 0 && uVar4 == 0)) ||
              (uVar7 = uVar3, FUN_100bf4b48(uVar3,uVar4), uVar7 == 0)) {
        uVar5 = param_2;
        func_0x000107c42f24(param_2);
        func_0x000107c61180();
        uVar6 = param_3;
        func_0x000107c42f24(param_3);
        func_0x000107c61180();
        uVar7 = uVar5;
        func_0x000107c3fec0(uVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar5);
      }
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
    }
    else {
      uVar7 = uVar1;
      func_0x000107c3fec0(uVar1);
    }
  }
  else {
    uVar7 = 0xffffffffffffffff;
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return uVar7;
}



/* Entry: 100bf4900; end: 100bf4907; -[SCFriendsFeedItem pinnedTimestamp] */

undefined8 FUN_100bf4900(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100bf4908; end: 100bf4a1f;  */

void FUN_100bf4908(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  func_0x000107c3d15c();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c4aa00();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    lVar2 = param_1;
    func_0x000107c42924();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107cf9918();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 == 0) {
      lVar2 = param_1;
      func_0x000107c42924();
      func_0x000107c61180();
      lVar1 = lVar2;
      func_0x000107cf9a80();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar1 != 0) {
        func_0x000107c61174(lVar1);
      }
      func_0x000107c61170(lVar1);
      lVar2 = 0;
    }
    else {
      func_0x000107c61174(lVar1);
      lVar2 = lVar1;
    }
  }
  else {
    lVar2 = param_1;
    func_0x000107c3d15c();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c4aa00();
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100bf4a20; end: 100bf4a27; -[SCFriendsFeedActiveMessageData lastInteractionTimestamp] */

undefined8 FUN_100bf4a20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100bf4a28; end: 100bf4a2f; -[SCFriendsFeedItem activePresenceInfo] */

undefined8 FUN_100bf4a28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100bf4a30; end: 100bf4b47;  */

undefined1 FUN_100bf4a30(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_1;
  func_0x000107c4ee70(param_1);
  func_0x000107c61180();
  func_0x000107c4c598();
  func_0x000107c61170(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100bf4b48; end: 100bf4c2f;  */

long FUN_100bf4b48(long param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  if ((param_1 == 0) && (param_2 != 0)) {
    lVar1 = 1;
  }
  else if ((param_1 == 0) || (param_2 != 0)) {
    lVar1 = param_2;
    func_0x000107c3fec0(param_2);
  }
  else {
    lVar1 = -1;
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 100bf4c30; end: 100bf4c73;  */

long FUN_100bf4c30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100bf4c74; end: 100bf4cc7;  */

void FUN_100bf4c74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf4cc8; end: 100bf4cf3;  */

void FUN_100bf4cc8(undefined8 *param_1,undefined8 param_2)

{
  func_0x0001002ab320();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = param_2;
  return;
}



/* Entry: 100bf4cf4; end: 100bf4d7b; -[_TtC33SponsoredSnapThumbnailPlayerStore33SponsoredSnapThumbnailPlayerStore init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf4cf4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112dfa3f0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x0001000285a8(0x112dfa3e8,&UNK_10d9cc248);
  func_0x000107c613fc();
  puVar3 = &uStack_48;
  func_0x00010006c248();
  *(undefined8 **)(param_1 + lVar1) = puVar3;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf4d7c; end: 100bf4d8b;  */

undefined1  [16] FUN_100bf4d7c(void)

{
  return ZEXT816(0x110441160);
}



/* Entry: 100bf4d8c; end: 100bf4dab;  */

void FUN_100bf4d8c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f5040);
  return;
}



/* Entry: 100bf4dac; end: 100bf4e03; +[SCFriendsFeedReadySyncResult successWithSyncTime:] */

void FUN_100bf4dac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ba490;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100bf4e04; end: 100bf4e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf4e04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112dfa228) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112dfa230) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf4e68; end: 100bf4e93;  */

void FUN_100bf4e68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bf4e94; end: 100bf4fbb;  */

ulong FUN_100bf4e94(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf4fbc);
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
  FUN_100bf4fd0(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf4fb8);
      (*pcVar1)();
    }
    FUN_100bf5058(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 100bf4fbc; end: 100bf4fcf;  */

void FUN_100bf4fbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e149d8 == (undefined *)0x0 || ((ulong)puRam0000000112e149d8 & 1) != 0) {
    puVar1 = &UNK_10e8abaaa;
    func_0x000107c61518(&UNK_10e8abaaa,0x1f,0,0);
    puRam0000000112e149d8 = puVar1;
  }
  return;
}



/* Entry: 100bf4fd0; end: 100bf504f;  */

undefined * FUN_100bf4fd0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100bf4fbc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100bf5050; end: 100bf5057; -[SCFriendsFeedDataCoordinator _emitUpdatedFeedSyncStatus:] */

void FUN_100bf5050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x180),PTR_s_next__112614028);
  return;
}



/* Entry: 100bf5058; end: 100bf517b;  */

long FUN_100bf5058(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf5178);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf517c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e149d0;
        func_0x0001000285a8(0x112e149d0,&UNK_10d9f15f0);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e149d0;
      func_0x0001000285a8(0x112e149d0,&UNK_10d9f15f0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100bf5174);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 100bf517c; end: 100bf518b; -[SCComposerFrameworkServices composerVideoLoaderRegistry] */

undefined8 FUN_100bf517c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100bf518c; end: 100bf51df;  */

void FUN_100bf518c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a6f78;
  func_0x000107c610f8();
  func_0x000107c45f1c();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 100bf51e0; end: 100bf5277; -[SCComposerVideoLoaderRegistry initWithComposerFrameworkProvider:] */

undefined1 * FUN_100bf51e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e7460;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bf5278; end: 100bf529f; -[SCComposerVideoLoaderRegistry registerVideoLoaders:] */

void FUN_100bf5278(long param_1)

{
  func_0x000107c5d25c(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdcddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyConfiguration_112551110);
  return;
}



/* Entry: 100bf52a0; end: 100bf5353; -[SCComposerVideoLoaderRegistry _applyConfiguration] */

void FUN_100bf52a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3db80();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c509b8();
  func_0x000107c61180();
  func_0x000107c5d43c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100bf5354; end: 100bf535f;  */

void FUN_100bf5354(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c221a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setVideoLoaders__1126660c8,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100bf5360; end: 100bf539f; -[SCValdiConfiguration setVideoLoaders:] */

void FUN_100bf5360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 100bf53a0; end: 100bf53ff; -[SCNotificationFeedbackCategoryPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf53a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d69ca8,0);
  *(undefined8 *)(param_1 + _DAT_112d69cb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf5400; end: 100bf540b;  */

void FUN_100bf5400(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            ();
  return;
}



/* Entry: 100bf540c; end: 100bf542b;  */

void FUN_100bf540c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100bf543c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100bf542c; end: 100bf543b;  */

void FUN_100bf542c(void)

{
  long unaff_x23;
  undefined8 *in_stack_000000a0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*in_stack_000000a0)(unaff_x23 + 8);
  return;
}



/* Entry: 100bf543c; end: 100bf5467;  */

void FUN_100bf543c(void)

{
  long unaff_x19;
  
  func_0x000100abadc8();
  func_0x0001008379c0();
  func_0x000107c60ca0(unaff_x19 + 0x10);
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 100bf5468; end: 100bf55d7;  */

void FUN_100bf5468(long param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 *in_x7;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *in_stack_00000000;
  undefined1 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  
  func_0x00010055fb84();
  FUN_100bf55d8();
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = unaff_x24;
  *(undefined8 *)(param_1 + 0x90) = unaff_x23;
  *(undefined8 *)(param_1 + 0x98) = unaff_x22;
  *(undefined8 *)(param_1 + 0xa0) = in_x5;
  *(undefined8 *)(param_1 + 0xa8) = in_x6;
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(in_x7 + 3) == '\x01') {
    func_0x000100bf565c(*in_x7);
    in_x7[1] = 0;
    in_x7[2] = 0;
    *in_x7 = 0;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(char *)(in_stack_00000000 + 3) == '\x01') {
    uVar2 = in_stack_00000000[1];
    uVar1 = *in_stack_00000000;
    *(undefined8 *)(param_1 + 0xe0) = in_stack_00000000[2];
    *(undefined8 *)(param_1 + 0xd8) = uVar2;
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
    in_stack_00000000[1] = 0;
    in_stack_00000000[2] = 0;
    *in_stack_00000000 = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  *(undefined1 *)(param_1 + 0xf0) = in_stack_00000008;
  *(undefined4 *)(param_1 + 0xf4) = in_stack_0000000c;
  uVar2 = in_stack_00000010[1];
  uVar1 = *in_stack_00000010;
  *(undefined8 *)(param_1 + 0x108) = in_stack_00000010[2];
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  in_stack_00000010[1] = 0;
  in_stack_00000010[2] = 0;
  *in_stack_00000010 = 0;
  uVar2 = in_stack_00000018[1];
  uVar1 = *in_stack_00000018;
  *(undefined8 *)(param_1 + 0x120) = in_stack_00000018[2];
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  in_stack_00000018[1] = 0;
  in_stack_00000018[2] = 0;
  *in_stack_00000018 = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(in_stack_00000020 + 3) == '\x01') {
    uVar2 = in_stack_00000020[1];
    uVar1 = *in_stack_00000020;
    *(undefined8 *)(param_1 + 0x138) = in_stack_00000020[2];
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    *(undefined8 *)(param_1 + 0x128) = uVar1;
    in_stack_00000020[1] = 0;
    in_stack_00000020[2] = 0;
    *in_stack_00000020 = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  *(undefined2 *)(param_1 + 0x148) = in_stack_00000028;
  *(undefined8 *)(param_1 + 0x150) = in_stack_00000030;
  *(undefined2 *)(param_1 + 0x158) = in_stack_00000038;
  *(undefined8 *)(param_1 + 0x160) = in_stack_00000040;
  *(undefined8 *)(param_1 + 0x168) = in_stack_00000048;
  *(undefined4 *)(param_1 + 0x170) = in_stack_00000050;
  return;
}



/* Entry: 100bf55d8; end: 100bf566f;  */

void FUN_100bf55d8(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar1 = param_2[7];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[7] = uVar1;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[7] = 0;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  uVar2 = param_2[0xe];
  uVar1 = param_2[0xd];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0xd] = uVar1;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xd] = 0;
  param_1[0x10] = param_2[0x10];
  return;
}



/* Entry: 100bf5670; end: 100bf56a3;  */

/* WARNING: Possible PIC construction at 0x000100bf5684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf5688) */

void FUN_100bf5670(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x68);
  return;
}



/* Entry: 100bf56a4; end: 100bf56cb;  */

void FUN_100bf56a4(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x19 + 0x18);
  return;
}



/* Entry: 100bf56cc; end: 100bf57ef;  */

void FUN_100bf56cc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_100bf55d8();
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  uVar4 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined1 *)(param_1 + 200) = 0;
  if (*(char *)(param_2 + 200) == '\x01') {
    func_0x000100bf565c(*(undefined8 *)(param_2 + 0xb0));
    *(undefined8 *)(param_2 + 0xb8) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 200) = 1;
  }
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    func_0x000100bf565c(*(undefined8 *)(param_2 + 0xd0));
    *(undefined8 *)(param_2 + 0xd8) = 0;
    *(undefined8 *)(param_2 + 0xe0) = 0;
    *(undefined8 *)(param_2 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  uVar1 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  *(undefined8 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x120) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x140) = 0;
  if (*(char *)(param_2 + 0x140) == '\x01') {
    func_0x000100bf565c(param_1 + 0x128,*(undefined8 *)(param_2 + 0x128));
    *(undefined8 *)(param_2 + 0x130) = 0;
    *(undefined8 *)(param_2 + 0x138) = 0;
    *(undefined8 *)(param_2 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x140) = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  uVar4 = *(undefined8 *)(param_2 + 0x160);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  uVar5 = *(undefined8 *)(param_2 + 0x164);
  *(undefined8 *)(param_1 + 0x16c) = *(undefined8 *)(param_2 + 0x16c);
  *(undefined8 *)(param_1 + 0x164) = uVar5;
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  *(undefined8 *)(param_1 + 0x148) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  return;
}



/* Entry: 100bf57f0; end: 100bf57ff;  */

void FUN_100bf57f0(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf57f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100bf5800; end: 100bf581f;  */

void FUN_100bf5800(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100bf5820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100bf5820; end: 100bf588f;  */

/* WARNING: Possible PIC construction at 0x000100bf5864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf5684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf5868) */
/* WARNING: Removing unreachable block (ram,0x000100bf5670) */
/* WARNING: Removing unreachable block (ram,0x000100bf5688) */

void FUN_100bf5820(long param_1)

{
  func_0x0001004bab20(param_1 + 0x178);
  func_0x0001001148fc(param_1 + 0x128);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (param_1 + 0x110);
  return;
}



/* Entry: 100bf5890; end: 100bf5a5b; -[SCNotificationFeedbackCategoryPluginEntryPoint setValue:forIvarName:] */

void FUN_100bf5890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100bf593c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100bf5a5c; end: 100bf5ab3; -[SCNotificationFeedbackCategoryPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf5a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69ca8;
  func_0x000107c61428(param_1 + _DAT_112d69ca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf5ab4; end: 100bf5adb; -[SCNotificationFeedbackCategoryPluginEntryPoint begin] */

void FUN_100bf5ab4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100bf5adc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bf5adc; end: 100bf5b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf5adc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_100bf5be8();
    func_0x000107c613fc();
    uVar3 = 0;
    func_0x000100bf5c08(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar4 = lVar1;
    func_0x000107c4e9e4(lVar1);
    func_0x000107c61180();
    func_0x000107c4fba8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d69cb0);
    *(undefined8 *)(unaff_x20 + _DAT_112d69cb0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 100bf5ba0; end: 100bf5be7; -[SCNotificationFeedbackCategoryPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf5ba0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d69ca8;
  func_0x000107c61428(param_1 + _DAT_112d69ca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bf5be8; end: 100bf5c27;  */

void FUN_100bf5be8(void)

{
  func_0x000107c61168(&PTR_PTR_112d69c50);
  return;
}



/* Entry: 100bf5c28; end: 100bf5cc3; -[_TtC34NotificationFeedbackCategoryPlugin34NotificationFeedbackCategoryPlugin init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf5c28(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d69bd0);
  *puVar1 = 0x7463615f77656976;
  puVar1[1] = 0xeb000000006e6f69;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d69bd8);
  *puVar1 = 0xd000000000000015;
  puVar1[1] = 0x800000010ef2f7b0;
  *(undefined8 *)(param_1 + _DAT_112d69be0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf5cc4; end: 100bf5ce3; -[SCNotificationCategoryPluginScope plugInRegistry] */

undefined8 FUN_100bf5cc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bf5ce4; end: 100bf5d1b;  */

void FUN_100bf5ce4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  func_0x000107c4bcd0(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100bf5d1c; end: 100bf5d53; -[SCGrpcEventLogger logMessageReceived:] */

void FUN_100bf5d1c(void)

{
  return;
}



/* Entry: 100bf5d54; end: 100bf5e3b;  */

void FUN_100bf5d54(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x000107c6110c();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001001011a4(param_2);
  func_0x000107c61180();
  func_0x0001001011a4(param_3);
  func_0x000107c61180();
  func_0x0001001011a4(param_4);
  func_0x000107c61180();
  func_0x000107c4be34(uVar2);
  func_0x000107c61170(param_4);
  func_0x000100ad98a4();
  func_0x0001009d5250();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 100bf5e3c; end: 100bf5f3f; -[SCGrpcEventLogger logRequestFinished:serviceMethodName:feature:streaming:succeeded:] */

/* WARNING: Possible PIC construction at 0x000100bf5f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf5f14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf5f08) */
/* WARNING: Removing unreachable block (ram,0x000100bf5f18) */

void FUN_100bf5e3c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,ulong param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000100aca4d0(param_6,param_4);
  if ((param_6 & 1) == 0) {
    func_0x000107c610f4(PTR_PTR_1126d6c80);
    func_0x000107c47a28();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_5 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c41d5c(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 100bf5f40; end: 100bf5fc7; -[SCTemporaryMutingCategoryPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf5f40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d69ee8,0);
  func_0x000107c61614(param_1 + _DAT_112d69ef0,0);
  func_0x000107c61614(param_1 + _DAT_112d69ef8,0);
  *(undefined8 *)(param_1 + _DAT_112d69f00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf5fc8; end: 100bf5fe7;  */

void FUN_100bf5fc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + 0x178) + 0x10))();
  return;
}



/* Entry: 100bf5fe8; end: 100bf603f;  */

void FUN_100bf5fe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar1;
  
  func_0x000100bf5fdc();
  uVar1 = *(undefined8 *)(unaff_x21 + 0x18);
  FUN_100bf6040();
  func_0x000107c61180();
  func_0x000107c4bf5c(uVar1,param_2,unaff_x20);
  FUN_100bf75f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 100bf6040; end: 100bf625f;  */

void FUN_100bf6040(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar7 = PTR_PTR_1126e0080;
  func_0x000107c610f4(PTR_PTR_1126e0080);
  lVar8 = param_1;
  FUN_100bf656c();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uVar16 = *(undefined8 *)(param_1 + 0xa8);
  lVar9 = param_1 + 0xb0;
  func_0x0001006a7df8();
  func_0x000107c61180();
  lVar10 = param_1 + 0xd0;
  func_0x0001006a7df8();
  func_0x000107c61180();
  uVar6 = *(undefined1 *)(param_1 + 0xf0);
  uVar5 = *(undefined4 *)(param_1 + 0xf4);
  lVar11 = param_1 + 0xf8;
  func_0x0001001011a4();
  func_0x000107c61180();
  lVar12 = param_1 + 0x110;
  func_0x0001001011a4();
  func_0x000107c61180();
  lVar13 = param_1 + 0x128;
  func_0x0001006a7df8();
  func_0x000107c61180();
  lVar14 = param_1 + 0x148;
  func_0x00010063676c();
  func_0x000107c61180();
  uVar17 = *(undefined8 *)(param_1 + 0x150);
  lVar15 = param_1 + 0x158;
  func_0x00010063676c();
  func_0x000107c61180();
  func_0x000107c4841c(puVar7,param_2,lVar8,uVar1,uVar3,uVar2,uVar4,uVar16,lVar9,lVar10,uVar6,uVar5,
                      lVar11,lVar12,lVar13,lVar14,uVar17,lVar15,*(undefined8 *)(param_1 + 0x160),
                      *(undefined8 *)(param_1 + 0x168),(long)*(int *)(param_1 + 0x170));
  func_0x000100bf6f5c();
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100bf6260; end: 100bf630b; -[SCTemporaryMutingCategoryPluginEntryPoint setValue:forIvarName:] */

void FUN_100bf6260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bf630c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100bf630c; end: 100bf650b;  */

void FUN_100bf630c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10d3be0)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef2c420,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10d4910)) &&
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef2b6f0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "TemporaryMutingCategoryPlugin/SCTemporaryMutingCategoryPluginEntryPoint.swift"
                              ,0x4d,2,0x2c,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf650c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5397c();
        goto LAB_100bf6398;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c59c90();
  }
LAB_100bf6398:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bf650c; end: 100bf6517; -[SCTemporaryMutingCategoryPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf650c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69ee8;
  func_0x000107c61428(param_1 + _DAT_112d69ee8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf6518; end: 100bf656b;  */

void FUN_100bf6518(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf656c; end: 100bf66cb;  */

void FUN_100bf656c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar8 = PTR_PTR_1126e0060;
  func_0x000107c610f4(PTR_PTR_1126e0060);
  lVar9 = param_1;
  func_0x0001001011a4();
  func_0x000107c61180();
  lVar10 = param_1 + 0x18;
  func_0x0001001011a4();
  func_0x000107c61180();
  iVar7 = *(int *)(param_1 + 0x30);
  lVar11 = param_1 + 0x38;
  func_0x0001001011a4(lVar11);
  func_0x000107c61180();
  uVar6 = *(undefined1 *)(param_1 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  uVar5 = *(undefined4 *)(param_1 + 100);
  lVar12 = param_1 + 0x68;
  func_0x0001001011a4();
  func_0x000107c61180();
  param_1 = param_1 + 0x80;
  func_0x0001006aaca4();
  func_0x000107c61180();
  func_0x000107c48600(puVar8,param_2,lVar9,lVar10,(long)iVar7,lVar11,uVar6,uVar1,uVar3,uVar2,uVar4,
                      uVar5,lVar12,param_1);
  func_0x000100bf6cbc();
  func_0x000100bf6cc8();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000100bf6cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 100bf66cc; end: 100bf66ff;  */

undefined1  [16]
FUN_100bf66cc(long *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  long *plStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    lVar2 = (long)param_2 << 5;
    func_0x000107c60e20(lVar2);
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = lVar2;
    return auVar10;
  }
  func_0x000104a7757c();
  pplVar5 = &plStack_a0;
  pplVar4 = &plStack_a0;
  pcStack_28 = FUN_100bf6700;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar2 + 1;
  puStack_30 = &stack0xfffffffffffffff0;
  if (uVar1 >> 0x3b == 0) {
    plVar3 = param_1 + 2;
    uVar6 = *plVar3 - *param_1;
    uVar8 = (long)uVar6 >> 4;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar6) {
      uVar8 = 0x7ffffffffffffff;
    }
    plStack_80 = plVar3;
    if (uVar8 == 0) {
      plStack_a0 = (long *)0x0;
    }
    else {
      FUN_100bf66cc();
      plStack_a0 = plVar3;
    }
    plVar3 = plStack_a0 + lVar2 * 4;
    plStack_88 = plStack_a0 + uVar8 * 4;
    lVar2 = *param_2;
    lVar9 = param_2[3];
    lVar7 = param_2[2];
    plVar3[1] = param_2[1];
    *plVar3 = lVar2;
    plVar3[3] = lVar9;
    plVar3[2] = lVar7;
    plStack_98 = plVar3;
    plStack_90 = plVar3;
    (**(code **)(*plRam0000000113815c70 + 0x140))(&lStack_78);
    param_2[1] = lStack_70;
    *param_2 = lStack_78;
    param_2[3] = lStack_60;
    param_2[2] = lStack_68;
    plStack_90 = plVar3 + 4;
    FUN_100bf6940(param_1);
    lVar2 = param_1[1];
    FUN_100bf6a94();
    param_1 = (long *)pplVar4;
    unaff_x20 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
      auVar11._8_8_ = pplVar5;
      auVar11._0_8_ = lVar2;
      return auVar11;
    }
  }
  else {
    func_0x000104ae48e8();
    pplVar5 = (long **)param_2;
  }
  func_0x000107c60e78();
  FUN_100bf6a94(&plStack_a0);
  func_0x000107c60bd8(param_1);
  func_0x000104bd46a0();
  pplVar4 = &plStack_140;
  pcStack_a8 = FUN_100bf6844;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_138 = &uStack_120;
  puStack_130 = &uStack_108;
  uStack_128 = 0;
  ppuStack_b0 = &puStack_30;
  plStack_140 = param_1;
  uStack_120 = param_6;
  lStack_118 = param_7;
  while (uStack_108 = param_6, lStack_100 = param_7, param_3 != param_5) {
    lVar2 = param_3[-4];
    lVar9 = param_3[-1];
    lVar7 = param_3[-2];
    *(long *)(param_7 + -0x18) = param_3[-3];
    *(long *)(param_7 + -0x20) = lVar2;
    *(long *)(param_7 + -8) = lVar9;
    *(long *)(param_7 + -0x10) = lVar7;
    (**(code **)(*plRam0000000113815c70 + 0x140))(&lStack_f8);
    param_3[-3] = lStack_f0;
    param_3[-4] = lStack_f8;
    param_3[-1] = lStack_e0;
    param_3[-2] = lStack_e8;
    param_7 = lStack_100 + -0x20;
    param_3 = param_3 + -4;
    param_6 = uStack_108;
    unaff_x20 = param_5;
  }
  uStack_128 = 1;
  FUN_100bf69b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar12._8_8_ = param_7;
    auVar12._0_8_ = param_6;
    return auVar12;
  }
  func_0x000107c60e78();
  if ((int)pplVar5 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  plVar3 = (long *)(pplVar4 + 2);
  lVar2 = (long)pplVar4[1];
  FUN_100bf6844(plVar3,lVar2,lVar2,*pplVar4,*pplVar4,pplVar5[1],pplVar5[1],param_8,unaff_x20,param_7
                ,&ppuStack_b0,FUN_100bf6940);
  pplVar5[1] = (long *)lVar2;
  lVar7 = (long)*pplVar4;
  *pplVar4 = (long *)lVar2;
  pplVar5[1] = (long *)lVar7;
  lVar7 = (long)pplVar4[1];
  pplVar4[1] = pplVar5[2];
  pplVar5[2] = (long *)lVar7;
  lVar7 = (long)pplVar4[2];
  pplVar4[2] = pplVar5[3];
  pplVar5[3] = (long *)lVar7;
  *pplVar5 = pplVar5[1];
  auVar13._8_8_ = lVar2;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 100bf6700; end: 100bf6843;  */

undefined1  [16]
FUN_100bf6700(long *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long *plStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 *puStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  pplVar4 = &plStack_80;
  pplVar3 = &plStack_80;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = param_1[1] - *param_1 >> 5;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3b == 0) {
    plVar2 = param_1 + 2;
    uVar5 = *plVar2 - *param_1;
    uVar7 = (long)uVar5 >> 4;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffdf < uVar5) {
      uVar7 = 0x7ffffffffffffff;
    }
    plStack_60 = plVar2;
    if (uVar7 == 0) {
      plStack_80 = (long *)0x0;
    }
    else {
      FUN_100bf66cc();
      plStack_80 = plVar2;
    }
    plVar2 = plStack_80 + lVar8 * 4;
    plStack_68 = plStack_80 + uVar7 * 4;
    lVar8 = *param_2;
    lVar9 = param_2[3];
    lVar6 = param_2[2];
    plVar2[1] = param_2[1];
    *plVar2 = lVar8;
    plVar2[3] = lVar9;
    plVar2[2] = lVar6;
    plStack_78 = plVar2;
    plStack_70 = plVar2;
    (**(code **)(*plRam0000000113815c70 + 0x140))(&lStack_58);
    param_2[1] = lStack_50;
    *param_2 = lStack_58;
    param_2[3] = lStack_40;
    param_2[2] = lStack_48;
    plStack_70 = plVar2 + 4;
    FUN_100bf6940(param_1);
    lVar8 = param_1[1];
    FUN_100bf6a94();
    param_1 = (long *)pplVar3;
    unaff_x20 = param_2;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      auVar10._8_8_ = pplVar4;
      auVar10._0_8_ = lVar8;
      return auVar10;
    }
  }
  else {
    func_0x000104ae48e8();
    pplVar4 = (long **)param_2;
  }
  func_0x000107c60e78();
  FUN_100bf6a94(&plStack_80);
  func_0x000107c60bd8(param_1);
  func_0x000104bd46a0();
  pplVar3 = &plStack_120;
  pcStack_88 = FUN_100bf6844;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_118 = &uStack_100;
  puStack_110 = &uStack_e8;
  uStack_108 = 0;
  puStack_90 = &stack0xfffffffffffffff0;
  plStack_120 = param_1;
  uStack_100 = param_6;
  lStack_f8 = param_7;
  while (uStack_e8 = param_6, lStack_e0 = param_7, param_3 != param_5) {
    lVar8 = param_3[-4];
    lVar9 = param_3[-1];
    lVar6 = param_3[-2];
    *(long *)(param_7 + -0x18) = param_3[-3];
    *(long *)(param_7 + -0x20) = lVar8;
    *(long *)(param_7 + -8) = lVar9;
    *(long *)(param_7 + -0x10) = lVar6;
    (**(code **)(*plRam0000000113815c70 + 0x140))(&lStack_d8);
    param_3[-3] = lStack_d0;
    param_3[-4] = lStack_d8;
    param_3[-1] = lStack_c0;
    param_3[-2] = lStack_c8;
    param_7 = lStack_e0 + -0x20;
    param_3 = param_3 + -4;
    param_6 = uStack_e8;
    unaff_x20 = param_5;
  }
  uStack_108 = 1;
  FUN_100bf69b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    auVar11._8_8_ = param_7;
    auVar11._0_8_ = param_6;
    return auVar11;
  }
  func_0x000107c60e78();
  if ((int)pplVar4 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  plVar2 = (long *)(pplVar3 + 2);
  lVar8 = (long)pplVar3[1];
  FUN_100bf6844(plVar2,lVar8,lVar8,*pplVar3,*pplVar3,pplVar4[1],pplVar4[1],param_8,unaff_x20,param_7
                ,&puStack_90,FUN_100bf6940);
  pplVar4[1] = (long *)lVar8;
  lVar6 = (long)*pplVar3;
  *pplVar3 = (long *)lVar8;
  pplVar4[1] = (long *)lVar6;
  lVar6 = (long)pplVar3[1];
  pplVar3[1] = pplVar4[2];
  pplVar4[2] = (long *)lVar6;
  lVar6 = (long)pplVar3[2];
  pplVar3[2] = pplVar4[3];
  pplVar4[3] = (long *)lVar6;
  *pplVar4 = pplVar4[1];
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = plVar2;
  return auVar12;
}



/* Entry: 100bf6844; end: 100bf693f;  */

undefined1  [16]
FUN_100bf6844(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = &uStack_a0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = &uStack_80;
  puStack_90 = &uStack_68;
  uStack_88 = 0;
  lStack_78 = param_7;
  uStack_80 = param_6;
  uStack_a0 = param_1;
  while (uStack_68 = param_6, lStack_60 = param_7, param_3 != param_5) {
    uVar4 = param_3[-4];
    uVar5 = param_3[-1];
    uVar3 = param_3[-2];
    *(undefined8 *)(param_7 + -0x18) = param_3[-3];
    *(undefined8 *)(param_7 + -0x20) = uVar4;
    *(undefined8 *)(param_7 + -8) = uVar5;
    *(undefined8 *)(param_7 + -0x10) = uVar3;
    (**(code **)(*plRam0000000113815c70 + 0x140))(&uStack_58);
    param_3[-3] = uStack_50;
    param_3[-4] = uStack_58;
    param_3[-1] = uStack_40;
    param_3[-2] = uStack_48;
    param_7 = lStack_60 + -0x20;
    unaff_x20 = param_5;
    param_6 = uStack_68;
    param_3 = param_3 + -4;
  }
  uStack_88 = 1;
  FUN_100bf69b4();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    auVar6._8_8_ = param_7;
    auVar6._0_8_ = param_6;
    return auVar6;
  }
  func_0x000107c60e78();
  if ((int)param_2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  puVar2 = puVar1 + 2;
  uVar4 = puVar1[1];
  FUN_100bf6844(puVar2,uVar4,uVar4,*puVar1,*puVar1,param_2[1],param_2[1],param_8,unaff_x20,param_7,
                &stack0xfffffffffffffff0,FUN_100bf6940);
  param_2[1] = uVar4;
  uVar3 = *puVar1;
  *puVar1 = uVar4;
  param_2[1] = uVar3;
  uVar3 = puVar1[1];
  puVar1[1] = param_2[2];
  param_2[2] = uVar3;
  uVar3 = puVar1[2];
  puVar1[2] = param_2[3];
  param_2[3] = uVar3;
  *param_2 = param_2[1];
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 100bf6940; end: 100bf69b3;  */

void FUN_100bf6940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  FUN_100bf6844(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 100bf69b4; end: 100bf69e7;  */

long FUN_100bf69b4(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    func_0x000104ae48fc(param_1);
  }
  return param_1;
}



/* Entry: 100bf69e8; end: 100bf6a93;  */

long * FUN_100bf69e8(long *param_1,undefined1 *param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined1 *)param_1[2];
  plVar1 = param_1;
  puVar3 = (undefined8 *)param_2;
  while (puVar4 != param_2) {
    param_1[2] = (long)(puVar4 + -0x20);
    uStack_58 = *(undefined8 *)(puVar4 + -0x18);
    uStack_60 = *(undefined8 *)(puVar4 + -0x20);
    uStack_48 = *(undefined8 *)(puVar4 + -8);
    uStack_50 = *(undefined8 *)(puVar4 + -0x10);
    plVar1 = plRam0000000113815c70;
    puVar3 = &uStack_60;
    (**(code **)(*plRam0000000113815c70 + 0x150))();
    puVar4 = (undefined1 *)param_1[2];
  }
  iVar2 = (int)puVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar1;
  }
  func_0x000107c60e78();
  if (iVar2 == 0) {
    func_0x000107c60bd8();
  }
  func_0x000104bd46a0();
  FUN_100bf69e8();
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  return plVar1;
}



/* Entry: 100bf6a94; end: 100bf6ac7;  */

long * FUN_100bf6a94(long *param_1)

{
  FUN_100bf69e8(param_1,param_1[1]);
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 100bf6ac8; end: 100bf6ca7; -[SCNGrpcRPCInfo initWithServiceMethodName:host:channelType:protocol:connectionReused:dnsResolveInMillis:connetionSetupInMillis:sslSetupInMillis:reqWireSize:responseWireSize:serverIp:cronetErrorCode:] */

undefined8 *
FUN_100bf6ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  puStack_68 = PTR_PTR_11270b0c0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    FUN_100bf6ca8(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    FUN_100bf6ca8(uVar3);
    puVar1[6] = param_5;
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    FUN_100bf6ca8(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_7;
    *(undefined4 *)((long)puVar1 + 0xc) = param_8;
    *(undefined4 *)(puVar1 + 2) = param_9;
    *(undefined4 *)((long)puVar1 + 0x14) = param_10;
    *(undefined4 *)(puVar1 + 3) = param_11;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_12;
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    FUN_100bf6ca8(uVar3);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[9];
    puVar1[9] = param_14;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bf6ca8; end: 100bf6caf;  */

void FUN_100bf6ca8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bf6cb0; end: 100bf6ce7; -[SCTemporaryMutingCategoryPluginEntryPoint setTextSendingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf6cb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d69ef0;
  func_0x000107c61428(param_1 + _DAT_112d69ef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf6ce8; end: 100bf6f53; -[SCNGrpcUnaryMetricsInfo initWithRpcInfo:connectionTime:networkTTFB:responseTime:requestSize:responseSize:responseContentType:responseContentEncoding:success:statusCode:taskId:requestId:consistentIdTracking:authSuccess:authLatency:argosSuccess:argosLatency:serverLatency:argosType:] */

undefined8 *
FUN_100bf6ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_18);
  puStack_70 = PTR_PTR_11270b0d8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[5] = param_6;
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    FUN_100bf6f54(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    FUN_100bf6f54(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_11;
    *(undefined4 *)((long)puVar1 + 0xc) = param_12;
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    FUN_100bf6f54(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    FUN_100bf6f54(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    FUN_100bf6f54(uVar3);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_16;
    func_0x000107c61170(uVar2);
    puVar1[0xe] = param_17;
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_18;
    func_0x000107c61170(uVar2);
    puVar1[0x10] = param_19;
    puVar1[0x11] = param_20;
    puVar1[0x12] = param_21;
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bf6f54; end: 100bf6f67;  */

void FUN_100bf6f54(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bf6f68; end: 100bf75f3; -[SCGrpcEventLogger logUnaryBlizzard:] */

/* WARNING: Possible PIC construction at 0x000100bf6fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf6ff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf71a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf72c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf72d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf72f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf73a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf74ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf74f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7554: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf75c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bf7240: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf75c8) */
/* WARNING: Removing unreachable block (ram,0x000100bf759c) */
/* WARNING: Removing unreachable block (ram,0x000100bf7558) */
/* WARNING: Removing unreachable block (ram,0x000100bf75a4) */
/* WARNING: Removing unreachable block (ram,0x000100bf7564) */
/* WARNING: Removing unreachable block (ram,0x000100bf7524) */
/* WARNING: Removing unreachable block (ram,0x000100bf74f8) */
/* WARNING: Removing unreachable block (ram,0x000100bf74b0) */
/* WARNING: Removing unreachable block (ram,0x000100bf7500) */
/* WARNING: Removing unreachable block (ram,0x000100bf74bc) */
/* WARNING: Removing unreachable block (ram,0x000100bf745c) */
/* WARNING: Removing unreachable block (ram,0x000100bf7488) */
/* WARNING: Removing unreachable block (ram,0x000100bf7460) */
/* WARNING: Removing unreachable block (ram,0x000100bf7404) */
/* WARNING: Removing unreachable block (ram,0x000100bf73ac) */
/* WARNING: Removing unreachable block (ram,0x000100bf7420) */
/* WARNING: Removing unreachable block (ram,0x000100bf7430) */
/* WARNING: Removing unreachable block (ram,0x000100bf7444) */
/* WARNING: Removing unreachable block (ram,0x000100bf73b0) */
/* WARNING: Removing unreachable block (ram,0x000100bf736c) */
/* WARNING: Removing unreachable block (ram,0x000100bf733c) */
/* WARNING: Removing unreachable block (ram,0x000100bf7394) */
/* WARNING: Removing unreachable block (ram,0x000100bf7340) */
/* WARNING: Removing unreachable block (ram,0x000100bf7324) */
/* WARNING: Removing unreachable block (ram,0x000100bf72fc) */
/* WARNING: Removing unreachable block (ram,0x000100bf72c4) */
/* WARNING: Removing unreachable block (ram,0x000100bf7228) */
/* WARNING: Removing unreachable block (ram,0x000100bf71a8) */
/* WARNING: Removing unreachable block (ram,0x000100bf722c) */
/* WARNING: Removing unreachable block (ram,0x000100bf7224) */
/* WARNING: Removing unreachable block (ram,0x000100bf7168) */
/* WARNING: Removing unreachable block (ram,0x000100bf7094) */
/* WARNING: Removing unreachable block (ram,0x000100bf7064) */
/* WARNING: Removing unreachable block (ram,0x000100bf7024) */
/* WARNING: Removing unreachable block (ram,0x000100bf6ffc) */
/* WARNING: Removing unreachable block (ram,0x000100bf6fbc) */
/* WARNING: Removing unreachable block (ram,0x000100bf75d0) */
/* WARNING: Removing unreachable block (ram,0x000100bf6fc0) */
/* WARNING: Removing unreachable block (ram,0x000100bf7244) */
/* WARNING: Removing unreachable block (ram,0x000100bf72d4) */
/* WARNING: Removing unreachable block (ram,0x000100bf7248) */
/* WARNING: Removing unreachable block (ram,0x000100bf7270) */
/* WARNING: Removing unreachable block (ram,0x000100bf728c) */

void FUN_100bf6f68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000100678a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bf75f4; end: 100bf75fb;  */

void FUN_100bf75f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100bf75fc; end: 100bf7657; -[SCNGrpcUnaryMetricsInfo .cxx_destruct] */

void FUN_100bf75fc(long param_1)

{
  FUN_100bf7658(param_1 + 0x78);
  FUN_100bf7658(param_1 + 0x68);
  FUN_100bf7658(param_1 + 0x60);
  FUN_100bf7658(param_1 + 0x58);
  FUN_100bf7658(param_1 + 0x50);
  FUN_100bf7658(param_1 + 0x48);
  FUN_100bf7658(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100bf7658; end: 100bf765f;  */

void FUN_100bf7658(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 100bf7660; end: 100bf76a3; -[SCNGrpcRPCInfo .cxx_destruct] */

void FUN_100bf7660(long param_1)

{
  FUN_100bf76a4(param_1 + 0x48);
  FUN_100bf76a4(param_1 + 0x40);
  FUN_100bf76a4(param_1 + 0x38);
  FUN_100bf76a4(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100bf76a4; end: 100bf76ab;  */

void FUN_100bf76a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1,0);
  return;
}



/* Entry: 100bf76ac; end: 100bf771f; -[SCSCConversationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf76ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc3e00,0);
  func_0x000107c61614(param_1 + _DAT_112fc3e08,0);
  *(undefined8 *)(param_1 + _DAT_112fc3e10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bf7720; end: 100bf77cb; -[SCSCConversationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bf7720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bf77cc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100bf77cc; end: 100bf7963;  */

void FUN_100bf77cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e7baf0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f184510,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ConvoActiveUserSessionScopeGraphBridge/SCSCConversationServicesSaberServiceProvider.swift"
                            ,0x59,2,0x48,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf7964);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5398c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bf7964; end: 100bf796f; -[SCSCConversationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf7964(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc3e00;
  func_0x000107c61428(param_1 + _DAT_112fc3e00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf7970; end: 100bf79c3;  */

void FUN_100bf7970(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf79c4; end: 100bf79cf; -[SCSCConversationServicesSaberServiceProvider setConvoActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bf79c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc3e08;
  func_0x000107c61428(param_1 + _DAT_112fc3e08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bf79d0; end: 100bf7a03; -[SCSCConversationServicesSaberServiceProvider __safeProvide] */

void FUN_100bf79d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bf7a04();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


