/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102eb12f8; end: 102eb1383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102eb12f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f26f60;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f60,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102eb1a68;
  return auVar2;
}



/* Entry: 102eb1384; end: 102eb13d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1384(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f26f68;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102eb13d8; end: 102eb1417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102eb13d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f26f68;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f68,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_102eb1418;
  return auVar2;
}



/* Entry: 102eb1418; end: 102eb141b;  */

void FUN_102eb1418(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 102eb141c; end: 102eb1467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102eb141c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f26f70;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f70,auStack_38,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  return uVar2;
}



/* Entry: 102eb1468; end: 102eb14bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1468(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f26f70;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f70,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102eb14bc; end: 102eb14fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102eb14bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f26f70;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f70,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102eb1a6c;
  return auVar2;
}



/* Entry: 102eb14fc; end: 102eb151b;  */

void FUN_102eb14fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128ab0a8);
  return;
}



/* Entry: 102eb151c; end: 102eb1593; -[PreviewQuotaCheckerServiceImpl init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb151c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112f26f58) = 0;
  *(undefined8 *)(param_1 + _DAT_112f26f60) = 0;
  *(undefined8 *)(param_1 + _DAT_112f26f68) = 0;
  *(undefined8 *)(param_1 + _DAT_112f26f70) = 0;
  *(undefined8 *)(param_1 + _DAT_112f26f78) = 0;
  lVar1 = param_1;
  FUN_102eb14fc();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102eb1594; end: 102eb172f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long alStack_90 [2];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = _DAT_112f26f60;
  func_0x000107c61428(unaff_x20 + _DAT_112f26f60,auStack_68,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (lVar2 != 0) {
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb1730);
      (*pcVar1)();
    }
    uVar3 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010f1134c0);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(uVar3);
    lVar2 = _DAT_112f26f58;
    if ((int)lVar4 != 0) {
      func_0x000107c61428(unaff_x20 + _DAT_112f26f58,auStack_80,0,0);
      if (*(long *)(unaff_x20 + lVar2) != 0) {
        uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + lVar2) + _DAT_11303e8a0);
        func_0x000107c6157c(uVar3);
        func_0x0001000d224c(alStack_90);
        lVar2 = alStack_90[0];
        func_0x000107c4aaf8();
        func_0x000107c61180();
        func_0x000107c615e8(alStack_90[0]);
        if (lVar2 != 0) {
          if (*(ulong *)(lVar2 + _DAT_11303e908) < *(ulong *)(lVar2 + _DAT_11303e910)) {
            FUN_102eb17b0(param_1,param_2,param_3);
            func_0x000107c61574(uVar3);
            func_0x000107c61170(lVar2);
            return;
          }
          func_0x000107c61170(lVar2);
        }
        func_0x000107c61574(uVar3);
      }
    }
  }
  return;
}



/* Entry: 102eb1730; end: 102eb17af; -[PreviewQuotaCheckerServiceImpl checkMemoryQuotaAndUpsellWithUiContainer:snapDoc:sourceType:] */

/* WARNING: Possible PIC construction at 0x000102eb1794: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb1798) */

void FUN_102eb1730(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_102eb1594(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102eb17b0; end: 102eb19b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb17b0(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = _DAT_112f26f68;
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f26f68,auStack_78,0,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar6 == 0) {
    return;
  }
  func_0x000107c615f0(param_1);
  func_0x000107c5d7b4();
  func_0x000107c61180();
  uVar2 = uVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  if (uVar2 != 0) {
    uVar6 = uVar2;
    func_0x000107c4cc30();
    func_0x000107c61180();
    func_0x000107c615e8(uVar2);
    uVar2 = uVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    lVar1 = _DAT_112f26f78;
    lVar3 = _DAT_112f26f70;
    if (uVar2 != 0) {
      if (*(long *)(unaff_x20 + _DAT_112f26f78) == 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112f26f70,auStack_90,0,0);
        lVar3 = *(long *)(unaff_x20 + lVar3);
        if (lVar3 != 0) {
          func_0x000107c61174();
          uVar6 = uVar2;
          func_0x000107c4dc88();
          func_0x000107c61180();
          uVar4 = uVar6;
          func_0x000107c4a728();
          if ((uVar4 & 1) == 0) {
            func_0x000107c615e8(param_1);
            func_0x000107c615e8(uVar2);
            func_0x000107c61170(lVar3);
            func_0x000107c61170(uVar6);
            return;
          }
          uVar5 = 0;
          func_0x000102eb1f70(0);
          FUN_102eb1c5c(param_2,uVar5);
          uVar4 = param_2;
          FUN_102eb24ec();
          func_0x000107c61170(param_2);
          uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
          *(ulong *)(unaff_x20 + lVar1) = uVar4;
          func_0x000107c615f0(uVar4);
          func_0x000107c615e8(uVar5);
          func_0x000107c4ab18(uVar4);
          func_0x000107c615e8(param_1);
          func_0x000107c615e8(uVar2);
          func_0x000107c61170(lVar3);
          func_0x000107c61170(uVar6);
          param_1 = uVar4;
          goto LAB_102eb189c;
        }
      }
      func_0x000107c615e8(param_1);
      param_1 = uVar2;
    }
  }
LAB_102eb189c:
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102eb19b4; end: 102eb19e3;  */

void FUN_102eb19b4(void)

{
  FUN_102eb14fc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102eb19e4; end: 102eb1a4b; -[PreviewQuotaCheckerServiceImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb19e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26f58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26f60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26f68));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f26f70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f26f78));
  return;
}



