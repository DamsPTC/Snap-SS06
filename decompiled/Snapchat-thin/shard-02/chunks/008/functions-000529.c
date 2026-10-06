/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021c5bcc; end: 1021c5cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010439b5f4(0);
  func_0x000107c610f8();
  uVar1 = 0x1c;
  func_0x00010439b428(0x1c,0x2d);
  puVar2 = (ulong *)PTR_PTR_1126aead0;
  func_0x000107c610f8();
  func_0x000107c47994();
  func_0x00010036604c(0);
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000103928328(puVar2,uVar1,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x98))(param_2);
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_50);
  return;
}



/* Entry: 1021c5cf0; end: 1021c5d5b;  */

void FUN_1021c5cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 200) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021c5d5c,uVar1,uVar2);
  return;
}



/* Entry: 1021c5d5c; end: 1021c5e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5d5c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x90,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xd8) = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + _DAT_112e60968) + _DAT_113041e48);
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1021c5e74;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar1 = 0x112e609b0;
    func_0x0001000285a8(0x112e609b0,&UNK_10daf3890);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1021c5f28;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104dc628;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c615f0(uVar3);
    func_0x000107c43fdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x0001021c5e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021c5e74; end: 1021c5eaf;  */

void FUN_1021c5e74(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_1021c5eb0,*(undefined8 *)(*unaff_x22 + 200),*(undefined8 *)(*unaff_x22 + 0xd0));
  return;
}



/* Entry: 1021c5eb0; end: 1021c5f27;  */

void FUN_1021c5eb0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(uVar2);
  lVar3 = *(long *)(lVar1 + 0x10);
  func_0x000107c6142c(lVar1);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  if (lVar3 == 0) {
    FUN_1021c5bcc(*(undefined8 *)(unaff_x22 + 0xb8),0);
  }
  else {
    FUN_1021c5f88();
  }
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001021c5f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021c5f28; end: 1021c5f87;  */

void FUN_1021c5f28(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  uVar2 = 0;
  func_0x000103fd7dd8(0);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 1021c5f88; end: 1021c6083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5f88(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010439b5f4(0);
  func_0x000107c610f8();
  uVar1 = 0x1c;
  func_0x00010439b428(0x1c,0x2d);
  puVar2 = PTR_PTR_1126aead0;
  func_0x000107c610f8();
  func_0x000107c47994();
  func_0x00010036803c(0);
  func_0x000107c610f8();
  uVar3 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x00010293281c(puVar2,uVar1,0);
  puStack_50 = puVar2;
  func_0x00010008a7c8(&uStack_48,&puStack_50);
  func_0x000100083b20(&puStack_50);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puStack_50);
  return;
}



/* Entry: 1021c6084; end: 1021c60d7; -[_TtC21FanPassSettingsPlugin32FanPassSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c60c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c60c4) */

void FUN_1021c6084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001021c5a68(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021c60d8; end: 1021c6137; -[_TtC21FanPassSettingsPlugin32FanPassSettingsRowProviderPlugin init] */

void FUN_1021c60d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FanPassSettingsPlugin.FanPassSettingsRowProviderPlugin",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c6104);
  (*pcVar1)();
}



/* Entry: 1021c6138; end: 1021c618f; -[_TtC21FanPassSettingsPlugin32FanPassSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c6154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c6174: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c6158) */
/* WARNING: Removing unreachable block (ram,0x0001021c6178) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c6138(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60980));
  return;
}



/* Entry: 1021c6190; end: 1021c61f3;  */

void FUN_1021c6190(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1021c61f4;
  plVar3[0x16] = lVar2;
  plVar3[0x17] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0x18] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x19] = lVar1;
  plVar3[0x1a] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021c5d5c,lVar1,lVar2);
  return;
}



/* Entry: 1021c61f4; end: 1021c622f;  */

void FUN_1021c61f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001021c622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1021c6230; end: 1021c623f;  */

undefined1  [16] FUN_1021c6230(void)

{
  return ZEXT816(0x1104dc618);
}



/* Entry: 1021c6240; end: 1021c625f;  */

void FUN_1021c6240(void)

