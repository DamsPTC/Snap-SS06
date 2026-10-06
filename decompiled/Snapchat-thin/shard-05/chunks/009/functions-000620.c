/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043782f0; end: 1043782fb; +[SCLensInfoCardActionType openAppWithAppUrl:] */

void FUN_1043782f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = puVar3;
  (*(code *)0x104379710)(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1043782fc; end: 104378393;  */

void FUN_1043782fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(puVar3,param_3);
  puVar2 = puVar3;
  (*param_4)(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104378394; end: 10437860b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104378394(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8,code *param_9,
                  undefined8 param_10,code *param_11,undefined4 param_12,undefined4 param_13,
                  code *param_14)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  code *pcVar4;
  long extraout_x12;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [8];
  code *pcStack_68;
  
  lVar2 = 0x112d36580;
  pcStack_68 = param_7;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar6 = puVar3 + -extraout_x12;
  bVar1 = *(byte *)(unaff_x20 + _DAT_113071ee8);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      (*param_1)();
    }
    else if (bVar1 == 1) {
      (*param_3)(unaff_x20 + _DAT_113071ef0,*(undefined8 *)(unaff_x20 + _DAT_113071ef8),
                 *(undefined8 *)(unaff_x20 + _DAT_113071f00));
    }
    else {
      (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113071f08),
                 ((undefined8 *)(unaff_x20 + _DAT_113071f08))[1],
                 *(undefined8 *)(unaff_x20 + _DAT_113071f10),
                 ((undefined8 *)(unaff_x20 + _DAT_113071f10))[1]);
    }
  }
  else if (bVar1 < 5) {
    if (bVar1 == 3) {
      (*pcStack_68)(*(undefined8 *)(unaff_x20 + _DAT_113071f18),
                    ((undefined8 *)(unaff_x20 + _DAT_113071f18))[1]);
    }
    else {
      (*param_9)(param_10,*(undefined8 *)(unaff_x20 + _DAT_113071f20));
    }
  }
  else {
    if (bVar1 == 5) {
      FUN_10437860c(unaff_x20 + _DAT_113071f28,puVar6,0x112d36580,&UNK_10d9016d0);
      lVar2 = 0;
      __s10Foundation3URLVMa();
      lVar5 = *(long *)(lVar2 + -8);
      puVar3 = puVar6;
      (**(code **)(lVar5 + 0x30))(puVar6,1,lVar2);
      if ((int)puVar3 == 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104378608);
        (*pcVar4)();
      }
      (*param_11)(puVar6);
      pcVar4 = *(code **)(lVar5 + 8);
      puVar3 = puVar6;
    }
    else {
      FUN_10437860c(unaff_x20 + _DAT_113071f30,puVar3,0x112d36580,&UNK_10d9016d0);
      lVar2 = 0;
      __s10Foundation3URLVMa();
      lVar5 = *(long *)(lVar2 + -8);
      puVar6 = puVar3;
      (**(code **)(lVar5 + 0x30))(puVar3,1,lVar2);
      if ((int)puVar6 == 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10437860c);
        (*pcVar4)();
      }
      (*param_14)(puVar3);
      pcVar4 = *(code **)(lVar5 + 8);
    }
    (*pcVar4)(puVar3,lVar2);
  }
  return;
}



/* Entry: 10437860c; end: 104378693;  */

undefined8 FUN_10437860c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104378694; end: 104378747; -[SCLensInfoCardActionType matchNull:sendToAction:communityProfileAction:publicProfileAction:openLensAttachment:openWebPage:openApp:] */

void FUN_104378694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_104378394(FUN_104379bd0,auStack_40,0x104379bd8,auStack_60,0x104379be0,auStack_80,0x104379be8,
                auStack_a0,0x104379bf0,auStack_c0,0x104379c00,auStack_e0,FUN_104379c40,auStack_100);
  _objc_release(param_1);
  return;
}



/* Entry: 104378748; end: 10437884b;  */

void FUN_104378748(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  FUN_10437860c(param_1,puVar3,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  puVar4 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
    puVar4 = puVar2;
  }
  (**(code **)(param_4 + 0x10))(param_4,puVar4,param_2,param_3);
  _objc_release(puVar4);
  return;
}



