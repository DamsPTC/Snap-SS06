/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1006075cc; end: 1006075eb;  */

undefined1 * FUN_1006075cc(void)

{
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000070 = 0;
  FUN_1006075ec(&stack0x00000060,&stack0x00000088,&stack0x000000b8,1);
  return (undefined1 *)&stack0x00000060;
}



/* Entry: 1006075ec; end: 100607633;  */

void FUN_1006075ec(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x0001006075dc();
    FUN_100607668();
    FUN_1006076bc();
    FUN_100607754();
  }
  func_0x000100607834();
  return;
}



/* Entry: 100607634; end: 100607667;  */

undefined8 * FUN_100607634(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1006075ec(param_1,param_2,param_2 + param_3 * 0x30,param_3);
  return param_1;
}



/* Entry: 100607668; end: 100607673;  */

long * FUN_100607668(long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  
  if (param_4 < 0x555555555555556) {
    plVar1 = param_1 + 2;
    FUN_100164e68();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_4 * 6);
    return plVar1;
  }
  func_0x000105394cf0();
  return param_1;
}



/* Entry: 100607674; end: 1006076bb;  */

void FUN_100607674(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0x555555555555556) {
    plVar1 = param_1 + 2;
    FUN_100164e68();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 6);
    return;
  }
  func_0x000105394cf0();
  return;
}



/* Entry: 1006076bc; end: 1006076f7;  */

void FUN_1006076bc(void)

{
  return;
}



/* Entry: 1006076f8; end: 10060773f;  */

void FUN_1006076f8(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001006076d0();
  while (unaff_x21 != unaff_x19) {
    FUN_100607788();
    func_0x0001006077d0();
  }
  func_0x0001006077e4();
  return;
}



/* Entry: 100607740; end: 100607753;  */

void FUN_100607740(void)

{
  FUN_1006076f8();
  return;
}



/* Entry: 100607754; end: 100607787;  */

void FUN_100607754(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_100607740();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 100607788; end: 100607793;  */

void FUN_100607788(void)

{
  func_0x000100603768();
  func_0x000107c60c94();
  FUN_1006077c4();
  return;
}



/* Entry: 100607794; end: 1006077c3;  */

void FUN_100607794(void)

{
  func_0x000100603768();
  func_0x000107c60c94();
  FUN_1006077c4();
  return;
}



/* Entry: 1006077c4; end: 1006077f3;  */

void FUN_1006077c4(long param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5__110346330)
            (param_1 + 0x18,unaff_x20 + 0x18);
  return;
}



/* Entry: 1006077f4; end: 100607823;  */

long FUN_1006077f4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    func_0x000105394cfc(param_1);
  }
  return param_1;
}



/* Entry: 100607824; end: 100607843;  */

void FUN_100607824(void)

{
  return;
}



/* Entry: 100607844; end: 10060786f;  */

long FUN_100607844(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10015b854(param_1);
  }
  return param_1;
}



/* Entry: 100607870; end: 1006078ab;  */

void FUN_100607870(void)

{
  return;
}



/* Entry: 1006078ac; end: 1006078eb;  */

void FUN_1006078ac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000100607898();
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_100606fd8(param_1 + 0x20,param_2 + 0x20);
  return;
}



/* Entry: 1006078ec; end: 100607997;  */

void FUN_1006078ec(void)

{
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  *(undefined8 *)(unaff_x23 + 0x60) = in_stack_00000048;
  *(undefined8 *)(unaff_x23 + 0x58) = in_stack_00000040;
  return;
}



/* Entry: 100607998; end: 1006079b7;  */

void FUN_100607998(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1006079d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1006079b8; end: 1006079d3;  */

void FUN_1006079b8(void)

{
  long unaff_x19;
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x0001006079c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(unaff_x29 + -0x90))(unaff_x19 + 8);
  return;
}



/* Entry: 1006079d4; end: 1006079f7;  */

long FUN_1006079d4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x0001006079c8();
  FUN_1006079f8();
  FUN_100572708();
  FUN_1005fce88();
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1006079f8; end: 1006079ff;  */

long FUN_1006079f8(void)

{
  long unaff_x19;
  long lStack_28;
  
  lStack_28 = unaff_x19 + 0x58;
  FUN_10015b854(&lStack_28);
  return unaff_x19 + 0x58;
}



/* Entry: 100607a00; end: 100607a1f;  */

long FUN_100607a00(void)

{
  long lVar1;
  long unaff_x19;
  
  FUN_100572708();
  FUN_1005fce88();
  lVar1 = unaff_x19;
  FUN_1000dfb88();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 100607a20; end: 100607a63;  */

undefined8 FUN_100607a20(long param_1)

{
  undefined8 in_stack_00000008;
  
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return in_stack_00000008;
}



/* Entry: 100607a64; end: 100607ab7; -[SCNMessagingFeedManager .cxx_destruct] */

void FUN_100607a64(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_110a5c5a0;
    FUN_1004a52a0(param_1 + 8,&ppuStack_28);
  }
  func_0x000100606c58((long *)(param_1 + 0x18));
  FUN_1004a5588(param_1 + 8);
  return;
}



