/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e9f638; end: 102e9f67f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102e9f638(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f25830);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 102e9f680; end: 102e9f6a7; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler didSendWithEvent:] */

void FUN_102e9f680(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e9f000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e9f6a8; end: 102e9f6cf; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler didDismissSendFlow] */

void FUN_102e9f6a8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e9f000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e9f6d0; end: 102e9f6db; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler willSendWithRecipientsCount:groupCount:] */

void FUN_102e9f6d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0x6f4370756f726720,0xec0000003d746e75);
  func_0x000107c6057c(puVar1,puVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(0x800000010f110090);
  return;
}



/* Entry: 102e9f6dc; end: 102e9f7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9f6dc(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c602fc(0x1a);
  func_0x000107c6142c(0xe000000000000000);
  bVar2 = (param_1 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(0x800000010f110070);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f25838);
  func_0x000107c4b254();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c5cde4(lVar4);
    func_0x000107c615e8(lVar4);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f25840);
  lVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f25840))[1];
  func_0x000107c614f0(uVar5);
  (**(code **)(lVar4 + 0x20))(0,uVar5,lVar4);
  return;
}



/* Entry: 102e9f800; end: 102e9f82f; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler didSendComplete:] */

void FUN_102e9f800(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102e9f6dc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e9f830; end: 102e9f87b; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler didCancelFromPreview:] */

/* WARNING: Possible PIC construction at 0x000102e9f864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e9f868) */

void FUN_102e9f830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e9fcf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e9f87c; end: 102e9f9a3; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler didSendSnapsAndPostToStory:storyTypes:] */

void FUN_102e9f87c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    uVar1 = 0;
    func_0x000102ea0338(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar1;
    func_0x000100120cb0();
    func_0x000107c5fe10(param_4,uVar1,uVar2);
  }
  func_0x000107c61174(param_1);
  func_0x000102e9fd94(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 102e9f9a4; end: 102e9f9cb; -[_TtC21WebLensesServicesImpl22WebLensSendFlowHandler didSendChatMessage] */

void FUN_102e9f9a4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102e9f908();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e9f9cc; end: 102e9fa47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9f9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c610f8();
  lVar3 = param_9;
  func_0x000107c614f0();
  lVar1 = param_9 + _DAT_112f25828;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(param_9 + _DAT_112f25868) = 0;
  lVar1 = _DAT_112f25870;
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_9 + lVar1,1,1,lVar4);
  puVar2 = (undefined8 *)(param_9 + _DAT_112f25840);
  *puVar2 = param_1;
  puVar2[1] = param_12;
  *(undefined8 *)(param_9 + _DAT_112f25830) = param_2;
  *(undefined8 *)(param_9 + _DAT_112f25848) = param_3;
  *(undefined8 *)(param_9 + _DAT_112f25850) = param_4;
  *(undefined8 *)(param_9 + _DAT_112f25838) = param_5;
  *(undefined8 *)(param_9 + _DAT_112f25858) = param_6;
  *(undefined8 *)(param_9 + _DAT_112f25820) = param_7;
  *(undefined8 *)(param_9 + _DAT_112f25860) = param_8;
  lStack_70 = param_9;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e9fa48; end: 102e9fb83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9fa48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_9;
  func_0x000107c614f0();
  lVar1 = param_9 + _DAT_112f25828;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(param_9 + _DAT_112f25868) = 0;
  lVar1 = _DAT_112f25870;
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_9 + lVar1,1,1,lVar4);
  puVar2 = (undefined8 *)(param_9 + _DAT_112f25840);
  *puVar2 = param_1;
  puVar2[1] = param_12;
  *(undefined8 *)(param_9 + _DAT_112f25830) = param_2;
  *(undefined8 *)(param_9 + _DAT_112f25848) = param_3;
  *(undefined8 *)(param_9 + _DAT_112f25850) = param_4;
  *(undefined8 *)(param_9 + _DAT_112f25838) = param_5;
  *(undefined8 *)(param_9 + _DAT_112f25858) = param_6;
  *(undefined8 *)(param_9 + _DAT_112f25820) = param_7;
  *(undefined8 *)(param_9 + _DAT_112f25860) = param_8;
  lStack_70 = param_9;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e9fb84; end: 102e9fb97;  */

