/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022c74a4; end: 1022c76af;  */

/* WARNING: Possible PIC construction at 0x0001022c7538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c75e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c7674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022c7684: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c7678) */
/* WARNING: Removing unreachable block (ram,0x0001022c75e8) */
/* WARNING: Removing unreachable block (ram,0x0001022c753c) */
/* WARNING: Removing unreachable block (ram,0x0001022c7688) */

void FUN_1022c74a4(void)

{
  code *pcVar1;
  
  FUN_1022c9b44(0);
  func_0x000107c610f8();
  pcVar1 = FUN_1022c76b0;
  func_0x0001022c998c(FUN_1022c76b0,0);
  FUN_1022c60a8();
  func_0x000107c5fadc(0x4d726f7272456373,0xee00656761737365);
  func_0x000107c4fc58(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(pcVar1);
  return;
}



/* Entry: 1022c76b0; end: 1022c776f;  */

void FUN_1022c76b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  puVar1 = &uStack_70;
  func_0x000107c3eb80(param_3);
  func_0x000107c61180();
  func_0x000107c60234(auStack_60);
  func_0x000107c615e8(param_3);
  func_0x000107c6147c(&uStack_70,auStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)puVar1 & 1) != 0) {
    FUN_1022c7bf0();
    puVar2 = &UNK_1104f18e0;
    func_0x000107c613f8(&UNK_1104f18e0,puVar1,0,0);
    *puVar1 = uStack_70;
    puVar1[1] = uStack_68;
    *(undefined1 *)(puVar1 + 2) = 2;
    (*param_4)();
    func_0x000107c614ac(puVar2);
  }
  return;
}



/* Entry: 1022c7770; end: 1022c796b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c7770(void)

{
  code *in_x3;
  long in_x5;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(in_x5 + 0x10,auStack_48,0,0);
  in_x5 = in_x5 + 0x10;
  func_0x000107c61618();
  if (in_x5 != 0) {
    if (*(long *)(in_x5 + _DAT_112e7baa8) != 2) {
      *(undefined8 *)(in_x5 + _DAT_112e7baa8) = 2;
      uStack_50 = 2;
      func_0x000100087c34(&uStack_50);
    }
    FUN_1022c5f1c();
    (*in_x3)(0);
    func_0x000107c61170(in_x5);
  }
  return;
}



/* Entry: 1022c796c; end: 1022c799f;  */

void FUN_1022c796c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022c79a0; end: 1022c7a3f; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022c79a0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e7ba98));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e7baa0));
  func_0x0001022c7cd0(param_1 + _DAT_112e7bab8,0x112e7bb18,&UNK_10da86748);
  func_0x0001022c7cd0(param_1 + _DAT_112e7bac0,0x112e7bb18,&UNK_10da86748);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7bac8));
  param_1 = param_1 + _DAT_1138046f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022c7a40; end: 1022c7a47;  */

void FUN_1022c7a40(void)

{
  if (lRam0000000112e7baf8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6c7aa4);
  return;
}



/* Entry: 1022c7a48; end: 1022c7a7f;  */

void FUN_1022c7a48(undefined8 param_1)

{
  if (lRam0000000112e7baf8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6c7aa4);
  return;
}



/* Entry: 1022c7a80; end: 1022c7bc3;  */

void FUN_1022c7a80(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = PTR___sBbWV_11034d660 + 0x40;
  puStack_58 = PTR___sBoWV_11034d678 + 0x40;
  puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_48 = &UNK_10da866f0;
  lVar1 = 0x13f;
  func_0x0001022c7b34();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10da86708;
    puStack_28 = &UNK_10da86720;
    lStack_38 = lStack_40;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 1022c7bc4; end: 1022c7bef;  */

void FUN_1022c7bc4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  plVar1 = (long *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (plVar1 != (long *)0x0) {
    if (param_1 != 0) {
      plVar2 = plVar1;
      FUN_1022c7bf0();
      puVar3 = &UNK_1104f18e0;
      func_0x000107c613f8(&UNK_1104f18e0,plVar2,0,0);
      *plVar2 = param_1;
      plVar2[1] = 0;
      *(undefined1 *)(plVar2 + 2) = 1;
      func_0x000107c614b0(param_1);
      func_0x000107c614b0(param_1);
      FUN_1022c6b70(puVar3);
      func_0x000107c614ac(puVar3);
      func_0x000107c614ac(param_1);
    }
    func_0x000107c61170(plVar1);
  }
  return;
}



/* Entry: 1022c7bf0; end: 1022c7c2f;  */

void FUN_1022c7bf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7bb10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da86780;
  func_0x000107c61520(&UNK_10da86780,&UNK_1104f18e0);
  puRam0000000112e7bb10 = puVar1;
  return;
}



/* Entry: 1022c7c30; end: 1022c7d0f;  */

undefined8 FUN_1022c7c30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e7bb18;
  func_0x0001000285a8(0x112e7bb18,&UNK_10da86748);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1022c7d10; end: 1022c7d53;  */

void FUN_1022c7d10(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e7bb28 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000107c5eb08(0xff);
  puVar2 = PTR___s10Foundation10URLRequestVSQAAMc_110350300;
  func_0x000107c61520(PTR___s10Foundation10URLRequestVSQAAMc_110350300,uVar1);
  puRam0000000112e7bb28 = puVar2;
  return;
}



