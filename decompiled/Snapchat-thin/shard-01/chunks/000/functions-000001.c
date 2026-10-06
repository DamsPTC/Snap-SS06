/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100beb040; end: 100beb083; -[SCFriendsFeedMessageContent internalInit] */

void FUN_100beb040(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1127039a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100beb084; end: 100beb08b; -[SCNMessagingSnapItem snapModeState] */

undefined8 FUN_100beb084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100beb08c; end: 100beb1a7;  */

undefined * FUN_100beb08c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb1a8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d6aae0;
    func_0x0001000285a8(0x112d6aae0,&UNK_10d92e060);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,PTR___ss11AnyHashableVN_11034e448);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 100beb1a8; end: 100beb1cb; -[SCFriendsFeedMessageContent copyWithZone:] */

undefined8 FUN_100beb1a8(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100beb1cc; end: 100beb1d3; -[SCNMessagingConversationSubTypeMetadata campaignMetadata] */

undefined8 FUN_100beb1cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100beb1d4; end: 100beb1db; -[SCNMessagingCampaignMetadata isNoFillAd] */

undefined1 FUN_100beb1d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 100beb1dc; end: 100beb1e3; -[SCNMessagingCampaignMetadata adResponseBytes] */

undefined8 FUN_100beb1dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100beb1e4; end: 100beb1eb; -[SCNMessagingCampaignMetadata responseInteractionSetting] */

undefined8 FUN_100beb1e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100beb1ec; end: 100beb1f3; -[SCNMessagingCampaignMetadata feedInsertionIndex] */

undefined8 FUN_100beb1ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100beb1f4; end: 100beb1fb; -[SCNMessagingCampaignMetadata adSyncAttemptId] */

undefined8 FUN_100beb1f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100beb1fc; end: 100beb203; -[SCNMessagingCampaignMetadata chatHeadline] */

undefined8 FUN_100beb1fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100beb204; end: 100beb30b; +[SCFriendsFeedConversationSubtypeMetadata noFillWithAdResponseBytes:isUserInputDisabled:feedInsertionIndex:adSyncAttemptId:chatHeadline:] */

void FUN_100beb204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puVar1 = PTR_PTR_1126d7838;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar3);
  puVar2[0x48] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_6;
  func_0x000107c61174(param_6);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_7;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100beb30c; end: 100beb34f; -[SCFriendsFeedConversationSubtypeMetadata internalInit] */

void FUN_100beb30c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1127039c8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100beb350; end: 100beb373; -[SCFriendsFeedConversationSubtypeMetadata copyWithZone:] */

undefined8 FUN_100beb350(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100beb374; end: 100beb387;  */

ulong FUN_100beb374(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb46c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb470);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ba4d0;
    func_0x000107c61168(PTR_PTR_1126ba4d0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ba4d0;
    func_0x000107c61168(PTR_PTR_1126ba4d0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100bebfa8(0,0x112f14498,&PTR_PTR_1126ba4d0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb544);
  (*pcVar2)();
}



/* Entry: 100beb388; end: 100beb543;  */

ulong FUN_100beb388(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb46c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb470);
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
  func_0x000100bebfa8(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100beb544);
  (*pcVar2)();
}



/* Entry: 100beb544; end: 100beb597;  */

uint FUN_100beb544(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c61174();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5d028();
    uVar2 = 1;
    if (uVar1 < 0xb) {
      uVar2 = 0xde >> (ulong)((uint)uVar1 & 0x1f);
    }
  }
  func_0x000107c61170(param_1);
  return uVar2 & 1;
}



/* Entry: 100beb598; end: 100beb647; -[SCGhostToFeedLogger logStep:fetchContexts:updateCount:] */

void FUN_100beb598(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_5);
  func_0x000107c6071c();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100bed5bc;
  puStack_70 = &UNK_1108714c0;
  uStack_68 = param_5;
  lStack_60 = param_2;
  uStack_58 = param_4;
  uStack_50 = param_1;
  uStack_48 = param_6;
  func_0x000107c61174(param_5);
  func_0x000107c4e524(uVar1,param_3,&puStack_88);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 100beb648; end: 100beb6c7;  */

undefined * FUN_100beb648(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112f145e0;
    func_0x0001000285a8(0x112f145e0,&UNK_10db49710);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Entry: 100beb6c8; end: 100beb847;  */

long FUN_100beb6c8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  puVar10 = (ulong *)(param_4 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar12 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *puVar10;
  if (param_2 == (undefined8 *)0x0) {
    lVar14 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar14 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100beb848);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar13 = 0;
    uVar11 = 0x3f - uVar9 >> 6;
    lVar14 = lVar8;
    while( true ) {
      while (uVar12 == 0) {
        bVar7 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100beb844);
          (*pcVar6)();
        }
        if ((long)uVar11 <= lVar14) {
          uVar12 = 0;
          if ((long)uVar11 <= lVar8 + 1) {
            uVar11 = lVar8 + 1;
          }
          lVar14 = uVar11 - 1;
          param_3 = lVar13;
          goto LAB_100beb7f8;
        }
        uVar12 = puVar10[lVar14];
      }
      lVar13 = lVar13 + 1;
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 - 1 & uVar12;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x38) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x20 +
               lVar14 * 0x800);
      uVar3 = puVar1[1];
      uVar2 = puVar1[2];
      uVar4 = puVar1[3];
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[3] = uVar4;
      if (lVar13 == param_3) break;
      param_2 = param_2 + 4;
      func_0x000107c61434();
      func_0x000107c61174(uVar4);
      lVar8 = lVar14;
    }
    func_0x000107c61434();
    func_0x000107c61174(uVar4);
  }
LAB_100beb7f8:
  *param_1 = param_4;
  param_1[1] = (long)puVar10;
  param_1[2] = ~uVar9;
  param_1[3] = lVar14;
  param_1[4] = uVar12;
  return param_3;
}



/* Entry: 100beb848; end: 100beb84f;  */