{
  func_0x000107c61168(&PTR_PTR_112825528);
  return;
}



/* Entry: 1021c6260; end: 1021c6277;  */

long FUN_1021c6260(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1021c6278; end: 1021c6343;  */

undefined1  [16] FUN_1021c6278(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe5;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f06c420);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f06c440);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c6344);
  (*pcVar1)();
}



/* Entry: 1021c6344; end: 1021c674b;  */

void FUN_1021c6344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dc6e0;
  func_0x000107c613fc(&UNK_1104dc6e0,0x78,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_6;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_13;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_11;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(0x1021c6480,puVar1);
  return;
}



/* Entry: 1021c674c; end: 1021c675b;  */

undefined1  [16] FUN_1021c674c(void)

{
  return ZEXT816(0x1104dc708);
}



/* Entry: 1021c675c; end: 1021c6d43;  */

void FUN_1021c675c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dc7a8;
  func_0x000107c613fc(&UNK_1104dc7a8,0x98,7);
  *(undefined8 *)(puVar1 + 0x10) = param_12;
  *(undefined8 *)(puVar1 + 0x18) = param_14;
  *(undefined8 *)(puVar1 + 0x20) = param_15;
  *(undefined8 *)(puVar1 + 0x28) = param_16;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_3;
  *(undefined8 *)(puVar1 + 0x48) = param_4;
  *(undefined8 *)(puVar1 + 0x50) = param_5;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  *(undefined8 *)(puVar1 + 0x70) = param_9;
  *(undefined8 *)(puVar1 + 0x78) = param_10;
  *(undefined8 *)(puVar1 + 0x80) = param_13;
  *(undefined8 *)(puVar1 + 0x88) = param_11;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_17);
  func_0x0001000823a8(0x1021c68e8,puVar1);
  return;
}



/* Entry: 1021c6d44; end: 1021c6d53;  */

undefined1  [16] FUN_1021c6d44(void)

{
  return ZEXT816(0x1104dc7d0);
}



/* Entry: 1021c6d54; end: 1021c6e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021c6d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e609c0) = 0;
  lVar2 = param_5;
  func_0x000107c41644();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c526a0();
    func_0x000107c61170(lVar2);
    func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                        PTR_s_initWithFrame_configuration__1125e2a10,param_5);
    func_0x000107c61180();
    func_0x000107c569dc();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_5);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c6e34);
  (*pcVar1)();
}



/* Entry: 1021c6e34; end: 1021c6e8b; -[SCPlusReceiptWebView initWithFrame:configuration:] */

void FUN_1021c6e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c61174(param_7);
  FUN_1021c6d54(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1021c6e8c; end: 1021c6f13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021c6e8c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e609c0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_initWithCoder__1125dd730,param_1);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c569dc();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1021c6f14; end: 1021c6f3b; -[SCPlusReceiptWebView initWithCoder:] */

void FUN_1021c6f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1021c6e8c();
  return;
}



/* Entry: 1021c6f3c; end: 1021c6fe7;  */