/* Entry: 102eb1a4c; end: 102eb1a83; -[PreviewQuotaCheckerServiceImpl plusUpsellNotificationPresentationCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1a4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f26f78);
  *(undefined8 *)(param_1 + _DAT_112f26f78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102eb1a84; end: 102eb1b2f;  */

void FUN_102eb1a84(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102eb1b30; end: 102eb1bb7; +[SCPlusUpsellNotificationConfiguration plusStoryReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1b30(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112f26fa8) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f26fb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f26fb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f26fc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_112f26fc8) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102eb1bb8; end: 102eb1c5b; +[SCPlusUpsellNotificationConfiguration creatorStoryReplyWithHostAccountId:displayNameOrUsername:username:] */

void FUN_102eb1bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec(param_5);
  }
  FUN_102eb1e54(param_3,param_2,param_4,uVar1,param_5,uVar2);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102eb1c5c; end: 102eb1cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1c5c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112f26fa8) = 2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f26fb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f26fb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f26fc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f26fc8) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61154(auStack_30,puVar2);
  return;
}



/* Entry: 102eb1cf4; end: 102eb1d8f; +[SCPlusUpsellNotificationConfiguration memoriesPostSaveWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1cf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar3 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar3 + _DAT_112f26fa8) = 2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f26fb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f26fb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f26fc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_112f26fc8) = param_3;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = param_1;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102eb1d90; end: 102eb1def; -[SCPlusUpsellNotificationConfiguration init] */

void FUN_102eb1d90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusUpsellNotificationScope.PlusUpsellNotificationConfiguration",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb1dbc);
  (*pcVar1)();
}



/* Entry: 102eb1df0; end: 102eb1e53; -[SCPlusUpsellNotificationConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1df0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f26fb0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f26fb8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f26fc0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f26fc8));
  return;
}



/* Entry: 102eb1e54; end: 102eb1f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb1e54(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000102eb1f70();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112f26fa8) = 1;
  plVar1 = (long *)(lVar5 + _DAT_112f26fb0);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f26fb8);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f26fc0);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  *(undefined8 *)(lVar5 + _DAT_112f26fc8) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 102eb1f2c; end: 102eb1f2f;  */

void FUN_102eb1f2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db624e0;
  func_0x000107c61520(&UNK_10db624e0,&UNK_1105e4058);
  puRam0000000112f26fd0 = puVar1;
  return;
}



/* Entry: 102eb1f30; end: 102eb1f8f;  */

void FUN_102eb1f30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f26fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db624e0;
  func_0x000107c61520(&UNK_10db624e0,&UNK_1105e4058);
  puRam0000000112f26fd0 = puVar1;
  return;
}



/* Entry: 102eb1f90; end: 102eb20f3;  */

int FUN_102eb1f90(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102eb200c;
        goto LAB_102eb1ff0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102eb1ff0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_102eb200c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102eb20f4; end: 102eb2103; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb20f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f27000));
  return;
}



/* Entry: 102eb2104; end: 102eb2123; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb2104(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f27008));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102eb2124; end: 102eb2133; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope sourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102eb2124(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f27010);
}



/* Entry: 102eb2134; end: 102eb21bf; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb2134(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f27018;
  func_0x000107c61428(param_1 + _DAT_112f27018,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102eb21c0; end: 102eb2363; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb21c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f27018;
  func_0x000107c61428(param_1 + _DAT_112f27018,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102eb2364; end: 102eb23bf; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope init] */

void FUN_102eb2364(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusUpsellNotificationScope.PlusUpsellNotificationScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb2390);
  (*pcVar1)();
}



/* Entry: 102eb23c0; end: 102eb242b; -[_TtC27PlusUpsellNotificationScope27PlusUpsellNotificationScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102eb23c0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f27000));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f27008));
  param_1 = param_1 + _DAT_112f27018;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102eb242c; end: 102eb2497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb242c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100363a04();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f27028) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102eb2498; end: 102eb249f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb2498(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100363a04();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f27028) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 102eb24a0; end: 102eb24eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb24a0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f27028) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102eb24ec; end: 102eb2603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_102eb24ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000100362670();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112f27018;
  func_0x000107c61614(lVar4 + _DAT_112f27018,0);
  *(long *)(lVar4 + _DAT_112f27000) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112f27008) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112f27010) = param_3;
  func_0x000107c61428(lVar4 + lVar2,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar1);
  plStack_88 = plVar5;
  func_0x00010008a7c8(&uStack_80,&plStack_88);
  func_0x000100083b20(&plStack_88);
  func_0x000107c61574(uStack_80);
  func_0x000107c61170(plVar5);
  return plStack_88;
}



/* Entry: 102eb2604; end: 102eb26a3; -[_TtC27PlusUpsellNotificationScope35PlusUpsellNotificationScopeServices buildWithConfig:uiContainer:sourceType:delegate:] */

void FUN_102eb2604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102eb24ec(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102eb26a4; end: 102eb2703; -[_TtC27PlusUpsellNotificationScope35PlusUpsellNotificationScopeServices init] */

void FUN_102eb26a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusUpsellNotificationScope.PlusUpsellNotificationScopeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb26d0);
  (*pcVar1)();
}