void FUN_100beb848(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 100beb850; end: 100beb947;  */

void FUN_100beb850(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_50 = *(undefined2 *)(param_2 + 4);
  uStack_40 = uStack_70;
  uStack_38 = uStack_68;
  uStack_30 = uStack_60;
  uStack_28 = uStack_58;
  func_0x000100bac6f8(0);
  func_0x000107c610f8();
  func_0x000100beb900(&uStack_40,auStack_80,0x112f14488,&UNK_10db495f0);
  func_0x000100beb900(&uStack_38,auStack_80,0x112f14490,&UNK_10db495f8);
  func_0x000100beb900(&uStack_30,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  puVar1 = &uStack_70;
  FUN_100beb948();
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100beb948; end: 100bebb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100beb948(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined1 auStack_90 [16];
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  func_0x000107c614f0();
  lVar10 = *param_1;
  lVar12 = *(long *)(lVar10 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = lVar10;
  if (lVar12 != 0) {
    puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100bebc50(0,lVar12,0);
    puVar13 = puStack_70;
    lVar8 = 0;
    func_0x000100bebcc8();
    puVar11 = (undefined8 *)(lVar10 + 0x38);
    do {
      uVar2 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar3 = puVar11[-1];
      uVar6 = *puVar11;
      lVar10 = lVar8;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar10 + _DAT_112f14550);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      *(undefined8 *)(lVar10 + _DAT_112f14558) = uVar3;
      *(undefined8 *)(lVar10 + _DAT_112f14560) = uVar6;
      puVar7 = PTR_s_init_1125d9248;
      lStack_80 = lVar10;
      lStack_78 = lVar8;
      func_0x000107c61434(uVar5);
      func_0x000107c61174(uVar6);
      plVar9 = &lStack_80;
      func_0x000107c61154(plVar9,puVar7);
      uVar4 = *(ulong *)(puVar13 + 0x10);
      puStack_70 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar4) {
        FUN_100bebc50(1 < *(ulong *)(puVar13 + 0x18),uVar4 + 1,1);
      }
      puVar11 = puVar11 + 4;
      *(ulong *)(puStack_70 + 0x10) = uVar4 + 1;
      *(long **)(puStack_70 + uVar4 * 8 + 0x20) = plVar9;
      lVar12 = lVar12 + -1;
      puVar13 = puStack_70;
    } while (lVar12 != 0);
  }
  *(undefined **)(unaff_x20 + _DAT_112f14590) = puVar13;
  *(long *)(unaff_x20 + _DAT_112f14598) = param_1[1];
  lVar12 = param_1[2];
  plVar9 = (long *)(unaff_x20 + _DAT_112f145a0);
  plVar9[1] = param_1[3];
  *plVar9 = lVar12;
  *(char *)(unaff_x20 + _DAT_112f145a8) = (char)param_1[4];
  FUN_100bebce8(&lStack_68,0x112f14488,&UNK_10db495f0);
  *(undefined1 *)(unaff_x20 + _DAT_112f145b0) = *(undefined1 *)((long)param_1 + 0x21);
  func_0x000107c61154(auStack_90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bebb2c; end: 100bebc4f;  */

undefined * FUN_100bebb2c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100bebc50);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    func_0x000100bebc6c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000100bebcc8(0);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100bebc50; end: 100bebce7;  */

void FUN_100bebc50(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100bebb2c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100bebce8; end: 100bebd4f;  */

undefined8 FUN_100bebce8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 100bebd50; end: 100bebd57;  */

void FUN_100bebd50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bebd58; end: 100bebda7;  */

void FUN_100bebd58(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bebda8; end: 100bebdef;  */

/* WARNING: Possible PIC construction at 0x000100bebddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bebde0) */

void FUN_100bebda8(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c1a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100bebdf0; end: 100bebefb; -[SCFriendsFeedDataCoordinator _processNativeDataStream:] */

/* WARNING: Possible PIC construction at 0x000100bebe3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bebe9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bebec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bebea0) */
/* WARNING: Removing unreachable block (ram,0x000100bebe40) */
/* WARNING: Removing unreachable block (ram,0x000100bebecc) */

void FUN_100bebdf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c4d454();
  func_0x000107c61180();
  func_0x000107c40794();
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100bebefc; end: 100bebf4b; -[SCFriendsFeedNativeDataStream nativeData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bebefc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f14590);
  func_0x000100bebcc8(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bebf4c; end: 100bebfe7; -[SCFriendsFeedNativeDataStream trackingIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bebf4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f145a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f145a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bebfe8; end: 100bec053; -[SCFriendsFeedNativeDataStream fetchContexts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bebfe8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112f14598);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000100bebfa8(0,0x112f14498,&PTR_PTR_1126ba4d0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100bec054; end: 100bec063; -[SCFriendsFeedNativeDataStream isInitialLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100bec054(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f145a8);
}



/* Entry: 100bec064; end: 100bec073; -[SCFriendsFeedNativeDataStream isSuccessfulSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100bec064(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f145b0);
}



/* Entry: 100bec074; end: 100bec0a3; -[SCThrottleTimer cancel] */

void FUN_100bec074(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c3c2f4();
  uVar1 = param_1;
  func_0x000107c50148(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1b4190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setIsScheduled__11264aa88,uVar1);
  return;
}



/* Entry: 100bec0a4; end: 100bec0b3; -[SCFriendsFeedNativeData feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bec0a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14558);
}



/* Entry: 100bec0b4; end: 100bec0ff; -[SCFriendsFeedNativeData feedId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bec0b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f14550);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f14550))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bec100; end: 100bec10f; -[SCFriendsFeedNativeData activeMessageData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bec100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14560));
  return;
}



/* Entry: 100bec110; end: 100bec1e7;  */

undefined1 FUN_100bec110(undefined8 param_1)

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
  func_0x000107c406e0(param_1);
  func_0x000107c61180();
  func_0x000107c4c5a4();
  func_0x000107c61170(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100bec1e8; end: 100bec1ef; -[SCFriendsFeedActiveMessageData conversationSubtypeMetadata] */

undefined8 FUN_100bec1e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100bec1f0; end: 100bec25f;  */

undefined8 FUN_100bec1f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_2);
  uVar1 = param_1;
  func_0x000107c61174(param_1);
  FUN_100bec260();
  uVar2 = uVar1;
  func_0x000100bec2c8();
  uVar3 = param_1;
  FUN_100bec330(param_1,param_2,uVar1,uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 100bec260; end: 100bec32f;  */

undefined1 FUN_100bec260(void)

{
  if (lRam00000001137fc1c0 != -1) {
    func_0x00010002a2fc(0x1137fc1c0,&PTR___NSConcreteGlobalBlock_110d66878);
  }
  return uRam00000001137fc01e;
}



/* Entry: 100bec330; end: 100bec433;  */

ulong FUN_100bec330(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  if (param_1 == 0 && param_2 == 0) {
LAB_100bec3c0:
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar2 = param_2;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    func_0x000107c49d0c();
    if ((uVar2 & 1) == 0) {
      uVar2 = param_1;
      FUN_100bec434();
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_100bec3c0;
      if ((param_3 & 1) == 0) {
        uVar2 = param_1;
        func_0x000107c499dc();
        if (((param_4 & 1) != 0) || ((uVar2 & 1) != 0)) goto LAB_100bec3c4;
      }
      else if ((param_4 & 1) != 0) goto LAB_100bec3c0;
      uVar1 = param_1;
      func_0x000107c5d984();
      func_0x000107c61180();
      uVar2 = param_2;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      FUN_100bec4d0(uVar2);
    }
    else {
      uVar2 = 0;
    }
    func_0x000107c61170(uVar1);
  }
LAB_100bec3c4:
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 100bec434; end: 100bec4cf;  */

ulong FUN_100bec434(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c49d0c();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x000107c5db08(param_1);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49d0c();
    func_0x000107c61170(uVar2);
  }
  else {
    uVar3 = 1;
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 100bec4d0; end: 100bec56f;  */

ulong FUN_100bec4d0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  func_0x000107c61174();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f69878);
    if ((((uVar1 & 1) == 0) &&
        (uVar1 = param_1,
        func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f69898),
        (uVar1 & 1) == 0)) &&
       (uVar1 = param_1,
       func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f698b8),
       (uVar1 & 1) == 0)) {
      uVar1 = param_1;
      func_0x000107c49d0c(param_1,param_2,&PTR____CFConstantStringClassReference_110f698d8);
    }
    else {
      uVar1 = 1;
    }
  }
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 100bec570; end: 100bec613; -[SCFriendsFeedConversationSubtypeMetadata matchCampaign:noFill:] */

/* WARNING: Possible PIC construction at 0x000100bec5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bec600) */

void FUN_100bec570(long param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x40),*(undefined1 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100bec614; end: 100bec65f; -[SCFriendsFeedNativeDataStream .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100bec630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bec634) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bec614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f14590));
  return;
}



/* Entry: 100bec660; end: 100bec763; -[SCGhostToFeedLogger logProcessFeedItemsSubstep:entriesFetched:startTime:fetchContexts:] */

void FUN_100bec660(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  uVar2 = param_1;
  func_0x000107c61174(param_6);
  func_0x000107c6071c();
  func_0x000107c61144(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(param_6);
  func_0x000107c6111c(auStack_80,auStack_58);
  uStack_78 = param_4;
  uStack_70 = param_5;
  uStack_68 = uVar2;
  uStack_60 = param_1;
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_80);
  func_0x000107c61170(param_6);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_6);
  return;
}



/* Entry: 100bec764; end: 100bec7bb;  */

bool FUN_100bec764(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c61174();
  func_0x000107c610f4(puVar1);
  func_0x000107c48ff8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return puVar1 != (undefined *)0x0;
}



/* Entry: 100bec7bc; end: 100bec867;  */

void FUN_100bec7bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x38;
  func_0x000107c61148();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_108bdfecc;
    puStack_40 = &UNK_110849530;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x000107c61174(uVar2);
    uStack_38 = uVar2;
    func_0x00010007380c(uVar3,&puStack_58);
    func_0x000107c61170(uStack_38);
  }
  else {
    func_0x000107c3c870(lVar1);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 100bec868; end: 100bec9b3; -[SCSnapchattersDataProvider _snapchattersWithUserIds:completionQueue:completionHandler:] */

void FUN_100bec868(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61174(param_5);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c5b4f4();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_100bf0978;
  puStack_70 = &UNK_11089b0f0;
  uStack_68 = uVar3;
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x000100504554(param_3,&puStack_88);
  func_0x000107c61170(param_3);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_100bf0a7c;
  puStack_a0 = &UNK_11084aaa8;
  uStack_98 = uVar2;
  uStack_90 = param_5;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(param_5);
  func_0x00010007380c(param_4,&puStack_b8);
  func_0x000107c61170(param_4);
  func_0x000107c3be7c(param_1);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uStack_90);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uStack_68);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 100bec9b4; end: 100beca47; -[SCUserIdToSnapchatterFetcherImpl snapchattersWithUserIds:] */

void FUN_100bec9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61174(param_3);
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c3c874(param_1,param_2,param_3,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar3 = puVar1;
  func_0x000107c40808();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c3ccb0(param_1,param_2,puVar1);
  }
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100beca48; end: 100becea3; -[SCUserIdToSnapchatterFetcherImpl _snapchattersWithUserIds:newSnapchatterObservers:] */

void FUN_100beca48(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1f0 [128];
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar14 = param_3;
  func_0x000107c40808();
  puVar1 = PTR____NSDictionary0__struct_11034ab58;
  if (puVar14 != (undefined8 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    puVar13 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c3e15c();
    func_0x000107c61180();
    func_0x000107c611ec(param_1 + 0x28);
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    plStack_220 = (long *)0x0;
    func_0x000107c61174(param_3);
    puVar3 = param_3;
    func_0x000107c4080c(param_3,param_2,&uStack_230,auStack_f0,0x10);
    if (puVar3 != (undefined8 *)0x0) {
      lVar11 = *plStack_220;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if (*plStack_220 != lVar11) {
            func_0x000107c61128(param_3);
          }
          uVar16 = *(ulong *)(lStack_228 + (long)puVar14 * 8);
          uVar4 = uVar16;
          func_0x000107c4adac();
          if (uVar4 != 0) {
            uVar4 = *(ulong *)(param_1 + 0x20);
            func_0x000107c4d9e8(uVar4,param_2,uVar16);
            func_0x000107c61180();
            puVar6 = puVar2;
            if ((uVar4 != 0) &&
               (uVar5 = uVar16,
               func_0x000107c49d0c(uVar16,param_2,&PTR____CFConstantStringClassReference_110e12b58),
               (uVar5 & 1) == 0)) {
              puVar6 = puVar13;
              uVar16 = uVar4;
            }
            func_0x000107c3d798(puVar6,param_2,uVar16);
            func_0x000107c61170(uVar4);
          }
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar3 != puVar14);
        puVar3 = param_3;
        func_0x000107c4080c(param_3,param_2,&uStack_230,auStack_f0,0x10);
      } while (puVar3 != (undefined8 *)0x0);
    }
    func_0x000107c61170(param_3);
    func_0x000107c611f0(param_1 + 0x28);
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    func_0x000107c61174(puVar13);
    puVar6 = puVar13;
    func_0x000107c4080c(puVar13,param_2,&uStack_270,auStack_170,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar11 = *plStack_260;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_260 != lVar11) {
            func_0x000107c61128(puVar13);
          }
          lVar7 = *(long *)(lStack_268 + (long)puVar15 * 8);
          func_0x000107c5b460();
          func_0x000107c61180();
          if (lVar7 != 0) {
            lVar8 = lVar7;
            func_0x000107c5d984(lVar7);
            func_0x000107c61180();
            func_0x000107c56bd8(puVar1,param_2,lVar7,lVar8);
            func_0x000107c61170(lVar8);
          }
          func_0x000107c61170(lVar7);
          puVar15 = puVar15 + 1;
        } while (puVar6 != puVar15);
        puVar6 = puVar13;
        func_0x000107c4080c(puVar13,param_2,&uStack_270,auStack_170,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar13);
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    lStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    plStack_2a0 = (long *)0x0;
    func_0x000107c61174(puVar2);
    puVar3 = &uStack_2b0;
    puVar6 = puVar2;
    func_0x000107c4080c(puVar2,param_2,puVar3,auStack_1f0,0x10);
    if (puVar6 != (undefined *)0x0) {
      lVar11 = *plStack_2a0;
      do {
        puVar15 = (undefined *)0x0;
        do {
          if (*plStack_2a0 != lVar11) {
            func_0x000107c61128(puVar2);
          }
          uVar12 = *(undefined8 *)(lStack_2a8 + (long)puVar15 * 8);
          lVar7 = param_1;
          func_0x000107c3c868(param_1,param_2,uVar12);
          func_0x000107c61180();
          if ((lVar7 == 0) ||
             (uVar9 = uVar12,
             func_0x000107c49d0c(uVar12,param_2,&PTR____CFConstantStringClassReference_110e12b58),
             (int)uVar9 != 0)) {
            lVar8 = param_1;
            func_0x000107c3b710(param_1,param_2,uVar12);
            func_0x000107c61180();
            lVar10 = lVar8;
            func_0x000107c5b460();
            func_0x000107c61180();
            func_0x000107c61170(lVar7);
            if (lVar10 == 0) {
              lVar7 = 0;
            }
            else {
              func_0x000107c3d798(param_4,param_2,lVar8);
              lVar7 = lVar10;
              func_0x000107c5d984(lVar10);
              func_0x000107c61180();
              func_0x000107c56bd8(puVar1,param_2,lVar10,lVar7);
              func_0x000107c61170(lVar7);
              lVar7 = lVar10;
            }
          }
          else {
            lVar8 = lVar7;
            func_0x000107c5d984(lVar7);
            func_0x000107c61180();
            func_0x000107c56bd8(puVar1,param_2,lVar7,lVar8);
          }
          func_0x000107c61170(lVar8);
          func_0x000107c61170(lVar7);
          puVar15 = puVar15 + 1;
        } while (puVar6 != puVar15);
        puVar3 = &uStack_2b0;
        puVar6 = puVar2;
        func_0x000107c4080c(puVar2,param_2,puVar3,auStack_1f0,0x10);
      } while (puVar6 != (undefined *)0x0);
    }
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar13);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    puVar13 = (undefined *)param_3[3];
    func_0x000107c61174(puVar3);
    func_0x000107c4e124(puVar13);
    func_0x000107c61180();
    puVar1 = puVar13;
    func_0x000107c5b498();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100becea4; end: 100becf0f; -[SCUserIdToSnapchatterFetcherImpl _snapchatterFromFetchedResultWithUserId:] */

void FUN_100becea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c4e124(uVar2);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5b498();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100becf10; end: 100becf17; -[SCSnapchattersFetchedResultObserverRepositoryV1 outgoingSnapchattersObserver] */

void FUN_100becf10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 100becf18; end: 100becf4f;  */

void FUN_100becf18(void)

{
  func_0x000107c610f4(PTR_PTR_1126db0a8);
  func_0x000107c46638();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100becf50; end: 100becfcf; -[SCSnapchattersFetchedResultObserver snapchatterWithUserId:] */

void FUN_100becf50(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5d990(param_1);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100becfd0; end: 100becfdf; -[SCSnapchattersFetchedResultObserver userIdToSnapchatterMap] */

void FUN_100becfd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_valueWithRegisteredIdentifier__1126836f0,
             &PTR____CFConstantStringClassReference_110eecd38);
  return;
}



/* Entry: 100becfe0; end: 100bed073; -[SCDocObjectFetchedResultObserver valueWithRegisteredIdentifier:] */

void FUN_100becfe0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c4adac();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c611ec(param_1 + 0x28);
    func_0x000107c3cba0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c4d9e8(uVar2,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c611f0(param_1 + 0x28);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100bed074; end: 100bed123; -[SCUserIdToSnapchatterFetcherImpl _fetchedSnapchatterObserverWithUserId:] */

void FUN_100bed074(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  puVar3 = PTR_PTR_1126db0c8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x100bed2ec;
  puStack_40 = &UNK_110ab7260;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4dac4(puVar3,param_2,uVar1,uVar2,&puStack_58);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100bed124; end: 100bed1a3; +[SCSnapchatterObserver observerForDocObjectContext:observationQueue:fetchBlock:] */

void FUN_100bed124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c4665c();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100bed1a4; end: 100bed263; -[SCSnapchatterObserver initWithDocObjectContext:observationQueue:fetchBlock:] */

undefined1 *
FUN_100bed1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126fdcd8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c0ae8;
    func_0x000107c4dac4();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bed264; end: 100bed2e3; +[SCDocObjectObserver observerForDocObjectContext:observationQueue:fetchBlock:] */

void FUN_100bed264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c46664();
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100bed2e4; end: 100bed2fb; -[SCSnapchatterObserver snapchatter] */

void FUN_100bed2e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_value_112683588);
  return;
}



/* Entry: 100bed2fc; end: 100bed557;  */

void FUN_100bed2fc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61158(PTR_PTR_1126b15c8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c430a4(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_100bed558();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  func_0x000107c61174(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_DAT_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  func_0x000107c61180();
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    func_0x000107c60e14();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_DAT_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000100105004(&puStack_1a0);
  func_0x000107c61170(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_90);
  puVar4 = puVar3;
  func_0x000107c43638(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100bed558; end: 100bed5bb;  */

undefined ** FUN_100bed558(void)

{
  int iVar1;
  
  if ((bRam0000000113828c60 & 1) == 0) {
    iVar1 = 0x13828c60;
    func_0x000107c60e48();
    if (iVar1 != 0) {
      func_0x000107c60e34(&DAT_105004938,&PTR_PTR_113291a28,0x100000000);
      func_0x000107c60e4c(0x113828c60);
    }
  }
  return &PTR_PTR_113291a28;
}



/* Entry: 100bed5bc; end: 100bed6bb;  */

/* WARNING: Possible PIC construction at 0x000100bed684: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bed730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bed760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bed734) */
/* WARNING: Removing unreachable block (ram,0x000100bed688) */
/* WARNING: Removing unreachable block (ram,0x000100bed6b8) */
/* WARNING: Removing unreachable block (ram,0x000100bed6a0) */
/* WARNING: Removing unreachable block (ram,0x000100bed764) */

void FUN_100bed5bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_110,auStack_c8,0x10);
  if (lVar1 != 0) {
    lVar3 = *plStack_100;
    do {
      lVar4 = 0;
      do {
        if (*plStack_100 != lVar3) {
          func_0x000107c61128(lVar2);
        }
        func_0x000107c3be84(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),param_2,
                            *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(lStack_108 + lVar4 * 8),
                            *(undefined8 *)(param_1 + 0x40));
        lVar4 = lVar4 + 1;
      } while (lVar1 != lVar4);
      lVar1 = lVar2;
      func_0x000107c4080c(lVar2,param_2,&uStack_110,auStack_c8,0x10);
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100bed6bc; end: 100bed77b; -[SCGhostToFeedGrapheneLogger logFeedUpdateWithCount:] */

/* WARNING: Possible PIC construction at 0x000100bed730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bed760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bed734) */
/* WARNING: Removing unreachable block (ram,0x000100bed764) */

void FUN_100bed6bc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba080;
  func_0x000107c43c0c(PTR_PTR_1126ba080);
  func_0x000107c61180();
  func_0x000100440e90(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61180();
  func_0x000107c5e508(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100bed77c; end: 100bed7a7; +[SCGrapheneGhostToFeedMetric g2fFeedUpdateCount] */

void FUN_100bed77c(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba080);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bed7a8; end: 100bed82f;  */

void FUN_100bed7a8(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c45aec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bed830; end: 100bef1e7; +[SCSnapchatter immutableObjectParse:bufferSize:] */

void FUN_100bed830(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined *puVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  ushort uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  ushort *puVar19;
  long lVar20;
  uint *puVar21;
  undefined4 uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined4 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  uint *puVar34;
  undefined *puVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  uVar3 = *param_3;
  piVar1 = (int *)((long)param_3 + (ulong)uVar3);
  puVar11 = PTR_PTR_1126b15c8;
  func_0x000107c610f4();
  lVar17 = (long)*piVar1;
  uVar15 = *(ushort *)((long)piVar1 - lVar17);
  if (uVar15 < 5) {
    puStack_88 = (undefined *)0x0;
LAB_100bed920:
    puStack_90 = (undefined *)0x0;
LAB_100bed924:
    puStack_b0 = (undefined *)0x0;
LAB_100bed92c:
    bVar5 = false;
LAB_100bed930:
    puStack_b8 = (undefined *)0x0;
LAB_100bed934:
    lVar17 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)piVar1 - lVar17))[2];
    if (uVar23 == 0) {
      puStack_88 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puStack_88 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar17 = (long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - lVar17);
    }
    lVar17 = -lVar17;
    if (uVar15 < 7) goto LAB_100bed920;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar17 + 6);
    if (uVar23 == 0) {
      puStack_90 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puStack_90 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar17 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar15 < 9) goto LAB_100bed924;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar17 + 8);
    if (uVar23 == 0) {
      puStack_b0 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puStack_b0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar17 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar15 < 0xb) goto LAB_100bed92c;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar17 + 10);
    if (uVar23 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)((long)piVar1 + uVar23) != '\0';
    }
    if (uVar15 < 0xd) goto LAB_100bed930;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar17 + 0xc);
    if (uVar23 == 0) {
      puStack_b8 = (undefined *)0x0;
    }
    else {
      uVar30 = (ulong)*(uint *)((long)piVar1 + uVar23);
      puVar34 = (uint *)((long)((long)piVar1 + uVar23) + uVar30);
      puVar33 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar34);
      func_0x000107c61180();
      if (*puVar34 != 0) {
        lVar17 = (long)param_3 + uVar30 + uVar23 + (ulong)uVar3 + 10;
        do {
          uVar23 = (ulong)*(uint *)(lVar17 + -6);
          puVar24 = PTR_PTR_1126ba270;
          func_0x000107c610f4(PTR_PTR_1126ba270);
          lVar20 = (long)*(int *)(lVar17 + uVar23 + -6);
          lVar18 = lVar17 + (uVar23 - lVar20);
          uVar15 = *(ushort *)(lVar18 + -6);
          if (uVar15 < 5) {
            puVar27 = (undefined *)0x0;
            uVar36 = 0;
          }
          else {
            uVar30 = (ulong)*(ushort *)(lVar18 + -2);
            if (uVar30 == 0) {
              puVar27 = (undefined *)0x0;
            }
            else {
              lVar18 = lVar17 + uVar23 + uVar30;
              puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  lVar18 + (ulong)*(uint *)(lVar18 + -6) + -2);
              func_0x000107c61180();
              lVar20 = (long)*(int *)(lVar17 + uVar23 + -6);
              uVar15 = *(ushort *)(lVar17 + (uVar23 - lVar20) + -6);
            }
            uVar36 = 0;
            if ((6 < uVar15) &&
               (uVar30 = (ulong)*(ushort *)(lVar17 + (uVar23 - lVar20)), uVar30 != 0)) {
              uVar36 = *(undefined8 *)(lVar17 + uVar23 + uVar30 + -6);
            }
          }
          func_0x000107c45d58(uVar36,puVar24,param_2,puVar27);
          func_0x000107c61170(puVar27);
          func_0x000107c3d798(puVar33,param_2,puVar24);
          func_0x000107c61170(puVar24);
          puVar21 = (uint *)(lVar17 + -2);
          lVar17 = lVar17 + 4;
        } while (puVar21 != puVar34 + (ulong)*puVar34 + 1);
      }
      puStack_b8 = puVar33;
      func_0x000107c40794();
      func_0x000107c61170(puVar33);
      lVar17 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar15 < 0xf) || (uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar17 + 0xe), uVar23 == 0))
    goto LAB_100bed934;
    puVar34 = (uint *)((long)piVar1 + uVar23);
    lVar17 = (long)puVar34 + (ulong)*puVar34;
  }
  FUN_100bef1e8();
  func_0x000107c61180();
  lVar18 = (long)*piVar1;
  uVar15 = *(ushort *)((long)piVar1 - lVar18);
  if (uVar15 < 0x11) {
    puStack_70 = (undefined *)0x0;
LAB_100bed9d8:
    bVar4 = false;
LAB_100bed9dc:
    iVar16 = (int)lVar18;
    puStack_78 = (undefined *)0x0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)piVar1 - lVar18))[8];
    if (uVar23 == 0) {
      puStack_70 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puStack_70 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar18 = (long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - lVar18);
    }
    if (uVar15 < 0x15) goto LAB_100bed9d8;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + (0x14 - lVar18));
    if (uVar23 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + uVar23) != '\0';
    }
    if ((uVar15 < 0x17) ||
       (uVar23 = (ulong)*(ushort *)((long)piVar1 + (0x16 - lVar18)), uVar23 == 0))
    goto LAB_100bed9dc;
    puVar34 = (uint *)((long)piVar1 + uVar23);
    uVar3 = *puVar34;
    puStack_78 = PTR_PTR_1126bb6c8;
    func_0x000107c610f4();
    piVar2 = (int *)((long)puVar34 + (ulong)uVar3);
    piVar12 = piVar2;
    FUN_100befab0();
    puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (((*puVar19 < 5) || ((ulong)puVar19[2] == 0)) ||
       (*puVar19 < 7 || *(char *)((long)piVar2 + (ulong)puVar19[2]) != '\x02')) {
      bVar6 = true;
    }
    else {
      bVar6 = puVar19[3] == 0;
    }
    piVar13 = piVar2;
    func_0x000100befafc();
    puVar33 = PTR_PTR_1126bb6d0;
    if (piVar12 == (int *)0x0) {
      if (!bVar6) {
        puVar24 = PTR_PTR_1126db228;
        func_0x000107c610fc(PTR_PTR_1126db228);
        func_0x000107c4e4dc(puVar33,param_2,puVar24);
        func_0x000107c61180();
        goto LAB_100beea6c;
      }
      if (piVar13 != (int *)0x0) {
        puVar24 = PTR_PTR_1126bb6c0;
        func_0x000107c610f4(PTR_PTR_1126bb6c0);
        lVar18 = (long)*piVar13;
        uVar15 = *(ushort *)((long)piVar13 - lVar18);
        if (uVar15 < 5) {
          puVar27 = (undefined *)0x0;
          bVar8 = false;
          uVar14 = 0;
          bVar6 = false;
          bVar7 = false;
          uVar26 = 0;
          uVar36 = 0;
LAB_100beed2c:
          puVar32 = (undefined *)0x0;
          uVar22 = 0;
          bVar10 = false;
          bVar9 = false;
        }
        else {
          if (((ushort *)((long)piVar13 - lVar18))[2] == 0) {
            puVar27 = (undefined *)0x0;
          }
          else {
            puVar27 = PTR_PTR_1126d78b8;
            func_0x000107c610f4(PTR_PTR_1126d78b8);
            func_0x000107c47854();
            lVar18 = (long)*piVar13;
            uVar15 = *(ushort *)((long)piVar13 - lVar18);
          }
          lVar18 = -lVar18;
          uVar36 = 0;
          if (uVar15 < 7) {
            uVar14 = 0;
LAB_100beed20:
            bVar6 = false;
LAB_100beed24:
            bVar8 = false;
            bVar7 = false;
LAB_100beed28:
            uVar26 = 0;
            goto LAB_100beed2c;
          }
          uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 6);
          if (uVar23 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)((long)piVar13 + uVar23);
          }
          if (uVar15 < 9) goto LAB_100beed20;
          uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 8);
          if (uVar23 == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)((long)piVar13 + uVar23) != '\0';
          }
          if (uVar15 < 0xb) goto LAB_100beed24;
          uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 10);
          if (uVar23 != 0) {
            uVar36 = *(undefined8 *)((long)piVar13 + uVar23);
          }
          if (uVar15 < 0xd) goto LAB_100beed24;
          uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 0xc);
          if (uVar23 == 0) {
            bVar7 = false;
          }
          else {
            bVar7 = *(char *)((long)piVar13 + uVar23) != '\0';
          }
          if (uVar15 < 0xf) {
            bVar8 = false;
            goto LAB_100beed28;
          }
          uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 0xe);
          if (uVar23 == 0) {
            bVar8 = false;
          }
          else {
            bVar8 = *(char *)((long)piVar13 + uVar23) != '\0';
          }
          if (uVar15 < 0x11) goto LAB_100beed28;
          uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 0x10);
          if (uVar23 == 0) {
            uVar26 = 0;
          }
          else {
            uVar26 = *(undefined4 *)((long)piVar13 + uVar23);
          }
          if (uVar15 < 0x13) goto LAB_100beed2c;
          if (*(short *)((long)piVar13 + lVar18 + 0x12) == 0) {
            puVar32 = (undefined *)0x0;
          }
          else {
            puVar32 = PTR_PTR_1126db2c0;
            func_0x000107c610f4();
            func_0x000107c48248();
            lVar18 = -(long)*piVar13;
            uVar15 = *(ushort *)((long)piVar13 - (long)*piVar13);
          }
          if (uVar15 < 0x15) {
            uVar22 = 0;
            bVar10 = false;
LAB_100beef4c:
            bVar9 = false;
          }
          else {
            uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 0x14);
            bVar10 = false;
            if (uVar23 != 0) {
              bVar10 = *(char *)((long)piVar13 + uVar23) != '\0';
            }
            if (uVar15 < 0x17) {
              uVar22 = 0;
              goto LAB_100beef4c;
            }
            uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 0x16);
            uVar22 = 0;
            if (uVar23 != 0) {
              uVar22 = *(undefined4 *)((long)piVar13 + uVar23);
            }
            if (uVar15 < 0x19) goto LAB_100beef4c;
            uVar23 = (ulong)*(ushort *)((long)piVar13 + lVar18 + 0x18);
            bVar9 = false;
            if (uVar23 != 0) {
              bVar9 = *(char *)((long)piVar13 + uVar23) != '\0';
            }
          }
        }
        func_0x000107c4597c(uVar36,puVar24,param_2,puVar27,uVar14,bVar6,bVar7,bVar8,uVar26,puVar32,
                            bVar10,uVar22,bVar9);
        func_0x000107c61170(puVar32);
        func_0x000107c61170(puVar27);
        func_0x000107c4d318(puVar33,param_2,puVar24);
        func_0x000107c61180();
        goto LAB_100beea6c;
      }
      puVar33 = (undefined *)0x0;
    }
    else {
      puVar24 = PTR_PTR_1126db230;
      func_0x000107c610f4(PTR_PTR_1126db230);
      if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
         (((ushort *)((long)piVar12 - (long)*piVar12))[2] == 0)) {
        puVar27 = (undefined *)0x0;
      }
      else {
        puVar27 = PTR_PTR_1126d78b8;
        func_0x000107c610f4(PTR_PTR_1126d78b8);
        func_0x000107c47854();
      }
      func_0x000107c45978(puVar24,param_2,puVar27);
      func_0x000107c61170(puVar27);
      func_0x000107c4376c(puVar33,param_2,puVar24);
      func_0x000107c61180();