void FUN_102e9fb84(undefined8 param_1)

{
  if (lRam0000000112f25920 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e737af4);
  return;
}



/* Entry: 102e9fb98; end: 102e9fbd3;  */

undefined8 FUN_102e9fb98(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102e9fb84();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102e9fbd4; end: 102e9fbfb;  */

void FUN_102e9fbd4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = 0;
  FUN_102e9fb84();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    *puVar5 = uVar1;
    func_0x000107c6159c(puVar5,lVar2,0);
    func_0x000107c61174(uVar1);
    FUN_102e9e2c0(puVar5,uVar4);
    func_0x000107c61170(lVar3);
    FUN_102e9fb98(puVar5);
  }
  return;
}



/* Entry: 102e9fbfc; end: 102e9fcf7;  */

void FUN_102e9fbfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c602fc(0x28);
  func_0x000107c6142c(0xe000000000000000);
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar1 = PTR___sSiN_11034deb0;
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  func_0x000107c5fb78(0x6f4370756f726720,0xec0000003d746e75);
  func_0x000107c6057c(puVar1,puVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c6142c(0x800000010f110090);
  return;
}



/* Entry: 102e9fcf8; end: 102e9febf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e9fcf8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f25838);
  func_0x000107c4b254();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5cde4(lVar2);
    func_0x000107c615e8(lVar2);
  }
  FUN_102e9f000();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f25840);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f25840))[1];
  func_0x000107c614f0(uVar3);
  (**(code **)(lVar2 + 0x20))(0,uVar3,lVar2);
  return;
}



/* Entry: 102e9fec0; end: 102e9fec7;  */

void FUN_102e9fec0(void)

{
  if (lRam0000000112f258a0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e737aa4);
  return;
}



/* Entry: 102e9fec8; end: 102e9ff83;  */

long * FUN_102e9fec8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    bVar2 = (int)plVar3 != 1;
    if (bVar2) {
      *param_1 = *param_2;
      func_0x000107c61174();
    }
    else {
      lVar4 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
    }
    func_0x000107c6159c(param_1,param_3,!bVar2);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102e9ff84; end: 102e9ffd3;  */

void FUN_102e9ff84(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1;
  func_0x000107c614c4();
  if ((int)puVar1 == 1) {
    lVar2 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000102e9ffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102e9ffd4; end: 102ea022b;  */

undefined8 * FUN_102e9ffd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  bVar1 = (int)puVar2 != 1;
  if (bVar1) {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  else {
    lVar3 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  }
  func_0x000107c6159c(param_1,param_3,!bVar1);
  return param_1;
}



/* Entry: 102ea022c; end: 102ea025b;  */

void FUN_102ea022c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000102ea0234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 102ea025c; end: 102ea0377;  */

void FUN_102ea025c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,2,&puStack_30);
  }
  return;
}



/* Entry: 102ea0378; end: 102ea03ab;  */