/* Entry: 100607ab8; end: 100607c2b; -[SCNativeCommunityFeedManager initWithNativeSession:feedDataUpdateAnnouncer:notificationPool:messagingExperimentService:] */

undefined1 *
FUN_100607ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  puStack_48 = PTR_PTR_1126e8da0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 0x38) = 0;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c3d740(*(undefined8 *)((long)puVar1 + 0x10));
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x28) = 1;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 0x30));
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ba480;
    func_0x000107c610f4();
    func_0x000107c477b0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100607c2c; end: 100607ce7; -[SCCommunityFeedLoadingStatusStream initWithMessagingExperimentService:] */

undefined1 * FUN_100607c2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8d88;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR_PTR_1126ba478;
    func_0x000107c610f4(PTR_PTR_1126ba478);
    func_0x000107c474a8();
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 8));
    puVar3 = PTR_PTR_1126ba480;
    func_0x000107c3b2c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100607ce8; end: 100607d33; -[SCFriendsFeedLoadingStatusResult initWithLoadingStatus:triggerType:] */

void FUN_100607ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703b20;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 100607d34; end: 100607d3b; +[SCCommunityFeedLoadingStatusStream _createLoadingStatusStream:] */

void FUN_100607d34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 100607d3c; end: 100607dd7; -[SCNativeSnapManager initWithNativeSession:nativePostSnapInteractionEvents:] */

undefined1 *
FUN_100607d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e8df0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100607dd8; end: 100607eb7; -[SCNativeConversationAdsManager initWithNativeSession:sponsoredSnapFeedLifecycleEventObservable:sponsoredSnapFeedActiveBannerObservable:] */

undefined1 *
FUN_100607dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e8dd8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100607eb8; end: 100607ec3;  */

long FUN_100607eb8(void)

{
  long lVar1;
  long unaff_x29;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  lVar1 = unaff_x29 + -0x90;
  puStack_18 = &stack0x00000068;
  FUN_100607ec4(lVar1,puStack_18,&UNK_10dd5b8f9,&puStack_18,&uStack_19);
  return lVar1 + 0x28;
}



/* Entry: 100607ec4; end: 1006080ff;  */

undefined1  [16]
FUN_100607ec4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  plVar5 = param_1 + 3;
  FUN_100102e7c();
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar8 = (long)plVar7 - 1;
    if (((ulong)plVar7 & uVar8) == 0) {
      unaff_x27 = (long *)(uVar8 & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar4 * (long)plVar7);
      }
    }
    plVar6 = *(long **)(*param_1 + (long)unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_100607f94;
          plVar2 = (long *)plVar6[1];
          if (plVar2 != plVar5) break;
          plVar2 = plVar6 + 2;
          FUN_1000e107c(plVar2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            uVar1 = 0;
            goto LAB_1006080cc;
          }
        }
        if (((ulong)plVar7 & uVar8) == 0) {
          plVar2 = (long *)((ulong)plVar2 & uVar8);
        }
        else if (plVar7 <= plVar2) {
          uVar4 = 0;
          if (plVar7 != (long *)0x0) {
            uVar4 = (ulong)plVar2 / (ulong)plVar7;
          }
          plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar7);
        }
      } while (plVar2 == unaff_x27);
    }
  }
LAB_100607f94:
  FUN_100627558(aplStack_78,param_1,plVar5,param_3,param_4,param_5);
  if ((plVar7 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar7 < (float)(param_1[3] + 1))
     ) {
    uVar8 = 1;
    if ((long *)0x2 < plVar7) {
      uVar8 = (ulong)(((ulong)plVar7 & (long)plVar7 - 1U) != 0);
    }
    uVar8 = uVar8 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar4) {
      uVar8 = uVar4;
    }
    FUN_10028b120(param_1,uVar8);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar7 - 1U & (ulong)plVar5);
    }
    else {
      unaff_x27 = plVar5;
      if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        unaff_x27 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
    }
  }
  plVar6 = aplStack_78[0];
  lVar3 = *param_1;
  plVar5 = *(long **)(lVar3 + (long)unaff_x27 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = param_1 + 2;
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
    *(long **)(lVar3 + (long)unaff_x27 * 8) = plVar5;
    if (*aplStack_78[0] != 0) {
      plVar5 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar7 & (long)plVar7 - 1U) == 0) {
        plVar5 = (long *)((ulong)plVar5 & (long)plVar7 - 1U);
      }
      else if (plVar7 <= plVar5) {
        uVar8 = 0;
        if (plVar7 != (long *)0x0) {
          uVar8 = (ulong)plVar5 / (ulong)plVar7;
        }
        plVar5 = (long *)((long)plVar5 - uVar8 * (long)plVar7);
      }
      *(long **)(lVar3 + (long)plVar5 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar5;
    *plVar5 = (long)aplStack_78[0];
  }
  aplStack_78[0] = (long *)0x0;
  param_1[3] = param_1[3] + 1;
  FUN_1002aa08c(aplStack_78);
  uVar1 = 1;
