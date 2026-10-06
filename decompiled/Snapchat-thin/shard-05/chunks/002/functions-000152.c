/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103bd1de4; end: 103bd1e43; -[SCSDNMainAppPayloadParser init] */

void FUN_103bd1de4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SDNMainAppPayloadParser.SDNMainAppPayloadParser",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd1e10);
  (*pcVar1)();
}



/* Entry: 103bd1e44; end: 103bd1feb; -[SCSDNMainAppPayloadParser .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bd1e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd1fbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bd1f98) */
/* WARNING: Removing unreachable block (ram,0x000103bd1f60) */
/* WARNING: Removing unreachable block (ram,0x000103bd1f38) */
/* WARNING: Removing unreachable block (ram,0x000103bd1f14) */
/* WARNING: Removing unreachable block (ram,0x000103bd1ef0) */
/* WARNING: Removing unreachable block (ram,0x000103bd1ec8) */
/* WARNING: Removing unreachable block (ram,0x000103bd1ea0) */
/* WARNING: Removing unreachable block (ram,0x000103bd1e78) */
/* WARNING: Removing unreachable block (ram,0x000103bd1fc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd1e44(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff4f88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff4f90 + 8))
  ;
  return;
}



/* Entry: 103bd1fec; end: 103bd20c7;  */

void FUN_103bd1fec(void)

{
  func_0x000107c61168(&PTR_PTR_112941470);
  return;
}



/* Entry: 103bd20c8; end: 103bd2107;  */

void FUN_103bd20c8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103bd2108; end: 103bd22cb;  */

ulong FUN_103bd2108(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd21ec);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd21f0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126deb98;
    func_0x000107c61168(PTR_PTR_1126deb98);
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
    puVar4 = PTR_PTR_1126deb98;
    func_0x000107c61168(PTR_PTR_1126deb98);
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
  FUN_103bd20c8(0,0x112ff5090,&PTR_PTR_1126deb98);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103bd22cc);
  (*pcVar2)();
}



/* Entry: 103bd22cc; end: 103bd2327; -[SCSDNMainAppSoundResolver soundFileName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd22cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff50a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff50a0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd2328; end: 103bd25ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bd2328(ulong param_1,ulong param_2,long param_3,long param_4,ulong param_5,ulong param_6)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  long lVar10;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar9 = auStack_70;
  uVar7 = param_2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff50a8);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010ef85c90;
  if (param_1 == 0) {
LAB_103bd2514:
    func_0x000107c6142c(param_4);
LAB_103bd2520:
    func_0x000107c6142c(param_3);
  }
  else {
    func_0x000107c61174();
    uVar5 = param_1;
    func_0x000107c5b604();
    if ((int)uVar5 == 2) {
      if ((param_6 & 1) != 0) {
        uVar5 = param_1;
        func_0x000107c410cc();
        func_0x000107c61180();
        if (uVar5 != 0) {
          uVar6 = uVar5;
          func_0x000107c410cc();
          func_0x000107c61170(uVar5);
          func_0x000107c60660();
          uVar5 = uVar6;
          func_0x000107fd4108();
          func_0x000107c61170(uVar6);
          func_0x000107fd4124();
          func_0x000107c61180();
          if (uVar5 != 0) {
            uVar6 = uVar5;
            func_0x000107c5faec();
            func_0x000107c61170(param_1);
            func_0x000107c61170(uVar5);
            func_0x000107c6142c(param_4);
            func_0x000107c6142c(param_3);
            puVar2 = (ulong *)(unaff_x20 + _DAT_112ff50a0);
            *puVar2 = uVar6;
            puVar2[1] = uVar7;
            goto LAB_103bd253c;
          }
        }
      }
    }
    else if ((int)uVar5 == 3) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(param_3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff50a0);
      *puVar1 = 0;
      puVar1[1] = 0;
      goto LAB_103bd253c;
    }
    if (((param_5 & 1) == 0) || (uVar7 = param_1, func_0x000107c3e87c(), (uVar7 & 1) == 0)) {
      func_0x000107c61170(param_1);
      goto LAB_103bd2514;
    }
    if (param_3 == 0) {
LAB_103bd2588:
      func_0x000107c61170(param_1);
      param_3 = param_4;
      goto LAB_103bd2520;
    }
    uVar7 = param_2;
    func_0x000107c5fb5c(param_2,param_3);
    if ((long)uVar7 < 1) {
      func_0x000107c6142c(param_3);
      goto LAB_103bd2588;
    }
    if (param_4 == 0) {
      func_0x000107c6142c(param_3);
    }
    else {
      lVar10 = param_3;
      func_0x0001000f66f0(param_2,param_3,param_4);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_4);
      if ((param_2 & 1) != 0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110ecda18;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff50a0);
        *puVar1 = ppuVar8;
        puVar1[1] = lVar10;
        goto LAB_103bd253c;
      }
    }
    func_0x000107c61170(param_1);
  }
  uVar4 = puVar1[1];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff50a0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  func_0x000107c61434();
LAB_103bd253c:
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar9;
}



/* Entry: 103bd25ac; end: 103bd266f; -[SCSDNMainAppSoundResolver initWithSoundPolicy:senderUserId:bestFriendsUserIds:bestFriendSoundEnabled:customSoundEnabled:] */