void FUN_102ea0378(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102ea03ac; end: 102ea0423; -[_TtC21WebLensesServicesImpl23WebLensUIEventsProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102ea03c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea03e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea0408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ea03ec) */
/* WARNING: Removing unreachable block (ram,0x000102ea03cc) */
/* WARNING: Removing unreachable block (ram,0x000102ea040c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea03ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f25958));
  return;
}



/* Entry: 102ea0424; end: 102ea0433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea0424(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f25958));
  return;
}



/* Entry: 102ea0434; end: 102ea046f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea0434(void)

{
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x0001002a64a8(&uStack_21);
  return;
}



/* Entry: 102ea0470; end: 102ea047f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea0470(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f25960));
  return;
}



/* Entry: 102ea0480; end: 102ea04a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea0480(void)

{
  func_0x0001002a64a8();
  return;
}



/* Entry: 102ea04a8; end: 102ea04b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea04a8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f25968));
  return;
}



/* Entry: 102ea04b8; end: 102ea0527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea04b8(void)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x0001002a64a8(&uStack_28);
  return;
}



/* Entry: 102ea0528; end: 102ea0557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea0528(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f25970));
  return;
}



/* Entry: 102ea0558; end: 102ea05cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea0558(void)

{
  func_0x0001002a64a8();
  return;
}



/* Entry: 102ea05d0; end: 102ea09e7;  */

void FUN_102ea05d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x20) = 2;
  *(undefined8 *)(unaff_x20 + 0x28) = 1;
  *(undefined1 *)(unaff_x20 + 0x30) = 2;
  *(undefined8 *)(unaff_x20 + 0x38) = 1;
  *(undefined4 *)(unaff_x20 + 0x40) = 0x2020202;
  *(undefined2 *)(unaff_x20 + 0x44) = 0x202;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined1 *)(unaff_x20 + 0x50) = 1;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined1 *)(unaff_x20 + 0x60) = 1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102ea09e8; end: 102ea0a1f;  */

undefined8 FUN_102ea09e8(undefined8 param_1)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    func_0x000107c4c8a8(*(undefined8 *)(unaff_x20 + 0x18));
    *(undefined8 *)(unaff_x20 + 0x48) = param_1;
    *(undefined1 *)(unaff_x20 + 0x50) = 0;
    return param_1;
  }
  return *(undefined8 *)(unaff_x20 + 0x48);
}



/* Entry: 102ea0a20; end: 102ea0adb;  */

ulong FUN_102ea0a20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x20;
  undefined8 uStack_38;
  
  if (*(char *)(unaff_x20 + 0x60) == '\x01') {
    func_0x0001000d224c(&uStack_38);
    uVar1 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010f112f10);
    uVar2 = uStack_38;
    func_0x000107c4980c();
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(uVar1);
    uVar4 = (uint)uVar2;
    if ((int)uVar4 < 6) {
      uVar4 = 5;
    }
    if (0x1d < (int)uVar4) {
      uVar4 = 0x1e;
    }
    uVar3 = (ulong)uVar4;
    *(ulong *)(unaff_x20 + 0x58) = uVar3;
    *(undefined1 *)(unaff_x20 + 0x60) = 0;
  }
  else {
    uVar3 = *(ulong *)(unaff_x20 + 0x58);
  }
  return uVar3;
}



/* Entry: 102ea0adc; end: 102ea0b17;  */

void FUN_102ea0adc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100755194(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100755194(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ea0b18; end: 102ea0b4f;  */

uint FUN_102ea0b18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar3 = (uint)*(byte *)(unaff_x20 + 0x20);
  if (*(byte *)(unaff_x20 + 0x20) == 2) {
    func_0x0001000d224c(&uStack_38);
    uVar1 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010f112e20);
    uVar2 = uStack_38;
    func_0x000107c3ebd4();
    uVar3 = (uint)uVar2;
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x20) = (char)uVar2;
  }
  return uVar3 & 1;
}



/* Entry: 102ea0b50; end: 102ea0b87;  */

void FUN_102ea0b50(long param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  if (param_1 != 0) {
    func_0x000107c42c04();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102ea0b88; end: 102ea0d9f;  */

undefined1  [16]
FUN_102ea0b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  undefined1 auVar9 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 uStack_71;
  
  func_0x000107c4abfc();
  uVar3 = 0;
  FUN_102ea0e30(0);
  func_0x000107c614e8();
  func_0x000107c415a4();
  func_0x000107c61180();
  func_0x000107c4a124();
  func_0x000107c56f90(uVar3);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar4);
  func_0x000107c58bfc(param_1,uVar3);
  uStack_71 = 0;
  func_0x000107c3ec60();
  puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c45a60(param_1,param_2,param_3,param_4);
  puVar4 = &UNK_1105e27a8;
  func_0x000107c613fc(&UNK_1105e27a8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined1 **)(puVar4 + 0x18) = &uStack_71;
  puVar6 = &UNK_1105e27d0;
  func_0x000107c613fc(&UNK_1105e27d0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_102ea0f04;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  pcStack_88 = FUN_102ea0f0c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_100f9148c;
  puStack_90 = &UNK_1105e27e8;
  ppuVar7 = &puStack_a8;
  puStack_80 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_80;
  func_0x000107c61174();
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = puVar5;
  func_0x000107c45138(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c60bd0(ppuVar7);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x62,0x1f,0x24,1);
  func_0x000107c61574(puVar6);
  uVar1 = uStack_71;
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000107c61574(puVar4);
    auVar9[8] = uVar1;
    auVar9._0_8_ = puVar8;
    auVar9._9_7_ = 0;
    return auVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ea0da0);
  (*pcVar2)();
}