/* Entry: 10437884c; end: 1043788c3;  */

void FUN_10437884c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  }
  uVar1 = 0;
  if (param_4 != 0) {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
    uVar1 = param_3;
  }
  (**(code **)(param_5 + 0x10))(param_5,param_1,uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1043788c4; end: 1043788f7;  */

void FUN_1043788c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043788f8; end: 1043789df; -[SCLensInfoCardActionType .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043788f8(long param_1)

{
  func_0x000104378654(param_1 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071ef8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071f00));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071f08 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071f10 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113071f18 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071f20));
  func_0x000104378654(param_1 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(param_1 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 1043789e0; end: 1043789ef;  */

ulong FUN_1043789e0(ulong param_1)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  return param_1;
}



/* Entry: 1043789f0; end: 104378c0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043789f0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar5 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12_00;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  pcVar8 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar8)(lVar7,1,1,lVar2);
  (*pcVar8)(lVar6,1,1,lVar2);
  (*pcVar8)(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_104379958();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113071ee8) = 0;
  FUN_10437860c(lVar7,lVar2 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_113071ef8) = 0;
  *(undefined8 *)(lVar2 + _DAT_113071f00) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071f18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113071f20) = 0;
  FUN_10437860c(lVar6,lVar2 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
  FUN_10437860c(lVar5,lVar2 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
  plVar4 = &lStack_60;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x000104378654(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar7,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 104378c0c; end: 10437929f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104378c0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar8)(lVar7,1,1,lVar3);
  (*pcVar8)(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_104379958();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113071ee8) = 1;
  FUN_10437860c(param_1,lVar3 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_113071ef8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_113071f00) = param_3;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113071f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113071f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113071f18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113071f20) = 0;
  FUN_10437860c(lVar7,lVar3 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
  FUN_10437860c(lVar6,lVar3 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  plVar5 = &lStack_70;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar7,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1043792a0; end: 1043794cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043792a0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_00;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar9)(lVar8,1,1,lVar3);
  (*pcVar9)(lVar7,1,1,lVar3);
  (*pcVar9)(lVar6,1,1,lVar3);
  lVar4 = 0;
  FUN_104379958();
  lVar3 = lVar4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_113071ee8) = 4;
  FUN_10437860c(lVar8,lVar3 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar3 + _DAT_113071ef8) = 0;
  *(undefined8 *)(lVar3 + _DAT_113071f00) = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113071f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113071f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + _DAT_113071f18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + _DAT_113071f20) = param_1;
  FUN_10437860c(lVar7,lVar3 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
  FUN_10437860c(lVar6,lVar3 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar4;
  _objc_retain(param_1);
  plVar5 = &lStack_60;
  _objc_msgSendSuper2(plVar5,puVar2);
  func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar7,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar8,0x112d36580,&UNK_10d9016d0);
  return plVar5;
}



/* Entry: 1043794d0; end: 10437994f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043794d0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar5 - extraout_x12_00;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar2 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)(lVar6,1,1,lVar2);
  (**(code **)(lVar7 + 0x10))(lVar5,param_1,lVar2);
  (*pcVar8)(lVar5,0,1,lVar2);
  (*pcVar8)(lVar4,1,1,lVar2);
  lVar7 = 0;
  FUN_104379958();
  lVar2 = lVar7;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113071ee8) = 5;
  FUN_10437860c(lVar6,lVar2 + _DAT_113071ef0,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(lVar2 + _DAT_113071ef8) = 0;
  *(undefined8 *)(lVar2 + _DAT_113071f00) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071f08);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071f10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113071f18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + _DAT_113071f20) = 0;
  FUN_10437860c(lVar5,lVar2 + _DAT_113071f28,0x112d36580,&UNK_10d9016d0);
  FUN_10437860c(lVar4,lVar2 + _DAT_113071f30,0x112d36580,&UNK_10d9016d0);
  plVar3 = &lStack_70;
  lStack_70 = lVar2;
  lStack_68 = lVar7;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  func_0x000104378654(lVar4,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar5,0x112d36580,&UNK_10d9016d0);
  func_0x000104378654(lVar6,0x112d36580,&UNK_10d9016d0);
  return plVar3;
}



/* Entry: 104379950; end: 104379957;  */

void FUN_104379950(void)

{
  if (lRam0000000113071f60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ff2e0);
  return;
}



/* Entry: 104379958; end: 10437998f;  */

void FUN_104379958(undefined8 param_1)

{
  if (lRam0000000113071f60 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ff2e0);
  return;
}



/* Entry: 104379990; end: 104379a27;  */

void FUN_104379990(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  puStack_70 = &UNK_10dcf0ef0;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dcf0f08;
    puStack_58 = &UNK_10dcf0f08;
    puStack_50 = &UNK_10dcf0f20;
    puStack_48 = &UNK_10dcf0f20;
    puStack_40 = &UNK_10dcf0f20;
    puStack_38 = &UNK_10dcf0f08;
    lStack_30 = lStack_68;
    lStack_28 = lStack_68;
    _swift_updateClassMetadata2(param_1,0x100,10,&puStack_70,param_1 + 0x50);
  }
  return;
}