undefined8
FUN_103bd25ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  if (param_5 != 0) {
    func_0x000107c5fe10(param_5,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_103bd2710(param_3,param_4,param_2,param_5,param_6,param_7);
  func_0x000107c61170(uVar1);
  return param_3;
}



/* Entry: 103bd2670; end: 103bd26cf; -[SCSDNMainAppSoundResolver init] */

void FUN_103bd2670(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SDNMainAppPayloadParser.SDNMainAppSoundResolver",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd269c);
  (*pcVar1)();
}



/* Entry: 103bd26d0; end: 103bd270f; -[SCSDNMainAppSoundResolver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bd26f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bd26f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd26d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff50a0 + 8))
  ;
  return;
}



/* Entry: 103bd2710; end: 103bd2983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd2710(long param_1,ulong param_2,long param_3,long param_4,ulong param_5,ulong param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined **ppuVar8;
  long unaff_x20;
  
  uVar7 = param_2;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff50a8);
  *puVar1 = 0xd000000000000010;
  puVar1[1] = 0x800000010ef85c90;
  if (param_1 == 0) {
LAB_103bd28fc:
    func_0x000107c6142c(param_4);
LAB_103bd2908:
    func_0x000107c6142c(param_3);
  }
  else {
    func_0x000107c61174();
    lVar5 = param_1;
    func_0x000107c5b604();
    if ((int)lVar5 == 2) {
      if ((param_6 & 1) != 0) {
        lVar5 = param_1;
        func_0x000107c410cc();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar6 = lVar5;
          func_0x000107c410cc();
          func_0x000107c61170(lVar5);
          func_0x000107c60660();
          lVar5 = lVar6;
          func_0x000107fd4108();
          func_0x000107c61170(lVar6);
          func_0x000107fd4124();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = lVar5;
            func_0x000107c5faec();
            func_0x000107c61170(param_1);
            func_0x000107c61170(lVar5);
            func_0x000107c6142c(param_4);
            func_0x000107c6142c(param_3);
            plVar2 = (long *)(unaff_x20 + _DAT_112ff50a0);
            *plVar2 = lVar6;
            plVar2[1] = uVar7;
            goto LAB_103bd2924;
          }
        }
      }
    }
    else if ((int)lVar5 == 3) {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(param_4);
      func_0x000107c6142c(param_3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff50a0);
      *puVar1 = 0;
      puVar1[1] = 0;
      goto LAB_103bd2924;
    }
    if (((param_5 & 1) == 0) || (lVar5 = param_1, func_0x000107c3e87c(), (int)lVar5 == 0)) {
      func_0x000107c61170(param_1);
      goto LAB_103bd28fc;
    }
    if (param_3 == 0) {
LAB_103bd2960:
      func_0x000107c61170(param_1);
      param_3 = param_4;
      goto LAB_103bd2908;
    }
    uVar7 = param_2;
    func_0x000107c5fb5c(param_2,param_3);
    if ((long)uVar7 < 1) {
      func_0x000107c6142c(param_3);
      goto LAB_103bd2960;
    }
    if (param_4 == 0) {
      func_0x000107c6142c(param_3);
    }
    else {
      lVar5 = param_3;
      func_0x0001000f66f0(param_2,param_3,param_4);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(param_4);
      if ((param_2 & 1) != 0) {
        ppuVar8 = &PTR____CFConstantStringClassReference_110ecda18;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff50a0);
        *puVar1 = ppuVar8;
        puVar1[1] = lVar5;
        goto LAB_103bd2924;
      }
    }
    func_0x000107c61170(param_1);
  }
  uVar4 = puVar1[1];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff50a0);
  *puVar3 = *puVar1;
  puVar3[1] = uVar4;
  func_0x000107c61434();
LAB_103bd2924:
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd2984; end: 103bd29a3;  */

void FUN_103bd2984(void)

{
  func_0x000107c61168(&PTR_PTR_1129415f8);
  return;
}



/* Entry: 103bd29a4; end: 103bd29b3; -[SCSDNMainAppTimeSensitiveResolver isTimeSensitive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103bd29a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff50d8);
}



/* Entry: 103bd29b4; end: 103bd2a0b;  */

void FUN_103bd29b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c610f8();
  FUN_103bd2a0c(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103bd2a0c; end: 103bd2b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd2a0c(int param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  byte bVar3;
  
  func_0x000107c614f0();
  if (param_3 != 0) {
    if (0 < param_1) {
      if (param_1 == 1) {
        if (param_4 == 0) {
LAB_103bd2aec:
          bVar3 = 0;
          param_4 = param_3;
        }
        else {
          func_0x000100077018(param_2,param_3,param_4);
          bVar3 = (byte)param_2;
          func_0x000107c6142c(param_3);
        }
      }
      else {
        if (param_1 != 2) goto LAB_103bd2a5c;
        if (param_4 == 0) goto LAB_103bd2aec;
        if (*(long *)(param_4 + 0x10) == 0) {
          bVar3 = 0;
        }
        else {
          lVar2 = *(long *)(param_4 + 0x20);
          lVar1 = *(long *)(param_4 + 0x28);
          func_0x000107c61434(lVar1);
          func_0x000107c6142c(param_4);
          if ((lVar2 == param_2) && (param_3 == lVar1)) {
            bVar3 = 1;
            param_4 = param_3;
            param_3 = lVar1;
          }
          else {
            func_0x000107c605b8(lVar2,lVar1,param_2,param_3,0);
            bVar3 = (byte)lVar2;
            param_4 = param_3;
            param_3 = lVar1;
          }
        }
        func_0x000107c6142c(param_3);
      }
      func_0x000107c6142c(param_4);
      *(byte *)(unaff_x20 + _DAT_112ff50d8) = bVar3 & 1;
      goto LAB_103bd2b40;
    }
LAB_103bd2a5c:
    func_0x000107c6142c(param_3);
  }
  func_0x000107c6142c(param_4);
  *(undefined1 *)(unaff_x20 + _DAT_112ff50d8) = 0;
LAB_103bd2b40:
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd2b70; end: 103bd2bf3; -[SCSDNMainAppTimeSensitiveResolver initWithTimeSensitivePolicy:senderUserId:rankedBestFriendsUserIds:] */

void FUN_103bd2b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  }
  FUN_103bd2a0c(param_3,param_4,param_2,param_5);
  return;
}



/* Entry: 103bd2bf4; end: 103bd2c73; -[SCSDNMainAppTimeSensitiveResolver init] */

void FUN_103bd2bf4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SDNMainAppPayloadParser.SDNMainAppTimeSensitiveResolver",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd2c20);
  (*pcVar1)();
}



/* Entry: 103bd2c74; end: 103bd2e53;  */

undefined1  [16] FUN_103bd2c74(undefined8 param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long unaff_x20;
  int iVar13;
  undefined1 auVar14 [16];
  
  lVar4 = unaff_x20;
  func_0x000107c44fd8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103bd2e50);
    (*pcVar3)();
  }
  lVar5 = lVar4;
  func_0x000107c5ee30();
  func_0x000107c61170(lVar4);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar11 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar11 == 0) {
      uVar10 = param_2;
      func_0x00010006c090(lVar5);
      uVar12 = param_2 >> 0x30 & 0xff;
      param_2 = uVar10;
joined_r0x000103bd2d04:
      if (uVar12 != 0x10) goto LAB_103bd2e28;
    }
    else {
      func_0x00010006c090(lVar5);
      iVar13 = (int)((ulong)lVar5 >> 0x20);
      if (SBORROW4(iVar13,(int)lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103bd2e4c);
        (*pcVar3)();
      }
      if (iVar13 - (int)lVar5 != 0x10) goto LAB_103bd2e28;
    }
    func_0x000107c44fd8();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103bd2e54);
      (*pcVar3)();
    }
    lVar4 = unaff_x20;
    func_0x000107c5ee30();
    func_0x000107c61170(unaff_x20);
    puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSData_1126ae778);
    lVar5 = lVar4;
    func_0x000107c5ee20(lVar4,param_2);
    func_0x000107c4635c(puVar6);
    func_0x000107c61170(lVar5);
    func_0x00010006c090(lVar4,param_2);
    func_0x000107c61178(puVar6);
    func_0x000107c3eea8();
    puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSUUID_1126b0270);
    func_0x000107c48ff4();
    puVar8 = puVar7;
    func_0x000107c3ac54();
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c5faec();
    func_0x000107c61170(puVar8);
    uVar12 = param_2;
    func_0x000107c5fb1c(puVar9,param_2);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c6142c(param_2);
  }
  else {
    if (uVar11 == 2) {
      lVar4 = *(long *)(lVar5 + 0x10);
      lVar1 = *(long *)(lVar5 + 0x18);
      func_0x00010006c090(lVar5);
      uVar12 = lVar1 - lVar4;
      if (SBORROW8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103bd2e48);
        (*pcVar3)();
      }
      goto joined_r0x000103bd2d04;
    }
    func_0x00010006c090(lVar5);