LAB_100beea6c:
      func_0x000107c61170(puVar24);
    }
    puVar19 = (ushort *)((long)piVar2 - (long)*piVar2);
    uVar15 = *puVar19;
    if (uVar15 < 9) {
      bVar6 = false;
      bVar7 = false;
      uVar36 = 0;
LAB_100beeb18:
      uVar38 = 0;
      bVar10 = false;
      bVar8 = false;
      uVar37 = 0;
    }
    else {
      uVar38 = 0;
      uVar36 = 0;
      if ((ulong)puVar19[4] != 0) {
        uVar36 = *(undefined8 *)((long)piVar2 + (ulong)puVar19[4]);
      }
      if (uVar15 < 0xb) {
        bVar6 = false;
LAB_100beeb10:
        bVar7 = false;
        goto LAB_100beeb18;
      }
      if ((ulong)puVar19[5] == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = *(char *)((long)piVar2 + (ulong)puVar19[5]) != '\0';
      }
      if (uVar15 < 0xd) goto LAB_100beeb10;
      if ((ulong)puVar19[6] == 0) {
        bVar7 = false;
      }
      else {
        bVar7 = *(char *)((long)piVar2 + (ulong)puVar19[6]) != '\0';
      }
      if (uVar15 < 0xf) goto LAB_100beeb18;
      uVar39 = 0;
      if ((ulong)puVar19[7] != 0) {
        uVar38 = *(undefined8 *)((long)piVar2 + (ulong)puVar19[7]);
      }
      uVar37 = uVar39;
      if (uVar15 < 0x11) {
        bVar10 = false;
        bVar8 = false;
      }
      else {
        if ((ulong)puVar19[8] == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(char *)((long)piVar2 + (ulong)puVar19[8]) != '\0';
        }
        if (uVar15 < 0x13) {
          bVar10 = false;
        }
        else {
          if ((ulong)puVar19[9] == 0) {
            bVar10 = false;
          }
          else {
            bVar10 = *(char *)((long)piVar2 + (ulong)puVar19[9]) != '\0';
          }
          uVar37 = 0;
          if ((0x14 < uVar15) && (uVar37 = uVar39, (ulong)puVar19[10] != 0)) {
            uVar37 = *(undefined8 *)((long)piVar2 + (ulong)puVar19[10]);
          }
        }
      }
    }
    func_0x000107c48b54(uVar36,uVar38,uVar37,puStack_78,param_2,puVar33,bVar6,bVar7,bVar8,bVar10);
    func_0x000107c61170(puVar33);
    iVar16 = *piVar1;
  }
  uVar15 = *(ushort *)((long)piVar1 - (long)iVar16);
  if (uVar15 < 0x19) {
    puStack_80 = (undefined *)0x0;
LAB_100bee018:
    puVar33 = (undefined *)0x0;
LAB_100bee01c:
    puVar24 = (undefined *)0x0;
LAB_100bee020:
    puVar27 = (undefined *)0x0;
LAB_100bee028:
    puVar32 = (undefined *)0x0;
LAB_100bee02c:
    puStack_d0 = (undefined *)0x0;
LAB_100bee034:
    puStack_d8 = (undefined *)0x0;
LAB_100bee038:
    lVar18 = 0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)piVar1 - (long)iVar16))[0xc];
    if (uVar23 == 0) {
      puStack_80 = (undefined *)0x0;
      lVar18 = (long)iVar16;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      uVar3 = *puVar34;
      puStack_80 = PTR_PTR_1126c2818;
      func_0x000107c610f4();
      piVar2 = (int *)((long)puVar34 + (ulong)uVar3);
      lVar18 = (long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - lVar18);
      if (uVar15 < 5) {
        puVar33 = (undefined *)0x0;
LAB_100bedc0c:
        bVar9 = false;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar10 = false;
        uVar36 = 0;
        uVar38 = 0;
        uVar37 = 0;
      }
      else {
        uVar23 = (ulong)((ushort *)((long)piVar2 - lVar18))[2];
        if (uVar23 == 0) {
          puVar33 = (undefined *)0x0;
        }
        else {
          puVar34 = (uint *)((long)piVar2 + uVar23);
          puVar33 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar34 + (ulong)*puVar34 + 4);
          func_0x000107c61180();
          lVar18 = (long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - lVar18);
        }
        if (uVar15 < 7) goto LAB_100bedc0c;
        uVar23 = (ulong)*(ushort *)((long)piVar2 + (6 - lVar18));
        uVar37 = 0;
        uVar38 = 0;
        if (uVar23 != 0) {
          uVar38 = *(undefined8 *)((long)piVar2 + uVar23);
        }
        if (uVar15 < 9) {
          bVar8 = false;
          bVar7 = false;
          bVar6 = false;
LAB_100bedf58:
          bVar9 = false;
          bVar10 = false;
LAB_100bedf5c:
          uVar36 = 0;
        }
        else {
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (8 - lVar18));
          if (uVar23 == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if (uVar15 < 0xb) {
            bVar8 = false;
            bVar7 = false;
            goto LAB_100bedf58;
          }
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (10 - lVar18));
          if (uVar23 == 0) {
            bVar7 = false;
          }
          else {
            bVar7 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if (uVar15 < 0xf) {
LAB_100bedf50:
            bVar8 = false;
            goto LAB_100bedf58;
          }
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (0xe - lVar18));
          if (uVar23 != 0) {
            uVar37 = *(undefined8 *)((long)piVar2 + uVar23);
          }
          if (uVar15 < 0x11) goto LAB_100bedf50;
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (0x10 - lVar18));
          if (uVar23 == 0) {
            bVar8 = false;
          }
          else {
            bVar8 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if (uVar15 < 0x13) goto LAB_100bedf58;
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (0x12 - lVar18));
          if (uVar23 == 0) {
            bVar10 = false;
          }
          else {
            bVar10 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if (uVar15 < 0x15) {
            bVar9 = false;
            goto LAB_100bedf5c;
          }
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (0x14 - lVar18));
          if (uVar23 == 0) {
            bVar9 = false;
          }
          else {
            bVar9 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if (uVar15 < 0x17) goto LAB_100bedf5c;
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (0x16 - lVar18));
          uVar36 = 0;
          if (uVar23 != 0) {
            uVar36 = *(undefined8 *)((long)piVar2 + uVar23);
          }
        }
      }
      func_0x000107c45634(uVar38,uVar37,puStack_80,param_2,puVar33,bVar6,bVar7,bVar8,bVar10,bVar9,
                          uVar36);
      func_0x000107c61170(puVar33);
      lVar18 = (long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - lVar18);
    }
    lVar18 = -lVar18;
    if (uVar15 < 0x1b) goto LAB_100bee018;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x1a);
    if (uVar23 == 0) {
      puVar33 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      uVar3 = *puVar34;
      puVar33 = PTR_PTR_1126bb3f8;
      func_0x000107c610f4();
      piVar2 = (int *)((long)puVar34 + (ulong)uVar3);
      lVar18 = (long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - lVar18);
      if (uVar15 < 5) {
        puVar24 = (undefined *)0x0;
LAB_100bee1a4:
        puVar27 = (undefined *)0x0;
LAB_100bee1a8:
        puVar32 = (undefined *)0x0;
LAB_100bee1ac:
        bVar6 = false;
LAB_100bee1b4:
        bVar8 = false;
        bVar7 = false;
LAB_100bee1b8:
        uVar36 = 0;
      }
      else {
        uVar23 = (ulong)((ushort *)((long)piVar2 - lVar18))[2];
        if (uVar23 == 0) {
          puVar24 = (undefined *)0x0;
        }
        else {
          puVar34 = (uint *)((long)piVar2 + uVar23);
          puVar24 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar34 + (ulong)*puVar34 + 4);
          func_0x000107c61180();
          lVar18 = (long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - lVar18);
        }
        lVar18 = -lVar18;
        if (uVar15 < 7) goto LAB_100bee1a4;
        uVar23 = (ulong)*(ushort *)((long)piVar2 + lVar18 + 6);
        if (uVar23 == 0) {
          puVar27 = (undefined *)0x0;
        }
        else {
          puVar34 = (uint *)((long)piVar2 + uVar23);
          puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar34 + (ulong)*puVar34 + 4);
          func_0x000107c61180();
          lVar18 = -(long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
        }
        if (uVar15 < 9) goto LAB_100bee1a8;
        uVar23 = (ulong)*(ushort *)((long)piVar2 + lVar18 + 8);
        if (uVar23 == 0) {
          puVar32 = (undefined *)0x0;
        }
        else {
          puVar34 = (uint *)((long)piVar2 + uVar23);
          puVar32 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar34 + (ulong)*puVar34 + 4);
          func_0x000107c61180();
          lVar18 = -(long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - (long)*piVar2);
        }
        if (uVar15 < 0xb) goto LAB_100bee1ac;
        uVar23 = (ulong)*(ushort *)((long)piVar2 + lVar18 + 10);
        if (uVar23 == 0) {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)((long)piVar2 + uVar23) != '\0';
        }
        if (uVar15 < 0xf) goto LAB_100bee1b4;
        uVar23 = (ulong)*(ushort *)((long)piVar2 + lVar18 + 0xe);
        if (uVar23 == 0) {
          bVar7 = false;
        }
        else {
          bVar7 = *(char *)((long)piVar2 + uVar23) != '\0';
        }
        if (uVar15 < 0x11) {
          bVar8 = false;
          goto LAB_100bee1b8;
        }
        uVar23 = (ulong)*(ushort *)((long)piVar2 + lVar18 + 0x10);
        if (uVar23 == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(char *)((long)piVar2 + uVar23) != '\0';
        }
        if (uVar15 < 0x13) goto LAB_100bee1b8;
        uVar23 = (ulong)*(ushort *)((long)piVar2 + lVar18 + 0x12);
        uVar36 = 0;
        if (uVar23 != 0) {
          uVar36 = *(undefined8 *)((long)piVar2 + uVar23);
        }
      }
      func_0x000107c48b68(puVar33,param_2,puVar24,puVar27,puVar32,bVar6,bVar7,bVar8,uVar36);
      func_0x000107c61170(puVar32);
      func_0x000107c61170(puVar27);
      func_0x000107c61170(puVar24);
      lVar18 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar15 < 0x1d) goto LAB_100bee01c;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x1c);
    if (uVar23 == 0) {
      puVar24 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      uVar3 = *puVar34;
      puVar24 = PTR_PTR_1126bb3e0;
      func_0x000107c610f4();
      piVar2 = (int *)((long)puVar34 + (ulong)uVar3);
      lVar18 = (long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - lVar18);
      if (uVar15 < 9) {
        puVar27 = (undefined *)0x0;
        uVar14 = 0;
      }
      else {
        uVar23 = (ulong)((ushort *)((long)piVar2 - lVar18))[4];
        if (uVar23 == 0) {
          puVar27 = (undefined *)0x0;
        }
        else {
          puVar21 = (uint *)((long)piVar2 + uVar23);
          puVar21 = (uint *)((long)puVar21 + (ulong)*puVar21);
          puVar32 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          func_0x000107c3e170(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,*puVar21);
          func_0x000107c61180();
          puVar34 = puVar21 + 1;
          if (*puVar21 != 0) {
            do {
              puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                  (long)puVar34 + (ulong)*puVar34 + 4);
              func_0x000107c61180();
              if (puVar27 != (undefined *)0x0) {
                func_0x000107c3d798(puVar32,param_2,puVar27);
              }
              func_0x000107c61170(puVar27);
              puVar34 = puVar34 + 1;
            } while (puVar34 != puVar21 + 1 + *puVar21);
          }
          puVar27 = puVar32;
          func_0x000107c40794(puVar32);
          func_0x000107c61170(puVar32);
          lVar18 = (long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - lVar18);
        }
        if ((uVar15 < 0xf) ||
           (uVar23 = (ulong)*(ushort *)((long)piVar2 + (0xe - lVar18)), uVar23 == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined4 *)((long)piVar2 + uVar23);
        }
      }
      func_0x000107c47e84(puVar24,param_2,puVar27,uVar14);
      func_0x000107c61170(puVar27);
      lVar18 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar15 < 0x1f) goto LAB_100bee020;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x1e);
    if (uVar23 == 0) {
      puVar27 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puVar27 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar18 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar15 < 0x21) goto LAB_100bee028;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x20);
    if (uVar23 == 0) {
      puVar32 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puVar32 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar18 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (uVar15 < 0x23) goto LAB_100bee02c;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x22);
    if (uVar23 == 0) {
      puStack_d0 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puStack_d0 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar18 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar15 < 0x25) || (uVar15 < 0x27)) goto LAB_100bee034;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x26);
    if (uVar23 == 0) {
      puStack_d8 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puStack_d8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      lVar18 = -(long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if ((uVar15 < 0x29) || (uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar18 + 0x28), uVar23 == 0))
    goto LAB_100bee038;
    puVar34 = (uint *)((long)piVar1 + uVar23);
    lVar18 = (long)puVar34 + (ulong)*puVar34;
  }
  FUN_100befe2c();
  func_0x000107c61180();
  iVar16 = *piVar1;
  lVar20 = (long)iVar16;
  uVar15 = *(ushort *)((long)piVar1 - lVar20);
  if (uVar15 < 0x2b) {
    puVar35 = (undefined *)0x0;
LAB_100bee3fc:
    puVar29 = (undefined *)0x0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)piVar1 - lVar20))[0x15];
    if (uVar23 == 0) {
      puVar35 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      uVar3 = *puVar34;
      puVar35 = PTR_PTR_1126db2d0;
      func_0x000107c610f4();
      piVar2 = (int *)((long)puVar34 + (ulong)uVar3);
      lVar20 = (long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - lVar20);
      if (uVar15 < 5) {
        puVar25 = (undefined *)0x0;
        puVar29 = (undefined *)0x0;
        bVar6 = false;
      }
      else {
        uVar23 = (ulong)((ushort *)((long)piVar2 - lVar20))[2];
        if (uVar23 == 0) {
          puVar29 = (undefined *)0x0;
        }
        else {
          puVar34 = (uint *)((long)piVar2 + uVar23);
          puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar34 + (ulong)*puVar34 + 4);
          func_0x000107c61180();
          lVar20 = (long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - lVar20);
        }
        if (uVar15 < 7) {
          bVar6 = false;
        }
        else {
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (6 - lVar20));
          if (uVar23 == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if ((8 < uVar15) &&
             (uVar23 = (ulong)*(ushort *)((long)piVar2 + (8 - lVar20)), uVar23 != 0)) {
            puVar34 = (uint *)((long)piVar2 + uVar23);
            puVar25 = PTR__OBJC_CLASS___NSString_1126ae4d0;
            func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                                (long)puVar34 + (ulong)*puVar34 + 4);
            func_0x000107c61180();
            goto LAB_100bee36c;
          }
        }
        puVar25 = (undefined *)0x0;
      }