/* Entry: 104379a28; end: 104379b8f;  */

int FUN_104379a28(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104379aa4;
        goto LAB_104379a88;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104379a88:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_104379aa4:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104379b90; end: 104379bcf;  */

void FUN_104379b90(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf0f60;
  _swift_getWitnessTable(&UNK_10dcf0f60,&UNK_1107607f0);
  puRam0000000113071f70 = puVar1;
  return;
}



/* Entry: 104379bd0; end: 104379c03;  */

void FUN_104379bd0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008547e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 104379c04; end: 104379c3f;  */

void FUN_104379c04(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104379c40; end: 104379c43;  */

void FUN_104379c40(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104379c44; end: 104379cef;  */

void FUN_104379c44(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104379cf0; end: 104379d2f;  */

void FUN_104379cf0(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 104379d30; end: 104379d4b; -[SCLensInfoCardsOnCameraScopeLifecycleAppEvent description] */

void FUN_104379d30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104379d4c; end: 104379d93; -[SCLensInfoCardsOnCameraScopeLifecycleAppEvent init] */

void FUN_104379d4c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensInfoCardsAPI/LensInfoCardsOnCameraScopeLifecycleAppEventWrapper.swift",0x49,2,0x29
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104379d94);
  (*pcVar1)();
}



/* Entry: 104379d94; end: 104379ddb; -[SCLensInfoCardsOnCameraScopeLifecycleAppEvent hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104379d94(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_113071f78));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104379ddc; end: 104379e7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_104379ddc(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    _swift_dynamicCast(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113071f78);
      cVar2 = *(char *)(lStack_58 + _DAT_113071f78);
      _objc_release();
      return cVar1 == cVar2;
    }
  }
  return false;
}



/* Entry: 104379e7c; end: 104379efb; -[SCLensInfoCardsOnCameraScopeLifecycleAppEvent isEqual:] */

uint FUN_104379e7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_104379ddc(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104379efc; end: 104379eff; -[SCLensInfoCardsOnCameraScopeLifecycleAppEvent copyWithZone:] */

void FUN_104379efc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104379f00; end: 104379f07; +[SCLensInfoCardsOnCameraScopeLifecycleAppEvent infoCardsScopeOnCameraBegan] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104379f00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113071f78) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104379f08; end: 104379f0f; +[SCLensInfoCardsOnCameraScopeLifecycleAppEvent infoCardsScopeOnCameraEnded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104379f08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113071f78) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104379f10; end: 104379f5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104379f10(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_113071f78) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104379f60; end: 104379f7b; -[SCLensInfoCardsOnCameraScopeLifecycleAppEvent matchInfoCardsScopeOnCameraBegan:infoCardsScopeOnCameraEnded:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104379f60(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (*(char *)(param_1 + _DAT_113071f78) != '\x01') {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000104379f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))();
  return;
}



/* Entry: 104379f7c; end: 104379fcf;  */

void FUN_104379f7c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104379fd0; end: 10437a137;  */

int FUN_104379fd0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10437a04c;
        goto LAB_10437a030;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10437a030:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10437a04c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10437a138; end: 10437a177;  */

void FUN_10437a138(void)

{
  undefined *puVar1;
  
  if (puRam0000000113071fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf1064;
  _swift_getWitnessTable(&UNK_10dcf1064,&UNK_1107608d8);
  puRam0000000113071fa8 = puVar1;
  return;
}



/* Entry: 10437a178; end: 10437a183; -[SCLensesModularCameraScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a178(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071fb0;
  _swift_beginAccess(param_1 + _DAT_113071fb0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10437a184; end: 10437a18f; -[SCLensesModularCameraScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a184(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071fb0;
  _swift_beginAccess(param_1 + _DAT_113071fb0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437a190; end: 10437a19b; -[SCLensesModularCameraScope workflowDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a190(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113071fb8;
  _swift_beginAccess(param_1 + _DAT_113071fb8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10437a19c; end: 10437a1df;  */

void FUN_10437a19c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10437a1e0; end: 10437a1eb; -[SCLensesModularCameraScope setWorkflowDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a1e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113071fb8;
  _swift_beginAccess(param_1 + _DAT_113071fb8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437a1ec; end: 10437a23f;  */

void FUN_10437a1ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437a240; end: 10437a24f; -[SCLensesModularCameraScope lensModularCameraLensData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071fc0));
  return;
}



/* Entry: 10437a250; end: 10437a25f; -[SCLensesModularCameraScope replyParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a250(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071fc8));
  return;
}



/* Entry: 10437a260; end: 10437a26f; -[SCLensesModularCameraScope lensModularCameraScopeConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071fd0));
  return;
}



/* Entry: 10437a270; end: 10437a27f; -[SCLensesModularCameraScope activationSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10437a270(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113071fd8);
}



/* Entry: 10437a280; end: 10437a3f3; -[SCLensesModularCameraScope onCarouselEndBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a280(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  ppuVar2 = &puStack_60;
  lVar1 = *(long *)(param_1 + _DAT_113071fe0);
  if (lVar1 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    lVar3 = ((long *)(param_1 + _DAT_113071fe0))[1];
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1000f6b44;
    puStack_48 = &UNK_110760a60;
    lStack_40 = lVar1;
    lStack_38 = lVar3;
    __Block_copy(&puStack_60);
    lVar1 = lStack_38;
    _swift_retain(lVar3);
    _swift_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10437a3f4; end: 10437a47b; -[SCLensesModularCameraScope init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a3f4(long param_1)

{
  code *pcVar1;
  
  _swift_unknownObjectWeakInit(param_1 + _DAT_113071fb0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113071fb8,0);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000031,0x800000010f1f8c70,
             "SCLensesModularCameraScopeSaber/SCLensesModularCameraScope.swift",0x40,2,0x4e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437a47c);
  (*pcVar1)();
}



/* Entry: 10437a47c; end: 10437a47f;  */

void FUN_10437a47c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10437a480; end: 10437a56b; -[SCLensesModularCameraScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a480(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113071fb0);
  func_0x00010437a4fc(param_1 + _DAT_113071fb8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071fc0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071fc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113071fd0));
  if (*(long *)(param_1 + _DAT_113071fe0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_113071fe0))[1]);
    return;
  }
  return;
}



/* Entry: 10437a56c; end: 10437a75f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10437a56c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long **pplVar6;
  long *plVar7;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000100370df8();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar2 = _DAT_113071fb0;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113071fb0,0);
  lVar3 = _DAT_113071fb8;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113071fb8,0);
  _swift_beginAccess(lVar5 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar2,param_1);
  _swift_beginAccess(lVar5 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_2);
  *(undefined8 *)(lVar5 + _DAT_113071fd0) = param_6;
  uStack_a0 = 0x10437a31c;
  uStack_98 = 0;
  plStack_c0 = (long *)PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1038233a4;
  puStack_a8 = &UNK_1107609e8;
  pplVar6 = &plStack_c0;
  __Block_copy(pplVar6);
  _objc_retain(param_6);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  __Block_release(pplVar6);
  *(undefined8 *)(lVar5 + _DAT_113071fc0) = param_3;
  *(undefined8 *)(lVar5 + _DAT_113071fc8) = param_4;
  *(undefined8 *)(lVar5 + _DAT_113071fd8) = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113071fe0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  _objc_retain(param_4);
  func_0x000100b64c10(param_7,param_8);
  plVar7 = &lStack_d0;
  lStack_d0 = lVar5;
  lStack_c8 = lVar4;
  _objc_msgSendSuper2(plVar7,PTR_s_init_1125d9248);
  plStack_c0 = plVar7;
  func_0x00010008a7c8(&uStack_d8,&plStack_c0);
  func_0x000100083b20(&plStack_c0);
  _swift_release(uStack_d8);
  _swift_unknownObjectRelease(plStack_c0);
  return plVar7;
}



/* Entry: 10437a760; end: 10437a8a7; -[_TtC31SCLensesModularCameraScopeSaber34SCLensesModularCameraScopeServices buildWithPresentingViewController:workflowDelegate:lensModularCameraLensData:replyParameters:activationSource:lensModularCameraScopeConfiguration:onCarouselEndBlock:] */

void FUN_10437a760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  __Block_copy();
  if (param_9 == 0) {
    puVar3 = (undefined *)0x0;
    uVar4 = 0;
  }
  else {
    puVar3 = &UNK_110760a48;
    _swift_allocObject(&UNK_110760a48,0x18,7);
    *(long *)(puVar3 + 0x10) = param_9;
    uVar4 = 0x10437a918;
  }
  uVar1 = param_3;
  _objc_retain(param_3);
  _swift_unknownObjectRetain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar2 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_1);
  FUN_10437a56c(param_3,param_4,param_5,param_6,param_7,param_8,uVar4,puVar3);
  func_0x00010058d43c(uVar4,puVar3);
  _objc_release(uVar1);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_5);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10437a8a8; end: 10437a8c3;  */