bool FUN_1021c6f3c(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  FUN_1021c7404();
  lVar3 = param_1;
  func_0x000107c61480(param_1,lVar2);
  bVar1 = lVar3 != 0;
  if (bVar1 && param_3 != 0) {
    func_0x000107c61174(param_1);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4b73c(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
  }
  return bVar1 && param_3 != 0;
}



/* Entry: 1021c6fe8; end: 1021c7103;  */

/* WARNING: Possible PIC construction at 0x0001021c7038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c703c) */

void FUN_1021c6fe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1021c7404();
  func_0x000107c61480(param_1,lVar1);
  if (param_1 != 0) {
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c4b73c(param_1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1021c7104; end: 1021c7133; +[SCPlusReceiptWebView bindAttributes:] */

void FUN_1021c7104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  FUN_1021c720c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 1021c7134; end: 1021c7167;  */

void FUN_1021c7134(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c7168; end: 1021c7177; -[SCPlusReceiptWebView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c7168(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e609c0));
  return;
}



/* Entry: 1021c7178; end: 1021c720b; -[SCPlusReceiptWebView webView:decidePolicyForNavigationAction:decisionHandler:] */

/* WARNING: Possible PIC construction at 0x0001021c71ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c71f0) */

void FUN_1021c7178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c60bc4(param_5);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1021c7424(param_4,param_1,param_5);
  func_0x000107c60bd0(param_5);
  func_0x000107c60bd0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1021c720c; end: 1021c73c3;  */

void FUN_1021c720c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  uVar2 = 0x697274536c6d7468;
  func_0x000107c5fadc(0x697274536c6d7468,0xea0000000000676e);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1021c6f3c;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101137fac;
  puStack_68 = &UNK_1104dc860;
  func_0x000107c60bc4(&puStack_80);
  pcStack_60 = FUN_1021c6fe8;
  uStack_58 = 0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101138058;
  puStack_68 = &UNK_1104dc888;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c3e900(param_1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(uVar2);
  uVar2 = 0x6e694c7061546e6f;
  func_0x000107c5fadc(0x6e694c7061546e6f,0xe90000000000006b);
  pcStack_60 = (code *)0x1021c7058;
  uStack_58 = 0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101279ab8;
  puStack_68 = &UNK_1104dc8b0;
  func_0x000107c60bc4(&puStack_80);
  pcStack_60 = (code *)0x1021c70b4;
  uStack_58 = 0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10127a6c0;
  puStack_68 = &UNK_1104dc8d8;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c3e908(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021c73c4; end: 1021c7403;  */

undefined8 FUN_1021c73c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1021c7404; end: 1021c7423;  */

void FUN_1021c7404(void)

{
  func_0x000107c61168(&PTR_PTR_112825600);
  return;
}



/* Entry: 1021c7424; end: 1021c76af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c7424(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  long lVar8;
  undefined8 auStack_70 [4];
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar4 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)(lVar4 - extraout_x8_00);
  lVar2 = param_1;
  func_0x000107c4d534();
  if (lVar2 != 0) {
    func_0x000107c4d534(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001021c74fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,param_1 == -1);
    return;
  }
  func_0x000107c50300(param_1);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c5eaf0(puVar7);
  (**(code **)(lVar8 + 8))(lVar4,lVar1);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar1 = *(long *)(lVar2 + -8);
  uVar5 = 1;
  puVar3 = puVar7;
  (**(code **)(lVar1 + 0x30))(puVar7,1,lVar2);
  if ((int)puVar3 == 1) {
    uVar5 = 0x112d36580;
    puVar6 = &UNK_10d9016d0;
    goto LAB_1021c7680;
  }
  func_0x000107c5ed70();
  (**(code **)(lVar1 + 8))(puVar7,lVar2);
  lVar2 = *(long *)(param_2 + _DAT_112e609c0);
  if (lVar2 == 0) {
    func_0x000107c6142c(uVar5);
LAB_1021c7664:
    auStack_70[1] = 0;
    auStack_70[0] = 0;
    auStack_70[3] = 0;
    auStack_70[2] = 0;
  }
  else {
    lVar1 = 0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
    *(undefined8 **)(lVar1 + 0x20) = puVar3;
    *(undefined8 *)(lVar1 + 0x28) = uVar5;
    func_0x000107c615f0(lVar2);
    lVar4 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c61574(lVar1);
    lVar1 = lVar2;
    func_0x000107c4e5f4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar4);
    if (lVar1 == 0) goto LAB_1021c7664;
    func_0x000107c60234(auStack_70,lVar1);
    func_0x000107c615e8(lVar1);
  }
  uVar5 = 0x112d387f8;
  puVar6 = &UNK_10d902650;
  puVar7 = auStack_70;
LAB_1021c7680:
  FUN_1021c73c4(puVar7,uVar5,puVar6);
  (**(code **)(param_3 + 0x10))(param_3,0);
  return;
}



/* Entry: 1021c76b0; end: 1021c76e3;  */

void FUN_1021c76b0(long param_1,long param_2)

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



/* Entry: 1021c76e4; end: 1021c772f;  */

void FUN_1021c76e4(undefined8 param_1)

{
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021c7730,param_1);
  return;
}



/* Entry: 1021c7730; end: 1021c77a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c7730(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1021c7bb0();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e609f0) = 1;
  *(undefined8 *)(lVar2 + _DAT_112e609f8) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1021c77a8; end: 1021c7803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c77a8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e609f0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e609f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c7804; end: 1021c7a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c7804(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112e609f0;
  puVar8 = *(undefined **)(unaff_x20 + _DAT_112e609f0);
  puVar9 = puVar8;
  if (puVar8 == (undefined *)0x1) {
    func_0x000106053ae0();
    func_0x000107c61180();
    if (param_1 == 0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      puVar3 = PTR_PTR_1126aeaf0;
      func_0x000107c610f8(PTR_PTR_1126aeaf0);
      uVar4 = 0x635f796c696d6166;
      func_0x000107c5fadc(0x635f796c696d6166,0xed00007265746e65);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c48db4(puVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(param_1);
      puVar5 = PTR_PTR_1126aeae0;
      func_0x000107c61168(PTR_PTR_1126aeae0);
      func_0x000107c5e2b8();
      func_0x000107c61180();
      puVar6 = &UNK_1104dc9b0;
      func_0x000107c613fc(&UNK_1104dc9b0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar9 = PTR_PTR_1126aeae8;
      func_0x000107c610f8();
      pcStack_70 = FUN_1021c7bf0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_100ea3124;
      puStack_78 = &UNK_1104dc9c8;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c6157c(puVar6);
      func_0x000107c48560();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar5);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61574(puStack_68);
      func_0x000107c61574(puVar6);
    }
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar9;
    func_0x000107c61174(puVar9);
    FUN_1021c7bd0(uVar4);
  }
  func_0x0001021c7be0(puVar8);
  return puVar9;
}



/* Entry: 1021c7a18; end: 1021c7a43; -[_TtC34FamilyCenterSettingsImplementation37FamilyCenterSettingsRowProviderPlugin sectionRow] */

void FUN_1021c7a18(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c5e2b8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021c7a44; end: 1021c7ad3; -[_TtC34FamilyCenterSettingsImplementation37FamilyCenterSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c7a44(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  puVar1 = param_1;
  FUN_1021c7804();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar1 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar2,param_2,puVar1);
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5093c();
  }
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1021c7ad4; end: 1021c7b33; -[_TtC34FamilyCenterSettingsImplementation37FamilyCenterSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c7b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c7b18) */

void FUN_1021c7ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c7804();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c7b34; end: 1021c7b67;  */

void FUN_1021c7b34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c7b68; end: 1021c7b77;  */

undefined1  [16] FUN_1021c7b68(void)

{
  return ZEXT816(0x1104dc990);
}



/* Entry: 1021c7b78; end: 1021c7baf; -[_TtC34FamilyCenterSettingsImplementation37FamilyCenterSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c7b78(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e609f8));
  if (*(long *)(param_1 + _DAT_112e609f0) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021c7bb0; end: 1021c7bcf;  */

void FUN_1021c7bb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128256b8);
  return;
}



/* Entry: 1021c7bd0; end: 1021c7bef;  */

void FUN_1021c7bd0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1021c7bf0; end: 1021c7d67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c7bf0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    if (param_1 != 0) {
      func_0x000107c4d508();
      func_0x000107c61180();
      if (param_1 != 0) {
        puVar2 = PTR_PTR_1126b3530;
        func_0x000107c610f8(PTR_PTR_1126b3530);
        func_0x000107c4807c();
        func_0x000100083b20(&lStack_48);
        lVar3 = lStack_48;
        func_0x000107c4e26c();
        func_0x000107c61180();
        func_0x000107c61170(lStack_48);
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 != 0) {
          puVar5 = PTR_PTR_1126b0ea8;
          func_0x000107c610f8(PTR_PTR_1126b0ea8);
          func_0x000107c453e4();
          func_0x000107c548e4();
          puVar6 = PTR_PTR_1126b6558;
          func_0x000107c610f8(PTR_PTR_1126b6558);
          func_0x000107c453e4();
          func_0x000107c54888(puVar5);
          func_0x000107c61170(puVar6);
          puVar6 = puVar2;
          func_0x000107c61174(puVar2);
          func_0x000107c4ab94(lVar4);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar6);
        }
        func_0x000107c61170(puVar2);
        func_0x000107c61170(param_1);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1021c7d68; end: 1021c7d83;  */

void FUN_1021c7d68(long param_1,long param_2)

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



/* Entry: 1021c7d84; end: 1021c7eff;  */

void FUN_1021c7d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dca80;
  func_0x000107c613fc(&UNK_1104dca80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1021c7e04,puVar1);
  return;
}



/* Entry: 1021c7f00; end: 1021c801b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c7f00(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e60a28;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60a28);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    uVar4 = uStack_48;
    func_0x0001000285a8(0x112e60a68,&UNK_10da68c10);
    func_0x000107c610f8();
    func_0x00010017da58(uVar4);
    puVar2 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    func_0x000100083b20(&uStack_48);
    puVar3 = PTR_PTR_1126aa130;
    func_0x000107c610f8();
    func_0x000107c4863c();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uStack_48);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021c801c; end: 1021c806f; -[_TtC34SessionManagementSettingsRowPlugin42SessionManagementSettingsRowProviderPlugin sectionRow] */

void FUN_1021c801c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c7f00();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021c8070; end: 1021c80c3; -[_TtC34SessionManagementSettingsRowPlugin42SessionManagementSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c8070(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c7f00();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021c80c4; end: 1021c8123; -[_TtC34SessionManagementSettingsRowPlugin42SessionManagementSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c8104: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c8108) */

void FUN_1021c80c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c7f00();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c8124; end: 1021c8157;  */

void FUN_1021c8124(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c8158; end: 1021c8167;  */

undefined1  [16] FUN_1021c8158(void)

{
  return ZEXT816(0x1104dcaa8);
}



/* Entry: 1021c8168; end: 1021c81af; -[_TtC34SessionManagementSettingsRowPlugin42SessionManagementSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c8168(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60a30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60a38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60a28));
  return;
}



/* Entry: 1021c81b0; end: 1021c81cf;  */

void FUN_1021c81b0(void)

{
  func_0x000107c61168(&PTR_PTR_112825780);
  return;
}



/* Entry: 1021c81d0; end: 1021c834b;  */

void FUN_1021c81d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dcb48;
  func_0x000107c613fc(&UNK_1104dcb48,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x1021c8250,puVar1);
  return;
}



/* Entry: 1021c834c; end: 1021c846b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c834c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e60a70;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112e60a70);
  puVar5 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    uVar2 = uStack_48;
    func_0x000100083b20(&uStack_48);
    uVar6 = 0x112e60ab0;
    func_0x0001000285a8(0x112e60ab0,&UNK_10da68c90);
    func_0x000107c610f8();
    uVar4 = uStack_48;
    func_0x00010017da58(uStack_48,uVar6);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126aa138;
    func_0x000107c610f8();
    func_0x000107c48ea8();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar5;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar6);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar3);
  return puVar5;
}



/* Entry: 1021c846c; end: 1021c84bf; -[_TtC22TwoFaSettingsRowPlugin30TwoFaSettingsRowProviderPlugin sectionRow] */

void FUN_1021c846c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c834c();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021c84c0; end: 1021c8513; -[_TtC22TwoFaSettingsRowPlugin30TwoFaSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c84c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c834c();
  uVar2 = uVar1;
  func_0x000107c5093c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021c8514; end: 1021c8573; -[_TtC22TwoFaSettingsRowPlugin30TwoFaSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c8554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c8558) */

void FUN_1021c8514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c834c();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c8574; end: 1021c85a7;  */

void FUN_1021c8574(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c85a8; end: 1021c85b7;  */

undefined1  [16] FUN_1021c85a8(void)

{
  return ZEXT816(0x1104dcb70);
}



/* Entry: 1021c85b8; end: 1021c85ff; -[_TtC22TwoFaSettingsRowPlugin30TwoFaSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c85b8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60a78));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60a80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60a70));
  return;
}



/* Entry: 1021c8600; end: 1021c861f;  */

void FUN_1021c8600(void)

{
  func_0x000107c61168(&PTR_PTR_112825850);
  return;
}



/* Entry: 1021c8620; end: 1021c873b;  */

void FUN_1021c8620(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dcc10;
  func_0x000107c613fc(&UNK_1104dcc10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021c873c,puVar1);
  return;
}



/* Entry: 1021c873c; end: 1021c8743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c873c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar6 = &lStack_40;
  lVar4 = lVar1;
  FUN_1021c9010();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112e60ab8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e60ac0) = 0;
  *(long *)(lVar5 + _DAT_112e60ac8) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e60ad0) = uVar2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61154(&lStack_40,puVar3);
  *param_1 = plVar6;
  return;
}



/* Entry: 1021c8744; end: 1021c87bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c8744(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60ab8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60ac0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60ac8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60ad0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c87c0; end: 1021c8897;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c87c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  lVar1 = _DAT_112e60ab8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60ab8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    func_0x000100083b20(&uStack_48);
    func_0x0001000285a8(0x112e60b30,&UNK_10da68d88);
    func_0x000107c610f8();
    uVar4 = uStack_48;
    func_0x00010017da58(uStack_48);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8();
    func_0x000107c4907c();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021c8898; end: 1021c8ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c8898(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112e60ac0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60ac0);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x000107c61168();
    func_0x000107c5c438();
    func_0x000107c61180();
    puVar4 = puVar3;
    FUN_1021c9b74();
    puVar2 = puVar4;
    uVar8 = param_2;
    FUN_1021c9b74();
    puVar5 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(puVar4,param_2);
    func_0x000107c6142c(param_2);
    uVar6 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010f06c610);
    func_0x000107c5fadc(puVar2,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c48db4(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_1104dcc58;
    func_0x000107c613fc(&UNK_1104dcc58,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = PTR_PTR_1126aeae8;
    func_0x000107c610f8();
    pcStack_70 = FUN_1021c9050;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ea3124;
    puStack_78 = &UNK_1104dcc70;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(puVar2);
    func_0x000107c48560();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar7);
    puVar3 = puStack_68;
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar8);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 1021c8ab4; end: 1021c8c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c8ab4(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  puVar2 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    if (param_1 != 0) {
      func_0x000107c61174();
      lVar3 = param_1;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47998();
        lVar5 = 0;
        func_0x0001021c9030();
        lVar6 = lVar5;
        func_0x000107c610f8();
        lVar1 = _DAT_112e60b00;
        func_0x000107c61614(lVar6 + _DAT_112e60b00,0);
        func_0x000107c61604(lVar6 + lVar1,puVar2);
        puVar9 = PTR_s_init_1125d9248;
        lStack_78 = lVar6;
        lStack_70 = lVar5;
        func_0x000107c61174(puVar4);
        func_0x000107c61174(lVar3);
        plVar7 = &lStack_78;
        func_0x000107c61154(plVar7,puVar9);
        uVar8 = 0;
        func_0x0001005216d4(0);
        func_0x000107c610f8();
        puVar9 = puVar4;
        func_0x000102ff3268(puVar4,lVar3,plVar7,uVar8);
        FUN_1021c87c0();
        func_0x000107c42c1c();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar4);
        puVar2 = puVar9;
      }
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1021c8c38; end: 1021c8c8b; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin61SupportAndFeedbackBugsAndSuggestionsSettingsRowProviderPlugin sectionRow] */

void FUN_1021c8c38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c8898();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021c8c8c; end: 1021c8cbf; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin61SupportAndFeedbackBugsAndSuggestionsSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c8c8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c8cc0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021c8cc0; end: 1021c8dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c8cc0(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = (undefined *)0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f06c300);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    if ((int)lVar4 == 0) {
      puVar5 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4d73c();
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar5);
    }
    else {
      FUN_1021c8898();
      puVar5 = puVar3;
      func_0x000107c5093c();
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c8dd4);
  (*pcVar1)();
}



/* Entry: 1021c8dd4; end: 1021c8e33; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin61SupportAndFeedbackBugsAndSuggestionsSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c8e14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c8e18) */

void FUN_1021c8dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c8898();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c8e34; end: 1021c8e5f; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin61SupportAndFeedbackBugsAndSuggestionsSettingsRowProviderPlugin init] */

void FUN_1021c8e34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsSupportAndFeedbackSettingsRowPlugin.SupportAndFeedbackBugsAndSuggestionsSettingsRowProviderPlugin"
                      ,0x6b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c8e60);
  (*pcVar1)();
}



/* Entry: 1021c8e60; end: 1021c8e63;  */

void FUN_1021c8e60(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c8e64; end: 1021c8ebb; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin61SupportAndFeedbackBugsAndSuggestionsSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c8ea0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c8ea4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c8e64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60ad0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60ab8));
  return;
}