LAB_1006080cc:
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 100608100; end: 100608133;  */

long FUN_100608100(long param_1,undefined8 param_2)

{
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_100607ec4(param_1,param_2,&UNK_10dd5b8f9,&uStack_18,&uStack_19);
  return param_1 + 0x28;
}



/* Entry: 100608134; end: 100608143;  */

undefined8 *** FUN_100608134(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 **ppuStack_48;
  undefined1 uStack_39;
  undefined8 **ppuStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  func_0x0001004a5cbc();
  puVar3 = (undefined8 *)&uStack_39;
  uStack_28 = extraout_x8;
  FUN_1004a5d4c(&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_1004a5da8();
  ppuStack_38 = pppuVar1;
  puStack_30 = (undefined1 *)puVar3;
  if ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0) {
    func_0x0001004a5f48();
  }
  pppuVar1 = &ppuStack_38;
  FUN_1002a2640(param_1);
  FUN_1004b5c80(uStack_28);
  if ((bool)in_ZR) {
    return pppuVar1;
  }
  func_0x000107c60e78();
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0) {
    func_0x0001004a5f48();
    pppuVar1 = (undefined8 ***)ppuStack_48;
  }
  func_0x000107c3528c();
  ppuVar2 = (undefined8 **)0x20;
  func_0x000107c60e20();
  *ppuVar2 = &PTR_DAT_110a80570;
  ppuVar2[1] = puVar3;
  ppuVar2[3] = (undefined8 *)0xffffffffffffffff;
  ppuVar2[2] = (undefined8 *)0x0;
  *pppuVar1 = ppuVar2;
  return pppuVar1;
}



/* Entry: 100608144; end: 10060824b;  */

void FUN_100608144(void)

{
  long lVar1;
  undefined1 in_w3;
  undefined1 in_w4;
  undefined4 in_w5;
  undefined8 in_x7;
  long unaff_x19;
  undefined8 uVar2;
  undefined4 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  
  FUN_100608134();
  func_0x0001006084e0();
  func_0x000107c60c94(unaff_x19 + 0x30);
  FUN_10028b0c8(unaff_x19 + 0x48,in_x7);
  *(undefined1 *)(unaff_x19 + 0x70) = in_w4;
  *(undefined4 *)(unaff_x19 + 0x74) = in_w5;
  func_0x0001006084ec();
  *(undefined1 *)(unaff_x19 + 0x98) = in_w3;
  lVar1 = unaff_x19 + 0xa0;
  func_0x0001006084f8();
  FUN_10054f908();
  *(undefined1 *)(unaff_x19 + 0xd0) = 0;
  *(long *)(unaff_x19 + 0xb8) = lVar1;
  *(undefined4 *)(unaff_x19 + 0xc0) = in_stack_00000000;
  *(undefined8 *)(unaff_x19 + 0xc4) = in_stack_00000008;
  *(undefined1 *)(unaff_x19 + 0xe8) = 0;
  if (*(char *)(in_stack_00000010 + 3) == '\x01') {
    func_0x0001006b11f0(*in_stack_00000010);
    in_stack_00000010[1] = 0;
    in_stack_00000010[2] = 0;
    *in_stack_00000010 = 0;
    *(undefined1 *)(unaff_x19 + 0xe8) = 1;
  }
  uVar2 = *in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0xf8) = in_stack_00000018[1];
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  *in_stack_00000018 = 0;
  in_stack_00000018[1] = 0;
  return;
}



/* Entry: 10060824c; end: 1006082ab;  */

/* WARNING: Possible PIC construction at 0x000100608288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010060828c) */