void FUN_10437a8a8(long param_1,long param_2)

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



/* Entry: 10437a8c4; end: 10437a8f7;  */

void FUN_10437a8c4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10437a8f8; end: 10437a923; -[_TtC31SCLensesModularCameraScopeSaber34SCLensesModularCameraScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a8f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113071ff0));
  return;
}



/* Entry: 10437a924; end: 10437a963;  */

void FUN_10437a924(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 10437a964; end: 10437a96f;  */

void FUN_10437a964(long param_1,long param_2)

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



/* Entry: 10437a970; end: 10437a97f; -[SCMusicApplicationData trackId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10437a970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072048);
}



/* Entry: 10437a980; end: 10437a98f; -[SCMusicApplicationData startOffsetMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10437a980(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072050);
}



/* Entry: 10437a990; end: 10437a99f; -[SCMusicApplicationData sourcePageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10437a990(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113072058);
}



/* Entry: 10437a9a0; end: 10437a9af; -[SCMusicApplicationData trackType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10437a9a0(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113072060);
}



/* Entry: 10437a9b0; end: 10437aac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437a9b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072048) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_113072050) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113072058) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_113072060) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437aac8; end: 10437ab53; -[SCMusicApplicationData initWithTrackId:startOffsetMs:sourcePageType:trackType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437aac8(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113072048) = param_3;
  *(undefined4 *)(param_1 + _DAT_113072050) = param_4;
  *(undefined8 *)(param_1 + _DAT_113072058) = param_5;
  *(undefined4 *)(param_1 + _DAT_113072060) = param_6;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437ab54; end: 10437ab57; -[SCMusicApplicationData copyWithZone:] */

void FUN_10437ab54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10437ab58; end: 10437abab;  */

void FUN_10437ab58(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10437abac; end: 10437abbf;  */

void FUN_10437abac(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110760ad8;
  if (lRam0000000113072090 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113072090 = param_1;
  }
  return;
}



/* Entry: 10437abc0; end: 10437ac03;  */

void FUN_10437abc0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10437ac04; end: 10437aca7; -[SingleLensFeatureScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437ac04(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113072098));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130720a0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130720a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130720b0));
  return;
}