LAB_103bd2e28:
    puVar9 = (undefined *)0x0;
    uVar12 = 0;
  }
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = puVar9;
  return auVar14;
}



/* Entry: 103bd2e54; end: 103bd2e8f; -[_TtC26NotificationPayloadLogging25NotificationPayloadLogger init] */

void FUN_103bd2e54(undefined8 param_1)

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



/* Entry: 103bd2e90; end: 103bd343f;  */

void FUN_103bd2e90(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_160 [104];
  ulong uStack_f8;
  undefined8 *apuStack_f0 [18];
  
  func_0x00010485263c();
  uStack_f8 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  apuStack_f0[0] = puVar7;
  func_0x000107c61434();
  func_0x00010485266c();
  apuStack_f0[1] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[2] = puVar7;
  func_0x000107c61434();
  func_0x0001048526a0();
  apuStack_f0[3] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[4] = puVar7;
  func_0x000107c61434();
  func_0x000104852710();
  apuStack_f0[5] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[6] = puVar7;
  func_0x000107c61434();
  func_0x0001048526d0();
  apuStack_f0[7] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[8] = puVar7;
  func_0x000107c61434();
  func_0x00010485274c();
  apuStack_f0[9] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[10] = puVar7;
  func_0x000107c61434();
  func_0x000104852784();
  apuStack_f0[0xb] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[0xc] = puVar7;
  func_0x000107c61434();
  func_0x0001048527c4();
  apuStack_f0[0xd] = (undefined8 *)*puVar7;
  puVar7 = (undefined8 *)puVar7[1];
  apuStack_f0[0xe] = puVar7;
  func_0x000107c61434();
  func_0x000104852304();
  apuStack_f0[0xf] = (undefined8 *)*puVar7;
  uVar4 = puVar7[1];
  apuStack_f0[0x10] = (undefined8 *)uVar4;
  func_0x0001000285a8(0x112d46b30,&UNK_10d917640);
  lVar8 = 9;
  func_0x000107c602e8();
  lVar1 = lVar8 + 0x38;
  func_0x000107c61434(uVar4);
  lVar15 = 0;
  do {
    uVar3 = (&uStack_f8)[lVar15 * 2];
    puVar7 = apuStack_f0[lVar15 * 2];
    func_0x000107c6068c(auStack_160,*(undefined8 *)(lVar8 + 0x28));
    func_0x000107c61434(puVar7);
    puVar9 = auStack_160;
    func_0x000107c5fb58(auStack_160,uVar3,puVar7);
    func_0x000107c606a8();
    uVar13 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar13 ^ 0xffffffffffffffff);
    uVar10 = uVar14 >> 6;
    uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
    uVar12 = 1L << (uVar14 & 0x3f);
    if ((uVar12 & uVar11) != 0) {
      do {
        puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
        uVar10 = *puVar2;
        puVar5 = (undefined8 *)puVar2[1];
        if ((uVar10 == uVar3 && puVar5 == puVar7) ||
           (func_0x000107c605b8(uVar10,puVar5,uVar3,puVar7,0), (uVar10 & 1) != 0)) {
          func_0x000107c6142c(puVar7);
          goto LAB_103bd2f8c;
        }
        uVar14 = uVar14 + 1 & ~uVar13;
        uVar10 = uVar14 >> 6;
        uVar11 = *(ulong *)(lVar1 + uVar10 * 8);
        uVar12 = 1L << (uVar14 & 0x3f);
      } while ((uVar12 & uVar11) != 0);
    }
    *(ulong *)(lVar1 + uVar10 * 8) = uVar12 | uVar11;
    puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar14 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = (ulong)puVar7;
    if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x103bd30a0);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
LAB_103bd2f8c:
    lVar15 = lVar15 + 1;
    if (lVar15 == 9) {
      func_0x000107c61408(&uStack_f8,9,PTR___sSSN_11034da80);
      lRam00000001135945e8 = lVar8;
      return;
    }
  } while( true );
}



/* Entry: 103bd3440; end: 103bd34f3; +[_TtC26NotificationPayloadLogging25NotificationPayloadLogger debugUserInfoFrom:] */