/* Entry: 1021c8ebc; end: 1021c8f67;  */

/* WARNING: Possible PIC construction at 0x0001021c8f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c8f38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c8f04) */
/* WARNING: Removing unreachable block (ram,0x0001021c8f08) */
/* WARNING: Removing unreachable block (ram,0x0001021c8f3c) */
/* WARNING: Removing unreachable block (ram,0x0001021c8f44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c8ebc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112e60b00;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1021c87c0();
    func_0x000107c5194c();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1021c8f68; end: 1021c8f8f; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPluginP33_90C398A06932D9559B185A1FACA597A336BugsAndSuggestionsScopeDelegateProxy bugsAndSuggestionsScopeDidDismiss] */

void FUN_1021c8f68(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021c8ebc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c8f90; end: 1021c8fef; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPluginP33_90C398A06932D9559B185A1FACA597A336BugsAndSuggestionsScopeDelegateProxy init] */

void FUN_1021c8f90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsSupportAndFeedbackSettingsRowPlugin.BugsAndSuggestionsScopeDelegateProxy"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c8fbc);
  (*pcVar1)();
}



/* Entry: 1021c8ff0; end: 1021c900f; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPluginP33_90C398A06932D9559B185A1FACA597A336BugsAndSuggestionsScopeDelegateProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c8ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112e60b00);
  return;
}



/* Entry: 1021c9010; end: 1021c904f;  */