/* Entry: 102ea0da0; end: 102ea0dc3;  */

void FUN_102ea0da0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ea0dc4; end: 102ea0dd3;  */

void FUN_102ea0dc4(undefined8 param_1)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(*unaff_x20 + 0x10,param_1);
  return;
}



/* Entry: 102ea0dd4; end: 102ea0e2f;  */

undefined1  [16] FUN_102ea0dd4(undefined8 param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  lVar1 = *unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    lVar3 = lVar1;
    FUN_102ea0b88();
    func_0x000107c61170(lVar1);
    uVar2 = (ulong)(param_2 & 1);
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = lVar3;
  return auVar4;
}



/* Entry: 102ea0e30; end: 102ea0e73;  */

void FUN_102ea0e30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daaf08 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1126afe00;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112daaf08 = puVar1;
  return;
}



/* Entry: 102ea0e74; end: 102ea0f03;  */

void FUN_102ea0e74(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  ulong uVar1;
  
  func_0x000107c3ec60(param_2);
  uVar1 = param_2;
  func_0x000107c422d0();
  if ((uVar1 & 1) == 0) {
    func_0x000107c4aba4(param_2);
    func_0x000107c61180();
    func_0x000107c3ab28(param_1);
    func_0x000107c61180();
    func_0x000107c500d4(param_2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_1);
    *param_3 = 1;
  }
  return;
}



/* Entry: 102ea0f04; end: 102ea0f0b;  */