void FUN_103bd3440(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR___sypN_11034f1a8;
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  func_0x000107c614ec(param_1);
  lVar2 = param_3;
  func_0x000103bd30a0();
  func_0x000107c6142c(param_3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5f9dc(lVar2,PTR___ss11AnyHashableVN_11034e448,puVar1 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 103bd34f4; end: 103bd3527;  */

void FUN_103bd34f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd3528; end: 103bd352b; -[_TtC26NotificationPayloadLogging25NotificationPayloadLogger .cxx_destruct] */

void FUN_103bd3528(void)

{
  return;
}



/* Entry: 103bd352c; end: 103bd354b;  */

void FUN_103bd352c(void)

{
  func_0x000107c61168(&PTR_PTR_112941780);
  return;
}



/* Entry: 103bd354c; end: 103bd35db;  */

undefined8 FUN_103bd354c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d69838;
  func_0x0001000285a8(0x112d69838,&UNK_10d92d0b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103bd35dc; end: 103bd35eb; -[SCNotificationImageAttachmentResolver imageAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd35dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5130));
  return;
}



/* Entry: 103bd35ec; end: 103bd3657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd35ec(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_103bd3884();
  func_0x000107c6142c(param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112ff5130) = uVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd3658; end: 103bd36e7; -[SCNotificationImageAttachmentResolver initWithUserInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd3658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  uVar2 = param_3;
  FUN_103bd3884();
  func_0x000107c6142c(param_3);
  *(undefined8 *)(param_1 + _DAT_112ff5130) = uVar2;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd36e8; end: 103bd3783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103bd36e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar2 = auStack_50;
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000103bd3e58(param_1,param_2,param_3,param_4);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112ff5130) = uVar1;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103bd3784; end: 103bd383f; -[SCNotificationImageAttachmentResolver initWithClientPayload:notificationType:respectServerIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103bd3784(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_50;
  long lStack_48;
  
  plVar3 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x000103bd3e58();
  func_0x000107c6142c(param_2);
  *(undefined8 *)(param_1 + _DAT_112ff5130) = uVar2;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_3);
  return (undefined1 *)plVar3;
}



/* Entry: 103bd3840; end: 103bd3873;  */

void FUN_103bd3840(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd3874; end: 103bd3883; -[SCNotificationImageAttachmentResolver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd3874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5130));
  return;
}



/* Entry: 103bd3884; end: 103bd43df;  */

undefined * FUN_103bd3884(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar1 = param_1;
  func_0x000104852408();
  puStack_a8 = (undefined8 *)*puVar1;
  puVar1 = (undefined8 *)puVar1[1];
  puStack_a0 = puVar1;
  func_0x000107c61438(puVar1,2);
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c602d4(auStack_98,&puStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_1[2] == 0) {
LAB_103bd3920:
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    puVar2 = auStack_98;
    func_0x000100df95d0(puVar2);
    if (((ulong)puVar11 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_103bd3920;
    }
    func_0x0001000bb420(param_1[7] + (long)puVar2 * 0x20,&uStack_70);
    func_0x000107c6142c(puVar1);
    puVar1 = param_1;
  }
  func_0x000107c6142c(puVar1);
  func_0x0001007bbff0(auStack_98);
  puVar11 = PTR___sypN_11034f1a8;
  if (lStack_58 == 0) {
LAB_103bd3e30:
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    ppuVar3 = &puStack_a8;
    func_0x000107c6147c(ppuVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    puVar10 = puStack_a0;
    puVar1 = puStack_a8;
    if (((ulong)ppuVar3 & 1) == 0) {
      return (undefined *)0x0;
    }
    func_0x000103bd46f0(0);
    func_0x000107c61434(puVar10);
    puVar4 = puVar1;
    FUN_103bd4400(puVar1,puVar10);
    if (((ulong)puVar4 & 1) == 0) {
LAB_103bd3c24:
      puVar4 = puVar1;
      func_0x000103bd4420(puVar1,puVar10);
      func_0x000107c6142c(puVar10);
      if (((ulong)puVar4 & 1) == 0) {
        FUN_103bd4568(puVar1,puVar10);
        func_0x000107c6142c();
        if (((ulong)puVar1 & 1) == 0) {
          return (undefined *)0x0;
        }
        func_0x0001048524e8();
        puStack_a8 = (undefined8 *)*puVar10;
        puVar1 = (undefined8 *)puVar10[1];
        puStack_a0 = puVar1;
        func_0x000107c61438(puVar1,2);
        puVar8 = PTR___sSSN_11034da80;
        func_0x000107c602d4(auStack_98,&puStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        if (param_1[2] == 0) {
LAB_103bd3d9c:
          uStack_68 = 0;
          uStack_70 = 0;
          lStack_58 = 0;
          uStack_60 = 0;
        }
        else {
          func_0x000107c61434(param_1);
          puVar2 = auStack_98;
          func_0x000100df95d0(puVar2);
          if (((ulong)puVar8 & 1) == 0) {
            func_0x000107c6142c(param_1);
            goto LAB_103bd3d9c;
          }
          func_0x0001000bb420(param_1[7] + (long)puVar2 * 0x20,&uStack_70);
          func_0x000107c6142c(puVar1);
          puVar1 = param_1;
        }
        func_0x000107c6142c(puVar1);
        func_0x0001007bbff0(auStack_98);
        if (lStack_58 != 0) {
          ppuVar3 = &puStack_a8;
          func_0x000107c6147c(ppuVar3,&uStack_70,puVar11 + 8,PTR___sSSN_11034da80,6);
          puVar10 = puStack_a0;
          puVar1 = puStack_a8;
          if (((ulong)ppuVar3 & 1) == 0) {
            return (undefined *)0x0;
          }
          puVar11 = PTR_PTR_1126e1be8;
          func_0x000107c61168(PTR_PTR_1126e1be8);
          func_0x000107c5fadc(puVar1,puVar10);
          func_0x000107c6142c(puVar10);
          func_0x000107c5d818(puVar11);
          func_0x000107c61180();
          func_0x000107c61170(puVar1);
          return puVar11;
        }
        goto LAB_103bd3e30;
      }
      func_0x000107c6142c();
      func_0x0001048517f0();
      uVar9 = *puVar10;
      uVar12 = puVar10[1];
      func_0x000107c61434(uVar12);
      uVar7 = uVar9;
      func_0x000107c5fadc(uVar9,uVar12);
      puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c61168();
      func_0x000107c450cc();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (puVar11 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126e1be8;
        func_0x000107c61168(PTR_PTR_1126e1be8);
        func_0x000107c5fadc(uVar9,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c5d1a0(puVar8);
LAB_103bd3cd4:
        func_0x000107c61180();
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar11);
        return puVar8;
      }
    }
    else {
      func_0x000104852478();
      puStack_a8 = (undefined8 *)*puVar4;
      puVar4 = (undefined8 *)puVar4[1];
      puStack_a0 = puVar4;
      func_0x000107c61438(puVar4,2);
      puVar8 = PTR___sSSN_11034da80;
      func_0x000107c602d4(auStack_98,&puStack_a8,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      if (param_1[2] == 0) {
LAB_103bd3a10:
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x000107c61434(param_1);
        puVar2 = auStack_98;
        func_0x000100df95d0(puVar2);
        if (((ulong)puVar8 & 1) == 0) {
          func_0x000107c6142c(param_1);
          goto LAB_103bd3a10;
        }
        func_0x0001000bb420(param_1[7] + (long)puVar2 * 0x20,&uStack_70);
        func_0x000107c6142c(puVar4);
        puVar4 = param_1;
      }
      func_0x000107c6142c(puVar4);
      func_0x0001007bbff0(auStack_98);
      if (lStack_58 == 0) {
        func_0x000107c61430(puVar10,2);
        goto LAB_103bd3e30;
      }
      ppuVar3 = &puStack_a8;
      func_0x000107c6147c(ppuVar3,&uStack_70,puVar11 + 8,PTR___sSSN_11034da80,6);
      puVar6 = puStack_a0;
      puVar4 = puStack_a8;
      if (((ulong)ppuVar3 & 1) == 0) {
        func_0x000107c61430(puVar10,2);
        return (undefined *)0x0;
      }
      func_0x000104851708();
      if (((puVar4 == *ppuVar3) && (puVar6 == ppuVar3[1])) ||
         (puVar5 = puVar4, func_0x000107c605b8(puVar4,puVar6,*ppuVar3,ppuVar3[1],0),
         ((ulong)puVar5 & 1) != 0)) {
        func_0x000107c6142c(puVar6);
        func_0x000107c61430(puVar10,2);
        func_0x000104851778();
        uVar9 = *puVar10;
        uVar12 = puVar10[1];
        func_0x000107c61434(uVar12);
        uVar7 = uVar9;
        func_0x000107c5fadc(uVar9,uVar12);
        puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168();
        func_0x000107c450cc();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (puVar11 != (undefined *)0x0) {
          puVar8 = PTR_PTR_1126e1be8;
          func_0x000107c61168(PTR_PTR_1126e1be8);
          func_0x000107c5fadc(uVar9,uVar12);
          func_0x000107c6142c(uVar12);
          func_0x000107c5d1a0(puVar8);
          goto LAB_103bd3cd4;
        }
      }
      else {
        func_0x000104851738();
        if ((puVar4 == (undefined8 *)*puVar5) && (puVar6 == (undefined8 *)puVar5[1])) {
          func_0x000107c6142c(puVar10);
        }
        else {
          func_0x000107c605b8(puVar4,puVar6,(undefined8 *)*puVar5,(undefined8 *)puVar5[1],0);
          func_0x000107c6142c(puVar6);
          puVar6 = puVar10;
          if (((ulong)puVar4 & 1) == 0) goto LAB_103bd3c24;
        }
        func_0x000107c6142c(puVar10);
        func_0x000107c6142c();
        func_0x0001048517b8();
        uVar9 = *puVar6;
        uVar12 = puVar6[1];
        func_0x000107c61434(uVar12);
        uVar7 = uVar9;
        func_0x000107c5fadc(uVar9,uVar12);
        puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c61168();
        func_0x000107c450cc();
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        if (puVar11 != (undefined *)0x0) {
          puVar8 = PTR_PTR_1126e1be8;
          func_0x000107c61168(PTR_PTR_1126e1be8);
          func_0x000107c5fadc(uVar9,uVar12);
          func_0x000107c6142c(uVar12);
          func_0x000107c5d1a0(puVar8);
          goto LAB_103bd3cd4;
        }
      }
    }
    func_0x000107c6142c(uVar12);
  }
  return (undefined *)0x0;
}



/* Entry: 103bd43e0; end: 103bd43ff;  */

void FUN_103bd43e0(void)

{
  func_0x000107c61168(&PTR_PTR_112941830);
  return;
}



/* Entry: 103bd4400; end: 103bd440f;  */

uint FUN_103bd4400(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_1,param_2,lVar1);
    func_0x000107c61408(lVar1 + 0x20,2,PTR___sSSN_11034da80);
    return (uint)param_1 & 1;
  }
  return 0;
}



/* Entry: 103bd4410; end: 103bd442f; +[SCMessagingNotificationTypeHelpers isSnapPushType:] */

uint FUN_103bd4410(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    func_0x000107c6142c(param_2);
    func_0x000107c61408(lVar1 + 0x20,2,PTR___sSSN_11034da80);
  }
  return uVar2 & 1;
}



/* Entry: 103bd4430; end: 103bd44b7;  */

uint FUN_103bd4430(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_1,param_2,lVar1);
    func_0x000107c61408(lVar1 + 0x20,param_4,PTR___sSSN_11034da80);
    return (uint)param_1 & 1;
  }
  return 0;
}