LAB_100bee36c:
      func_0x000107c47e7c(puVar35,param_2,puVar29,bVar6,puVar25);
      func_0x000107c61170(puVar25);
      func_0x000107c61170(puVar29);
      lVar20 = (long)*piVar1;
      uVar15 = *(ushort *)((long)piVar1 - lVar20);
    }
    iVar16 = (int)lVar20;
    lVar20 = -lVar20;
    if (uVar15 < 0x2d) goto LAB_100bee3fc;
    uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar20 + 0x2c);
    if (uVar23 == 0) {
      puVar29 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      puVar29 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar34 + (ulong)*puVar34 + 4);
      func_0x000107c61180();
      iVar16 = *piVar1;
      lVar20 = -(long)iVar16;
      uVar15 = *(ushort *)((long)piVar1 - (long)iVar16);
    }
    if ((0x2e < uVar15) && (uVar23 = (ulong)*(ushort *)((long)piVar1 + lVar20 + 0x2e), uVar23 != 0))
    {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      uVar3 = *puVar34;
      puVar25 = PTR_PTR_1126db2d8;
      func_0x000107c610f4();
      piVar2 = (int *)((long)puVar34 + (ulong)uVar3);
      lVar20 = (long)*piVar2;
      uVar15 = *(ushort *)((long)piVar2 - lVar20);
      if (uVar15 < 5) {
        puVar28 = (undefined *)0x0;
        bVar6 = false;
        bVar7 = false;
      }
      else {
        uVar23 = (ulong)((ushort *)((long)piVar2 - lVar20))[2];
        if (uVar23 == 0) {
          puVar28 = (undefined *)0x0;
        }
        else {
          puVar34 = (uint *)((long)piVar2 + uVar23);
          puVar28 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar34 + (ulong)*puVar34 + 4);
          func_0x000107c61180();
          lVar20 = (long)*piVar2;
          uVar15 = *(ushort *)((long)piVar2 - lVar20);
        }
        if (uVar15 < 7) {
          bVar6 = false;
        }
        else {
          uVar23 = (ulong)*(ushort *)((long)piVar2 + (6 - lVar20));
          if (uVar23 == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = *(char *)((long)piVar2 + uVar23) != '\0';
          }
          if ((8 < uVar15) &&
             (uVar23 = (ulong)*(ushort *)((long)piVar2 + (8 - lVar20)), uVar23 != 0)) {
            bVar7 = *(char *)((long)piVar2 + uVar23) != '\0';
            goto LAB_100bee92c;
          }
        }
        bVar7 = false;
      }