void FUN_10060824c(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c40ef0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1006082ac; end: 100608337; -[SCNativeMessagingSessionManager networkConnectivityStatusDidChange:] */

void FUN_1006082ac(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_3 < 1) {
    if (param_3 != -1) {
      if (param_3 != 0) {
        return;
      }
      uVar1 = *(undefined8 *)(param_1 + 0x40);
      uVar3 = 2;
      puVar2 = PTR____kCFBooleanFalse_11034ab60;
      goto LAB_107c4f928;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR____kCFBooleanTrue_11034ab68;
    if (param_3 != 4) {
      if (param_3 == 2) {
        uVar1 = *(undefined8 *)(param_1 + 0x40);
        uVar3 = 0;
      }
      else {
        if (param_3 != 1) {
          return;
        }
        uVar1 = *(undefined8 *)(param_1 + 0x40);
        uVar3 = 1;
      }
      goto LAB_107c4f928;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x40);
  }
  uVar3 = 3;
LAB_107c4f928:
                    /* WARNING: Could not recover jumptable at 0x00010c1206f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,PTR_s_reachabilityChanged_connectivity_112625bd8,puVar2,uVar3);
  return;
}



/* Entry: 100608338; end: 1006083c7; -[SCNMessagingSession reachabilityChanged:connectivityType:] */

void FUN_100608338(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  
  func_0x000107c61174(param_3);
  plVar2 = *(long **)(param_1 + 0x18);
  uVar1 = param_3;
  FUN_10011c84c(param_3);
  (**(code **)(*plVar2 + 0x90))(plVar2,uVar1 & 0xffff,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1006083c8; end: 1006083d3;  */

void FUN_1006083c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x20);
  return;
}



/* Entry: 1006083d4; end: 10060841f;  */

void FUN_1006083d4(undefined8 param_1,undefined2 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_1006083c8();
  plVar1 = *(long **)(unaff_x19 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 100608420; end: 1006084af;  */

void FUN_100608420(long param_1,undefined2 param_2,undefined4 param_3)

{
  undefined1 in_ZR;
  code **ppcVar1;
  undefined8 extraout_x8;
  long *plVar2;
  code *pcVar3;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined2 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_28;
  
  uStack_70 = param_2;
  FUN_1004b4bec();
  plVar2 = *(long **)(param_1 + 0xb0);
  pcStack_88 = FUN_1006a5df0;
  ppuStack_80 = &PTR_DAT_110a78760;
  ppcVar1 = &pcStack_88;
  lStack_78 = param_1;
  uStack_6c = param_3;
  uStack_28 = extraout_x8;
  (**(code **)(*plVar2 + 0x10))();
  func_0x00010054fcac(ppuStack_80);
  func_0x0001004a0084(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c33818(&pcStack_88);
  func_0x000107c33930();
  *plVar2 = (long)&PTR_DAT_110a78760;
  pcVar3 = ppcVar1[1];
  plVar2[2] = (long)ppcVar1[2];
  plVar2[1] = (long)pcVar3;
  return;
}



/* Entry: 1006084b0; end: 1006084d3;  */

void FUN_1006084b0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110a78760;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 1006084d4; end: 100608513; -[SCNotificationServiceExtensionArroyoConfig .cxx_destruct] */

void FUN_1006084d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100608514; end: 1006086cf;  */

void FUN_100608514(long param_1)

{
  FUN_100450bd8();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1006086d0; end: 1006088b3;  */

void FUN_1006086d0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  lVar1 = *param_1;
  func_0x000107c61184();
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
  }
  else {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c61174(lVar1);
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_3);
      func_0x000107c4e590(lVar2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c61174(lVar1);
      func_0x000107c61174(param_2);
      func_0x000107c61174(param_3);
      func_0x000107c4e524(lVar2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1006088b4; end: 1006088ef;  */

void FUN_1006088b4(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c44070(param_2);
  func_0x000107c61180();
  func_0x000107c5d3e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1006088f0; end: 10060890f;  */

void FUN_1006088f0(void)

{
  return;
}



/* Entry: 100608910; end: 100608a9b;  */

void FUN_100608910(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long lStack_2f8;
  long lStack_2f0;
  undefined1 auStack_2e8 [200];
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [184];
  undefined1 auStack_158 [200];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  FUN_100603bac(auStack_210,param_5);
  func_0x000100608908(auStack_158);
  func_0x000107c60c94(auStack_90,param_4 + 0xa0);
  func_0x000100608b3c(auStack_78,param_3);
  uStack_68 = param_6[1];
  uStack_70 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  uStack_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_60 = *(undefined8 *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10_00 != 0);
  }
  FUN_100608e50(&lStack_220,param_1 + 0xd0,param_6,auStack_210,param_5);
  func_0x000100608908(auStack_2e8);
  if (lStack_220 == 0) {
    lStack_2f8 = 0;
    lStack_2f0 = 0;
  }
  else {
    lStack_2f8 = lStack_220;
    lStack_2f0 = lStack_218;
    if (lStack_218 != 0) {
      do {
        func_0x0001004b6e78();
      } while (extraout_w10_01 != 0);
    }
  }
  FUN_100609448(param_1,auStack_2e8,param_3,param_4,&lStack_2f8);
  func_0x00010061db9c();
  func_0x00010061dba4();
  FUN_10061dbac(&lStack_220);
  func_0x00010061dbd0(auStack_210);
  return;
}



/* Entry: 100608a9c; end: 100608ac3; -[SCNativeMessagingSessionManager getFeedManager] */

void FUN_100608a9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100608ac4; end: 100608b93; -[SCNativeFeedManager updateAppStateChange:] */

void FUN_100608ac4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c61148(param_1);
  func_0x000107c3de6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100608b94; end: 100608ba7;  */

void FUN_100608b94(void)

{
  return;
}



/* Entry: 100608ba8; end: 100608bfb; -[SCNMessagingSession appStateChanged:] */

void FUN_100608ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  
  FUN_10060696c(param_1,param_3);
  (**(code **)(extraout_x8 + 0x98))();
  return;
}



/* Entry: 100608bfc; end: 100608c3b;  */

void FUN_100608bfc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x19;
  
  FUN_1006083c8();
  plVar1 = *(long **)(unaff_x19 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x98))(plVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x20);
  return;
}



/* Entry: 100608c3c; end: 100608c43;  */

char * FUN_100608c3c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  if (*(int *)(param_2 + 8) != 0) {
    pcVar7 = "return nullptr";
    func_0x000104a6e964("return nullptr",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc"
                        ,0x4e);
    return pcVar7;
  }
  lVar2 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = (char *)0x140;
  FUN_100460200();
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  *(undefined4 *)(pcVar7 + 0x10) = uVar4;
  func_0x0001004b800c(pcVar7 + 0x18);
  if (lVar3 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(lVar2 + lVar9 * 0x20);
      plVar8 = (long *)*puVar1;
      if ((long *)0x1 < plVar8) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      FUN_1005a70c4(pcVar7 + 0x18,&uStack_70);
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar7;
  }
  func_0x000107c60e78();
  return pcRam0000000113815c80;
}



/* Entry: 100608c44; end: 100608c7f;  */

char * FUN_100608c44(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_48;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar7 = "return nullptr";
    func_0x000104a6e964("return nullptr",
                        "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/byte_buffer.cc"
                        ,0x4e);
    return pcVar7;
  }
  lVar2 = *(long *)(param_1 + 0x20);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar7 = (char *)0x140;
  FUN_100460200();
  pcVar7[8] = '\0';
  pcVar7[9] = '\0';
  pcVar7[10] = '\0';
  pcVar7[0xb] = '\0';
  *(undefined4 *)(pcVar7 + 0x10) = uVar4;
  func_0x0001004b800c(pcVar7 + 0x18);
  if (lVar3 != 0) {
    lVar9 = 0;
    do {
      puVar1 = (undefined8 *)(lVar2 + lVar9 * 0x20);
      plVar8 = (long *)*puVar1;
      if ((long *)0x1 < plVar8) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar6) {
            *plVar8 = *plVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uStack_68 = puVar1[1];
      uStack_70 = *puVar1;
      uStack_58 = puVar1[3];
      uStack_60 = puVar1[2];
      FUN_1005a70c4(pcVar7 + 0x18,&uStack_70);
      lVar9 = lVar9 + 1;
    } while (lVar9 != lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar7;
  }
  func_0x000107c60e78();
  return pcRam0000000113815c80;
}



/* Entry: 100608c80; end: 100608c8f;  */

void FUN_100608c80(void)

{
  return;
}



/* Entry: 100608c90; end: 100608d9b;  */

void FUN_100608c90(long param_1,int param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 extraout_w8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x9;
  long lStack_98;
  code **ppcStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined8 uStack_28;
  
  uVar3 = 2;
  if (param_2 != 1) {
    uVar3 = 0;
  }
  if (param_2 == 0) {
    uVar3 = 1;
  }
  lVar2 = param_1;
  FUN_100608c80(uVar3);
  *(undefined4 *)(*(long *)(lVar2 + 0x330) + 8) = extraout_w8;
  uVar1 = param_2 == 1;
  uStack_28 = extraout_x9;
  if ((bool)uVar1) {
    uVar1 = *(long *)(param_1 + 0x370) == -1;
    lStack_98 = param_1;
    if (!(bool)uVar1) {
      pcStack_88 = (code *)&lStack_98;
      ppcStack_90 = &pcStack_88;
      func_0x000107c60c38((long *)(param_1 + 0x370),&ppcStack_90,&UNK_10882c644);
    }
    pcStack_88 = (code *)&UNK_10882c78c;
    ppuStack_80 = &PTR_DAT_110a78790;
    lStack_78 = param_1;
    FUN_10054fc78(*(undefined8 *)(param_1 + 0xb0));
    FUN_100608d9c();
  }
  else {
    if (param_2 != 0) goto LAB_100608d68;
    pcStack_88 = FUN_1006a6478;
    ppuStack_80 = &PTR_FUN_110a78778;
    lStack_78 = param_1;
    FUN_10054fc78(*(undefined8 *)(param_1 + 0xb0));
    FUN_100608d9c();
  }
  FUN_100558900(ppuStack_80);
LAB_100608d68:
  func_0x0001004a0084(uStack_28);
  if ((bool)uVar1) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c33930();
                    /* WARNING: Could not recover jumptable at 0x000100608da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100608d9c; end: 100608dd3;  */

void FUN_100608d9c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100608da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,&stack0x00000018);
  return;
}



/* Entry: 100608dd4; end: 100608e4f;  */

void FUN_100608dd4(void)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined1 uStack_71;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100608dbc();
  FUN_100608e7c();
  uStack_48 = extraout_x8;
  FUN_100608ebc(auStack_60,1);
  FUN_100608ee4(uStack_50);
  FUN_100609404();
  func_0x00010060941c();
  FUN_100601c64(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001053953f4();
  func_0x00010060941c();
  func_0x0001053953cc();
  pcStack_68 = FUN_100608e50;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_100608dd4(&uStack_71,uStack_50,unaff_x23,unaff_x22,unaff_x21);
  return;
}



/* Entry: 100608e50; end: 100608e7b;  */

void FUN_100608e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_100608dd4(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 100608e7c; end: 100608e8b;  */

void FUN_100608e7c(void)

{
  return;
}



/* Entry: 100608e8c; end: 100608ebb;  */

long FUN_100608e8c(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 < 0xd79435e50d7944) {
    lVar1 = param_2 * 0x130;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bd35f4();
  *(ulong *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100608e8c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100608ebc; end: 100608ee3;  */

long FUN_100608ebc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_100608e8c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 100608ee4; end: 100608f23;  */

undefined8 * FUN_100608ee4(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11087fdc0;
  param_1[1] = 0;
  FUN_1006090a8(param_1 + 3);
  return param_1;
}



/* Entry: 100608f24; end: 100608f33;  */

void FUN_100608f24(void)

{
  return;
}



/* Entry: 100608f34; end: 100608f3f; -[SCExtensionSharedDirectory .cxx_destruct] */

void FUN_100608f34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100608f40; end: 100608f4b; -[SCMessagingNotificationExtensionUserDefaults .cxx_destruct] */

void FUN_100608f40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 100608f4c; end: 100608fe3;  */

/* WARNING: Possible PIC construction at 0x000100608f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100608f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100608f88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100608f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100608fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100608fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100608fc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100608fbc) */
/* WARNING: Removing unreachable block (ram,0x000100608fac) */
/* WARNING: Removing unreachable block (ram,0x000100608f9c) */
/* WARNING: Removing unreachable block (ram,0x000100608f8c) */
/* WARNING: Removing unreachable block (ram,0x000100608f7c) */
/* WARNING: Removing unreachable block (ram,0x000100608f6c) */
/* WARNING: Removing unreachable block (ram,0x000100608fcc) */

void FUN_100608f4c(long param_1)

{
  func_0x000107c61120(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x90));
  return;
}



/* Entry: 100608fe4; end: 10060902b; -[SCPromise dealloc] */

void FUN_100608fe4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x000107c3b660(*(undefined8 *)(param_1 + 8));
  puStack_28 = PTR_PTR_11270e648;
  lStack_30 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10060902c; end: 10060909b; -[SCFuture _failIfIncomplete] */

void FUN_10060902c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c42a58(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_11102e238,0xffffffffffffffff,0);
  func_0x000107c61180();
  func_0x000107c3b0c4(param_1,param_2,puVar1,2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10060909c; end: 1006090a7; -[SCPromise .cxx_destruct] */

void FUN_10060909c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1006090a8; end: 10060914f;  */

void FUN_1006090a8(void)

{
  undefined1 in_ZR;
  undefined8 in_x3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [40];
  undefined8 uStack_48;
  
  FUN_100601ad8();
  uStack_48 = extraout_x8;
  FUN_100609160(auStack_78,in_x3);
  FUN_1006092f0();
  func_0x0001006093d8();
  (*extraout_x8_00)();
  FUN_100601c64(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x0001006093d8();
  (*extraout_x8_01)(auStack_70);
  func_0x0001053953cc();
  FUN_10060918c();
  func_0x000107c60e20(0x1c0);
  FUN_1006091d8();
  FUN_1006092d8();
  return;
}



/* Entry: 100609150; end: 10060915f;  */

void FUN_100609150(undefined8 param_1,undefined8 param_2)

{
  FUN_10060918c(param_1,&PTR_FUN_11087fe00,param_2);
  func_0x000107c60e20(0x1c0);
  FUN_1006091d8();
  FUN_1006092d8();
  return;
}



/* Entry: 100609160; end: 10060918b;  */

undefined8 * FUN_100609160(undefined8 *param_1)

{
  *param_1 = &UNK_105394400;
  FUN_100609150(param_1 + 1);
  return param_1;
}



/* Entry: 10060918c; end: 10060919b;  */

void FUN_10060918c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



/* Entry: 10060919c; end: 1006091d7;  */

void FUN_10060919c(void)

{
  FUN_10060918c();
  func_0x000107c60e20(0x1c0);
  FUN_1006091d8();
  FUN_1006092d8();
  return;
}



/* Entry: 1006091d8; end: 10060926f;  */

void FUN_1006091d8(long param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100603768();
  FUN_100603bac();
  FUN_1006092b0(param_1 + 0xb8,unaff_x20 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x180);
  *(undefined8 *)(unaff_x19 + 400) = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x19 + 0x188) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x180) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  func_0x000100608b3c(unaff_x19 + 0x198,unaff_x20 + 0x198);
  lVar1 = *(long *)(unaff_x20 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1a0);
  *(undefined8 *)(unaff_x19 + 0x1a8) = *(undefined8 *)(unaff_x20 + 0x1a8);
  *(undefined8 *)(unaff_x19 + 0x1a0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x1b0);
  *(undefined8 *)(unaff_x19 + 0x1b8) = *(undefined8 *)(unaff_x20 + 0x1b8);
  *(undefined8 *)(unaff_x19 + 0x1b0) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x1b0) = 0;
  *(undefined8 *)(unaff_x20 + 0x1b8) = 0;
  return;
}



/* Entry: 100609270; end: 100609283;  */

void FUN_100609270(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xb0) == '\x01') {
    FUN_1006270fc();
    *(undefined1 *)(param_1 + 0xb0) = 1;
    return;
  }
  return;
}



/* Entry: 100609284; end: 1006092af;  */

undefined1 * FUN_100609284(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xb0] = 0;
  FUN_100609270();
  return param_1;
}