/* Entry: 103bd44b8; end: 103bd44c7; +[SCMessagingNotificationTypeHelpers isChatPushType:] */

uint FUN_103bd44b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    func_0x000107c6142c(param_2);
    func_0x000107c61408(lVar1 + 0x20,3,PTR___sSSN_11034da80);
  }
  return uVar2 & 1;
}



/* Entry: 103bd44c8; end: 103bd4567;  */

uint FUN_103bd44c8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    func_0x000107c6142c(param_2);
    func_0x000107c61408(lVar1 + 0x20,param_5,PTR___sSSN_11034da80);
  }
  return uVar2 & 1;
}



/* Entry: 103bd4568; end: 103bd45eb;  */

uint FUN_103bd4568(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_1,param_2,lVar1);
    func_0x000107c61408(lVar1 + 0x20,10,PTR___sSSN_11034da80);
    return (uint)param_1 & 1;
  }
  return 0;
}



/* Entry: 103bd45ec; end: 103bd467f; +[SCMessagingNotificationTypeHelpers isBitmojiReactionPushType:] */

uint FUN_103bd45ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    lVar1 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000100077018(param_3,param_2,lVar1);
    uVar2 = (uint)param_3;
    func_0x000107c61408(lVar1 + 0x20,10,PTR___sSSN_11034da80);
    func_0x000107c6142c(param_2);
  }
  return uVar2 & 1;
}



/* Entry: 103bd4680; end: 103bd46bb; -[SCMessagingNotificationTypeHelpers init] */

void FUN_103bd4680(undefined8 param_1)

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



/* Entry: 103bd46bc; end: 103bd470f;  */

void FUN_103bd46bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd4710; end: 103bd473f;  */

void FUN_103bd4710(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103bd4740; end: 103bd47b3; +[_TtC9SCImageIO9SCImageIO embeddedSnapchatMetadatafromImageFileData:] */

void FUN_103bd4740(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 == 0) {
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_3;
    func_0x000107c61174(param_3);
    func_0x000107c5ee30(param_3);
    func_0x000107c61170(lVar1);
  }
  lVar1 = param_3;
  FUN_103bd49c4(param_3,param_2);
  func_0x0001000b44c0(param_3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 103bd47b4; end: 103bd4897; +[_TtC9SCImageIO9SCImageIO writeMetadataToImageFileData:embeddedMetadata:location:] */

void FUN_103bd47b4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  uVar3 = param_4;
  func_0x000107c61174(param_4);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c5ee30(param_3);
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  uVar4 = param_2;
  FUN_103bd4cd4(param_3,param_2,param_4,param_5);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = uVar1;
    func_0x000107c5ee20(uVar1,uVar4);
    func_0x0001000b44c0(uVar1,uVar4);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103bd4898; end: 103bd48d3; -[_TtC9SCImageIO9SCImageIO init] */

void FUN_103bd4898(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_103bd52f8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd48d4; end: 103bd4903;  */

void FUN_103bd48d4(void)

{
  FUN_103bd52f8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd4904; end: 103bd49c3;  */

/* WARNING: Removing unreachable block (ram,0x000103bd4c60) */

long FUN_103bd4904(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long unaff_x20;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5ee20();
  func_0x000107c4636c();
  func_0x000107c61170(param_1);
  lVar2 = 0;
  if (unaff_x20 == 0) {
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170();
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return unaff_x20;
  }
  func_0x000107c60e78();
  if (0xe < param_2 >> 0x3c) {
    return 0;
  }
  func_0x000107c5ee20();
  lVar10 = lVar2;
  func_0x000107c60990();
  if (lVar10 != 0) {
    lVar3 = lVar10;
    func_0x000107c60988();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar2);
      lVar2 = lVar10;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c3ac74();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uStack_c8 = 0;
        lStack_d0 = 0;
        lStack_b8 = 0;
        uStack_c0 = 0;
      }
      else {
        func_0x000107c60234(&lStack_d0);
        func_0x000107c615e8(lVar4);
      }
      uStack_a8 = uStack_c8;
      lStack_b0 = lStack_d0;
      lStack_98 = lStack_b8;
      uStack_a0 = uStack_c0;
      if (lStack_b8 == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar10);
LAB_103bd4c18:
        func_0x000107c61170(lVar3);
        func_0x00010006e7f4(&lStack_b0);
        return 0;
      }
      uVar5 = 0;
      FUN_103bd5318(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar8 = PTR___sypN_11034f1a8;
      plVar6 = &lStack_e0;
      func_0x000107c6147c(plVar6,&lStack_b0,PTR___sypN_11034f1a8 + 8,uVar5,6);
      lVar4 = lStack_e0;
      if (((ulong)plVar6 & 1) == 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar10);
        lVar2 = lVar3;
      }
      else {
        lVar7 = lStack_e0;
        func_0x000107c3ac74();
        func_0x000107c61180();
        if (lVar7 == 0) {
          uStack_c8 = 0;
          lStack_d0 = 0;
          lStack_b8 = 0;
          uStack_c0 = 0;
        }
        else {
          func_0x000107c60234(&lStack_d0);
          func_0x000107c615e8(lVar7);
        }
        uStack_a8 = uStack_c8;
        lStack_b0 = lStack_d0;
        lStack_98 = lStack_b8;
        uStack_a0 = uStack_c0;
        if (lStack_b8 == 0) {
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar10);
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
          goto LAB_103bd4c18;
        }
        plVar6 = &lStack_e0;
        func_0x000107c6147c(plVar6,&lStack_b0,puVar8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar6 & 1) != 0) {
          puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x000107c610f8();
          lVar7 = lStack_e0;
          func_0x000107c5fadc(lStack_e0,uStack_d8);
          func_0x000107c6142c(uStack_d8);
          func_0x000107c45920();
          func_0x000107c61170(lVar7);
          if (puVar8 != (undefined *)0x0) {
            uStack_a8 = 0xf000000000000000;
            lStack_b0 = 0;
            func_0x000107c5ee2c(puVar8,&lStack_b0);
            func_0x000107c61170(puVar8);
            uVar1 = uStack_a8;
            lVar7 = lStack_b0;
            if (uStack_a8 >> 0x3c < 0xf) {
              func_0x000107c610f8(PTR_PTR_1126bcf38);
              lVar9 = lVar7;
              FUN_103bd4904(lVar7,uVar1);
              func_0x0001000b44c0(lVar7,uVar1);
              func_0x000107c61170(lVar10);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar2);
              if (lVar9 == 0) {
                return 0;
              }
              return lVar9;
            }
          }
        }
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar3);
        lVar2 = lVar4;
      }
    }
  }
  func_0x000107c61170(lVar2);
  return 0;
}