LAB_100bee92c:
      func_0x000107c4816c(puVar25,param_2,puVar28,bVar6,bVar7);
      func_0x000107c61170(puVar28);
      iVar16 = *piVar1;
      goto LAB_100bee404;
    }
  }
  puVar25 = (undefined *)0x0;
LAB_100bee404:
  if (*(ushort *)((long)piVar1 - (long)iVar16) < 0x31) {
    puVar28 = (undefined *)0x0;
  }
  else {
    uVar23 = (ulong)((ushort *)((long)piVar1 - (long)iVar16))[0x18];
    if (uVar23 == 0) {
      puVar28 = (undefined *)0x0;
    }
    else {
      puVar34 = (uint *)((long)piVar1 + uVar23);
      uVar3 = *puVar34;
      puVar28 = PTR_PTR_1126db2e0;
      func_0x000107c610f4();
      piVar1 = (int *)((long)puVar34 + (ulong)uVar3);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar23 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar23 == 0)) {
        puVar31 = (undefined *)0x0;
      }
      else {
        puVar34 = (uint *)((long)piVar1 + uVar23);
        puVar31 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar34 + (ulong)*puVar34 + 4);
        func_0x000107c61180();
      }
      func_0x000107c48474(puVar28,param_2,puVar31);
      func_0x000107c61170(puVar31);
    }
  }
  func_0x000107c49278(puVar11,param_2,puStack_88,puStack_90,puStack_b0,bVar5,puStack_b8,lVar17,
                      puStack_70,bVar4);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(puStack_d0);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puStack_80);
  func_0x000107c61170(puStack_78);
  func_0x000107c61170(puStack_70);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(puStack_b8);
  func_0x000107c61170(puStack_b0);
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(puStack_88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 100bef1e8; end: 100bef503;  */

void FUN_100bef1e8(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  long lVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_100bef340;
  }
  puVar7 = PTR_PTR_1126b14b8;
  func_0x000107c610f4(PTR_PTR_1126b14b8);
  lVar2 = (long)*param_1;
  uVar3 = *(ushort *)((long)param_1 - lVar2);
  if (uVar3 < 5) {
    puVar5 = (undefined *)0x0;
LAB_100bef2d8:
    puVar6 = (undefined *)0x0;
LAB_100bef2dc:
    puVar8 = (undefined *)0x0;
LAB_100bef2e0:
    puVar10 = (undefined *)0x0;
LAB_100bef2e4:
    puVar11 = (undefined *)0x0;
LAB_100bef2e8:
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar4 = (ulong)((ushort *)((long)param_1 - lVar2))[2];
    if (uVar4 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = (long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - lVar2);
    }
    lVar2 = -lVar2;
    if (uVar3 < 7) goto LAB_100bef2d8;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 6);
    if (uVar4 == 0) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 9) goto LAB_100bef2dc;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 8);
    if (uVar4 == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xb) goto LAB_100bef2e0;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 10);
    if (uVar4 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if (uVar3 < 0xd) goto LAB_100bef2e4;
    uVar4 = (ulong)*(ushort *)((long)param_1 + lVar2 + 0xc);
    if (uVar4 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + uVar4);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar2 = -(long)*param_1;
      uVar3 = *(ushort *)((long)param_1 - (long)*param_1);
    }
    if ((uVar3 < 0xf) || (*(short *)((long)param_1 + lVar2 + 0xe) == 0)) goto LAB_100bef2e8;
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c45ae4();
  }
  func_0x000107c4598c(puVar7,param_2,puVar5,puVar6,puVar8,puVar10,puVar11,puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
LAB_100bef340:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100bef504; end: 100bef61f;  */

/* WARNING: Possible PIC construction at 0x000100bef5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bef5e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bef698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bef6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bef6b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bef5e8) */
/* WARNING: Removing unreachable block (ram,0x000100bef61c) */
/* WARNING: Removing unreachable block (ram,0x000100bef664) */
/* WARNING: Removing unreachable block (ram,0x000100bef6ac) */
/* WARNING: Removing unreachable block (ram,0x000100bef680) */
/* WARNING: Removing unreachable block (ram,0x000100bef6d4) */
/* WARNING: Removing unreachable block (ram,0x000100bef684) */
/* WARNING: Removing unreachable block (ram,0x000100bef600) */
/* WARNING: Removing unreachable block (ram,0x000100bef5b8) */
/* WARNING: Removing unreachable block (ram,0x000100bef5c4) */
/* WARNING: Removing unreachable block (ram,0x000100bef69c) */
/* WARNING: Removing unreachable block (ram,0x000100bef6bc) */
/* WARNING: Removing unreachable block (ram,0x000100bef6a8) */
/* WARNING: Removing unreachable block (ram,0x000100bef6dc) */

void FUN_100bef504(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c61174(lVar2);
  lVar1 = lVar2;
  func_0x000107c4080c(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    if (*plStack_110 != *plStack_110) {
      func_0x000107c61128(lVar2);
    }
    lVar2 = param_1 + 0x28;
    func_0x000107c61148(lVar2);
    func_0x000107c3be70(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100bef620; end: 100bef6f7; -[SCGhostToFeedLogger _logProcessFeedItemsSubstep:entriesFetched:logTime:startTime:fetchContext:] */

/* WARNING: Possible PIC construction at 0x000100bef698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bef6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bef6b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bef69c) */
/* WARNING: Removing unreachable block (ram,0x000100bef6bc) */
/* WARNING: Removing unreachable block (ram,0x000100bef6a8) */

void FUN_100bef620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_5);
  lVar1 = param_5;
  if (*(long *)(param_1 + 0x68) == 1) {
    lVar1 = *(long *)(param_1 + 0x40);
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_5);
    if (lVar1 == param_5) {
      func_0x000107c61170(param_5);
    }
    else if (param_5 != 0) {
      func_0x000107c49cec(lVar1,param_2,param_5);
      lVar1 = param_5;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bef6f8; end: 100bef863; -[SCSnapchattersBitmojiInfo initWithBitmojiAvatarId:bitmojiSelfieId:bitmojiSceneId:bitmojiBackgroundId:bitmojiBackgroundURL:bitmojiAvatarMetadata:] */

undefined1 *
FUN_100bef6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_58 = PTR_PTR_112707578;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bef864; end: 100befa83; -[SCGhostToFeedGrapheneLogger logProcessFeedItemsSubstep:duration:entriesFetched:] */

/* WARNING: Possible PIC construction at 0x000100befa0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100befa3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100befa64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100befa40) */
/* WARNING: Removing unreachable block (ram,0x000100befa10) */
/* WARNING: Removing unreachable block (ram,0x000100befa68) */

void FUN_100bef864(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (param_3 < 4) {
    if (param_3 < 2) {
      if (param_3 == 0) {
        puVar1 = PTR_PTR_1126ba080;
        func_0x000107c43c14(PTR_PTR_1126ba080);
        func_0x000107c61180();
      }
      else if (param_3 == 1) {
        puVar1 = PTR_PTR_1126ba080;
        func_0x000107c43c18(PTR_PTR_1126ba080);
        func_0x000107c61180();
      }
    }
    else if (param_3 == 2) {
      puVar1 = PTR_PTR_1126ba080;
      func_0x000107c43c1c(PTR_PTR_1126ba080);
      func_0x000107c61180();
    }
    else if (param_3 == 3) {
      puVar1 = PTR_PTR_1126ba080;
      func_0x000107c43c30(PTR_PTR_1126ba080);
      func_0x000107c61180();
    }
  }
  else if (param_3 < 6) {
    if (param_3 == 4) {
      puVar1 = PTR_PTR_1126ba080;
      func_0x000107c43c20(PTR_PTR_1126ba080);
      func_0x000107c61180();
    }
    else if (param_3 == 5) {
      puVar1 = PTR_PTR_1126ba080;
      func_0x000107c43c28(PTR_PTR_1126ba080);
      func_0x000107c61180();
    }
  }
  else if (param_3 == 6) {
    puVar1 = PTR_PTR_1126ba080;
    func_0x000107c43c24(PTR_PTR_1126ba080);
    func_0x000107c61180();
  }
  else if (param_3 == 7) {
    puVar1 = PTR_PTR_1126ba080;
    func_0x000107c43c2c(PTR_PTR_1126ba080);
    func_0x000107c61180();
  }
  else if (param_3 == 8) {
    puVar1 = PTR_PTR_1126ba080;
    func_0x000107c43c10(PTR_PTR_1126ba080);
    func_0x000107c61180();
  }
  func_0x000100440e90(0x408f400000000000,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x18));
  func_0x000107c61180();
  func_0x000107c5e508(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100befa84; end: 100befaaf; +[SCGrapheneGhostToFeedMetric g2fFetchGroup] */

void FUN_100befa84(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba080);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100befab0; end: 100befb47;  */

long FUN_100befab0(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((4 < *puVar2) && ((ulong)puVar2[2] != 0)) &&
      (6 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[2]) == '\x01')) &&
     ((ulong)puVar2[3] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[3]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 100befb48; end: 100befc5f; -[SCSnapchattersMutualFriendInfo initWithBirthday:snapStreakCount:isBestFriend:addedByFriendTimestamp:isCameosSharingSupported:isBitmojiFriendmojiSharingSupported:cameosSharingPolicy:reverseBestFriendRank:isPinnedBestFriend:dreamsGenerationPolicy:canUseMySelfie:] */

undefined8 *
FUN_100befb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined4 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined1 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_10);
  puStack_78 = PTR_PTR_1127075c8;
  puVar1 = &uStack_80;
  uStack_80 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_6;
    puVar1[5] = param_1;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined4 *)(puVar1 + 2) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_9;
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = param_11;
    *(undefined4 *)(puVar1 + 3) = param_12;
    *(undefined1 *)((long)puVar1 + 0xc) = param_13;
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_4);
  return puVar1;
}



/* Entry: 100befc60; end: 100befccb; +[SCSnapchattersFriendSubtypeInfo mutualFriendInfoWithMutualFriendInfo:] */

void FUN_100befc60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126bb6d0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100befccc; end: 100befcf7; +[SCGrapheneGhostToFeedMetric g2fFetchQuickAdd] */

void FUN_100befccc(void)

{
  func_0x000107c610f4(PTR_PTR_1126ba080);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100befcf8; end: 100befd3b; -[SCSnapchattersFriendSubtypeInfo internalInit] */

void FUN_100befcf8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1127075b8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100befd3c; end: 100befe07; -[SCSnapchattersFriendInfo initWithSubtypeInfo:addFriendTimestamp:canSeeCustomStories:isStoryMuted:lastInteractionTimestamp:isSuppressedOnAddedMe:isAiChatbot:linkCreationTimestamp:] */

undefined1 *
FUN_100befd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_6);
  puStack_68 = PTR_PTR_1127075b0;
  uStack_70 = param_4;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined1 *)((long)puVar1 + 10) = param_9;
    *(undefined1 *)((long)puVar1 + 0xb) = param_10;
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
  }
  func_0x000107c61170(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 100befe08; end: 100befe2b; -[SCSnapchattersFriendSubtypeInfo copyWithZone:] */

undefined8 FUN_100befe08(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100befe2c; end: 100bf007f;  */

void FUN_100befe2c(int *param_1,undefined8 param_2)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  long lVar4;
  ushort *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if (param_1 == (int *)0x0) {
    puVar7 = (undefined *)0x0;
    goto LAB_100beff48;
  }
  puVar7 = PTR_PTR_1126bb3e8;
  func_0x000107c610f4(PTR_PTR_1126bb3e8);
  lVar4 = (long)*param_1;
  puVar5 = (ushort *)((long)param_1 - lVar4);
  uVar2 = *puVar5;
  if (uVar2 < 5) {
    bVar3 = false;
LAB_100befef0:
    puVar8 = (undefined *)0x0;
LAB_100befef4:
    uVar10 = 0;
    uVar9 = 0;
LAB_100beff00:
    uVar13 = 0;
    uVar12 = 0;
LAB_100beff04:
    uVar14 = 0;
LAB_100beff08:
    puVar11 = (undefined *)0x0;
  }
  else {
    if ((ulong)puVar5[2] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)param_1 + (ulong)puVar5[2]) != '\0';
    }
    if (uVar2 < 7) goto LAB_100befef0;
    if ((ulong)puVar5[3] == 0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar1 = (uint *)((long)param_1 + (ulong)puVar5[3]);
      puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar1 + (ulong)*puVar1 + 4);
      func_0x000107c61180();
      lVar4 = (long)*param_1;
      uVar2 = *(ushort *)((long)param_1 - lVar4);
    }
    if (uVar2 < 9) goto LAB_100befef4;
    uVar6 = (ulong)*(ushort *)((long)param_1 + (8 - lVar4));
    if (uVar6 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if (uVar2 < 0xb) {
      uVar10 = 0;
      goto LAB_100beff00;
    }
    uVar6 = (ulong)*(ushort *)((long)param_1 + (10 - lVar4));
    if (uVar6 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if (uVar2 < 0xd) goto LAB_100beff00;
    uVar6 = (ulong)*(ushort *)((long)param_1 + (0xc - lVar4));
    if (uVar6 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if (uVar2 < 0xf) {
      uVar13 = 0;
      goto LAB_100beff04;
    }
    uVar6 = (ulong)*(ushort *)((long)param_1 + (0xe - lVar4));
    if (uVar6 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if (uVar2 < 0x11) goto LAB_100beff04;
    uVar6 = (ulong)*(ushort *)((long)param_1 + (0x10 - lVar4));
    if (uVar6 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined4 *)((long)param_1 + uVar6);
    }
    if ((uVar2 < 0x13) || (uVar6 = (ulong)*(ushort *)((long)param_1 + (0x12 - lVar4)), uVar6 == 0))
    goto LAB_100beff08;
    puVar1 = (uint *)((long)param_1 + uVar6);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        (long)puVar1 + (ulong)*puVar1 + 4);
    func_0x000107c61180();
  }
  func_0x000107c46f5c(puVar7,param_2,bVar3,puVar8,uVar9,uVar10,uVar12,uVar13,uVar14);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar8);