/* Entry: 102eb2704; end: 102eb2723; -[_TtC27PlusUpsellNotificationScope35PlusUpsellNotificationScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb2704(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f27028));
  return;
}



/* Entry: 102eb2724; end: 102eb3587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb2724(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  uVar3 = param_2;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_3 + _DAT_112ff5600);
  func_0x000107c6157c();
  lVar4 = param_6;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001000285a8(0x112dbfa50,&UNK_10d97b760);
    lVar5 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    func_0x0001000285a8(0x112e30330,&UNK_10db62670);
    uVar6 = param_7;
    func_0x000107c5b3ac();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    uVar16 = *(undefined8 *)(param_12 + _DAT_11303eae0);
    func_0x0001000285a8(0x112f27080,&UNK_10db62678);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar16);
    func_0x000107c6157c(uVar2);
    pcVar1 = FUN_102eb35e0;
    func_0x0001000bdd8c(FUN_102eb35e0,uVar2);
    func_0x0001000285a8(0x112f27088,&UNK_10db62680);
    func_0x000107c613fc();
    pcVar8 = FUN_102eb35e8;
    func_0x0001000bdd8c(FUN_102eb35e8,0);
    func_0x0001000285a8(0x112df5ce8,&UNK_10d9c4a88);
    uVar6 = param_15;
    func_0x000107c5e14c();
    func_0x000107c61180();
    uVar9 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    func_0x0001000285a8(0x112e3c3a8,&UNK_10da27e40);
    uVar6 = param_16;
    func_0x000107c5b42c();
    func_0x000107c61180();
    uVar10 = uVar6;
    func_0x0001000bda74();
    func_0x000107c61170(uVar6);
    puVar11 = &UNK_1105e41b8;
    func_0x000107c613fc(&UNK_1105e41b8,0x18,7);
    *(undefined8 *)(puVar11 + 0x10) = param_17;
    func_0x0001000285a8(0x112e3c3b0,&UNK_10da27e48);
    func_0x000107c613fc();
    func_0x000107c61174();
    uVar6 = 0x102eb362c;
    func_0x0001000bdd8c(0x102eb362c,puVar11);
    puVar11 = &UNK_1105e41e0;
    func_0x000107c613fc(&UNK_1105e41e0,0x68,7);
    *(undefined8 *)(puVar11 + 0x10) = param_8;
    *(undefined8 *)(puVar11 + 0x18) = uVar16;
    *(code **)(puVar11 + 0x20) = pcVar1;
    *(undefined8 *)(puVar11 + 0x28) = uVar7;
    *(code **)(puVar11 + 0x30) = pcVar8;
    *(undefined8 *)(puVar11 + 0x38) = uVar9;
    *(undefined8 *)(puVar11 + 0x40) = uVar10;
    *(undefined8 *)(puVar11 + 0x48) = uVar6;
    *(undefined8 *)(puVar11 + 0x50) = param_18;
    *(undefined8 *)(puVar11 + 0x58) = param_5;
    *(undefined8 *)(puVar11 + 0x60) = param_20;
    func_0x0001000285a8(0x112f27090,&UNK_10db62690);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar16);
    func_0x000107c61174();
    func_0x000107c6157c(pcVar1);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(pcVar8);
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(uVar6);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar12 = FUN_102eb37e8;
    func_0x0001000bdd8c(FUN_102eb37e8,puVar11);
    puVar11 = &UNK_1105e4208;
    func_0x000107c613fc(&UNK_1105e4208,0x40,7);
    *(undefined8 *)(puVar11 + 0x10) = uVar3;
    *(undefined8 *)(puVar11 + 0x18) = param_4;
    *(undefined8 *)(puVar11 + 0x20) = uVar7;
    *(undefined8 *)(puVar11 + 0x28) = uVar16;
    *(undefined8 *)(puVar11 + 0x30) = param_11;
    *(undefined8 *)(puVar11 + 0x38) = param_9;
    func_0x0001000285a8(0x112f27098,&UNK_10db62698);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar16);
    func_0x000107c6157c(uVar7);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar13 = FUN_102eb38b0;
    func_0x0001000bdd8c(FUN_102eb38b0,puVar11);
    puVar11 = &UNK_1105e4230;
    func_0x000107c613fc(&UNK_1105e4230,0x80,7);
    *(long *)(puVar11 + 0x10) = lVar5;
    *(undefined8 *)(puVar11 + 0x18) = param_9;
    *(undefined8 *)(puVar11 + 0x20) = param_4;
    *(code **)(puVar11 + 0x28) = pcVar12;
    *(code **)(puVar11 + 0x30) = pcVar13;
    *(code **)(puVar11 + 0x38) = pcVar8;
    *(undefined8 *)(puVar11 + 0x40) = param_5;
    *(undefined8 *)(puVar11 + 0x48) = param_10;
    *(undefined8 *)(puVar11 + 0x50) = uVar16;
    *(undefined8 *)(puVar11 + 0x58) = param_13;
    *(undefined8 *)(puVar11 + 0x60) = param_14;
    *(undefined8 *)(puVar11 + 0x68) = param_19;
    *(undefined8 *)(puVar11 + 0x70) = param_21;
    *(undefined8 *)(puVar11 + 0x78) = param_22;
    func_0x0001000285a8(0x112f270a0,&UNK_10db626a0);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar16);
    func_0x000107c6157c(pcVar8);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(lVar5);
    func_0x000107c6157c(pcVar12);
    func_0x000107c6157c(pcVar13);
    func_0x000107c61174();
    func_0x000107c615f0(param_13);
    func_0x000107c61174();
    func_0x000107c61174(param_19);
    func_0x000107c61174(param_21);
    func_0x000107c61174(param_22);
    pcVar15 = FUN_102eb3c98;
    func_0x0001000bdd8c(FUN_102eb3c98,puVar11);
    uVar14 = 0;
    func_0x0001003651a8(0);
    func_0x000107c610f8();
    func_0x00010392d354(pcVar15,uVar14);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c615e8(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61574(pcVar13);
    func_0x000107c61574(pcVar12);
    func_0x000107c61574(lVar5);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(pcVar8);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(pcVar1);
    func_0x000107c61574(uVar16);
    func_0x000107c61574(uVar2);
    *(code **)(unaff_x20 + 0x10) = pcVar15;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb2e60);
  (*pcVar1)();
}



/* Entry: 102eb3588; end: 102eb35df;  */