/* Entry: 1006092b0; end: 1006092d7;  */

undefined8 * FUN_1006092b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_100609284(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1006092d8; end: 1006092ef;  */

void FUN_1006092d8(void)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  *(undefined8 *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 1006092f0; end: 1006093bb;  */

undefined8 *
FUN_1006092f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  *param_1 = &PTR_DAT_11087fe28;
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  param_1[3] = *param_4;
  (**(code **)(param_4[1] + 0x10))(param_1 + 4,param_4 + 1);
  lVar1 = param_3[1];
  uVar2 = *param_3;
  param_1[10] = param_3[1];
  param_1[9] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10_00 != 0);
  }
  FUN_100603bac(param_1 + 0xb,param_5);
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



/* Entry: 1006093bc; end: 1006093e3;  */

void FUN_1006093bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1006093e4; end: 100609403;  */

void FUN_1006093e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010061dbd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 100609404; end: 100609447;  */

void FUN_100609404(void)

{
  long *unaff_x19;
  long in_stack_00000010;
  
  *unaff_x19 = in_stack_00000010 + 0x18;
  unaff_x19[1] = in_stack_00000010;
  return;
}



/* Entry: 100609448; end: 1006095b3;  */

void FUN_100609448(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long *param_5)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar4;
  undefined8 uVar5;
  long lStack_440;
  long lStack_438;
  undefined1 auStack_338 [256];
  undefined1 auStack_238 [200];
  undefined1 auStack_170 [264];
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar4 = &lStack_440;
  FUN_100608e7c();
  uStack_48 = extraout_x8;
  FUN_100601fc0(auStack_238);
  FUN_1006095b4(auStack_170,param_1,auStack_238,param_3,param_4 + 0xa0,param_5);
  func_0x000100609690();
  uVar1 = *(char *)(param_4 + 0x70) == '\x01';
  if ((bool)uVar1) {
    lStack_440 = *param_5;
    if (lStack_440 == 0) {
      lStack_440 = 0;
      lStack_438 = 0;
    }
    else {
      lStack_438 = param_5[1];
      if (lStack_438 != 0) {
        do {
          func_0x0001004b6e78();
        } while (extraout_w10 != 0);
      }
    }
    uStack_50 = 0;
    FUN_1006096b8(param_1,auStack_170,param_4,&lStack_440,auStack_68);
    func_0x00010061cd18(auStack_68);
    FUN_100601d1c(&lStack_440);
    plVar4 = param_5;
  }
  else {
    param_1 = (undefined8 *)param_1[7];
    FUN_1006098dc(&lStack_440,auStack_170);
    FUN_1006099c0(auStack_338,param_4);
    func_0x000105394d5c(param_1,&lStack_440);
    func_0x000105395100(&lStack_440);
  }
  func_0x00010061cd80(auStack_170);
  FUN_100601c64(uStack_48);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001053953f4();
    func_0x000105395100();
    puVar2 = auStack_170;
    func_0x00010061cd80(puVar2);
    func_0x0001053953cc();
    func_0x000100608dbc();
    FUN_100609644(extraout_x8_00,puVar2 + 8);
    FUN_100601fc0(param_4 + 0x10,auStack_238);
    func_0x000100608b3c(param_4 + 0xd8,param_3);
    func_0x000107c60c94(param_4 + 0xe0,plVar4);
    lVar3 = param_1[1];
    uVar5 = *param_1;
    *(undefined8 *)(param_4 + 0x100) = param_1[1];
    *(undefined8 *)(param_4 + 0xf8) = uVar5;
    if (lVar3 != 0) {
      do {
        func_0x0001004b6e78();
      } while (extraout_w10_00 != 0);
    }
  }
  return;
}