LAB_100beff48:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100bf0080; end: 100bf0527; -[SCSnapchatter initWithUserId:username:displayName:isPopular:friendmojis:bitmojiInfo:emojiSymbol:isBlocked:friendInfo:incomingFriendInfo:suggestedSnapchatterInfo:contactSnapchatterInfo:snapProId:mutableUsername:legacyUsername:plusBadgeVisibility:postViewEmoji:creatorSnapchatterInfo:actionmojiInfo:postSendEmoji:plusInfo:saturnInfo:isAiChatbot:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100bf0080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined1 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  puStack_70 = PTR_PTR_112707558;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912a0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912a0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912a4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912a4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912a8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127912ac) = param_6;
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912b0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912b0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912b4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912b8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912b8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127912bc) = param_10;
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912c0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912c0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912c4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912c4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_14;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912c8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912c8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_15;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912cc);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912cc) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_16;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912d0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912d0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_17;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912d4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912d4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_18;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912d8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912d8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127912dc) = param_19;
    uVar2 = param_21;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912e0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_22;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912e4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912e4) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_23;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912e8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912e8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_24;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912ec);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912ec) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_25;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912f0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912f0) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_26;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127912f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127912f4) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127912f8) = param_27;
  }
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100bf0528; end: 100bf054b; -[SCSnapchattersBitmojiInfo copyWithZone:] */