void FUN_1021c9010(void)

{
  func_0x000107c61168(&PTR_PTR_112825920);
  return;
}



/* Entry: 1021c9050; end: 1021c9077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c9050(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  puVar2 = (undefined *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined *)0x0) {
    if (param_1 != 0) {
      func_0x000107c61174();
      lVar3 = param_1;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (lVar3 != 0) {
        puVar4 = PTR_PTR_1126aead0;
        func_0x000107c610f8(PTR_PTR_1126aead0);
        func_0x000107c47998();
        lVar5 = 0;
        func_0x0001021c9030();
        lVar6 = lVar5;
        func_0x000107c610f8();
        lVar1 = _DAT_112e60b00;
        func_0x000107c61614(lVar6 + _DAT_112e60b00,0);
        func_0x000107c61604(lVar6 + lVar1,puVar2);
        puVar9 = PTR_s_init_1125d9248;
        lStack_78 = lVar6;
        lStack_70 = lVar5;
        func_0x000107c61174(puVar4);
        func_0x000107c61174(lVar3);
        plVar7 = &lStack_78;
        func_0x000107c61154(plVar7,puVar9);
        uVar8 = 0;
        func_0x0001005216d4(0);
        func_0x000107c610f8();
        puVar9 = puVar4;
        func_0x000102ff3268(puVar4,lVar3,plVar7,uVar8);
        FUN_1021c87c0();
        func_0x000107c42c1c();
        func_0x000107c61170(puVar2);
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(puVar4);
        puVar2 = puVar9;
      }
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1021c9078; end: 1021c9227;  */