void FUN_102ea0f04(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  puVar1 = *(undefined1 **)(unaff_x20 + 0x18);
  func_0x000107c3ec60(uVar3);
  uVar2 = uVar3;
  func_0x000107c422d0();
  if ((uVar2 & 1) == 0) {
    func_0x000107c4aba4(uVar3);
    func_0x000107c61180();
    func_0x000107c3ab28(param_1);
    func_0x000107c61180();
    func_0x000107c500d4(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
    *puVar1 = 1;
  }
  return;
}



/* Entry: 102ea0f0c; end: 102ea0f2b;  */

void FUN_102ea0f0c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102ea0f2c; end: 102ea0f47;  */

void FUN_102ea0f2c(long param_1,long param_2)

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



/* Entry: 102ea0f48; end: 102ea102b;  */

void FUN_102ea0f48(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001003227d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_102ea9924(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x000102ea9790();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_102ea97b8();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 102ea102c; end: 102ea1033;  */

void FUN_102ea102c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x0001003227d0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_102ea9924(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x000102ea9790();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_102ea97b8();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 102ea1034; end: 102ea10eb;  */

long FUN_102ea1034(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_102ea9924(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ea9790();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_102ea97b8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 102ea10ec; end: 102ea111f;  */

void FUN_102ea10ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ea1120; end: 102ea1173;  */

void FUN_102ea1120(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea1174; end: 102ea11bf;  */

void FUN_102ea1174(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea11c0; end: 102ea1213;  */

void FUN_102ea11c0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ea1214; end: 102ea1a8b;  */

void FUN_102ea1214(long *param_1,long param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100342664();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  *(undefined8 *)(param_2 + 0x40) = uStack_90;
  *(undefined8 *)(param_2 + 0x48) = uStack_98;
  *(undefined8 *)(param_2 + 0x50) = uStack_a0;
  *(undefined8 *)(param_2 + 0x58) = uStack_a8;
  *(undefined8 *)(param_2 + 0x60) = uStack_b0;
  *(undefined8 *)(param_2 + 0x68) = uStack_b8;
  *(undefined8 *)(param_2 + 0x70) = uStack_c0;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar10 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar13 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar13 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x20) = puVar11;
  puVar11 = PTR_PTR_1126ac740;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1c910);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f112f70);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f112f90);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f112fb0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar14 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f112fd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar13 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uStack_c8);
  func_0x000107c61574(uStack_d0);
  *(undefined8 *)(param_2 + 0x78) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 102ea1a8c; end: 102ea1ac7;  */

void FUN_102ea1a8c(void)

{
  long unaff_x20;
  
  FUN_102ea1214(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102ea1ac8; end: 102ea220b;  */

void FUN_102ea1ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_9;
  *(undefined8 *)(unaff_x20 + 0x68) = param_10;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar4 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e01b58,&UNK_10da8e210);
  func_0x000107c610f8();
  uVar4 = param_13;
  func_0x000107c6157c(param_13);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  puVar3 = PTR_PTR_1126ac740;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1c910);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar4 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f112f70);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f112f90);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f112fb0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f112fd0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  puVar1 = puVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61574(param_12);
  func_0x000107c61574(param_13);
  *(undefined **)(unaff_x20 + 0x78) = puVar1;
  return;
}



/* Entry: 102ea220c; end: 102ea22af;  */

void FUN_102ea220c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 102ea22b0; end: 102ea2303;  */

void FUN_102ea22b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea2304; end: 102ea230b;  */

void FUN_102ea2304(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea230c; end: 102ea235b;  */

undefined8 FUN_102ea230c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea235c; end: 102ea239f;  */

undefined1  [16] FUN_102ea235c(void)

{
  return ZEXT816(0x1105e2a00);
}



/* Entry: 102ea23a0; end: 102ea23c7;  */

void FUN_102ea23a0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ea23c8; end: 102ea23cf;  */

undefined8 FUN_102ea23c8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea23d0; end: 102ea29e3;  */

void FUN_102ea23d0(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010038198c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x48) = uStack_70;
  func_0x0001000285a8(0x112e5f738,&UNK_10da67770);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar11 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x18) = puVar3;
  func_0x0001000285a8(0x112e51dc0,&UNK_10db60af0);
  func_0x000107c610f8();
  uVar11 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x20) = puVar4;
  func_0x0001000285a8(0x112f25d88,&UNK_10db60af8);
  func_0x000107c610f8();
  uVar11 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x28) = puVar5;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar11 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x30) = puVar6;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar11 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar11);
  *(undefined **)(param_2 + 0x38) = puVar7;
  puVar8 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x40) = puVar8;
  puVar9 = PTR_PTR_1126ac748;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar9;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar11 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar9);
  uVar11 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f112ff0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f113010);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(puVar9);
  func_0x000107c61174(puVar3);
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef113c0);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174(puVar4);
  uVar11 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c830);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f113030);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c3e740(puVar9);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar8 != (undefined *)0x0) {
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uStack_88);
    func_0x000107c61574(uStack_90);
    func_0x000107c61574(uStack_98);
    *(undefined **)(param_2 + 0x50) = puVar8;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ea29e4);
  (*pcVar1)();
}



/* Entry: 102ea29e4; end: 102ea29f7;  */