void FUN_102eb3588(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000102ebf684();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105e4af8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102eb35e0; end: 102eb35e7;  */

void FUN_102eb35e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000102ebf684();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105e4af8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102eb35e8; end: 102eb365b;  */

void FUN_102eb35e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_102ebf5d0();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1105e4ae8;
  *param_1 = uVar2;
  return;
}



/* Entry: 102eb365c; end: 102eb37e7;  */

/* WARNING: Possible PIC construction at 0x000102eb371c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb37a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb37b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb37ac) */
/* WARNING: Removing unreachable block (ram,0x000102eb379c) */
/* WARNING: Removing unreachable block (ram,0x000102eb3720) */
/* WARNING: Removing unreachable block (ram,0x000102eb37bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb365c(undefined8 param_1)

{
  undefined8 uVar1;
  long in_stack_00000008;
  
  func_0x0001000285a8(0x112f271a8,&UNK_10db62728);
  func_0x000107c5b3c8(param_1);
  func_0x000107c61180();
  func_0x0001000bda74();
  func_0x000107c61170(param_1);
  func_0x000107c43d48();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(in_stack_00000008 + _DAT_1130806b8);
  func_0x0001000285a8(0x112d563c0,&UNK_10d91d0e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102eb37e8; end: 102eb37eb;  */

void FUN_102eb37e8(void)