/* Entry: 103bd49c4; end: 103bd4cd3;  */

/* WARNING: Removing unreachable block (ram,0x000103bd4c60) */

long FUN_103bd49c4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if (0xe < param_2 >> 0x3c) {
    return 0;
  }
  func_0x000107c5ee20();
  lVar2 = param_1;
  func_0x000107c60990();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c60988();
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
      param_1 = lVar2;
    }
    else {
      lVar4 = lVar3;
      func_0x000107c3ac74();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uStack_88 = 0;
        lStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        func_0x000107c60234(&lStack_90);
        func_0x000107c615e8(lVar4);
      }
      uStack_68 = uStack_88;
      lStack_70 = lStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
LAB_103bd4c18:
        func_0x000107c61170(lVar3);
        func_0x00010006e7f4(&lStack_70);
        return 0;
      }
      uVar5 = 0;
      FUN_103bd5318(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar8 = PTR___sypN_11034f1a8;
      plVar6 = &lStack_a0;
      func_0x000107c6147c(plVar6,&lStack_70,PTR___sypN_11034f1a8 + 8,uVar5,6);
      lVar4 = lStack_a0;
      if (((ulong)plVar6 & 1) == 0) {
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
        param_1 = lVar3;
      }
      else {
        lVar7 = lStack_a0;
        func_0x000107c3ac74();
        func_0x000107c61180();
        if (lVar7 == 0) {
          uStack_88 = 0;
          lStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          func_0x000107c60234(&lStack_90);
          func_0x000107c615e8(lVar7);
        }
        uStack_68 = uStack_88;
        lStack_70 = lStack_90;
        lStack_58 = lStack_78;
        uStack_60 = uStack_80;
        if (lStack_78 == 0) {
          func_0x000107c61170(param_1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
          goto LAB_103bd4c18;
        }
        plVar6 = &lStack_a0;
        func_0x000107c6147c(plVar6,&lStack_70,puVar8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar6 & 1) != 0) {
          puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
          func_0x000107c610f8();
          lVar7 = lStack_a0;
          func_0x000107c5fadc(lStack_a0,uStack_98);
          func_0x000107c6142c(uStack_98);
          func_0x000107c45920();
          func_0x000107c61170(lVar7);
          if (puVar8 != (undefined *)0x0) {
            uStack_68 = 0xf000000000000000;
            lStack_70 = 0;
            func_0x000107c5ee2c(puVar8,&lStack_70);
            func_0x000107c61170(puVar8);
            uVar1 = uStack_68;
            lVar7 = lStack_70;
            if (uStack_68 >> 0x3c < 0xf) {
              func_0x000107c610f8(PTR_PTR_1126bcf38);
              lVar9 = lVar7;
              FUN_103bd4904(lVar7,uVar1);
              func_0x0001000b44c0(lVar7,uVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              func_0x000107c61170(param_1);
              if (lVar9 == 0) {
                return 0;
              }
              return lVar9;
            }
          }
        }
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        param_1 = lVar4;
      }
    }
  }
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 103bd4cd4; end: 103bd52f7;  */