void FUN_102ea29e4(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x00010038198c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x48) = uStack_70;
  func_0x0001000285a8(0x112e5f738,&UNK_10da67770);
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar12 = uStack_78;
  func_0x000107c6157c(uStack_78);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(lVar2 + 0x18) = puVar4;
  func_0x0001000285a8(0x112e51dc0,&UNK_10db60af0);
  func_0x000107c610f8();
  uVar12 = uStack_80;
  func_0x000107c6157c(uStack_80);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(lVar2 + 0x20) = puVar5;
  func_0x0001000285a8(0x112f25d88,&UNK_10db60af8);
  func_0x000107c610f8();
  uVar12 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(lVar2 + 0x28) = puVar6;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar12 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar7 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(lVar2 + 0x30) = puVar7;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar12 = uStack_98;
  func_0x000107c6157c(uStack_98);
  func_0x00010017da58();
  puVar8 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar12);
  *(undefined **)(lVar2 + 0x38) = puVar8;
  puVar9 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x40) = puVar9;
  puVar10 = PTR_PTR_1126ac748;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar2 + 0x10) = puVar10;
  func_0x000107c61174();
  uVar11 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar12 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar10);
  uVar12 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f112ff0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f113010);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar12);
  func_0x000107c61174(puVar10);
  func_0x000107c61174(puVar4);
  uVar12 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef113c0);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174(puVar5);
  uVar12 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c830);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f113030);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar12 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c3e740(puVar10);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uStack_88);
    func_0x000107c61574(uStack_90);
    func_0x000107c61574(uStack_98);
    *(undefined **)(lVar2 + 0x50) = puVar9;
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ea29e4);
  (*pcVar1)();
}



/* Entry: 102ea29f8; end: 102ea2f93;  */

long FUN_102ea29f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  func_0x0001000285a8(0x112e5f738,&UNK_10da67770);
  func_0x000107c610f8();
  func_0x000107c61174();
  uVar9 = param_3;
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  func_0x0001000285a8(0x112e51dc0,&UNK_10db60af0);
  func_0x000107c610f8();
  uVar9 = param_4;
  func_0x000107c6157c(param_4);
  func_0x00010017da58();
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  func_0x0001000285a8(0x112f25d88,&UNK_10db60af8);
  func_0x000107c610f8();
  uVar9 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar4 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  func_0x0001000285a8(0x112e4d1b8,&UNK_10da477e0);
  func_0x000107c610f8();
  uVar9 = param_6;
  func_0x000107c6157c(param_6);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x30) = puVar5;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar9 = param_7;
  func_0x000107c6157c(param_7);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar9);
  *(undefined **)(unaff_x20 + 0x38) = puVar6;
  puVar7 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x40) = puVar7;
  puVar8 = PTR_PTR_1126ac748;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar8;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar9 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar8);
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f112ff0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f113010);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar2);
  uVar9 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef113c0);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar3);
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c830);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c61174(puVar4);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f113030);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar8);
  func_0x000107c61174();
  uVar9 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1a710);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef2dd30);
  func_0x000107c5a49c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar8);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_4);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_7);
    *(undefined **)(unaff_x20 + 0x50) = puVar7;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ea2f94);
  (*pcVar1)();
}



/* Entry: 102ea2f94; end: 102ea300f;  */