undefined8 FUN_100bf0528(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf054c; end: 100bf056f; -[SCSnapchattersFriendInfo copyWithZone:] */

undefined8 FUN_100bf054c(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf0570; end: 100bf057f; -[SCSnapchatter userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100bf0570(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127912a0);
}



/* Entry: 100bf0580; end: 100bf0607; -[SCSnapchattersFriendmoji initWithCategoryName:expirationTimestamp:] */

undefined1 *
FUN_100bf0580(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1127075a8;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100bf0608; end: 100bf0657; -[SCSnapchattersBirthday initWithMonth:day:] */

void FUN_100bf0608(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707598;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 100bf0658; end: 100bf069f; -[SCSnapchattersReverseBestFriendRank initWithRank:] */

void FUN_100bf0658(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127075d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 100bf06a0; end: 100bf06c3; -[SCSnapchattersBirthday copyWithZone:] */

undefined8 FUN_100bf06a0(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf06c4; end: 100bf06e7; -[SCSnapchattersReverseBestFriendRank copyWithZone:] */

undefined8 FUN_100bf06c4(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf06e8; end: 100bf07bb; -[SCSnapchattersIncomingFriendInfo initWithAddSource:addedByFriendTimestamp:isFriendRequestIgnored:isFriendRequestViewed:rankingScore:hasRanked:isHighQualityForBlending:considerForLocationSharingProtection:impressionCount:] */

undefined1 *
FUN_100bf06e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_5);
  puStack_68 = PTR_PTR_1127075d8;
  uStack_70 = param_3;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    *(undefined1 *)((long)puVar1 + 0xb) = param_9;
    *(undefined1 *)((long)puVar1 + 0xc) = param_10;
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100bf07bc; end: 100bf07df; -[SCSnapchattersIncomingFriendInfo copyWithZone:] */

undefined8 FUN_100bf07bc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100bf07e0; end: 100bf0977; -[SCUserIdToSnapchatterFetcherImpl _updateSnapchatterObservers:] */

void FUN_100bf07e0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0x28);
  func_0x000107c61174(param_3);
  lVar2 = param_3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(param_3);
      }
      lVar5 = *(long *)(lVar6 * 8);
      func_0x000107c5b460();
      func_0x000107c61180();
      lVar3 = lVar5;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      lVar5 = lVar3;
      func_0x000107c4adac();
      if (lVar5 != 0) {
        func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x20));
      }
      func_0x000107c61170(lVar3);
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(param_3);
  func_0x000107c611f0(param_1 + 0x28);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(param_1 + 0x28);
  func_0x000107c60bd8();
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_3 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 100bf0978; end: 100bf0983;  */

void FUN_100bf0978(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 100bf0984; end: 100bf09fb; -[SCSnapchattersDataProvider _logSnapchattersFetchWithUserIdsBeforeDataFullySyncedIfNeeded] */

/* WARNING: Possible PIC construction at 0x000100bf09b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bf09bc) */
/* WARNING: Removing unreachable block (ram,0x000100bf09d0) */
/* WARNING: Removing unreachable block (ram,0x000100bf09c0) */

void FUN_100bf0984(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c49dfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