/* Entry: 1022c7d54; end: 1022c7d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c7d54(void)

{
  long lVar1;
  code *in_x3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + _DAT_112e7baa8) != 2) {
      *(undefined8 *)(lVar1 + _DAT_112e7baa8) = 2;
      uStack_50 = 2;
      func_0x000100087c34(&uStack_50);
    }
    FUN_1022c5f1c();
    (*in_x3)(0);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022c7d64; end: 1022c7d87;  */

undefined8 FUN_1022c7d64(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022c7d88; end: 1022c7de7;  */

void FUN_1022c7d88(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  if ((param_3 != '\x01') && (param_3 != '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRetain_11034f320)();
  return;
}



/* Entry: 1022c7de8; end: 1022c7e83;  */

undefined8 * FUN_1022c7de8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1022c7d88(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1022c7e84; end: 1022c7ec7;  */

undefined8 * FUN_1022c7e84(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001022c7dc0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1022c7ec8; end: 1022c7f77;  */

int FUN_1022c7ec8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1022c7f78; end: 1022c7f7b; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl webView:didFailNavigation:withError:] */

void FUN_1022c7f78(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  
  puVar1 = param_1;
  FUN_1022c7bf0();
  puVar2 = &UNK_1104f18e0;
  func_0x000107c613f8(&UNK_1104f18e0,puVar1,0,0);
  *puVar1 = in_x4;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  func_0x000107c61174(in_x4);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1022c6b70(puVar2);
  func_0x000107c61170(in_x4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1022c7f7c; end: 1022c7f87; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation28GenAIDreamsAnimationViewImpl webView:didFailProvisionalNavigation:withError:] */

void FUN_1022c7f7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 in_x4;
  
  puVar1 = param_1;
  FUN_1022c7bf0();
  puVar2 = &UNK_1104f18e0;
  func_0x000107c613f8(&UNK_1104f18e0,puVar1,0,0);
  *puVar1 = in_x4;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  func_0x000107c61174(in_x4);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_1022c6b70(puVar2);
  func_0x000107c61170(in_x4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 1022c7f88; end: 1022c823f;  */

void FUN_1022c7f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
  lVar2 = lVar1;
  func_0x00010075bbf0();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  uVar6 = 0x800000010f081300;
  uVar3 = 0xd00000000000001e;
  func_0x000107c5fb00(0xd00000000000001e,0x800000010f081300,lVar1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  puVar4 = &UNK_1104f1980;
  func_0x000107c613fc(&UNK_1104f1980,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  uStack_60 = 0x1022c8414;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101420ff8;
  puStack_68 = &UNK_1104f1998;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c42a80();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1022c8240; end: 1022c8263;  */

void FUN_1022c8240(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)(param_2);
  return;
}



/* Entry: 1022c8264; end: 1022c83bf;  */

void FUN_1022c8264(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
  lVar2 = lVar1;
  func_0x00010075bbf0();
  *(long *)(lVar1 + 0x40) = lVar2;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  uVar6 = 0x800000010f0812d0;
  uVar3 = 0xd000000000000022;
  func_0x000107c5fb00(0xd000000000000022,0x800000010f0812d0,lVar1);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  puVar4 = &UNK_1104f1930;
  func_0x000107c613fc(&UNK_1104f1930,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  uStack_60 = 0x1022c8410;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101420ff8;
  puStack_68 = &UNK_1104f1948;
  puStack_58 = puVar4;
  func_0x000107c60bc4(&puStack_80);
  puVar4 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c42a80();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1022c83c0; end: 1022c83db;  */

void FUN_1022c83c0(long param_1,long param_2)

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



/* Entry: 1022c83dc; end: 1022c83ff;  */

void FUN_1022c83dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_2);
  return;
}



/* Entry: 1022c8400; end: 1022c8417;  */

void FUN_1022c8400(long param_1,long param_2)

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



/* Entry: 1022c8418; end: 1022c84b7; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation43GenAIDreamsAnimationPackImageMessageHandler handleMessageWithWebView:userContentController:message:completion:] */

/* WARNING: Possible PIC construction at 0x0001022c8494: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c8498) */

void FUN_1022c8418(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  puVar3 = &UNK_1104f1a20;
  func_0x000107c613fc(&UNK_1104f1a20,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001022c80e4(uVar1,uVar2,FUN_1022c84fc,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1022c84b8; end: 1022c84fb;  */

void FUN_1022c84b8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022c84fc; end: 1022c8503;  */

void FUN_1022c84fc(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c8504; end: 1022c85a3; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation43GenAIDreamsAnimationPackTitleMessageHandler handleMessageWithWebView:userContentController:message:completion:] */

/* WARNING: Possible PIC construction at 0x0001022c8580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c8584) */

void FUN_1022c8504(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  puVar3 = &UNK_1104f1a48;
  func_0x000107c613fc(&UNK_1104f1a48,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1022c7f88(uVar1,uVar2,FUN_1022c85e8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1022c85a4; end: 1022c85e7;  */

void FUN_1022c85a4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022c85e8; end: 1022c85ef;  */

void FUN_1022c85e8(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c85f0; end: 1022c868f; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation47GenAIDreamsAnimationPackWrapColorMessageHandler handleMessageWithWebView:userContentController:message:completion:] */

/* WARNING: Possible PIC construction at 0x0001022c866c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c8670) */

void FUN_1022c85f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c60bc4();
  puVar3 = &UNK_1104f1a70;
  func_0x000107c613fc(&UNK_1104f1a70,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1022c8264(uVar1,uVar2,FUN_1022c86d4,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1022c8690; end: 1022c86d3;  */

void FUN_1022c8690(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022c86d4; end: 1022c86db;  */

void FUN_1022c86d4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c86dc; end: 1022c86ef; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation32GenAIDreamsAnimationsFactoryImpl createUnpackingAnimationModule] */

void FUN_1022c86dc(void)

{
  FUN_1022c8780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c86f0; end: 1022c872b; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation32GenAIDreamsAnimationsFactoryImpl init] */

void FUN_1022c86f0(undefined8 param_1)

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



/* Entry: 1022c872c; end: 1022c877f;  */

void FUN_1022c872c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022c8780; end: 1022c8867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1022c8780(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_40;
  lVar3 = 0;
  FUN_1022c7a48();
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar4 = 0;
  FUN_1022c9744();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e7be28) = 0;
  func_0x000107c61614(lVar5 + _DAT_112e7be30,0);
  plVar1 = (long *)(lVar5 + _DAT_112e7be38);
  *plVar1 = lVar3;
  plVar1[1] = (long)&PTR_DAT_1104f1798;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar2);
  lVar5 = lVar3 + _DAT_1138046f0;
  *(undefined ***)(lVar5 + 8) = &PTR_DAT_1104f1b58;
  func_0x000107c61604(lVar5,plVar6);
  func_0x000107c61170(lVar3);
  return (undefined1 *)plVar6;
}



/* Entry: 1022c8868; end: 1022c88c3;  */

void FUN_1022c8868(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1022c88c4; end: 1022c8973;  */

undefined * FUN_1022c88c4(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104f1a98;
  func_0x000107c613fc(&UNK_1104f1a98,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e7bd48,&UNK_10da868b0);
  func_0x000107c613fc();
  pcVar2 = FUN_1022c89d4;
  func_0x0001000bdd8c(FUN_1022c89d4,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  puVar1 = PTR_PTR_1126aa320;
  func_0x000107c610f8(PTR_PTR_1126aa320);
  func_0x000107c4569c();
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar3);
  return puVar1;
}



/* Entry: 1022c8974; end: 1022c89d3;  */

void FUN_1022c8974(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  uVar1 = 0;
  if (param_2 != 0) {
    func_0x000107c61574();
    uVar1 = 0;
    func_0x0001022c8760();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1022c89d4; end: 1022c89e3;  */

void FUN_1022c89d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61574();
    uVar2 = 0;
    func_0x0001022c8760();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1022c89e4; end: 1022c8a83;  */

void FUN_1022c89e4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022c8a84; end: 1022c8b37;  */

void FUN_1022c8a84(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104f1a98;
  func_0x000107c613fc(&UNK_1104f1a98,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e7bd48,&UNK_10da868b0);
  func_0x000107c613fc();
  pcVar2 = FUN_1022c8b38;
  func_0x0001000bdd8c(FUN_1022c8b38,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  puVar1 = PTR_PTR_1126aa320;
  func_0x000107c610f8();
  func_0x000107c4569c();
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1022c8b38; end: 1022c8b43;  */

void FUN_1022c8b38(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  uVar2 = 0;
  if (lVar1 != 0) {
    func_0x000107c61574();
    uVar2 = 0;
    func_0x0001022c8760();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 1022c8b44; end: 1022c8be3;  */

void FUN_1022c8b44(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1022c8be4; end: 1022c8be7;  */

void FUN_1022c8be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7be20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da868f0;
  func_0x000107c61520(&UNK_10da868f0,&UNK_1104f1b48);
  puRam0000000112e7be20 = puVar1;
  return;
}



/* Entry: 1022c8be8; end: 1022c8c27;  */

void FUN_1022c8be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7be20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da868f0;
  func_0x000107c61520(&UNK_10da868f0,&UNK_1104f1b48);
  puRam0000000112e7be20 = puVar1;
  return;
}



/* Entry: 1022c8c28; end: 1022c8d23;  */

void FUN_1022c8c28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1022c8d24; end: 1022c8d73; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter playWhenReady] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1022c8d24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7be38;
  func_0x000107c61428(param_1 + _DAT_112e7be38,auStack_38,0,0);
  return *(undefined1 *)(*(long *)(param_1 + lVar1) + _DAT_112e7bab0);
}



/* Entry: 1022c8d74; end: 1022c8e23; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter setPlayWhenReady:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c8d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_68 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7be38);
  func_0x000107c61428(puVar1,auStack_68,0x21,0);
  uVar2 = *puVar1;
  lVar3 = puVar1[1];
  uVar4 = uVar2;
  func_0x000107c614f0(uVar2);
  pcVar5 = *(code **)(lVar3 + 0x10);
  func_0x000107c61174(param_1);
  (*pcVar5)(param_3,uVar4,lVar3);
  *puVar1 = uVar2;
  puVar1[1] = lVar3;
  func_0x000107c614a8(auStack_68);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022c8e24; end: 1022c8e43; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c8e24(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112e7be30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022c8e44; end: 1022c8e57; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c8e44(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112e7be30,param_3);
  return;
}



/* Entry: 1022c8e58; end: 1022c938f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c8e58(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long lVar17;
  long extraout_x12;
  long unaff_x20;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x000107c5eb08();
  lStack_90 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_90 + 0x40));
  lVar16 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0x112d36580;
  lStack_98 = lVar16;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_00;
  lVar7 = 0;
  func_0x000107c5ede0();
  lStack_80 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_80 + 0x40));
  lVar17 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = _DAT_112e7be28;
  lStack_a0 = lVar17 - extraout_x12;
  lVar17 = *(long *)(unaff_x20 + _DAT_112e7be28);
  if (lVar17 == 0) {
    uVar10 = 0;
  }
  else {
    FUN_1022c98cc(0,0x112e7be70,&PTR_PTR_1126aa328);
    uVar8 = param_1;
    func_0x000107c61174();
    func_0x000107c61174(lVar17);
    uVar9 = uVar8;
    func_0x000107c60118(uVar8,lVar17);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar17);
    if ((uVar9 & 1) != 0) {
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
  }
  *(ulong *)(unaff_x20 + lVar6) = param_1;
  func_0x000107c61170(uVar10);
  lVar6 = _DAT_112e7be38;
  puVar14 = auStack_78;
  func_0x000107c61428(unaff_x20 + _DAT_112e7be38,puVar14,0,0);
  func_0x000107c61174();
  FUN_1022c6690();
  uVar8 = param_1;
  func_0x000107c4e220();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1022c9384);
    (*pcVar4)();
  }
  uVar9 = uVar8;
  lStack_88 = lVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  lVar7 = 0;
  func_0x0001022c84dc();
  func_0x000107c613fc();
  *(ulong *)(lVar7 + 0x10) = uVar9;
  *(undefined1 **)(lVar7 + 0x18) = puVar14;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(lVar7);
  uVar15 = 0x800000010f081400;
  FUN_1022c9764(0xd000000000000019,0x800000010f081400,lVar7,uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(lVar7);
  uVar8 = param_1;
  func_0x000107c4e224();
  func_0x000107c61180();
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1022c9388);
    (*pcVar4)();
  }
  uVar9 = uVar8;
  lStack_b0 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar8);
  lVar5 = 0;
  func_0x0001022c85c8();
  func_0x000107c613fc();
  *(ulong *)(lVar5 + 0x10) = uVar9;
  *(undefined8 *)(lVar5 + 0x18) = uVar15;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(lVar5);
  uVar15 = 0x800000010f081420;
  FUN_1022c9764(0xd000000000000019,0x800000010f081420,lVar5,uVar10);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(lVar5);
  uVar8 = param_1;
  func_0x000107c4e228();
  func_0x000107c61180();
  if (uVar8 != 0) {
    uVar9 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
    lVar17 = 0;
    func_0x0001022c86b4();
    func_0x000107c613fc();
    *(ulong *)(lVar17 + 0x10) = uVar9;
    *(undefined8 *)(lVar17 + 0x18) = uVar15;
    uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
    func_0x000107c61174(uVar10);
    func_0x000107c6157c(lVar17);
    uVar15 = 0x800000010f081440;
    FUN_1022c9764(0xd00000000000001d,0x800000010f081440,lVar17,uVar10);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(lVar17);
    func_0x000107c3dd14();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar8 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5edd0(lVar16,uVar8,uVar15);
      func_0x000107c6142c(uVar15);
      lVar3 = lStack_80;
      lVar2 = lStack_88;
      lVar11 = lVar16;
      (**(code **)(lStack_80 + 0x30))(lVar16,1,lStack_88);
      lVar1 = lStack_a0;
      if ((int)lVar11 == 1) {
        func_0x0001000293e4(lVar16);
        lVar6 = unaff_x20 + _DAT_112e7be30;
        func_0x000107c61618();
        if (lVar6 != 0) {
          lVar16 = lVar6;
          FUN_1022c988c();
          puVar12 = &UNK_1104f1b48;
          func_0x000107c613f8(&UNK_1104f1b48,lVar16,0,0);
          puVar13 = puVar12;
          func_0x000107c5ed2c();
          func_0x000107c614ac(puVar12);
          func_0x000107c42338(lVar6);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(puVar13);
        }
        func_0x000107c61574(lVar17);
        func_0x000107c61574(lVar5);
        func_0x000107c61574(lVar7);
      }
      else {
        (**(code **)(lVar3 + 0x20))(lStack_a0,lVar16,lVar2);
        lVar16 = lStack_a8;
        (**(code **)(lVar3 + 0x10))(lStack_a8,lVar1,lVar2);
        lVar11 = lStack_98;
        func_0x000107c5eaec(lStack_98,0x404e000000000000,lVar16,0);
        uVar10 = *(undefined8 *)(unaff_x20 + lVar6);
        func_0x000107c61174(uVar10);
        FUN_1022c6770(lVar11);
        func_0x000107c61170(uVar10);
        func_0x000107c61574(lVar7);
        func_0x000107c61574(lVar5);
        func_0x000107c61574(lVar17);
        (**(code **)(lStack_90 + 8))(lVar11,lStack_b0);
        (**(code **)(lVar3 + 8))(lVar1,lVar2);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1022c9390);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1022c938c);
  (*pcVar4)();
}



/* Entry: 1022c9390; end: 1022c94db; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter loadAnimationWithConfig:] */

/* WARNING: Possible PIC construction at 0x0001022c93c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c93cc) */

void FUN_1022c9390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1022c8e58(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1022c94dc; end: 1022c953b; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter reset] */

void FUN_1022c94dc(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001022c93e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c953c; end: 1022c9603; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter getStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c953c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e7be38;
  func_0x000107c61428(param_1 + _DAT_112e7be38,auStack_48,0,0);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + lVar1) + _DAT_112e7baa0);
  uVar2 = 0;
  FUN_1022c98cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_1);
  uVar3 = 0x1022c9504;
  func_0x0001000bfde0(0x1022c9504,0,uVar2);
  func_0x000107c61574(uVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1022c9604; end: 1022c9653; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter getState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1022c9604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7be38;
  func_0x000107c61428(param_1 + _DAT_112e7be38,auStack_38,0,0);
  return *(undefined8 *)(*(long *)(param_1 + lVar1) + _DAT_112e7baa8);
}



/* Entry: 1022c9654; end: 1022c969b; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter view] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9654(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e7be38;
  func_0x000107c61428(param_1 + _DAT_112e7be38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1022c969c; end: 1022c96fb; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter init] */

void FUN_1022c969c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsAnimationsServicesImplementation.GenAIDreamsUnpackingAnimationPresenter"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c96c8);
  (*pcVar1)();
}



/* Entry: 1022c96fc; end: 1022c9743; -[_TtC45SCGenAIDreamsAnimationsServicesImplementation38GenAIDreamsUnpackingAnimationPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022c9718: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c971c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c96fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7be28));
  return;
}



/* Entry: 1022c9744; end: 1022c9763;  */

void FUN_1022c9744(void)

{
  func_0x000107c61168(&PTR_PTR_112833918);
  return;
}



/* Entry: 1022c9764; end: 1022c988b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9764(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_68 [24];
  
  uVar3 = param_1;
  FUN_1022c60a8();
  uVar4 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4fc58(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  lVar2 = _DAT_112e7ba98;
  func_0x000107c61428(param_4 + _DAT_112e7ba98,auStack_68,0x21,0);
  uVar7 = *(ulong *)(param_4 + lVar2);
  func_0x000107c61434(param_2);
  uVar5 = uVar7;
  func_0x000107c61558();
  *(ulong *)(param_4 + lVar2) = uVar7;
  uVar6 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    func_0x0001000d182c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(param_4 + lVar2) = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar7 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001000d182c(uVar7,uVar5 + 1,1,uVar6);
  }
  *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
  lVar1 = uVar7 + uVar5 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(param_4 + lVar2) = uVar7;
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 1022c988c; end: 1022c98cb;  */

void FUN_1022c988c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e7be68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da86958;
  func_0x000107c61520(&UNK_10da86958,&UNK_1104f1b48);
  puRam0000000112e7be68 = puVar1;
  return;
}



/* Entry: 1022c98cc; end: 1022c992f;  */

void FUN_1022c98cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1022c9930; end: 1022c99e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9930(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e7be78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022c99e8; end: 1022c9acf; -[SCWKScriptAbstractMessageHandler handleMessageWithWebView:userContentController:message:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c99e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  puVar2 = &UNK_1104f1c60;
  func_0x000107c613fc(&UNK_1104f1c60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  pcVar1 = *(code **)(param_1 + _DAT_112e7be78);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  (*pcVar1)(param_3,param_4,param_5,FUN_1022c9b64,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1022c9ad0; end: 1022c9b2f; -[SCWKScriptAbstractMessageHandler init] */

void FUN_1022c9ad0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBloopsWebUtilities.SCWKScriptAbstractMessageHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c9afc);
  (*pcVar1)();
}



/* Entry: 1022c9b30; end: 1022c9b43; -[SCWKScriptAbstractMessageHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e7be78 + 8));
  return;
}



/* Entry: 1022c9b44; end: 1022c9b63;  */

void FUN_1022c9b44(void)

{
  func_0x000107c61168(&PTR_PTR_1128339e8);
  return;
}



/* Entry: 1022c9b64; end: 1022c9b6b;  */

void FUN_1022c9b64(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022c9b6c; end: 1022c9d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9b6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_112e7bea8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e7beb8);
    puVar2 = &UNK_1104f1c88;
    func_0x000107c613fc(&UNK_1104f1c88,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1104f1cb0;
    func_0x000107c613fc(&UNK_1104f1cb0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    pcStack_50 = FUN_1022ca0f8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ff4e14;
    puStack_58 = &UNK_1104f1cc8;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c44610(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022c9d60; end: 1022c9dcb; -[_TtC20SCBloopsWebUtilitiesP33_CBE1CEACB0B38A8B2CC5E77AC0A774A628SCWKWeakScriptMessageHandler userContentController:didReceiveScriptMessage:] */

/* WARNING: Possible PIC construction at 0x0001022c9dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022c9db0) */

void FUN_1022c9d60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1022c9b6c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1022c9dcc; end: 1022c9e2b; -[_TtC20SCBloopsWebUtilitiesP33_CBE1CEACB0B38A8B2CC5E77AC0A774A628SCWKWeakScriptMessageHandler init] */

void FUN_1022c9dcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBloopsWebUtilities.SCWKWeakScriptMessageHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022c9df8);
  (*pcVar1)();
}



/* Entry: 1022c9e2c; end: 1022c9e73; -[_TtC20SCBloopsWebUtilitiesP33_CBE1CEACB0B38A8B2CC5E77AC0A774A628SCWKWeakScriptMessageHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9e2c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e7bea8);
  FUN_1022ca120(param_1 + _DAT_112e7beb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e7beb8));
  return;
}



/* Entry: 1022c9e74; end: 1022c9fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022c9e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar6 = &lStack_70;
  lVar4 = 0;
  FUN_1022c9fc4();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar2 = _DAT_112e7bea8;
  func_0x000107c61614(lVar5 + _DAT_112e7bea8,0);
  lVar3 = _DAT_112e7beb0;
  func_0x000107c61614(lVar5 + _DAT_112e7beb0,0);
  *(undefined8 *)(lVar5 + _DAT_112e7beb8) = param_3;
  func_0x000107c61604(lVar5 + lVar3,param_4);
  func_0x000107c61604(lVar5 + lVar2);
  puVar1 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_70,puVar1);
  func_0x000107c40110();
  func_0x000107c61180();
  uVar7 = unaff_x20;
  func_0x000107c5d90c();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61174(plVar6);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c3d838(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(plVar6);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1022c9fc4; end: 1022c9fe3;  */

void FUN_1022c9fc4(void)

{
  func_0x000107c61168(&PTR_PTR_112833aa8);
  return;
}



/* Entry: 1022c9fe4; end: 1022ca073;  */

void FUN_1022c9fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1022c9e74(param_3,param_2,param_4,param_5);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022ca074; end: 1022ca0f7;  */

/* WARNING: Possible PIC construction at 0x0001022ca0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ca0d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ca0c8) */
/* WARNING: Removing unreachable block (ram,0x0001022ca0dc) */

void FUN_1022ca074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c40110();
  func_0x000107c61180();
  func_0x000107c5d90c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022ca0f8; end: 1022ca11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ca0f8(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
    lVar1 = lVar1 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      lVar2 = lVar1 + _DAT_112e7beb0;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c614b0(param_1);
        func_0x000107c61170(lVar1);
        lVar1 = param_1;
        func_0x000107c5ed2c(param_1);
        func_0x000107c5e21c(lVar2);
        func_0x000107c614ac(param_1);
        func_0x000107c615e8(lVar2);
      }
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1022ca120; end: 1022ca143;  */

undefined8 FUN_1022ca120(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022ca144; end: 1022ca1df;  */

void FUN_1022ca144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 1022ca1e0; end: 1022ca2ff;  */

undefined * FUN_1022ca1e0(void)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104f1da8;
  func_0x000107c613fc(&UNK_1104f1da8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e7bee8,&UNK_10da86a80);
  func_0x000107c613fc();
  pcVar2 = FUN_1022ca300;
  func_0x0001000bdd8c(FUN_1022ca300,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  puVar1 = PTR_PTR_1126aa330;
  func_0x000107c610f8(PTR_PTR_1126aa330);
  func_0x000107c4773c();
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar3);
  return puVar1;
}



/* Entry: 1022ca300; end: 1022ca307;  */

void FUN_1022ca300(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1022ca308();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1022ca308; end: 1022ca423;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ca308(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c4cc74();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x000107c4c1c8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar5);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083f78);
    lVar6 = 0;
    FUN_1022caf9c();
    lVar5 = lVar6;
    func_0x000107c610f8();
    *(long *)(lVar5 + _DAT_112e7bfd8) = lVar4;
    *(undefined8 *)(lVar5 + _DAT_112e7bfe0) = uVar1;
    *(undefined8 *)(lVar5 + _DAT_112e7bfe8) = uVar2;
    *(undefined8 *)(lVar5 + _DAT_112e7bff0) = uVar7;
    puVar3 = PTR_s_init_1125d9248;
    lStack_50 = lVar5;
    lStack_48 = lVar6;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c61154(&lStack_50,puVar3);
  }
  return;
}



/* Entry: 1022ca424; end: 1022ca44f;  */

/* WARNING: Possible PIC construction at 0x0001022ca430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022ca440: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022ca434) */
/* WARNING: Removing unreachable block (ram,0x0001022ca444) */

void FUN_1022ca424(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1022ca450; end: 1022ca4ab;  */

void FUN_1022ca450(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1022ca4ac; end: 1022ca52b;  */

void FUN_1022ca4ac(undefined8 param_1)

{
  if (lRam0000000112e7bf18 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6c7d34);
  return;
}



/* Entry: 1022ca52c; end: 1022ca5df;  */

void FUN_1022ca52c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104f1da8;
  func_0x000107c613fc(&UNK_1104f1da8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e7bee8,&UNK_10da86a80);
  func_0x000107c613fc();
  pcVar2 = FUN_1022ca5e0;
  func_0x0001000bdd8c(FUN_1022ca5e0,puVar1);
  pcVar3 = pcVar2;
  func_0x0001000bf56c();
  puVar1 = PTR_PTR_1126aa330;
  func_0x000107c610f8();
  func_0x000107c4773c();
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1022ca5e0; end: 1022ca5e3;  */

void FUN_1022ca5e0(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_1022ca308();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1022ca5e4; end: 1022ca9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022ca5e4(ulong param_1,undefined *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 auStack_b0 [32];
  long lStack_90;
  long alStack_88 [5];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7bfd8);
  puVar4 = param_2;
  func_0x000107c4cc7c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar14 = PTR___sypN_11034f1a8;
  if (lVar3 != 0) {
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    for (lVar2 = *(long *)(param_2 + 0x10); lVar2 != 0; lVar2 = lVar2 + -1) {
      param_2 = param_2 + 0x20;
      func_0x0001000bb420(param_2,alStack_88);
      func_0x000100102924(alStack_88,auStack_b0);
      uVar6 = 0;
      FUN_101a3eb00(0);
      plVar7 = &lStack_90;
      puVar4 = auStack_b0;
      func_0x000107c6147c(plVar7,puVar4,puVar14 + 8,uVar6,6);
      lVar13 = lStack_90;
      if ((((ulong)plVar7 & 1) != 0) && (lStack_90 != 0)) {
        puVar5 = puVar8;
        func_0x000107c61550();
        if (((int)puVar5 == 0) ||
           (((long)puVar8 < 0 || (puVar5 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar4 = puVar8;
            }
            func_0x000107c60480();
          }
          puVar4 = puVar4 + 1;
          puVar5 = (undefined *)0x0;
          func_0x0001022b0b6c(0,puVar4,1,puVar8);
        }
        uVar12 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar15 = *(ulong *)(uVar12 + 0x10);
        puVar11 = (undefined *)(uVar15 + 1);
        puVar8 = puVar5;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar15) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          puVar4 = puVar11;
          func_0x0001022b0b6c(puVar8,puVar11,1,puVar5);
          uVar12 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar12 + 0x10) = puVar11;
        *(long *)(uVar12 + uVar15 * 8 + 0x20) = lVar13;
      }
    }
    if ((ulong)puVar8 >> 0x3e == 0) {
      puVar14 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar14 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar8) {
        puVar14 = puVar8;
      }
      func_0x000107c60480();
    }
    if (puVar14 != (undefined *)0x0) {
      uVar15 = 0;
      do {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ca990);
            (*pcVar1)();
          }
          uVar12 = *(ulong *)(puVar8 + uVar15 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar12 = uVar15;
          puVar4 = puVar8;
          FUN_101a3ee24();
        }
        puVar5 = (undefined *)(uVar15 + 1);
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022ca98c);
          (*pcVar1)();
        }
        uVar9 = uVar12;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        if (uVar9 == 0) {
          uVar17 = 0;
          puVar16 = (undefined *)0x0;
          puVar11 = puVar4;
        }
        else {
          uVar17 = uVar9;
          func_0x000107c5faec();
          puVar11 = puVar4;
          func_0x000107c61170(uVar9);
          puVar16 = puVar4;
        }
        uVar9 = param_1;
        func_0x000107c5b2d0();
        func_0x000107c61180();
        uVar10 = uVar9;
        func_0x000107c5faec();
        puVar4 = puVar11;
        func_0x000107c61170(uVar9);
        if (puVar16 == (undefined *)0x0) {
          func_0x000107c6142c(puVar11);
        }
        else {
          if ((uVar17 == uVar10) && (puVar16 == puVar11)) {
            func_0x000107c6142c(puVar8);
            func_0x000107c6142c(puVar16);
            puVar8 = puVar11;
LAB_1022ca8a8:
            func_0x000107c6142c(puVar8);
            puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
            func_0x000107c61168(PTR__OBJC_CLASS___NSSet_1126ae870);
            func_0x000107c5a78c();
            func_0x000107c61180();
            alStack_88[0] = 0;
            func_0x000107c5fe0c();
            lVar2 = alStack_88[0];
            if (alStack_88[0] == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = alStack_88[0];
              func_0x000107c5fe08(alStack_88[0],PTR___ss11AnyHashableVN_11034e448,
                                  PTR___ss11AnyHashableVSHsWP_11034e450);
              func_0x000107c6142c(lVar2);
            }
            func_0x000107c4efdc(lVar3);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(puVar4);
            func_0x000107c61170(lVar13);
            return;
          }
          puVar4 = puVar16;
          func_0x000107c605b8(uVar17,puVar16,uVar10,puVar11,0);
          func_0x000107c6142c(puVar16);
          func_0x000107c6142c(puVar11);
          if ((uVar17 & 1) != 0) goto LAB_1022ca8a8;
        }
        func_0x000107c61170(uVar12);
        uVar15 = uVar15 + 1;
      } while (puVar5 != puVar14);
    }
    func_0x000107c615e8(lVar3);
    func_0x000107c6142c(puVar8);
  }
  return;
}



/* Entry: 1022ca9d8; end: 1022ca9df; -[_TtC34SCDreamsSendServicesImplementation32SCGenAIDreamsMemoriesSendService sendMyStory:gallerySnaps:fromViewController:] */

void FUN_1022ca9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fc54(param_4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1022ca5e4(param_3,param_4,param_5,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1022ca9e0; end: 1022ca9e7; -[_TtC34SCDreamsSendServicesImplementation32SCGenAIDreamsMemoriesSendService shareDream:gallerySnaps:fromViewController:] */

void FUN_1022ca9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5fc54(param_4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1022ca5e4(param_3,param_4,param_5,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1022ca9e8; end: 1022caa8b;  */

void FUN_1022ca9e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c5fc54(param_4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  FUN_1022ca5e4(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1022caa8c; end: 1022cae7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1022caa8c(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  
  lVar8 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  uVar10 = *(ulong *)(unaff_x20 + _DAT_112e7bfe8);
  uVar13 = uVar10;
  func_0x000107c3e980();
  func_0x000107c61180();
  uVar1 = uVar13;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  if (uVar1 == 0) {
    uVar13 = 0;
    uVar11 = 0;
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar11 = uVar1;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (uVar11 == 0) {
      uVar13 = 0;
      puVar12 = (undefined *)0x0;
    }
    else {
      uVar13 = uVar11;
      func_0x000107c5faec();
      uVar13 = uVar13 & 0xffffffffffff;
      puVar12 = puVar3;
    }
  }
  func_0x000107c3ea24();
  func_0x000107c61180();
  uVar1 = uVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  if (uVar1 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar1;
    func_0x000107c41050(uVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112e7bff0);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar3);
    if (puVar12 != (undefined *)0x0) goto LAB_1022cac20;
LAB_1022cadf8:
    func_0x000107c61170(uVar10);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar11);
  }
  else {
    if (puVar12 == (undefined *)0x0) goto LAB_1022cadf8;
LAB_1022cac20:
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar13 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    if (uVar13 == 0) {
      func_0x000107c6142c(puVar12);
      goto LAB_1022cadf8;
    }
    puVar3 = PTR_PTR_1126afd38;
    func_0x000107c610f8(PTR_PTR_1126afd38);
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c5e868();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(puVar12);
    puVar12 = puVar3;
    func_0x000107c5e458(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(puVar12);
    puVar12 = puVar3;
    func_0x000107c5e780(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar12);
    func_0x000107c5e770(puVar3);
    func_0x000107c61180();
    func_0x000107c61170();
    puVar12 = puVar3;
    func_0x000107c3ecc8(puVar3);
    func_0x000107c61180();
    lVar5 = *(long *)(unaff_x20 + _DAT_112e7bfe0);
    func_0x000107c51d00();
    func_0x000107c61180();
    lVar2 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar2 == 0) {
LAB_1022cad74:
      lVar2 = 0;
      func_0x000107c5ede0();
      uVar7 = 1;
    }
    else {
      lVar5 = lVar2;
      func_0x000107c43300();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar5 == 0) goto LAB_1022cad74;
      func_0x000107c5edb4(lVar8,lVar5);
      func_0x000107c61170(lVar5);
      lVar2 = 0;
      func_0x000107c5ede0();
      uVar7 = 0;
    }
    lVar5 = *(long *)(lVar2 + -8);
    (**(code **)(lVar5 + 0x38))(lVar8,uVar7,1,lVar2);
    func_0x000100029394(lVar8,puVar9);
    func_0x000107c5ede0(0);
    uVar7 = 1;
    puVar6 = puVar9;
    (**(code **)(lVar5 + 0x30))(puVar9,1,lVar2);
    if ((int)puVar6 != 1) {
      func_0x000107c5ed70();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar12);
      func_0x0001000293e4(lVar8);
      (**(code **)(lVar5 + 8))(puVar9,lVar2);
      goto LAB_1022cae18;
    }
    func_0x0001000293e4(lVar8);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar12);
    func_0x0001000293e4(puVar9);
  }
  puVar6 = (undefined1 *)0x0;
  uVar7 = 0;
LAB_1022cae18:
  auVar14._8_8_ = uVar7;
  auVar14._0_8_ = puVar6;
  return auVar14;
}



/* Entry: 1022cae7c; end: 1022caee3; -[_TtC34SCDreamsSendServicesImplementation32SCGenAIDreamsMemoriesSendService currentUserBitmojiURL] */

void FUN_1022cae7c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1022caa8c();
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022caee4; end: 1022caf43; -[_TtC34SCDreamsSendServicesImplementation32SCGenAIDreamsMemoriesSendService init] */

void FUN_1022caee4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDreamsSendServicesImplementation.SCGenAIDreamsMemoriesSendService",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022caf10);
  (*pcVar1)();
}



/* Entry: 1022caf44; end: 1022caf9b; -[_TtC34SCDreamsSendServicesImplementation32SCGenAIDreamsMemoriesSendService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022caf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022caf80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022caf64) */
/* WARNING: Removing unreachable block (ram,0x0001022caf84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022caf44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7bfd8));
  return;
}



/* Entry: 1022caf9c; end: 1022cafbb;  */

void FUN_1022caf9c(void)

{
  func_0x000107c61168(&PTR_PTR_112833b78);
  return;
}