void FUN_102ea2f94(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 102ea3010; end: 102ea3063;  */

void FUN_102ea3010(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea3064; end: 102ea306b;  */

void FUN_102ea3064(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea306c; end: 102ea30bb;  */

undefined8 FUN_102ea306c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea30bc; end: 102ea30ff;  */

undefined1  [16] FUN_102ea30bc(void)

{
  return ZEXT816(0x1105e2ac8);
}



/* Entry: 102ea3100; end: 102ea3127;  */

void FUN_102ea3100(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ea3128; end: 102ea312f;  */

undefined8 FUN_102ea3128(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea3130; end: 102ea38a3;  */

void FUN_102ea3130(long *param_1,long param_2)

{
  undefined *puVar1;
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
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x0001003314c4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  puVar1 = PTR_PTR_1126ac750;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174(uStack_b8);
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar13 = auStack_70[0];
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar14 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00a6d0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar14 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  *(undefined8 *)(param_2 + 0x70) = uVar14;
  *param_1 = param_2;
  return;
}



/* Entry: 102ea38a4; end: 102ea38df;  */

void FUN_102ea38a4(void)

{
  long unaff_x20;
  
  FUN_102ea3130(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102ea38e0; end: 102ea3f53;  */

void FUN_102ea38e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = param_12;
  puVar1 = PTR_PTR_1126ac750;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef2b6f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2c670);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef27f00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00a6d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef12d50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  *(undefined **)(unaff_x20 + 0x70) = puVar3;
  return;
}



/* Entry: 102ea3f54; end: 102ea3fef;  */

void FUN_102ea3f54(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102ea3ff0; end: 102ea4043;  */

void FUN_102ea3ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea4044; end: 102ea404b;  */

void FUN_102ea4044(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea404c; end: 102ea409b;  */

undefined8 FUN_102ea404c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea409c; end: 102ea40df;  */

undefined1  [16] FUN_102ea409c(void)

{
  return ZEXT816(0x1105e2b90);
}



/* Entry: 102ea40e0; end: 102ea4107;  */

void FUN_102ea40e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ea4108; end: 102ea410f;  */

undefined8 FUN_102ea4108(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea4110; end: 102ea48b7;  */

void FUN_102ea4110(long *param_1,long param_2)

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
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100342834();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174(uStack_98);
  uVar6 = uStack_a0;
  func_0x000107c61174(uStack_a0);
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174(uStack_b0);
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar13 = uStack_c8;
  func_0x000107c6157c(uStack_c8);
  func_0x00010017da58();
  puVar11 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar13);
  *(undefined **)(param_2 + 0x18) = puVar11;
  puVar11 = PTR_PTR_1126ac758;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar11;
  func_0x000107c61174();
  uVar12 = auStack_70[0];
  func_0x000107c61174();
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174(puVar11);
  uVar13 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar11);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar13);
  uVar14 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar14);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar15 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar13);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f112f70);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar13);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar14 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f112fb0);
  func_0x000107c5a49c(uVar15);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61174();
  uVar13 = uVar15;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61574(uStack_c8);
  *(undefined8 *)(param_2 + 0x70) = uVar13;
  *param_1 = param_2;
  return;
}



/* Entry: 102ea48b8; end: 102ea48f3;  */

void FUN_102ea48b8(void)

{
  long unaff_x20;
  
  FUN_102ea4110(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 102ea48f4; end: 102ea4f9b;  */

void FUN_102ea48f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar3 = param_12;
  func_0x000107c6157c(param_12);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126ac758;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef12650);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19c30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef1b9a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar3 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar3 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef21bd0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1bf00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f112f70);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f112fb0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  puVar1 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61574(param_12);
  *(undefined **)(unaff_x20 + 0x70) = puVar1;
  return;
}



/* Entry: 102ea4f9c; end: 102ea5037;  */

void FUN_102ea4f9c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102ea5038; end: 102ea508b;  */

void FUN_102ea5038(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea508c; end: 102ea5093;  */

void FUN_102ea508c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x70);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102ea5094; end: 102ea50e3;  */

undefined8 FUN_102ea5094(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea50e4; end: 102ea5127;  */

undefined1  [16] FUN_102ea50e4(void)

{
  return ZEXT816(0x1105e2c58);
}



/* Entry: 102ea5128; end: 102ea514f;  */

void FUN_102ea5128(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102ea5150; end: 102ea5157;  */

undefined8 FUN_102ea5150(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102ea5158; end: 102ea5547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102ea5158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f26110;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f26118) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f26120);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f26128);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f26130) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f26138) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f26140) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f26148) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f26150) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f26158) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f26160) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f26168) = param_8;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,puVar2);
  func_0x000107c61180();
  FUN_102ea5548();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  return puVar5;
}



/* Entry: 102ea5548; end: 102ea56a3;  */

/* WARNING: Possible PIC construction at 0x000102ea5598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102ea55f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ea559c) */
/* WARNING: Removing unreachable block (ram,0x000102ea55f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea5548(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f26160);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4b2e0();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 102ea56a4; end: 102ea5777; -[SCPlusLensRemoteApiRequestHandler initWithModalUIContainerFuture:plusServices:subscribeScopeExposer:subscribeScopeServices:giftingScopeExposer:lensPlusFreemiumService:lensCarouselManager:lensCarouselSessionLogger:] */