{
  long unaff_x20;
  
  FUN_102eb365c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102eb37ec; end: 102eb38af;  */

/* WARNING: Possible PIC construction at 0x000102eb383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb3884) */
/* WARNING: Removing unreachable block (ram,0x000102eb3840) */
/* WARNING: Removing unreachable block (ram,0x000102eb3894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb37ec(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(in_x4 + _DAT_112f279e0));
  return;
}



/* Entry: 102eb38b0; end: 102eb38b3;  */

/* WARNING: Possible PIC construction at 0x000102eb383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb3884) */
/* WARNING: Removing unreachable block (ram,0x000102eb3840) */
/* WARNING: Removing unreachable block (ram,0x000102eb3894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb38b0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112f279e0),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102eb38b4; end: 102eb3c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb38b4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  long param_13,undefined8 param_14,undefined8 param_15)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lStack_80;
  long lStack_78;
  undefined8 auStack_70 [2];
  
  puVar2 = &UNK_1105e42f8;
  func_0x000107c613fc(&UNK_1105e42f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x0001000285a8(0x112f27178,&UNK_10db626f0);
  func_0x000107c613fc();
  func_0x000107c61174(param_3);
  uVar3 = 0x102eb4090;
  func_0x0001000bdd8c(0x102eb4090,puVar2);
  uVar13 = *(undefined8 *)(param_4 + _DAT_113077160);
  uVar12 = *(undefined8 *)(param_8 + _DAT_1130806b8);
  puVar2 = &UNK_1105e4320;
  func_0x000107c613fc(&UNK_1105e4320,0x28,7);
  *(long *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_9;
  func_0x0001000285a8(0x112f27180,&UNK_10db626f8);
  func_0x000107c613fc();
  func_0x000107c61174(param_8);
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_9);
  uVar4 = 0x102eb4098;
  func_0x0001000bdd8c(0x102eb4098,puVar2);
  func_0x0001000285a8(0x112f27188,&UNK_10db62700);
  uVar5 = *(undefined8 *)(param_13 + _DAT_112febcc8);
  func_0x0001000bda74();
  func_0x0001000285a8(0x112e2f5b8,&UNK_10da18270);
  func_0x000107c3e5d8();
  func_0x000107c61180();
  uVar6 = param_14;
  func_0x0001000bda74();
  func_0x000107c61170(param_14);
  puVar2 = &UNK_1105e4348;
  func_0x000107c613fc(&UNK_1105e4348,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_15;
  func_0x0001000285a8(0x112f27190,&UNK_10db62710);
  func_0x000107c613fc();
  func_0x000107c61174(param_15);
  pcVar7 = FUN_102eb40a4;
  func_0x0001000bdd8c(FUN_102eb40a4,puVar2);
  lVar8 = 0;
  FUN_102ec7178();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar1 = _DAT_112f27780;
  auStack_70[0] = 0;
  func_0x0001000285a8(0x112f27198,&UNK_10db62718);
  func_0x000107c613fc();
  puVar10 = auStack_70;
  func_0x00010006c248();
  *(undefined8 **)(lVar9 + lVar1) = puVar10;
  func_0x000107c61614(lVar9 + _DAT_112f27788,0);
  *(undefined8 *)(lVar9 + _DAT_112f27710) = param_2;
  *(undefined8 *)(lVar9 + _DAT_112f27718) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f27720) = uVar13;
  *(undefined8 *)(lVar9 + _DAT_112f27728) = param_5;
  *(undefined8 *)(lVar9 + _DAT_112f27730) = param_6;
  *(undefined8 *)(lVar9 + _DAT_112f27738) = param_7;
  *(undefined8 *)(lVar9 + _DAT_112f27740) = uVar12;
  *(undefined8 *)(lVar9 + _DAT_112f27748) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f27750) = param_10;
  *(undefined8 *)(lVar9 + _DAT_112f27758) = param_11;
  *(undefined8 *)(lVar9 + _DAT_112f27760) = param_12;
  *(undefined8 *)(lVar9 + _DAT_112f27768) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f27770) = uVar6;
  *(code **)(lVar9 + _DAT_112f27778) = pcVar7;
  puVar2 = PTR_s_init_1125d9248;
  lStack_80 = lVar9;
  lStack_78 = lVar8;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(uVar13);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(param_10);
  func_0x000107c615f0(param_11);
  func_0x000107c61174(param_12);
  plVar11 = &lStack_80;
  func_0x000107c61154(plVar11,puVar2);
  *param_1 = (long)plVar11;
  param_1[1] = (long)&PTR_DAT_1105e5098;
  return;
}



/* Entry: 102eb3c98; end: 102eb3c9b;  */

void FUN_102eb3c98(void)

{
  long unaff_x20;
  
  FUN_102eb38b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102eb3c9c; end: 102eb3d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb3c9c(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x0001000cad14();
  func_0x0001000285a8(0x112f271a0,&UNK_10db62720);
  func_0x000107c613fc();
  pcVar1 = FUN_102eb3d3c;
  func_0x0001000bdd8c(FUN_102eb3d3c,0);
  lVar2 = 0;
  func_0x000102eb50ec();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(code **)(lVar3 + 0x18) = pcVar1;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105e4548;
  *param_1 = lVar3;
  return;
}



/* Entry: 102eb3d3c; end: 102eb3d6b;  */

void FUN_102eb3d3c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ac778;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 102eb3d6c; end: 102eb3dff;  */

/* WARNING: Possible PIC construction at 0x000102eb3ddc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb3de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb3d6c(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130806b8);
  uVar4 = *(undefined8 *)(param_4 + _DAT_11302c6b8);
  lVar1 = 0;
  func_0x000102eb64e0();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105e4708;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 102eb3e00; end: 102eb3efb;  */

void FUN_102eb3e00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102eb3efc; end: 102eb3f0b;  */

/* WARNING: Possible PIC construction at 0x000102eb383c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3880: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102eb3890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb3884) */
/* WARNING: Removing unreachable block (ram,0x000102eb3840) */
/* WARNING: Removing unreachable block (ram,0x000102eb3894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb3efc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_112f279e0),
             *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 102eb3f0c; end: 102eb3fd3;  */

void FUN_102eb3f0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102eb3fd4; end: 102eb3fe3;  */

void FUN_102eb3fd4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102eb3fe4; end: 102eb4083;  */

void FUN_102eb3fe4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eb4084; end: 102eb40a3;  */

void FUN_102eb4084(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102eb40a4; end: 102eb40cb;  */

void FUN_102eb40a4(undefined8 *param_1,undefined8 param_2)

{
  func_0x000103bca028();
  *param_1 = param_2;
  return;
}



/* Entry: 102eb40cc; end: 102eb40f3;  */

void FUN_102eb40cc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105e4370;
  if (lRam0000000112f271b0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f271b0 = param_1;
  }
  return;
}



/* Entry: 102eb40f4; end: 102eb4137;  */

void FUN_102eb40f4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 102eb4138; end: 102eb414b;  */

void FUN_102eb4138(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  lVar1 = 0;
  func_0x000102ebf684();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105e4af8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102eb414c; end: 102eb424f;  */

void FUN_102eb414c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined1 auStack_50 [32];
  undefined1 auStack_28 [8];
  
  func_0x000107c40794();
  func_0x000107c60234(auStack_50);
  func_0x000107c615e8(unaff_x20);
  uVar1 = 0;
  func_0x000100fa1670(0);
  puVar2 = auStack_28;
  func_0x000107c6147c(puVar2,auStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar1 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f113600);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61654();
  }
  return;
}



/* Entry: 102eb4250; end: 102eb426f;  */

void FUN_102eb4250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb4270,0,0);
  return;
}



/* Entry: 102eb4270; end: 102eb45c3;  */

void FUN_102eb4270(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c5008c(lVar4,param_2,*(undefined8 *)(unaff_x22 + 0x78),
                      *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  if (lVar4 == 0) {
    uVar9 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar11 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010f010a90);
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102eb4504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x90);
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0xb0) = puVar5;
  if (lVar10 != 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c6157c(uVar11);
    lVar10 = lVar4;
    func_0x000107c4f3f4();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102eb45c0);
      (*pcVar2)();
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
    puVar5 = &UNK_1105e43e8;
    func_0x000107c613fc(&UNK_1105e43e8,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar9;
    *(undefined8 *)(puVar5 + 0x18) = uVar11;
    *(code **)(unaff_x22 + 0x48) = FUN_102eb4be0;
    *(undefined **)(unaff_x22 + 0x50) = puVar5;
    *(undefined **)(unaff_x22 + 0x28) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x38) = &UNK_100b5fdac;
    *(undefined **)(unaff_x22 + 0x40) = &UNK_1105e4400;
    lVar6 = unaff_x22 + 0x28;
    func_0x000107c60bc4(lVar6);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x000107c6157c(uVar11);
    func_0x000107c61574(uVar12);
    lVar7 = lVar10;
    func_0x000107c5c320(lVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(lVar6);
    func_0x000107c61170(lVar10);
    func_0x000107c3e924(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000102eb4c20(uVar9,uVar1);
  }
  *(long *)(unaff_x22 + 0x20) = lVar4;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  iVar3 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar3 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar8;
    uVar11 = 0x112d51140;
    func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_102eb45c4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0x58,&UNK_10db627d0,unaff_x22 + 0x10,FUN_102eb4b14,unaff_x22 + 0x60,0,0,uVar11);
    return;
  }
  pcVar2 = FUN_102eb4b14;
  func_0x000107c615b4(FUN_102eb4b14,unaff_x22 + 0x60);
  *(code **)(unaff_x22 + 0xc0) = pcVar2;
  func_0x000107c506cc();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    lVar10 = lVar4;
    func_0x000100759c94(lVar4,0);
    *(long *)(unaff_x22 + 200) = lVar10;
    func_0x000107c61170(lVar4);
    plVar8 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_102eb4628;
                    /* WARNING: Could not recover jumptable at 0x000102eb45b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100ff4658)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102eb45c4);
  (*pcVar2)();
}



/* Entry: 102eb45c4; end: 102eb4627;  */