undefined1  [16]
FUN_103bd4cd4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar1 = param_3;
  func_0x000107c5ee20();
  lVar2 = lVar1;
  func_0x000107c60990();
  if (lVar2 == 0) {
LAB_103bd52cc:
    func_0x000107c61170(lVar1);
  }
  else {
    lVar3 = lVar2;
    func_0x000107c60988();
    if (lVar3 == 0) {
LAB_103bd52c4:
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
      goto LAB_103bd52cc;
    }
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c4d2d4();
    func_0x000107c60234(&lStack_90);
    func_0x000107c615e8(lVar4);
    uVar5 = 0;
    FUN_103bd5318(0,0x112dcbc28,&PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    plVar6 = &lStack_b0;
    func_0x000107c6147c(plVar6,&lStack_90,PTR___sypN_11034f1a8 + 8,uVar5,6);
    lVar4 = lStack_b0;
    if ((int)plVar6 == 0) {
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar3);
      lVar1 = lVar3;
      goto LAB_103bd52c4;
    }
    if (param_6 != 0) {
      lVar7 = 0x112da90a0;
      func_0x0001000285a8(0x112da90a0,&UNK_10d950500);
      func_0x000107c61534();
      *(undefined8 *)(lVar7 + 0x18) = 4;
      *(undefined8 *)(lVar7 + 0x10) = 2;
      uVar15 = *(undefined8 *)PTR__kCGImagePropertyGPSLatitude_110349d30;
      *(undefined8 *)(lVar7 + 0x20) = uVar15;
      func_0x000107c61174();
      func_0x000107c61174(uVar15);
      lVar14 = param_6;
      func_0x000107c4077c();
      func_0x000107c5fdd0();
      lVar8 = lVar14;
      func_0x000107c614f0();
      *(long *)(lVar7 + 0x28) = lVar14;
      uVar15 = *(undefined8 *)PTR__kCGImagePropertyGPSLongitude_110349d38;
      *(long *)(lVar7 + 0x40) = lVar8;
      *(undefined8 *)(lVar7 + 0x48) = uVar15;
      func_0x000107c61174(uVar15);
      lVar14 = param_6;
      func_0x000107c4077c();
      func_0x000107c5fdd0(param_2);
      lVar8 = lVar14;
      func_0x000107c614f0();
      *(long *)(lVar7 + 0x68) = lVar8;
      *(long *)(lVar7 + 0x50) = lVar14;
      lVar14 = lVar7;
      func_0x0001014c14a8(lVar7);
      func_0x000107c61588(lVar7);
      uVar15 = 0x112da90b0;
      func_0x0001000285a8(0x112da90b0,&UNK_10d950510);
      func_0x000107c61408((undefined8 *)(lVar7 + 0x20),2,uVar15);
      uVar16 = *(undefined8 *)PTR__kCGImagePropertyGPSDictionary_110349d28;
      uVar9 = 0;
      func_0x0001014bede8(0);
      uVar15 = 0x112da8f90;
      func_0x000103bd5358(0x112da8f90,&UNK_10dcb8d78);
      lVar7 = lVar14;
      func_0x000107c5f9dc(lVar14,uVar9,PTR___sypN_11034f1a8 + 8,uVar15);
      func_0x000107c6142c(lVar14);
      func_0x000107c61174(uVar16);
      func_0x000107c3ac78(lVar4);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar16);
      func_0x000107c61170(param_6);
    }
    if (param_5 == 0) {
LAB_103bd5114:
      lVar7 = lVar2;
      func_0x000107c60998();
      func_0x000107c61180();
      if (lVar7 != 0) {
        puVar12 = PTR__OBJC_CLASS___NSMutableData_1126b4958;
        func_0x000107c610f8();
        func_0x000107c5ee20(param_3,param_4);
        func_0x000107c4635c();
        func_0x000107c61170(param_3);
        puVar10 = puVar12;
        func_0x000107c6095c(puVar12,lVar7,1,0);
        if (puVar10 != (undefined *)0x0) {
          lVar14 = lVar2;
          func_0x000107c60958();
          func_0x000107c60960(puVar10);
          puVar11 = puVar12;
          func_0x000107c61174(puVar12);
          func_0x000107c5ee30(puVar12);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar11);
          func_0x000107c61170(puVar11);
          goto LAB_103bd52d8;
        }
        func_0x000107c61170(lVar7);
        func_0x000107c61170(puVar12);
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar3);
      lVar1 = lVar3;
      goto LAB_103bd52cc;
    }
    uVar15 = *(undefined8 *)PTR__kCGImagePropertyExifDictionary_110349cd0;
    func_0x000107c61174();
    lVar7 = lVar4;
    func_0x000107c3ac74();
    func_0x000107c61180();
    if (lVar7 == 0) {
      lStack_98 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      lStack_b0 = 0;
    }
    else {
      func_0x000107c60234(&lStack_b0);
      func_0x000107c615e8(lVar7);
    }
    uStack_88 = uStack_a8;
    lStack_90 = lStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 != 0) {
      uVar9 = 0;
      FUN_103bd5318(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
      puVar12 = PTR___sypN_11034f1a8;
      plVar6 = &lStack_b8;
      func_0x000107c6147c(plVar6,&lStack_90,PTR___sypN_11034f1a8 + 8,uVar9,6);
      if (((ulong)plVar6 & 1) == 0) {
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        lStack_b8 = lVar3;
      }
      else {
        lVar7 = lStack_b8;
        func_0x000107c4d2d4(lStack_b8);
        func_0x000107c60234(&lStack_90);
        func_0x000107c615e8(lVar7);
        plVar6 = &lStack_b0;
        plVar13 = &lStack_90;
        func_0x000107c6147c(plVar6,plVar13,puVar12 + 8,uVar5,6);
        lVar7 = lStack_b0;
        if ((int)plVar6 != 0) {
          lVar14 = param_5;
          func_0x000107c41214();
          func_0x000107c61180();
          if (lVar14 != 0) {
            lVar8 = lVar14;
            func_0x000107c5ee30();
            func_0x000107c61170(lVar14);
            uVar9 = *(undefined8 *)PTR__kCGImagePropertyExifUserComment_110349cf8;
            uVar5 = 0;
            lVar14 = lVar8;
            func_0x000107c5ee24(0,lVar8,plVar13);
            func_0x000107c5fadc();
            func_0x000107c6142c(lVar14);
            func_0x000107c61174(uVar9);
            func_0x000107c3ac78(lVar7);
            func_0x00010006c090(lVar8,plVar13);
            func_0x000107c61170(uVar5);
            func_0x000107c61170(uVar9);
          }
          func_0x000107c61174(uVar15);
          func_0x000107c3ac78(lVar4);
          func_0x000107c61170(lVar7);
          func_0x000107c61170(uVar15);
          func_0x000107c61170(lStack_b8);
          func_0x000107c61170(param_5);
          goto LAB_103bd5114;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
      }
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lStack_b8);
      lVar1 = param_5;
      goto LAB_103bd52c4;
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar2);
    func_0x00010006e7f4(&lStack_90);
  }
  puVar12 = (undefined *)0x0;
  lVar14 = -0x1000000000000000;
LAB_103bd52d8:
  auVar17._8_8_ = lVar14;
  auVar17._0_8_ = puVar12;
  return auVar17;
}



/* Entry: 103bd52f8; end: 103bd5317;  */

void FUN_103bd52f8(void)

{
  func_0x000107c61168(&PTR_PTR_1129419a8);
  return;
}



/* Entry: 103bd5318; end: 103bd5397;  */

void FUN_103bd5318(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103bd5398; end: 103bd53a7; -[_TtC33SCMemoriesThumbnailLoggerServices33SCMemoriesThumbnailLoggerServices memoriesThumbnailLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd5398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5450));
  return;
}



/* Entry: 103bd53a8; end: 103bd53f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd53a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5450) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd53f4; end: 103bd544f; -[_TtC33SCMemoriesThumbnailLoggerServices33SCMemoriesThumbnailLoggerServices init] */

void FUN_103bd53f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesThumbnailLoggerServices.SCMemoriesThumbnailLoggerServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd5420);
  (*pcVar1)();
}



/* Entry: 103bd5450; end: 103bd545f; -[_TtC33SCMemoriesThumbnailLoggerServices33SCMemoriesThumbnailLoggerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd5450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff5450));
  return;
}



/* Entry: 103bd5460; end: 103bd547f; +[MemoriesThumbnailLoggingConst TriggerGrid] */

void FUN_103bd5460(void)

