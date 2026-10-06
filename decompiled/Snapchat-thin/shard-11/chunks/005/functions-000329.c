/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10862cef8; end: 10862d1ab;  */

void FUN_10862cef8(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  code *pcVar2;
  ulong *puVar3;
  undefined *puVar4;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ulong uVar5;
  undefined8 uStack_a0;
  long lStack_98;
  ulong *puStack_90;
  long lStack_88;
  undefined1 auStack_78 [8];
  ulong *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong *puStack_50;
  undefined1 uStack_48;
  
  if (param_3 != 0) {
    do {
      FUN_10862d528();
    } while (extraout_w10 != 0);
    do {
      FUN_10862d528();
    } while (extraout_w10_00 != 0);
  }
  puStack_90 = (ulong *)0x0;
  lStack_88 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_a0 = param_2;
  lStack_98 = param_3;
  FUN_10862ce14(&puStack_50,&uStack_a0,&uStack_60);
  FUN_10862ce70(&puStack_90,&puStack_50);
  func_0x00010862d740();
  func_0x00010862d724();
  puStack_50 = puStack_90 + 8;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  puVar1 = puStack_90;
  puStack_70 = puStack_90;
  lStack_68 = lStack_88;
  if (lStack_88 != 0) {
    do {
      FUN_10862d528();
    } while (extraout_w10_01 != 0);
  }
  while (puVar3 = puVar1, func_0x00010862ceb0(), ((ulong)puVar3 & 1) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(puVar1 + 2,&puStack_50);
  }
  func_0x00010862c9b0(&puStack_70);
  if (puStack_90[0x10] != 0) {
    __ZNSt13exception_ptrC1ERKS_(auStack_78);
    __ZSt17rethrow_exceptionSt13exception_ptr(auStack_78);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10862d088);
    (*pcVar2)();
  }
  uVar5 = *puStack_90;
  func_0x000107c2798c(&puStack_50);
  func_0x00010862d67c();
  puVar4 = PTR_PTR_1126b9638;
  if ((uVar5 >> 0x20 & 1) == 0) {
    FUN_10862cdc4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaba0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x0001006aac78(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfbaec0(puVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010862d5b0();
  func_0x00010862d72c();
  _objc_release(puVar4);
  func_0x00010862c9b0(&uStack_a0);
  func_0x00010862d684();
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10862d1ac; end: 10862d1af;  */

undefined8 * FUN_10862d1ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5dba0;
  func_0x00010862d234(param_1 + 1);
  return param_1;
}



/* Entry: 10862d1b0; end: 10862d1c3;  */

void FUN_10862d1b0(void)

{
  FUN_10862d208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862d1c4; end: 10862d207;  */

void FUN_10862d1c4(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010862d600();
  if (param_3 != 0) {
    do {
      func_0x00010862d528();
    } while (extraout_w10 != 0);
  }
  FUN_10862cef8(param_1 + 8);
  func_0x00010862d650();
  return;
}



/* Entry: 10862d208; end: 10862d253;  */

undefined8 * FUN_10862d208(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5dba0;
  func_0x00010862d234(param_1 + 1);
  return param_1;
}



/* Entry: 10862d254; end: 10862d483;  */

void FUN_10862d254(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  
  uStack_78 = param_2;
  lStack_70 = param_3;
  if (param_3 != 0) {
    do {
      FUN_10862d528();
    } while (extraout_w10 != 0);
    do {
      FUN_10862d528();
    } while (extraout_w10_00 != 0);
  }
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x000104bf3ac4(&lStack_58,&uStack_68);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  for (; lStack_58 != lStack_50; lStack_58 = lStack_58 + 0xa8) {
    FUN_108635140(lStack_58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    func_0x00010862d5d4();
  }
  func_0x00010bf51e00(puVar1);
  func_0x00010862d5b0();
  func_0x00010862d72c();
  _objc_release(puVar1);
  func_0x000104be58b8(&lStack_58);
  func_0x000104be55fc(&uStack_68);
  func_0x000104be55fc(&uStack_78);
  func_0x000107c27b68(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10862d484; end: 10862d487;  */

undefined8 * FUN_10862d484(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5dbf0;
  func_0x00010862d508(param_1 + 1);
  return param_1;
}



/* Entry: 10862d488; end: 10862d49b;  */

void FUN_10862d488(void)

{
  FUN_10862d4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862d49c; end: 10862d4db;  */

void FUN_10862d49c(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010862d600();
  if (param_3 != 0) {
    do {
      func_0x00010862d528();
    } while (extraout_w10 != 0);
  }
  FUN_10862d254(param_1 + 8);
  func_0x00010862d634();
  return;
}



/* Entry: 10862d4dc; end: 10862d527;  */

undefined8 * FUN_10862d4dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5dbf0;
  func_0x00010862d508(param_1 + 1);
  return param_1;
}



/* Entry: 10862d528; end: 10862d77b;  */

void FUN_10862d528(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10862d77c; end: 10862d78f;  */

void FUN_10862d77c(void)

{
  FUN_10862d870();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862d790; end: 10862d79b;  */

long FUN_10862d790(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5dc78;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862d79c; end: 10862d7db;  */

void FUN_10862d79c(void)

{
  func_0x00010862d888();
  return;
}



/* Entry: 10862d7dc; end: 10862d86f;  */

long FUN_10862d7dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5dc78;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10862d870; end: 10862d893;  */

void FUN_10862d870(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5dcb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862d894; end: 10862d8f3;  */

void FUN_10862d894(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126daa98;
  _objc_alloc(PTR_PTR_1126daa98);
  func_0x000107c27f28(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0511e0(puVar1,param_2,param_1);
  FUN_10862d8f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862d8f4; end: 10862d8ff;  */

void FUN_10862d8f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862d900; end: 10862d977; -[SCNMessagingIdentityCallback initWithCpp:] */

undefined1 * FUN_10862d900(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10862dc44();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10862dc18(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10862d978; end: 10862da13; -[SCNMessagingIdentityCallback onFriendLinkFetchComplete:] */

void FUN_10862d978(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  _objc_retain(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  FUN_108629a94();
  uStack_28 = (undefined4)uVar1;
  uStack_24 = (undefined1)((ulong)uVar1 >> 0x20);
  (**(code **)(*plVar2 + 0x10))(plVar2,&uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 10862da14; end: 10862da6f; -[SCNMessagingIdentityCallback onError] */

void FUN_10862da14(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  return;
}



/* Entry: 10862da70; end: 10862da9b;  */

void FUN_10862da70(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10862db34();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862da9c; end: 10862daef; -[SCNMessagingIdentityCallback .cxx_destruct] */

void FUN_10862da9c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5dd58;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10862dc18((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10862daf0; end: 10862db33; -[SCNMessagingIdentityCallback .cxx_construct] */

undefined8 * FUN_10862daf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10862dc44();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10862db34; end: 10862dba7;  */

void FUN_10862db34(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5dd58;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10862dc44();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10862dba8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862dc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862dba8; end: 10862dc17;  */

void FUN_10862dba8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daaa0;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10862dc44();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10862dc18(&uStack_30);
  return;
}



/* Entry: 10862dc18; end: 10862dc43;  */

long FUN_10862dc18(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10862dc44; end: 10862dc77;  */

void FUN_10862dc44(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10862dc78; end: 10862dc8b;  */

void FUN_10862dc78(void)

{
  FUN_10862e61c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862dc8c; end: 10862dc97;  */

long FUN_10862dc8c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5ddc0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010862e638();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862dc98; end: 10862dcd3;  */

void FUN_10862dc98(void)

{
  func_0x00010862e6b0();
  return;
}



/* Entry: 10862dcd4; end: 10862dd67;  */

void FUN_10862dcd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x0001006a7d84(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862da70(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa6c40(uVar2);
  func_0x00010862e638();
  func_0x000107c31ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862dd68; end: 10862df8f;  */

void FUN_10862dd68(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  char *pcStack_50;
  undefined8 *puStack_48;
  
  lVar1 = param_2;
  _objc_autoreleasePoolPush();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c285c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaa460(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862e6a4();
  _objc_retain(param_4);
  puStack_70 = &uStack_78;
  uStack_78 = 0;
  uStack_68 = 0x3812000000;
  pcStack_60 = FUN_10862e020;
  uStack_58 = 0x10862e030;
  pcStack_50 = "";
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110a5def8;
  puVar3 = (undefined8 *)0xb8;
  __Znwm();
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar4 = puVar3 + 3;
  puVar3[4] = 0;
  *puVar4 = 0;
  *puVar3 = &PTR_FUN_110a5df18;
  puVar3[6] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0x3cb0b1bb;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0x32aaaba7;
  puVar3[0xf] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = 0;
  puVar3[0x15] = 0;
  puVar3[0x14] = 0;
  puVar3[0x16] = 0;
  puVar2[1] = puVar4;
  puVar2[2] = puVar3;
  puVar2[3] = puVar4;
  puVar2[4] = puVar3;
  do {
    func_0x00010862e67c();
  } while (extraout_w11 != 0);
  *puVar2 = &PTR_FUN_110a5deb0;
  puStack_48 = puVar2;
  do {
    func_0x00010862e67c();
  } while (extraout_w11_00 != 0);
  do {
    func_0x00010862e67c();
  } while (extraout_w11_01 != 0);
  *param_1 = extraout_x9;
  param_1[1] = puVar3;
  func_0x00010862e640();
  func_0x00010c26d0c0(param_4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010862e698();
  puVar2 = puStack_48;
  puStack_48 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x00010862e62c();
  }
  func_0x000107c31ac8();
  func_0x000107c31ac8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862df90; end: 10862e01f;  */

long FUN_10862df90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5ddc0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010862e638();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10862e020; end: 10862e04f;  */

void FUN_10862e020(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  return;
}



/* Entry: 10862e050; end: 10862e2cf;  */

undefined8 FUN_10862e050(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 *puStack_58;
  undefined8 uStack_50;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x30);
  func_0x00010bfc1d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862aac0(auStack_90);
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  FUN_10862e548(auStack_68,lVar2 + 8,&uStack_78);
  FUN_10862e5a4(&puStack_58,auStack_68);
  FUN_10862e394(auStack_68);
  FUN_10862e394(&uStack_78);
  puVar1 = puStack_58;
  __ZNSt3__15mutex4lockEv(puStack_58 + 10);
  puVar3 = puStack_58;
  if (*(char *)(puStack_58 + 3) == '\x01') {
    func_0x00010862e5e4(puStack_58);
    func_0x00010862e660();
    puVar3 = puStack_58;
  }
  else {
    *puStack_58 = 0;
    puStack_58[1] = 0;
    puStack_58[2] = 0;
    func_0x00010862e660();
    *(undefined1 *)(puVar3 + 3) = 1;
  }
  plVar4 = (long *)puVar3[0x13];
  puVar3[0x13] = 0;
  __ZNSt3__15mutex6unlockEv(puVar1 + 10);
  if (plVar4 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(puStack_58 + 4);
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,&puStack_58);
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  FUN_10862e394(&puStack_58);
  func_0x000104be4b28(auStack_90);
  func_0x00010862e638();
  func_0x000107c31ac8();
  return 0;
}



/* Entry: 10862e2d0; end: 10862e2d3;  */

undefined8 * FUN_10862e2d0(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a5def8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10862e468(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_10862e394(param_1 + 3);
  FUN_10862e394(param_1 + 1);
  return param_1;
}



/* Entry: 10862e2d4; end: 10862e2e7;  */

void FUN_10862e2d4(void)

{
  FUN_10862e3bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862e2e8; end: 10862e2eb;  */

undefined8 * FUN_10862e2e8(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a5def8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10862e468(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_10862e394(param_1 + 3);
  FUN_10862e394(param_1 + 1);
  return param_1;
}



/* Entry: 10862e2ec; end: 10862e2ff;  */

void FUN_10862e2ec(void)

{
  FUN_10862e3bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862e300; end: 10862e303;  */

void FUN_10862e300(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5df18;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862e304; end: 10862e317;  */

void FUN_10862e304(void)

{
  FUN_10862e360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862e318; end: 10862e35f;  */

void FUN_10862e318(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  if (lVar1 != 0) {
    func_0x00010862e62c();
  }
  __ZNSt13exception_ptrD1Ev(param_1 + 0xa8);
  __ZNSt3__15mutexD1Ev(param_1 + 0x68);
  __ZNSt3__118condition_variableD1Ev(param_1 + 0x38);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    func_0x000104be4b28();
  }
  return;
}



/* Entry: 10862e360; end: 10862e373;  */

void FUN_10862e360(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862e374; end: 10862e393;  */

void FUN_10862e374(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104be4b28();
  }
  return;
}



/* Entry: 10862e394; end: 10862e3bb;  */

long FUN_10862e394(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10862e3bc; end: 10862e467;  */

undefined8 * FUN_10862e3bc(undefined8 *param_1)

{
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  undefined1 auStack_28 [8];
  
  *param_1 = &PTR_FUN_110a5def8;
  if (param_1[1] != 0) {
    ppuStack_38 = &PTR_DAT_1107e6938;
    ppuStack_30 = &PTR_DAT_1107e6938;
    func_0x000104bdfe3c(auStack_28,&ppuStack_30);
    FUN_10862e468(param_1,auStack_28);
    __ZNSt13exception_ptrD1Ev(auStack_28);
    __ZNSt9exceptionD2Ev(&ppuStack_30);
    __ZNSt9exceptionD2Ev(&ppuStack_38);
  }
  FUN_10862e394(param_1 + 3);
  FUN_10862e394(param_1 + 1);
  return param_1;
}



/* Entry: 10862e468; end: 10862e547;  */

void FUN_10862e468(long param_1,undefined8 param_2)

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
  FUN_10862e548(auStack_40,param_1 + 8,&uStack_50);
  FUN_10862e5a4(alStack_30,auStack_40);
  FUN_10862e394(auStack_40);
  func_0x00010862e640();
  lVar1 = alStack_30[0];
  __ZNSt3__15mutex4lockEv(alStack_30[0] + 0x50);
  __ZNSt13exception_ptraSERKS_(alStack_30[0] + 0x90,param_2);
  plVar2 = *(long **)(alStack_30[0] + 0x98);
  *(undefined8 *)(alStack_30[0] + 0x98) = 0;
  __ZNSt3__15mutex6unlockEv(lVar1 + 0x50);
  if (plVar2 == (long *)0x0) {
    __ZNSt3__118condition_variable10notify_allEv(alStack_30[0] + 0x20);
  }
  else {
    (**(code **)(*plVar2 + 0x10))(plVar2,alStack_30);
    func_0x00010862e650();
  }
  FUN_10862e394(alStack_30);
  return;
}



/* Entry: 10862e548; end: 10862e5a3;  */

void FUN_10862e548(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = param_2;
  __ZNSt3__112__get_sp_mutEPKv();
  __ZNSt3__18__sp_mut4lockEv();
  uVar2 = *param_3;
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = param_3[1];
  *param_2 = uVar2;
  param_3[1] = uVar4;
  *param_3 = uVar3;
  __ZNSt3__18__sp_mut6unlockEv(puVar1);
  uVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = uVar2;
  *param_3 = 0;
  param_3[1] = 0;
  return;
}



/* Entry: 10862e5a4; end: 10862e61b;  */

undefined8 * FUN_10862e5a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  func_0x00010862e640();
  return param_1;
}



/* Entry: 10862e61c; end: 10862e6bb;  */

void FUN_10862e61c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5de00;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862e6bc; end: 10862e733; -[SCNMessagingInitializeContextInfoCallback initWithCpp:] */

undefined1 * FUN_10862e6bc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126fd2b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_10862e9dc();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_10862e9b0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10862e734; end: 10862e7ff; -[SCNMessagingInitializeContextInfoCallback onInitializeContextInfoComplete:localMessageContent:] */

void FUN_10862e734(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_3b8 [904];
  
  _objc_retain(param_4);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_10862f7c0(auStack_3b8,param_4);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3,auStack_3b8);
  func_0x000104bee3a8(auStack_3b8);
  _objc_release(param_4);
  return;
}



/* Entry: 10862e800; end: 10862e82b;  */

void FUN_10862e800(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10862e8c4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862e82c; end: 10862e87f; -[SCNMessagingInitializeContextInfoCallback .cxx_destruct] */

void FUN_10862e82c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5df58;
    func_0x000107c31708(param_1 + 8,&ppuStack_28);
  }
  FUN_10862e9b0((long *)(param_1 + 0x18));
  func_0x000107c27e30(param_1 + 8);
  return;
}



/* Entry: 10862e880; end: 10862e8c3; -[SCNMessagingInitializeContextInfoCallback .cxx_construct] */

undefined8 * FUN_10862e880(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x000107c31704();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_10862e9dc();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 10862e8c4; end: 10862e93b;  */

void FUN_10862e8c4(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_110a5df58;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_10862e9dc();
    } while (extraout_w10 != 0);
  }
  func_0x000107c31700(&ppuStack_28,&uStack_40,FUN_10862e93c);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010862e9f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862e93c; end: 10862e9af;  */

void FUN_10862e93c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_1126daaa8;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_10862e9dc();
    } while (extraout_w10 != 0);
  }
  func_0x00010c0063c0();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_10862e9b0(&uStack_30);
  return;
}



/* Entry: 10862e9b0; end: 10862e9db;  */

long FUN_10862e9b0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10862e9dc; end: 10862ea07;  */

void FUN_10862e9dc(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 10862ea08; end: 10862ea1b;  */

void FUN_10862ea08(void)

{
  FUN_10862ebcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862ea1c; end: 10862ea27;  */

long FUN_10862ea1c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5dfc0;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    func_0x00010862ebe8();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862ea28; end: 10862ea67;  */

void FUN_10862ea28(void)

{
  func_0x00010862ebdc();
  return;
}



/* Entry: 10862ea68; end: 10862eb3b;  */

void FUN_10862ea68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_1086323c4(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ffe4(param_3);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862e800(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c064800(uVar2);
  _objc_release(param_4);
  func_0x00010862ebe8();
  func_0x000107c31ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862eb3c; end: 10862ebcb;  */

long FUN_10862eb3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5dfc0;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    func_0x00010862ebe8();
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10862ebcc; end: 10862ebef;  */

void FUN_10862ebcc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5e000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862ebf0; end: 10862ecc7;  */

void FUN_10862ebf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c244980(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10861c36c(auStack_48);
  func_0x00010c0fb120(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ecc8(auStack_60);
  FUN_10862eefc(param_1,auStack_48,auStack_60);
  func_0x000104bee7dc(auStack_60);
  func_0x00010862ef5c();
  func_0x000107c27a04(auStack_48);
  _objc_release(uVar1);
  func_0x00010862ef40();
  return;
}



/* Entry: 10862ecc8; end: 10862ee3b;  */

void FUN_10862ecc8(undefined8 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 auStack_138 [24];
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar2 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x000105291bb8(param_1,puVar2);
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  puVar2 = param_2;
  _objc_retain();
  func_0x00010862ef48();
  if (puVar2 != (undefined1 *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined1 *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + (long)puVar9 * 8);
        _objc_retain(uVar7);
        FUN_1086348f0(auStack_138,uVar7);
        func_0x000105291ea0(param_1,auStack_138);
        puVar3 = auStack_138;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010862ef5c();
        puVar9 = puVar9 + 1;
      } while (puVar9 < puVar2);
      func_0x00010862ef48();
      puVar2 = puVar3;
    } while (puVar3 != (undefined1 *)0x0);
  }
  plVar4 = (long *)0x0;
  func_0x00010862ef40();
  func_0x00010862ef40();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x00010862ef40();
    func_0x000104bee7dc(param_1);
    func_0x00010862ef40();
    __Unwind_Resume();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = plVar4[1];
    for (lVar8 = *plVar4; lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
      lVar6 = lVar8;
      FUN_108634960(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(lVar6);
    }
    func_0x00010bf51e00(puVar5);
    func_0x00010862ef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  return;
}



/* Entry: 10862ee3c; end: 10862eefb;  */

void FUN_10862ee3c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf0a0e0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                      (param_1[1] - *param_1) / 0x18);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1[1];
  for (lVar4 = *param_1; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
    lVar3 = lVar4;
    FUN_108634960(lVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2,param_2,lVar3);
    _objc_release(lVar3);
  }
  func_0x00010bf51e00(puVar2);
  func_0x00010862ef40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10862eefc; end: 10862ef63;  */

void FUN_10862eefc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
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
  return;
}



/* Entry: 10862ef64; end: 10862f0e3;  */

void FUN_10862ef64(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27f64(auStack_70);
  uVar2 = param_2;
  func_0x00010c0f4aa0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862f0e4(auStack_90);
  uVar3 = param_2;
  func_0x00010bf5a660(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000107c28134();
  func_0x00010bf43000(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c285bc(auStack_b0);
  FUN_10862f198(param_1,auStack_70,auStack_90,uVar4,param_3 & 0xff,auStack_b0);
  func_0x000107c279dc(auStack_b0);
  _objc_release(param_2);
  _objc_release(uVar3);
  func_0x000104bee748(auStack_90);
  _objc_release(uVar2);
  func_0x000107c279a4(auStack_70);
  _objc_release(uVar1);
  FUN_10862f21c();
  return;
}



/* Entry: 10862f0e4; end: 10862f167;  */

void FUN_10862f0e4(undefined8 *param_1,long param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  _objc_retain();
  if (param_2 == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_10861c36c(&uStack_40,param_2);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    param_1[2] = uStack_30;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_40 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    func_0x000107c27a04(&uStack_40);
  }
  FUN_10862f21c();
  return;
}



/* Entry: 10862f168; end: 10862f197;  */

void FUN_10862f168(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c285c4();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10862f198; end: 10862f21b;  */

undefined8 *
FUN_10862f198(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined1 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  func_0x00010528d0b0(param_1 + 4,param_3);
  param_1[8] = param_4;
  param_1[9] = param_5;
  func_0x000107c27afc(param_1 + 10,param_6);
  return param_1;
}



/* Entry: 10862f21c; end: 10862f223;  */

void FUN_10862f21c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862f224; end: 10862f283;  */

void FUN_10862f224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126daab8;
  _objc_alloc(PTR_PTR_1126daab8);
  func_0x0001006a7d84(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c034280(puVar1,param_2,param_1);
  FUN_10862f284();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862f284; end: 10862f293;  */

void FUN_10862f284(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862f294; end: 10862f2a7;  */

void FUN_10862f294(void)

{
  FUN_10862f320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862f2a8; end: 10862f2e7;  */

void FUN_10862f2a8(void)

{
  func_0x00010862f330();
  return;
}



/* Entry: 10862f2e8; end: 10862f31f;  */

void FUN_10862f2e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862f320; end: 10862f33b;  */

void FUN_10862f320(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a5e128;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862f33c; end: 10862f3ab;  */

void FUN_10862f33c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00010bfe5d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(&uStack_40);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  func_0x000107c27914(&uStack_40);
  _objc_release(param_2);
  return;
}



/* Entry: 10862f3ac; end: 10862f40b;  */

void FUN_10862f3ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d7ab8;
  _objc_alloc(PTR_PTR_1126d7ab8);
  func_0x000107c28044(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01b1c0(puVar1,param_2,param_1);
  FUN_10862f40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10862f40c; end: 10862f417;  */

void FUN_10862f40c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10862f418; end: 10862f4cf;  */

void FUN_10862f418(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _objc_retain(param_2);
    ppuStack_38 = &PTR_DAT_110a5e220;
    lStack_40 = param_2;
    func_0x000107c316f4(&uStack_30,&ppuStack_38,&lStack_40,FUN_10862f4d0);
    uVar2 = uStack_28;
    uVar1 = uStack_30;
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x000107c27d28(&uStack_30);
    _objc_release(lStack_40);
    param_1[1] = uVar2;
    *param_1 = uVar1;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_10862f77c(&uStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10862f4d0; end: 10862f5cf;  */

void FUN_10862f4d0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)*param_2;
  puVar4 = (undefined8 *)0x38;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110a5e260;
  puVar4[3] = &PTR_DAT_110a5e2e0;
  puVar5 = puVar8;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar6 = puVar5;
  func_0x000107c316f8();
  lVar7 = puVar6[1];
  uVar9 = *puVar6;
  puVar4[5] = puVar6[1];
  puVar4[4] = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  _objc_retain(puVar8);
  puVar4[6] = puVar8;
  _objc_autoreleasePoolPop(puVar5);
  _objc_release(puVar8);
  puVar4[3] = &PTR_FUN_110a5e2b0;
  *param_1 = puVar4 + 3;
  param_1[1] = puVar4;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_10862f77c(&uStack_50);
  return;
}



/* Entry: 10862f5d0; end: 10862f5d3;  */

void FUN_10862f5d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862f5d4; end: 10862f5e7;  */

void FUN_10862f5d4(void)

{
  FUN_10862f76c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10862f5e8; end: 10862f5f3;  */

long FUN_10862f5e8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e220;
    _objc_retain(lVar4);
    func_0x000107c316fc(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  func_0x000107c27f24(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 10862f5f4; end: 10862f633;  */

void FUN_10862f5f4(void)

{
  func_0x00010862f7b4();
  return;
}



/* Entry: 10862f634; end: 10862f69f;  */

void FUN_10862f634(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_10861bf78(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e2fc0(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862f6a0; end: 10862f6d7;  */

void FUN_10862f6a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  func_0x00010c0e3f00(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(lVar1);
  return;
}



/* Entry: 10862f6d8; end: 10862f76b;  */

long FUN_10862f6d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_110a5e220;
    _objc_retain(lVar3);
    func_0x000107c316fc(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  func_0x000107c27f24(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 10862f76c; end: 10862f77b;  */

void FUN_10862f76c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a5e260;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10862f77c; end: 10862f7a7;  */

long FUN_10862f77c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10862f7a8; end: 10862f7bf;  */

void FUN_10862f7a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10862f7c0; end: 10862fc5f;  */

void FUN_10862f7c0(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_3d8 [32];
  undefined1 auStack_3b8 [64];
  undefined1 uStack_378;
  undefined1 auStack_370 [48];
  undefined1 auStack_340 [32];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [32];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [464];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28040(auStack_c0);
  uVar2 = param_2;
  func_0x00010bf4dac0();
  uVar3 = param_2;
  func_0x00010c0fe1c0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1086349cc(auStack_290);
  uVar4 = param_2;
  func_0x00010c09dc00();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862fc60(auStack_2a8);
  uVar5 = param_2;
  func_0x00010c14ab60();
  uVar6 = param_2;
  func_0x00010bfeba20();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862fd5c(auStack_2c0);
  uVar7 = param_2;
  func_0x00010bf01b00();
  uVar8 = param_2;
  func_0x00010c11ecc0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x000107c28134();
  func_0x00010bfa3b40();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_2e0);
  uVar10 = param_2;
  func_0x00010bf1fda0();
  uVar11 = param_2;
  func_0x00010c0cba20();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862fe58(auStack_320);
  uVar12 = param_2;
  func_0x00010c12a260();
  _objc_retainAutoreleasedReturnValue();
  FUN_10862feb4(auStack_340);
  func_0x00010bf24ae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ff28(auStack_370);
  uVar13 = param_2;
  func_0x00010bf9df20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar13 == 0) {
    auStack_3b8[0] = 0;
    uStack_378 = 0;
  }
  else {
    FUN_108623f0c(auStack_a8,uVar13);
    func_0x00010528d88c(auStack_3b8,auStack_a8);
    func_0x000104bee430(auStack_a8);
  }
  func_0x000108630544();
  uVar13 = param_2;
  func_0x00010c0cb280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar13 != 0) {
    _objc_retain(uVar13);
    func_0x00010c067fc0();
    func_0x000108630554();
  }
  func_0x00010c2421a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10862ff80(auStack_a8);
  func_0x00010c09dd60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c28248(auStack_3d8);
  func_0x00010528ce14(param_1,auStack_c0,uVar2,auStack_290,auStack_2a8,uVar5,auStack_2c0,
                      uVar7 & 0xffffffff,uVar9,param_3 & 0xff,auStack_2e0,(char)uVar10);
  func_0x000107c279c4(auStack_3d8);
  func_0x00010863059c();
  func_0x000108630594();
  func_0x000108630554();
  func_0x000104bee410(auStack_3b8);
  func_0x000108630544();
  func_0x00010069ab0c(auStack_370);
  func_0x000108630534();
  func_0x00010069b2d8(auStack_340);
  _objc_release(uVar12);
  func_0x00010069b1f4(auStack_320);
  _objc_release(uVar11);
  func_0x000107c279c4(auStack_2e0);
  func_0x00010863055c();
  _objc_release(uVar8);
  func_0x000104bee630(auStack_2c0);
  _objc_release(uVar6);
  func_0x000104be1594(auStack_2a8);
  _objc_release(uVar4);
  func_0x000104bee6b8(auStack_290);
  _objc_release(uVar3);
  func_0x000107c27914(auStack_c0);
  _objc_release(uVar1);
  func_0x0001086304f8();
  return;
}



/* Entry: 10862fc60; end: 10862fd5b;  */

void FUN_10862fc60(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *puVar3;
  undefined1 auStack_2d8 [56];
  undefined1 auStack_278 [232];
  undefined1 auStack_138 [232];
  
  func_0x0001086304b0();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x0001086305a4();
  puVar1 = unaff_x20;
  func_0x00010528d190();
  func_0x0001086304e4();
  func_0x00010863049c();
  while (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    do {
      func_0x00010863056c();
      if (!(bool)in_ZR) {
        func_0x0001086305ac();
      }
      func_0x00010863050c();
      puVar2 = unaff_x22;
      FUN_10862f33c(auStack_138);
      func_0x00010863057c();
      func_0x00010528d3e4();
      func_0x00010863054c();
      func_0x000108630534();
      puVar3 = (undefined8 *)((long)puVar3 + 1);
      in_ZR = puVar3 == puVar1;
    } while (puVar3 < puVar1);
    func_0x00010863049c();
    puVar1 = puVar2;
  }
  func_0x0001086304f8();
  func_0x0001086304f8();
  func_0x00010863051c();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001086304f8();
    func_0x000104be1594();
    func_0x0001086304f8();
    func_0x000108630564();
    func_0x0001086304b0();
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    *unaff_x20 = 0;
    func_0x0001086305a4();
    puVar1 = unaff_x20;
    func_0x00010528d490();
    func_0x0001086304e4();
    func_0x00010863049c();
    while (puVar1 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      do {
        func_0x00010863056c();
        if (!(bool)in_ZR) {
          func_0x0001086305ac();
        }
        func_0x00010863050c();
        puVar2 = unaff_x22;
        func_0x000107c28040(auStack_278);
        func_0x00010863057c();
        func_0x00010528d604();
        func_0x00010863054c();
        func_0x000108630534();
        puVar3 = (undefined8 *)((long)puVar3 + 1);
        in_ZR = puVar3 == puVar1;
      } while (puVar3 < puVar1);
      func_0x00010863049c();
      puVar1 = puVar2;
    }
    func_0x0001086304f8();
    func_0x0001086304f8();
    func_0x00010863051c();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001086304f8();
      func_0x000104bee630();
      func_0x0001086304f8();
      func_0x000108630564();
      func_0x000108630500();
      if (unaff_x19 == 0) {
        *(undefined1 *)unaff_x20 = 0;
        *(undefined1 *)(unaff_x20 + 7) = 0;
      }
      else {
        FUN_10863274c(auStack_2d8);
        func_0x00010863057c();
        func_0x00010528d6b0();
        func_0x000104be1498(auStack_2d8);
      }
      func_0x0001086304f8();
      return;
    }
  }
  return;
}



/* Entry: 10862fd5c; end: 10862fe57;  */

void FUN_10862fd5c(void)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *puVar3;
  undefined1 auStack_198 [56];
  undefined1 auStack_138 [232];
  
  func_0x0001086304b0();
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  func_0x0001086305a4();
  puVar1 = unaff_x20;
  func_0x00010528d490();
  func_0x0001086304e4();
  func_0x00010863049c();
  while (puVar1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
    do {
      func_0x00010863056c();
      if (!(bool)in_ZR) {
        func_0x0001086305ac();
      }
      func_0x00010863050c();
      puVar2 = unaff_x22;
      func_0x000107c28040(auStack_138);
      func_0x00010863057c();
      func_0x00010528d604();
      func_0x00010863054c();
      func_0x000108630534();
      puVar3 = (undefined8 *)((long)puVar3 + 1);
      in_ZR = puVar3 == puVar1;
    } while (puVar3 < puVar1);
    func_0x00010863049c();
    puVar1 = puVar2;
  }
  func_0x0001086304f8();
  func_0x0001086304f8();
  func_0x00010863051c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001086304f8();
  func_0x000104bee630();
  func_0x0001086304f8();
  func_0x000108630564();
  func_0x000108630500();
  if (unaff_x19 == 0) {
    *(undefined1 *)unaff_x20 = 0;
    *(undefined1 *)(unaff_x20 + 7) = 0;
  }
  else {
    FUN_10863274c(auStack_198);
    func_0x00010863057c();
    func_0x00010528d6b0();
    func_0x000104be1498(auStack_198);
  }
  func_0x0001086304f8();
  return;
}



/* Entry: 10862fe58; end: 10862feb3;  */

void FUN_10862fe58(void)

{
  long unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_58 [56];
  
  func_0x000108630500();
  if (unaff_x19 == 0) {
    *unaff_x20 = 0;
    unaff_x20[0x38] = 0;
  }
  else {
    FUN_10863274c(auStack_58);
    func_0x00010863057c();
    func_0x00010528d6b0();
    func_0x000104be1498(auStack_58);
  }
  func_0x0001086304f8();
  return;
}