void FUN_102eb45c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xe0) = *(undefined8 *)(lVar2 + 0x58);
    pcVar1 = FUN_102eb46f0;
  }
  else {
    *(long *)(lVar2 + 0xe8) = unaff_x20;
    pcVar1 = FUN_102eb4810;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102eb4628; end: 102eb46ef;  */

void FUN_102eb4628(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd8) = param_1;
  *(undefined1 *)(lVar1 + 0xf0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102eb467c,0,0);
  return;
}



/* Entry: 102eb46f0; end: 102eb480f;  */

void FUN_102eb46f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  if (lVar5 != 0) {
    func_0x000107c42194(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb4750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar5);
    return;
  }
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
  uVar4 = 0xd00000000000003c;
  func_0x000107c5fadc(0xd00000000000003c,0x800000010f010ac0);
  func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c42a5c();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61654();
  func_0x000107c42194(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb480c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb4810; end: 102eb4857;  */

void FUN_102eb4810(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c42194(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102eb4854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102eb4858; end: 102eb486f;  */

void FUN_102eb4858(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb4870,0,0);
  return;
}



/* Entry: 102eb4870; end: 102eb491b;  */

void FUN_102eb4870(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x20);
  func_0x000107c506cc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    lVar3 = lVar2;
    func_0x000100759c94(lVar2,0);
    *(long *)(unaff_x22 + 0x28) = lVar3;
    func_0x000107c61170(lVar2);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x30) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102eb491c;
                    /* WARNING: Could not recover jumptable at 0x000102eb4914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100ff4658)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb491c);
  (*pcVar1)();
}



/* Entry: 102eb491c; end: 102eb496f;  */

void FUN_102eb491c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x38) = param_1;
  *(undefined1 *)(lVar1 + 0x40) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb4970,0,0);
  return;
}



/* Entry: 102eb4970; end: 102eb4a13;  */

void FUN_102eb4970(void)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x18);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    *puVar3 = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000102eb4a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102eb4a14; end: 102eb4a7f;  */

void FUN_102eb4a14(long param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102eb4c30;
  plVar1[0x13] = 0;
  plVar1[0x14] = unaff_x20;
  plVar1[0x11] = 0;
  plVar1[0x12] = 0;
  plVar1[0xf] = param_1;
  plVar1[0x10] = 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb4270,0,0,0,0,param_2);
  return;
}



/* Entry: 102eb4a80; end: 102eb4ad7;  */

void FUN_102eb4a80(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb4ad8;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb4870,0,0);
  return;
}



/* Entry: 102eb4ad8; end: 102eb4b13;  */

void FUN_102eb4ad8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eb4b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eb4b14; end: 102eb4b1b;  */

void FUN_102eb4b14(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 102eb4b1c; end: 102eb4b97;  */

void FUN_102eb4b1c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x100;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102eb4b98;
  plVar1[0x13] = param_3;
  plVar1[0x14] = unaff_x20;
  plVar1[0x11] = 0;
  plVar1[0x12] = param_2;
  plVar1[0xf] = param_1;
  plVar1[0x10] = 0x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102eb4270,0,0,param_2,param_3,param_4);
  return;
}



/* Entry: 102eb4b98; end: 102eb4bdf;  */