/* Entry: 10437aca8; end: 10437ad0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437aca8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10437aec8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130720c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10437ad10; end: 10437ad5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437ad10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130720c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437ad5c; end: 10437ae4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10437ad5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  FUN_10437ae50();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113072098) = param_1;
  *(undefined8 *)(lVar3 + _DAT_1130720a0) = param_2;
  *(undefined8 *)(lVar3 + _DAT_1130720a8) = param_3;
  *(undefined8 *)(lVar3 + _DAT_1130720b0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  _swift_retain(param_1);
  _swift_unknownObjectRetain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  plVar4 = &lStack_50;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_68[0] = plVar4;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  _swift_release(uStack_58);
  _swift_unknownObjectRelease(aplStack_68[0]);
  return plVar4;
}



/* Entry: 10437ae50; end: 10437ae6f;  */

void FUN_10437ae50(void)

{
  _objc_opt_self(&PTR_PTR_1129a3f10);
  return;
}



/* Entry: 10437ae70; end: 10437ae73;  */

void FUN_10437ae70(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10437ae74; end: 10437aea7;  */

void FUN_10437ae74(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10437aea8; end: 10437aeb7;  */

undefined1  [16] FUN_10437aea8(void)

{
  return ZEXT816(0x110760bd8);
}



/* Entry: 10437aeb8; end: 10437aec7; -[_TtC22SingleLensFeatureScope35SingleLensFeatureScopeSaberServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437aeb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130720c0));
  return;
}



/* Entry: 10437aec8; end: 10437aee7;  */

void FUN_10437aec8(void)

{
  _objc_opt_self(&PTR_PTR_1129a3fe8);
  return;
}



/* Entry: 10437aee8; end: 10437aeeb;  */

void FUN_10437aee8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10437aeec; end: 10437aef7; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope address] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437aeec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072118);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072118))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10437aef8; end: 10437af03; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope senderID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437aef8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072120);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072120))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10437af04; end: 10437af4b;  */