{
  func_0x000107c5fadc(0x64697267,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5480; end: 103bd54ab; +[MemoriesThumbnailLoggingConst TriggerEntrySnap] */

void FUN_103bd5480(void)

{
  func_0x000107c5fadc(0x6e732e7972746e65,0xea00000000007061);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd54ac; end: 103bd54d7; +[MemoriesThumbnailLoggingConst TriggerEntryFts] */

void FUN_103bd54ac(void)

{
  func_0x000107c5fadc(0x74662e7972746e65,0xe900000000000073);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd54d8; end: 103bd5507; +[MemoriesThumbnailLoggingConst TriggerEntryOther] */

void FUN_103bd54d8(void)

{
  func_0x000107c5fadc(0x746f2e7972746e65,0xeb00000000726568);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5508; end: 103bd552f; +[MemoriesThumbnailLoggingConst ResultSuccess] */

void FUN_103bd5508(void)

{
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5530; end: 103bd554f; +[MemoriesThumbnailLoggingConst ResultFail] */

void FUN_103bd5530(void)

{
  func_0x000107c5fadc(0x6c696166,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5550; end: 103bd5573; +[MemoriesThumbnailLoggingConst ResultCancel] */

void FUN_103bd5550(void)

{
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5574; end: 103bd5597; +[MemoriesThumbnailLoggingConst SourceCache] */

void FUN_103bd5574(void)

{
  func_0x000107c5fadc(0x6568636163,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5598; end: 103bd55bf; +[MemoriesThumbnailLoggingConst SourceDownload] */

void FUN_103bd5598(void)

{
  func_0x000107c5fadc(0x64616f6c6e776f64,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd55c0; end: 103bd55eb; +[MemoriesThumbnailLoggingConst DetailsKeyIncludesDownload] */

void FUN_103bd55c0(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1ac8c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd55ec; end: 103bd561f; +[MemoriesThumbnailLoggingConst DetailsKeyStartRequest] */

void FUN_103bd55ec(void)

{
  func_0x000107c5fadc(0x65725f7472617473,0xed00007473657571);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5620; end: 103bd564b; +[MemoriesThumbnailLoggingConst DetailsKeyDiskWrite] */

void FUN_103bd5620(void)

{
  func_0x000107c5fadc(0x6972775f6b736964,0xea00000000006574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd564c; end: 103bd5677; +[MemoriesThumbnailLoggingConst DetailsKeyDownloadThumbnail] */

void FUN_103bd564c(void)

{
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1ac8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5678; end: 103bd56a3; +[MemoriesThumbnailLoggingConst DetailsKeyDownloadMediaFile] */

void FUN_103bd5678(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010f1ac900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd56a4; end: 103bd56d7; +[MemoriesThumbnailLoggingConst DetailsKeyRetrieveKeyIv] */

void FUN_103bd56a4(void)

{
  func_0x000107c5fadc(0x6576656972746572,0xef76695f79656b5f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd56d8; end: 103bd570b; +[MemoriesThumbnailLoggingConst DetailsKeyComposeMedia] */

void FUN_103bd56d8(void)

{
  func_0x000107c5fadc(0x5f65736f706d6f63,0xed0000616964656d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd570c; end: 103bd5737; +[MemoriesThumbnailLoggingConst DetailsKeyDecryptThumbnail] */

void FUN_103bd570c(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1ac920);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5738; end: 103bd5767; +[MemoriesThumbnailLoggingConst DetailsKeyDecodeImage] */

void FUN_103bd5738(void)

{
  func_0x000107c5fadc(0x695f65646f636564,0xec0000006567616d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5768; end: 103bd5793; +[MemoriesThumbnailLoggingConst DetailsKeyImageGenerating] */

void FUN_103bd5768(void)

{
  func_0x000107c5fadc(0xd000000000000010,0x800000010f1ac940);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd5794; end: 103bd57cf; +[MemoriesThumbnailLoggingConst DetailsStepKeys] */

void FUN_103bd5794(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103bd57d0; end: 103bd580b; -[MemoriesThumbnailLoggingConst init] */

void FUN_103bd57d0(undefined8 param_1)

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



/* Entry: 103bd580c; end: 103bd583f;  */

void FUN_103bd580c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103bd5840; end: 103bd5843; -[MemoriesThumbnailLoggingConst .cxx_destruct] */

void FUN_103bd5840(void)

{
  return;
}



/* Entry: 103bd5844; end: 103bd5863;  */

void FUN_103bd5844(void)

{
  func_0x000107c61168(&PTR_PTR_112941b18);
  return;
}



/* Entry: 103bd5864; end: 103bd586f; -[SCMemoriesSaveClientGeneratedSnapMetadata createdFromSnapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd5864(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5560);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bd5870; end: 103bd587b; -[SCMemoriesSaveClientGeneratedSnapMetadata createdFromCameraRollItemIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd5870(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5568);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bd587c; end: 103bd58bf;  */

void FUN_103bd587c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103bd58c0; end: 103bd58cf; -[SCMemoriesSaveClientGeneratedSnapMetadata clientProcessingBitMaskType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd58c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff5570));
  return;
}



/* Entry: 103bd58d0; end: 103bd58db; -[SCMemoriesSaveClientGeneratedSnapMetadata templateId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd58d0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff5578))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5578);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd58dc; end: 103bd58e7; -[SCMemoriesSaveClientGeneratedSnapMetadata collageUCOLensId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd58dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff5580))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5580);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd58e8; end: 103bd58f3; -[SCMemoriesSaveClientGeneratedSnapMetadata groupName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd58e8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff5588))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff5588);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd58f4; end: 103bd594b;  */

void FUN_103bd58f4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103bd594c; end: 103bd5af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd594c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff5560) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5568) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ff5570) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5578);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5580);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff5588);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd5af4; end: 103bd5c4b; -[SCMemoriesSaveClientGeneratedSnapMetadata initWithCreatedFromSnapIds:createdFromCameraRollItemIds:clientProcessingBitMaskType:templateId:collageUCOLensId:groupName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd5af4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  puVar5 = PTR___sSSN_11034da80;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c5fc54();
  if (param_6 == 0) {
    param_6 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar3 = puVar5;
  }
  if (param_7 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar2 = puVar5;
  }
  if (param_8 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  *(undefined8 *)(param_1 + _DAT_112ff5560) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff5568) = param_4;
  *(undefined8 *)(param_1 + _DAT_112ff5570) = param_5;
  plVar1 = (long *)(param_1 + _DAT_112ff5578);
  *plVar1 = param_6;
  plVar1[1] = (long)puVar3;
  plVar1 = (long *)(param_1 + _DAT_112ff5580);
  *plVar1 = param_7;
  plVar1[1] = (long)puVar2;
  plVar1 = (long *)(param_1 + _DAT_112ff5588);
  *plVar1 = param_8;
  plVar1[1] = (long)puVar5;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103bd5c4c; end: 103bd5cab; -[SCMemoriesSaveClientGeneratedSnapMetadata init] */

void FUN_103bd5c4c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSaveServices.MemoriesSaveClientGeneratedSnapMetadata",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103bd5c78);
  (*pcVar1)();
}



/* Entry: 103bd5cac; end: 103bd5d2f; -[SCMemoriesSaveClientGeneratedSnapMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103bd5cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103bd5cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103bd5ccc) */
/* WARNING: Removing unreachable block (ram,0x000103bd5d00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103bd5cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff5560));
  return;
}



/* Entry: 103bd5d30; end: 103bd5d4f;  */

void FUN_103bd5d30(void)

{
  func_0x000107c61168(&PTR_PTR_112941bc8);
  return;
}



/* Entry: 103bd5d50; end: 103bd5d83;  */

void FUN_103bd5d50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103bd5d84; end: 103bd5e1f;  */

undefined8 * FUN_103bd5d84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x000103bd5d60(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 103bd5e20; end: 103bd5e63;  */

undefined8 * FUN_103bd5e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000101de25e0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 103bd5e64; end: 103bd5f7f;  */

int FUN_103bd5e64(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7b < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x7c;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 4) >> 5) | (*(byte *)(param_1 + 4) >> 1 & 0xf) << 3) ^ 0x7f;
  if (0x7a < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103bd5f80; end: 103bd6043;  */

void FUN_103bd5f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  long in_stack_00000020;
  
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103bd66f0;
  piVar4 = *(int **)(in_stack_00000020 + 8);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  plVar2[2] = (long)plVar3;
  *plVar3 = (long)plVar2;
  plVar3[1] = (long)FUN_103bd611c;
                    /* WARNING: Could not recover jumptable at 0x000103bd6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103bd6044; end: 103bd611b;  */

void FUN_103bd6044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined1 param_9)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  long in_stack_00000010;
  
  piVar3 = *(int **)(in_stack_00000010 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103bd611c;
                    /* WARNING: Could not recover jumptable at 0x000103bd6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_8,0);
  return;
}