void FUN_102eb4b98(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102eb4bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102eb4be0; end: 102eb4c03;  */

void FUN_102eb4be0(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c4223c();
  (*pcVar1)();
  return;
}



/* Entry: 102eb4c04; end: 102eb4c5b;  */

void FUN_102eb4c04(long param_1,long param_2)

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



/* Entry: 102eb4c5c; end: 102eb4cc3;  */

undefined8 * FUN_102eb4c5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000102eb4c34(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000102eb4c4c(uVar1);
  return param_1;
}



/* Entry: 102eb4cc4; end: 102eb4db7;  */

int FUN_102eb4cc4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102eb4db8; end: 102eb4e1f;  */

undefined8 * FUN_102eb4db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  func_0x000107c614b0(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  func_0x000107c614ac(uVar1);
  return param_1;
}



/* Entry: 102eb4e20; end: 102eb4f0f;  */

int FUN_102eb4e20(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Entry: 102eb4f10; end: 102eb5013;  */

/* WARNING: Possible PIC construction at 0x000102eb4fec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102eb4ff0) */

void FUN_102eb4f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,char param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  ,long param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = param_1;
  uVar4 = param_2;
  FUN_102eb5014();
  uVar5 = 0x800000010f113650;
  uVar1 = 0xd000000000000013;
  if (param_5 == 1) {
    uVar5 = 0xe500000000000000;
    uVar1 = 0x6f65646976;
  }
  uVar2 = 0x6567616d69;
  if (param_5 != 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0xe500000000000000;
  if (param_5 != 0) {
    uVar1 = uVar5;
  }
  uVar5 = 0;
  if (param_6 != '\x01') {
    uVar5 = uVar2;
  }
  uVar2 = 0;
  if (param_6 != '\x01') {
    uVar2 = uVar1;
  }
  (**(code **)(param_10 + 0x10))
            (param_1,param_2,param_3,0,1,uVar3,uVar4,uVar5,uVar2,param_7,param_8,param_9,param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 102eb5014; end: 102eb50bf;  */

void FUN_102eb5014(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x20;
  
  uVar2 = unaff_x20;
  func_0x000107c3f5f8();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(param_2);
    uVar2 = uVar3 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      func_0x000107c3f5f8();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        func_0x000107c5faec();
        func_0x000107c61170(unaff_x20);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102eb50c0);
  (*pcVar1)();
}



/* Entry: 102eb50c0; end: 102eb510b;  */

void FUN_102eb50c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102eb510c; end: 102eb573b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102eb510c(undefined8 param_1,long param_2,ulong param_3,long param_4,char param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,long param_9,ulong param_10,
                  ulong param_11)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  long lStack_80;
  ulong auStack_70 [2];
  
  if ((long)param_3 < 0) {
    uVar4 = param_3 & 0x7fffffffffffffff;
    func_0x000107c614b0(uVar4);
    uStack_c0 = 0;
    lStack_80 = 0;
    uStack_c8 = 0;
    lVar10 = 0;
    uStack_a8 = 0;
    lVar8 = 0;
  }
  else {
    uStack_a8 = *(undefined8 *)(param_3 + _DAT_112ff55c0);
    lVar8 = ((undefined8 *)(param_3 + _DAT_112ff55c0))[1];
    uStack_c8 = *(undefined8 *)(param_3 + _DAT_112ff55c8);
    lVar10 = ((undefined8 *)(param_3 + _DAT_112ff55c8))[1];
    uStack_c0 = *(undefined8 *)(param_3 + _DAT_112ff55d0);
    lStack_80 = ((undefined8 *)(param_3 + _DAT_112ff55d0))[1];
    func_0x000107c61434();
    func_0x000107c61434(lVar8);
    func_0x000107c61434(lVar10);
    uVar4 = 0;
  }
  uVar2 = param_10 & 0xffffffffffff;
  if ((param_11 & 0x2000000000000000) != 0) {
    uVar2 = param_11 >> 0x38 & 0xf;
  }
  bVar1 = param_11 != 0 && uVar2 != 0;
  if (uVar4 == 0) {
    puVar7 = (ulong *)0x0;
    lVar9 = 0;
  }
  else {
    auStack_70[0] = uVar4;
    func_0x000107c614b0(uVar4);
    lVar9 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar7 = auStack_70;
    func_0x000107c5fb18(puVar7);
  }
  uVar6 = param_8;
  if ((long)param_3 < 0) {
    func_0x0001000d224c(auStack_70);
    uVar2 = auStack_70[0];
    if (auStack_70[0] == 0) {
      func_0x000107c6142c(lVar9);
      goto LAB_102eb5348;
    }
    if (lVar9 == 0) {
      puVar7 = (ulong *)0x0;
      if (param_9 != 0) goto LAB_102eb52c0;
LAB_102eb5310:
      uVar6 = 0;
    }
    else {
      func_0x000107c5fadc(puVar7,lVar9);
      func_0x000107c6142c(lVar9);
      if (param_9 == 0) goto LAB_102eb5310;
LAB_102eb52c0:
      func_0x000107c5fadc(param_8);
    }
    func_0x0001067aeb18(uVar2,puVar7,bVar1,uVar6,1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar7);
  }
  else {
    func_0x000107c6142c(lVar9);
    func_0x0001000d224c(auStack_70);
    uVar2 = auStack_70[0];
    if (auStack_70[0] == 0) goto LAB_102eb5348;
    if (param_9 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x000107c5fadc(param_8);
    }
    func_0x0001067aeea8(uVar2,bVar1,uVar6,1);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(uVar6);
LAB_102eb5348:
  func_0x0001000d224c(auStack_70);
  uVar2 = auStack_70[0];
  if (auStack_70[0] == 0) {
    func_0x000107c614ac(uVar4);
    func_0x000107c6142c(lStack_80);
    func_0x000107c6142c(lVar10);
    func_0x000107c6142c(lVar8);
    return;
  }
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1);
  }
  if (uVar4 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x000107c614b0(uVar4);
    uVar5 = uVar4;
    func_0x000107c5ed2c(uVar4);
    func_0x000107c614ac(uVar4);
  }
  if (lVar8 == 0) {
    uStack_a8 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_a8,lVar8);
    func_0x000107c6142c(lVar8);
  }
  lVar8 = 0;
  if (param_5 != '\x01') {
    lVar8 = param_4;
  }
  if (-0x80000001 < lVar8) {
    if (lVar8 < 0x80000000) {
      if (lVar10 == 0) {
        uStack_c8 = 0;
      }
      else {
        func_0x000107c5fadc(uStack_c8,lVar10);
        func_0x000107c6142c(lVar10);
      }
      if (param_7 == 0) {
        param_6 = 0;
      }
      else {
        func_0x000107c5fadc();
      }
      if (lStack_80 == 0) {
        uStack_c0 = 0;
      }
      else {
        func_0x000107c5fadc(uStack_c0,lStack_80);
        func_0x000107c6142c(lStack_80);
      }
      if (param_9 == 0) {
        param_8 = 0;
      }
      else {
        func_0x000107c5fadc();
      }
      func_0x000107c41ac4(uVar2);
      func_0x000107c614ac(uVar4);
      func_0x000107c615e8(uVar2);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uStack_a8);
      func_0x000107c61170(uStack_c8);
      func_0x000107c61170(param_6);
      func_0x000107c61170(uStack_c0);
      func_0x000107c61170(param_8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102eb5558);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102eb5554);
  (*pcVar3)();
}