void FUN_1021c9078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dcca8;
  func_0x000107c613fc(&UNK_1104dcca8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1021c9228,puVar1);
  return;
}



/* Entry: 1021c9228; end: 1021c9237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c9228(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1021c9b28();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112e60b38) = 0;
  *(undefined8 *)(lVar7 + _DAT_112e60b40) = 0;
  *(long *)(lVar7 + _DAT_112e60b48) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112e60b50) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e60b58) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e60b60) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112e60b68) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1021c9238; end: 1021c92eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c9238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60b38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60b40) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60b48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60b50) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60b58) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e60b60) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e60b68) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c92ec; end: 1021c9507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c92ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_112e60b40;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60b40);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x000107c61168();
    func_0x000107c5c438();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x0001021c9c40();
    puVar2 = puVar4;
    uVar8 = param_2;
    func_0x0001021c9c40();
    puVar5 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(puVar4,param_2);
    func_0x000107c6142c(param_2);
    uVar6 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f06c6a0);
    func_0x000107c5fadc(puVar2,uVar8);
    func_0x000107c6142c(uVar8);
    func_0x000107c48db4(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_1104dcd18;
    func_0x000107c613fc(&UNK_1104dcd18,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar4 = PTR_PTR_1126aeae8;
    func_0x000107c610f8();
    uStack_70 = 0x1021c9b64;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ea3124;
    puStack_78 = &UNK_1104dcd30;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar2;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(puVar2);
    func_0x000107c48560();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
    func_0x000107c60bd0(ppuVar7);
    puVar3 = puStack_68;
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c61170(uVar8);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar4;
}



/* Entry: 1021c9508; end: 1021c957b;  */