void FUN_10437af04(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10437af4c; end: 10437af93; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope lifecycleDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437af4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113072128;
  _swift_beginAccess(param_1 + _DAT_113072128,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10437af94; end: 10437afeb; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope setLifecycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437af94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113072128;
  _swift_beginAccess(param_1 + _DAT_113072128,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10437afec; end: 10437b0bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10437afec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  _objc_allocWithZone();
  lVar2 = _DAT_113072128;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113072128,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072118);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113072120);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_5);
  puVar3 = auStack_78;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  _swift_unknownObjectRelease(param_5);
  return puVar3;
}



/* Entry: 10437b0bc; end: 10437b193; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope initWithAddress:senderID:lifecycleDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b0bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar2 = _DAT_113072128;
  _swift_unknownObjectWeakInit(param_1 + _DAT_113072128,0);
  puVar1 = (undefined8 *)(param_1 + _DAT_113072118);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113072120);
  *puVar1 = param_4;
  puVar1[1] = uVar4;
  _swift_beginAccess(param_1 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar2,param_5);
  lStack_78 = param_1;
  lStack_70 = lVar3;
  _objc_msgSendSuper2(&lStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437b194; end: 10437b1f3; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope init] */

void FUN_10437b194(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMapAddressSelectionScope.SCMapAddressSelectionScope",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10437b1c0);
  (*pcVar1)();
}



/* Entry: 10437b1f4; end: 10437b267; -[_TtC26SCMapAddressSelectionScope26SCMapAddressSelectionScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10437b1f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072118 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113072120 + 8));
  param_1 = param_1 + _DAT_113072128;
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Entry: 10437b268; end: 10437b287;  */

void FUN_10437b268(void)

{
  _objc_opt_self(&PTR_PTR_1129a40a8);
  return;
}



/* Entry: 10437b288; end: 10437b2d3;  */

void FUN_10437b288(undefined8 param_1)

{
  func_0x0001000285a8(0x113072158,&UNK_10dcf1320);
  _swift_retain(param_1);
  func_0x0001000823a8(FUN_10437b340,param_1);
  return;
}



/* Entry: 10437b2d4; end: 10437b33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b2d4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010437b5f0();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113072160) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10437b340; end: 10437b347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b340(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010437b5f0();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072160) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10437b348; end: 10437b393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10437b348(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113072160) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10437b394; end: 10437b4c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10437b394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  FUN_10437b268();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_113072128;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113072128,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_113072118);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113072120);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_5);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 10437b4c4; end: 10437b56f; -[_TtC26SCMapAddressSelectionScope34SCMapAddressSelectionScopeServices buildWithAddress:senderID:lifecycleDelegate:] */

void FUN_10437b4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  FUN_10437b394(param_3,param_2,param_4,uVar1,param_5);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