/* Entry: 102eb573c; end: 102eb57db;  */

undefined1  [16] FUN_102eb573c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  FUN_102eb57dc();
  func_0x000107c61434(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 102eb57dc; end: 102eb594f;  */

undefined1  [16]
FUN_102eb57dc(undefined8 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long lStack_68;
  
  if (param_5 == 0) {
LAB_102eb5840:
    if ((param_2 & 1) == 0) goto LAB_102eb5874;
    uVar3 = 0;
  }
  else {
    uVar1 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar1 = param_5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) goto LAB_102eb5840;
    if ((param_2 & 1) == 0) goto LAB_102eb5874;
    uVar3 = 1;
  }
  func_0x0001000d224c(&lStack_68);
  lVar2 = lStack_68;
  if (lStack_68 != 0) {
    func_0x0001067aed90(lStack_68,uVar3,1);
    func_0x000107c61170(lVar2);
  }
LAB_102eb5874:
  if ((param_3 & 1) != 0) {
    func_0x0001000d224c(&lStack_68);
    lVar2 = lStack_68;
    if (lStack_68 != 0) {
      func_0x0001067aea28(lStack_68,1);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    uVar3 = param_8;
    func_0x000107c5fadc(param_8,param_9);
    func_0x000107c3e330(lStack_68);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c615e8(lStack_68);
    func_0x000107c61170(uVar3);
  }
  auVar4._8_8_ = param_9;
  auVar4._0_8_ = param_8;
  return auVar4;
}



/* Entry: 102eb5950; end: 102eb59ab;  */

undefined8 * FUN_102eb5950(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000102eb4c34(uVar1);
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 102eb59ac; end: 102eb5b2f;  */

undefined8 FUN_102eb59ac(uint param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 2) {
    if (param_4 == 2) {
      return 1;
    }
  }
  else if (param_4 != 2) {
    if (param_2 == 1) {
      if (param_4 == 1) {
        func_0x000102eb6480(param_3,1);
        return 1;
      }
    }
    else {
      if (param_4 == 1) {
        uVar1 = 1;
      }
      else {
        if ((((uint)param_3 ^ param_1) & 1) != 0) {
          return 0;
        }
        if (param_2 == 0) {
          if (param_4 != 0) {
            return 0;
          }
          return 1;
        }
        if (param_4 != 0) {
          func_0x00010142cfc4(param_2,param_4);
          if ((param_2 & 1) == 0) {
            return 0;
          }
          return 1;
        }
        uVar1 = 0;
      }
      func_0x000102eb6480(param_3,uVar1);
    }
  }
  return 0;
}



/* Entry: 102eb5b30; end: 102eb5bcf;  */

undefined8 FUN_102eb5b30(uint param_1,long param_2,uint param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (((param_1 ^ param_3) & 1) == 0) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if ((param_4 != 0) &&
            (lVar2 = *(long *)(param_2 + 0x10), lVar2 == *(long *)(param_4 + 0x10))) {
      if (lVar2 == 0) {
        return 1;
      }
      if (param_2 == param_4) {
        return 1;
      }
      plVar3 = (long *)(param_4 + 0x28);
      plVar4 = (long *)(param_2 + 0x28);
      while ((uVar1 = plVar4[-1], uVar1 == plVar3[-1] && *plVar4 == *plVar3 ||
             (func_0x000107c605b8(), (uVar1 & 1) != 0))) {
        plVar3 = plVar3 + 2;
        plVar4 = plVar4 + 2;
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 102eb5bd0; end: 102eb5be7;  */

void FUN_102eb5bd0(long param_1)

{
  if (*(long *)(param_1 + 0x10) - 1U < 3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 102eb5be8; end: 102eb5efb;  */

undefined1 * FUN_102eb5be8(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(param_2 + 0x10);
  if (((lVar1 != 1) && (lVar1 != 2)) && (lVar1 != 3)) {
    param_1[8] = param_2[8];
    *(long *)(param_1 + 0x10) = lVar1;
    func_0x000107c61434(lVar1);
    return param_1;
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 102eb5efc; end: 102eb5fef;  */

int FUN_102eb5efc(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffb < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7ffffffc;
  }
  uVar3 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar2 = (int)uVar3 + -1;
  iVar1 = iVar2;
  if (iVar2 < 3) {
    iVar1 = 2;
  }
  iVar1 = iVar1 + -3;
  if (iVar2 < 1) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 102eb5ff0; end: 102eb621f;  */

undefined8 * FUN_102eb5ff0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (((int)uVar1 + -1 < 1) && (uVar2 != 1)) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    param_1[1] = uVar2;
    func_0x000107c61434(uVar2);
    return param_1;
  }
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  return param_1;
}



/* Entry: 102eb6220; end: 102eb634b;  */

int FUN_102eb6220(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar5 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar5) {
    uVar5 = 0xffffffff;
  }
  uVar3 = (int)uVar5 - 1;
  uVar2 = uVar3;
  if (0x7fffffff < uVar3) {
    uVar2 = 0xffffffff;
  }
  iVar4 = uVar2 - 1;
  if ((int)uVar3 < 1) {
    iVar4 = -1;
  }
  iVar1 = 0;
  if (1 < iVar4 + 1U) {
    iVar1 = iVar4;
  }
  return iVar1;
}