void FUN_1021c9508(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1021c957c();
      func_0x000107c61170(param_2);
      param_2 = param_1;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1021c957c; end: 1021c972f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c957c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  func_0x000107c4d508();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126aead0;
    func_0x000107c610f8();
    func_0x000107c47998();
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e60b38);
    *(undefined **)(unaff_x20 + _DAT_112e60b38) = puVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
    func_0x000100083b20(&uStack_58);
    uVar2 = uStack_58;
    uVar5 = 0x112e4de20;
    func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
    func_0x000107c610f8();
    func_0x00010017da58(uVar2,uVar5);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(uVar2);
    puVar4 = PTR_PTR_1126c3530;
    func_0x000107c61168(PTR_PTR_1126c3530);
    func_0x000100083b20(&uStack_58);
    uVar5 = uStack_58;
    func_0x000100083b20(&uStack_58);
    uVar2 = uStack_58;
    func_0x000100083b20(&uStack_58);
    func_0x000107c4c210(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uStack_58);
    func_0x000107c3e2c0(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1021c9730; end: 1021c9783; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin59SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin sectionRow] */

void FUN_1021c9730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c92ec();
  uVar2 = uVar1;
  func_0x000107c51b94();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1021c9784; end: 1021c97b7; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin59SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin rowViewModel] */