/* Entry: 1006095b4; end: 100609643;  */

void FUN_1006095b4(long param_1)

{
  undefined8 extraout_x8;
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x000100608dbc();
  FUN_100609644(extraout_x8,param_1 + 8);
  FUN_100601fc0(unaff_x19 + 0x10);
  func_0x000100608b3c(unaff_x19 + 0xd8);
  func_0x000107c60c94(unaff_x19 + 0xe0);
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  *(undefined8 *)(unaff_x19 + 0x100) = unaff_x20[1];
  *(undefined8 *)(unaff_x19 + 0xf8) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 100609644; end: 10060967f;  */

undefined8 * FUN_100609644(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 == 0) {
    param_1[1] = 0;
  }
  else {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      return param_1;
    }
  }
  puVar2 = (undefined8 *)0x0;
  func_0x00010527822c();
  return puVar2;
}



/* Entry: 100609680; end: 100609697;  */

void FUN_100609680(void)

{
  return;
}



/* Entry: 100609698; end: 1006096b7;  */

void FUN_100609698(long param_1)

{
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_100627b64();
  }
  return;
}



/* Entry: 1006096b8; end: 100609807;  */

/* WARNING: Removing unreachable block (ram,0x0001004673b4) */

void FUN_1006096b8(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 extraout_x8;
  int extraout_w10;
  undefined8 uVar8;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [264];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [256];
  long lStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  func_0x000100601d74();
  lVar4 = param_1;
  uVar6 = param_2;
  FUN_100608e7c();
  uStack_10 = extraout_x8;
  FUN_100609808();
  func_0x000100609810(*param_4);
  func_0x00010060981c();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  uVar5 = *(uint *)(param_3 + 0x74);
  bVar2 = *(char *)(param_1 + 0xa4) == '\x01';
  uVar1 = bVar2 && uVar5 == 0;
  FUN_100609644(auStack_268,param_1 + 8);
  uStack_250 = param_4[1];
  uStack_258 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  FUN_1006098dc(auStack_248,param_2);
  FUN_10060996c(auStack_140,param_5);
  FUN_1006099c0(auStack_120,param_3);
  lVar7 = param_3 + 0xa0;
  lStack_20 = lVar4;
  uStack_18 = uVar6;
  FUN_100609b90(uVar8,lVar7,bVar2 && uVar5 == 0 || (uVar5 & 0xfffffffe) == 2,param_3,auStack_268);
  uVar5 = (uint)lVar7;
  func_0x00010061db28(auStack_268);
  FUN_100601c64(uStack_10);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x000105395408();
    func_0x00010061db28();
    func_0x0001053953cc();
    (*(code *)PTR_DAT_1130a5808)();
    if (999999999 < uVar5) {
      func_0x000107c2c174();
      pcVar3 = "GRPC_INIT_TIME_FIX";
      func_0x000107c60ffc();
      if (pcVar3 != (char *)0x0) {
        func_0x000107c613e8();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 100609808; end: 100609863;  */

/* WARNING: Removing unreachable block (ram,0x0001004673b4) */

void FUN_100609808(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  
  (*(code *)PTR_DAT_1130a5808)();
  if (999999999 < param_2) {
    func_0x000107c2c174();
    pcVar1 = "GRPC_INIT_TIME_FIX";
    func_0x000107c60ffc();
    if (pcVar1 != (char *)0x0) {
      func_0x000107c613e8();
    }
    return;
  }
  return;
}



/* Entry: 100609864; end: 100609887;  */

void FUN_100609864(long param_1)

{
  long lVar1;
  
  func_0x0001005529b4(param_1 + 0x20);
  lVar1 = param_1 + 0x40;
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    FUN_1004b4e98();
    *(long *)(param_1 + 0x48) = lVar1;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}



/* Entry: 100609888; end: 10060988f;  */

void FUN_100609888(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1;
    FUN_1004b4e98();
    *(long *)(param_1 + 8) = lVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 100609890; end: 1006098db; -[SCNativeFeedManager updateLoadingStatus:triggerType:] */

void FUN_100609890(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5d534();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1006098dc; end: 10060996b;  */

undefined8 * FUN_1006098dc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1006092b0(param_1 + 2,param_2 + 2);
  func_0x000100608b3c(param_1 + 0x1b,param_2 + 0x1b);
  func_0x000107c60c94(param_1 + 0x1c,param_2 + 0x1c);
  lVar1 = param_2[0x20];
  uVar2 = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x1f] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 10060996c; end: 1006099bf;  */

long FUN_10060996c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    FUN_10060cc10(*(undefined8 *)(param_2 + 0x18));
    func_0x00010060981c();
  }
  else {
    *(long *)(param_1 + 0x18) = lVar1;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



/* Entry: 1006099c0; end: 100609aab;  */

void FUN_1006099c0(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000100603768();
  func_0x000107c60c94();
  FUN_1006077c4();
  func_0x000107c60c94(unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_10028b0c8(unaff_x19 + 0x48,unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
  FUN_10028af84(unaff_x19 + 0x78,unaff_x20 + 0x78);
  *(undefined1 *)(unaff_x19 + 0x98) = *(undefined1 *)(unaff_x20 + 0x98);
  func_0x000107c60c94(unaff_x19 + 0xa0,unaff_x20 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  *(undefined1 *)(unaff_x19 + 200) = *(undefined1 *)(unaff_x20 + 200);
  *(undefined8 *)(unaff_x19 + 0xc0) = uVar3;
  *(undefined8 *)(unaff_x19 + 0xb8) = uVar2;
  FUN_10028af84(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  lVar1 = *(long *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x19 + 0xf0) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001004b6e78();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 100609aac; end: 100609b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100609aac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126ba4a8;
    func_0x000107c610f4(PTR_PTR_1126ba4a8);
    lVar1 = param_1 + _DAT_1127255b0;
    func_0x000107c61148(lVar1);
    lVar2 = lVar1;
    func_0x000107c4cdb8();
    func_0x000107c61180();
    func_0x000107c477b0(puVar3,param_2,lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