void FUN_102ea56a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000102ea5350(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



/* Entry: 102ea5778; end: 102ea5803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ea5778(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uStack_40 = 0;
    uVar1 = 0;
    func_0x000100c70ba8(0);
    func_0x000107c5fc50(uVar2,&uStack_40,uVar1);
    uVar2 = *(undefined8 *)(param_2 + _DAT_112f26118);
    *(undefined8 *)(param_2 + _DAT_112f26118) = uStack_40;
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 102ea5804; end: 102ea635b;  */

undefined * FUN_102ea5804(undefined *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102ea5bb4);
    (*pcVar3)();
  }
  puVar4 = param_1;
  func_0x000107c428b4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c5faec();
  func_0x000107c61170(puVar4);
  func_0x000103a8b648(puVar5,param_2);
  puVar4 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  uVar2 = (uint)puVar5 & 0xff;
  puVar9 = puVar4;
  if (uVar2 == 1 || ((ulong)puVar5 & 0xff) == 0) {
    if (((ulong)puVar5 & 0xff) != 0) {
      func_0x000107c5faec();
      uVar12 = param_2;
      func_0x000107c61170(puVar4);
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      puVar4 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar11 = 0;
      goto LAB_102ea5b18;
    }
    func_0x000107c5faec();
    uVar12 = param_2;
    func_0x000107c61170(puVar4);
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    puVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000102ea5bb4(puVar9,param_2,puVar4,uVar12);
  }
  else {
    if (uVar2 != 2) {
      if (uVar2 != 3) {
        if (puVar4 == (undefined *)0x0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(param_2);
        }
        puVar5 = PTR_PTR_1126ae6b8;
        func_0x000107c61168(PTR_PTR_1126ae6b8);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
        puVar7 = PTR_PTR_1126b0278;
        func_0x000107c610f8(PTR_PTR_1126b0278);
        puVar8 = puVar9;
        func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(puVar9);
        func_0x000107c48368(puVar7);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar8);
        func_0x000107c4a8a4(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        return puVar5;
      }
      func_0x000107c5faec();
      uVar11 = param_2;
      func_0x000107c61170(puVar4);
      puVar4 = param_1;
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5faec();
      func_0x000107c61170(puVar4);
      func_0x000107c4e33c();
      func_0x000107c61180();
      puVar4 = param_1;
      func_0x000107c5f9e8();
      func_0x000107c61170(param_1);
      if (*(long *)(puVar4 + 0x10) == 0) {
        uVar13 = 0;
        uVar12 = 0;
      }
      else {
        func_0x000107c61434(puVar4);
        lVar6 = 0x644972657375;
        uVar10 = 0;
        func_0x000100029284();
        if ((uVar10 & 1) == 0) {
          uVar13 = 0;
          uVar12 = 0;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x38) + lVar6 * 0x10);
          uVar13 = *puVar1;
          uVar12 = puVar1[1];
          func_0x000107c61434(uVar12);
        }
        func_0x000107c6142c(puVar4);
      }
      func_0x000107c6142c(puVar4);
      func_0x000102ea610c(puVar9,param_2,puVar5,uVar11,uVar13,uVar12);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar11);
      goto LAB_102ea5b8c;
    }
    func_0x000107c5faec();
    uVar12 = param_2;
    func_0x000107c61170(puVar4);
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    puVar4 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uVar11 = 1;
LAB_102ea5b18:
    func_0x000102ea5ed0(puVar9,param_2,puVar4,uVar12,uVar11);
  }
  func_0x000107c6142c(param_2);
LAB_102ea5b8c:
  func_0x000107c6142c(uVar12);
  return puVar9;
}



/* Entry: 102ea635c; end: 102ea63bb; -[SCPlusLensRemoteApiRequestHandler handleRequest:] */

void FUN_102ea635c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102ea5804(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