void FUN_1021c9784(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c97b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021c97b8; end: 1021c98cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c97b8(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    puVar3 = (undefined *)0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f06c300);
    lVar4 = lVar2;
    func_0x000107c3ebd4();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    if ((int)lVar4 == 0) {
      puVar5 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar3 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c4d73c();
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar5);
    }
    else {
      FUN_1021c92ec();
      puVar5 = puVar3;
      func_0x000107c5093c();
    }
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c98cc);
  (*pcVar1)();
}



/* Entry: 1021c98cc; end: 1021c992b; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin59SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c990c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c9910) */

void FUN_1021c98cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c92ec();
  func_0x000107c44678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c992c; end: 1021c992f;  */

void FUN_1021c992c(void)

{
  return;
}



/* Entry: 1021c9930; end: 1021c997b; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin59SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin safetyAndPrivacyViewControllerDidDismiss:] */

/* WARNING: Possible PIC construction at 0x0001021c9964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c9968) */

void FUN_1021c9930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c9a64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1021c997c; end: 1021c99db; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin59SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin init] */

void FUN_1021c997c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsSupportAndFeedbackSettingsRowPlugin.SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin"
                      ,0x69,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c99a8);
  (*pcVar1)();
}



/* Entry: 1021c99dc; end: 1021c9a63; -[_TtC45SCSettingsSupportAndFeedbackSettingsRowPlugin59SupportAndFeedbackSafetyAndPrivacySettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c9a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c9a4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c99dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60b48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60b58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60b50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60b60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60b68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60b38));
  return;
}


